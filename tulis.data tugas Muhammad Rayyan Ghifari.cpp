#include <stdio.h>

int main(){
	
	FILE *tulisData = fopen("Belajar.txt","w");
	
	//menulis data ke notepad
	fprintf(tulisData,"Nama   : %s\n","Andi");
	fprintf(tulisData,"Umur   : %d\n", 25);
	fprintf(tulisData,"Alamat : %s\n","Kampung Durian Runtuh");
	
	fclose(tulisData); //menutup file
	return 0;
}
