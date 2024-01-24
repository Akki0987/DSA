#include<bits/stdc++.h>
using namespace std;
// Functions are set of code whicjh performs something for you.

// Functions are used to modularise code.

// Functions are used to increase readability - if we have 1000 lines of code and we want anyone can read that then name the functions in such a way that its understandable what its doing.

// Functions are used to use same code multiple times - if you are using same line of code again and again its not good to write them againn and again insted that we can put them into a function and call the function whenever we need to use it.


// There are basically four kind of functions - VOID, RETURN, PARAMETERISED, NON-PARAMETERISED.


// void -> It doesnt returns anything.

// NON-PARAMETERISED -> when we did not pass any value to the function or its nothing inside the parenthesis its called NON-PARAMETERISED.

/*void printName(){
      cout<<"hey Akki";
}
int main()
{
    printName();
    return 0;
}
*/


// Parameterised -> When we give some parameters to the function then its called parameterised function

/*
void printName(string name){
      cout<<"hey"<<" "<<name<<endl;
}
int main()
{
    string name;
    cin>>name; 
    printName(name);

    string name2;
    cin>>name2;
    printName(name2);
    return 0;
}
*/

// Math.h -> it provides some inbuilt math functions like min(num1,num2) - it will return the minumum from num1 and num2...... max(num1,num2) - it will return the maximum from num1 and num2 

int findMin(int num1, int num2)
{
    int minimum = min(num1,num2);
    return minimum;
}
int findMax(int num1, int num2)
{
    int maximum = max(num1,num2);
    return maximum;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int res1 = findMin(num1,num2);
    cout<<"Minimum Is " << " "<<res1<<endl;


    int res2 = findMax(num1,num2);
    cout<<"Maximum is " <<" "<<res2;
    return 0;
}


// return -> it returns something to the main ()

// Take two numbers and print its sum
/*
int printSum(int num1, int num2) {
    int sum=num1+num2; // 5+6 = 11  
    return sum; // returns the sum 
}
int main()
{
int num1, num2;
cin>>num1>>num2;
int res = printSum(num1, num2); // sum stored in res
cout<<res; // sum gets printed
return 0;
}
*/


  