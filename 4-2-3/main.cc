#include <iostream>
#include <algorithm>

using namespace std;

int  n ;

void magicSquare(int arr[]){
	    
	    pair<int,int> coord = {n-1, (n+1)/2}; /* think as x's coordination : n think as y's coordination : n+1/2 */

	        arr[(n*coord.first) + coord.second] = 1; /* 마지막 줄 중간을 1 로 채움 */


		    for(int q = 2  ; q <= n*n ; q++){
			            coord.first++;
				            coord.second++;
					            
					            
					            if(coord.first >= n && coord.second <= n ){
							                for(int w = 0 ; w < n ; w++ ){
										                if(arr[n*w+ coord.second] == -1){
													                    coord.first = w;
															                        arr[n*w+ coord.second] = q;
																		                    
																		                    break; 
																				                    }
												            } /* 박스에서 나갔고, 열에서 이동이 가능한 경우 */
									        }

						            else if(coord.second > n && coord.first < n){
								                for(int e = 1 ; e <= n ; e++){
											                if(arr[n*coord.first + e] == -1){
														                    coord.second = e;
																                        arr[n*coord.first + e ] = q;
																			                    
																			                    break;
																					                    }
													            }
										        } /* 박스에서 나갔고, 행에서 이동이 가능한 경우 */

							            else if(coord.first >= n && coord.second > n){
									                coord.first--;
											            coord.first--;
												                coord.second--;
														            arr[n*coord.first + coord.second] = q ; 
															            } /* 박스에서 나갔고, 행과 열 둘 다 이동이 불가능 한 경우 */

								            else if(arr[n*coord.first + coord.second] == -1){
										                arr[n*coord.first + coord.second] = q;
												        } /* 박스 안에 있으며, 이전 좌표의 오른쪽 아래의 자리가 빈 경우 */

									            else if(arr[n*coord.first + coord.second] != -1){
											                coord.first--;
													            coord.first--;
														                coord.second--;
																            arr[n*coord.first + coord.second] = q ;
																	            } /* 박스 안에 있으며, 이전 좌표의 오른쪽 아래의 자리가 있는 경우 */


										        }

}
int main(){

	    cin >> n ; 

	        if( !(n % 2 == 0 || n <= 0)  ){
			        int* arr = new int[n*n]; /* 그냥 배열로 짰으니 이차원 배열에서의 [r][t] 은 [n*(r-1)+t]로 쓸 수 있음. */
				        for(int r = 0 ; r < n ; r++){
						            for(int t = 1; t<= n ; t++){
								                    arr[n*r+t] = -1;
										                }
							            }
					        magicSquare(arr);
						       
						        
						        for(int r = 0 ; r < n ; r++){
								            for(int t = 1; t<= n ; t++){
										                    cout << arr[n*r + t] << " " ; 
												                }
									                cout << "\n";
											        }
							    }
}
    
