#include <iostream>
#include <string>

using namespace std;

bool IskPeriodic(const string& arr, const int k)
{
    if (k < 0)
    {
        cout << "Число должно быть большое 0!"<< endl;
        return false;
    }
    string a(k, ' ');
    if (k <= arr.size())
    {
        for (int i = 0; i < k; i++)
        {
            a[i] = arr[i];
        }
    }
    else
    {
        return false;
    }
    
}
