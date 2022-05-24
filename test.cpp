#include <iostream>
#include <vector>

using namespace std;

// memoization prime numbers

int contains(vector<int> x, int y){
    for(int i = 0; i < x.size(); i++){
        if(x[i] == y){
            return i;
        }
    }
    return -1;
}
int main(){ 
    vector<int> storage;
    int input;
    while(cin >> input){
        
        if(input <= 1 || (input%2 ==0 && input != 2)){
            cout << "not prime"<< endl;
        }
        else if(contains(storage, input) != -1){
            cout << "prime : " << contains(storage, input) << endl;
        }else{
            bool is_prime = true;
            for(int i=2; i <= input/2; i++){
                if(input % i==0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime){
                storage.push_back(input);
                cout << "prime : " << "test" << endl;
            }
            else cout << "not prime"<< endl;
        }
    }

    return 0;
}