#include<bits/stdc++.h>
using namespace std;


// Pass by Value - here a copy of the original value is given to the other function and any modification in the original value inside tthe other function doesnt changes the original value.

/*
void doSomething(int num)
{
   cout<< "Original value : "<<num<<endl;

   num += 5;
   cout<<num<<endl;

   num += 5;
   cout<<num<<endl; 

}

int main()
{
    int num = 10;
    doSomething(num);// took the org num & send copy to the function doSomething()
    cout<<"Original Value"<<" "<<num<<endl;
    return 0;
}

*/

// Pass by reference - here the original value or the address of the original value is given to the other function and any kind of changes or modification in the original value will  get reflected. we can do it by simply adding an &to the values, &num states -> get the number from adddress. 

void doSomething(int &num)
{
    cout<<"Original Value : "<<num<<endl;

    num += 5;
    cout<<num<<endl;

    num += 5;
    cout<<num<<endl;

    num += 5;
    cout<<num<<endl;

    num += 5;
    cout<<num<<endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout<<"Original Value : "<<num<<endl;
    return 0;
}
