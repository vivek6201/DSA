#include <iostream>
#include <vector>
using namespace std;

void permutaions(string &str, int index, vector<string> &ans)
{
    if (index >= str.size())
    {
        ans.push_back(str);
        return;
    }

    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        permutaions(str, index + 1, ans);
        swap(str[index], str[j]);
    }
}

int main(){
    string str = "abc";
    int index = 0;
    vector<string> ans;

    permutaions(str,index,ans);

    for(auto s:ans){
        cout<<s<<" ";
    }

    cout<<endl;
    return 0;
}