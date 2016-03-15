#include <stdio.h>

int main() {
	int age = 0;

	printf("Enter your age in years:\nYou$ ");
	scanf("%d", &age);
	age = (int) (age * 365.25); //Mind leap year.
	printf("You are %d days old :)\n", age);
	printf("Goodbye\n");

	return 0;
}
