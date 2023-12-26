  #include <stdio.h>
  void main()
 {
  int id;
  float S,GS,ta,da,hra;
  printf("enter id");
  scanf("%d",&id);
  printf("enter salary");
  scanf("%f",&S);
  ta=S*0.1;
  da=S*0.2;
  hra=S*0.3; 
  printf("ta=%f\nda=%f\nhra=%f",ta,da,hra);
  GS=ta+da+hra+S;
  printf("grass salary=%f",GS);
 }
