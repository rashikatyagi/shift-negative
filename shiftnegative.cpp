//bring the negative numbers to left side of the array
#include <iostream>
using namespace std;
void displayArray (int a[], int n)
{
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << " ";
}
void swapNum(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void shiftNegativeOneSide (int a[], int n)
{
    int left = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        if (a[i] < 0)
        {
            swapNum(&a[i], &a[left]);
            left++;
        }
    }
    displayArray(a,n);
}
int main()
{
    int arr[] = {23, -1, 12, -10, -11, 40, 60};
    int n = 7;
    shiftNegativeOneSide(arr, n);
    return 0;
}