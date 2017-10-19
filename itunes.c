#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct song song_list[26];

struct song {
  char name[256];
  char artist[256];
  struct song* next;
};

void print_list(struct song* list);
struct song* find_artist(char artist[]);
struct song* find_song(char song[]);
struct song* find_first_song(char artist[]);
void add_song(char name[], char artist[]);

int index_of(char song_name[]) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

  //finding the first occurence of the lowercase of the first character
  char *ptr = strchr(alphabet, tolower(song_name[0]));

  //find the address difference
  int index = ptr - alphabet;
  return index;
}

void print_list(struct song* list) {
  while (list) {
    printf("%s: %s\n", list->artist, list->name);
    list = list->next;
  }
  printf("NULL\n");
}

struct song* insert_front(struct song* curr_list, struct song* song) {
  song->next = curr_list;
  return song;
}

struct song* insert_order(struct song* curr_list, struct song* song) {
  int ind = index_of(song->name[0]);
  struct song* curr_song = (struct song *)malloc(sizeof(struct song));
   while (!curr_song && strcmp(song->artist, order->artist) < 0) {
     //printf("entered loop\n");
     //printf("%d\n", strcmp(song->artist, order->artist));
     curr_song = curr_list->next;
     //printf("Didn't eff up yet\n");
   }
   song->next = curr_list;
   return song;
 }

int main() {
  struct song* song1 = (struct song *)malloc(sizeof(struct song));
  strcpy(song1->name, "Feel It Still");
  strcpy(song1->artist, "Portugal the Man");
  struct song* song2 = (struct song *)malloc(sizeof(struct song));
  strcpy(song2->name, "Houdini");
  strcpy(song2->artist, "Foster the People");
  struct song* song3 = (struct song *)malloc(sizeof(struct song));
  strcpy(song3->name, "I Would Do Anything For You");
  strcpy(song3->artist, "Foster the People");
  //print_list(song1);
  struct song* playlist = insert_order(song1, song2);
  playlist = insert_order(playlist, song3);
  print_list(playlist);
  return 0;
}
