#include   <iostream>
using namespace std;    

class sum
{
    public:
    int totalSum(int arr[], int size)
    {
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            total += arr[i];
        }
        return total;
    }
    
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    sum s;
    cout << s.totalSum(arr, size) << endl;
}

