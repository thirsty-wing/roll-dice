#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  const char * faces[] = {
    "Alice",
    "Bob",
    "Carol",
  };

  srand(time(0)); // seed random number generator

  size_t faces_count = sizeof(faces) / sizeof(faces[0]);
  int index = rand() % faces_count;

  puts(faces[index]);

  return 0;
}
