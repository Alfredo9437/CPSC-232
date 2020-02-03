#include <stdio.h>
#include <stdlib.h>

#define max 1000

int Reading(char line[], int limit){
    int c;
    int i = 0;

    while( (c = getchar()) != EOF && i < limit && c != '\n' ){
        line[i] = c;
        i++;
    }
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

int main(){
char Curr_line[max];
char reversed[max];
int line_length;
int i;

while( (line_length = Reading(Curr_line, max)) ){
    int b = line_length-2;
    for(i=0; i < line_length; i++){
        if(Curr_line[i] == '\0' || Curr_line[i] == '\n'){

        }else{
        reversed[i]=Curr_line[b];
        b--;
        }
    }
    reversed[line_length-1]= '\n';
    reversed[line_length]= '\0';


    printf("This is your line reversed...\n%s\n", reversed);
}

}
