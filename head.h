struct song {
  char name[256];
  char artist[256];
  struct song* next;
};

void print_list(struct song* list);
struct song* find_artist(struct song* playlist, char* artist);
struct song* find_song(struct song* playlist, char* song);
//struct song* find_first_song(char artist[]);
void add_song(char name[], char artist[]);

