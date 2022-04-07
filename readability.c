#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Get input from user
    string text = get_string("Text: ");

    //For letter count
    float a = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //Count letters
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            a++;
        }
    }

    //For word count
    float a1 = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //Count words
        if (text[i] == ' ')
        {
            a1++;
        }
    }

    //For sentence count
    float a2 = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //Count sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            a2++;
        }

    }

    float L = 100 * (a / a1);
    float S = 100 * (a2 / a1);
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}


