#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for(char c : s)
    {
        if(c == 'E')
            e++;
        else if(c == 'G')
            g++;
        else if(c == 'Y')
            y++;
        else if(c == 'P')
            p++;
        else if(c == 'T')
            t++;
    }

    int result = min({e, g, y, p, t});
    cout << result << endl;
    return 0;
}