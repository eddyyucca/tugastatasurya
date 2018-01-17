#include <iostream>
#include <string>
using namespace std;

class tatasurya{
	public:
		void jarak(string jarakorbit);
		int lamahari(string hari);
		string warna;
		void ukuran(int jutakm);
		void bulan(string adaapatidak);
};

int main(){
	tatasurya matahari,markurius,venus,bumi,mars,jupiter,saturnus,uranus,neptunus,pluto;
	
	matahari.warna		=	"kuning kemerahan";
	markurius.warna		=	"putih kecoklatan";
	venus.warna			=	"kecoklatan";
	bumi.warna			=	"biru";
	mars.warna			=	"putih kecoklatan";
	jupiter.warna		=	"putih kecoklatan";
	saturnus.warna		=	"putih kekuningan";
	uranus.warna		=	"biru";
	neptunus.warna		=	"biru";
	pluto.warna			=	"coklat";
	
	cout << "ciri-ciri pelanet: \n\n";
	cout << (matahari.warna);
	matahari.jarak("tidak ada");
	matahari.lamahari("tidak ada hari");
	matahari.ukuran(1392);
	matahari.bulan("tidak ada");
	cout <<"=====================================\n\n";
}

void tatasurya::jarak(string jarakorbit){
	cout <<"jaraknya "<<endl;
	}
int tatasurya::lamahari(string hari){
	cout <<"lama hari "<<hari<<endl;
}
