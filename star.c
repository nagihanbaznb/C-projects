//171805024 Nagihan Baz


#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int i;
	int j;

	for (i = 0; i <10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
        }

		printf("\n");


	}
	for (i = 10; i >0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");

		}
		printf("\n");

	}
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j < 10;j++)
		{
			if (j >= i)

			{
				printf("*");

			}
			else
			{

				printf(" ");
			}
	
			
		}
		printf("\n");
	}
	
	for (i = 10;i > 0;i--)
	{
		for (j = 1;j <= 10;j++)
		{

			if (j >= i)


			{
				printf("*");
			}
			else {
				printf(" ");

			}
		}
		printf("\n");

	}

}