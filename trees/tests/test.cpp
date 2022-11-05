#include <iostream>
#include "trees/tree.hpp"
#include <string.h>
#include <cstring>
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
	vector<string> v_files;
	trees::Tree treeSO;//aqui se crea arbol inicial
	cout<<" $TreeSO "<< endl<<" Bienvenido a TreeSO "<< endl <<" Autores: <franca> y <elisa> "<<endl;
	treeSO.setRoot(new trees::TreeNode("/"));
	camino.push_back("/");
	cout<<"/# "<<endl;
	while (ciclo==false){
		getline(cin, respuesta);
		if (respuesta!=exit){//si no son iguales a exit, sigue con los comandos
			if(respuesta[0] == '/' && respuesta[1] == '#'){
				int i = 2;
				if (respuesta[i]=='c' && respuesta[i+1]=='d' && respuesta[i+4]=='.'){
					cout<<"me dijo cd .."<<endl;
				}
				if (respuesta[i]=='l' && respuesta[i+1]=='s'){
					if(respuesta[i+2] == ' ' && respuesta[i+3] != '.'){
						int j = 5;
						string nom;
						while(j < respuesta.length()){
							nom += respuesta[j];
							j++;
						}
						trees::TreeNode* node = treeSO.find(nom);
						if(node != nullptr){
							node->getChildren()->print();
						}
					}
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
						treeSO.item(nom, 1);
					}
				}
				if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='f'){
					if(respuesta[8] == ' ' && respuesta[9] != '.'){
						int j = 9;
						string nom;
						while(j < respuesta.length()){
							nom += respuesta[j];
							j++;
						}
						treeSO.insert(nom, "/");
						v_files.push_back(nom);
						treeSO.item(nom, 0);
					}
				}
				if (respuesta[i]=='r' && respuesta[i+1]=='m'){
					cout<<"me dijo rm"<<endl;
					
				}
				if (respuesta[i]=='t' && respuesta[i+1]=='r'){
					treeSO.traverse();
					}
				}

			else{
				for (int i=0;i<respuesta.length();i++){
					if (respuesta[1] != '#' && respuesta[i-1] == '#'){
						if (respuesta[i]=='c' && respuesta[i+1]=='d'){
							cout<<"me dijo cd()"<<endl;
						}
						else if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='d'){
							if(respuesta[i+5] == ' ' && respuesta[i+6] != '.'){
								int j = i + 6;
								int k = i - 2;
								char n1[100];
								string t;
								char nn1[100];
								string n2;
								while(respuesta[k] != '/'){
									n1[k] = respuesta[k];
									t += respuesta[k];
									k--;
								}
								int h = t.size();
								int g = t.size();
								for(int i = 0; i<h; i++){
									nn1[i] = n1[g];
									g--;
								}
								while(j < respuesta.length()){
									n2 += respuesta[j];
									j++;
								}
								nn1[h] = '\0';
								string n = nn1;
								reverse(n.begin(), n.end());
								for(int j = 0; j<v_carpetas.size(); j++){
									if(v_carpetas[j] == n){
										v_carpetas.push_back(n2);
										treeSO.insert(n2, v_carpetas[j]);
										treeSO.item(n2, 1);
									}
								}
							}
						}
						else if (respuesta[i]=='m' && respuesta[i+1]=='k' && respuesta[i+2]=='f'){
							if(respuesta[i+6] == ' ' && respuesta[i+7] != '.'){
								int j = i + 7;
								int k = i - 2;
								char n1[100];
								string t;
								char nn1[100];
								string n2;
								while(respuesta[k] != '/'){
									n1[k] = respuesta[k];
									t += respuesta[k];
									k--;
								}
								int h = t.size();
								int g = t.size();
								for(int i = 0; i<h; i++){
									nn1[i] = n1[g];
									g--;
								}
								while(j < respuesta.length()){
									n2 += respuesta[j];
									j++;
								}
								nn1[h] = '\0';
								string n = nn1;
								reverse(n.begin(), n.end());
								for(int j = 0; j<v_carpetas.size(); j++){
									if(v_carpetas[j] == n){
										v_files.push_back(n2);
										treeSO.insert(n2, v_carpetas[j]);
										treeSO.item(n2, 0);
									}
								}
							}
						}
						else if (respuesta[i]=='r' && respuesta[i+1]=='m'){
							cout<<"me dijo rm"<<endl;
						}
						else if (respuesta[i]=='t' && respuesta[i+1]=='r'){
							treeSO.traverse();
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

