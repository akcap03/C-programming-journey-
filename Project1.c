// Shopping cart program 
#include <stdio.h>

int main (){

  char item[50]="";
  float price = 0.0f;
  float quantity = 0.00 ;
  char currency = '$';
  float total = 0.0f;

  printf("What item would you like to buy ? :");
  fgets(item, sizeof(item), stdin );
  

  printf("What is the price for each item ? : ");
  scanf("%f", &price);

  printf ("How many items would you like ? : ");
  scanf("%f", &quantity);

  total = price * quantity;

   printf("your Total is : %.2f %c\n", total , currency );


    return 0;
}