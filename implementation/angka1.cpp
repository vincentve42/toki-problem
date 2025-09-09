#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h;
    int deret = 2;
    int hasil = 1;
    cin >> h;
    cout << hasil << endl;
    for(int i=1; i < h; i++)
    {
        hasil += deret;
        cout << hasil << endl;
        deret++;
        
    }
}