#include<stdio.h>

int getAge();
char* getNAme();
//main
int main() {
	char* name = getName();
	int age = getAge();
	printf("\nHello World! My name is: %s, age: %d\n\n", name, age);
}

int getAge() {
	char* name = "jack";
	int age = 15;
	double height = 180;
	double weight = 100;
	return age;
}

char* getName() {
	char* name = "rose";
	int age = 15;
	return name;
}

double getHeight() {
	double height = 180;
	return height;
}
