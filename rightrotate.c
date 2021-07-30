#include <stdio.h>
int main()
{
// right rotate
int num , bitnum ;
     printf ("enter the number= ");
     scanf("%d",&num);
     printf("Enter the bit number= ");
     scanf("%d",&bitnum);
	 num=((num>>bitnum)|(num<<(32-bitnum)));
	 printf("The result is %d",num);
	  return 0;
}
