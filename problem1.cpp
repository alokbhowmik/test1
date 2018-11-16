#include<iostream>
using namespace std;
int ispalindrom(string ch){
	int i=0;
	while(i<=(ch.length()/2)){
		if(ch[i]!=ch[ch.length()-1-i])
			return 0;
	}
	return 1;
}
void permute(string ch,int l){
	int r=ch.length();
	if(l>=r){
		cout<<ch<<"  "<<ispalindrom(ch)<<endl;
		
	}
	else
	{
		for(int i=l;i<r;i++){
			swap(ch[l],ch[i]);
			permute(ch,l+1);
			swap(ch[l],ch[i]);
		}
	}
}


main(){
	permute("ABCBA",0);
}
