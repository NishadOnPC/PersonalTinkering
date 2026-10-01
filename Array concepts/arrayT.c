//Write one that stores 5 numbers in an array and prints the largest.

#include<stdio.h>

int main()
{
int arr[5];

printf("Enter 5 numbers\n");
for ( int i = 0; i < 5 ; i++ )
{
scanf("%d",&arr[i]);
}

int largest = arr[0];
for ( int j=0; j<5 ; j++ )
{
if ( arr[j] > largest )
{
largest = arr[j];
}
}
printf ("largest is %d \n",largest);
return 0;
}
