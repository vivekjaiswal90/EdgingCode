// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arrayA[num];
    int arrayValue;

    for (int i =0; i<num; i++)
    {
        cin >> arrayA[i];
    }

    if (arrayA[num-1] % 10 == 0)
    {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }
}