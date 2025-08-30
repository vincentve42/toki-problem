#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num[7];

    int count = 0;

    int smallestnum = -100;
    
    int total = 0;

    for(int i=0; i<7; i++)
    {
        cin >> num[i];
        if(i != 0)
        {
            if(num[i] < 0)
            {
                num[i] = num[i] * (-1);
            }
        } 
        total += num[i];
    }     
    cout << endl << total;

}