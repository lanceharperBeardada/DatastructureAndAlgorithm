#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& array){
  for (int i = 1; i < array.size();i++){
    for (int j = i; j < array.size();j++){
      if(array[j-1]>array[j]){
        swap(array[j - 1], array[j]);
      }
    }
  }
}

int main(){
  vector<int> a = {2, 1, 3, 4, 7, 8, 6, 5};
  insertionSort(a);
  for(auto i: a){
    cout << i << endl;
  }
  return 0;
}