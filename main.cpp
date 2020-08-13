#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void escribir ();
void lectura();
int main() {
 escribir();
 lectura();
}
void escribir (){
  ofstream archivo ;
  archivo.open("DEBER.txt",ios::out);
  if (archivo.fail()){
  cout << "No se pudo abrir el archivo";
  }
  int TA,K,X;
  string Tl;
  double P,GA;
  bool c,f,g;
  do{
cout << "\nINGRESAR EL PRECIO INICIAL DE LA UVA: ";
  cin >> P ;
  cout << "INGRESAR LOS KIlOS DE UVA: ";
  cin >> K ;
  cout<<"\nINGRESE EL TIPO DE UVA\n";
  cout << "\nTIPO DE UVA A \n";
  cout << "TIPO DE UVA B \n";
  cin >> Tl;
  if(Tl == "A" |Tl == "a" |Tl == "B" |Tl == "b"  ){
  if (Tl == "A" |Tl == "a"  ){
    do{
      cout<<"\nINGRESE EL TAMÑO DE LA UVA\n";
     cout << "\nTAMANIO DE UVA 1 \n";
     cout << "TAMANIO DE UVA 2 \n";
     cin >> TA ;
       if(TA == 1 | TA==2){
     if (TA == 1){
       P = P + 0.20 ;
        GA = P * K ;
       cout << GA<<endl ;
     }
     else {
       P= P + 0.30 ;
       GA = P * K ;
       cout << GA<<endl ;
     }
     f=true;
       }else{
         cout<<"El tamaño ingresado es incorrecto\n";
         f=false;
       }
  }while(f==false);
  }
  else {
    do{
      cout<<"\nINGRESE EL TAMÑO DE LA UVA\n";
    cout << "\nTAMANIO DE UVA 1 \n";
     cout << "TAMANIO DE UVA 2 \n";
     cin >> TA ;
     if(TA == 1 | TA==2){
     if (TA == 1){
       P = P - 0.30 ;
       GA = P * K ;
       cout << GA<<endl ;
     }
     else {
       P= P - 0.50 ;
       GA = P * K ;
       cout << GA<<endl ;
     }
     g=true;
     }else{
       cout<<"Error al ingresar el tamaño de la uva\n";
       g=false;
     }
  }while(g==false);
  }
 c=true;
  }else{
    cout<<"Error al ingresar el tipo de uva vuelva a intentar\n";
    c=false;
  }
  }while(c==false);
  archivo << "\t\t\t\tDESCRIPCION\n"<< "PRECIO INICIAL DE LA UVA : " <<P<< "\nKIlOS DE UVA : "<< K << "\nTIPO DE UVA : "<< Tl << "\nTAMANIO DE LA UVA : "<< TA << "\nGANACIA ONTENIDA : "<<GA ;

  archivo.close();
}
void lectura(){
  string texto;
  ifstream lectura;
  lectura.open("DEBER.txt",ios::in);
  while(!lectura.eof()){
    getline(lectura,texto);
    cout<<texto<<endl;
  }
  lectura.close();
}