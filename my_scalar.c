#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int getSizeOfArray();
int minInt(int num1, int num2);
int * getIntArray(int * array,int length);
int product_scalar(int vectorA[], int vectorB[], int arr_length);
void printIntArray(int * array, int length)
{
    int i;
    for(i=0;i<length;i=i+1)
        printf("%d)%d \n",i,array[i]);
}
void printMetadata(int size_of_arrA,int size_of_arrB,int * vectorA, int * vectorB, int sum)
{
    int i;
    printf("\n\n");
    printf("Size of array A: %d\n",size_of_arrA);
    printf("Elements of array A:\n");
    printIntArray(vectorA,size_of_arrA);
    printf("\n");
    printf("Size of array B: %d\n",size_of_arrB);
    printf("Elements of array B:\n");
    printIntArray(vectorB,size_of_arrB);

    printf("\nThe scalar product is: %d\n",sum);
}

void main()
{
    //initialize
    int i; //delete
    int size_of_arrA,size_of_arrB,size_of_arr,sum = 0;
    int vectorA[MAX_SIZE], vectorB[MAX_SIZE];

    //body
    size_of_arrA = getSizeOfArray();
    getIntArray(vectorA,size_of_arrA);
    size_of_arrB = getSizeOfArray();
    getIntArray(vectorB,size_of_arrB);

    size_of_arr = minInt(size_of_arrA,size_of_arrB);

    sum = product_scalar(vectorA,vectorB,size_of_arr);

    printMetadata(size_of_arrA,size_of_arrB,vectorA,vectorB,sum);

}

int getSizeOfArray()
{
    /**
     * function gets a size of the arry from user
     * if the size is bigger them max defined size, returns default max size
     * @return int, size of array
     */
    int size;
    printf("enter array length:");
    scanf("%d",&size);

    if(size > MAX_SIZE)
        size = MAX_SIZE;
    return size;

}

int minInt(int num1, int num2)
{
    /**
     * function returns min between two integers
     * @param num1 - int
     * @param num2 - int
     * @return minimal of two numbers
     */
    int min = num1;
    if(num2<num1)
        min = num2;
    return min;
}

int * getIntArray(int * array,int length)
{
    /**
     * funct get an array (pointer) and the array length
     * returns a assigned array by the user
     * @param array - int pointer
     * @param length - array length
     * @return int array after it was assigned
     */
    int i;
    printf("please enter array elements (int only):\n");
    for(i=0;i<length;i=i+1)
    {
        printf("%d)",i);
        scanf("%d",&array[i]);
    }
    return array;
}

int product_scalar(int vectorA[], int vectorB[], int arr_length)
{
    /**
     * function gets two int vectors and the length of the shorter one and returns the scalar product of them.
     * @param VectorA - int array
     * @param VectorB - int array
     * @param arr_length - int array
     * @return scalar product of the 2 vectors
     */
    int i, scalar_prod=0;
    for(i=0;i<arr_length;i=i+1)
    {
        scalar_prod = scalar_prod + vectorA[i] * vectorB[i];
    }
    return scalar_prod;
}

