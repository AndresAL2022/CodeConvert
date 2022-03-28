#include<iostream>
#include<string.h>
#include<cmath>
#include<stdlib.h>
#include<iomanip>
#include<time.h>
#include<ctime>
#include<windows.h>

using namespace std;

string toBinary(int n);
void DecToBin();
void menuUI();
void menuUX();
void BinToDec();
void octal(int x);
int octalmain();
void DecToHex();
void HexToDec();
void OctToDec();
void HexToBin();
void BinToHex();
void DecToAll();
void TablaConversiones();

int main(){
	
	cout<<endl<<"--------------- CodeConvert v1.1 ----------------"<<endl;
	
	//delay(1000); legacy
	
	menuUI();
	

}

string toBinary(int n){
   
    string r;
   
    while (n != 0){
    
	    r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    
	}
	
    return r;
    
}

void DecToBin(){
	
	int n=0;
	cout<<endl<<"Numero en decimal:  "; cin>>n;
	string data;
	
	//data = toBinary(n);
	
	data = toBinary(n);
	
	//cout<<data.length(); legacy code
	
	cout<<"Resultado Binario -> ";
	
	for(int i=data.length(); i>=0; i--){
		
		cout<<data[i];
		
	}
	
	cout<<endl;
	cout<<"------------------------------"<<endl;
	menuUI();
	
}

void menuUI(){
	
	cout<<endl;
	cout<<" 1. Decimal a Binario"<<endl;
	cout<<" 2. Binario a Decimal"<<endl;
	cout<<" 3. Decimal a Octal"<<endl;
	cout<<" 4. Decimal a Hexadecimal"<<endl;
	cout<<" 5. Hexadecimal a Decimal"<<endl;
	cout<<" 6. Octal a Decimal"<<endl;
	cout<<" 7. Hexadecimal a Binario"<<endl;
	cout<<" 8. Binario a Hexadecimal"<<endl;
	cout<<" 9. Decimal a Todos"<<endl;
	cout<<" 10. Tabla de Conversiones"<<endl;

	
	menuUX();
	
}

void menuUX(){
	
	int val = 0;
	
	cout<<endl<<" -> "; cin>>val;
	
	switch(val){
		
		case 1:
			
			cout<<"------------------------------";
			
			DecToBin();
			
			cout<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 2:
			
			cout<<"------------------------------";
			
			BinToDec();
			
			cout<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 3:
			
			cout<<"------------------------------";
			
			octalmain();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 4:
			
			cout<<"------------------------------";
			
			DecToHex();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 5:
			
			cout<<"------------------------------";
			
			HexToDec();
			
			cout<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 6:
			
			cout<<"------------------------------";
			
			OctToDec();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 7:
			
			cout<<"------------------------------";
			
			HexToBin();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 8:
			
			cout<<"------------------------------";
			
			BinToHex();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 9:
			
			cout<<"------------------------------";
			
			DecToAll();
			
			cout<<endl<<"------------------------------"<<endl;
			
			menuUI();
			
			break;
			
		case 10:
			
			TablaConversiones();
			
			menuUI();
			
			break;
			
		default:
			
			cout<<"ERROR";
			menuUX();
		
	}
	
}

void BinToDec(){
	
	int exp,digito;
    double binario, decimal;
   	cout <<endl<< "Introduce numero: ";
  	cin >> binario;
  	exp=0;
   	decimal=0;
   	while(((int)(binario/10))!=0){
          
		   digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
           
   }
   
   decimal=decimal + binario * pow(2.0,exp);
   cout << "Resultado Decimal -> " << decimal << endl;
   
   
	
}

void octal(int x){
	if(x > 7){
		octal(x/ 8);
	}
	cout<<x % 8;
}
int octalmain(){
	double x;
 
	cout<<endl<<"Numero en decimal: "; cin>>x;
 
	cout<<" Resultado Octal -> "; octal(x);
 
	return 0;
}

void DecToHex(){
	
	int value;
	
	cout <<endl<< "Introduce numero: ";
  	cin >> value;
	
	char hexString[20];
	itoa(value, hexString, 16);
	
	cout<<"Resultado en Hexadecimal -> "<<hexString;
	
}

void HexToDec(){
	
	int value;
	
	cout <<endl<< "Introduce numero: ";
  	//cin >> value;
	
	cin >> hex >> value;
    cout << value <<endl;
	
}

void OctToDec(){
	
	int octal;
	
	cout <<endl<< "Introduce numero: ";
  	cin >> octal;
	
	int decimalNumber = 0, i = 0, rem;
    
	while (octal != 0){
        
		rem = octal % 10;
        octal /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
        
    }
    
    cout<<"Resultado en Decimal -> "<<decimalNumber;
	
}

void BinToHex(){
	
	int exp,digito;
    double binario, decimal;
   	cout <<endl<< "Introduce numero: ";
  	cin >> binario;
  	exp=0;
   	decimal=0;
   	while(((int)(binario/10))!=0){
          
		   digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
           
   }
   
   	decimal=decimal + binario * pow(2.0,exp);
   
   	char hexString[20];
	itoa(decimal, hexString, 16);
	
	cout<<"Resultado en Hexadecimal -> "<<hexString;
	
}

void HexToBin(){
	
	int value;
	
	cout <<endl<< "Introduce numero: ";
  	//cin >> value;
	
	cin >> hex >> value;
	
	string hex;
	
	//data = toBinary(n);
	
	hex = toBinary(value);
	
	//cout<<data.length(); legacy code
	
	cout<<"Resultado Binario -> ";
	
	for(int i=hex.length(); i>=0; i--){
		
		cout<<hex[i];
		
	}
	
}

void DecToAll(){
	
	int n=0;
	cout<<endl<<"Numero en decimal:  "; cin>>n;
	string data;
	
	//data = toBinary(n);
	
	data = toBinary(n);
	
	//cout<<data.length(); legacy code
	
	cout<<endl<<"=================================="<<endl;
	
	cout<<" Binario -> ";
	
	for(int i=data.length(); i>=0; i--){
		
		cout<<data[i];
		
	}
	
	cout<<endl<<" Octal -> "; octal(n);
	
	char hexString[20];
	itoa(n, hexString, 16);
	
	cout<<endl<<" Hexadecimal -> "<<hexString<<endl;
	
	cout<<"=================================="<<endl;
	
}

void TablaConversiones(){
	
	cout<<endl;
	cout<<"		========================================"<<endl;
	cout<<"		Binario | Decimal | Octal | Hexadecimal "<<endl;
	cout<<"		 0000        0        0         0       "<<endl;
	cout<<"		 0001        1        1         1       "<<endl;
	cout<<"		 0010        2        2         2       "<<endl;
	cout<<"	 	 0011        3        3         3       "<<endl;
	cout<<"		 0100        4        4         4       "<<endl;
	cout<<"		 0101        5        5         5       "<<endl;
	cout<<"		 0110        6        6         6       "<<endl;
	cout<<"		 0111        7        7         7       "<<endl;
	cout<<"		 1000        8        10        8       "<<endl;
	cout<<"		 1001        9        11        9       "<<endl;
	cout<<"		 1010        10       12        A       "<<endl;
	cout<<"		 1011        11       13        B       "<<endl;
	cout<<"		 1100        12       14        C       "<<endl;
	cout<<"		 1101        13       15        D       "<<endl;
	cout<<"		 1110        14       16        E       "<<endl;
	cout<<"		 1111        15       17        F       "<<endl;
	cout<<"		========================================"<<endl;
	
}

