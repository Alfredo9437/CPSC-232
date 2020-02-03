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
    int Longest = 0;
    char Curr_Line[max];
    char Longest_Line[max]; 

    while( (Curr_Length = Reading(Curr_Line, max)) ){
        if(Curr_Length > Longest){
            Longest = Curr_Length;
            Copying_To(Curr_Line, Longest_Line);
        }
    }
    printf("%s \n", Longest_Line);

}