#include <stdio.h>
void australia(){
     printf("Australia\n");

     return;
}
void england(){
     printf("england\n");
     australia();

     return;
}
void indonesia(){
     printf("indonesia\n");
     england();

     return;
}
void india(){
      printf("india\n");
      indonesia();

     return;
}
   
int main(){

     india();

    
return 0;
}