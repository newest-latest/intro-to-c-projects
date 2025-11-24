#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	int main(void) {
printf("What is your name?");
		int c;
		int i = 0;
		char str[150];
		while((c = getchar()) != '\n' && c != EOF) {
			str[i] = c;
			i++;}
		str[i] = '\0';
		size_t len = strlen(str);
		char *name = malloc(len + 1);
		strcpy(name, str);
	printf("Hello, %s!", name);
		free(name);

}
