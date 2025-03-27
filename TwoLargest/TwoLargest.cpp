/*Zachary Firth
Data Structures & Algorithm Analysis COP3530
7/5/22
Program: TwoLargest
Purpose: To find the two largest integers in an array by going through each integer and comparing it to the 
current largest and second largest value
*/

#include <iostream>
using namespace std;

//Function definition
// 
//Function to pick the two largest values from the array
void TwoLargest(int * & A, int n)
{
    int large_1 = 0;
    int large_2 = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a value for the array:  ";
        cin >> A[i];  
    }
    for (int j = 0; j < n; j++)  
    {
        if (A[j] >= large_1)  //If the selected value is greater than the orginal largest value
        {
            large_2 = large_1;  
            large_1 = A[j];
          
        }
        else if (large_2 < A[j])  //If the selected value is greater than the orginal 2nd largest value
            large_2 = A[j];

    }
    cout << "Largest is " << large_1 << endl;
    cout << "Second largest is " << large_2 << endl;
}

int main(void)
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *A = new int[n];
    TwoLargest(A, n);
    return 0;
}

