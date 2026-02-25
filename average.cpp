#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){
    
    if(argc ==1) {
        cout<<"Please input numbers to find average.";
    return 0;
    }
    
    double sum=0.0;
    int count=0 ;
    
    for(int i =1;i<argc;i++){
        stringstream ss(argv[i]);
        double num;
        
        if(ss >> num){
            sum += num;
            count ++;
        }
    }
    
    double average = sum/count;
    
    cout<<"---------------------------------"<< endl;
    cout<<"Average of "<< count<<" numbers = ";
    
    cout<<setprecision(6) << average << endl;
    cout<<"---------------------------------"<< endl;
    
    return 0;
}
