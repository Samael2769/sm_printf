/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** flag_char
*/

#include <stdarg.h>
#include "my.h"

char *flag_char(va_list list, char *to_print)
{
    char c = va_arg(list, int);

    to_print = sm_realloc(to_print, sizeof(char) * sm_strlen(to_print) + 2,
    sizeof(char) * sm_strlen(to_print) + 1);
    to_print[sm_strlen(to_print)] = c;
    return to_print;
}