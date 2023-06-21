#include <stdio.h>
#include <conio.h>

main()
{
	int i, j, data, k, x, bantu, A[100];
	printf(" Masukkan jumlah data = "); scanf("%d", &data);
	printf("\n\n");
	for (i = 1; i <= data; i++)
	{
		printf(" A[%d] = ", i); scanf("%d" , &A[i]);
	}
	printf("\n\n");
    printf("---------------Data Tak Terurut---------------");
    printf("\n\n");
    printf(" A = { ");
    for (i = 1; i <= data; i++)
    {
    	printf("%d,", A[i]);
	}
	printf(" } ");
	for (i = 1; i <= data; i++)
	{
	k = i;
	j = i + 1;
	while (j <= data)
	{
		if (A[k]>A[j])
		{
			k = j;
		}
		else
		{
			j = j + 1;
		}
	}
	bantu = A[i];
	A[i] = A[k];
	A[k] = bantu;
	


}
printf("\n\n");
printf("---------------Data Terurut---------------");
printf("\n\n");
printf(" A = { ");
for (i = 1; i <= data; i++)
{
	printf("%d,", A[i]);
}
printf(" } ");
getch();
return 0;

}
	
