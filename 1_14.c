#include <stdio.h>
#include <string.h>

int main(){
    int letters[128], c;

    memset(letters, 0, sizeof(letters));

    while((c = getchar()) != EOF){
        letters[c]++;
    }

    for(int i = 0; i < 127; i++){
        if(letters[i] > 0){
            printf("%c)", i);
                for(int a = 0; a < letters[i]; a++){
                    printf("*");
                }
            printf("\n");
        }
    }
    
    }
