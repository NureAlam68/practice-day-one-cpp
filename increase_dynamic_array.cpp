#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // Read the size of the array
    int *A = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> A[i]; // Read elements into the array
    }

    int m;
    cin >> m; // Read the new size of the array
    int *B = new int[m]; // Dynamically allocate a new array of size m

    for (int i = 0; i < n; i++)
    {
        B[i] = A[i]; // Copy elements from the old array to the new array
    }

    delete[] A; // Free the memory allocated for the old array

    // input the remaining elements for the new array
    for (int i = n; i < m; i++)
    {
        cin >> B[i]; // Read additional elements into the new array
    }
    // Output the new array
    for (int i = 0; i < m; i++)
    {
        cout << B[i] << " "; // Print each element of the new array
    }   
    return 0;
}