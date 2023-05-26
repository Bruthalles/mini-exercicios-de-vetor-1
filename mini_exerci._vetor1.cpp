#include <iostream>	
#include <locale.h>
using namespace std;	
							
int main(int argc, char** argv) {
	int i, vetor [6], dobro [6];		
			setlocale(LC_ALL, "Portuguese");
			cout<<"Teste Básico de vetor e dobro com 6 unidades"<<endl;
			cout<<endl;	
	for (i=0;i <6;i++){				
		cout<<"Qual o valor de vetor["<<i<<"]? "<<endl;
        cin>>vetor[i];	
		dobro[i]= vetor[i]*2;
		}				

    for (i=0;i <6;i++){ 		
		cout<<"dobro["<<i<<"] = "<< dobro[i]<<endl;
		}				


    return 0;		
}					
