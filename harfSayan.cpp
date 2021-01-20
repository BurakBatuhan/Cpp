#include <iostream>
#include <string>
using namespace std;
int main(){
	int i, j, n, adet=1;
	string str;
	char tmp;
	cout<<"Bir Kelime Giriniz:";
	getline(cin, str);
	for (i=0; i<str.length(); i++){
		for (j=i+1; j<str.length(); j++){
			if (str[j]<str[i]){
				tmp=str[i];
				str[i]=str[j];
				str[j]=tmp;
			}
		}
	}
	n=str.length();
	for (i=0; i<n; i++){
		//tmp=str[i];
		if (str[i]==str[i+1]){
			adet++;
		}
		else{
			cout << str[i] << ".den " << adet <<" adet var "<< endl;
			adet=1;
		}
	}
	return 0;
}

