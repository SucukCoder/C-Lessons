#include <stdio.h>

	int main() {
		int n;

		//Asking The User for a number.
		printf("Please give a number: ");
		scanf("%d", &n);

		//Counting from 1 to the given number.
		printf("Numbers from 1 to %d are: ", n);
			for (int x = 1; x <= n; ++x) {
				printf("%d ", x);
			}

		printf("\n"); //New line for a better view.

		return 0; 

	}
