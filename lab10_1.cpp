#include <iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade = 'A') // if grade is A
			count[0] += 1;
		}else if(grade = 'B') // if grade is B
			//Do something
		else if(grade = 'C')
		else if(grade = 'D')
		else if(grade = 'F')
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			if(grade = '0') break;
			else cout << "Wrong input. Please input again.";
		} 
	}while(true);
	
	
	cout << "In total ? students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
