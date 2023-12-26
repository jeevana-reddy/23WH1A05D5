#include <stdio.h>
long int power(int,int);
long int power(int b,int p)
{
	int x=b;
	int y=p;
    	long int pwr1;
    	if(y==0)
	{
   		return 1;
	}
  	else
   	{
        	pwr1=(x*power(x,y-1));       
	        return pwr1;
        }
}       
void main()
{
	int b,p;
   	int result;
  	long int pwr;
   	printf("enter any number:");
   	scanf("%d",&b);
   	printf("enter the power:");
   	scanf("%d",&p);
	pwr=power(b,p);
	printf("%ld",pwr);
} 
