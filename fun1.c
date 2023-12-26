  #include <stdio.h>
  #include <stdlib.h>
  
  void read(char*s[100],int n)
{
  int i=0;
  printf("enter n value:");
  scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        s[i]=(char*)malloc(20*sizeof(char));
        printf("enter %d string:",i+1);
        gets(s[i]);
       }
}
  void display(char*s[100],int n)
{
  int i=0;
  printf("the entered  strings:");
 for(i=0;i<n;i++)
  {
  puts(*s[i]);
  }
}
 int main()
{
  int i=0;
  int n;
  char*s[100];
  printf("reading the string:");
  void read(char*s[100],int n);
  printf("displaying the string:");
  void display(char*s[100],int n);
return 0;
}
