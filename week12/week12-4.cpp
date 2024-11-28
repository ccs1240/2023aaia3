using namespace std;
int a[100][100];
int main()
{
	int T ,N;
	cin>>T; //s01 Input
	for(int t=1;t<=T;t++){
		char c,c2;//'N' 'N' 3
		cin>>c>>c2>>N;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j];//s03:2D Array
			}
		}
		cout<<"Test #"<<t<<": Symmetric.\n";
	}//s02 output
}
