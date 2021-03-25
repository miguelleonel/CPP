#include <iostream>

using namespace std;

bool is_valid_phone_number(char *phone, int size)
{
	cout<<phone<<endl;
	if (size == 14 && phone[0] == '(' &&
		isdigit(phone[1]) &&
		isdigit(phone[2]) &&
		isdigit(phone[3]) &&
		phone[4] == ')' &&
		phone[5] == ' ' &&
		isdigit(phone[6]) &&
		isdigit(phone[7]) &&
		isdigit(phone[8]) &&
		phone[9] == '-' &&
		isdigit(phone[10]) &&
		isdigit(phone[11]) &&
		isdigit(phone[12]) &&
		isdigit(phone[13])) 
	{
        return true;
	} 
	else 
	{
        return false;
    }
}



int main() 
{
    char phone[]="(956) 645-5671";
	bool is_valid = is_valid_phone_number(phone,sizeof(phone)-1);
    if(is_valid)
    {
        cout<<"The phone is true!"<<endl;
    }
    
    else
    {
        cout<<"The phone is false!"<<endl;
    }
    return 0;
}