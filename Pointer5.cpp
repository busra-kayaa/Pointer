/* 100 say�s�ndan k���k �ift ve 3�e b�l�nmeyen ilk 10 adet tam say�y�
diziye alan ve k���kten b�y��e yazd�ran program kodunu pointer aritmeti�i kullanarak yaz�n�z*/

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
