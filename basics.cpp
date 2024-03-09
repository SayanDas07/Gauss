#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key);

int main() { 

    int even[6] = {2 , 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int key1,key2;
    cout<<"enter key for even : "<<endl;
    cin>>key1;
    int evenIndex = binarySearch(even, 6, key1);

    cout << " Index of key"<<key1<<"is:"<< evenIndex << endl;
    cout<<"enter key for odd : "<<endl;
    cin>>key2;

    int oddIndex = binarySearch(odd, 5, key2);

    cout << " Index of key"<<key2<<"is:"<< oddIndex << endl;
    return 0;
}

int binarySearch(int arr[], int size, int key) {

    int start = 0; //starting index
    int end = size-1;  //end index

    int mid = start + (end-start)/2; //optimised formula of mid index

    while(start <= end) {           

        if(arr[mid] == key) {
            return mid;           //when we found key at mid
        }

        
        if(key > arr[mid]) {         
            start = mid + 1;     //go to right wala part of mid for inc. array
        }
        else{                     //(key < arr[mid])
            end = mid - 1;        // go left part of mid for inc. array
        }

        mid = start + (end-start)/2; //update mid with new s and e
    }
    
    return -1;  //key not found
}


