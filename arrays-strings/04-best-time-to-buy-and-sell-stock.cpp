#include <iostream>
using namespace std;

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;

        if (prices[i] < minPrice)
            minPrice = prices[i];
    }

    cout << maxProfit;

    // Test Case 1
// Input: prices = {7, 1, 5, 3, 6, 4}
// Expected output: 5

// Test Case 2
// Input: prices = {7, 6, 4, 3, 1}
// Expected output: 0
    return 0;
}