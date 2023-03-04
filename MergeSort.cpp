#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int>& left, vector<int>& right, vector<int>& MergeSort)
{
    int m = 0, n = 0;
    int i = 0;

    while(m < left.size() && n < right.size())
    {
        if (left[m] < right[n])
        {
            MergeSort[i] = left[m];
            m++;
            i++;
        }
        else
        {
            MergeSort[i] = right[n];
            n++;
            i++;
        }
    }

        while(left.size() > m)
        {
            MergeSort[i] = left[m];
            m++;
            i++;
        }

        while(right.size() > n)
        {
            MergeSort[i] = right[n];
            n++;
            i++;
        }
}

void Divide(vector<int>& v)
{
    if(v.size() <= 1)
    {
        return;
    }

    vector<int> v1;
    vector<int> v2;

    int mid = v.size()/2;

    for(int i=0; i<mid; i++)
    {
        v1.push_back(v[i]);
    }

    for(int j=0; j<(v.size()-mid); j++)
    {
        v2.push_back(v[mid + j]);
    }
    Divide(v1);
    Divide(v2);
    Merge(v1,v2, v);
}

int main()
{
    vector<int> v{9,8,7,3,6,4,1,5};
    Divide(v);

    for(auto i:v)
    {
        cout << i <<endl;
    }
}
