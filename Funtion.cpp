#include <iostream>
using namespace std;

struct {
	int Diagonal1;
	int Diagonal2; 
	int luas;
	int sisi1;
	int sisi2;
	int keliling;
} layang ;

void luaslayang(){ 
	layang.luas = 0.5 * layang.Diagonal1 * layang.Diagonal2;
	printf("Luas Layang-layang = %d ",layang.luas); printf( " cm \n");
}

void kelilinglayang(){
	layang.keliling = 2 * (layang.sisi1 + layang.sisi2);
	printf("Keliling Layang-layang = %d",layang.keliling); printf( " cm");
}
