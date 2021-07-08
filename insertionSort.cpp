/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
*******************************************************************************/
//Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually 
//split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
//Algorithm 
//To sort an array of size n in ascending order: 
//1: Iterate from arr[1] to arr[n] over the array. 
//2: Compare the current element (key) to its predecessor. 
//3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
// Time complexity is O(n2) as execution time increases with no. of inputs

#include <iostream>

using namespace std;

int main()
{
    int size;
    
    cin >> size;
    
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 1; i < size; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        
        while(arr[j] > curr && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
            
        }
        
        arr[j+1] = curr;
        
    }
    
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " " <<endl;
    }

    return 0;
}
