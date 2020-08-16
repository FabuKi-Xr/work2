/*find distance*/
#include<stdio.h>
int main() {
	int v, t;
	printf("Enter velocity(m/s): ");
	scanf_s("%d", &v);
	printf("Enter time(s): ");
	scanf_s("%d", &t);
	if (v == 0) printf("you are stopping!");
	else if (t <= 0) printf("Ahh,it's like a football score");
	else if (v > 0) printf("you are going forward for %d m.", v * t);
	else printf("you are going backward for %d m.", v * t * (-1));
	return 0;
}