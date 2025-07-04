#include <bits/stdc++.h>
using namespace std;

int* get_array(int n)
{
    int* arr = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Fill the array with user input
    }
    return arr; // Return the pointer to the dynamically allocated array
}
int main()
{
    int n;
    cin >> n;
    int* arr = get_array(n); // Call the function to get the array
    for(int i = 0; i < n; i++) // Print the array until a null terminator
    {
        cout << arr[i] << " ";
    }
    return 0;
}