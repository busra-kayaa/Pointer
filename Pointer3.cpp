/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde çift sayýlarý tek sayýya (kendinden bir sonraki sayýya) çeviren 
program kodunu pointer aritmetiði kullanarak yazýnýz. 20->21, 60->61 þeklinde olacaktýr.*/

#include<stdio.h>
int main()
{
    int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
    int adet=sizeof(sayilar)/sizeof(int);
    int k=0;
    
    for(int i=0;i<adet;i++)
    {
    	if(*(sayilar+i)%2==0)
    	{
    		printf("%d=> %d\n",*(sayilar+i),*(sayilar+i)+1);
		}
	}
}
