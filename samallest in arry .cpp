#include<iostream>
using namespace std;
int main(){
    int smallest = INT_MIN;
    int Max_index = 0;
    int largest = INT_MAX;
    int Min_index = 0;

    const int size = 6;
    int marks[size] = {5, 3, 6, 2,7,20};
    int max = marks[0];
    
    for (int i = 0; i < size;i++){
        
        if (smallest<marks[i]){
        smallest = marks[i];
        Max_index = i;
        }
        if (largest>marks[i]){
            largest = marks[i];
            Min_index = i;
        }
    }
    cout << "largest  number of array=" << smallest<<", index is = "<<Max_index<<endl;
    cout << "smallest number of array =" << largest<<",index is ="<<Min_index;
    return 0;
}