#include <iostream> 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <windows.h>
using namespace std;
const long long length=10000000;
int main()
{
	srand(time(0));
//	srand( (unsigned)time( NULL ) );
	//freopen("input.txt","w",stdout); 
	int n,m,t;
	n=rand()%20+1;
	printf("%d\n",n);
	for(int x=0;x<n;x++){
		cout<<rand()%length<<" "<<rand()%length<<endl;
	}
	printf("\n");
	return 0;
}
