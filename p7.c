#include <stdio.h>

char vowels[] = {'a', 'e', 'i', 'o', 'u'};

int substitute_vowels(char *s, char ch)
{
    int count = 0;
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(s[i] == vowels[j])
            {
                s[i] = ch;
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    char ch;
    printf("Enter a string: ");
    char string[100];
    fgets(string, 100, stdin);
    printf("Enter a character to replace all vowels: ");
    scanf("%c", &ch);
    printf("Old string: %s\n", string);
    int subs = substitute_vowels(string, ch);
    printf("New string: %s\n", string);
    printf("Number of substritutions: %d", subs);
}
