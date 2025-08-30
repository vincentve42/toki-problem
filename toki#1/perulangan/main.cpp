#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a= {};
    vector<int> b = {};
    int angka;
    cin >> angka;

    for(int i=0; i<angka; i++)
    {
        cin >> a[i];
        
    }
    for(int i=0; i<angka; i++)
    {
        for(int z=1; z<angka; z++)
        {            
                if(a[i] == a[z])
                {
                    b[i] = a[i];
                    break;
                }
                else
                {
                    b[i] = a[i];
                    
                }
            
            
        }
        
    }
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";

    for(int i=0; i<angka; i++)
    {
        cout << b[i] << "\n";
    }
    
   

    

}