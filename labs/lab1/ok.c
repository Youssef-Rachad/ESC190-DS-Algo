#include <stdio.h>
//#include <string.h>


const char * imagine_fish(char thing[]){
    int i = 0;
    int len = 0;
    while(thing[i]!= '\0'){
        len++;
        i++;
    }
    char string[len+4];
    for(int i=0;i<len;i++){
        string[i] = thing[i];
    }
     
    char msg[] = "fish";
    for(int i=0;i<4;i++){
        string[i+len]=msg[i];
    }
    thing = string;
    return thing;
}
int main(int argc, char** argv[]){
    char test[] = "zebra";
    printf("Just iagine a %s\n",  imagine_fish(test));
    return 0;
}
