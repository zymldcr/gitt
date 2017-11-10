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
	int age = 160;
	double height = 180;
	double weight = 100;
	return age;
}

char* getName() {
	char* name = "rose";
	int age = 15;
	return name;
}

double getWeight() {
	double weight = 100;
	return weight;
}
double getHeight() {
	double height = 180;
	int age = 100;
	return height;
}
int getHouse() {
	return 1;
}
