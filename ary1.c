 #include <stdio.h>
  void main()
  {
    int N;
    int a[N];
    int n,i=0;
    printf("enter N value:");
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
      {
       printf("enter a element");
       scanf("%d",&a[i]);
      }
    printf("enter the index of the deleting element:");
    scanf("%d",&n);
   for(i=n;i<N;i++)
      {
        a[n]=a[n+1];
      }
    for(i=0;i<(N-1);i++)
     {
      printf("%2d",a[i]);  
     }
   
}
       
        
