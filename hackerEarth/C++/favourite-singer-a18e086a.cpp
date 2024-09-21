#include <iostream>
#include <string>
#include <utility>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the length of an array" << endl;
    cin >> num;
    int singers[num];
    cout << "Please enter the singers number:"<< endl;    
    for (int i = 0; i<num; i++)
    {
        cin >> singers[i];
    }


    // for (int j=0; j<sizeof(singers)/sizeof(int); j++)
    // {
    //     cout << singers[j] << " ";
    // }

    int max =0;
    int singerCount = 1;
    int count;
    // int singerArray[];
    sort(singers, singers + num);
    for (int j =0; j< sizeof(singers)/sizeof(int); j++)
    {
        // max = singers[j];
        // singerArray[j] = singerCount;
        count = 1;
        // max = singers[j];
        for (int k=j+1; k<sizeof(singers)/sizeof(int); k++ )
        {            
            // pair<int, char> PAIR.k;
            if (singers[k] == singers[j])
            {
                // singerArray[j]++;
                count ++;
            }
        }
        if (count >= singerCount)
        {
            singerCount = count;
            max = singers[j];
            
        }
    }
    cout << "Favourite Singer is:" << max << endl;
}