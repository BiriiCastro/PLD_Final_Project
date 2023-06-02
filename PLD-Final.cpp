#include <stdio.h>
#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

	string movies[2] = {"Boku no Hero Academia", "Jujutsu Kaisen 0"};
	int ticket, ticketbnha = 150, ticketjjk = 100, num;
	float tamount, costbnha = 540, costjjk = 500, charge, cost, fdcost;
	double payment, cardnum;
	char opt, yesno, yn, method;
	string namef, names;
	float ps = 110, pj = 90, ns = 95, nj = 85;
	string fodr[] = {"Popcorn with Soda","Popcorn with Juice","Nuggets with Soda", "Nuggets with Juice"};

void welcome(){
	system("cls"); system("Color 9F");
	cout<<"\n\n\n\n\n\n\t\t\t\t\tWelcome to Group 1 Ticket Buying System";
	cout<<"\n\t\t\t\t\t   "; Sleep(500); system("pause");
}

void start(){
	system("cls"); system("Color 9F");
	cout<<"\n\n\n\t\t\t\t\t        ***CURRENTLY SHOWING***\n\n";
	cout<<"\t\t\t\t\t 'A' = Boku no Hero Academia = 540 PHP\n";
	cout<<"\t\t\t\t\t 'B' = Jujutsu Kaisen 0      = 500 PHP\n";
	cout<<"\t\t\t\t\t 'Anykey' = Exit Program\n\n\n";
	cout<<"\t\t\t\t\t Available ticket/s for 'A': "<<ticketbnha;
	cout<<"\n\t\t\t\t\t Available ticket/s for 'B': "<<ticketjjk;
	cout<<"\n\n\t\t\t\t\t Enter Desired Film: ";
	cin>>opt;

}

