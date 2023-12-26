 #include <stdio.h>
 void prime(int n);
 void main()
  {
    int n;
    int i=0;
    printf("enter any number:");
   scanf("%d",&n);
   prime(n);
   }
   void prime(int n)
  {
     int i=0;
     int j=0;
     for(i=1;i<n;i++)
     {
       if(n%i==0)
        j++;
     }
    if(j==1)
     printf("It is a prime number.");
   else
     printf("It is not a prime number.");
  } 
