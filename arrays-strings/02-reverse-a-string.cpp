#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    // Test Case 1
// Input: hello
// Expected output: olleh

// Test Case 2
// Input: abc
// Expected output: cba

    return 0;
}