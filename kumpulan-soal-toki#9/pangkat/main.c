#include <stdio.h>
#include <stdbool.h>
int main()
{
    int angka = 0;
    bool ispangkat2 = false;
    scanf("%d",&angka);
    int cek = 1;
    if(angka == 1)
    {
        ispangkat2 = true;
        printf("ya");
        
    }
    while(cek < angka)
    {
        cek *= 2;
        if(cek == angka)
        {
            ispangkat2 = true;
            printf("ya");
            break;
        }
        

    }
    if(ispangkat2 == false)
    {
        printf("bukan"); 
    }
    
   
}