#include <stdio.h>
	int main () {
		int Year, BirthYear;
		
		printf("Which year is this? ");
		scanf("%d", &Year);
		
		printf("What year were you born? ");
		scanf("%d", &BirthYear);
		
		printf("You are %d years old.", Year - BirthYear);

		printf("\n"); //New line for a better view.

		return 0;
	}
