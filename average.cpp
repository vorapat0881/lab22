#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char *argv[]){
    double a = 0;
    for(int i=1; i<argc; i++){
    a += atoi(argv[i]);
    }
    if(argc <= 1)cout << "Please input numbers to find average.\n";
        else {cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << a/(argc-1) << "\n";
        cout << "---------------------------------";
        }
    return 0;
}
