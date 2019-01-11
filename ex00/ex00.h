/*
** EPITECH PROJECT, 2019
** ex00.h
** File description:
** ex00.h
*/

#ifndef _EX_ZERO_H_
#define _EX_ZERO_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_cthulhu {
        int m_power;
        char *m_name;
} cthulhu_t;

typedef struct s_koala {
        char m_is_a_legend;
        cthulhu_t m_parent;
} koala_t;

cthulhu_t *new_cthulhu(void);
koala_t *new_koala(char *name, char is_a_legend);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
void eat(koala_t *this);

#endif

