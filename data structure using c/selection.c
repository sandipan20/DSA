#include <stdio.h>
int main() {

   int i, j, position, swap,n,a[10];
   printf("NAME-SANDIPAN\nROLL NO- 2301920100272\n");
   printf("enter the no of terms in array\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("enter the %d element ",i);
    scanf("%d",&a[i]);
   }
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (a[position] > a[j]){
            position = j;}
         
      }
      if (position != i) {
         swap = a[i];
         a[i] = a[position];
         a[position] = swap;
      }
   }
   for (i = 0; i < n; i++){
      printf("%d\n", a[i]);}
   return 0;
}