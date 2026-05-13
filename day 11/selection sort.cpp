#include<iostream>
using namespace std;
void selectionSort(int nums[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++)
    {         if(nums[j]<nums[minindex]){
                minindex=j;
            }
        }
        swap(nums[i],nums[minindex]);   
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    selectionSort(nums,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}