// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/
#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main()
{
    int length;

    // cout << "Enter the length of Array" << endl;
    cin >> length;
    int arrayA[length];
    int arrayB[length];

    for(int i=0; i<length; i++)
    {
        cin >> arrayA[i];
    }
    for(int i=0; i<length; i++)
    {
        cin >> arrayB[i];
    }
    int j=0;
    int minimum = arrayA[0];
    do {
        if(minimum > arrayA[j+1])
        {
            minimum = arrayA[j+1];
        }
        j++;
    } while (j < length);
    // cout << "Minimum is: " << minimum <<endl; 

    int steps=0;
    string possible = "false";
    for (int k=0; k<length; k++)
    {
        if(arrayA[k] == minimum)
        {
            // steps = 0;
        } else if (arrayA[k] > arrayB[k]) {
            while (1)
            {
                arrayA[k] = arrayA[k] - arrayB[k];
                if (arrayA[k]==minimum)
                {
                    possible = "true";
                }
                if (arrayA[k] < minimum) {
                    break;
                }
                steps++;
            }
            // while (arrayA[k] >= minimum) 
        } else {
            possible = "false";
            cout << "not possible" << endl;
            break;
            // Not possible
        }
    }

        // cout << not_possible << endl;

    if (possible == "false")
    {
        cout << -1;
    } else {
        cout << steps;
    }

}