#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    char village[num];
    char villageArray[num];

    for(int i=0; i<num; i++)
    {
        cin >> villageArray[i];
    }
    string possible = "YES";
    for(int i=0; i < num; i++)
    {
        if (villageArray[i] == 'H') {
            village[i] = 'H';

            if (num == 1) {

            } else if (i == 0) {
                if(villageArray[i+1] != '.') {
                    possible = "NO";
                }
            } else if (i==num-1) {
                if (villageArray[i-1] != '.') {
                    possible = "NO";
                }
            } else if (villageArray[i-1] != '.' || villageArray[i+1] != '.' ) {
                possible = "NO";
            }
        } else {
            village[i] = 'B';
        }
    }
    cout << possible << endl;
    if (possible == "YES")
    {
        village[num] = '\0';
        cout << village;
    }    
}