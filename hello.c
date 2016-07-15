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
	return age;
}

char* getName() {
	char* name = "rose";
	return name;
}
