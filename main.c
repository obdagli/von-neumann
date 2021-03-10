#include <stdio.h>
#include <stdlib.h>

int *vonneumann(int **arr, int n){
	
	int i,j,*count;
	//Fonksiyona yollarken "arrlen" degiskenini de yollayabilirdik fakat efficient olmazdi dolayisiyla burada hesaplama yaptim.
	int arrlen=2*n+3;//fonksiyona gonderilen, daha once ekrana girilmis "n" sayisina gore matris boyutu hesaplanir.
	count = (int *)calloc(arrlen, sizeof(int));
	/*Von Neumann's Neighbourhood kurali; siyahlarin satir numarasi ile matrisin origin noktasindaki elemanin satir numarasi farki ile->
	siyahlarin sutun numarasi ve matrisin origin noktasindaki elemanin sutun numarasi farkinin toplami N degerine kucuk veya esit olmali(mutlak degerce)
	Dolayisiyla bunun kontrolunu gerceklestiriyoruz.*/
	for (i = 0; i < arrlen; i++)
		for (j = 0; j < arrlen; j++)	
			if (abs(i-n-1)+abs(j-n-1) <= n){
				*(*(arr+i)+j) = 1;
				count[i]++;
			}	
	return count;
}

void print(int **arr,int arrlen,int n,int *bdcounter){
	int i,j;
	//Ic ice iki for ile klasik matris yazdirma islemi.
	for(i=0;i<arrlen;i++){
	printf("\t");
		for(j=0;j<arrlen;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\t\tSatir\tSutun");
	printf("\n\t----------------------------\n");
	//bdcounter(blackdots counter)dizisini bu fonksiyona yazdirma amaci ile yollamistik.
	//Dizi uzunlugunu kullanarak bdcounter dizisi içerisindeki, her bir satira ait veriyi ekrana yazdiriyor.
	for(i=0;i<arrlen;i++){
		printf("\t\t%d\t%d\n",i+1,bdcounter[i]);
	}
	//bdcounter dizisi ile ekrana yazdirilan, siyah nokta sayilarinin toplam formulu.
	printf("\tToplam siyah kare(SUM):%d",(2*n*(n+1))+1);
}
int main() {
	int n,arrlen,**arr,*bdcounter;
	
	printf("\t\tN:");//N degeri kullanýcýdan istenilir ve degiskene atilir.
	scanf("%d",&n);
	printf("\t-----------------------\n");
	//dizinin boyutunun belirlenmesi.
	arrlen=2*n+3;
	//dizi için bellekte gerekli olan alanin ayrilmasi.
	arr=(int**)calloc(arrlen,sizeof(int*));
	bdcounter = (int *)calloc(arrlen, sizeof(int));
	int i,j;
	for(i=0;i<arrlen;i++){
		arr[i]=(int*)calloc(arrlen,sizeof(int));
	}
	bdcounter = vonneumann(arr,n);
	print(arr,arrlen,n,bdcounter);
	free(arr);
	
	return 0;
}
