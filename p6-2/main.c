#include <stdio.h>
int main()
{
  int n;
  printf("Enter the size of the arrays ");
  scanf("%d", &n);

  int arr1[n],arr2[n],arr3[n];
  int i,scalarSum,vectorSum;

  printf("Enter the elements of array1 ");
  for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }

  printf("Enter the elements of array2 ");
  for(i=0;i<n;i++)
    {
        scanf("%d", &arr2[i]);
    }

  scalarSum = 0;
  for(i=0;i<n;i++)
    {
        scalarSum += arr1[i] + arr2[i];
    }

  for(i=0;i<n;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
  printf("Scalar sum: %d\n", scalarSum);
  printf("Vector sum: ");

  for(i=0;i<n;i++)
    {
        printf("%d ", arr3[i]);
    }
  printf("\n");

}
