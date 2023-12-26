  #include <stdio.h>
   void main() 
  {
    int mno, present_reading,previous_reading,no_of_units;
    float price,amount;
    printf("enter meter number");
    scanf("%d",&mno);
    printf("enter the present and previous readings");
    scanf("%d %d",&present_reading,&previous_reading);
    no_of_units=(present_reading)-(previous_reading);
    printf("enter the price");
    scanf("%f",&price);
    amount=no_of_units*price;
    printf("amount=%f",amount);
  }
