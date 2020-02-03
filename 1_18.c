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
    int Curr_Length;
    int Longest = 0;
    char Curr_Line[max];
    int index;

    while( (Curr_Length = Reading(Curr_Line, max)) ){
       for(index=0;index<Curr_Length;index++){
           if(Curr_Line[index] == '\t'){
               Curr_Line[index] = ' ';
           }
           if(Curr_Line[Curr_Length-1] == ' '){
               Curr_Line[Curr_Length - 1] = '\0';
               Curr_Line[Curr_Length] = 0;
           }
       }
    printf("This is your revised line...\n%s\n", Curr_Line);
    }
    

}
