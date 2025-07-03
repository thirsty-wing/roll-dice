#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_roll(char ** die){
  size_t faces_count = sizeof(die) / sizeof(die[0]);
  int index = rand() % faces_count;

  printf("%s ", die[index]);
}

int main() {
  srand(time(0)); // seed random number generator

  char * die_1[] = {
    "Alice",
    "Bob",
    "Carol",
  };

  print_roll(die_1);

  puts("");

  return 0;
}
