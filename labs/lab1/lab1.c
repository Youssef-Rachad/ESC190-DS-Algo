#include <stdio.h>
#include <string.h>
#include <math.h>
#include "lab1.h"
double split_bill(double base_amount, double tax_rate, double tip_rate, int num_people){
    return base_amount*(1+tax_rate+tip_rate)/num_people;
    /* Alternatively
       return floor(base_amount*(tax_rate+tip_rate)*100/num_people) /100;
     * removes the need to then format the number
     */
}
// Question: result is an integer because (num+.5) is casted from float to int by removing the decimal points

double adjust_price(double original_price){
    return 10*pow(original_price,0.5);
}

int sandy_eats(char menu_item[]){
    int i = 0;
    int len = 0;
    while(menu_item[i]!= '\0'){
        char letter[] = {menu_item[i]};
        if(strstr("jJkKlL",letter))
            return 0;
        len++;
        i++;
    }
    if(!len%2)
        return 0;
    if(strstr(menu_item,"fish"))
        return 0;
    return 1*(len>1);
}
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
/*int main(int argc, char** argv[]){
    char test[] = "zebra";
    printf("Just iagine a %s\n",  imagine_fish(test));
    return 0;
}*/
