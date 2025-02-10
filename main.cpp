#include <iostream>


int main(){
    short shortVar {-32768};// 2bytes (int implicito)
    short int shortInt{455};//
    signed short signedShort{122};//
    signed short int signedShortInt{-456};//
    unsigned short int unsignedShortInt{456};//

    int intVar{55};//4 bytes
    signed signedVar{66}; //int implicito
    signed int signedInt{-77};
    unsigned int unsignedInt{77};
    //unsigned int unsignedInt{-77}; <- COMPILER ERROR



    long longVar{88};//4 OR 8 bytes (depende do compilador e SO)
    long int longInt{33};
    signed long signedLong{44};
    signed long int signedLongInt{-44};
    unsigned long int unsignedLongInt{4400000};

    std::cout << sizeof(signedLongInt) << std::endl;
    std::cout << sizeof(unsignedLongInt) << std::endl;

    long long longLongVar{888};//8 bytes
    long long int longlongInt{999};
    signed long long signedLongLong{-444};
    signed long long int signedLongLongInt{1234};
    unsigned long long int unsignedLongLongInt{1234};
}