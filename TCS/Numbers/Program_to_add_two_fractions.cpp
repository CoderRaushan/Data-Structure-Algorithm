#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int n1, int n2)
{
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}

// Function to simplify the fraction
void simplifyFraction(int& num, int& denom) {
    int commonDivisor = gcd(num, denom);
    num /= commonDivisor;
    denom /= commonDivisor;
}

// Function to add two fractions
void addFractions(int num1, int denom1, int num2, int denom2) {
    // Finding the common denominator
    int commonDenom = denom1 * denom2;
    
    // Converting both fractions to have the same denominator
    int numerator = num1 * denom2 + num2 * denom1;
    
    // Simplifying the fraction
    simplifyFraction(numerator, commonDenom);
    
    cout << "The sum of the fractions is: " << numerator << "/" << commonDenom << endl;
}

int main() {
    int num1, denom1, num2, denom2;
    
    cout << "Enter the first fraction (numerator denominator): ";
    cin >> num1 >> denom1;
    
    cout << "Enter the second fraction (numerator denominator): ";
    cin >> num2 >> denom2;
    
    if (denom1 == 0 || denom2 == 0) {
        cout << "Denominator cannot be zero!" << endl;
        return 1;
    }
    
    addFractions(num1, denom1, num2, denom2);
    
    return 0;
}
