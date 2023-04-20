/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukarýdaki sayý dizisinde yan yana kaç tane çift sayý ikilisi olduðunu bulan program kodunu pointer aritmetiði kullanarak yazýnýz. 
20-60, 24-26, 50-30, 30-40 þeklinde 4 adet olarak ekrana yazdýrýlacaktýr.*/

#include <stdio.h>
main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40};
	int adet=sizeof(sayilar)/sizeof(int);
	int i;
	int sayac=0;
	
	int *ptr;
	ptr=sayilar;
	
	for(i=0;i<adet-1;i++) //-1 yapmamýn sebebi sondan bir önceki ve sonuncuyu karþýlaþtýrma yapmasý için eðer böyle yapmazsam sonuncuyla 		  	
	{					 //ondan sonra rastgele aldýðý sayýyý karþýlaþtýrma yapýyor.
		if(*(ptr+i)%2==0 && *(ptr+i+1)%2==0)
		{
			printf("%d-%d\n",*(ptr+i),*(ptr+i+1));
			sayac++;
		}
	}
	printf("%d",sayac);
}
