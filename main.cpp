#include "Pc.hpp"

int main()
{
    Pc pc1("HP Pavilion","2000","Intel I34200U","Disco duro 500 GB","4 GB",7499);
    Pc pc2("Asus 3000","80DC","Intel I7-72200U","Estado solido 480GB","12GB",13999);
    cout<<"******Computadora 1******"<<endl;
    cout<<pc1.getNombrepc()<<endl;
    cout<<pc1.getModelo()<<endl;
    cout<<pc1.getRam()<<endl;
    cout<<pc1.getPrecio()<<endl;
    cout<<"\n";
    cout<<"******Computadora******"<<endl;
    cout<<pc2.getNombrepc()<<endl;
    cout<<pc2.getModelo()<<endl;
    cout<<pc2.getRam()<<endl;
    cout<<pc2.getPrecio()<<endl;
    return 0;
}   
