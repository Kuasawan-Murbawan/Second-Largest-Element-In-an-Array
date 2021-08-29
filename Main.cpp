/*********************************************************************
** Author: Afiq Husyairi
** Date: 14 December 2020
** Description: second largest
** Input: list of integers
** Output: index of the second largest element
********************************************************************/
#include <iostream>
using namespace std;
const int SIZE=7;

int index_Of_Second_Largest_Element(int []);

int main()
{
    int list[SIZE];
    
    cout << "Enter integers : ";
    
    for (int i =0; i < SIZE; i++){
        cin >> list[i];
    }
    
    cout << "The index of the second largest element is " << index_Of_Second_Largest_Element(list) << endl;

    return 0;
}

int index_Of_Second_Largest_Element(int list[SIZE]){
    
    int largest,secLargest, secLargestIndex;
    if (list[0]>list[1]){
        largest = list[0];
        secLargest = list[1];
    }
    else if (list[1]>list[0]){
        largest = list[1];
        secLargest = list[0];
    }
    for (int i=2; i<SIZE; i++){
        if (list[i] > largest){
            secLargest = largest;
            largest = list[i];
        }
        else if (list[i] > secLargest){
            secLargest = list[i];
        }
    }
    for (int i=0; i<SIZE; i++){
        if (list[i] == secLargest)
        secLargestIndex = i;
    }
    cout << "Second Largest element is " << secLargest << endl;
    return secLargestIndex;
}