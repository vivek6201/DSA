#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<long long int> &trees, int m, int mid)
{
    long long int heightSum = 0;

    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > mid)
        {
            heightSum += (trees[i] - mid);
        }
    }

    return heightSum >= m;
}

int maxHeight(vector<long long int> &trees, int n, int m)
{
    long long start = 0;
    sort(trees.begin(), trees.end());
    long long end = *max_element(trees.begin(), trees.end());
    long long ans = -1;

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        if (isPossible(trees, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 4, m = 7;

    vector<long long int> trees = {20, 15, 10, 17};

    cout<<maxHeight(trees, n, m);
    return 0;
}