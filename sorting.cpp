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
