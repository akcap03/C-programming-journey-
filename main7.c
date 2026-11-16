// if statement 
// Program to check the age of a person 

#include <stdio.h>

int main () {
    int age = 0;
    printf("Enter you age :\n");
    scanf("%d", &age);

    if (age>= 60) {
        printf("You are a senior citizen\n");
    }
    else if (age>= 18) {
        printf("You are an adult\n ");
    }
    else if (age < 18) {
        printf("You are a minor\n");
    }
    else if (age ==0) {
        printf("You just got born \n");
    
    }




    return 0;
}