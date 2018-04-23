#include <iostream>
#include <string>
using namespace std;
	char puzzle[100][100]={{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
    				{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
    				{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
    				{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
    				{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
    				{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
    				{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
    				{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
    				{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
    				{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
    				{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
    				{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
    				{'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
    				{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
    				{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};	   
	string kata;
	int len_kata,pos;
	int in_x[100];
	int in_y[100];
	bool valid;
	int direction;
	int arah,sum;
	
		void menampilkanpuzlle(){
			for(int i=0;i<=15;i++){		
				for(int j=0;j<=15;j++){
					cout<<puzzle[i][j]<<"  ";
				}		
				cout<<endl;	
			}	
		}

		void findword(int x, int y){
		if(pos == len_kata) valid = true;
		if(x>=0 && x<15 && y>=0 && y<=15 && valid==false){
			
		//atas
	        if(puzzle[x-1][y]==kata[pos] && (direction==1 || direction==0))
	        {
	            direction = 1;
	            in_x[pos] = x-1;
	            in_y[pos] = y;
	            pos++;
	            findword(x-1,y);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //serong atas kanan
	        else if(puzzle[x-1][y+1]==kata[pos] && (direction==2 || direction==0))
	        {
	            direction = 2;
	            in_x[pos] = x-1;
	            in_y[pos] = y+1;
	            pos++;
	            findword(x-1,y+1);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //kanan
	        else if(puzzle[x][y+1]==kata[pos] && (direction==3 || direction==0))
	        {
	            direction = 3;
	            in_x[pos] = x;
	            in_y[pos] = y+1;
	            pos++;
	            findword(x,y+1);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //serong bawah kanan
	        else if(puzzle[x+1][y+1]==kata[pos] && (direction==4 || direction==0))
	        {
	            direction = 4;
	            in_x[pos] = x+1;
	            in_y[pos] = y+1;
	            pos++;
	            findword(x+1,y+1);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //bawah
	        else if(puzzle[x+1][y]==kata[pos] && (direction==5 || direction==0))
	        {
	            direction = 5;
	            in_x[pos] = x+1;
	            in_y[pos] = y;
	            pos++;
	            findword(x+1,y);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //serong bawah kiri
	        else if(puzzle[x+1][y-1]==kata[pos] && (direction==6 || direction==0))
	        {
	            direction = 6;
	            in_x[pos] = x+1;
	            in_y[pos] = y-1;
	            pos++;
	            findword(x+1,y-1);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //kiri
	        else if(puzzle[x][y-1]==kata[pos] && (direction==7 || direction==0))
	        {
	            direction = 7;
	            in_x[pos] = x;
	            in_y[pos] = y-1;
	            pos++;
	            findword(x,y-1);
	            pos--;
	            if(pos==1) direction==0;
	        }
	        //serong atas kiri
	        else if(puzzle[x-1][y-1]==kata[pos] && (direction==8 || direction==0))
	        {
	            direction = 1;
	            in_x[pos] = x-1;
	            in_y[pos] = y-1;
	            pos++;
	            findword(x-1,y-1);
	            pos--;
	            if(pos==1) direction==0;
       		 }
		}
	}
int main(){
	
	int bi;
	int answer;
	menampilkanpuzlle ();	
	cout<<"masukkan jumlah inputan:";cin>>bi;
	cout<<endl;
	for(int i=0;i<bi;i++)
	{
		cout << "Masukkan kata yang ingin dicari : ";
    	cin >> kata;
        
    	len_kata = kata.length();
    	//mulai melakukan pencarian
    	for(int i=0;i<15;i++)
    		{
    		for(int j=0;j<15;j++)
    		{
                if(kata[0] == puzzle[i][j] && valid==false)
                {
                    //pencatatan indeks
                    in_x[pos] = i;
                    in_y[pos] = j;
                    pos++;
                    
                    findword(i, j);
                    //findword(int pos, int direction)
                    pos--;
				}
			}
	}
		cout << endl;
        
        if(valid==true){
		
            cout << "ADA" << endl << endl;
        }else{
            cout << "TIDAK ADA" << endl << endl;
	    }
}
return 0;
}
		


