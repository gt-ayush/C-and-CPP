//create arr inside a class as a private member and perform all opration on that array.


#include <iostream>
#include <algorithm>
#include <cstddef>
#include <vector>
using namespace std;

class arrop{
    vector<int> arr{1,2,3,4,5,6,4,6,3,8,3,7,3,7,2,9};
    public:
    int sum(){
        int sum=0;
        for(int value:arr){
            sum+=value;
        }
        return sum;
    }
    int resize(int newSize){
        if(newSize<0){
            return -1;
        }
        arr.resize(static_cast<size_t>(newSize));
        return 0;
    }
    int sort(){
        std::sort(arr.begin(),arr.end());
        return 0;
    }
    int display(){
        for(int value:arr){
            cout<<value<<" ";
        }
        cout<<endl;
        return 0;
    }
    int search(int key){
        auto found=find(arr.begin(),arr.end(),key);
        if(found!=arr.end()){
            return static_cast<int>(found-arr.begin());
        }
        return -1;
    }
    int insert(int key){
        arr.push_back(key);
        return 0;
    }
    int remove(int key){
        auto newEnd=std::remove(arr.begin(),arr.end(),key);
        if(newEnd==arr.end()){
            return -1;
        }
        arr.erase(newEnd,arr.end());
        return 0;
    }
    int multiply(int key){
        for(int &value:arr){
            value*=key;
        }
        return 0;
    }
};
//opinter arthmatic 6 opration
//five types of pointer
class ptr{
    public:
    static void demonstrate(){
        int values[3]={10,20,30};
        int *current=values;
        int *next=current+1;
        ptrdiff_t distance=next-current;

        cout<<"Pointer arithmetic: "
            <<*current<<" "
            <<*(current+1)<<" "
            <<*(next-1)<<" "
            <<(next-current)<<" "
            <<(current<next)<<" ";
        ++current;
        cout<<*current<<" (distance="<<distance<<")"<<endl;

        const int *pointerToConst=values;
        int *const constantPointer=values;
        const int *const constantPointerToConst=values;
        void *voidPointer=values;
        cout<<"Pointer types: "
            <<*pointerToConst<<" "
            <<*constantPointer<<" "
            <<*constantPointerToConst<<" "
            <<static_cast<int *>(voidPointer)[0]<<endl;
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
    if(a.insert(key)==0){
        cout<<"Key inserted successfully"<<endl;
    }else{
        cout<<"Array is full; key was not inserted"<<endl;
    }
    cout<<"Array after insertion attempt: ";
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
    ptr::demonstrate();
}