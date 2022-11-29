#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &vec)
{
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    vec.pop_back();
}

int main()
{
    vector<int> vec;
    
    vec.push_back(23);
    vec.push_back(24);
    vec.push_back(25);
    vec.push_back(26);

    int n = vec.size();
    
    print(vec);
    print(vec);
    print(vec);
}
