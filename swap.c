   #include <stdio.h>
   void main()
 {
   int a,b,c;
   printf("enter the a,b values");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
  printf("a=%d\nb=%d",a,b);
 }
