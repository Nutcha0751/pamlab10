#include <iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0] += 1;
			i++;
		}
		else if(grade == 'B'){
			// if grade is B
			count[1] += 1;
			i++;}
		else if(grade == 'C'){
			count[2] += 1;
			i++;}
		else if(grade == 'D'){
			count[3] += 1;
			i++;}
		else if(grade == 'F'){
			count[4] += 1;
			i++;}
		else if(grade != '0'){
			cout << "Wrong input. Please input again.\n";}
		//and so on ... for grade = C, D, F	
	}
	while(grade != '0');
	
	
	cout << "In total " << i - 1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
