#include<bits/stdc++.h>
using namespace std;

int main()
{
    // String - its a collection of characters , it also stores every character in terms of indexes, every character is stored at a index

    string s = "AKKI";
    cout<<s[1]<<endl;
    // we can find lentg of a string using size() function
    cout<<s.size()<<endl;
    s[1] ='c';
    cout<<s;
    return 0;
}