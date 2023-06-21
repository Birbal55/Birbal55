#include<stdio.h>//printf()/scanf()
#include<stdlib.h>//for system("pause")/system("cls")
main()//main()function of program,program start and end from here
{
	//variable declaration /reserve memory space
	double dno1,dno2;
	system("cls");//clear output screen
	//executable part
    printf("Enter two values:");
    scanf("%lf%lf",&dno1,&dno2);
	printf("Sum=%lf\n",dno1+dno2);
	system("pause");//pause screen with message (press any key to continue....)
}
