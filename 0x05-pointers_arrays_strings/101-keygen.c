#include"main.h"
/**

* main - Generates random valid passwords for 101-crackme program
* Return: Always 0 (Success)
*/
int main(void)
{
    char password[9] = {0};
    srand(time(NULL));

    for (int i = 0; i < 8; i++) {
        int random_number = rand() % 36;

        if (random_number < 26) {
            password[i] = 'A' + random_number;
        } else {
            password[i] = '0' + random_number - 26;
        }
    }

    printf("%s\n", password);

    return 0;
}
