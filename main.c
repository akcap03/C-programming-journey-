#include <stdio.h>
#include <stdbool.h>
int main (void)
{
    /*  learn c programming language */
    //Variables practice
    //boolean data type practice
    
    int age = 23;
    int year = 2003;
    int quantity = 11;
    float price = 12.5;
    float temperature = 32.6;
    double pi = 3.14159265358979323846;
    char grade = 'A';
    char name [] = "Jane street quant fund";
    bool isonline = true;
    bool islogin = false;

    printf ("i am %d years old\n",age);
    printf ("i was born in %d\n",year);
    printf ("you have ordered %d x items\n" , quantity);
    printf("the price of the item is %.1f$\n" , price );
    printf("the temperature in virginia is %.1f degree celsius\n", temperature);
    printf("the value of pi in math is %.30f\n", pi);
    printf ("my grade in the class is %c\n", grade);
    printf ("%s returned in 2025 39.9b $\n", name );
    //boolean data type practice

    printf ("is the quant fund returned 40b ? %d\n", isonline);

    //another practice of boolean data type
    if(isonline){
        printf("the quant firm available");
    }
    else{
        printf("the quant firm not availabe");
    }

    return 0;
}
