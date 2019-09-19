//Edward Cruz, Sep 17, 2019

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float a, b, c, tempComplex, x1, x2;
    char  more;

    cout << "\nSolve quadratic equation for giving A,B,C coefficient";
    do {
      cout << "\n\tPlease input A:";
      cin  >> a;
      cout << "\n\t\t\t\t B:";
      cin  >> b;
      cout << "\n\t\t\t\t C:";
      cin  >> c;


      if (a==0)
      {
          if (b==0)
          {
              if(c == 0) {
                  cout << "\n\tInfinite Solutions.";
              }
              else {
                  cout << "\n\tContradict Equation.";
              }
          }
          else {
              x1 = (-c/b);
              cout << "\n\tSingle Root. X = " << x1;
          }

      }
      else {

          //getting the discriminate
          if ((b - (4 * a * c)) > 0) {
              //TWO REAL SOLUTIONS
              x1 = (-b + sqrtf(powf(b, 2) - (4*a*c) ) )  / (2*a);
              x2 = (-b - sqrtf(powf(b, 2) - (4*a*c) ) )  / (2*a);

              cout << "\n\tTwo real roots. X1 = " << x1 << ", X2 = " << x2;

          } else if ((b - (4 * a * c)) == 0) {
              //ONE REAL SOLUTION, repeated
              x1 = (-b + sqrtf(powf(b, 2) - (4*a*c) ) )  / (2*a);

              cout << "\n\tRepeated root. X = " << x1;

          } else if ((b - 4 * a * c) < 0) {
              //pair of complex solutions
              tempComplex = sqrtf(fabsf(powf(b, 2) - (4 * a * c))) / (2*a);
              x1 = -b / (2*a);
              x2 = -b / (2*a);

              cout.precision(3);
              cout << "\n\tTwo Complex Roots. X1 = " << x1 << " + " << tempComplex
                   << "i, X2 = " << x2 << " - " << tempComplex << "i";

          }
      }




      cout << "\n\n\tDo more (Y/N)? ";
      cin  >> more;

    } while (more == 'y'|| more == 'Y');



    return 0;
}