/* #include <stdio.h>
#include <stdlib.h>

int main()
{
	float Vize, Quiz, Final, Ortalama;
	char* avize = "Vize";
	char* aquiz = "Quiz";
	char* afinal = "Final";
	char* aort = "Ortalama";

	printf("Lutfen Vize notunuzu giriniz:");
	scanf_s("%f", &Vize); // ders notu girdisi al.

	if (Vize < 0 || Vize > 100) // girdisi yapilan ders notlarinin 0-100 referans araliginda olup olmadigini kontrol et. !( "veya" = "||" ; "ve" = "&&" )!
	{
		printf("Hata: Lutfen gecerli bir Vize notu giriniz."); 
		return 1; // ders notu girdisi ref. araligi disindaysa programi 1 hata kodu ile sonlandir.
	}

	printf("Lutfen Quiz notunuzu giriniz:");
	scanf_s("%f", &Quiz);

	if (Quiz < 0 || Quiz > 100)
	{
		printf("Hata: Lutfen gecerli bir Quiz notu giriniz.");
		return 1;
	}

	printf("Lutfen Final notunuzu giriniz:");
	scanf_s("%f", &Final);

	if (Final < 0 || Final > 100)
	{
		printf("Hata: Lutfen gecerli bir Final notu giriniz.");
		return 1;
	}

	int ortalama(); // ortalamayi hesaplamak icin ikinci bir fonksiyon olustur.
	{
		Ortalama = 0.3 * Vize + 0.2 * Quiz + 0.5 * Final; // ders notu ortalamasi hesaplamak icin genel islem
		if (Ortalama >= 90 && Ortalama <=  100)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz AA dir.\a", Ortalama); // "%.2f" ile donem ortalamasinda virgulden sonra gelen basamaklari 2 basamak ile sinirla (hafta4.pdf). Donem ortalamsini ve notunu yazdir.
		}
		else if (Ortalama >= 85 && Ortalama < 90)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz BA dir.\a", Ortalama);
		}
		else if (Ortalama >= 80 && Ortalama < 85)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz BB dir.\a", Ortalama);
		}
		else if (Ortalama >= 70 && Ortalama < 80)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz C dir.\a", Ortalama);
		}
		else if (Ortalama >= 60 && Ortalama < 70)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz D dir.\a", Ortalama);
		}
		else if (Ortalama <= 60)
		{
			printf("\nDonem ortalamaniz %.2f dir. Ders notunuz F dir.\a", Ortalama);
		}
		else // belirtilen durumlar harici bir durum ile karsilasilirsa hata mesaji yazdir.
		{
			printf("Ders notunuz hesaplanirken bir hata ile karsilasildi.");
			return 1;
		}
	}

	// printf("\n\nVize \tQuiz \tFinal \tOrtalama"); // 1. tablo denemesi
	// printf("\n%.2f \t%.2f \t%.2f \t%.2f", Vize, Quiz, Final, Ortalama);

	printf("\n\n|%10s |\t%10s |\t%10s |\t%10s|", avize, aquiz, afinal, aort); // tablo olusturma ve tablo kutucuklarini esit birim yap. (hafta4.pdf)
	printf("\n|%10.2f |\t%10.2f |\t%10.2f |\t%10.2f|", Vize, Quiz, Final, Ortalama); // virgul sonrasi basamaklari 2 ile sinirla ve kutucuk esitle.

	return 0;
}


*/