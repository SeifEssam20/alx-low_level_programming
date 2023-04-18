#include <stdio.h>
/* 
 * this is a program that prints to the stdout the name of the file it was compiled from
 */
int main()
{
    printf("%s\n", __FILE__);
}
