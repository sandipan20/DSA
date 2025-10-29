#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}

void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int smallestno_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[smallestno_index]){
                smallestno_index=j;
            }
        }
        swap(a[i],a[smallestno_index]);
    }
}

void insertion_sort(int a[],int n){//not totally clear for the coding part
    for(int i=1;i<n;i++){
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
    }
}

void print(int a[],int n){
    for(int i=0; i<=n-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=8;
    int a[]={4,1,5,2,3,11,34,13};
    // bubblesort(a,n);
    // selectionsort(a,n);
    insertion_sort(a,n);
    print(a,n);

    return 0;
}