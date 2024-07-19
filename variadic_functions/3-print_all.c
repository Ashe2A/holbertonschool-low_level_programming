#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - print all parameters
 * @format: list of types
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	int ignore_char = 0;
	char *new_str;
	ind_t format_ind[] = {
		{'c', char_var_param},
		{'i', int_var_param},
		{'f', float_var_param},
		{'s', string_var_param},
		{'\0', NULL}};
	va_list params;

	va_start(params, format);
	while (format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if ((format_ind[j].var_type_ind) == format[i])
			{
				format_ind[j].type_print(params);
			}

			j++;
		}

		i++;

		if (format[i] != '\0')
		{
			prinf(", ");
		}
	}

	printf("\n");
	va_end(params);
}

/**
 * char_var_param - print char parameters
 * @char_params: char parameters
 */
void char_var_param(va_list *char_params)
{
	_putchar(va_arg(char_params, char));
}

/**
 * int_var_param - print int parameters
 * @int_params: int parameters
 */
void int_var_param(va_list *int_params)
{
	printf("%d", va_arg(int_params, int));
}

/**
 * float_var_param - print float parameters
 * @float_params: float parameters
 */
void float_var_param(va_list *float_params)
{
	printf("%f", va_arg(float_params, float));
}

/**
 * string_var_param - print string parameters
 * @string_params: string parameters
 */
void string_var_param(va_list *string_params)
{
	char *new_str = va_arg(string_params, char *);

	if (new_str != NULL)
	{
		printf("%s", new_str);
	}
	else
	{
		printf("%s", "(nil)");
	}
}