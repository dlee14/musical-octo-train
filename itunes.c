#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
//#include "basic.c"
//#include "node.c"


int main() {
  printf("--------Initializing Song Library--------\n\n");
  struct song* songlib [26] = {0};

  print_lib(songlib);
  printf("\n--------Adding Songs--------\n\n");
  insert_order(songlib , "Feel It Still", "Portugal the Man");
  insert_order(songlib , "Houdini", "Foster the People");
  insert_order(songlib, "I Would Do Anything For You", "Foster the People");
  insert_order(songlib, "Under Cover of Darkness", "The Strokes");
  insert_order(songlib, "Is This It", "The Strokes");
  insert_order(songlib, "Helena Beat", "Foster the People");
  insert_order(songlib, "Countdown", "Beyonce");
  insert_order(songlib, "Last Nite", "The Strokes");
  insert_order(songlib, "1979", "The Smashing Pumpkins");
  //print_lib(songlib);
  insert_order(songlib, "Pink Lemonade", "The Wombats");

  print_lib(songlib);

  printf("\n\nFinding 'The Strokes'\n\n");
  print_list(find_artist(songlib, "The Strokes"));

  printf("\n\nFinding songs ONLY by 'Foster the People'\n\n");
  print_artist(songlib, "Foster the People");
  
  return 0;
}
