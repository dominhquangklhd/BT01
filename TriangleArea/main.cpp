#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c, s;
    cin >> a >> b >> c;

    s = (a + b + c)/2;

    cout << sqrt(s*(s-a)*(s-b)*(s-c));
    return 0;
}
