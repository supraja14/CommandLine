#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int ctr=0;
	int flag=0;

	for(i=1;argv[i]!='\0';i++)
	{
		ctr++;
	}

	for(i=0;i<ctr;i++)
	{
		if(argv[i]!=argv[ctr-i-1])
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
	{
		printf("Not a Palindrome");
	}
	else
	{
		printf("Palindrome");
	}
	return 0;
}
