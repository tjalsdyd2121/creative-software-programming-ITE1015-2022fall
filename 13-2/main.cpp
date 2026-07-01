#include <iostream>

using namespace std;

class A
{
};
class B : public A
{
};
class C : public B
{
};
  
int main(){
	int n;
	cout << "input num(0~2):";
	cin >> n;	
	
	try{
		if(n == 0)
			throw A();
		else if(n == 1)	
			throw B();
		else if (n ==2)
			throw C();
		else
			throw string("invalid input");
	}
	catch(C& c){
        cout << "throw C has been called";
    }
    catch(B& b){
        cout << "throw B has been called";
    }
    catch(A& a){
        cout << "throw A has been called";
    }
    catch(string& s){
        cout << s;
    }
	return 0;
}
