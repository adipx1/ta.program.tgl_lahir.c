//Adira Pratama 23346002 
//Program menentukan tanggal lahir 

#include <stdio.h>

int main(void){
	printf("Program Menentukan Tanggal Lahir\n");
	printf("=================================\n");
	
	int n;
	printf("Input Angka Sesuai Absen: ");
	scanf("%d", &n);
	
	if ( n == 1) {
		printf("Adip, 6 april 2006");
	}
	else if ( n == 2) {
		printf("Aca, 7 oktober 2005");
	} 
	else if ( n == 3) {
		printf("Jae, 13 agustus 2005");
	}
	else if ( n == 4) {
		printf("Ripki, 12 april 2005");
	}
	else if ( n == 5) {
		printf("Zikri, 28 mei 2004");
	}
	else if ( n == 6) {
		printf("Zidan, 18 september 2005");
	}
	else if ( n == 7) {
		printf("Valdo, 28 oktober 2005");
	}
	else if ( n == 8) {
		printf("Gilang, 7 november 2004");
	}
	else {
		printf("Pilihan tidak tersedia");
	}
	
	printf("\n");
	
	return 0;
}
