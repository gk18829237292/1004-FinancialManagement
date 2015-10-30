#include<stdio.h>

int main()
{
	int n = 12;
	float temp;
	float sum = 0;
	while (n > 0)
	{
		scanf("%f", &temp);
		sum += temp;
		n--;
	}
	//sum = (int)(sum * 1000 + 5)  / 1000.0;
	printf("$%.2f\n", sum /12);
	return 1;
}