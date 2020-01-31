#include<stdio.h>



class car
{

private:
	int nrOfTires;

public:
	car();
	~car();
	void calculateCar();
	
};

void car::calculateCar()
{
	printf("car\n");
}


int main(void)
{
   printf("\n The Geek Stuff\n");
   car c;
   c.calculateCar();
   

   return 0;
}