// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];

//     // input array
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // reverse array
//     int i = 0;
//     int j = n - 1;
//     while(i < j)
//     {
//         swap(a[i], a[j]);
//         i++;
//         j--;
//     }

//     // output array
//     for(int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }


//  use for loop
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    // input array
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // reverse array using for loop
    for(int i = 0; i < n/2; i++)
    {
        swap(a[i], a[n-1-i]);
    }

    // output reversed array
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
