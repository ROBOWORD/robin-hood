#include "LevelDisplay.h"

CLevelDisplay::CLevelDisplay(Vector initial_size) {

	this->display = rgba_sf(initial_size.x, initial_size.y);

	RawImage BACKGROUND;
	BACKGROUND.width=1;
	BACKGROUND.height=256;
	BACKGROUND.bytes_per_pixel = 4;
	char* data = new char[256*4];
	for (int i=0; i<BACKGROUND.height; i++) {
		for (int j=0; j<BACKGROUND.width; j++) {
			data[(i*BACKGROUND.width + j)*4] = 0;
			data[(i*BACKGROUND.width + j)*4+1] = (255*i)/(BACKGROUND.height-1);
			data[(i*BACKGROUND.width + j)*4+2] = 255;
			data[(i*BACKGROUND.width + j)*4+3] = 255;
		}
	}
	BACKGROUND.pixel_data = data;
	background = new CTexture(BACKGROUND);
	delete data;

	x_offset = 0; // scrolling
	y_offset = 0;  // scrolling
	selected_type = -1; // no selection
	selected_object = 0; // no selection
}

void CLevelDisplay::change_size(Vector size) {
	if (this->display != 0) {
		SDL_FreeSurface(this->display);
	}
	this->display = rgba_sf(size.x, size.y);
}

extern const RawImage ROBIN_RIGHT;
extern const RawImage GRASS;
extern const RawImage GRASS_LEFT;
extern const RawImage GRASS_RIGHT;
extern const RawImage GRASS_LEFT_RIGHT;
extern const RawImage FINISH;

void CLevelDisplay::draw(SDL_Surface* screen, Vector position, CMouse* mouse) {

	if (screen == 0 || this->display == 0 || this->background == 0) {
		return;
	}

	SDL_Rect dsp = {0,0,this->display->w,this->display->h};

	SDL_FillRect(this->display, 0, SDL_MapRGB(this->display->format,0x7F,0x7F,0x7F));
	this->background->draw_scaled(dsp,this->display,true);
	
	CTexture robin(ROBIN_RIGHT);
	robin.draw(this->level.get_start_pos().x,this->level.get_start_pos().y,this->display);
	CTexture grass(GRASS);
	CTexture grass_r(GRASS_RIGHT);
	CTexture grass_l(GRASS_LEFT);
	CTexture grass_lr(GRASS_LEFT_RIGHT);
	
	CLevel::Landscape* it = this->level.get_landscape_list()->first();
	
	while (it != 0) {
	
		switch (it->type) {
			case 0:
				// GRASS
				if (it->left == 0 && it->x != 0) {
					if (it->right == 0 && it->x + grass.get_width() != this->level.get_width()) {
						grass_lr.draw(it->x, it->y,this->display);
					}else{
						grass_l.draw(it->x, it->y,this->display);
					}
				}else{
					if (it->right == 0 && it->x + grass.get_width() != this->level.get_width()) {
						grass_r.draw(it->x, it->y,this->display);
					}else{
						grass.draw(it->x, it->y,this->display);
					}
				}
				break;
			case 1:
				// SOLID
				break;
			default:
				// UNKNOWN
				break;
		}
	
		it = this->level.get_landscape_list()->next();
	}
	
	CTexture finish(FINISH);
	finish.draw(this->level.get_finish_pos().x,this->level.get_finish_pos().y,this->display);
	
	if (mouse != 0) {
		Vector mp = mouse->get_coordinates();
		mp.x -= position.x;
		mp.y -= position.y;
		//printf("mouse: %d, %d\n",mp.x + grass.get_width()/2, mp.y + grass.get_height()/2);
		if (mp.x >= 0 && mp.x < this->display->w && mp.y >= 0 && mp.y < this->display->h) {
			// draw mouse!
			switch (mouse->get_type()) {
				case CMouse::GRASS:
					grass.draw(mp.x - grass.get_width()/2, mp.y - grass.get_height()/2, this->display, false, true);
					break;
				default:
					break;
			}
		}
	}
	
	SDL_Rect pos = {position.x,position.y,this->display->w,this->display->h};
	SDL_BlitSurface(this->display, 0, screen, &pos);
	
}

void CLevelDisplay::click(CMouse* mouse, Vector lvldisplay_position) {
}

CLevelDisplay::~CLevelDisplay() {
	// TODO: tidy up
	if (this->display != 0) {
		SDL_FreeSurface(this->display);
	}
}

