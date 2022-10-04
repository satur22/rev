#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *u = "1110101";
    char *r = "1110010";
    char *i = "1101001";
    char *aa = "110100";
    char *n = "1101110";

    char a = strtol(u, 0, 2);
    char b = strtol(r, 0, 2);
    char c = strtol(i, 0, 2);
    char d = strtol(aa, 0, 2);
    char e = strtol(n, 0, 2);

    printf("%s = %c = %d = 0x%.2X \n", u, a, a, a);
    printf("%s = %c = %d = 0x%.2X \n", r, b, b, b);
    printf("%s = %c = %d = 0x%.2X \n", i, c, c, c);
    printf("%s = %c = %d = 0x%.2X \n", aa, d, d, d);
    printf("%s = %c = %d = 0x%.2X \n", n, e, e, e);
    return(0);
}
