
        swap(arr[i++],arr[j--]);
    }
}
void change(int arr[],int n,int k){
    k = k%n;

    rotate(arr,0,n-k-1);
    rotate(arr,n-k,n-1);
    rotate(arr,0,n-1);
    for(int i=0;i<n;i++){