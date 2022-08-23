void print_vet(int vet[], int N)
{
    for(int i=0; i<N; i++)
    {
        if (i%7==0)
            printf("\n");
        printf("\t[%3d]: %3d", i+1, vet[i]);
    }
}
