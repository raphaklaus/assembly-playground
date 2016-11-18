#include <stdio.h>

int main() {
  FILE *file;
  char counter;
  char buffer[100];
  file = fopen("sample.txt", "r");
  while (1) {
    counter = fgetc(file);

    if (feof(file)){
      break;
    }

    printf("%c", counter);
  }
  fclose(file);
  return 0;
}
