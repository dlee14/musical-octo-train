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
