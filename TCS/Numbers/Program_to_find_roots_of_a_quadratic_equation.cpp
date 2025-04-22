#include<iostream>
#include<math.h>
using namespace std;

void quadraticEqu(int a, int b, int c) {
     //for reference https://www.chilimath.com/lessons/intermediate-algebra/quadratic-formula-practice-problems-with-answers/
    //b^2-4ac >0 then two real sol
    //b^2-4ac =0 then one real sol
    //b^2-4ac <0 then two complex sol
    //x=-b+-(b^2-4ac)/2a
    //D=sqrt(b^2-4ac)
    //Deno=2a
    //x1=-b+D/deno
    //x2=-b-D/deno

    // Calculate the discriminant
    int discriminant = (b * b) - (4 * a * c);
    double realPart = -double(b) / (2 * a);

    if (discriminant > 0) {
        double D = sqrt(discriminant);
        double x1 = ( -b + D ) / (2 * a);
        double x2 = ( -b - D ) / (2 * a);
        cout << "Roots are real and different:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } 
    else if (discriminant == 0) {
        double x = realPart;
        cout << "Roots are real and same:\n";
        cout << "x = " << x << "\n";
    } 
    else {
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i\n";
        cout << "x2 = " << realPart << " - " << imagPart << "i\n";
    }
}
int main()
{
quadraticEqu(1,-2,17);
    return 0;
}