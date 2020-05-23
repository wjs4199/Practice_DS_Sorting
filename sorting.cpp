#include "sorting.h"  

void SelectionSort(Element list[], int n) { 
  int i = 0, j = 0, min = 0, temp = 0; 
  for(i = 0; i < n - 1; i++)){ 
    // find the minimum of list[i] through list[n-1] 
    min = i; 
    for(j = i + 1; j < n; j++){ 
      if(list[j].key < list[min].key) min = j; 
    } 
    swap(&list[i], &list[min]); 
    } 
  } 

void BubbleSort(Element list[], int n) { 
  int i, j; 
  for (i = 0; i < n-1; i++) 
    for (j = 0; j < n-i-1; j++) 
      if (list[j].key > list[j+1].key) 
        swap(&list[j], &list[j+1]); 
}

void InsertionSort(Element list[], int n) { 
  int i, j; 
  Element next; 
  for(i = 1; i < n; i++) { 
    next = list[i]; 
    for(j = i – 1; j >= 0 && next.key < list[j].key; j--) 
      list[j+1] = list[j]; list[j+1] = next; 
  } 
}

void QuickSort(Element list[], int left, int right) { 
  int pivot, i, j; 
  if (left < right) { 
    i = left;     
    j = right+1; 
    pivot = list[left].key; 
    do { 
      do i++; 
      while(i <= right && list[i].key < pivot); 
      do j--; 
      while(j  > left  && list[j].key > pivot); 
      if(i<j) swap(&list[i], &list[j]); 
    } while (i<j);     
    swap(&list[left], &list[j]); 
    QuickSort(list, left, j-1); 
    QuickSort(list, j+1, right); 
  } 
}

void merge(Element list[], Element sorted[], int i, int m, int n) { 
  int j, k, t; j = m + 1; 
  // the first element of the second sorted list 
  k = i; 
  while(i <= m && j <= n){ 
    if(list[i].key < list[j].key) sorted[k++] = list[i++]; 
    else                          sorted[k++] = list[j++]; 
  } 
  if(i > m) // All elements in left list are copied 
    while(j<=n) sorted[k++] = list[j++]; 
  // remained elements in right 
  else // There are remained elements in left list 
    while(i<=m) sorted[k++] = list[i++]; 
}

void adjust(Element list[], int root, int n) { 
  int child, rootkey; 
  Element temp = list[root]; 
  rootkey = list[root].key; c
    hild = 2 * root; // left child 
  while(child <= n){ 
    if((child < n) && (list[child].key < list[child+1].key)) child++; 
    // right child is larger 
    if(rootkey > list[child].key) break; 
    else { 
      list[child/2] = list[child]; 
      child *= 2; 
    } 
  } 
  list[child/2] = temp; 
}