void linebnha(){

			system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\t\tYou selected "<<movies[0];
			cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
			cin>>yesno;
			switch(yesno){
				case 'Y':
				case 'y':
					if(ticketbnha >= 1){
						system("cls");
						cout<<"\n\n\n\n\n\n\t\t\t\t\tHow many ticket/s do you want to Purchase?\n\t\t\t\t\t\t\t";
						cout<<"Value: ";
						cin>>ticket;
						if(ticket <= ticketbnha){
							system("cls");
							cout<<"\n\n\n\n\n\n\t\t\t\t\t   You reserved "<<ticket<<" ticket/s\n\n\t\t\t\t\t";
							Sleep(500); system("pause");
							system("cls");
							cout<<"\n\n\n\n\n\n\t\t\t\t\tDo you want to add Food & Drinks?";
							cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
							cin>>yn;
							system("cls");
							int fopt;
							switch(yn){
								case 'Y':
								case 'y':
									cout<<"\n\n\n\t\t\t\t\tHere are the Available Foods & Drinks: \n\n";
									cout<<"\t\t\t\t\t '1' = Popcorn with Soda  = 110 PHP\n";
									cout<<"\t\t\t\t\t '2' = Popcorn with Juice = 90 PHP\n";
									cout<<"\t\t\t\t\t '3' = Nuggets with Soda  = 95 PHP\n";
									cout<<"\t\t\t\t\t '4' = Nuggets with Juice = 85 PHP\n";
									cout<<"\t\t\t\t\t 'Any Number' = Exit Purchase\n";
									cout<<"\n\t\t\t\t\t  Good for ONE PERSON\n";
									cout<<"\n\n\t\t\t\t\tEnter desired Combination: ";
									cin>>fopt;
									switch(fopt){
										case 1:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Popcorn with Soda\n";
											cout<<"\n\t\t\t\t\tHow many Popcorn with Soda do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<"x of "<<fodr[0]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*ps;
											system("pause");
											goto pay;
											break;
										case 2:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Popcorn with Juice\n";
											cout<<"\n\t\t\t\t\tHow many Popcorn with Juice do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[1]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*pj;
											system("pause");
											goto pay;
											break;
										case 3:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Nuggets with Soda\n";
											cout<<"\n\t\t\t\t\tHow many Nuggets with Soda do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[2]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*ns;
											system("pause");
											goto pay;
											break;
										case 4:
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\t   You selected Nuggets with Juice\n";
											cout<<"\n\t\t\t\t\tHow many Nuggets with Juice do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[3]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*nj;
											system("pause");
											goto pay;
											break;
										default:
											goto pay;
											break;
											
									}
									system("pause");
									break;
								default:
									goto pay;
									break;
							}
							pay:
								system("cls");
								charge = ticket*costbnha;
								switch(yn){
									case 'y':
									case 'Y':
										tamount = charge + fdcost;
										break;
									default:
										tamount = charge;
										break;
								}
								cout<<"\n\n\n\t\t\t\t\tCharge amount: "<<tamount<<" PHP";
								cout<<"\n\n\t\t\t\t\tSelect Payment Method";
								cout<<"\n\t\t\t\t\t 'A' = Card";
								cout<<"\n\t\t\t\t\t 'B' = Cash";
								cout<<"\n\t\t\t\t\t 'Anykey' = Exit";
								cout<<"\n\n\t\t\t\t\tEnter choice: ";
								cin>>method;
								switch(method){
									case 'A':
									case 'a':
										system("cls");
										cout<<"\n\n\n\t\t\t\t\t\tYou selected Card Method";
										cout<<"\n\n\t\t\t\t\tEnter Card Holder Firstname: ";
										cin>>namef;
										cout<<"\n\t\t\t\t\tEnter Card Holder Surname: ";
										cin>>names;
										cout<<"\n\t\t\t\t\tEnter your Card Number: ";
										cin>>cardnum;
										Card:
										system("cls"); system("Color 9F");
										cout<<"\n\n\n\t\t\t\t\t\tCharged amount: "<<tamount;
										cout<<"\n\n\t\t\t\t\tEnter Payment amount: ";
										cin>>payment;
										if(payment >= tamount){
											ticketbnha = ticketbnha - ticket;
											goto receipt;
										}
										else{
											system("cls"); system("Color 04");
											cout<<"\n\n\n\t\t\t\t\t\tNot Enough Money"; Sleep(1000);
											cout<<"\n\n\t\t\t\t\tDo you want to Enter Another Value?";
											cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
											cin>>yesno;
												switch(yesno){
													case 'Y':
													case 'y':
														system("cls");
														goto Card;	
														break;
													default:
														abort();
												}	
										}
										break;
									case 'B':
									case 'b':
										system("cls");
										cout<<"\n\n\n\t\t\t\t\t\tYou selected Cash Method\n";
										cout<<"\n\n\t\t\t\t\tEnter your Firstname: ";
										cin>>namef;
										cout<<"\n\t\t\t\t\tEnter your Surname: ";
										cin>>names;
									Cash:
										system("cls"); system("Color 9F");
										cout<<"\n\n\n\t\t\t\t\t\tCharged amount: "<<tamount;
										cout<<"\n\n\n\t\t\t\t\tEnter Payment amount: ";
										cin>>payment;
										if(payment >= charge){
											ticketbnha = ticketbnha - ticket;
											goto receipt;
										}
										else{
											system("cls"); system("Color 04");
											cout<<"\n\n\n\t\t\t\t\t\tNot Enough Money"; Sleep(1000);
											cout<<"\n\n\t\t\t\t\tDo you want to Enter Another Value?";
											cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = exit\n\t\t\t\t\t\t\t";
											cin>>yesno;
												switch(yesno){
													case 'Y':
													case 'y':
														goto Cash;	
														break;
													default:
														abort();
														break;
												}	
										break;
										}
									default:
										abort();
										break;
										
								}

							receipt:
								
								system("cls"); system("Color F0");
								cout<<"\n\t\t\t\t\t------------------------------------\n\n";
								cout<<"\t\t\t\t\t   Group 1 Ticket Buying System\n\n";
								cout<<"\t\t\t\t\t------------------------------------\n";
								cout<<"\t\t\t\t\tName: "<<namef<<" "<<names<<"\n";
								cout<<"\t\t\t\t\tRef. No.: "<<(rand() %1000000) + 1000000<<"\n\n\n";
								cout<<"\t\t\t\t\t"<<ticket<<"x	"<<movies[0]<<"	"<<charge<<"\n";
								switch(yn){
									case 'y':
									case 'Y':
										switch(fopt){
											case 1:
											case 2:
											case 3:
											case 4:
												cout<<"\t\t\t\t\t"<<num<<"x	"<<"Food & Drinks option: "<<fopt<<" "<<fdcost<<"\n";	
											break;
										default:
											cout<<"\t\t\t\t\t0x	"<<"Food & Drinks option: n"<<" "<<"0\n";
											break;
								}							
										break;
									default:
										cout<<"\t\t\t\t\t0x	"<<"Food & Drinks option: n"<<" "<<"0\n";
										break;
								}
								cout<<"\t\t\t\t\t-------------------------------------\n\n";
								cout<<"\t\t\t\t\tTotal Amount:	                "<<tamount<<"\n";
								cout<<"\t\t\t\t\tPayment:	                "<<payment<<"\n\n";
								cout<<"\t\t\t\t\t-------------------------------------\n\n";
								cout<<"\t\t\t\t\tChange:                         "<<payment - tamount<<"\n\n";
								cout<<"\t\t\t\t\t-------------------------------------\n";

								
								cout<<"\n\n\n\t\t\t\t\tPlease Screenshot the Receipt";
								Sleep(5000);
								cout<<"\n\n\n\t\t\t\t\tThank You for using Group 1 Ticket System\n\t\t\t\t\t";
								Sleep(1000); system("pause");
						}
						else{
							system("cls");
							cout<<"\n\n\n\t\t\t\t\t"<<ticketbnha<<" ticket/s remaining\n\n\n\t\t\t\t\t";
							system("pause");
							int main();
						}
					}
					else{
						system("cls");
						cout<<"\n\n\n\t\t\t\t\t"<<ticketbnha<<" ticket/s remaining\n\n\n\t\t\t\t\t";
						system("pause");
						int main();	
					}
					break;
				default:
					int main();
					break;
			}
}

