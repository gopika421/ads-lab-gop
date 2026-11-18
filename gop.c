#include <stdio.h>
#define MAX 8
void display(int set[])


{
  int i, empty = 1;
  
  printf("{");
  for(i = 0; i<MAX;i++)
  {
    if (set[i] == 1)
    {
    printf("%d", i+1);
    empty =0;
    }
  }
  if(empty)
    printf("Empty");
    
  printf("}\n");
  }
  void add(int set[],int element)
  { 
    if(element >= 1 && <= MAX)
    {
      set[element-1]=1;
      printf("%d added successfully.\n",element);
    }
    else
      printf("Invalid element!\n");
   }   
  void removeElement(int set[],int element)
  { 
    if(element >= 1 && <= MAX)
    {
      set[element-1]=0;
      printf("%d removed successfully.\n",element);
    }
    else
      printf("Invalid element!\n");
  }
  void unionSet(int A[], int B[], int C[])
  {
    int i;
    for (i = 0;i<MAX;i++)
     C[i] = A[i] & B[i];
  }
  
  void intersectionSet(int A[], int B[], int C[])
  {
    int i;
    for (i = 0;i<MAX;i++)
     C[i] = A[i] & B[i];
  }
  void differenceSet(int A[], int B[], int C[])
  {
    int i;
    for (i = 0;i<MAX;i++)
     C[i] = A[i] & (~B[i]);
  }
   int main()
  {
    int A[MAX] = {0};
    int B[MAX] = {0};
    int C[MAX] = {0};
    
    int choice, element, i;
    
    //Read Set A
    printf("Enter number of elements in Set A:");
    scanf("%d", &element);
    
    printf("Enter elements of Set A(1 to %d):",MAX);
    for (i = 0; i < element; i++)
    {
     int x;
     scanf("%d", &x);
     if (x >= 1 && x <= MAX)
      A[x-1] = 1;
     else
      printf("invalid element
    
      
