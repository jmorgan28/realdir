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
  DIR *dir = opendir(".");
  struct dirent *store = readdir(dir);

  printf("Directories:\n");
  
  while(store!= NULL){
    if(store->d_type == 4){
      printf("\t%s\n", store->d_name);
    }
    store = readdir(dir);
  }
  closedir(dir);


  dir = opendir(".");
  store = readdir(dir);

  printf("Regular files:\n");
  
  while(store!= NULL){
    if(store->d_type == 8){
      printf("\t%s\n", store->d_name);
    }
    store = readdir(dir);
  }
  closedir(dir);
  
  
}
