#include <stdio.h>
#include <string.h>

int is_palindrome(char word[11])
{
    size_t length = strlen(word);

    int i = 0, j = length - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
            return 0;

        i++;
        j--;
    }

    return 1;
}

int main()
{
    char word[11];
    printf("Enter your word (max 10 characters): ");
    scanf("%10s", word);

    if (is_palindrome(word))
    {
        printf("%s is a palindrome\n", word);
    }
    else
    {
        printf("%s is not a palindrome\n", word);
    }

    return 0;
}
