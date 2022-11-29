#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &vec)
{
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    cout << "------------------------------------------ "<< endl;
}

int main()
{
    vector<int> vec;
    
    while(1)
    {
        int temp;
        cin >> temp;

        vec.push_back(temp);

        print(vec);
    }
    

    
}
