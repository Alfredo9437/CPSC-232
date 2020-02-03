#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main(){
    int words[25], word_size, c;
    memset(words, 0, sizeof(words));
    int state;
    int largest = 0;

    while((c=getchar()) != EOF){
        if (isalpha(c) || c == '-') {
             ++word_size;
             if(word_size > largest){
                 largest = word_size;
             }
        }else if(word_size != 0) {
            words[word_size] = words[word_size] + 1;
            word_size = 0;
        }
    }
    
    for(int i = 1; i <= largest; i++){
        printf("%2d. ", i);
        for(int b = 0; b < words[i]; b++){
            printf("*");
        }
        printf("\n");
    }

}
