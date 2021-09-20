#include <stdio.h>
#include <stdbool.h>

int main() {
	int a = 5;
	printf("%d\n", a);
	// this caused an error
	// printf("%s", a);
	if ("a") {
		printf("the string 'a' was true\n");
	} else {
		printf("the string 'a' was false\n");
	}
	if ("") {
		printf("the empty string was true\n");
	} else {
		printf("the empty string was false\n");
	}
	unsigned int x = 0;
	x--;
	// 0 - 1 leads to the largest unsigned int available, probably
	printf("%ld\n", x);
	short p = 0, q = 1;
	int count = 0;
	while (q>p) {
		p = q;
		q = p+1;
		count++;
	}
	printf("a short was incremented %d times before overflowing\n", count);
	char c=0, d=1;
	count = 0;
	while (d>c) {
		c=d;
		d=c+1;
		count++;
	}
	printf("a char was incremented %d times before overflowing\n", count);
	return 0;
}
