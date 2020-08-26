#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define fd_stdin 0

int main(){
  char * arquivo = "pro_bash";
  int fd = open(arquivo, O_RDONLY, 0);
  dup2(fd, fd_stdin);
  char * params[] = {"bash", NULL};
  execvp("bash", params);
  close(fd);
}
