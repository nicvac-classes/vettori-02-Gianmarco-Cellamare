#include <iostream>
using namespace std;

int main() {
int N;
cout << "Inserisci studenti in una classe" << endl;
cin >> N;
vector <string> Nomi[N];
vector <double> Voti[N];
vector <int> Assenze[N];
int i,indice;
string nome;
for (i=0; 0<=N-1); i++ {
   cout << "Inserisci nome dello studente " << endl;
   cin >> Nomi[i]
   cout << "Inserisci voto dello studente " << endl;
   cin >> Voti[i]
   cout << "Inserisci assenze dello studente " << endl;
   cin >> Assenze[i]

}

cout << "Inserisci nome dello studente di cui vuoi visualizzare i dati" << endl;
cin >> nome;

for (i=0; 0<=N-1); i++ {
   if(Nomi[i]=nome){
      indice=i;

   }
}
if(indice >= 0){
   cout<<"Nome dello studente:"<< Nomi[indice] <<"Voti dello studente:"<< Voti[indice] <<"Assenze dello studente:"<< Assenze[indice] << endl;

}


}













}

