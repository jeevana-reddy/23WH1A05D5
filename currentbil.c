  #include <stdio.h>
  void main()
  {
    int mno,PR,CR,NOU;
    float amount;
    printf("enter the meter number");
    scanf("%d",&mno);
    printf("enter the previous and present readings");
    scanf("%d %d",&PR,&CR);
    NOU=CR-PR;
    printf("NOU=%d",NOU);
    if(NOU<100)
      {
        amount=NOU*2;
        printf("amount=%f",amount);
       }
   else if((NOU>=100)&&(NOU<200))
      { 
        amount=NOU*3;
        printf("amount=%f",amount);
       }
   else if((NOU>=200)&&(NOU<300))
       {
         amount=NOU*4;
        printf("amount=%f",amount);
        }
   else if((NOU>=300)&&(NOU<500))
       {
         amount=NOU*5;
         printf("amount=%f",amount);
        }
   else if(NOU>=500)
       {
        amount=NOU*10;
        printf("amount=%f",amount);
       }
   else 
       {
        printf("invalid input");
       }
 }
    
