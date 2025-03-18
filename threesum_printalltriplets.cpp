#include<iostream>
using namespace std;
void printAllTriplets(int arr[], int size, int target){
    int count=0;
    cout<<"Triplets are: "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            for(int k=0; k<size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    cout<< arr[i] <<" , "<< arr[j]<<" , "<< arr[k] <<endl;
                    count ++;
                }
            }
        }
    }
    cout<<"Total number of triplets are: "<< count <<endl;
    return;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    printAllTriplets(arr, size, 60);
    return 0;
}