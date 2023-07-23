#include <stdio.h>

int main(int argc, char **argv){
	if (--argc != 1){
		printf("usage: %s date\n", *(argv));
		return 2;
	}

	int daysinmo[][12] = {
		{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	};
	char *mo[] = {
		"January", "Febuary", "March", "April", "May", "June", "July", "August",
		"September", "October", "November", "December"
	};

	return 0;
}
