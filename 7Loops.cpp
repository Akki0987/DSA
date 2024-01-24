#include<bits/stdc++.h>
using namespace std;

// for loop - if we wnat to exeecute same line of code again and again then rather than writing that code again and again we can use for loops

// for loop executes a line of code until a specified condition is met
/*
int main()
{
     For loop
    int i;
    for (int i=0; i<10;i++)
    {
        cout<<"akki"<<" "<< i<< endl;
    }
    */

//    while loop - The task remains same as for loop but syntax changes  here first condition is checked then the code ia executed and at last the updation is done.
// int i=0;
// while(i<10)
// {
//     cout<<i<<" "<<"AKKI"<<endl;
//     i++;
// }


// Do While loop - In a lot of cases the condition might be user dependent  or might have use cases, if we want to execute our line of code minimum for one time or atleast one time  [Even If the condition doesnt allows do it for first time ]
    
//     int i=2 ;
//     do 
//     {
//         cout<<i<<" "<<"AKKI"<<endl;
//         i++;
//     } while (i<=1);
//     cout<< i<<endl;
    
//     // here i =2 doesnt met the specified condition still "AKKI" gets printed for one time

//     return 0;
// }


// Declaring and printing a array elements through array

int main()
{
    int n;
    cout<<"Enter the number of elements you want to insert : "<<endl;
    cin>>n;
    int arr[n];

    // Taking user inputs
    for(int i =0; i<=n;i++)
    {
        cout<<"Enter element at position : "<<i<<endl;
        cin>>arr[i];
    }

    // Printing array elements 
    for(int i =0; i<=n;i++)
    {
        cout<<"The element at position : "<<i<<endl;
        cout<<arr[i]<<endl;
    }

    return 0;

}