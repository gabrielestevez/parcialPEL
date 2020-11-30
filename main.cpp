#include <iostream>
#include <fstream>

using namespace std;

int cp;
string municipio;
int poblacion;
int altura;
int superficie;

ifstream fin("avila.tsv");//Declaramos fin como variable de entrada

void nMunicipios() {
    try {
        int numeroMunicipios = 0;
        while (!fin.eof()) {
            fin >>cp>>municipio>>poblacion>>altura>>superficie;
            while ( cp != 0) {
                numeroMunicipios++;
            }
        }
        cout << "Los municipios de la provincia de Ávila son: " << numeroMunicipios << endl;
    }
    catch (...) {
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}

/*void promedioAltura(){
    try{
        while(!fin.eof()){
            fin >>cp>>municipio>>poblacion>>altura>>superficie;

        }
    }
    catch (...) {
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}*/
void alturaMax(){
    int maxAltura = 0;
    try{
        while(!fin.eof()){
            fin>>cp>>municipio>>poblacion>>altura>>superficie;
            if (maxAltura < altura){
                altura = maxAltura;
                cout << "El municipio con la altura máxima de Ávila es: " << maxAltura<< endl;
            }
        }
    }
    catch(...){
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}

void alturaMin(){
    int minAltura = 0;
    try{
        while(!fin.eof()){
            fin>>cp>>municipio>>poblacion>>altura>>superficie;
            while (minAltura > altura){
                altura = minAltura;
                cout << "El municipio con la altura máxima de Ávila es: " << minAltura<< endl;
            }
        }
    }
    catch(...){
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}

void masPoblada(){
    string mPoblada;
    int pob = 0;
    try{
        while(!fin.eof()){
            fin>>cp>>municipio>>poblacion>>altura>>superficie;
            if (pob < poblacion){
                pob = poblacion;
                mPoblada = municipio;
            }
        }
        cout << "La más poblada es" <<mPoblada<< endl;
    }
    catch(...){
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}

void menosPoblada(){
    string menPoblada;
    int pob = 0;
    try{
        while(!fin.eof()){
            fin>>cp>>municipio>>poblacion>>altura>>superficie;
            if (pob < poblacion){
                pob = poblacion;
                menPoblada = municipio;
            }
        }
        cout << "La más poblada es" <<menPoblada<< endl;
    }
    catch(...){
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}


void habYAltura(){
    int nLocalidades;
    try{
        while(!fin.eof()){
            fin>>cp>>municipio>>poblacion>>altura>>superficie;
            while (nLocalidades < 10){
                if(poblacion > 40){
                    if (altura > 900){
                        cout<<"Los municipios con más de 40 habitantes y a más de 900 metros: "<<municipio<<endl;
                        nLocalidades ++;
                    }
                }
            }
        }
    }
    catch(...){
        fin.close();
        cout << "FIN DE ARCHIVO" << endl;
    }
}



int main(){
    nMunicipios();
    alturaMax();
    alturaMin();
    masPoblada();
    menosPoblada();
    habYAltura();
}