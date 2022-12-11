#include<stdio.h>

int main(void)
{
	int num = 3;
	int *p = &num;
	*p = 100;

	printf("%d, %d \n, num, *p);
}
