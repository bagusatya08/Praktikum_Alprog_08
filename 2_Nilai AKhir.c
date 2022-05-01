#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	while (true)
	{
		// mendefinisikan variabel input
		int absen, tugas1, tugas2, tugas3, quiz, uts, uas;
		int na, pil;
		char predikat[2];

		printheader();

		// input ke variabel
		printf("\t %-30s : ", "Masukkan Jumlah Kehadiran");
		absen = validasiabsen();
		printf("\t %-30s : ", "Masukkan Nilai Tugas 1");
		tugas1 = validasitugas();
		printf("\t %-30s : ", "Masukkan Nilai Tugas 2");
		tugas2 = validasitugas();
		printf("\t %-30s : ", "Masukkan Nilai Tugas 3");
		tugas3 = validasitugas();
		printf("\t %-30s : ", "Masukkan Nilai Quiz");
		quiz = validasiquis();
		printf("\t %-30s : ", "Masukkan Nilai UTS");
		uts = validasiuts();
		printf("\t %-30s : ", "Masukkan Nilai UAS");
		uas = validasiuas();

		// menghitung nilai akhir;
		na = (absen / 15 * 0.05) + ((tugas1 + tugas2 + tugas3) / 3 * 0.2) + (quiz * 0.15) + (uts * 0.3) + (uas * 0.3);

		// logika menentukan nilai akhir
		if (na <= 45)
		{
			strcpy(predikat, "E");
		}
		else if (na < 50)
		{
			strcpy(predikat, "D");
		}
		else if (na < 55)
		{
			strcpy(predikat, "D+");
		}
		else if (na < 60)
		{
			strcpy(predikat, "C");
		}
		else if (na < 65)
		{
			strcpy(predikat, "C+");
		}
		else if (na < 75)
		{
			strcpy(predikat, "B");
		}
		else if (na < 80)
		{
			strcpy(predikat, "B+");
		}
		else
		{
			strcpy(predikat, "A");
		}

		// menampilkan hasil nilai akhir
		printf("\t----------------------------------------\n");
		printf("\t*         Nilai akhir anda %-12d*\n", na);
		printf("\t----------------------------------------\n");
		printf("\t*         Nilai akhir anda %-12s*\n", predikat);
		printf("\t----------------------------------------\n");
		printf("\tIngin Keluar/Mengulang Program ? \n");
		printf("\t1.Keluar Program \n");
		printf("\t2.Ulang Program \n");
		printf("\tInput pilihan : ");
		pil = validasiklr();

		if(pil==2)
		{
			main();
		}

		return 0;
	}
}

int validasiabsen()
{
	int absen;
	char hasil;

	if (scanf("%i%c", &absen, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");

		return validasiabsen();
		printf("\t\n------------------------------------------------------------\n");
	}
	else if (absen > 16 || absen < 0)
	{
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");

		return validasiabsen();
		printf("\t\n------------------------------------------------------------\n");
	}
	else
	{
		return absen;
	}
}
// validasitugas
int validasitugas()
{
	int tugas;
	char hasil;

	if (scanf("%i%c", &tugas, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nNilai yang anda masukan tidak valid!\t\nSilakan masukan ulang: ");
		return validasitugas();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else if (tugas > 100 || tugas < 0)
	{
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang : ");
		return validasitugas();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else
	{
		return tugas;
	}
}

// validasiquis
int validasiquis()
{
	int quis;
	char hasil;

	if (scanf("%i%c", &quis, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");
		return validasiquis();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else if (quis > 100 || quis < 0)
	{
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang : ");
		return validasiquis();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else
	{
		return quis;
	}
}

// validasiuts
int validasiuts()
{
	int uts;
	char hasil;

	if (scanf("%i%c", &uts, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");
		return validasiuts();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else if (uts > 100 || uts < 0)
	{
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang : ");
		return validasiuts();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else
	{
		return uts;
	}
}

// validasiuas
int validasiuas()
{
	int uas;
	char hasil;

	if (scanf("%i%c", &uas, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");
		return validasiuas();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else if (uas > 100 || uas < 0)
	{
		printf("\t\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang : ");
		return validasiuas();
		printf("\t\n-------------------------------------------------------------\n");
	}
	else
	{
		return uas;
	}
}

// validasikeluar
int validasiklr()
{
	int pil;
	char hasil;

	if (scanf("%i%c", &pil, &hasil) != 2 || hasil != '\n')
	{
		fflush(stdin);
		printf("\t\nPilihan yang anda masukan tidak valid!\nMasukan ulang: ");
		return validasiklr();
		printf("\t\n-----------------------------------------------\n");
	}
	else if (pil==1)
	{
		
		printf("\t\nTerima Kasih ");
		printf("\t\n-----------------------------------------------\n");
		return 1;
	} 
	else if (pil==2)
	{
		return 2;
	} else
	{
		printf("\t\nPilihan yang anda masukan tidak valid!\nMasukan ulang: ");
		return validasiklr();
		printf("\t\n-----------------------------------------------\n");
	}
	return -1;
}

void printheader()
{
	printf("\t----------------------------------------\n");
	printf("\t|   Aplikasi Penghitung Nilai Akhir    |\n");
	printf("\t----------------------------------------\n");
}
