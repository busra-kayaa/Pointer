/* int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 };
Yukar�daki say� dizisinde yan yana ka� tane �ift say� ikilisi oldu�unu bulan program kodunu pointer aritmeti�i kullanarak yaz�n�z. 
20-60, 24-26, 50-30, 30-40 �eklinde 4 adet olarak ekrana yazd�r�lacakt�r.*/

#include <stdio.h>
main()
{
	int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40};
	int adet=sizeof(sayilar)/sizeof(int);
	int i;
	int sayac=0;
	
	int *ptr;
	ptr=sayilar;
	
	for(i=0;i<adet-1;i++) //-1 yapmam�n sebebi sondan bir �nceki ve sonuncuyu kar��la�t�rma yapmas� i�in e�er b�yle yapmazsam sonuncuyla 		  	
	{					 //ondan sonra rastgele ald��� say�y� kar��la�t�rma yap�yor.
		if(*(ptr+i)%2==0 && *(ptr+i+1)%2==0)
		{
			printf("%d-%d\n",*(ptr+i),*(ptr+i+1));
			sayac++;
		}
	}
	printf("%d",sayac);
}
