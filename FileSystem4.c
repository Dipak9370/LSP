
#include<stdio.h>

int main(int argc, char *argv[])
{
	int iNo1 = 0, iNo2 = 0;
	int iAns;
	
	printf("Enter First Number : \n");
	scanf("%d",&iNo1);

	printf("Enter second Number : \n");
        scanf("%d",&iNo2);

	iAns = iNo1 + iNo2;

	printf("Addition is : %d\n",iAns);
	return 0;
}

