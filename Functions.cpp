#include <iostream>
using namespace std;
int main() {
    const int size=5;
    int arr[size];
    for (int i=0;i<=size;i++){
        int n=rand()%100+1;
        arr[i]=n;}
    for (int j=0;j<=size;j++){
        cout<<arr[j]<<",";}
    return 0;
}