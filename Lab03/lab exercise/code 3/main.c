#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vowel;
    printf("Enter any alphabet:");
    scanf("%c", &vowel);

    switch(vowel)
    {
        case 'a':
                printf("The Alphabet is a vowel.");
        break;
        case 'e':
                printf("The Alphabet is a vowel.");
        break;
        case 'i':
                printf("The Alphabet is a vowel.");
        break;
        case 'o':
                printf("The Alphabet is a vowel.");
        break;
        case 'u':
                printf("The Alphabet is a vowel.");
        break;
        case 'A':
                printf("The Alphabet is a vowel.");
        break;
        case 'E':
                printf("The Alphabet is a vowel.");
        break;
        case 'I':
                printf("The Alphabet is a vowel.");
        break;
        case 'O':
                printf("The Alphabet is a vowel.");
        break;
        case 'U':
                printf("The Alphabet is a vowel.");
        break;

        default:
                printf("The Alphabet is a consonant.");


    }


    return 0;
}
