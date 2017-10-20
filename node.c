//inserts a song node at the front of a linked list
struct song* insert_front(struct song* list, char* name, char* artist) {
  return create_node(list, name, artist);
}

//inserts a song node in the correct alphabetical order
struct song* insert_order(struct song* list, char* name, char* artist) {  
  struct song *first = list; //pointer to beginning of list
  if (!list || (strcmp(artist, list->artist) < 0) || (strcmp(artist, list->artist) == 0 && strcmp(name, list->name) <= 0))
    return create_node(list, name, artist);
  while (list->next && strcmp(artist, list->next->artist) > 0)
    list = list->next;
  while (list->next && strcmp(name, list->next->name) > 0)
    list = list->next;
  list->next = create_node(list->next, name, artist);
  return first;
}

struct song* create_node(struct song* next, char* name, char* artist)
{
  struct song* ret = (struct song*)malloc(sizeof(struct song));
  strcpy(ret->name, name);
  strcpy(ret->artist, artist);
  ret->next = next;
  return ret;
}


//Matches song title & artist
struct song* find(struct song*playlist, char *song_name, char *artist){
  while (playlist){
    if (strcmp(song_name, playlist->name) == 0 && strcmp(artist, playlist->artist) == 0)
      return playlist;
    playlist = playlist->next;
  }
  return 0;
}

//Matches an artist
struct song* find_artist(struct song*playlist, char *artist){
  while (playlist){
    if (strcmp(artist, playlist->artist) == 0)
      return playlist;
    playlist = playlist->next;
  }
  return playlist;
}

