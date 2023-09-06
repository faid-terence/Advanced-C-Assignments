#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char input[75];
    ofstream os;
    os.open("output.txt");
    cout<<"Writing to a text file"<<endl;
    cout<<"\nEnter the name you want for your output file: ";
    cin>>input;
    os << input << endl;
    cout<<"Please Enter Your age";
    cin >> input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open ("output.txt"); // open in read mode
    cout<<"Reading from a text file:"<<endl;
    while (getline(is,line))
       
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
    
}

