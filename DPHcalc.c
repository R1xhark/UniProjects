#include <stdio.h>

int main(){
	const double dphZaklad=1.21;
	const double dphSniz=1.10;
	double castka;
	
	printf("Zadej castku ke zdaneni:\n");
	scanf("%lf",&castka);
	
	printf("jakou sazbou:\n"
			"1.Zakladni\n"
			"2.Snizenou\n");
	int vyber;
	scanf("%d",&vyber);
	if(vyber<=0 || vyber > 2 || castka <=0){
	    printf("Neplatny vyber nebo zadana  castka err vyber je: %d a castka: %lf",vyber,castka);
	}
	else {
	if(vyber==1){
		double vysledek=castka*dphZaklad;
		double dph=vysledek-castka;
		printf("Zdanena castka je %lf\n",vysledek);
		printf("DPH z ceny je %lf\n",dph);
	}
	else if (vyber==2){
		double vysledek=castka*dphSniz;
		double dph=vysledek-castka;
		printf("Zdanena castka je %lf\n",vysledek);
		printf("DPH z ceny je %lf\n",dph);
	}
	}
	
	return 0;
}
