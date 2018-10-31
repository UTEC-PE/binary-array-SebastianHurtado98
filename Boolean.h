//
// Created by Sebastian on 30/10/2018.
//
#include <iostream>
using namespace std;

#ifndef W11_BOOLEAN_H
#define W11_BOOLEAN_H
class Boolean {
private:
    unsigned char* boolean;
    int size;
    const unsigned char options[8]= {1 << 0, 1 << 1, 1 << 2, 1 << 3, 1 << 4, 1 << 5, 1 << 6, 1 << 7  };

public:
    Boolean(int s){
        boolean= new unsigned char[(s/8)+1];

        for (int i=0;i < (s/8)+1 ;i++ ) {
            boolean[i] = 0;
        }
        size= s;
    };


    void bitOn(int position){
        if(position<size){
            boolean[position/8] |= options[position%8];
        }
        else{
            cout << "Fuera de rango";
        }


    };

    void bitOff(int position){
        if(position<size){
            boolean[position/8] &= ~options[position%8];
        }
        else{
            cout << "Fuera de rango";
        }
    };

    bool operator[](int position){
        if(position<size){
            return bool(boolean[position/8] & options[position%8]);
        }
        else{
            cout << "Fuera de rango";
            return false;
        }
    };

    void clear(){
        for (int i=0;i < (size/8)+1 ;i++ ) {
            boolean[i] = 0;
        }
    };
    ~Boolean(){
        clear();
    };
};


#endif //W11_BOOLEAN_H
