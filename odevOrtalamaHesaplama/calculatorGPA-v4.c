#include <stdio.h>
#include <stdlib.h>

int main()
{
	int varsayilan, gorTablo;
	float Vize, Odev, Quiz, Final, Ortalama;
	float yuzdeVize, yuzdeOdev, yuzdeQuiz, yuzdeFinal, yuzdeToplam;
	char* aVize = "Vize";
	char* aOdev = "Odev";
	char* aQuiz = "Quiz";
	char* aFinal = "Final";
	char* aOrt = "Ortalama";

	printf("Donem Notu Hesaplama V4\n");

	do {
		printf("Lutfen Vize notunuzu giriniz: ");
		if (scanf_s("%f", &Vize) != 1) {
			// Check if input is a valid value

			printf("Hata: Lutfen gecerli bir Vize notu giriniz.\n");
			while (getchar() != '\n');
			// Clear the input buffer
		}
		else if (Vize < 0 || Vize > 100) {
			printf("Hata: Lutfen 0 ile 100 arasinda bir Vize notu giriniz.\n");
		}
	} while (Vize < 0 || Vize > 100);

	do {
		printf("Lutfen Odev notunuzu giriniz: ");
		if (scanf_s("%f", &Odev) != 1) {
			printf("Hata: Lutfen gecerli bir Odev notu giriniz.\n");
			while (getchar() != '\n');
		}
		else if (Odev < 0 || Odev > 100) {
			printf("Hata: Lutfen 0 ile 100 arasinda bir Odev notu giriniz.\n");
		}
	} while (Odev < 0 || Odev> 100);

	do {
		printf("Lutfen Quiz notunuzu giriniz: ");

		if (scanf_s("%f", &Quiz) != 1) {

			printf("Hata: Lutfen gecerli bir Quiz notu giriniz.\n\a");

			while (getchar() != '\n');
		}

		else if (Quiz < 0 || Quiz > 100)
		{
			printf("Hata: Lutfen 0 ile 100 arasi bir Quiz notu giriniz.\n\a");
		}
	} while (Quiz < 0 || Quiz > 100);

	do {
		printf("Lutfen Final notunuzu giriniz: ");
		if (scanf_s("%f", &Final) != 1) {
			printf("Hata: Lutfen gecerli bir Final notu giriniz.\n\a");
			while (getchar() != '\n');
		}

		if (Final < 0 || Final > 100)
		{
			printf("Hata: Lutfen 0 ile 100 arasi bir Final notu giriniz.\n\a");
		}
	} while (Final < 0 || Final > 100);

	do {

		printf("\nDonem ortalamasi hesaplanirken Varsayilan yuzdelikler kullanilsin mi? \n[ Varsayilan: Vize (%%30), Odev (%%10), Quiz (%%10), Final (%%50) ]\n");
		printf("\n[1] EVET. Varsayilan ayarlar kullanilsin.");
		printf("\n[2] HAYIR. Yuzdeleri elle girecegim.\n\n");
		scanf_s("%d", &varsayilan);

		switch (varsayilan)
		case 1:
		{
			Ortalama = 0.3 * Vize + 0.1 * Odev +0.1 * Quiz + 0.5 * Final;
			if (Ortalama >= 90 && Ortalama <= 100)
			{
				printf("\nDonem ortalamaniz %.2f dir. Ders notunuz AA dir.\a", Ortalama);
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
			else
			{
				printf("Ders notunuz hesaplanirken bir hata ile karsilasildi.");
				return 1;
			}
			break;

		case 2:
		{
			do {

				do {
					printf("\nVize yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
					if (scanf_s("%f", &yuzdeVize) != 1) {
						printf("Lutfen gecerli bir deger giriniz.\n");
						while (getchar() != '\n');
					}
					else if (yuzdeVize < 0 || yuzdeVize > 100) {
						printf("Lutfen 0 ile 100 arasi bir deger giriniz.\n");
					}
				} while (yuzdeVize < 0 || yuzdeVize > 100);

				do {
					printf("\nOdev yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
					if (scanf_s("%f", &yuzdeOdev) != 1) {
						printf("Lutfen gecerli bir deger giriniz.\n");
						while (getchar() != '\n');
					}
					else if (yuzdeOdev < 0 || yuzdeOdev > 100) {
						printf("Lutfen 0 ile 100 arasi bir deger giriniz.\n");
					}
				} while (yuzdeOdev < 0 || yuzdeOdev > 100);

				do {
					printf("\nQuiz yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
					if (scanf_s("%f", &yuzdeQuiz) != 1) {
						printf("Lutfen gecerli bir deger giriniz.\n");
						while (getchar() != '\n');
					}
					else if (yuzdeQuiz < 0 || yuzdeQuiz > 100) {
						printf("Lutfen 0 ile 100 arasi bir deger giriniz.\n");
					}
				} while (yuzdeQuiz < 0 || yuzdeQuiz > 100);

				do {
					printf("\nFinal yuzde kac etkiliyor? Lutfen basinda yuzde isareti (%%) olmadan yaziniz:");
					if (scanf_s("%f", &yuzdeFinal) != 1) {
						printf("Lutfen gecerli bir deger giriniz.\n");
						while (getchar() != '\n');
					}
					else if (yuzdeFinal < 0 || yuzdeFinal > 100) {
						printf("Lutfen 0 ile 100 arasi bir deger giriniz.\n");
					}
				} while (yuzdeFinal < 0 || yuzdeFinal > 100);

				yuzdeToplam = yuzdeVize + yuzdeOdev + yuzdeQuiz + yuzdeFinal;

				if (yuzdeToplam != 100)
				{
					printf("\nHata: Girdiginiz yuzdeliklerin toplami 100 olmali.\n\a");
				}
				else if (yuzdeVize < 0 || yuzdeQuiz < 0 || yuzdeFinal < 0 || yuzdeOdev < 0)
				{
					printf("\nHata: Negatif deger giremezsiniz. Lutfen tekrar deneyin.\n\a");
					yuzdeToplam = 0;
					// Set value != 100 for function to loop again
				}

			} while (yuzdeToplam != 100 || yuzdeVize < 0 || yuzdeQuiz < 0 || yuzdeFinal < 0);

			Ortalama = (yuzdeVize * Vize + yuzdeOdev * Odev + yuzdeQuiz * Quiz + yuzdeFinal * Final) * 0.01;

			if (Ortalama >= 90 && Ortalama <= 100)
			{
				printf("\nDonem ortalamaniz %.2f dir. Ders notunuz AA dir.\a", Ortalama);
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
			else
			{
				printf("\nDers notunuz hesaplanirken bir hata ile karsilasildi.");
				return 1;
			}

			break;
		}
		}
	} while (varsayilan != 1 && varsayilan != 2);

	do {
		printf("\n\nDers notlarinizi iceren tabloyu goruntulemek ister misiniz?\n");
		printf("[1] EVET. Tabloyu goruntule.\n");
		printf("[2] HAYIR. Tabloyu goruntuleme.\n\n");

		scanf_s("%d", &gorTablo);
		if (gorTablo == 1)
		{
			printf("\n|%10s |\t%10s |\t%10s |\t%10s |\t%10s|", aVize, aOdev, aQuiz, aFinal, aOrt);
			printf("\n|%10.2f |\t%10.2f |\t%10.2f |\t%10.2f |\t%10.2f|\n", Vize, Odev, Quiz, Final, Ortalama);
		}
		else if (gorTablo == 2)
		{
			;
		}
		else {
			printf("Lutfen 1 ya da 2 ile yanitlayiniz.\a");
		}
		break;

	} while (varsayilan != 1 && varsayilan != 2);

	return 0;
}
