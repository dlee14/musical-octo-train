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

int index_of(char name[]) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char *ptr = strchr(alphabet, name[0]);
  int index = ptr - alphabet;
  return index;
}

int main() {
  printf("%d\n", index_of("def"));
  return 0;
}

// struct song* insert_front(struct song* list, struct song* song) {
//   struct song* new = (struct song *)malloc(sizeof(struct song));
//   new->song = song;
//   new->next = list;
//   return new;
// }
