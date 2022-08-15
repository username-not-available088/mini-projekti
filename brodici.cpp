#include<iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
void prva(int a){
	if(a == 1){
		cout<<"U PRVOM POKUSAJU";
	}
}
void mapa(int a, int b){
	const int xy = 9;
	for(int i = 0; i<xy+1; i++){
		for(int j = 0; j<xy+1; j++){
			if(a == i && b == j){
				cout<<" x";
			}
			else if(j == 0 )
				cout<<i;
			else if (i == 0)
				cout<<"|"<<j;
			else
			    cout<<" 0";	
		}
		cout<<endl;
	}
}
bool igra(int a, int b){
	int a1,b1;
	bool traje = true;
	cout<<"Gadjajte "<<endl;
	cin>>a1>>b1;
	mapa(a1,b1);
	if(a == a1 && b == b1){
		traje = false;
		cout<<"Pobjedaa";
	}
	else{
		if(abs(a1-a) + abs(b1 - b) < 4)
			cout<<"Jako blizu "<<endl;
		else if(abs(a1-a) + abs(b1 - b) > 4 && abs(a1-a) + abs(b1 - b) < 7)
			cout<<"Blizu "<<endl;
		else
		    cout<<"Dalekooo "<<endl;	
	}
	return traje;
}
int main(){
	
	int x,y,x1,y1,b,unos = 1,z = 0,n = 0;
	bool trn = true;
	
    while(unos == 1){
		cout<<"Neka igrac jedan unese koordinate"<<endl;
	    cin>>x>>y;
	    mapa(x,y);
	    sleep(4);
	    system("cls");
	
	    cout<<"Neka igrac dva unese koordinate"<<endl;
	    cin>>x1>>y1;
	    mapa(x1,y1);
	    sleep(4);
	    system("cls");
	
	    cout<<"Brodovi su skriveni "<<endl;
	    sleep(1);
	    while(trn == true){
		    b++;
		    cout<<"Igrac 1 pogadja "<<endl;
		    trn = igra(x1,y1);
		    if(trn == false){
		        cout<<" ,igrac 1 je pobijedio ";
		        z++;
		        prva(b);
		        break;
		}
    	    sleep(3);
				    
		    cout<<"Igrac 2 pogadja "<<endl;
		    trn = igra(x,y);
		    if(trn == false){
		        cout<<" ,igrac 2 je pobijedio ";
		        n++;
		        prva(b);
		        break;
		    }
		    sleep(3);
		
		cout<<"Krug "<<b<<" je gotov";
		sleep(3);
		system("cls");
	}
	cout<<endl<<"Rezultat je "<<z<<" : "<<n<<endl;
	cout<<"Za novu rundu unesite 1, za kraj unesite 0 ";
	trn = true;
	cin>>unos;
	system("cls");
}
    cout<<"Hvala i vidimo se "<<endl;
}
