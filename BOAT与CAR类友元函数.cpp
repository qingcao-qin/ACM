#include<iostream>
using namespace std;
class Boat;
class Car{
	public:
		int weight;
	Car(int w){
		weight = w;
	}
	friend class Boat;
	friend int getTotalWeight(Boat w1 , Car w2);
};
class Boat{
	public:
		int weight;
	Boat(int w){
		weight = w;
	}
	friend class Car;
	friend int getTotalWeight(Boat w1 , Boat w2);
};

int getTotalWeight(Boat w1 , Car w2){
	return w1.weight + w2.weight;
}
int main(){
	Boat w1(56);
	Car w2(665);
	cout<<w1.weight<<" "<<w2.weight<<endl;
	int x = getTotalWeight(w1 , w2);
	//cout<<x<<endl;
	return 0;
}
