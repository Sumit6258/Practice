//
// Created by Sumit Suman on 16-12-2020.
//
#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    //variables to store the counting of vowels and consonant
    int i, vCount = 0, cCount = 0;
    char c[100];
    printf("Enter your name:\n");
    scanf("%s",&c);
    for(i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
            //Increments the vowel counter
            vCount = vCount + 1;
        }
        else if(c[i] >= 'a' && c[i] <= 'z'){
            //Increments the consonant counter
            cCount++;
        }
    }

    printf("Number of vowels : %d\n", vCount);
    printf("Number of consonant : %d", cCount);
    return 0;
}
