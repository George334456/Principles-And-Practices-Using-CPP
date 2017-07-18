#include "../../std_lib_facilities.h"

int main(){
	cout << "Please enter the name of the person you want to write to: ";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "\tHow are you? I am doing fine ever since I've moved to the big city. I really miss you right now. ";
	cout << "\nPlease enter the name of a friend: ";
	string friend_name;
	cin >> friend_name;
	cout << "\nHave you seen " << friend_name << " recently?\n";
	char friend_sex = 0;
	cout << "If your friend is male, enter m. If your friend is female, please enter f.\n";
	cin >> friend_sex;
	if (friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me. \n";
	}
	else{
		cout << "If you see " << friend_name << " please ask her to call me. \n";
	}
	cout << "How old are they now?";
	int age;
	cin >> age;
	cout << "I hear you just had a birthday and you are now " << age << " years old now.\n";
	if (age < 0 || age >110){
		simple_error("You're kidding!");
	}
	if (age < 12){
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	else if (age == 17){
		cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70){
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours Sincerely,\n\n George Wu";

	keep_window_open();
	
	return 0;
}