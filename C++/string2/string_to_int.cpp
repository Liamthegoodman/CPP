#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[10]="0235";
    char s2[10]="54.78";
    long int x= strtol(s1,NULL,10);
    float y= strtof(s2,NULL);
    cout<<x+10<<endl<<y<<endl;

    


return 0;   
}