#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int * get_vector()
{
    int i;
    int arr[SIZE];
    printf("please enter a vector\n");
    for(i=0; i<SIZE; i++)
    {
        printf("%d)",i);
       // scanf("%d", &arr[i]);
       arr[i] = i;
       printf("\n");
    }
    for(i=0; i<SIZE; i++)
        printf("%d)%d\n",i,arr[i]);
    return arr;
}

int SizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

int min_vector_length(int vectorA[], int vectorB[])
{
    int lenA, lenB;
    lenA = sizeof(vectorA) / sizeof(vectorA[0]);
    lenB = sizeof(vectorB) / sizeof(vectorB[0]);
    if (lenA <= lenB)
        return lenA+1;
    return lenB+1;
}

int scalar_product(int vectorA[], int vectorB[], int len )
{
    int i, vector_prod=0;
    for(i=0 ; i<len ; i = i+1)
    {
        printf("%d",vector_prod );
        vector_prod = vector_prod + vectorA[i]*vectorB[i];
    }
}


void main()
{
    //define vars
    int minLen,scalarProd;
    int *vectorA, *vectorB;
    //get vectors
    vectorA = get_vector();
    vectorB = get_vector();

    //compute scalar_prod
    minLen = min_vector_length(vectorA,vectorB);
    scalarProd = scalar_product(vectorA,vectorB,minLen);

    printf("\n\n%d",scalarProd );


}