 #include<stdio.h>
  void largest(int a[100],int n)
  {
    int max;
    int i=0;
    max=a[0];
    for(i=0;i<n;i++)
    {
       if(max<a[i])
        max=a[i];
    }
  printf("The max element is %d.",max);
  }
  
 void main()
  {
    int n;
    int a[100];
    int i=0;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("enter %d element:",i+1);
     scanf("%d",&a[i]);
    }
   largest(a,n);
 }
