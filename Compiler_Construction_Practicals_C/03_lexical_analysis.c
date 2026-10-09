#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {
    "int", "float", "char", "double",
    "if", "else", "for", "while",
    "return", "void", "break", "continue"
};

int isKeyword(char *word)
{
    int i;
    for (i = 0; i < 12; i++)
    {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '%' || ch == '=' ||
            ch == '<' || ch == '>' || ch == '!' ||
            ch == '&' || ch == '|');
}

int isSpecialSymbol(char ch)
{
    return (ch == ';' || ch == ',' || ch == '(' ||
            ch == ')' || ch == '{' || ch == '}' ||
            ch == '[' || ch == ']' || ch == ':');
}

int main()
{
    char str[500];
    int i = 0;

    printf("Enter C source code:\n");
    fgets(str, sizeof(str), stdin);

    printf("\n--- Lexical Analysis ---\n");

    while (str[i] != '\0')
    {
        if (isspace((unsigned char)str[i]))
        {
            i++;
        }
        else if (isalpha((unsigned char)str[i]) ||
                 str[i] == '_')
        {
            char word[100];
            int j = 0;

            while (isalnum((unsigned char)str[i]) ||
                   str[i] == '_')
            {
                if (j < 99)
                    word[j++] = str[i];
                i++;
            }

            word[j] = '\0';

            if (isKeyword(word))
                printf("%s -> KEYWORD\n", word);
            else
                printf("%s -> IDENTIFIER\n", word);
        }
        else if (isdigit((unsigned char)str[i]))
        {
            char number[100];
            int j = 0;

            while (isdigit((unsigned char)str[i]) ||
                   str[i] == '.')
            {
                if (j < 99)
                    number[j++] = str[i];
                i++;
            }

            number[j] = '\0';
            printf("%s -> CONSTANT\n", number);
        }
        else if (isOperator(str[i]))
        {
            char op[3] = {str[i], '\0', '\0'};

            if ((str[i] == '=' && str[i + 1] == '=') ||
                (str[i] == '!' && str[i + 1] == '=') ||
                (str[i] == '<' && str[i + 1] == '=') ||
                (str[i] == '>' && str[i + 1] == '=') ||
                (str[i] == '+' && str[i + 1] == '+') ||
                (str[i] == '-' && str[i + 1] == '-') ||
                (str[i] == '&' && str[i + 1] == '&') ||
                (str[i] == '|' && str[i + 1] == '|'))
            {
                op[1] = str[i + 1];
                i += 2;
            }
            else
            {
                i++;
            }

            printf("%s -> OPERATOR\n", op);
        }
        else if (isSpecialSymbol(str[i]))
        {
            printf("%c -> SPECIAL SYMBOL\n", str[i]);
            i++;
        }
        else
        {
            printf("%c -> UNKNOWN SYMBOL\n", str[i]);
            i++;
        }
    }

    return 0;
}