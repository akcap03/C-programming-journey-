
// Small text chat programto understand the if statement 
// if statement 


#include <stdio.h>
#include <string.h>


int main () {
   char name[50] = "";

   printf("Enter you name :\n");
   fgets(name , sizeof(name), stdin);
   name[strlen(name) - 1 ] = '\0';
   
   if(strlen(name) == 0 ){

    printf("You did not enter your name \n");
   }
   else {

    printf ("Hello %s , How can i help you today ? \n", name );
   }
    



    return 0;
}