#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	int main(void){
		typedef struct node {
			char *name;
	struct node *next;}
		node_t;
		node_t *name1 = malloc(sizeof(node_t));
		printf("I demand your name, citizen, \n");
			int c;
			char buffer[250];
			int i = 0;
			while ((c = getchar()) != '\n' && c != EOF) {
				buffer[i] = c;
				i++;
			}
			buffer[i] = '\0';
				size_t len = strlen(buffer);
				name1->name = malloc(len +1);
				strcpy(name1->name, buffer);
				printf("Hello, %s", name1->name);
						free(name1->name);
						free(name1);
					}

