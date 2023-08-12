#include <iostream>
using namespace std;
const int size=10;

void Selection_sort(int arr[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
}
void display(int arr[])
{
    cout << "\nYour Array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << "\nElement[" << i << "] : " << arr[i];
    }
}
int main()
{
    int a[size]={10,5,20,25,38,94,26,77,2,70};
    cout << "\n\nBefore Selection Sort: ";
    display(a);
    cout << "\n\nAfter Selection Sort: ";
    Selection_sort(a);
    display(a);
    return 0;
}