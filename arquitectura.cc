#include <cstdlib>
#include <iostream>

using namespace std;

int mult(int n1, int n2){
    int suma = 0;
    int cont = 0;
    if(n1>=0 && n2>=0){
             while(cont < n2){
                        suma = suma + n1;
                        cont++;
                        } 
             }
    return suma;
}

int potencia(int base, int pot){
    int acu=1;
    int i = 0;
    while(i<pot){
                 acu=mult(base,acu);
                 i++;
    }
    return acu;
}

int pol(int vec[], int x, int grado){
    int y=0;
    for(int i=0; i<=grado; i++){
            y= y + mult(vec[i],potencia(x,grado-i));
            }
    return y;
} 

int fact(int a){
    int factorial=1;
    for(int i=1; i<=a; i++){
             factorial = factorial * i;
             } 
    return factorial;
}

int factorial(int a)
{
    int fact=0;
    int aux=1;
    for(int i=0;i<a;i++)
    {
            fact=mult(aux,i+1);
            aux=fact;
    }
    return fact;
}

int division(int a, int b)
{
    int i=0;
    while(a>=b)
    {
               a=a-b;
               i++;
}
               return i;
}
int main()
{
    int num1,num2;
    cout<< "Ingrese el primer numero"<< endl;
    cin >> num1;
    cout<< "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout<<mult(num1,num2)<<endl;
    int b,p;
    cout<< "Ingrese la base"<<endl;
    cin>>b;
    cout<< "Ingrese la potencia"<<endl;
    cin>>p;
    cout<<potencia(b,p)<<endl;
    cout<< "El resultado del polinomio es: "<<endl;
    int k[]={4,2,1,10,20};
    cout<<pol(k,2,4)<<endl;
    int f;
    cout<<"Ingrese el numero para hallar su factorial"<<endl;
    cin>>f;
    cout<<factorial(f)<<endl;
    int d1;
    int d2;
    cout<< "Ingrese el dividendo"<<endl;
    cin>>d1;
    cout<< "Ingrese el divisor"<<endl;
    cin>>d2;
    cout<<division<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
