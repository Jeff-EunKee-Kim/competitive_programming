using namespace std; 
  
int binarySearch(int arr[], int l, int r, int target) { 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (arr[m] == target) {
            return m; 
        } else if (arr[m] < target) {
            l = m + 1; 
        } else {
            r = m - 1; 
        }
    } 
    return -1; 
} 

int binarySearchRec(int arr[], int l, int r, int target) { 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if (arr[mid] == target) 
            return mid; 
        if (arr[mid] > target) 
            return binarySearch(arr, l, mid - 1, target); 
        return binarySearch(arr, mid + 1, r, target); 
    } 
    return -1; 
} 

int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int target = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, target); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0; 
} 