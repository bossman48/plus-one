

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int carry=0;
    for(int i=digits.size()-1;i>=0;i--){
        if(i==digits.size()-1 && digits.at(i)+1<10){
            digits.at(i)+=1;
            return digits;
        }

        else if(i==digits.size()-1 && digits.at(i)+1==10){
            digits.at(i)=0;
            if(digits.size()==1){
                digits.insert(digits.begin(),1);
            }
            carry=1;
        }
        else if(digits.at(i)+carry<10 && carry==1){
            digits.at(i)=digits.at(i)+carry;
            carry=0;
        }
        else if(i==0 && digits.at(i)+carry==10 && carry==1){
            digits.at(i)=0;
            digits.insert(digits.begin(),1);
        }
        else if(digits.at(i)+carry==10 && carry==1){
            digits.at(i)=0;
            carry=1;
        }

    }
    return digits;
}

void printVector(vector<int> digits){
    for(int i=0;i< digits.size();i++){
        cout<<digits.at(i)<<" ";
    }
    cout<<endl;
}

 // Driver code
 int main()
 {

    vector<int> test = {1,2,3};
    printVector(plusOne(test));

     vector<int> test2 = {4,3,2,1};
     printVector(plusOne(test2));

     vector<int> test3 = {9};
     printVector(plusOne(test3));

     vector<int> test4 = {9,8,7,6,5,4,3,2,1,0};
     printVector(plusOne(test4));

     vector<int> test5 = {9,9};
     printVector(plusOne(test5));
    return 0;
 }


