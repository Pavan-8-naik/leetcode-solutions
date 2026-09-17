#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "anagram";
    string t = "nagaram";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "true";
    else
        cout << "false";


    // Test Case 1
// Input: s = "anagram", t = "nagaram"
// Expected output: true

// Test Case 2
// Input: s = "rat", t = "car"
// Expected output: false    
    return 0;
}
