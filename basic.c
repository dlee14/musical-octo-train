#include "time.h"

//finds the index of a letter in the alphabet
int index_of(char* s) {
  /*
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

  //finding the first occurence of the lowercase of the first character
  char *ptr = strchr(alphabet, tolower(*s));
  //find the address difference
  int index = ptr - alphabet;
  */
  s = tolower(s);
  return s[0] - 'a';
}

//prints a linked list
void print_lib(struct song* lib[]) {
  int i = 0;
  struct song* list;
  while (lib[i]) {
    list = lib[i];
    while(list) {
      printf("%s: %s\n", list->artist, list->name);
      //printf("bug\n");
      list = list->next;
    }
    i ++;
  }
  printf("NULL\n");
}

void print_library(struct song*[] library) {
  int i = 0;
  struct song* current = (struct song*)malloc(sizeof(struct song));
  while (library) {
    current = library[i];
    while (current) {
      printf("%s: %s\n", library[i]->artist, library[i]->name);
      //printf("bug\n");
      current = current->next;
    }
    i++;
  }
}

void print_shuffle(struct song*[] library) {
  struct song* current = (struct song*)malloc(sizeof(struct song));
  srand(time(NULL));
  int i = rand() % 26;
  while (library) {
    //chooses random alphabet list
    current = library[i];
    while (current) {
      //find a random index of the selected alphabet linked list
      int index = rand() % list_length(current);
      printf("%s: %s\n", get_node(current, index)->artist, get_node(current, index)->name;)
    }
    i = random
  }
}

int list_length(struct song* list) {
  int count = 0;
  while (list) {
    count++;
    list = list->next;
  }
  return count;
}
