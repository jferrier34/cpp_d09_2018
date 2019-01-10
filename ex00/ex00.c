/*                                                                       
** EPITECH PROJECT, 2019                                                 
** ex00.h                                                              
** File description:                                                     
** ex00.h                                                              
*/

#include "ex00.h"

static void koala_initializer(koala_t *this, char *_name, char _isALegend)
{
  printf("----");
  printf("\n");
  this->m_is_a_legend = _isALegend;
  printf("Building Cthulhu");
  printf("\n");
  this->m_parent.m_name = strdup(_name);
  this->m_parent.m_power = _isALegend == 1 ? 42 : 0;
  printf("Building %s",_name);
  printf("\n");
}

static void cthulhu_initializer(cthulhu_t *this)
{
  printf("----");
  printf("\n");
  this->m_power = 42;
  this->m_name = "Cthulhu";
  printf("Building Cthulhu");
  printf("\n");
}

cthulhu_t *new_cthulhu()
{
  cthulhu_t *new_cthulhu_;
  
  new_cthulhu_ = malloc(sizeof(cthulhu_t));
  cthulhu_initializer(new_cthulhu_);
  return (new_cthulhu_);
}

void print_power(cthulhu_t *this)
{
  printf("Power => %d", this->m_power);
  printf("\n");
}

void attack(cthulhu_t *this)
{
  if (this->m_power >= 42)
    {
      this->m_power -= 42;
      printf("%s attacks and destroys the city", this->m_name);
    }
  else printf("%s can't attack, he doesn't have enough power", this->m_name);
  printf("\n");
}

void sleeping(cthulhu_t *this)
{
  this->m_power += 42000;
  printf("%s slepps", this->m_name);
  printf("\n");
}

koala_t *New_koala(char *m_name, char _isALegend)
{
  koala_t *new_koala_;

  new_koala_ = malloc(sizeof(koala_t));
  koala_initializer(new_koala_, m_name, _isALegend);
  return (new_koala_);
}

void eat(koala_t *this)
{
  this->m_parent.m_power += 42;
  printf("%s eats", this->m_parent.m_name);
  printf("\n");
}

