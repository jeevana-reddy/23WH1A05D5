 #include <stdio.h>
 #include <stdlib.h>
  void swap(int a,int b)
  {
   int c;
    c=a;
    a=b;
    b=c;
   printf("numbers after swaping:%d %d",a,b);
  }
 void main()
 { 
   int c;
   int a;
   int b;
  printf("enter a,b values:");
  scanf("%d%d",&a,&b);
  swap(a,b);
 }
