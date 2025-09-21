
#include <stdio.h>

int binary_search(int arr[],int num_to_search,int size){

    //giving size of array cuz arr is pointer to first element of array, 
    //not complete array in where we can use sizeof() to retreive the size of array  

     int i=0; //initial point
     int e=size-1; //end point
     int mid=-1;

    while (i<=e){
        mid=(i+e)/2;

        if (arr[mid]==num_to_search){
            printf("your index :%d\n",mid);
        return mid;}
        
        else if(arr[mid]>num_to_search)
        {e=mid-1;}

        else if (arr[mid]<num_to_search){
            i=mid+1;}

        }
    printf("the Number You are trying to reach is out of the array .. ");
    return -1;
}

int main(){
    int arr[]={12,23,34,45,56,67,78,89,90,101};
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int size=sizeof(arr)/sizeof(arr[0]);
    binary_search(arr,num,size);
    
    return 0;
}
