#include<iostream>
using namespace std;
int main(){

    

    try{
       // throw 1;
       // throw 1.5;
        throw string ("Hello how are you ");
    }
    catch(int e){
        cout<<"Int Catch"<<endl;
    }
    catch (double e){
        cout <<"Double Catch"<<endl;
    }
    catch (...){
        cout  <<"String Catch "<<endl;
    }
    


return 0;   
}