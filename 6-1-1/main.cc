#include <iostream>
#include "shapes.h"

using namespace std;

int main(){
	        double pi = 3.14;
		        int flag = 0;

			        char fig;
				        while (!flag)
						        {
								                cout << "shape?" << "\n";
										                cin >> fig;
												                if(fig == 'C'){
															                        double arr[4];
																		                        for(int q = 0 ; q < 3 ; q++) cin >> arr[q];
																					                        Circle Cir(arr[0], arr[1], arr[2]);

																								                        cout << "area: "<< Cir.Circle_Area() << ", ";
																											                        cout << "perimeter: " << Cir.Circle_peri() << "\n";
																														                }

														                else if(fig == 'R'){
																	                        int arr[5];
																				                        for(int q = 0 ; q < 4; q++) cin >> arr[q];
																							                        Rectengular Rec(arr[0], arr[1], arr[2], arr[3]);

																										                        cout << "area: " << Rec.Rectengular_Area() << ", ";
																													                        cout <<"perimeter: " << Rec.Rectengular_peri() << "\n";
																																                }

																                else{
																			                        flag = 1;
																						                }

																		        }
					        
}
