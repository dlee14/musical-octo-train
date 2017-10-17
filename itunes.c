#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct song* insert(struct song* list, struct song*);
void print_list(struct song* list);
struct song* find_artist(char artist[]);
struct song* find_song(char song[]);
struct song* find_first_song(char artist[]);
void add_song(char name[], char artist[]);

struct song {
  char name[256];
  char artist[256];
  struct song* next;
};

int index_of_a(char name[]) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  strstr(alphabet, tolower(name[0]));
  return strstr(alphabet, tolower(name[0]));
}

int main() {
  printf("%s\n", index_of_a("d"));
  return 0;
}

// struct song* insert_front(struct song* list, struct song* song) {
//   struct song* new = (struct song *)malloc(sizeof(struct song));
//   new->song = song;
//   new->next = list;
//   return new;
// }
