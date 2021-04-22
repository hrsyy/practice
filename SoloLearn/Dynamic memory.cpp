#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *nums = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
            max = nums[i];
    }
    cout << max;

    delete []nums;

    return 0;
}