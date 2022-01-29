#include<iostream>
using namespace std;

void merge(int *arr , int shuru, int khatm)

{
         int mid = shuru + (khatm- shuru)/2;

         int len1 = mid- shuru +1;
         int len2 = khatm - mid;

         int *first = new int(len1);
         int *second = new int(len2);

// copy value 
         int mainIndex = shuru;

         for (int i = 0; i < len1; i++)
         {
                  first[i] = arr[mainIndex++];
         }
         
          mainIndex = mid+1;

         for (int i = 0; i < len2; i++)
         {
                  second[i] = arr[mainIndex++];
         }

         // merge 2 sorted array

         int index1 = 0;
         int index2 = 0;
         mainIndex = shuru;

         while(index1 < len1 && index2 < len2)
         {
                  if(first[index1] < second[index2])
                  {
                           arr[mainIndex++] = first[index1++];
                  }
                  else
                  {
                           arr[mainIndex++]= second[index2++];
                  }
         }


         while(index1 < len1)
         {
                  arr[mainIndex++] = first[index1++];

         }

         while(index2 < len2)
         {
                  arr[mainIndex++] = second[index2++];

         }


//      delete []first;
//      delete []second;


         

}



void mergeSort(int *arr , int start , int end)
{
         // base case

         if(start >= end)
         {
                  return;
         } 

         int mid = start +(end-start)/2;

         // left part sort 

         mergeSort(arr,start,mid);


         // righjt part sort 

         mergeSort(arr , mid+1 , end);


         // merge 
         merge(arr,start,end);
}

int main()
{
         int arr[100] = {38,27,43,3,3,3,39,82,10,11};
         int n= 10;

         mergeSort(arr,0,n-1);

         for(int i =0; i< n; i++)
         {
                  cout<<arr[i]<<" ";
         }
}