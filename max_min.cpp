#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // find minimum
    int minimum = min(a, min(b, c));

    // find maximum
    int maximum = max(a, max(b, c));

    // output
    cout << minimum << " " << maximum << endl;

    return 0;
}
