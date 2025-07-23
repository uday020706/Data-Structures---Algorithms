#include <iostream>
using namespace std;

int intersection(int arr_1[], int arr_2[], int size_1, int size_2)
{
    for (int i = 0; i < size_1; i++)
    {
        int k;
        for (k = 0; k < i; k++)
        {
            if (arr_1[k] == arr_1[i])
            {
                break;
            }
        }

        if (k == i)
        {

            for (int j = 0; j < size_2; j++)
            {
                if (arr_1[i] == arr_2[j])
                {
                    cout << arr_1[i] << " "; 
                    break;
                }
            }
        }
    }
}


int main()
{
    int arr_1[] = {1, 2, 3, 4};
    int size_1 = sizeof(arr_1) / sizeof(int);
    int arr_2[] = {5, 3, 6, 2};
    int size_2 = sizeof(arr_2) / sizeof(int);

    intersection(arr_1, arr_2, size_1, size_2);
}