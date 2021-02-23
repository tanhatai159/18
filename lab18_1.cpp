#include<iostream>
#include<algorithm>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double min_x,max_x,min_y,max_y,total = 0;
	min_x = max(R1.x,R2.x);
	max_x = min(R1.x+R1.w,R2.x+R2.w);
	min_y = max(R1.y-R1.h,R2.y-R2.h); 
	max_y = min(R1.y,R2.y);
	total = (max_y-min_y)*(max_x-min_x);
    if(total >= 0) return total;
    else return 0;

}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);
}