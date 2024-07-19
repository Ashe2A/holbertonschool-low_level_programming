#ifndef VARIADIC
#define VARIADIC

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif

#ifndef MISC
#define MISC

#include <stdarg.h>

void _putchar(char c);

typedef struct indicator
{
	char var_type_ind;
	void (*type_print)(va_list);
} ind_t;

void char_var_param(va_list);
void int_var_param(va_list);
void float_var_param(va_list);
void string_var_param(va_list);

#endif
