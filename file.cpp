#include<iostream>
using namespace std;
int main(){
    int num[100];
    int n;
    cout<< "Enter the number of entries: ";
    cin>> n;

    cout<< "Enter the integers: ";
    
    int i = 0;
    while(i <= n - 1){
        cin>> num[i];
        i++;
    }

    // Reversing  alternate number
    // That is first and second then third and fourth.

    int j = 0;
    while (j < n - 1 )
    {
        swap(num[j],num[j+1]);
        j=j+2;
    }
    
    cout<< "After alternate swap your array is : " ;

for (int i = 0; i<n ; i++){
    cout<< num[i] << " ";
}
     
}
