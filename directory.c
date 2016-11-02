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
  DIR *dir = opendir(".");
  char *str = "";
  while(str != NULL){
    //temp->name = readdir(dir)->d_name;
    //str = temp->name;
     temp->next = (struct files *) malloc(sizeof(struct files));
     temp = temp->next;
  }

  //while ( bin ) {
  // bin = bin->next;
  //free(temp);
  //temp = bin;    
  //}
  //bin = NULL;

    //freeeee*/
  return 0;

}
