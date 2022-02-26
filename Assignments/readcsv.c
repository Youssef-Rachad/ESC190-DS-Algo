#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char* parse_csv(char* line, int num){
    return 0;
}

int main(){
    FILE *fptr = fopen("menu.txt", "r");
    char* token;
    char mystring [111];
        
    if(!fptr)
        return -1;
    
    while(fgets(mystring, 111, fptr)){
       token = strtok(mystring, ",");
        while(token){
            puts(token);
            token = strtok(NULL, ",");
        }
    }
    //printf("Printing file content\n");
    //fscanf(fptr, "%d", &num);
    //printf("There is %d\n", num);
    fclose(fptr);
    return 0;
}
