#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    int position = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < nums.size())
    {
        nums[position] = 0;
        position++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    // Test Case 1
    // Input: {0, 1, 0, 3, 12}
    // Expected output: 1 3 12 0 0

    // Test Case 2
    // Input: {0}
    // Expected output: 0

    return 0;
}