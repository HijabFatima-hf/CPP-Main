#include <iostream>
using namespace std;

int main() {
    const int size=50;
  
    char arr[size];
    cout<<"Enter a word: ";
    cin.getline(arr,size);
    cout<<arr<<endl;
    char arr2[size];
    cout<<"Enter a word: ";
    cin.getline(arr2,size);  
    cout<<arr2<<endl;

    int len=0;
    int len2=0;
   int i=0;
      while(arr[i]!='\0'){
          len++;
          i++;}
    int j=0;
          while(arr2[j]!='\0'){
              len2++;
          j++;
          }
      
    if (len==len2){
    bool equal=true;
    for(int i=0;i<len;i++){
        if(arr[i]!=arr2[i]){
            equal=false;
            break;
        }
    }
     if(equal){
    cout<<"Strings are equal"<<endl;}
        else{cout<<"Strings are not equal.";}
    }
  else{cout<<"Strings are not equal."<<endl;}   
    return 0;
}