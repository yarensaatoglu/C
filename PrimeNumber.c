#include<stdio.h>

int main()
{
    int i,sayi,sayac=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);
    
    for(i=2;i<sayi;i++)
    {
       if(sayi%i==0)
       {
           sayac++;
       }    
    }     
    
    if(sayac==0)
    {
        printf("Asal");                    
    }
    else
    {
        printf("Asal degil"); 
    }
  return 0;
}
