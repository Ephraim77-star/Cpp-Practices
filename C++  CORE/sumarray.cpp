#include <iostream>
using namespace std;

double getTotal(double nums[],double n){

    double sum = 0;

    for(int i = 0; i < n; i++){

        sum += nums[i];
    }

    return sum;

}

int main(){

    double nums[] = {5.6,6.6,8.4,9.4,3.34};
    double n = sizeof(nums)/sizeof(double);

    double total = getTotal(nums,n);


    cout << "The sum of the numbers are : "<<total<<endl;

    return 0;
}