/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
*******************************************************************************/

//Bubble sort works by repeatedly swapping the adjacent elements if they are in wrong order.
//Time complexity is O(n2) as there are two nested loops.

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
    
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
   return 0;
}
