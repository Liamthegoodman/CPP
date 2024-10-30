#include<iostream>
using namespace std;
int main(){
    int vowels=0;
    int consonant=0;
    int space=0;
    string str="how Many wOrds";
    for (int i=0;str[i]!='\0';i++){
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O'|| str[i]=='o' || str[i]=='U'||str[i]=='u'){
            vowels++;
        }else if( str[i]==' '){
            space++;
        }else{
            consonant++;
        }
        
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Space: "<<space<<endl;
    cout<<"Consonant: "<<consonant<<endl;
    


return 0;   
}