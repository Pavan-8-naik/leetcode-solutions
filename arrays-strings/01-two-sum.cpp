#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << ", " << j << "]";
                return 0;
            }
        }
    }

    // Test Case 1
// nums = {2, 7, 11, 15}
// target = 9
// Expected output = [0, 1]

// Test Case 2
// nums = {3, 3}
// target = 6
// Expected output = [0, 1]
    return 0;
}