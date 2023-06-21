#include <stdio.h>
#include <stdbool.h>

#define MAX 50

int data[MAX];
int jumlah;

void input()
{
    printf("Masukkan banyak data: ");
    scanf("%d", &jumlah);
    
    for (int i = 0; i < jumlah; i++)
    {
        printf("Data[%d]: ", i);
        scanf("%d", &data[i]);
    }
}

void printline(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("=");
    }
    printf("\n");
}

void display()
{
    printf("[");
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d ", data[i]);
    }
    printf("]\n");
}

void tukar(int num1, int num2)
{
    int temp = data[num1];
    data[num1] = data[num2];
    data[num2] = temp;
}

int partisi(int kiri, int kanan, int pivot)
{
    int pointerKiri = kiri - 1;
    int pointerKanan = kanan;
    
    while (true)
    {
        while (data[++pointerKiri] < pivot)
        {
        }
        while (pointerKanan > 0 && data[--pointerKanan] > pivot)
        {
        }
        
        if (pointerKiri >= pointerKanan)
        {
            break;
        }
        else
        {
            printf("Tukar Isi: %d, %d\n", data[pointerKiri], data[pointerKanan]);
            tukar(pointerKiri, pointerKanan);
        }
    }
    
    printf("Tukar Pivot: %d, %d\n", data[pointerKiri], data[kanan]);
    tukar(pointerKiri, kanan);
    
    printf("Update Array: ");
    display();
    
    return pointerKiri;
}

void quickSort(int kiri, int kanan)
{
    if (kanan - kiri <= 0)
    {
        return;
    }
    else
    {
        int pivot = data[kanan];
        int partitionPoint = partisi(kiri, kanan, pivot);
        quickSort(kiri, partitionPoint - 1);
        quickSort(partitionPoint + 1, kanan);
    }
}

int main()
{
    printf("Input Array:\n");
    input();
    display();
    
    printline(50);
    
    quickSort(0, jumlah - 1);
    
    printf("Data terurut: ");
    display();
    
    printline(50);
    
    return 0;
}
