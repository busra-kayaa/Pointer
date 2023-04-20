/* 10 sayýsýndan büyük tek ve 3’e tam bölünen ilk 5 adet tam sayýyý diziye 
alan ve büyükten küçüðe yazdýran program kodunu pointer aritmetiði kullanarak yazýnýz.*/

#include<stdio.h>

int main()
{
	int i,sayac=0,dizi[10];
	for(i=10; ;i++)
	{
		if(i%3==0 && i%2==1)
		{
			*(dizi+sayac)=i;
			sayac++;
		}
		if(sayac==5)
		break;
	}
	
/*	for(i=0;i<sayac;i++)
	{
		printf("%d ",dizi[i]);  
	}
*/	
	for(i=sayac-1;i>=0;i--)
	{
		printf("%d ",*(dizi+i));
	}
}
