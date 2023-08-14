#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Input the number of elements to be stored in the array : ");
  scanf("%d", &n);
  printf("Input %d elements in array: \n",n);

  for (int i = -1; i < n-1; ++i) {
    printf("Element - %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("The largest element in the array is : %.2lf", arr[0]);

  return 0;
}
