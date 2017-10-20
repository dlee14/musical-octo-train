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

  printf("....'Under Cover of Darkness' by The Strokes....\n");
  struct song* song4 = (struct song*)malloc(sizeof(struct song));
  strcpy(song4->name, "Under Cover of Darkness");
  strcpy(song4->artist, "The Strokes");

  printf("....'1979' by The Smashing Pumpkins....\n");
  struct song* song5 = (struct song*)malloc(sizeof(struct song));
  strcpy(song5->name, "1979");
  strcpy(song5->artist, "The Smashing Pumpkins");

  printf("....'Is This It' by The Strokes....\n");
  struct song* song6 = (struct song*)malloc(sizeof(struct song));
  strcpy(song6->name, "Is This It");
  strcpy(song6->artist, "The Strokes");


  //--
  //songptr = song1;

  printf("\n--------Adding Songs--------\n\n");
  //printf("Hello?\n");
  struct song* all[] = {song1,song2, song3, song4, song4, song5, song6, 0};
  songlist  = insert_songs(songlist, all);
  /*
  songlist  = insert_order(songlist, song2);
  songlist  = insert_order(songlist, song3);
  songlist  = insert_order(songlist, song4);
  songlist  = insert_order(songlist, song5);
  songlist  = insert_order(songlist, song6);
  */
  // playlist = insert_order(playlist, song3);
  //print_list(playlist);
  print_list(songlist);

  printf("\n\nFinding 'The Strokes'\n\n");
  //print_list(find_artist(songlist, "The Strokes"));
  return 0;
}
