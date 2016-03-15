#include <stdio.h>

int main() {
	int age = 0;

	printf("Enter your age in years:\nYou$ ");
	scanf("%d", &age);
	age = (int) (age * 365.25);
	printf("You are %d days old :)\n", age);

	return 0;
}
