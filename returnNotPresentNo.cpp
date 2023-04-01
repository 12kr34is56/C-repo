// Purpose:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter teh number of elements\n";
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << endl;
        cin >> num[i];
    }
    int max = 0, min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        else if (num[i] < min)
        {
            min = num[i];
        }
    }
    cout << "Max: " << max << ", Min: " << min;
    cout << "The numbers not present are\n";
    for (int i = min; i <= max; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (num[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << i << endl;
        }
    }
    return 0;
}
