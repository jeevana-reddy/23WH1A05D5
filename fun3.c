 #include <stdio.h>
 void evenodd(int n)
 { 
    if(n%2==0)
    {
     printf("It is a even number.");
    }
   else
    {
      printf("It is a odd number.");
    }
 }
 void main()
{
  int n;
  printf("enter any number:");
  scanf("%d",&n);
   evenodd(n);
 }
