#define MAX_SIZE 1000

typdef struct { 
int key; /* other fields */ 
} Element;

/*prototype*/
void SelectionSort(Element list[], int n);

void BubbleSort(Element list[], int n) ;

void InsertionSort(Element list[], int n);

void QuickSort(Element list[], int left, int right);

void merge(Element list[], Element sorted[], int i, int m, int n) ;

void adjust(Element list[], int root, int n);

void HeapSort(Element list[], int n);
