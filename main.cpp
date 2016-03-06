#include <iostream>

using namespace std;
int test_cases, test_number;


int main() {

    bool tab[10000];          //declare a PrimeArray
    for(int i = 0; i<=10000; i++){          //declare all boolean values to true in PrimeArray
        tab[i] = true;

    }
    tab[0] = false;
    tab[1] = false;
    for(int i = 2; i<= 10000; i++){
        if(i%2==0){
            tab[i] = false;

        }else if(i%3==0){
            tab[i] = false;
        }else if(i%5==0){
            tab[i] == false;
        }
    }
    tab[2] = true;
    tab[3] = true;
    cin >> test_cases;
    string answer_tab[test_cases];
    for(int i = 1; i <= test_cases; i++){
        cin >> test_number;
        if(!tab[i]){
            answer_tab[i] = "NIE";
        }else{
            answer_tab[i] = "TAK";
        }
    }
    for(int i=1;i<= test_cases;i++){
        cout<<answer_tab[i]<<endl;
    }
}