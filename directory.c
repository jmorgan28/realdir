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
  printf("Statistics for directory:\n");
  printf("Total Directory Size: ");
  int total = 0;


  //listing total size
  DIR *dir = opendir(".");
  struct dirent *store = readdir(dir);
  
  while(store!= NULL){
    int fd = open( store->d_name , O_RDWR );
    struct stat *buff = (struct stat *)malloc(sizeof(struct stat));
    fstat( fd , buff );
    total += buff->st_size;
    close(fd);
    free(buff);
    store = readdir(dir);
  }
  closedir(dir);

  printf("%d\n", total);
  
  // listing directories


  dir = opendir(".");
  store = readdir(dir);

  printf("Directories:\n");
  
  while(store!= NULL){
    if(store->d_type == 4){
      printf("\t%s\n", store->d_name);
    }
    store = readdir(dir);
  }
  closedir(dir);


  // listing regular files

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
