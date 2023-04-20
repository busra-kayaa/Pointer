/* 100 sayýsýndan küçük çift ve 3’e bölünmeyen ilk 10 adet tam sayýyý
diziye alan ve küçükten büyüðe yazdýran program kodunu pointer aritmetiði kullanarak yazýnýz*/

#include<stdio.h>

int main()
{
	int i,sayac=0,dizi[10];
	int *ptr;
	ptr=dizi;
	
	for(i=99; ;i--)
	{
		if(i%2==0 && i%3!=0)
		{
			*(ptr+sayac)=i;
			sayac++;
		}
		if(sayac==10)
		break;
	}
	for(i=sayac-1;i>=0;i--)
	printf("%d ",*(ptr+i));
}
