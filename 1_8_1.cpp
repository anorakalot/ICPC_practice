#include <iostream>
using namespace std;
char overworkedCitizen(string& record) {
char result = 'A';
for (int x = 0; x < record.size()-1; ++x){

  if (record.at(x) == record.at(x+1)){
    result = record.at(x);
    //result = 'b';
    //end the for loop
    break;
  }

  //end of for loop
}
return result;
//end of function
}


int main() {
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        string record;
        cin >> record;

        cout << overworkedCitizen(record) << endl;
    }

}
