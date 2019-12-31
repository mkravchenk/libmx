#include "libmx.h"

char *mx_strdup(const char *s1){
	char *src = mx_strnew(mx_strlen(s1));
	
	if (src == NULL)
		return NULL;
	mx_strcpy(src, s1);
	return src;
}
