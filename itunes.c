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
  printf("....'Feel It Still' by Portugal the Man....\n");
  struct song* song1 = (struct song *)malloc(sizeof(struct song));
  strcpy(song1->name, "Feel It Still");
  strcpy(song1->artist, "Portugal the Man");

  printf("....'Houdini' by Foster the People....\n");
  struct song* song2 = (struct song*)malloc(sizeof(struct song));
  strcpy(song2->name, "Houdini");
  strcpy(song2->artist, "Foster the People");

  printf("....'I Would Do Anything For You' by Foster the People....\n");
  struct song* song3 = (struct song*)malloc(sizeof(struct song));
  strcpy(song3->name, "I Would Do Anything For You");
  strcpy(song3->artist, "Foster the People");

  //--
  //songptr = song1;

  printf("\n--------Adding Songs--------\n\n");
  //printf("Hello?\n");
  songlist  = insert_order(songlist, song1);
  songlist  = insert_order(songlist, song2);
  songlist  = insert_order(songlist, song3);
  // playlist = insert_order(playlist, song3);
  //print_list(playlist);
  print_list(songlist);
  return 0;
}
