/* 10 say�s�ndan b�y�k tek ve 3�e tam b�l�nen ilk 5 adet tam say�y� diziye 
alan ve b�y�kten k����e yazd�ran program kodunu pointer aritmeti�i kullanarak yaz�n�z.*/

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
