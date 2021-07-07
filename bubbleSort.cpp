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
   // bool swap;
    
    for(int i=0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0; i < size - 1; i++)               
    {
       // swap = false;
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];    // swapping
                arr[j + 1] = temp;
            //  swap = true;
            }
        }
        
       // if(swap == false)
       //   break;
        
    }
    
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
   return 0;
}

// This algorithm can be optimized by stopping the algorithm if inner loop didn’t cause any swap 
// as shown in commented part of code above 


