#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s = "()[]{}";

    stack<char> st;
    bool valid = true;

    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{'))
            {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty())
        valid = false;

    cout << (valid ? "true" : "false");

    // Test Case 1
    // Input: "()[]{}"
    // Expected output: true

    // Test Case 2
    // Input: "(]"
    // Expected output: false

    return 0;
}