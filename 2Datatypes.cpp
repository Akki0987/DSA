#include<bits/stdc++.h>
using namespace std;

int main()
{
    // To store numbers

  // int = to store numbers from range -2,147,483,648 to 2,147,483,647 / 4 bytes
  int x =10;
  cout<<x<<endl;

  // long = it has a wider range than int ranges from -2,147,438,648 to 2,147,438,647
  long y = 100;
  cout<<y<<endl;

  // long long = it has more wider range from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
  long long z = 1001901983983029;
  cout<<z<<endl;

//To store floating point numbers we have float, double.

  // float (4byte)= it is used to store floating point numbers from range 1.2E.38 to 3.4E+38
    float a = 5.6;
    cout<<a<<endl;

  // double (8 byte) = it has wider range than float

double b = 143555.433;
cout<<b<<endl;

// long double(10 byte) = more wider range
long double c = 4434734.348;
cout<<c<<endl;


// To store strings
// string and getline - string takes space as terminating character , so to take a whole string as input we have to use the getline() that takes the whole line as input till the line break
string s;
getline(cin,s);
cout<<s<<endl;


// Characters 
char ch = 'h';
cout<<ch;

// Note : Every datatype takes certain memory to store a value so depending on that we decide which datatype we should use
return 0;
}