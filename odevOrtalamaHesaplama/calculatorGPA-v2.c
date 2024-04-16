/* #include <stdio.h>
#include <stdlib.h>

int main()
{
	int varsayilan, gorTablo;
	float Vize, Quiz, Final, Ortalama;
	float yuzdeVize, yuzdeQuiz, yuzdeFinal;
	char* aVize = "Vize";
	char* aQuiz = "Quiz";
	char* aFinal = "Final";
	char* aOrt = "Ortalama";

	printf("\033[1mDonem Notu Hesaplama V2\033[0m\n\n"); // programin ikinci versiyonu: bu versiyonda sinav yuzdelikleri kullanicidan aliniyor.

	printf("Lutfen Vize notunuzu giriniz:");
	scanf_s("%f", &Vize); // ders notu girdisi al.

	if (Vize < 0 || Vize > 100) // girdisi yapilan ders notlarinin 0-100 referans araliginda olup olmadigini kontrol et. !( "veya" = "||" ; "ve" = "&&" )!
	{
		printf("Hata: Lutfen gecerli bir Vize notu giriniz.\n");
		return 1; // ders notu girdisi ref. araligi disindaysa programi 1 hata kodu ile sonlandir.
	}

	printf("Lutfen Quiz notunuzu giriniz:");
	scanf_s("%f", &Quiz);

	if (Quiz < 0 || Quiz > 100)
	{
		printf("Hata: Lutfen gecerli bir Quiz notu giriniz.\n");
		return 1;
	}

	printf("Lutfen Final notunuzu giriniz:");
	scanf_s("%f", &Final);

	if (Final < 0 || Final > 100)
	{
		printf("Hata: Lutfen gecerli bir Final notu giriniz.\n");
		return 1;
	}

	printf("\nDonem ortalamasi hesaplanirken Varsayilan yuzdelikler kullanilsin mi? \n[ Varsayilan: Vize (%%30), Quiz (%%20), Final (%%50) ]\n");
	printf("\n[1] EVET. Varsayilan ayarlar kullanilsin.");
	printf("\n[2] HAYIR. Yuzdeleri ben girecegim.\n\n");
	scanf_s("%d", &varsayilan);

	switch (varsayilan) // bu haftaki switch fonk. ile iki durum tanimlama: varsayilan degerler icin 1, ozel yuzde icin 2.
	{
	case 1:
	{
		Ortalama = 0.3 * Vize + 0.2 * Quiz + 0.5 * Final; // ders notu ortalamasi hesaplamak icin genel islem
		if (Ortalama >= 90 && Ortalama <= 100)
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

		printf("Ders notlarinizi iceren tabloyu goruntulemek ister misiniz?\n");
		printf("[1] EVET. Tabloyu goruntule.\n");
		printf("[2] HAYIR. Tabloyu goruntuleme.\n\n");

		scanf_s("%d", &gorTablo);
		if (gorTablo != 0)
		{
			printf("\n|%10s |\t%10s |\t%10s |\t%10s|", aVize, aQuiz, aFinal, aOrt); // tablo olusturma ve tablo kutucuklarini esit birim yap. (hafta4.pdf)
			printf("\n|%10.2f |\t%10.2f |\t%10.2f |\t%10.2f|\n", Vize, Quiz, Final, Ortalama); // virgul sonrasi basamaklari 2 ile sinirla ve kutucuk esitle.

			return 0;
		}
		else
		{
			return 0;
		}
		break;
	}

	case 2:
	{
		printf("\nVize yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
		scanf_s("%f", &yuzdeVize);

		printf("Quiz yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
		scanf_s("%f", &yuzdeQuiz);

		printf("Final yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
		scanf_s("%f", &yuzdeFinal);

		Ortalama = yuzdeVize * Vize / 100 + yuzdeQuiz * Quiz / 100 + yuzdeFinal * Final / 100;

		if (Ortalama >= 90 && Ortalama <= 100)
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
			printf("\nDers notunuz hesaplanirken bir hata ile karsilasildi.");
			return 1;
		}

		printf("\n\nDers notlarinizi iceren tabloyu goruntulemek ister misiniz?\n");
		printf("[1] EVET. Tabloyu goruntule.\n");
		printf("[2] HAYIR. Tabloyu goruntuleme.\n\n");

		scanf_s("%d", &gorTablo);
		if (gorTablo == 1)
		{
			printf("\n|%10s |\t%10s |\t%10s |\t%10s|", aVize, aQuiz, aFinal, aOrt); // tablo olusturma ve tablo kutucuklarini esit birim yap. (hafta4.pdf)
			printf("\n|%10.2f |\t%10.2f |\t%10.2f |\t%10.2f|\n", Vize, Quiz, Final, Ortalama); // virgul sonrasi basamaklari 2 ile sinirla ve kutucuk esitle.
		}
		else if (gorTablo == 2)
		{
			;
		}
		else {
			printf("Lutfen 1 ya da 2 ile yanitlayiniz.\a");
		}
		break;
	}
	default:
	{
		printf("Hata: Lutfen 1 (Evet) ya da 2 (Hayir) seciniz.");
		break;
	}

	return 0;
	}
}

*/