void linejjk(){
			system("cls");
			cout<<"\n\n\n\n\n\n\t\t\t\t\tYou selected "<<movies[1];
			cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
			cin>>yesno;
			switch(yesno){
				case 'Y':
				case 'y':
					if(ticketjjk >= 1){
						system("cls");
						cout<<"\n\n\n\n\n\n\t\t\t\t\tHow many ticket/s do you want to Purchase?\n\t\t\t\t\t\t\t";
						cout<<"Value: ";
						cin>>ticket;
						if(ticket <= ticketjjk){
							system("cls");
							cout<<"\n\n\n\n\n\n\t\t\t\t\t   You reserved "<<ticket<<" ticket/s\n\n\t\t\t\t\t";
							Sleep(500); system("pause");
							system("cls");
							cout<<"\n\n\n\n\n\n\t\t\t\t\tDo you want to add Food & Drinks?";
							cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
							cin>>yn;
							system("cls");
							int fopt;
							switch(yn){
								case 'Y':
								case 'y':
									cout<<"\n\n\n\t\t\t\t\tHere are the Available Foods & Drinks: \n\n";
									cout<<"\t\t\t\t\t '1' = Popcorn with Soda  = 110 PHP\n";
									cout<<"\t\t\t\t\t '2' = Popcorn with Juice = 90 PHP\n";
									cout<<"\t\t\t\t\t '3' = Nuggets with Soda  = 95 PHP\n";
									cout<<"\t\t\t\t\t '4' = Nuggets with Juice = 85 PHP\n";
									cout<<"\t\t\t\t\t 'Any Number' = Exit Purchase\n";
									cout<<"\n\t\t\t\t\t  Good for ONE PERSON\n";
									cout<<"\n\n\t\t\t\t\tEnter desired Combination: ";
									cin>>fopt;
									switch(fopt){
										case 1:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Popcorn with Soda\n";
											cout<<"\n\t\t\t\t\tHow many Popcorn with Soda do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<"x of "<<fodr[0]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*ps;
											system("pause");
											goto pay1;
											break;
										case 2:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Popcorn with Juice\n";
											cout<<"\n\t\t\t\t\tHow many Popcorn with Juice do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[1]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*pj;
											system("pause");
											goto pay1;
											break;
										case 3:
											system("cls");
											cout<<"\n\n\n\t\t\t\t\t   You selected Nuggets with Soda\n";
											cout<<"\n\t\t\t\t\tHow many Nuggets with Soda do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[2]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*ns;
											system("pause");
											goto pay1;
											break;
										case 4:
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\t   You selected Nuggets with Juice\n";
											cout<<"\n\t\t\t\t\tHow many Nuggets with Juice do you want?\n\t\t\t\t\t\t   Value: ";
											cin>>num;
											system("cls");
											cout<<"\n\n\n\n\n\n\t\t\t\t\tSuccessfully included "<<num<<" of "<<fodr[3]<<"\n\n\t\t\t\t\t\t";
											fdcost = num*nj;
											system("pause");
											goto pay1;
											break;
										default:
											goto pay1;
											break;
											
									}
									system("pause");
									break;
								default:
									goto pay1;
									break;
							}
							pay1:
								system("cls");
								charge = ticket*costjjk;
								switch(yn){
									case 'y':
									case 'Y':
										tamount = charge + fdcost;
										break;
									default:
										tamount = charge;
										break;
								}
								cout<<"\n\n\n\t\t\t\t\tCharge amount: "<<tamount<<" PHP";
								cout<<"\n\n\t\t\t\t\tSelect Payment Method";
								cout<<"\n\t\t\t\t\t 'A' = Card";
								cout<<"\n\t\t\t\t\t 'B' = Cash";
								cout<<"\n\t\t\t\t\t 'Anykey' = Exit";
								cout<<"\n\n\t\t\t\t\tEnter choice: ";
								cin>>method;
								switch(method){
									case 'A':
									case 'a':
										system("cls");
										cout<<"\n\n\n\t\t\t\t\t\tYou selected Card Method";
										cout<<"\n\n\t\t\t\t\tEnter Card Holder Firstname: ";
										cin>>namef;
										cout<<"\n\t\t\t\t\tEnter Card Holder Surname: ";
										cin>>names;
										cout<<"\n\t\t\t\t\tEnter your Card Number: ";
										cin>>cardnum;
									Card1:
										system("cls"); system("Color 9F");
										cout<<"\n\n\n\t\t\t\t\t\tCharged amount: "<<tamount;
										cout<<"\n\n\t\t\t\t\tEnter Payment amount: ";
										cin>>payment;
										if(payment >= tamount){
											ticketjjk = ticketjjk - ticket;
											goto receipt1;
										}
										else{
											system("cls"); system("Color 04");
											cout<<"\n\n\n\t\t\t\t\t\tNot Enough Money"; Sleep(1000);
											cout<<"\n\n\t\t\t\t\tDo you want to Enter Another Value?";
											cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
											cin>>yesno;
												switch(yesno){
													case 'Y':
													case 'y':
														system("cls");
														goto Card1;	
														break;
													default:
														abort();
												}	
										}
										break;
									case 'B':
									case 'b':
										system("cls");
										cout<<"\n\n\n\t\t\t\t\t\tYou selected Cash Method\n";
										cout<<"\n\n\t\t\t\t\tEnter your Firstname: ";
										cin>>namef;
										cout<<"\n\t\t\t\t\tEnter your Surname: ";
										cin>>names;
									Cash1:
										system("cls"); system("Color 9F");
										cout<<"\n\n\n\t\t\t\t\t\tCharged amount: "<<tamount;
										cout<<"\n\n\n\t\t\t\t\tEnter Payment amount: ";
										cin>>payment;
										if(payment >= charge){
											ticketjjk = ticketjjk - ticket;
											goto receipt1;
										}
										else{
											system("cls"); system("Color 04");
											cout<<"\n\n\n\t\t\t\t\t\tNot Enough Money"; Sleep(1000);
											cout<<"\n\n\t\t\t\t\tDo you want to Enter Another Value?";
											cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
											cin>>yesno;
												switch(yesno){
													case 'Y':
													case 'y':
														goto Cash1;	
														break;
													default:
														abort();
												}	
										break;
										}
									default:
										abort();
										break;
										
								}

							receipt1:
								
								system("cls"); system("Color F0");
								cout<<"\n\t\t\t\t\t------------------------------------\n\n";
								cout<<"\t\t\t\t\t   Group 1 Ticket Buying System\n\n";
								cout<<"\t\t\t\t\t------------------------------------\n";
								cout<<"\t\t\t\t\tName: "<<namef<<" "<<names<<"\n";
								cout<<"\t\t\t\t\tRef. No.: "<<(rand() %1000000) + 1000000<<"\n\n\n";
								cout<<"\t\t\t\t\t"<<ticket<<"x	"<<movies[1]<<"	"<<charge<<"\n";
								switch(yn){
									case 'y':
									case 'Y':
										switch(fopt){
											case 1:
											case 2:
											case 3:
											case 4:
												cout<<"\t\t\t\t\t"<<num<<"x	"<<"Food & Drinks option: "<<fopt<<" "<<fdcost<<"\n";	
											break;
										default:
											cout<<"\t\t\t\t\t0x	"<<"Food & Drinks option: n"<<" "<<"0\n";
											break;
								}							
										break;
									default:
										cout<<"\t\t\t\t\t0x	"<<"Food & Drinks option: n"<<" "<<"0\n";
										break;
								}
								cout<<"\t\t\t\t\t-------------------------------------\n\n";
								cout<<"\t\t\t\t\tTotal Amount:	                "<<tamount<<"\n";
								cout<<"\t\t\t\t\tPayment:	                "<<payment<<"\n\n";
								cout<<"\t\t\t\t\t-------------------------------------\n\n";
								cout<<"\t\t\t\t\tChange:                         "<<payment - tamount<<"\n\n";
								cout<<"\t\t\t\t\t-------------------------------------\n";

								
								cout<<"\n\n\n\t\t\t\t\tPlease Screenshot the Receipt";
								Sleep(5000);
								cout<<"\n\n\n\t\t\t\t\tThank You for using Group 1 Ticket System\n\t\t\t\t\t";
								Sleep(1000); system("pause");
						}
												else{
							system("cls");
							cout<<"\n\n\n\t\t\t\t\t"<<ticketjjk<<" ticket/s remaining\n\n\n\t\t\t\t\t";
							system("pause");
							int main();
						}
					}
					else{
						system("cls");
						cout<<"\n\n\n\t\t\t\t\t"<<ticketjjk<<" ticket/s remaining\n\n\n\t\t\t\t\t";
						system("pause");
						int main();
					}
					break;
				default:
					int main();
					break;
			}
}

int main(int argc, char** argv) {
	
	for(int l = 1; l = 1;){
		welcome();
	re:
		start();
		switch(opt){
			case 'A':
			case 'a':
				linebnha();
				break;
			case 'B':
			case 'b':
				linejjk();
				break;
			default:
				return 0;
				break;
		}
	system("cls"); system("Color 04");
	cout<<"\n\n\n\n\n\n\t\t\t\t\tDo you want to continue buying tickets?";
	cout<<"\n\t\t\t\t\t'Y' = yes	|| anykey = no\n\t\t\t\t\t\t\t";
	cin>>yesno;
		switch(yesno){
			case 'Y':
			case 'y':
				goto re;
				break;
			default:
				return 0;
		}
	}
	return 0;
}
