
#include <iostream>
using namespace std;

int main() {
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	int x1=r-1,y1=0,x2=0,y2=c-1;
	int ctr;
	while(x1>=x2 and y1<=y2){
		ctr=0;
		while(x1+ctr<r and y1+ctr <c){
			arr[x1+ctr][y1+ctr]=arr[x2+ctr][y2+ctr];
			arr[x2+ctr][y2+ctr]=arr[x1+ctr][y1+ctr];
			ctr+=1;
		}
		if(x1==0){
			y1+=1;
		}
		else{
			x1-=1;
		}
		if(y2==0){
			x2+=1;
		}
		else{
			y2-=1;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
	}
	return 0;
}

