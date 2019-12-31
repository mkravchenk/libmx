#include "libmx.h"

void mx_str_reverse(char *s) {
	int len;
    int i;
    char *nachalo;
    char *konec;
    char temp;

    len = mx_strlen(s);
    nachalo = s;
    konec = s;
    for (i = 0; i < len - 1; i++)
        konec++;
    for (i = 0; i < len/2; i++) {
        temp = *konec;
        *konec = *nachalo;
        *nachalo = temp;
        nachalo++;
        konec--;
    }
}
