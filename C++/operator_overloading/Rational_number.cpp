#include<iostream>
using namespace std;
class Rational{
    private:
    int p;
    int q;
    public:
    Rational(int p=0,int q=1){
        this -> p = p;
        this -> q = q;
    }

    int getP(){
        return p;
    }
    int getQ(){
        return q;
    }

    int setP(int p){
        this ->p= p;
    }

    int setQ(int q){
        this->q= q;
    }
    Rational operator+(Rational r){
        Rational temp;
        temp.p=this->p*r.q+this->q*r.p;
        temp.q=this->q*r.q;
        return temp;
    }
    friend ostream & operator<<(ostream &out, Rational &r);



};
  ostream & operator<<(ostream &out, Rational &r){
    out<<r.p<<"/"<<r.q;
    return out;
 }

int main(){

    Rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
    return 0;   
}