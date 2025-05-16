#include <iostream>

using namespace std;

int valoress(int num1, int num2){
	
return  num1+num2;
}

int valoresr(int num1, int num2){
	
return  num1 - num2;
}

float  valoresm (int num1, int num2){
	
return  num1*num2;
}

float  valoresd(int num1, int num2){
	
 if (num2 == 0) {
        cout << "Erro: Não pode dividir por zero!" << endl;
        return 0; 
    }
    return static_cast<float>(num1) / num2; }



int main(){
	int escolha, resultado ,n1,n2, final;
	
	do {
		int escolha;
		
		cout << "escolha o tipo de opereaçao" <<endl;
		cout << "soma 1 " << endl ;
		cout << "resta 2"<<endl ;
		cout << "mult 3" << endl;
		cout << "divisao 4" <<endl;
		cin >>  escolha;
		
	switch (escolha){
		
		case 1 :
		
			
			
			cout << "digite o primeiro numero ";
			cin >> n1 ;
	
			cout << "digite o segundo numero ";
			cin >> n2;
		
			resultado  = valoress (n1 , n2);
			cout << "a soma dos valores de " << n1 << " + " << n2 << " = " << resultado << endl ;
			
			break;
			
			
		case 2:
			
			cout << "digite o primeiro numero ";
			cin >> n1 ;
	
			cout << "digite o segundo numero ";
			cin >> n2;
		
			resultado  = valoresr (n1 , n2);
			cout << "a resta dos valores de " << n1 << " - " << n2 << " = " << resultado << endl ;
			
			break;
			
		case 3:
			
			cout << "digite o primeiro numero ";
			cin >> n1 ;
	
			cout << "digite o segundo numero ";
			cin >> n2;
		
			resultado  = valoresm (n1 , n2);
			cout << "a multiplicaçao dos valores de " << n1 << " * " << n2 << " = " << resultado << endl ;
			
			break;
			
		case 4:
		
			cout << "digite o primeiro numero ";
			cin >> n1 ;
	
			cout << "digite o segundo numero ";
			cin >> n2;
			
			resultado  = valoresd (n1 , n2);
	
				
				 if(n2 == 0){
				
				
				cout <<"valores nao ta valido kkkk tenten de novo ";
			
				}else{
			
				cout << "a soma dos valores de " << n1 << " / " << n2 << " = " << resultado << endl ;

				}
				
				break ;
			
			
			
	}
	
	cout << "deseja continuar com outra operaçao ";
	cout << "0 para sair ";
	cout <<"1 para continuar";
	cin >> final;
	
}while ( final == 0);
	
return 0;

}
