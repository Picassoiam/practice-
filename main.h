#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int c_print (int character);
int s_print(char *str);
int sr_print(char *str);
int p_print(void);
int _printf(char *format, ...);
int _printf_ext_1(va_list val, char ch, unsigned int *p_i);
void id_print(int n);
int count_int(int n);

#endif
