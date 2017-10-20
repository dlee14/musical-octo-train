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
    printf("bug\n");
    list = list->next;
  }
  printf("NULL\n");
}
