#include <bits/stdc++.h>

using namespace std;

string fWord(int n)
{
    if (n == 0) return "a";
    if (n == 1) return "b";
    return fWord(n - 1) + fWord(n - 2);
}

int main()
{
    int n; cin >> n;
    cout << fWord(n);

    return 0;
}
