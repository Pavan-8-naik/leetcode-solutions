#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        int j = 0;

        while (j < prefix.length() &&
               j < strs[i].length() &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    cout << prefix;

    // Test Case 1
    // Input: {"flower", "flow", "flight"}
    // Expected output: "fl"

    // Test Case 2
    // Input: {"dog", "racecar", "car"}
    // Expected output: ""

    return 0;
}