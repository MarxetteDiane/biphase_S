#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(){
	
	char input[100], output[100], cpyin[100];
	int temp[100], in=0;
	int i=0;
	bool st = true;
	
	gets(input);
    strcpy(cpyin, input);
	char* piece = strtok(cpyin," ");

	while(piece != NULL){
		temp[in] = atoi(piece);
		piece = strtok(NULL," ");
		in++;
	}
	
	
	for(i=0; i< in; i++){
		if (temp[i] == 3){
			strcat(output, "10");
		}
		else if (temp[i] == -3){
			strcat(output, "00");
		}
		else if (temp[i] == 1){
			strcat(output, "11");
		}
		else if (temp[i] == -1){
			strcat(output, "01");
		}
	}
	
	printf("%s", output);
}
