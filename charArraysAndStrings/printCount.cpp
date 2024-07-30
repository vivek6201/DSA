#include <iostream>
using namespace std;

// void printCount(int n)
// {
//     if (n == 1)
//     {
//         cout << 1 << " ";
//         return;
//     }
//     printCount(n - 1);
//     cout<< n <<" ";
// }

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n - 2);
}

int main(){
    // printCount(5);

    for(int i = 0; i < 10; i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}