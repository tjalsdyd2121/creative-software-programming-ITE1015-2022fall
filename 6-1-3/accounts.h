#include <iostream>

using namespace std;

class Account
{
	private:
		    bool account_ID;
		        int balance;
	public:
			    void SetBal(int bal);
			        int ManageBal(int bal);
				    bool SetID(bool check, bool ans);
				        


				        
};

class AccountManager
{
	private:
		    Account accounts[10];
		        int NumofAccount;
	public:
			    AccountManager();
			        void MakeAccount();
				    bool depositing(int account, int amount);
				        bool withdrawing(int account,int amount);
					    bool transferring(int from,int to, int amount);
					        void checking_balances(int account);
};

