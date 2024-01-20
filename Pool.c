#include <stdio.h>

int main () {
	float a, b, c;

	printf("Please give how many hours it takes to fill the pool for each of the three tap. If a tap is ejaculating then give how many hours it takes to ejaculate with \"-\"/(negative) number :");
	scanf("%f%f%f",&a, &b, &c); // Scanning Hour of filling and ejaculating as floats.

	float Hour = 1.0 / a + 1.0 / b + 1.0 / c; // Calculating how much of the pool is filled within 1 Hour.
	float TotalHours = 1.0 / Hour; // Calculating how many hours do taps need to completely full the pool.
	float TotalMinutes = TotalHours * 60.0; //Calculating how many minutes do taps need to completely full the pool.
	
	printf("It takes %f Minutes to fill the pool completely.",TotalMinutes); // Gives the answer.
	
	printf("\n");

return 0;
}
