#include <iostream>
#include <iomanip>

using namespace std;

double power(double x, long long n)
{
    if (n == 0)
        return 1;

    double half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;

    return half * half * x;
}

double myPow(double x, int n)
{
    long long exponent = n;

    if (exponent < 0)
    {
        x = 1 / x;
        exponent = -exponent;
    }

    return power(x, exponent);
}

int main()
{
    double x;
    int n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << fixed << setprecision(5);

    cout << "Result: " << myPow(x, n) << endl;

    return 0;
}
