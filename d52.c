 #include <stdio.h>
#include<stdlib.h>
struct bank
{
   int acno;
   char name[30];
   float bal;
};
 void main(){
  FILE *fp;
 fp = fopen("d52.bin","wb");
 struct bank b1;
 {
  printf("enter acno:");
  scanf("%d",&b1.acno);
  printf("enter ur name:");
  scanf("%s",b1.name);
  printf("enter balence:");
  scanf("%f",&b1.bal);
  
 fwrite(&b1,sizeof(b1),1,fp);
  fclose(fp);
}
}
  
