Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@niteshbharti005101 
niteshbharti005101
/
CS-Algorithm
Public
1
1
11
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
CS-Algorithm/quick_sort.cpp
@moit-bytes
moit-bytes Added Quick Sort Algorithm
Latest commit e3edaee on Oct 2, 2020
 History
 1 contributor
69 lines (59 sloc)  1.16 KB
   
#include <bits/stdc++.h>
using namespace std;

int arr[10];
int partition(int low, int high);

void QuickSort(int low, int high)
{
    if(low < high)
    {
        int j = partition(low, high);
        QuickSort(low, j);
        QuickSort(j+1, high);
    }
}

int main()
{
    int i, j;
    srand(time(0));
    cout<<"The given array is :"<<endl;
    for (i = 0; i < 10; i++)
    {
        arr[i] = rand()%100;
        cout<<arr[i]<<"\t";
    }
    int low = 0, high = 10;
    arr[high] = 999; // A high value which can't occur in the array acts as terminator
    QuickSort(low, high);
    cout<<"\nThe sorted array is :"<<endl;
    for (i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}


int partition(int low, int high)
{
    int pivot = arr[low];
    int i=low, j = high;

    while(i<j)
    {
        do
        {
           i++;
        } while (arr[i]<=pivot);

        do
        {
           j--;
        } while (arr[j]>pivot);

        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete