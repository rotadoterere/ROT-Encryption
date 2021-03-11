#include <stdio.h>
#include <string.h>

//How to compile: gcc -o cypher47 rot47.c

void fatal(int argc){
	fprintf(stderr, "USE MODE\t./cypher47 STRING\n");
	if(argc > 2)
		fprintf(stderr, "QUOTATION MARKS: ./cypher47 \"STRING1 STRING2 ... \"\n");
	exit(3);
}

int main(int argc, char *argv[]){

	if(argc != 2)
		fatal(argc);
	
	char *string;

	strcpy(string,argv[1]);

	for(int i = 0; i < 47; i++){
		for(int j = 0; string[j] != '\0'; j++){
			if(string[j] == 126)
				string[j] = 33;
			else
				if(string[j] >= 33 && string[j] < 126)
					string[j] = string[j] + 1;
				else
					continue;
			}
	}	

	printf("%s\n", string);

	return 0;
}

