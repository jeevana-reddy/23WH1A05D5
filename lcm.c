 #include <stdio.h>
 int main()
 {
   int a,b,hcf;
  int i;
   printf("enter first element:");
   scanf("%d",&a);
   printf("enter second element:");
   scanf("%d",&b);
   printf("HCF values:\n");
    for(i=1;i<=a&&i<=b;i++)
     {
         if(a%i==0 && b%i==0)
             {
                printf("%d\n",i);
             }
     }
      printf("LCM:%d",hcf);
   return 0;
}
