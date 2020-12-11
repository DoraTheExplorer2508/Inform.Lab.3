#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arraynull(float* array, int len) {
	int i = 0, m, n;
	float a, sum = 0;
	for (n = 0; n < len; n++) {
		sum = sum + array[n];
	}
	a = sum / len;
	for (m = 0; m < len; m++) {
		if ((array[i] < a) && (array[i] != array[len])) {
			array[i] = 0;
			printf("%1.0f ", array[i]);
			i++;
		}
		else {
			printf("%.3f ", array[i]);
			i++;
		}
	}
}


int main() {
	int a, count;
	float array[100];
	printf("Input array size: ");
	if (!scanf("%d", &a))
	{
		printf("Incorrect size.\n");
		return -1;
	}
	for (count = 0; count < a; count++)
	{
		printf("Enter numeral %d: ", count + 1);
		if (!scanf("%f", &array[count]))
		{
			printf("Incorrect element.\n");
			return -1;
		}
	}
	arraynull(array, a);
	return 0;
}
