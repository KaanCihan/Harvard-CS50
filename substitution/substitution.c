#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Checks key mistakes
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isalpha(argv[1][i]) == false)
            {
                printf("Key contains non alphabetical characters.");
                return 1;
            }

            for (int j = i + 1; j < strlen(argv[1]) + 1; j++)
            {
                if (argv[1][i] == argv[1][j])
                {
                    printf ("Repetation");
                    return 1;
                }
            }
        }
    }

    // Convert key to uppercase
    for (int i = 0; argv[1][i]; i++)
    {
        argv[1][i] = toupper(argv[1][i]);
    }

    // Lowercase key
    char lower[26];
    for (int i = 0; i < 26; i++)
    {
        lower[i] = tolower(argv[1][i]);
    }

    // Input word

    string word1 = get_string("plaintext: ");

    // Output word
    char word2[strlen(word1) + 1];
    word2[strlen(word1)] = '\0';

    char alphabet[26][2];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i][0] = 'A' + i;
        alphabet[i][1] = 'a' + i;
    }

    for (int i = 0, n = strlen(word1); i < n; i++)
    {

        for (int j = 0; j < 26; j++)
        {
            if (alphabet[j][0] == word1[i])
            {

                word2[i] = argv[1][j];
                break;
            }
            else if (alphabet[j][1] == word1[i])
            {

                word2[i] = lower[j];
                break;
            }
            else if (word1[i] == ',')
            {
                word2[i] = ',';
                break;
            }
            else if (word1[i] == ' ')
            {
                word2[i] = ' ';
                break;
            }
            else
            {
                word2[i] = word1[i];
            }

        }

    }
    // Print output
    printf("ciphertext: ");
    for (int i = 0, n = strlen(word2); i < n; i++)
    {
        printf("%c", word2[i]);

    }
    printf("\n");
    return 0;
}

