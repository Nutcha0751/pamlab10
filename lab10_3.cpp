#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int count = 0;
    double sum = 0, sum_of_square;

    ifstream source;
    source.open("score.txt");
    string textline;
    
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }

    sum = sum/count;
    sum_of_square = sqrt((sum_of_square/count) - (sum*sum));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum << endl;
    cout << "Standard deviation = " << sum_of_square;

    return 0;
}
