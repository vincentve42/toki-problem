#include <stdio.h>
#include <stdbool.h>
int main()
{
    
    bool tzaph = false;
    bool bevest = true;

    int angka = 0;

    scanf("%d", &angka);

    if(angka < 7)
    {
        tzaph = true;
    }
    if(angka == 1) // 1 bukan prima
    {
        bevest = false;
    }
    for(int i=2; i < angka; i++)
    {
        int cek = 0;
        cek = angka % i;
        
        if(cek == 0)
        {
            bevest = false;
            
            break;
        }
    }
    if(tzaph && bevest)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;

}