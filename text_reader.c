#include <stdio.h>

int main() {
  FILE *file;
  int counter;
  file = fopen("sample.txt", "r");
  while (1) {
    counter = fgetc(file);

    if (feof(file)){
      break;
    }

    printf("%c", counter);
  }
  return 0;
}
