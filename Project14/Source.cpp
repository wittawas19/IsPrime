#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d" ,&num);
	if((num == 1 || num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) && (num != 2 && num != 3 && num != 5 && num != 7))
	{
		printf("%d is not Prime", num); 
	}else
	{
	
		printf("%d is Prime", num);
	}

}

