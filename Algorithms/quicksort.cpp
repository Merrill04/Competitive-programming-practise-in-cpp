/* The Idea behind quicksort is that 
1. Take a element called as pivot element.
2. After the first pass the elements on the left of the pivot must be smaller than pivot.
3. Elements to the right of pivot must be greater than pivot.

for example array given is 4 3 2 1
If we take 3 as pivot then the array after 1st pass will be 2 1 3 4.
So now all the left elements are small than 3 and all the right elements are greater than 3.

What in short happens is we are placing the pivot element at its correct position with every pass.

In quicksort we can take pivot as middle, start or end. If taken start or end and it came to be the largest or the 
smallest element then the time complexity of worst case would be n*n. 

For getting the time complexity (best case) of nlogn it is optimal to choose pivot as middle element.

Imp about quick sort:
1. Quick sort is not stable. Like if there are tw same elements they may also get swapped; even though the array will be sorted.
2. Quick sort doesnt require extra O(n) space as compared to merge sort.
*3. merge sort is better in linked list as linked list other than that quicksort is faster than merge sort because in quicksort 
The recursion dosent go till the very end. It stops if the array is sorted at a point.

Imp point about the .sort() method used in various languages. 
So they use hybrid algorithms like mix of quick sort and some other algorithm.  
1. Python and java use Tim sort(merge sort + insertionsort) which is stable and worst time is O(n logn). 
Also uses O(n) space due to merge sort
2. c++ uses introsort(quicksort + heapsort and also insertion sort for small array) which is not stable and 
worst time is O(n logn).

working of Quick sort:
4 2 1 5 3
1 as pivot 
all elements on left of pivot must be smaller and right must be greater
so 1 4 2 5 3
1 is in correct position.

Now make recursive call 

now It will divide array in two parts by calculating pivot
1 4 2 and 5 and 3
in 1 4 and 2
4 is pivot so after sorting it will be
1 2 4 
now 4 is in correct position and array is sorted so it will now move to right part

in 5 and 3 
5 is pivot so after sorting 
3 and 5

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void quicksort(vector<int>& array, int start, int end){
    if(start >= end){
        return;
    }

    int l = start;
    int h = end;
    int mid = l + ((h - l) / 2);
    int pivot = array[mid];

    while(l <= h){

        while(array[l] < pivot){// This and the below while loop takes the l++ and h-- and then the while loop terminates and hence when its sorted it further doesnt make recursion calls.
            l++;
        }
        while(array[h] > pivot){
            h--;
        }

        if(l <= h){
            int temp = array[l];
            array[l] = array[h];
            array[h] = temp;
            l++;
            h--;
        }
    }

    quicksort(array, start, h);
    quicksort(array, l, end);
}

int main(){
    vector<int> arr = {5, 3, 2, 4, 1, 6, 6, 1};
    quicksort(arr, 0, arr.size()-1);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}