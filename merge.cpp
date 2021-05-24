#include<iostream>
using namespace std;

void Merge(int arr[],int l, int mid , int r){
    int n_1 =   + 1;
    int n_2 = r - mid;

    int a[n_1];
    int b[n_2];
    for (int i = 0; i < n_1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n_2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n_1 && j < n_2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }    
    }

    while (i < n_1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n_2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    
    
    
    }

void MergeSort(int arr[], int l ,int r){
    if (l<r)
    {
        int mid = (l+r)/2; 
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);
        Merge(arr, l,  mid  ,r);
    }
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[] = { 5, 4 ,3 ,2 ,1};
    MergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}