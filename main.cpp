#include <iostream>
#include "files/functions.h"

/*
 * Created: 2016-09-06 09:00
 * Tegshee, Tulgaa, Magnai
 */

using namespace std;

int main() {
	int option;
	
    do {
		cout<<"\t1. Хоёр тооны ялгавар олох\n";
		cout<<"\t2. Хоёр тооны нийлбэр олох\n";
		cout<<"\t3. Хоёр тооны ХИЕХ олох\n";
		cout<<"\t0. Гарах\n";
		cout<<endl;
		cout<<"Сонголт: ";
		cin>>option;

		double answer;
		double a,b;

		if(option != 0) {			
			cout<<"A: ";
		    cin>>a;
		    cout<<"B: ";
		    cin>>b;
		    cout<<endl<<endl;
		}

		switch(option) {
		    case 1:			   
		        answer = minux(a,b);
		        cout<<"Хоёр тооны ялгавар нь: ";        
		        break;
		    case 2:			    
		        answer = sum(a,b);
		        cout<<"Хоёр тооны нийлбэр нь: ";
		        break;
		    case 3:			   
		        answer = XIEX(a,b);
		        cout<<"Хоёр тооны хамгийн их ерөнхий хуваагч нь: ";
		        break;
            case 0:
                break;
                
		    default:
		        cout<<"Буруу сонголт!\n";
		}
		
		if(option != 0) cout<<endl<<endl<<"Хариу: "<<answer<<endl<<endl;
 	
    } while(option != 0);   
    
    return 0;
}
