#include<iostream>
using namespace std;

int findQuotient(int num1, int num2) {
    int start = 0;
    int end = num2;
    int ans = 0;

    while (start <= end ){
        int mid = start + (end - start) / 2;

        if(mid * num1 == num2) return mid;

        if(mid * num1 <= num2){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    int num1 = 7;
    int num2 = 29;
    int ans = findQuotient(num1, num2);

    cout<< ans<<endl;

    return 0;
}