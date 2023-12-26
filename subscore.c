   #include <stdio.h>
   void main()
   {
     int a,b,c,d,e,f,T;
     float avg;
   printf("enter the all subject scores");
   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   T=a+b+c+d+e+f;
   avg=(T/6);
   printf("avg=%f",avg);
   if(avg>75)
     {
       printf("distinction");
     }
   else if((avg<75)&&(avg>60))
     {
      printf("1st class");
     }
   else if((avg<60)&&(avg>50))
     {
      printf("2nd class");
     }
   else if((avg<50)&&(avg>40))
      { 
       printf("3rd class");
      }
   else
     {
      printf("fail");
     }
  }
