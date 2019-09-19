//Edward Cruz, Sep 17, 2019

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float a, b, c;
    char  more;

    cout << "\nSolve quadratic equation for giving A,B,C coefficient";
    do {
      cout << "\n\tPlease input A:";
      cin  >> a;
      cout << "\n\t\t\t\t B:";
      cin  >> b;
      cout << "\n\t\t\t\t C:";
      cin  >> c;

      if ((a == 0) && (b == 0) && (c == 0))
      {
          cout << "\n\tInfinite Solutions.";
      }

      /*if ()
      {

      }*/



      cout << "\nDo more (Y/N)? ";
      cin  >> more;

    } while (more == 'y'|| more == 'Y');



    return 0;
}