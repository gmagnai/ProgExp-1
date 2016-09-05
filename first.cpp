#include <iostream>

using namespace std;

double sum(double x, double y){
    return x+y;
}

double minux(double a, double b) {
    if(a > b) {
        return a - b;
    }
    else return b - a;
}

double XIEX(double x,double y){
    while(x!=y){
        if(x>y)
            x=x-y;
        else y=y-x;
    }
    return x;
}

int main() {
    int option;
    cout<<"\t1. Хоёр тооны ялгавар олох";
    cout<<"\t2. Хоёр тооны нийлбэр олох";
    cout<<"\t3. Хоёр тооны ХИЕХ олох";
    cout<<endl;
    cin>>option;
    
    double answer;
    double a,b;


    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<endl<<endl;

    switch(option) {
        case 1:
            answer = minux(a,b);
            cout<<"Хоёр тооны ялгабар нь: ";        
            break;
        case 2:
            answer = sum(a,b);
            cout<<"Хоёр тооны нийлбэр нь: ";
            break;
        case 3:
            answer = XIEX(a,b);
            cout<<"Хоёр тооны хамгийн их ерөнхий хуваагч нь: ";
            break;
        default:
            cout<<"Буруу сонголт!\n";
    }
    
    cout<<endl<<endl<<"Хариу: "<<answer<<endl<<endl;
    
    return 0;
}
