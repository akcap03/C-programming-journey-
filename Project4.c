//Compound Interest Calculator

#include <stdio.h>
#include <math.h>

int main () {

    //principal is how much the person is investing (capital)
     double principal = 0.0;
    
    //rate is the interest rate (percentage)
    double rate = 0.0;

    // years 
    int years = 0;
    
    int timescompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");
    printf("Enter the principal (capital) amount: \n");
    scanf("%lf", &principal);
     
    printf("Enter the interest rate (pourcentage): \n");
    scanf("%lf", &rate);
    rate = rate / 100; // convert percentage to decimal

    printf("Enter the number of years (Y): \n");
    scanf("%d" , &years);

    printf("Enter the number of times the interest rate compounded per year :  \n");
    scanf ("%d" , &timescompounded);

    //formula 
    total = principal * pow((1 + rate / timescompounded), (timescompounded * years));

    printf("The total amount after %d years is : %.2lf$\n", years , total);


    return 0;

}
