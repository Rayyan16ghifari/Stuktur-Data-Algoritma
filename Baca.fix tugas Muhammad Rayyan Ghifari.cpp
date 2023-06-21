#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buff[255];
    FILE *fptr;
    
    // membuka file
    if ((fptr = fopen("Belajar.txt", "r")) == NULL) {
        printf("Error: File tidak ada!");
        // Tutup program karena file tidak ada.
        exit(1);
    }
    
    // baca isi file dengan fgets lalu simpan ke buff
    while (fgets(buff, sizeof(buff), fptr) != NULL) {
        printf("%s", buff);
    }
    
    // tutup file
    fclose(fptr);
    
    return 0;
}
