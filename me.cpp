#include "iostream"
#include "string"
using namespace std;
int n=1;
string A,B,C;
int main(){
	cin>>n;
	for(int x=1;x<=n;x++){
		cin>>A>>B;
		int size_A=A.length()-1;
		int size_B=B.length()-1;
		int size_C=0;
		int jin=0;
		while(size_A>=0&&size_B>=0){
			C[size_C]=A[size_A]+B[size_B]-'0'-'0'+jin;
			if(C[size_C]>9){
				C[size_C]-=10;
				jin=1;
			}
			else
				jin=0;
			C[size_C]+='0';
			//cout<<C[size_C]<<" ";
			size_A--;
			size_B--;
			size_C++;
		}
		if(!size_A&&!size_B){
			if(jin)
				C[size_C++]=jin+'0';
		}
		else{
			while(size_A>=0){
				C[size_C++]+=A[size_A--]+jin;
				if(C[size_C]>'9'){
					C[size_C]-=10;
					jin=1;
				}
				else
					jin=0;
				//cout<<C[size_C]<<" ";
			}
			while(size_B>=0){
				C[size_C++]+=B[size_B--]+jin;
				if(C[size_C]>'9'){
					C[size_C]-=10;
					jin=1;
				}
				else
					jin=0;
				//cout<<C[size_C]<<" ";
			}
			if(jin)
				C[size_C++]=jin+'0';
		}
		C[size_C]='\0';
		cout<<"Case "<<x<<":"<<endl<<A<<" + "<<B<<" = ";
		for(int y=size_C-1;y>=0;y--)
			printf("%c",C[y]);
		cout<<endl<<endl;
	}
	return 0;
}
