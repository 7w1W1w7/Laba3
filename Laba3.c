
#include <stdio.h>


int mergerFunc(int* mas1, int* mas2, int* res, int N1, int N2)



{
	int a = 0, k = 0;
	for (int i = 0; i < N1 + N2; i++)
	{
		if (mas1[a] > mas2[k])
		{
			res[i] = mas1[a];
			a++;
		}
		else if (mas1[a] < mas2[k])
		{
			res[i] = mas2[k];
			k++;
		}
		else
		{
			res[i] = mas1[a];
			i++;
			res[i] = mas2[k];
			a++;
			k++;
		}
	}
	return *res;
}

int main()
{
	int mas1[50];
	int mas2[50];
	int res[100];
	int N1, N2;
	printf("Input a first array length:\n");
	scanf_s("%d", &N1);
	printf("Input array: ");
	for (int i = 0; i < N1; i++)
	{
		scanf_s("%d", &mas1[i]);
	}
	printf("Input a second array length:\n");
	scanf_s("%d", &N2);
	printf("Input array: ");
	for (int i = 0; i < N2; i++)
	{
		scanf_s("%d", &mas2[i]);
	}
	mergerFunc(mas1, mas2, res, N1, N2);
	printf("Result:\n");
	for (int i = 0; i < N1 + N2; i++)
	{
		printf("%d ", res[i]);
	}
	return 0;
}