#include <iostream>
using namespace std;

template <class T>
void selection_sort()
{
    T a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            T temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
    cout << "Elements after sorting:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\n";
    }
}
int main()
{
    cout << "Enter Integer elements for sorting...\n";
    selection_sort<int>();
    cout << "Enter Floating elements for sorting...\n";
    selection_sort<float>();
    return 0;
}

