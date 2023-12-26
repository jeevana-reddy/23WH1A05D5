   #include <stdio.h>
   int sum(int A[100]);
   int sum(int A[100])
   {  int result1;
      int j,sum=0,n;
    printf("enter no.of elements:");
    scanf("%d",&n);
     for(j=0;j<n;j++)
     {
      sum= sum+A[j];
     }
    result1=sum;
    return result1;
   }
     
 void main()
{
   int e;
   int j=0;
  int result;
   int A[100];
    printf("enter number of elements in the array:");
    scanf("%d",&e);
   for(j=0;j<e;j++)
     {
       printf("enter %d th element:", j+1);
       scanf("%d",&A[j]);
      }
      result=sum(A);
     printf("%d",result);
  }
     
     
