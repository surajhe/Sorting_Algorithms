/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
*******************************************************************************/
//The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted
//part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
//1) The subarray which is already sorted. 
//2) Remaining subarray which is unsorted.
//In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 
// Time Complexity O(n2) as there are two nested loops.

#include <iostream>

using namespace std;

int main()
{
    int size;
    
    cin >> size;
    
    int arr[size];
    
    for(int i=0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < size-1; i++)                    // first to last-1
    {
        for(int j = i+1; j < size; j++)                // first+1 to last
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];             // Swapping 
                arr[i] = temp;
            }
        }
        
    }
    
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
   return 0;
}

