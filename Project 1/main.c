#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "global.h"

void author(void);
void pubInfo(void);
void isbn(void);

bool addBook = true;
int count = 0;
char answer[3];

int main (void) {
    
    while(addBook == true && count != 10){    
        author();
        pubInfo();
        isbn();
    }

    printf("Do you want to continue? [Yes/No]");
    scanf("%s, ", answer);

    if(answer == "yes"){
        main();
    }
    else if(answer == "no"){
        addBook == false;
    }
    return 0;
}