#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = 0, e = n - 1;
        while (s <= e)
        {
            swap(a[s], a[e]);
            s++;
            e--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}
