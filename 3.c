#include <stdio.h>
int main() {
    char line[150];
    int upper, lower, vowels, consonant, digit, space;

    upper = lower = vowels = consonant = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

   for (int i = 0; line[i] != '\0'; ++i)

        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {

         upper++;
        }
      else if
        {
        (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
        }
        else if
        {
            (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
            {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
            ++consonant;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            ++digit;
        }
    }

    printf("\n upper: %d", upper);
    printf("\n lower: %d", lower);
    printf("\n Vowels: %d", vowels);
    printf("\n Consonants: %d", consonant);
    printf("\n Digits: %d", digit);

    return 0;
}
