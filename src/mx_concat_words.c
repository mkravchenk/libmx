#include "libmx.h"

char *mx_concat_words(char **words) {
    int len = 0;
    char *str;

    if (!words)
        return NULL;
    for (int i = 0; words[i] != NULL; i++) {
        len += mx_strlen(words[i]);
        if (words[i + 1] != NULL)
            len++;
    }
    str = mx_strnew(len);
    for (int j = 0; words[j] != NULL; j++) {
        mx_strcat(str, words[j]);
        if ( words[j + 1] != NULL)
            mx_strcat(str, " ");
    }
    return str;
}

