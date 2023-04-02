#include"main.h"
/**

* main - Generates random valid passwords for 101-crackme program
* Return: Always 0 (Success)
*/

int main(void)
{
    srand(time(NULL));

    char password[9] = {0};
    int i;
    for (i = 0; i < 8; i++) {
        int random_number = rand() % 36;

        if (random_number < 26) {
            password[i] = 'A' + random_number;
        } else {
            password[i] = '0' + random_number - 26;
        }
    }
    password[i] = '\0';

    while (system("./101-crackme password") != 0) {
        for (i = 0; i < 8; i++) {
            int random_number = rand() % 36;

            if (random_number < 26) {
                password[i] = 'A' + random_number;
            } else {
                password[i] = '0' + random_number - 26;
            }
        }
        password[i] = '\0';
    }

    printf("%s\n", password);

    return 0;
}
