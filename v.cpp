#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n; ++i){
        cin>>array[i];
    }
    array.push_back(9);
    array.push_back(8);
    for(int i=0; i<n+3; ++i){
        cout<<array[i];
    }
    vector<int>::iterator v = array.begin();
    while( v != array.end()) {
        cout << "\nvalue of v = " << *v << endl;
        v++;
    }
    cout<<array.capacity()<<" "<<array.size();
    return 0;
}
