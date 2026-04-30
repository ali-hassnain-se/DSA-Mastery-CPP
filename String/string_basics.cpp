#include<iostream>

using namespace std;

int main()
{
/*  
    char arr[10];
    cin>>arr;
    cout<<arr;

    here if we give input like this: rohitnegi9
    so, there are the size of characters is 10 and the size of array
    is also 10,
    It will give error because on the last index of array there
    there stores NULL Char, that's why it will give error but
    if we give input only -> rohitnegi  it will run successfully
    because the size of character is 9 and on last index of array
    NULL Char is stored

    NULL Char: It defines that here is the end, you don't need
    to read further, Let's understand with another example

    char arr[10];
    cin>>arr;  // Input: rohit
    arr[2]="\0";  // here we added NULL Char on index 2
    cout<<arr;   Now it will print only "ro" because on index
    there is NULL Char stored that tells it that you don't need
    to read further
    */
   

    /*To prevent this we use the concept of STRING
    Let's start now 
    */

    /* To Initialize String

    string s="Rohit Negi";
    cout<<s<<endl;
    */

    /* Taking input from user

    string s;
    cin>>s;
    cout<<s;
    */

    // string s1;
    // getline(cin, s1); // is used to take input including spaces
    // cout<<s1<<endl;

    // // find size of string
    // string s2="Rohit";
    // cout<<s2.size()<<endl;

    // // Append Operation (Combine Strings)
    // string s3="Mohit";

    // string s4=s2+s3; // also write this s4=s2.append(s3)
    // cout<<s4<<endl;

    // // insert another character at end
    // s2.push_back('p');
    // cout<<s2<<endl;

    // // Remove character
    // s2.pop_back();
    // cout<<s2;

    /* If we want to print output like this:
    rohit is a "good" boy then what should i do, To do this
    we use Escape Char(\): It defines that don't read me but read
    next charcter to me, let's see how
*/

    string s="rohit is a \"good\" boy";
    cout<<s<<endl;

    // Now, If we want print this (/), we can print it like this

    string s2="\\"; // don't write like this string s="\"
    cout<<s2<<endl;


    return 0;
}