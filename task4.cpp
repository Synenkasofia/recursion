#include <iostream>

using namespace std;

int climbStairs(int n)
{
    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;

    cout << "Enter number of steps: ";
    cin >> n;

    cout << "Number of ways: " << climbStairs(n) << endl;

    return 0;
}
