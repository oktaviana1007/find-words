#include <iostream>
#include <string>
using namespace std;
    char P1[] = {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
    char P2[] = {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
    char P3[] = {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
    char P4[] = {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
    char P5[] = {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
    char P6[] = {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
    char P7[] = {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
    char P8[] = {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
    char P9[] = {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
    char P10[] = {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
    char P11[] = {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
    char P12[] = {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
    char P13[] = {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'};
    char P14[] = {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
    char P15[] = {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
    char *pt[] = {P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14,P15};
	
	string kata;
	int len_kata,pos;
	int in_x[100];
	int in_y[100];
	bool valid;
	int direction;
	int arah,sum;
	
		void menampilkanpuzzle(){
			for(int i = 0; i<15; i++) {
        			for(int j=0; j<15; j++) 
        				cout<<*(*(pt+i)+j)<<"  ";
					cout<<endl;
				}			
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
		void pencarian(){
		pos=0;
		
       			for(int i=0;i<15;i++){
        			for(int j=0;j<15;j++){
                			if(kata[0] == puzzle[i][j] && valid==false){
        
				    in_x[pos] = i;
				    in_y[pos] = j;
				    pos++;
                    
				    findword(i, j);
				    pos--;
					}
				}
			}
		 		cout << endl;
			}

		void reset(){
		pos =0;
		valid;
		arah=0;
		}

int main(){
	menampilkanpuzzle ();	
        int jum_kata;
        cout<<endl<<"Masukkan Jumlah Kata yang akan dicari : ";
        cin>>jum_kata;
        int panjang[jum_kata];
        char kata[jum_kata][15];

    	cin.ignore();
    		for(int a=0; a<jum_kata; a++) {
        		cout<<a+1<<". ";
        		cin.getline(kata[a], 15);
    		}
        
        cout<<"Hasil: "<<endl;
    		for(int a=0; a<jum_kata; a++) {
    				
    			pencarian();
    				
        		 if(valid==true){
            			cout<<a+1<<". ADA"<<endl;
        		 }
        		 else cout<<a+1<<". TIDAK ADA"<<endl;
        	
    		}    
    reset();
