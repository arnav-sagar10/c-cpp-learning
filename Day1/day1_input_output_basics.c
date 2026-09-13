#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	float height;
	printf("Enter your height in feet: ");
	scanf("%f", &height);
	char block;
	printf("Enter your House block name: " );
	scanf(" %c", &block);
	printf("I am %d year old. My height is %f feet. I live in %c Block.", age, height, block);
	return 0;
}
