  #include<stdio.h> 
  #include<stdlib.h>
 void main()
 {
  char ch;
  FILE *fp1=fopen("d51.txt","r");
  FILE *fp2=fopen("d52.txt","r");
  FILE *fp3=fopen("d53.txt","w");
   
 while(ch=fgetc(fp1)!=EOF)
  {
     fprintf(fp3,"%c",ch);
  }
while(ch=fgetc(fp2)!=EOF)
  {
    fprintf(fp3,"%c",ch);
  }

  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
}
