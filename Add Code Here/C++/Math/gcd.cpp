#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0 && b == 0)              // hcf of two zeroes is not defined
        return -1;
    if (a == 0)                        // hcf of (0,k) is k where k is a positive number 
        return b;
    if (b == 0)
        return a;
    int mini = min(a, b);              // minimum of a and b
    int hcf = 1;
    for (int i = 2; i <= mini; i++)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}
// time complexity --> O(min(a,b))
// auxiliary space --> O(1)


int gcdEfficient(int a, int b)
{
    if (a == 0 && b == 0)              // hcf of two zeroes is not defined
        return -1;
    if (b == 0)
        return a;
    return gcdEfficient(b, a % b);
}
// time complexity --> O(log(min(a,b)))
// auxiliary space --> O(log(min(a,b)))

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
    cout << gcdEfficient(a, b) << '\n';
    return 0;
}
