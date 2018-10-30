#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  struct stat *buf;
  stat("makefile",buf);
  printf("File size: %d\n", );
  printf("File permissions: %d\n", );
  printf("Time of last access: %d\n", );

  return 0;
}
