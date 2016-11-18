#include <stdio.h>

int main() {
  FILE *file;
  char buffer[12];

  file = fopen("sample.txt", "rb");
  while(!feof(file)) {
    printf("\nStep\n");
    fread(buffer, 1, (sizeof buffer)-1, file);
    printf("%s", buffer);
  }
  fclose(file);
  return 0;
}
