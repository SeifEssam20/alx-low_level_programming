#include"main.h"
/**
 * printing the alphabet 10 times using an implemented function
*/

void print_alphabet_x10(void)
{
    int line , ch;
    for(line = 0; line <= 9; line++)
    {
        for(ch = 'a'; ch <= 'z'; ch++)
            _putchar(ch);
        _putchar('\n');
    }
}
