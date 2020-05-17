nclude <iostream>

typedef struct element{
  int key;
}Element; 

void merge(Element list[], Element sorted[], int i, int mid, int n) {
  //i=> 리스트의 첫번째 , mid=> 리스트를 반으로 나눈 수, n=>리스트의 길이(마지막을 가리킴)
  int j, k, t; 
  j = mid + 1;
  k = i; 

  while(i <= mid && j <= n){ 
    if(list[i].key < list[j].key) sorted[k++] = list[i++]; 
    else sorted[k++] = list[j++]; 
  } 


  //밑으 코드로 sorted리스트에 정령되게 되는 list 내의 첫번째 변수는?
  if(i > mid) 
    while(j<=n) sorted[k++] = list[j++]; 
  else
    while(i<=mid) sorted[k++] = list[i++]; 
}
