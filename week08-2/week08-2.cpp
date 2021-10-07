#include<stdio.h>

int main() {
	int number[10];
	int before;
	int after;
	int* p;
	p = number;

	for (int i = 0; i < 10; i++) {
		printf("input number : ");
		scanf("%d", &number[i]);
	}
	printf("Data in array : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	printf("Result : ");
	for (int i = 1; i < 9; i++) {
		p++;
		before = *(p - 1);
		after = *(p + 1);
		if (before % 2 != 0 && after % 2 != 0) {
			printf("%d ", *p);
		}
	}
	return 0;
}