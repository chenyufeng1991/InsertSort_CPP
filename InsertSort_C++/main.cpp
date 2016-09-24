//
//  main.cpp
//  InsertSort_C++
//
//  Created by chenyufeng on 9/24/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/**
 *  快速排序时间复杂度O(nlogn),空间复杂度O(1),是稳定的排序。
 *
 *  @param vec <#vec description#>
 */

void InsertSort(vector<int> &vec);

int main(int argc, const char * argv[])
{
    int arr[] = {4,2,7,8,1,0};
    vector<int>vectorArr(arr,arr + sizeof(arr) / sizeof(int));
    InsertSort(vectorArr);
    vector<int>::iterator vectorIte;
    for (vectorIte = vectorArr.begin(); vectorIte != vectorArr.end(); vectorIte++)
    {
        cout << *vectorIte << " ";
    }

    return 0;
}

void InsertSort(vector<int> &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] < vec[i - 1])
        {
            int temp = vec[i];
            int j = i - 1;
            for (j = i - 1; j >= 0 && temp < vec[j]; j--)
            {
                vec[j + 1] = vec[j];
            }
            vec[j + 1] = temp;
        }
    }
}

