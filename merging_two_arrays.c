/* C Program - Merge Two Arrays */
		
#include<stdio.h>
#include<conio.h>
void main()
{

	int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[100];
	printf("Enter Array 1 Size : ");
	scanf("%d",&size1);
	printf("Enter Array 1 Elements : ");
	for(i=0; i<size1; i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter Array 2 Size : ");
	scanf("%d",&size2);
	printf("Enter Array 2 Elements : ");
	for(i=0; i<size2; i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0; i<size1; i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0, k=size1; k<size && i<size2; i++, k++)
	{
		merge[k]=arr2[i];
	}
	printf("Now the new array after merging is :\n");
	for(i=0; i<size; i++)
	{
		printf("%d  ",merge[i]);
	}
	getch();
}

 It is assumed that user will enter arrays in ascending order
#addition of code
include <stdio.h>
 
void merge(int [], int, int [], int, int []);
 
int main() {
  int a[100], b[100], m, n, c, sorted[200];
 
  printf("Input number of elements in first array\n");
  scanf("%d", &m);
 
  printf("Input %d integers\n", m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }
 
  printf("Input number of elements in second array\n");
  scanf("%d", &n);
 
  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }
 
  merge(a, m, b, n, sorted);
 
  printf("Sorted array:\n");
 
  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }
 
  return 0;
}
 
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
 
  j = k = 0;
 
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}
