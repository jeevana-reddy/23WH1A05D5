   #include <stdio.h>
   void main()
  {
    int id;
    float S,AS,DS;
    printf("enter the id");
    scanf("%d",&id);
    printf("enter the salary");
    scanf("%f",&S);
    AS=12*S;
    printf("anual salary=%f",AS);
    DS= (S/30);
    printf("day salary=%f",DS);
    }
