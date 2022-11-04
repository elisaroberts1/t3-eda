#include <iostream>
#include "trees/tree.hpp"
#include <string.h>
#include <string>
#include <vector>

using namespace std;
//aqui van las funciones
void cd(){
	;
}

void ls(){
	;
}

void tree(){
	;
}

void find(){
	;
}

int main(int nargs, char** vargs){
	bool ciclo=false;
	string respuesta;
	string exit ="exit";
	vector<string> camino;
	vector<string> v_carpetas;
	trees::Tree treeSO;//aqui se crea arbol inicial
	cout<<" $TreeSO "<< endl<<" Bienvenido a TreeSO "<< endl <<" Autores: <franca> y <elisa> "<<endl;
	treeSO.setRoot(new trees::TreeNode("/"));
	camino.push_back("/");
	while (ciclo==false){
		cout<<"/# "<<endl;
		getline(cin, respuesta);
		if (respuesta!=exit){//si no son iguales a exit, sigue con los comandos
			if(respuesta[0] == '/' && respuesta[1] == '#'){
				int i = 2;
				if (respuesta[i]=='c' && respuesta[i+1]=='d' && respuesta[i+4]=='.'){
					cout<<"me dijo cd .."<<endl;
				}
				if (respuesta[i]=='l' && respuesta[i+1]=='s' && respuesta[i+4]=='.'){
					cout<<"me dijo ls"<<endl;
				}
				if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='d'){
					if(respuesta[7] == ' ' && respuesta[8] != '.'){
						int j = 8;
						string nom;
						while(j < respuesta.length()){
							nom += respuesta[j];
							j++;
						}
						treeSO.insert(nom, "/");
						v_carpetas.push_back(nom);
					}
				}
				if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='f'){
					cout<<"me dijo mkfile"<<endl;
					if(respuesta[8] == ' ' && respuesta[9] != '.'){
						int j = 9;
						string nom;
						while(j < respuesta.length()){
							nom += respuesta[j];
							j++;
						}
						treeSO.insert(nom, "/");
					}
				}
				if (respuesta[i]=='r' && respuesta[i+1]=='m'){
					cout<<"me dijo rm"<<endl;
					
				}
				if (respuesta[i]=='t' && respuesta[i+1]=='r'){
					cout<<"me dijo tree"<<endl;
					treeSO.traverse();
					}
				}

			else{
				for (int i=0;i<respuesta.length();i++){
					if (respuesta[1] != '#' && respuesta[i-1] == '#'){
						if (respuesta[i]=='c' && respuesta[i+1]=='d'){
							cout<<"me dijo cd()"<<endl;
						}
						else if (respuesta[i]=='l' && respuesta[i+1]=='s'){
							cout<<"me dijo ls"<<endl;
						}
						else if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='d'){
							cout<<"me dijo mkdir"<<endl;
							if(respuesta[i+5] == ' ' && respuesta[i+6] != '.'){
								int j = i + 6;
								int k = i - 2;
								string n1;
								string nn1;
								string n2;
								while(respuesta[k] != '/'){
									n1 += respuesta[k];
									k--;
								}
								for(int i = n1.length(); 0 <= i; i--){
									nn1 += n1[i];
								}
								while(j < respuesta.length()){
									n2 += respuesta[j];
									j++;
								}
								for(int j = 0; j<v_carpetas.size(); j++){
									cout << v_carpetas[j] << endl;
									cout << nn1 << endl;
									treeSO.find(v_carpetas[j]);
									if(v_carpetas[j] == nn1){
										v_carpetas.push_back(n2);
										treeSO.insert(n2, v_carpetas[j]);
									}
								}
							}
						}
						else if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='f'){
							cout<<"me dijo mkfile"<<endl;
						}
						else if (respuesta[i]=='r' && respuesta[i+1]=='m'){
							cout<<"me dijo rm"<<endl;
						}
						else if (respuesta[i]=='t' && respuesta[i+1]=='r'){
							cout<<"me dijo tree"<<endl;
						}
						else if (respuesta[i]=='f' && respuesta[i+1]=='i'){
							cout<<"me dijo find"<<endl;
						}
					}
				}
			}
		}
		else{//si es igual a exit sale
			ciclo=true;
		}
		
	}
	return 0;
}

