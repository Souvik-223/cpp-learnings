#include <iostream>
#include <bits/stdc++.h>  // this is a header file which includes all the header files
using namespace std;

int main(){

    //Input and output in c++
    cout << "hey souvik" << endl << " chakraborty";
    int x,y;
    cin >> x >> y;
    cout << x << y;

    //Data types in c++
    int a = 10; //range -2^31 to 2^31-1
    long b = 10; //range -2^63 to 2^63-1
    long long c = 10; //range -2^63 to 2^63-1

    float d = 10.5; //range 3.4e-38 to 3.4e+38
    double e = 10.5; //range 1.7e-308 to 1.7e+308  (integer values can also be stored in double)

    string s = "souvik"; //string data type
    cin>>s; // only one word input is taken
    cout<<s; 

    getline(cin,s); // for taking input of a sentence or a complete line
    cout<<s;

    char ch = 'a'; //character data type
    cout<<ch;

    // if-else statement
    int age = 19;
    if (age>=18)
    {
        cout<<"you are eligible to vote";
    }
    else if (age<0)
    {
        cout << "age can't be negative";
    }     
    else
    {
        cout<<"you are not eligible to vote";
    }
    
    // switch statement
    int ages = 29;
    switch (ages)
    {
    case 19:
        cout<<"you are eligible to vote";
        break;
    case 0:
        cout << "age can't be negative";
        break;
    default:
        cout<<"you are not eligible to vote";
        break;
    }

    // loops in c++
    
    // for loop
    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    
    //while loop
    while (a=10)
    {
        /* code */
    }
    
    //do-while loop
    do  //Code will be excecuted at least once
    {
        /* code */
    } while (a>=10);


    // Arrays in c++

    // 1D array - stores elements of same data type in consecutive memory locations.
    int arr1[5] = {1,2,3,4,5}; //array declaration and initialization
    int arr2[5]; //array declaration
    int arr3[] = {1,2,3,4,5}; //array initialization
    cin >> arr2[0] >> arr2[1] >> arr2[2] ; //input
    cout << arr2[0] << arr2[1] << arr2[2]; //output

    //2D array - stores elements of same data type in consecutive memory locations in rows and columns.
    int arr4[2][3] = {{1,2,3},{4,5,6}}; //array declaration and initialization
    int arr5[2][3]; //array declaration
    int arr6[][3] = {{1,2,3},{4,5,6}}; //array initialization
    cin >> arr5[0][0] >> arr5[0][1] >> arr5[0][2] ; //input
    cout << arr5[0][0] << arr5[0][1] << arr5[0][2]; //output

    // Strings in c++
    string s - "Souvik";
    int len = s.size();
    s[len-1]='y'; //changing the last character of the string by passing a character
    cout << s[len-1];

    //Functions in c++
    //void function
    void print()
    {
        cout << "Hello";
    }

    //return function
    int add(int a, int b)
    {
        return a+b;
    }

    //function with parameters
    void print(string s)
    {
        cout << s;
    }

    //function without parameters
    void print()
    {
        cout << "Hello";
    }

    



    return 0;
}
