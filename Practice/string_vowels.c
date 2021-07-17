//
// Created by Sumit Suman on 25-01-2021.
//
#include <stdio.h>
char check_vowel(char);

char check_vowel(char c)
{
    int lowercase_vowel, uppercase_vowel;
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.\n", c);

}

int main() {
    char c;
    printf("Enter an character:");
    scanf("%c", &c);
    printf(check_vowel(c));
    return 0;
}
