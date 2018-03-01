#include <stdio.h>
#include <string.h>

void drawSierpinskiCarpet(double x, double y, double l, int iter){
	if (iter<=0){
		return;
	}
	printf("(%.2f, %.2f), %.2f\n", x,  (y+l*2/3), l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x, y+l*1/3, l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x, y, l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x+l*1/3, y+l*2/3, l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x+l*1/3, y, l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x+l*2/3, y+l*2/3, l*1/3);
	printf("(%.2f, %.2f), %.2f\n",x+l*2/3, y+l*1/3, l*1/3);
	printf("(%.2f, %.2f), %.2f\n\n",x+l*2/3, y, l*1/3);
	iter-=1;
	drawSierpinskiCarpet(x, y+l*2/3, l*1/3, iter);
	drawSierpinskiCarpet(x, y+l*1/3, l*1/3, iter);
	drawSierpinskiCarpet(x, y, l*1/3, iter);
	drawSierpinskiCarpet(x+l*1/3, y+l*2/3, l*1/3, iter);
	drawSierpinskiCarpet(x+l*1/3, y, l*1/3, iter);
	drawSierpinskiCarpet(x+l*2/3, y+l*2/3, l*1/3, iter);
	drawSierpinskiCarpet(x+l*2/3, y+l*1/3, l*1/3, iter);
	drawSierpinskiCarpet(x+l*2/3, y, l*1/3, iter);	

}

int main(){
	drawSierpinskiCarpet(-1,-1,2,2);
	
	return 1;
}
