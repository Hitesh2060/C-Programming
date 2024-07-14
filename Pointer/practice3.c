// Program to calculate the sum of n numbers entered by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    float sum = 0, *p;
    printf("enter the number\n");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));
    printf("enter element numbers\n");
    for (i = 0; i < n; i++)
    {
    scanf("%f", p + i);
    }
  for (i = 0; i < n; i++)
  {
  sum = sum + *(p + i);
  }
  printf("sum=%f\n", sum);
  free(p);
  return 0;
}

// Program to calculate the sum of n numbers entered by the user

/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n, i, *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));
 
  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("Sum = %d", sum);
  
  // deallocating the memory
  free(ptr);

  return 0;
}*/
