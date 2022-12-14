int main()
{
    int Vrand[1000];
    int N=1000;
    int menu;
    float media;

    printf("Gerando 1000 valores aleatorios:\n\n");
    vetor_random(Vrand,N);
    print_vet(Vrand,N);

    do
    {
        printf("\n\nDigite uma das opcoes:\n\t[1]: Bubble Sort\n\t[2]: Quick Sort__");
        scanf("%d", &menu);
    }
    while(menu!=1 && menu!=2);

    switch(menu)
    {
    case 1:
        printf("\n\n\nBubble Sort:\n");
        Bubble_Sort(Vrand,N);

    case 2:
        printf("\n\n\nQuick Sort:\n");
        quick_sort(Vrand, 0, N - 1);
        print_vet(Vrand,N);
    }

    media=media_vet(Vrand,N);
    printf("\n\nMedia: %.3f", media);

    mediana_vet(Vrand, N);

    maior(Vrand,N);
    menor(Vrand,N);
    
    getch();
    return 0;
}
