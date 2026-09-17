#include <iostream>
using namespace std;

int main()
{
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int n = 6;
    int target = 9;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result;

    // Test Case 1
    // Input: nums = {-1, 0, 3, 5, 9, 12}, target = 9
    // Expected output: 4

    // Test Case 2
    // Input: nums = {-1, 0, 3, 5, 9, 12}, target = 2
    // Expected output: -1

    return 0;
}