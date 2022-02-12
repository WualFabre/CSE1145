#include <stdio.h>

int main(){
	
float yearly_salary;
float net_yearly_salary;

float net_hourly_rate;

scanf("%f",&yearly_salary);

if(yearly_salary>=0){
	
net_yearly_salary=(yearly_salary)*85/100 ;

net_hourly_rate= net_yearly_salary/(40*52);

printf("%.3f",net_hourly_rate);
}
else{
	
	printf("Invalid entry");
}
}

