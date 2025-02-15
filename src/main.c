#include <stdio.h>
#include <string.h>
#include <swv_init.h>

int main(int argc, char *argv[]) {

	if(SWV_Init() < 0) {
    fprintf(stderr, "SWV_Init fail\n");
    return 1;
  }

  char *filename;
  if(argc < 2) {
    fprintf(stderr, "Use: %s: <file>\n", argv[0]);
    return 1;
  }
  strcpy(filename, argv[1]);

  printf("Server started correctly\n");
  printf("Choosing file...\n");

  SWV_Finish();

	return 0;
}
