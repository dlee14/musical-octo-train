#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

  //fiding the first occurence of the lowercase of the first character
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

struct song* insert_front(struct song* front, struct song* song) {
  struct song* new = (struct song *)malloc(sizeof(struct song));
  new->next = front;
  return new;
}

// struct song* insert_order(struct song* front, struct song* song) {
//   struct song* new = (struct song *)malloc(sizeof(struct song));
//   struct song* order = (struct song *)malloc(sizeof(struct song));
//   while (strcmp(song->artist, order->artist) > 0) {
//     printf("%d\n", strcmp(song->artist, order->artist));
//     order = front->next;
//   }
//   new->next = front;
//   printf("executed successfully/n");
//   return new;
// }

int main() {
  struct song* test1 = (struct song *)malloc(sizeof(struct song));
  strcpy(test1->name, "Sorry");
  strcpy(test1->artist, "Justin Bieber");
  struct song* test2 = (struct song *)malloc(sizeof(struct song));
  strcpy(test2->name, "rockstar");
  strcpy(test2->artist, "Post Malone");
  printf("%d\n", index_of("def"));
  print_list(insert_front(test1, test2));
  return 0;
}
