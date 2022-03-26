#include <stdio.h>

int main() {
   FILE *fp;
   fp=fopen("C:/Users/USER/Documents/phitron/phitron/hello.txt","r");
   if(fp==NULL){
       printf("file not opened\n");
   }else{
       printf("file is present\n");
   }
   
   
   
   return 0;
}