#include <stdio.h>

#define MAX_SIZE 100
#define MIN_SIZE 5

int getLenOfArray();
int * getIntArray(int * array,int length);
int product_scalar(int vectorA[], int vectorB[], int arr_length);
void printIntArray(int * array, int length);
void printMetadata(int size_of_arr,int * vectorA, int * vectorB, int sum);

void main()
{
    /**
     * function gets size and int array from the user for two arrays
     * calculated the scalar product and prints in the console with
     * all the vector data
     */
    //initialize
    int size_of_arr,product;
    int vectorA[MAX_SIZE], vectorB[MAX_SIZE];

    //body
    size_of_arr = getLenOfArray();
    getIntArray(vectorA,size_of_arr);
    getIntArray(vectorB,size_of_arr);

    product = product_scalar(vectorA,vectorB,size_of_arr);

    //just prints
    printMetadata(size_of_arr,vectorA,vectorB,product);

}

int getLenOfArray()
{
    /**
     * function gets a size of the array from user
     * if the size is bigger then max defined size, returns default max size
     * if size is negative or zero, returns default min size
     * @return int, size of array
     */
    int size;
    printf("enter array length:");
    scanf("%d",&size);

    if(size > MAX_SIZE)
        size = MAX_SIZE;
    if(size <=0)
        size = MIN_SIZE;
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

void printIntArray(int * array, int length)
{
    /**
     * function prints an array of ints
     * @param array - int array
     * @param length - array length
     */
    int i;
    for(i=0;i<length;i=i+1)
        printf("%d)%d \n",i,array[i]);
}
void printMetadata(int size_of_arr,int * vectorA, int * vectorB, int product)
{
    /**
     * function that prints all the data related to this exercise
     * @param size_of_arr - int, size of array2
     * @param vectorA - int array1
     * @param vectorB - int array2
     * @param product - int, scalar product of array1 and array2
     */
    printf("\n\n");
    printf("Size of array: %d\n",size_of_arr);
    printf("Elements of array A:\n");
    printIntArray(vectorA,size_of_arr);
    printf("\n");
    printf("Elements of array B:\n");
    printIntArray(vectorB,size_of_arr);

    printf("\nThe scalar product is: %d\n",product);
}