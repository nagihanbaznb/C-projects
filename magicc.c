//171805024 Nagihan Baz

#include <stdio.h>
#pragma warning (disable:4996)
#define Maxn 10
int IsMagic(int SArray[][Maxn], int Size);


int main()
{

	int SquareArray[Maxn][Maxn], i, j, n;
	printf("Please enter n (n should be greater than or equal to 3):  ");  scanf("%d", &n);

	for (i = 0;i < n;++i)

		for (j = 0;j < n;++j)
		{
			printf("Please enter a number for row = %d and for column = %d\n", i, j);
			scanf("%d", &SquareArray[i][j]);

		}
	if (IsMagic(SquareArray, n) == 1)

		printf("Excellent! It is a magic matrix.\n");

	else
		printf("It is not a magic matrix.\n");
	
	return 0;
}
	//loops for all sum

	int IsMagic(int SArray[][Maxn], int Size) 
	{
		int i,j, total = 0, othertotal = 0;

		for (i = 0; i < (Size);++i)            //loop for diagonal sum
			
			total += SArray[i][i];
		
			for (i = 0, j = Size - 1;i < Size; i++, j--)
				othertotal += SArray[i][j];
		

		if (total == othertotal)
		{
			for (i = 0;i < Size;++i)
			{
				int totalColumn = 0, totalRow = 0;   //loop for sum of the columns and rows

				for (j = 0;j < Size;++j)
				{
					totalColumn += SArray[j][i];
					totalRow += SArray[i][j];

				}
				if (total == totalColumn)

					if (total == totalRow)

						return 1;
			}

		}

		else 
			return 0;

	}





