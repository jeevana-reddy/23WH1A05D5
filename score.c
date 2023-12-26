    #include <stdio.h>
     
    void main()
 {
   int score;
   printf("enter your  score");
   scanf("%d",&score);
   if(score>=60)
     {
       printf("pass");
     }
   else if(score<60)
     {
       printf("fail");
     }
    else
     {
       printf("invalid score");
       }
      
   }
