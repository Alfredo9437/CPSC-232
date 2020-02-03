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

void Copying_To(char from[], char to[]){
    for(int i = 0; from[i]!='\n' ; i++){
        to[i] = from[i];
    }
}


int main(){
    int Curr_Length;
    char Curr_Line[max];
    char Longer_than_80[max];
    int i=0;


    while(  (Curr_Length = Reading(Curr_Line, max))  ){
        if(Curr_Length >= 80){
            printf("This line is greater than 80 \n");
            printf("%s", Curr_Line);
            i++;
        }
    }
}