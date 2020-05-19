  

void SelectionSort(int list[], int n) { 
  int i = 0, j = 0, min = 0, temp = 0; 
  for(i = 0; i < n - 1; i++)){ 
    // find the minimum of list[i] through list[n-1] 
    min = i; 
    for(j = i + 1; j < n; j++){ 
      if(list[j] < list[min]) min = j; 
    } 
    swap(&list[i], &list[min]); 
    } 
  } 

void BubbleSort(int list[], int n) { 
  int i, j; 
  for (i = 0; i < n-1; i++) 
    for (j = 0; j < n-i-1; j++) 
      if (list[j] > list[j+1]) 
        swap(&list[j], &list[j+1]); 
}
