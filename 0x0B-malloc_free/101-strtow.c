#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int count, in_word = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            if (in_word)
            {
                in_word = 0;
            }
        }
        else
        {
            if (!in_word)
            {
                in_word = 1;
                count++;
            }
        }

        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    int num_words, i, j;
    char **words;
int word_length;
    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);

    if (num_words == 0)
        return NULL;

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    for (i = 0; i < num_words; i++)
    {
        while (*str == ' ' || *str == '\t' || *str == '\n')
            str++;

        
        while (str[word_length] != ' ' && str[word_length] != '\t' && str[word_length] != '\n' && str[word_length] != '\0')
            word_length++;

        words[i] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        for (j = 0; j < word_length; j++)
            words[i][j] = *str++;

        words[i][j] = '\0';
    }

    words[num_words] = NULL;

    return words;
}

