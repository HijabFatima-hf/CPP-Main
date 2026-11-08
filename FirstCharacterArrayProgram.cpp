#include <iostream>
using namespace std;


int main() {
    const int size=50;
  
    char arr[size];
    cout<<"Enter a sentence: ";
    cin.getline(arr,size);
    cout<<"Enter the character to find: ";
    char find;
    cin>>find;
    bool flag=false;
    
    int i=0;
    int count=0;
    int vowel=0;
    int cons=0;

   while(arr[i]!='\0'){
      if(arr[i]==find){
          flag=true;
          count++;
      }
    if( arr[i]!=' '){
       if(arr[i]=='E' || arr[i]=='A'|| arr[i]=='I'|| arr[i]=='O'|| arr[i]=='U' ||arr[i]=='e' || arr[i]=='a'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u'){
           vowel++;}
       else if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z')){cons++;}}

           

       i++;}
   
    if(flag){
         cout<<"Found!"<<endl;
        cout<<"The character appears "<<count<<" times."<<endl;
    }
    else{
        cout<<"Not found! "<<endl;
    }
    cout<<"The number of vowels: "<<vowel<<endl;
    cout<<"The number of consonants: "<<cons<<endl;
    

    return 0;
}
