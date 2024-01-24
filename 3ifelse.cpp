#include<bits/stdc++.h>
using namespace std;
/*
Write a program that takes an input of age and print if you are adult or not

int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Adult";
    }
    else cout<<"Not an Adult";
    return 0;
}
*/

/*
A school has following rules for grading system :
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 58 to 59 - C
e. 68 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade
 
int main()
{
    int marks;
    cout<<"Enter your Marks : ";
    cin>>marks;
    if(marks<25)
    {
        cout<<"F";
    }
    else if( marks<=44)
    {
        cout<<"E";
    }
    else if( marks<=49)
    {
        cout<<"D";
    }
    else if( marks<=59)
    {
        cout<<"C";
    }
    else if(marks<=79)
    {
        cout<<"B";
    }
    else if( marks<=100)
    {
        cout<<"A";
    }
    return 0;
}
*/
/*Take the age from the user and then decide accordingly 
1. if age < 18.
print -> not eligible for job
2. if age >= 18 and age <=54 ,
print -> "eligible for job"
3. if age >= 55 and age <=57,
print -> eligible for job but retirement soon
4. if age > 57
print -> retirement time 
*/
int main()
{
    int age ;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    if(age<18)
    {
        cout<<"Not eligible for job";
    }
    else if( age<=57) 
    {
        cout<<"Eligible for job";
        if(age>55){
            cout<<"but retirement soon";
        }
    }
  
    else 
    {
        cout<<"Retirement Time";
    }
return 0;

}
