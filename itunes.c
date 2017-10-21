#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
//#include "basic.c"
//#include "node.c"


int main() {
  printf("--------Creating Initial Playlist--------\n\n");
  //27 because last one needs to be null
  struct song* songlib [27] = {0};

  print_lib(songlib);
  printf("\n--------Adding Songs--------\n\n");
  insert_order(songlib, "Feel It Still", "Portugal the Man");
  insert_order(songlib, "Houdini", "Foster the People");
  insert_order(songlib, "I Would Do Anything For You", "Foster the People");
  insert_order(songlib, "Under Cover of Darkness", "The Strokes");
  insert_order(songlib, "Is This It", "The Strokes");
  insert_order(songlib, "Countdown", "Beyonce");

  print_lib(songlib);

  printf("\n\nFinding 'The Strokes'\n\n");
  find_artist(songlib, "The Strokes");
  print_lib(songlib);
  return 0;
}
