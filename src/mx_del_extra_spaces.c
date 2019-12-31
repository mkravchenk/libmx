#include "libmx.h"

static void del_job(const char *str, char *res) {
	int j = 0;

	for (int i = 0; str[i]; i++) {
		if (!(mx_is_space(str[i]))) {
			res[j] = str[i];
			j++;
		}
		if (!(mx_is_space(str[i])) && mx_is_space(str[i + 1])) {
			res[j] = ' ';
			j++;
		}
	}
}

char *mx_del_extra_spaces(const char *str) {
	char *res;
	char *tmp;
	
	if (!str)
		return NULL;
	res = mx_strnew(mx_strlen(str));
	del_job(str, res);
	tmp = mx_strtrim(res);
	free(res);
	if (tmp == 0)
		return mx_strnew(0);
	return tmp;
}
