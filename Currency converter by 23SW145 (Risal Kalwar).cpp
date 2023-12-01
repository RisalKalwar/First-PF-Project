#include<iostream>
#include<iomanip>
using namespace std;

class CurrencyC{
	private: 
	double usdR;
	double euroR;
	double ausdR;
	double candR;
	double japyenR;
	double poundR;
	double indrR;
	double qatarR;
	double saudirR;
	double dirhamR;
	
public: 
CurrencyC(): usdR(0.003504) , euroR( 0.003199) , ausdR( 0.005326) , candR(0.004807) , japyenR(0.51700966) , poundR(0.002795) , indrR(0.291865 ) , qatarR( 0.012769) , saudirR(0.013143) , dirhamR( 0.012871 ) {
	
}	
	double converttoUsd(double amountinPKR)
	const { return amountinPKR*usdR;}
	
	double converttoEURO(double amountinPKR)
	const { return amountinPKR*euroR;}
	
	double converttoAUSD(double amountinPKR)
	const {return amountinPKR*ausdR;}
	
	double converttoCAND(double amountinPKR)
	const {return amountinPKR*candR;}
	
	double converttoJAPY(double amountinPKR)
	const {return amountinPKR*japyenR;}
	
	double converttoPOUND(double amountinPKR)
	const {return amountinPKR*poundR;}
	
	double converttoINDR(double amountinPKR)
	const {return amountinPKR*indrR;}
	
	double converttoQATAR(double amountinPKR)
	const { return amountinPKR*qatarR;}
	
	double converttoSAUDI(double amountinPKR)
	const {return amountinPKR*saudirR;}
	
	double converttoDIRHAM(double amountinPKR)
	const {return amountinPKR*dirhamR;}
	
	void DisplayC(double amountinPKR)
	const { cout<<"PKR (PAKISTANI RUPEE): "<<amountinPKR<<fixed<<setprecision(2)<<endl;
	cout<<"USD (UNITED STATES DOLLAR): "<<converttoUsd(amountinPKR)<<endl;
	cout<<"EURO (EURO): "<<converttoEURO(amountinPKR)<<endl;
	cout<<"AUSD (AUSTRALIAN DOLLAR): "<<converttoAUSD(amountinPKR)<<endl;
	cout<<"CAND (CANADIAN DOLLAR): "<<converttoCAND(amountinPKR)<<endl;
	cout<<"YEN (JAPANESE YEN): "<<converttoJAPY(amountinPKR)<<endl;
	cout<<"POUND (UNITED KINGDOM): "<<converttoPOUND(amountinPKR)<<endl;
	cout<<"INDR (INDIAN RUPEE): "<<converttoINDR(amountinPKR)<<endl;
	cout<<"QATR (QATAR RIYAL): "<<converttoQATAR(amountinPKR)<<endl;
	cout<<"SAUDIR (SAUDI RIYAL): "<<converttoSAUDI(amountinPKR)<<endl;
	cout<<"AED (UNITED ARAB EMIRATES DIRHAM): "<<converttoDIRHAM(amountinPKR)<<endl;
	}
	
};

int main()
{
CurrencyC converter;
double amountinPKR;
cout<<" Enter Amount in PKR(Pakistani Rupee) : "<<endl;
cin>>amountinPKR;
converter.DisplayC(amountinPKR);

cout<<" _________________________________________"<<endl;
cout<<"|                                         |"<<endl;
cout<<"|                                         |"<<endl;
cout<<"|              MADE BY                    |"<<endl;
cout<<"|              SEC (|||)                  |"<<endl;
cout<<"|         23SW145  RISAL KALWAR           |"<<endl;
cout<<"|_________________________________________|"<<endl;
cout<<" "<<endl;
return 0;




}

