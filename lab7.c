#include <stdio.h>
// 1
/*
int main()
{
  int r,val=1;
  printf("Entre the number of rows you wnat to print\n");
  scanf("%d",&r);

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d",val);
      val++;
    }
    printf("\n");
  }


  return 0;
}
*/
// 2

/*
int main()
{
  int r;
  printf("Entre tne number of rows:");
  scanf("%d",&r);

  for (int i = 1; i <= r; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%3d",i);
    }
    printf("\n");
  }

  return 0;
}
*/

// 3
//  int main()
//  {
//    int r;
//    printf("Entre tne number of rows:");
//    scanf("%d",&r);

//   for (int i = r; i >= 1; i--)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("%3d",i);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// lab 8
/*
int main()
{
  int a[20],size,search,count=0;
  printf("Size of array\n");
  scanf("%d",&size);

  for (int i = 0; i < size; i++)
  {
    scanf("%d",&a[i]);
  }

  printf("ENTRE NUMBER TO BE SEARCHED\n");
  scanf("%d",&search);

  for (int i = 0; i < size; i++)
  {
    if (search=a[i])
    {
      printf("The number is %d index of the array",a[i]);
      count++;
    }

  }

  if (count!=0)
  {
    printf("The number %d if found in the array\n",search);
  }

  else
  {
    printf("The number id not found in the array");
  }





  return 0;
}
*/

// 3 odd and even

int main()
{
  int a[10], even[10], odd[10], size;

  printf("Entre the size of the array\n");
  scanf("%d", &size);

  printf("Entre the elements of the array\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Even numbers in the array are:\n ");
  for (int i = 0; i < size; i++)
  {
    if ((a[i] % 2) == 0)
    {
      even[i] = a[i];
      printf("%d\n", even[i]);
    }
  }

  printf("Odd numbers in the array are:\n ");
  for (int i = 0; i < size; i++)
  {
    if ((a[i] + 1) % 2 == 0)
    {
      odd[i] = a[i];
      printf("%d\n", odd[i]);
    }
  }

  return 0;
}
