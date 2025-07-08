#include <iostream>
using namespace std;

int main() {
    long long X, Y; // Using long long to handle numbers up to 10^5
    cin >> X >> Y; // Read two space-separated numbers
    
    // Print the results in the required format
    cout << X << " + " << Y << " = " << X + Y << endl;
    cout << X << " * " << Y << " = " << X * Y << endl;
    cout << X << " - " << Y << " = " << X - Y << endl;
    
    return 0;
}