#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void rootmeansquare(float array[100], int size)
{
	int i;
    float t, sqrt, arraysum = 0, arrayres;
	for (i = 0; i < size; i++) {
		arraysum = arraysum + array[i] * array[i];
	}
	arrayres = arraysum / size;
    sqrt = arrayres / 2;
    t = 0;
    while (sqrt != t) {
        t = sqrt;
        sqrt = (arrayres / t + t) / 2;
    }
    printf("The square root of %.3f is %.3f", arrayres, sqrt);
}

int main() {
	int b, count;
	float array[100], a;
	printf("Input array size: \n");
	if (!scanf("%f", &a))
	{
		printf("Incorrect size.\n");
		return -1;
	}
	if (a <= 0) {
		printf("Incorrect size");
		return -1;
	}
	b = int(a);
	for (count = 0; count < b; count++)
	{
		printf("Enter number %d: \n", count + 1);
		if (!scanf("%f", &array[count]))
		{
			printf("Incorrect element.\n");
			return -1;
		} 
	}
	rootmeansquare(array, b);
	return 0;
}