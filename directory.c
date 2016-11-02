#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>

typedef struct files{ 
  char *name;
  int binary;
  struct files *next;
} files;



int main(){
  struct files *temp =  (struct files *) malloc(sizeof(struct files));
  struct files *bin = temp;
  struct files *bin1 = temp;
  DIR *dir = opendir(".");
  struct dirent *store = readdir(dir);
  int i = 1;




  while(store!= NULL){
    temp->name = store->d_name;
    printf("%s\n", temp->name);
    //str = readdir(dir)->d_name;
    temp->next = (struct files *) malloc(sizeof(struct files));
    temp = temp->next;
    store = readdir(dir);
  }








  
  while ( bin ) {
    bin = bin->next;
    free(bin1);
    bin1 = bin;    
  }
  bin = NULL;
  printf("tjat\n");
    //close 
  return 0;

}
