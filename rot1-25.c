#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatal(int argc){
  fprintf(stderr, "MODO DE USO\t./cypher STRING\n");
  if(argc > 2)
    fprintf(stderr, "USE ASPAS: ./cypher \"STRING1 STRING 2 ...\"\n");
  exit(3);
}

int main(int argc, char *argv[]){
  if(argc != 2)
    fatal(argc);

  char str[strlen(argv[1])];
  strcpy(str, argv[1]);

  for(int k = 0; k < 25; k++){
    printf("%d\t", k + 1);
    for(int i = 0; str[i] != '\0'; i++){
      if(str[i] < 65 || str[i] > 122){
        continue;
      } 
      if(str[i] == 32)
        i++;
      if(str[i] == 122)
         str[i] = 97;
      else
       if(str[i] == 90)
         str[i] = 65;
       else
        str[i] += 1;
    }
    printf("%s\n", str);
  }
  
  
  return 0;
}
