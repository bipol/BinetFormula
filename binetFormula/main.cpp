/********************
Bipol Alam
main.cpp
********************/
#include <iostream>
#include <binet.h>

int main ()
{
  Binet a;
  double x;

  for (double n; n < 46; n++)
    {
      a.setN(n);
      std::cout << n << "\t" << a.round() << " \n";
    }
  return 0;
}
