/* Iterators are used to point at the memory addresses of STL containers. 
They are primarily used in sequences of numbers, characters etc. 
They reduce the complexity and execution time of the program.

operations of iterators: 
1. begin()
2. end() 
*/

#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    
    // Declare iterator to a vector
    vector<int>::iterator ptr = arr.begin();

    // cout<<"vector elements are: ";
    // for(ptr = arr.begin(); ptr < arr.end(); ptr++){
    //     cout<< *ptr << " ";
    // }

    // advance()
    // Declaring iterator to a vector
    
      
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr, 3);
      
    // Displaying iterator position
    cout << "\nThe position of iterator after advancing is : ";
    cout << *ptr << " ";

    return 0;
    /*
    output: 
    vector elements are: 1 2 3 4 5
    */
}
