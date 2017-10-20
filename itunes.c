#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "head.h"

//finds the index of a letter in the alphabet
int index_of(char* s) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  
  //finding the first occurence of the lowercase of the first character
  char *ptr = strchr(alphabet, tolower(*s));

  //find the address difference
  int index = ptr - alphabet;
  return index;
}

//prints a linked list
void print_list(struct song* list) {
  while (list) {
    printf("%s: %s\n", list->artist, list->name);
    list = list->next;
  }
  printf("NULL\n");
}

//inserts a song node at the front of a linked list
struct song* insert_front(struct song* curr_list, struct song* song) {
  song->next = curr_list;
  return song;
}

//inserts a song node in the correct alphabetical order
struct song* insert_order(struct song* songs, struct song* new_song) {  
  //int ind = index_of(new_song->name[0]);
  //if(!songlist->next
  struct song* curr_song = (struct song *)malloc(sizeof(struct song*));
  curr_song = songs;
  //printf("Que pasa\n");
  while (curr_song && strcmp(new_song->artist, curr_song->artist) < 0) {;
    //ignore
    //printf("%d\n", *curr_song->name); //segfault here 
    //printf("%d\n", *curr_song->artist); //segfault here 
    //printf("%d\n", *curr_song->next); //segfault here 

    curr_song = curr_song->next;
  }
  //insert, keep track of nodes in front and behind
  struct song *p = curr_song->next;
  curr_song->next =  new_song;
  new_song->next = p;
  songs = curr_song;
  return songs;
}


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
