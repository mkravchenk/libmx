#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	int razm;
    const char *vhod;
    const char *neobh;
    
    if (str == NULL || sub == NULL)
        return -2;
    razm = mx_strlen(str);
    vhod = str;
    neobh = sub;
    while (str != NULL) {
        if (mx_strlen(vhod) < mx_strlen(neobh))
            return -1;
        while (*vhod++ == *neobh++) {
            if (*neobh == '\0')
                return razm - mx_strlen(str + 1);
        }
        neobh = sub;
        str++;
    }
    return -2;
}
