#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  struct stat *buf;
  stat("makefile", buf);
  printf("File size: %d\n", buf->st_size);
  printf("File permissions: %d\n", buf->st_mode);
  printf("Time of last access: %d\n", buf->st_atim);

  return 0;
}
