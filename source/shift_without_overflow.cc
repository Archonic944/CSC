#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//enter an equation in the form x [<< | >>] y
[[noreturn]] int main() {
    while(true){
        string inp;
        getline(cin, inp);
        istringstream iss(inp);
        string next;
        string operation;
        int num1;
        int num2;
        for(int i = 0; i<3; i++){
            iss >> next;
            if(i == 0) num1 = stof(next);
            else if(i == 1) operation = next;
            else if(i == 2) num2 = stoi(next);
        }
        switch(operation[0]){
            case '>': cout << (num1 >> num2) << endl; break; 
            case '<': cout << (num1 << num2) << endl; break; 
            case '&': cout << (num1 & num2) << endl; break; 
            case '|': cout << (num1 | num2) << endl; break; 
        }
    }
}