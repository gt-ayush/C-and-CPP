//create arr inside a class as a private member and perform all opration on that array.
//opinter arthmatic 6 opration
//five types of pointer

#include <iostream>
using namespace std;

class arrop{
    int arr[16]={1,2,3,4,5,6,4,6,3,8,3,7,3,7,2,9};
    public:
    int sum(){
        int sum=0;
        for(int i=0;i<16;i++){
            sum+=arr[i];
        }
        return sum;
    }
    int sort(){
        for(int i=0;i<16;i++){
            for(int j=i+1;j<16;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return 0;
    }
    int display(){
        for(int i=0;i<16;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    int search(int key){
        for(int i=0;i<16;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    int insert(int key){
        arr[15]=key;
        return 0;
    }
    int remove(int key){ //all occurrences
        int removed = 0;
        for(int i=0;i<16;i++){
            if(arr[i]==key){
                arr[i]=0;
                removed = 1;
            }
        }
        return removed ? 0 : -1;
    }
    int multiply(int key){
        for(int i=0;i<16;i++){
            arr[i]*=key;
        }
        return 0;
    }
};

int main(){
    arrop a;
    cout<<"Sum: "<<a.sum()<<endl;
    a.sort();
    cout<<"Sorted array: ";
    a.display();
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int index=a.search(key);
    if(index!=-1){
        cout<<"Key found at index: "<<index<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }
    cout<<"Enter key to insert: ";
    cin>>key;
    a.insert(key);
    cout<<"Array after insertion: ";
    a.display();
    cout<<"Enter key to remove: ";
    cin>>key;
    if(a.remove(key)==0){
        cout<<"Key removed successfully"<<endl;
    }else{
        cout<<"Key not found"<<endl;
    }
    cout<<"Array after removal: ";
    a.display();
    cout<<"Enter key to multiply: ";
    cin>>key;
    a.multiply(key);
    cout<<"Array after multiplication: ";
    a.display();
}