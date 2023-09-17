#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int day;
	printf("Please enter number (1-7)\n");
	printf("Enter the (Ctrl Z) to end input!\n");
	while ((day = getchar()) != EOF)
	{
		switch (day)
		{
		case '1':
			printf("Monday\n");
			break;
		case '2':
			printf("Tuesday\n");
			break;
		case '3':
			printf("Wednesday\n");
			break;
		case '4':
			printf("Thursday\n");
			break;
		case '5':
			printf("Friday\n");
			break;
		case '6':
			printf("Saturday\n");
			break;
		case '7':
			printf("Sunday\n");
			break;
		case '\n':
		case ' ':
		case '%s':
			break;
		default:
			printf("Wrong number. Please enter 1-7 number.\n");
			break;
		}

	}
	system("pause");
}