#include <iostream>
#include "accounts.h"

using namespace std; 

void Account:: SetBal(int bal){
	    balance = bal;
}

bool Account:: SetID(bool check , bool ans){
	    if(check == true) return account_ID;
	        account_ID = ans;
		    return account_ID;
}

int Account:: ManageBal(int bal){
	    balance += bal;
	        return balance;
}

AccountManager::AccountManager(){
	    for(int q = 0 ; q < 9 ; q++){
		            accounts[q].SetID(false,false);
			            accounts[q].SetBal(0);
				        }
	        NumofAccount = 0;
}

void AccountManager:: MakeAccount(){
	    if(NumofAccount >= 10){
		            cout << "Sorry, there is too many accounts." << "\n";
			            return;
				        }
	        NumofAccount++;
		    accounts[NumofAccount-1].SetID(false, true);
		        cout << "Balance of user " << (NumofAccount-1) << ": " << accounts[NumofAccount-1].ManageBal(0) << "\n";
}

bool AccountManager::depositing(int account, int amount){
	    if(accounts[account].SetID(true,true) == false){ 
		            cout << "Account does not exist." << "\n";
			            return false;
				        }
	        accounts[account].ManageBal(amount);
		    if(accounts[account].ManageBal(0) >= 1000000){
			            accounts[account].ManageBal(-(amount));
				            cout << "Sorry, Balance limit issue has occured" << "\n";
					            return true;
						        }
		        cout << "Success: Deposit to user " << account <<" " << amount << "\n";
			    return true;
}

bool AccountManager::withdrawing(int account, int amount){
	    if(accounts[account].SetID(true,true) == false){
		            cout << "Account does not exist." << "\n";
			            return false;
				        }
	        accounts[account].ManageBal(-(amount));
		    if(accounts[account].ManageBal(0) < 0){
			            accounts[account].ManageBal(amount);
				            cout << "Failure: Withdraw from user " << account <<" " << amount << "\n";
					            return true;
						        }
		        cout << "Success: Withdraw from user " << account <<" " << amount << "\n";
			    return true;

}

bool AccountManager::transferring(int from, int to, int amount){
	    if((accounts[from].SetID(true,true) == false) || (accounts[to].SetID(true,true) == false)){
		            cout << "Account does not exist." << "\n";
			            return false;
				        }

	        accounts[from].ManageBal(-(amount));
		    if(accounts[from].ManageBal(0) < 0){
			            accounts[from].ManageBal(amount);
				            cout << "Failure: Transfer from user " << from <<"to  user" << to << " "<< amount << "\n";
					            return true;
						        }
		        
		        accounts[to].ManageBal((amount));
			    if(accounts[to].ManageBal(0) >= 1000000){
				            accounts[to].ManageBal(-(amount));
					            cout << "Failure: Transfer from user " << from <<"to  user" << to << " "<< amount << "\n";
						            return true;
							        }

			        cout << "Success: Transfer from user " << from <<"to  user" << to << " "<< amount << "\n";
				    return true;


}

void AccountManager:: checking_balances(int account){
	    cout << "Balance of user " << account << ": " << accounts[account].ManageBal(0) << "\n";
}
