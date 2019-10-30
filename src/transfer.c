/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** main function
*/

#include "transfer.h"

void display(void)
{
    printf("USAGE\n"
           "\t./107transfer [num den]*\n"
           "DESCRIPTION\n"
           "\tnum     polynomial numerator defined by its coefficients\n"
           "\tden     polynomial denominator defined by its coefficients\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && !strcmp(av[1], "-h"))
        display();
    else
        return 84;
    return 0;
}
