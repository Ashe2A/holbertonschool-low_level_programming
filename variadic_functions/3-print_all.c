#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * char_var_param - print char parameters
 * @params: char parameters
 */
void char_var_param(va_list params)
{
	printf("%c", (char)va_arg(params, int));
}

/**
 * int_var_param - print int parameters
 * @params: int parameters
 */
void int_var_param(va_list params)
{
	printf("%d", va_arg(params, int));
}

/**
 * float_var_param - print float parameters
 * @params: float parameters
 */
void float_var_param(va_list params)
{
	printf("%f", (float)va_arg(params, double));
}

/**
 * string_var_param - print string parameters
 * @params: string parameters
 */
void string_var_param(va_list params)
{
	char *new_str = va_arg(params, char *);

	if (new_str == NULL)
	{
		new_str = "(nil)";
	}

	printf("%s", new_str);
}

/**
 * print_all - print all parameters
 * @format: list of types
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	char *separator = "";
	ind_t format_ind[] = {
		{'i', int_var_param},
		{'c', char_var_param},
		{'s', string_var_param},
		{'f', float_var_param},
		{'\0', NULL}};
	va_list params;

	va_start(params, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0;
		while (((format_ind[j]).var_type_ind) != '\0')
		{
			if (((format_ind[j]).var_type_ind) == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				((format_ind[j]).type_print)(params);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(params);
	printf("\n");
}
