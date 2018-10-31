#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>

int main(){
  struct stat *buf = malloc(sizeof(struct stat));
  printf("First ver.\n");
  stat("test.txt", buf);
  printf("File size: %lld\n", buf->st_size);
  printf("Mode (permissions): %d\n", buf->st_mode);
  printf("Time of last access: %s\n", ctime(&(buf->st_atime)));

  printf("Second ver.\n");
  int a = buf->st_size;
  double b = a/1000.;
  double c = b/1000.;
  double d = c/1000.;
  char sz[100];
  sprintf(sz, "File size: %d B = %e KB = %e MB = %e GB", a, b, c, d);
  printf("%s\n", sz);

  char *x;
  strmode(buf->st_mode, x);
  printf("Mode (permissions): %s\n", x);
  printf("Time of last access: %s\n", ctime(&(buf->st_atime)));

  free(buf);
  return 0;
}
