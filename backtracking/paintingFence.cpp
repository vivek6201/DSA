#include<iostream>
using namespace std;

int findPaintWays(int n, int k){
    if(n == 1) return k;

    if(n == 2) return k + (k*(k-1));

    int ans = (k - 1) * (findPaintWays(n - 1, k) + findPaintWays(n - 2, k));

    return ans;
}

int main() {
    int n = 3;
    int k = 3;

    cout<<findPaintWays(n, k)<<endl;
    return 0;
}