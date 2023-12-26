#include <stdio.h>
 void main()
   {
     int N;
     int a[N],i=0,n,j;
     int b[N+1];
     printf("enter N value:");
     scanf("%d",&N);
     for(i=0;i<N;i++)
      {
         printf("enter a element:");
         scanf("%d",&a[i]);
      }
 
   for(i=0;i<N;i++)
     {
      b[i]=a[i];
     }
     printf("enter the index after in which u want to insert the element:");
    scanf("%d",&n);
     for(i=n+2;i<=N+1;i++)
       {
         b[i]=a[i-1];
       }
    printf("enter the element to insert:");
    scanf("%d",&j);
    b[n+1]=j;
  for(i=0;i<N+1;i++)
    {
       printf("2%d",b[i]);
    }
  }
