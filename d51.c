#include <stdio.h>
 #include<stdlib.h>
 void main()
 {
     int id;
     char name[50];
     float sal;
     FILE *fp;
 fp=fopen("d51.txt","w");
 printf("enter u r id:");
  scanf("%d",&id);
  printf("enter ur name:");
  scanf("%s",name);
  printf("enter u r salary:");
  scanf("%f",&sal);
   fprintf(fp,"%d",id);
   fprintf(fp,"%10s",name);
   fprintf(fp,"%10f",sal);
  
 fclose(fp);
  
} 
