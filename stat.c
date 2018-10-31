#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

int main(){
  struct stat *buf = malloc(sizeof(struct stat *));
  stat("test.txt", buf);
  printf("File size: %lld\n", buf->st_size);
  printf("Mode (permissions): %d\n", buf->st_mode);
  printf("Time of last access: %s\n", ctime(&(buf->st_atime)));

  free(buf);
  return 0;
}
