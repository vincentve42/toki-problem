#include <stdio.h>
#include <stdbool.h>
int main()
{
    int angka = 0;
    int hasil = 0 ;

    int ganjilorgenap = 0;

    bool checks = false;

    scanf("%d", &angka);

    
    for(int i=0; i<=angka;)
    {
        
        
        if(!checks)
        {
            i++;
            if(angka > 1)
            {
                int cek = angka % 2;
                if(cek == 0)
                {
                    ganjilorgenap = 2;
                    i++;
                    checks = true;
                   
                }
                else
                {
                    i+= 2;
                    ganjilorgenap = 2;
                    checks = true;
                }
            }
        }
        else
        {
            i+= ganjilorgenap;
        }
        int temp_answer = 0;
        temp_answer = i * i;
        if(temp_answer == angka)
        {
            hasil = i;
            break;
        }

        
        
       
        
    }
    printf("%d",hasil);
}