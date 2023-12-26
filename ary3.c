#include <stdio.h>

   void main()
{
  int N;
  int a[100],i,count;
  int max,j,index;
  printf("enter N value:");
  scanf("%d",&N);
 for(i=1;i<=N;i++)
  {
    printf("enter a element:");
    scanf("%d",&a[i]);
  }
  max=0;
  index=0;
   for(i=1;i<=N;i++)
   { 
     count=0;
     for(j=1;j<=N;j++)
     {
       if(a[i]==a[j] && i!=j)
        count++;
     }
       if(count>max)
        {
           max=count;
            index=i;
         }
  }
   if(max>0)
       printf("%d is repeated for %d times:",a[index],max+1);
   else
      printf("no longest sub array.");
   }
