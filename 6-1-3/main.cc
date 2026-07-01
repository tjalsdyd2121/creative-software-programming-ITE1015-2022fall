#include <iostream>
#include "accounts.h"
#include <string>
using namespace std;

int main(){
	      bool out = false;
	            char task;
		          int a,b,c;
			        AccountManager newAccount;

				      while (!out){
					              cout << "Job? \n";
						              cin >> task;

							              if(task == 'N'){
									                      newAccount.MakeAccount();
											              }
								              else if(task == 'D'){
										                      cin >> a >> b;
												                      if(newAccount.depositing(a,b) != false) newAccount.checking_balances(a);
														              }
									              else if(task =='W'){
											                      cin >> a >> b;
													                      if(newAccount.withdrawing(a,b) != false) newAccount.checking_balances(a);
															              }
										              else if(task == 'T'){
												                      cin >> a >> b >> c;
														                      if(newAccount.transferring(a,b,c) != false){
																	                              newAccount.checking_balances(a);
																				                              newAccount.checking_balances(b);
																							                      }
																              }
											              else{
													                      out = true;
															              }

												            }
				              
}
