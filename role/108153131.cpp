#include <iostream>

using namespace std; 

struct Role {
	char *name; 
	int level; 
	int hp;
	int ap; 
	int dp; 
	int sp; 
} ;

void dump_role(Role& role) {
	cout << " �W�١G" << role.name << endl;
	cout << " ���šG" << role.level << endl;
	cout << " ��q�G" << role.hp << endl;
	cout << " �����O�G" << role.ap << endl;
	cout << " ���m�O�G" << role.dp << endl;
	cout << " �믫��q�G" << role.sp << endl;
}

void test_role() {
	char name[] = "�i��";
	struct Role role;

	role.name = name;
	role.level = 1;
	role.hp = 10;
	role.ap = 1;
	role.dp = 1;
	role.sp =200;
	dump_role(role);
}



int main(int argc, char *argv[]) {
	test_role();
} 








 
