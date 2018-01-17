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
	
	cout << "ciri-ciri pelanet matahari: \n\n";
	cout << (matahari.warna);
	matahari.jarak("tidak ada");
	matahari.lamahari("tidak ada hari");
	matahari.ukuran(1392);
	matahari.bulan("tidak ada");
	cout <<"=====================================\n\n";

	cout << "ciri-ciri pelanet markurius: \n\n";
	cout << (markurius.warna);
	markurius.jarak("57,8 juta km");
	markurius.lamahari("88 ");
	markurius.ukuran(4879);
	markurius.bulan("tidak ada");
	cout <<"=====================================\n\n";
	
	cout << "ciri-ciri pelanet venus: \n\n";
	cout << (venus.warna);
	venus.jarak("108 juta km");
	venus.lamahari("224 ");
	venus.ukuran(12104);
	venus.bulan("tidak ada");
	cout <<"=====================================\n\n";	
	
	cout << "ciri-ciri pelanet bumi: \n\n";
	cout << (bumi.warna);
	bumi.jarak("149 juta km");
	bumi.lamahari("365 hari ");
	bumi.ukuran(12756);
	bumi.bulan("ada");
	cout <<"=====================================\n\n";	
	
		
	cout << "ciri-ciri pelanet mars: \n\n";
	cout << (mars.warna);
	mars.jarak("227 juta km");
	mars.lamahari("1,9 tahun ");
	mars.ukuran(6805);
	mars.bulan("ada");
	cout <<"=====================================\n\n";	
	
			
	cout << "ciri-ciri pelanet jupiter: \n\n";
	cout << (jupiter.warna);
	jupiter.jarak("778 juta km");
	jupiter.lamahari("11,9 tahun ");
	jupiter.ukuran(142984);
	jupiter.bulan("ada");
	cout <<"=====================================\n\n";	
	
	cout << "ciri-ciri pelanet saturnus: \n\n";
	cout << (saturnus.warna);
	saturnus.jarak("1427 juta km");
	saturnus.lamahari("29,5 tahun ");
	saturnus.ukuran(120535);
	saturnus.bulan("ada");
	cout <<"=====================================\n\n";	
	
	cout << "ciri-ciri pelanet uranus: \n\n";
	cout << (uranus.warna);
	uranus.jarak("2871 juta km");
	uranus.lamahari("84 tahun ");
	uranus.ukuran(25362);
	uranus.bulan("ada");
	cout <<"=====================================\n\n";	
	
	cout << "ciri-ciri pelanet neptunus: \n\n";
	cout << (neptunus.warna);
	neptunus.jarak("4497 juta km");
	neptunus.lamahari("164 tahun ");
	neptunus.ukuran(49528);
	neptunus.bulan("ada");
	cout <<"=====================================\n\n";	
	
	cout << "ciri-ciri pelanet pluto: \n\n";
	cout << (pluto.warna);
	pluto.jarak("5.900 juta km");
	pluto.lamahari("246 tahun ");
	pluto.ukuran(2306);
	pluto.bulan("ada");
	cout <<"=====================================\n\n";	
}
void tatasurya::jarak(string jarakorbit){
	cout <<"\n"<<"jaraknya: "<<jarakorbit<<endl;

	}
int tatasurya::lamahari(string hari){
	cout <<"lama hari: "<<hari<<endl;
}
void tatasurya::ukuran(int jutakm){
	cout <<"ukuran: "<<jutakm<<endl;
}
void tatasurya::bulan(string adaapatidak){
	cout <<"bulan: "<<adaapatidak<<endl;
	
}
