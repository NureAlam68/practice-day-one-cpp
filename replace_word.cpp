
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string to_find = "EGYPT";
    size_t pos;

    while((pos = s.find(to_find)) != string::npos)
    {
        s.replace(pos, to_find.length(), " ");
    }

    cout << s << endl;
    return 0;
}