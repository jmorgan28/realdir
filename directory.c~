#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>





int main(){
  DIR *this = opendir(".");
  char *rem = "bananas";
  while(rem != NULL){
    rem = readdir(this)->d_name;
    printf("%s\n", rem);
  }
  return 0;

}
