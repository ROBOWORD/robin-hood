#include "Texture.h"

/* GIMP RGBA C-Source image dump (109.c) */

extern const RawImage FINISH = {
  32, 32, 4,
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377\0\0"
  "\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
  "\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377"
  "\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0"
  "\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377"
  "\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\377\377\0\377\377\377\0\377\377"
  "\377\0\377\377\377\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\377\377\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\0\0\0\377\0\0\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\377"
  "\377\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377"
  "\0\0\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\377"
  "\377\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\377\377\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\377\377\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\377\377\0\377\377\377\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\0\0\0\377\0\0\0\377\200@\0\377\200@\0\377\377\377\0\377\377\377\0"
  "\377\377\377\0\377\377\377\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377"
  "\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\377\200@\0\377\200@\0\377\377"
  "\377\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\377\377\0\377\200"
  "@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200"
  "@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\377\377"
  "\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@"
  "\0\377\377\377\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\377\200@\0\377"
  "\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\377"
  "\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\377"
  "\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200"
  "@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\377"
  "\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200"
  "@\0\377\377\377\0\377\377\377\0\377\377\377\0\377\200@\0\377\200@\0\377\377"
  "\377\0\377\200@\0\377\200@\0\377\377\377\0\377\200@\0\377\200@\0\377\0\0"
  "\0\377\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\377\0\0\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200"
  "@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377"
  "\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0\377\200@\0"
  "\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377"
  "\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0"
  "\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0"
  "\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200"
  "@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377"
  "\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0"
  "\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0"
  "\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200"
  "@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377"
  "\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0"
  "\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0"
  "\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\377\200@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200"
  "@\0\377\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377"
  "\200@\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0"
  "\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\200@\0\377\200@\0\377\0"
  "\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",
};

