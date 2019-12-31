#include "libmx.h"

static int rozryadnist(int num) {
    int i = 0;

    if (num == 0)
        return 1;
    if (num < 0)
        i++;
    while (num) {
        num /= 10;
        i++;
    }
    return i;
}

char *mx_itoa(int number) {
    char *res = NULL;
    int i = rozryadnist(number);
    int j = 0;
    long num = number;

    res = mx_strnew(i);
    if (num < 0) {
        res[0] = '-';
        num *= -1;
        j++;
    }
    for (; i > j; i--) {
        res[i - 1] = num % 10 + 48;
        num /= 10;
    }
    return res;
}
