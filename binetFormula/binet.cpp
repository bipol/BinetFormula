/********************
Bipol Alam
Binet Implementation
********************/

#include <cmath>
#include <binet.h>


Binet::Binet()
{};

int Binet::round()
{
  double x = ((Binet::run()) + 0.5);
  int y = static_cast<int>(x);

  return y;
  
}

void Binet::setN(double n)
{
  _n = n;

}


double Binet::run()
{
  double GLD = 2.236068;
  double fib = 0.0;
  fib = ( (pow(( 1 + GLD ), _n) - pow(( 1 - GLD ), _n)) / (pow( 2, _n) * GLD));

  return fib;
}

