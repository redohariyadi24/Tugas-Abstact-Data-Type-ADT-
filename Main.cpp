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

int main(){
	printf("\nProgram Menghitung Luas dan Keliling Layang-Layang \n\n");
	printf("Silahkan Input nilai:");
	printf("Diagonal 1 Layang-layang = ");scanf("%d", &layang.Diagonal1);
	printf("Diagonal 2 Layang-layang = ");scanf("%d", &layang.Diagonal2);
	printf("Sisi 1 Layang-layang = ");scanf("%d", &layang.sisi1);
	printf("Sisi 2 Layang-layang = ");scanf("%d", &layang.sisi2);
	luaslayang();
	kelilinglayang();
	return 0;
}
