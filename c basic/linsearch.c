#include <stdio.h>
int main()
{
  int a[100], search, c, n;
  printf("NAME-SANDIPAN\nROLL NO- 2301920100272\n");

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++){
    scanf("%d", &a[c]);}

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (a[c] == search)    
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n){
    printf("%d isn't present in the array.\n", search);
  }
  return 0;
}