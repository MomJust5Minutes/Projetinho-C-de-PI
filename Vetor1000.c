#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void print_vet(int vet[], int N)
{
    for(int i=0; i<N; i++)
    {
        if (i%7==0)
            printf("\n");
        printf("\t[%3d]: %3d", i+1, vet[i]);
    }
}

void Bubble_Sort(int vet[], int N)
{
    int aux, i, contador;

    for (contador = 1; contador < N; contador++)
    {
        for (i = 0; i < N - 1; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }
    print_vet(vet,N);
}

void quick_sort(int *a, int left, int right)
{
    int i, j, x, y;

    i = left;
    j = right;
    x = a[(left + right) / 2];

    while(i <= j)
    {
        while(a[i] < x && i < right)
        {
            i++;
        }
        while(a[j] > x && j > left)
        {
            j--;
        }
        if(i <= j)
        {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }

    if(j > left)
    {
        quick_sort(a, left, j);
    }
    if(i < right)
    {
        quick_sort(a, i, right);
    }

}
