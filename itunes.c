#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
#include "basic.c"
#include "node.c"


int main() {
  printf("--------Creating Initial Playlist--------\n\n");
  struct song* songlist;
  songlist = (struct song *)calloc(1,sizeof(struct song));
  
  printf("\n--------Songs--------\n\n");



  printf("\n--------Adding Songs--------\n\n");
  //printf("Hello?\n");
  struct song* a = insert_front(a, "Feel It Still", "Portugal the Man");
  a = insert_order(a, "Houdini", "Foster the People");
  a = insert_order(a, "I Would Do Anything For You", "Foster the People");
  
  print_list(a);

  printf("\n\nFinding 'Foster the People'\n\n");
  print_list(find_artist(a, "Foster the People"));
  return 0;
}
