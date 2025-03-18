#include<iostream>
using namespace std;
void checkThreeSum(int arr[], int size, int target){
    int count=0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            for(int k=j+1; k<size; k++)
            {
                if(arr[i] +arr[j] +arr[k] == target)
                {
                    cout<< arr[i] <<" , "<<arr[j] <<" , "<<arr[k]<<endl;
                    count++;
                }
            }
        }
    }
    cout<<" Tootal number of triplets are: "<<count <<endl;
    return;
}
int main(){
    int arr[]={10,20,30,40};
    int size= 4;
    checkThreeSum(arr, size, 60);
    return 0;
}