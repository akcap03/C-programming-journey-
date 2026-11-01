//Format specifiers
//we can control how data  is displayed or intrepreted

#include <stdio.h>
/*
int main(void) {

    int num1 = 25;
    int num2 = 183;
    int num3 = -1003;
    printf("%-10d\n",num1);
    printf("%10d\n",num2);
    printf("%8d\n",num3);
    return 0;
}
*/

int main(void) {

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.99;

    printf("%.2f\n", price1);
    printf("%f\n", price2 );
    printf("%.10f\n", price3);
    
    return 0;
}
