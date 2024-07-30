#include<iostream>
using namespace std;

int main(){
    char ch[100];
    cin.getline(ch, 100);

    int length = 0;

    for(int i = 0; ch[i] != '\0'; i++){
        length++;
    }

    cout<<"the length is: "<<length;
    return 0;
}