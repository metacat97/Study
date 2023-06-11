#include <iostream>
#include <conio.h>

void for_study();

int main()
{
	//for_study();


}

void for_study()
{
	printf("For 문은 반복문이다. 이렇게 돌아간다. \n");

	for (/*이거 비어도 가능*/int loopcount = 1;/*조건식*/ loopcount <= 5; loopcount += 1)
	{
		printf("어떻게 돌아가고 있는 것이지???\n");
	}
	printf("\n");

}