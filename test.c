#include <stdio.h>
int main(void) {
	char c;
	char result[10];
	int i = 0;
	while (i < 10) {
		c = getchar();
		result[i] = c;
			i++;
	}
	printf("%s", result);
	return 0;
}

