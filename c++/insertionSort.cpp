/* C++ Program to implement Insertion Sort */ 

#include<iostream>
using namespace std;

void INSERTION_SORT(int [],int );

int main()
{
   char ch;
   do
   {
    int n;
    cout<<"Enter the no. of elements in the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    INSERTION_SORT(a,n);

    cout<<"::::Sorted Output:::"<<endl;

    for(int k=1;k<=n;k++)
    {
        cout<<a[k]<<"  ";
    }

    cout<<endl<<"Press 'y' or 'Y' to continue!!!";
    cin>>ch;
   }while(ch=='y'||ch=='Y');

   return 0;

}

 void INSERTION_SORT(int a[],int n)
    {
        int key,i,j;
        for(j=2;j<=n;j++)
        {
            key=a[j];
            i=j-1;
            while((i>0)&&(a[i]>key))
            {
                a[i+1]=a[i];
                i=i-1;
            }
            a[i+1]=key;
        }
    }
 
//Output of the above program