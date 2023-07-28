#include <stdio.h>
int main()
{
  int arr[10];
  int i,min,max,sum=0,avg;

  printf("Enter 10 elements in the array ");
  for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
  min = arr[0];
  max = arr[0];
  for(i=1;i<10;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
  else if(arr[i]>max)
    {
      max = arr[i];
    }
    }

  for (i=0;i<10;i++)
    {
        sum += arr[i];
    }
  avg = sum / 10;


  for(i=0;i<5;i++)
    {
        int temp = arr[i];
        arr[i]=arr[9-i];
        arr[9-i]=temp;
    }

  printf("Minimum value: %d\n", min);
  printf("Maximum value: %d\n", max);
  printf("Average value: %d\n", avg);
  printf("Reversed array: ");
  for(i=0;i<10;i++)
    {
        printf("%d ", arr[i]);
    }
  printf("\n");

}
