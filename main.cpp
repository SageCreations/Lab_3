//Edward Cruz, Sep 17, 2019

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float a, b, c, tempComplex;
    char  more;

    cout << "\nSolve quadratic equation for giving A,B,C coefficient";
    do {
      cout << "\n\tPlease input A:";
      cin  >> a;
      cout << "\n\t\t\t\t B:";
      cin  >> b;
      cout << "\n\t\t\t\t C:";
      cin  >> c;


      //getting the discriminate
      if ((-b - 4*a*c) > 0)
      {
          //TWO REAL SOLUTIONS
          cout << "\n\tInfinite Solutions.";
      }
      else if ((-b - 4*a*c) == 0)
      {
          //ONE REAL SOLUTION
      }
      else if ((-b - 4*a*c) < 0)
      {
          //pair of complex solutions
      }
      else {}




      cout << "\n\tDo more (Y/N)? ";
      cin  >> more;

    } while (more == 'y'|| more == 'Y');



    return 0;
}