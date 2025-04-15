#include<bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); 

const int GLOBAL_SIZE = 1e7; // Large global array (auto-initialized to 0)
int global_array[GLOBAL_SIZE];

char var = 'Z'; // Global variable

int main()
{
	fast_io

    // Integer overflow example
    int a = 100000, b = 100000;
    int overflow = a * b;
    cout << "Overflowed int: " << overflow << "\n";
	
    // Integer limits
    cout << "INT_MAX: " << INT_MAX << "\n";
    cout << "INT_MIN: " << INT_MIN << "\n";
	//cout << "INT_MAX + 1 (overflow): " << INT_MAX + 1 << "\n"; // INT_MAX+1=INT_MIN


    // Correct large multiplication using long long
    // 1 LL to convert into long long data type if operands are not of ll type
    long long correct_result = 1LL * a * b;
    cout << "Correct multiplication (long long): " << correct_result << "\n";
  
  	// Floating point multiplication
    double x = 100000, y = 100000;
    double result = x * y;
    cout << "Double multiplication: " << fixed << setprecision(0) << result << "\n";

    // Large double number (shows precision issue)
    double big = 1e24;
    cout << "Large double (1e24): " << big << "\n";


    // ASCII value of a character
    char ch = 'S';
    cout << "ASCII of S: " << (int)ch << "\n";

    // Char array input issues
    char title1[50];
    cin >> title1; // stops at space
    cout << "cin input: " << title1 << "\n";
	//  cin is very inefficient method as it ignores all chars after first white space


    cin>>ws; // Clears leftover whitespace from the stream before the next input

    char title2[50];
    cin.get(title2, 10); // reads up to 9 characters
    cout << "cin.get input: " << title2 << "\n";
    // cin.get(var_name ,size) uesd but not useful as memory allocated earlier.

	// So string object is used as it allows proper memory management.(Dynamic Allocation).
    string title;
    getline(cin >> ws, title);  // Reads full line with leading whitespace ignored
    cout<< "title: "<<title<<"\n";

    string s = "hello World ";
    string combined = s + s;
    combined[5] = '4'; // modify character
    cout << "Substring (index 2, length 5): " << combined.substr(2, 5) << "\n";
    cout << "Index of first 'l': " << combined.find('l') << "\n";

    int LOCAL_SIZE=1e5; // local array size is upto 1e5= 10^5
    int arr[LOCAL_SIZE];

    // Local variable with same name as global (no conflict due to scope)
    {
        char var = 'A';
    }

}