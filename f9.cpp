#include<iostream>
#include<iostream>
using namespace std; 
int main()
{
	int x;
	string n;
	word:
	cout<<"m,m,m,h,h,h-()ship()----------------------------\n";
	cout<<"Enter you choice: ";
	cin>>n;
	//condition1start
	if(n=="h")
	{
		cout<<"m,m,m,h,h--()ship()----------------------h\n";
		cout<<"\n========you lose========\nnumber of monsters on first island is higher than the human";
	}
	//condition1end
	// condition2start
	else if(n=="m")
	{
		word4:
		cout<<"m,m,h,h,h----------------------()ship()--m\n";
		cout<<"enter the next character you want to bring back: ";
		cin>>n; 
		if(n=="m")
		{
		goto word;
		}
		else
		{
		cout<<"you can only bring back monster in this case";
	}
	
	}
	//condition2end
	//condition3start
	else if(n=="hh")
	{
		cout<<"m,m,m,h--()ship()------------------------h,h";
		cout<<"\n\n============you lose===========\nmonster outnumbered human on first island";
	}
	//condition3end
	//condition4start
	else if(n=="mm")
	{
		cout<<"m,h,h,h------------------------()ship()--m,m\n";
		cout<<"enter the creature you want to bring back: ";
		cin>>n;
		if(n=="m")
		{
			word1:
			cout<<"m,m,h,h,h--()ship()------------------------,m\n";
			cout<<"enter the creature you want to move: ";
			cin>>n;
			if(n=="m")
			{
				goto word1;
			}
			else if(n=="mm")
			{
				word2:
				cout<<"h,h,h------------------------()ship()--m,m,m\n";
				cout<<"enter the creature you want to bring back: ";
				cin>>n;
				if(n=="mm")
				{
					goto word1;
				}
				else if(n=="m")
				{
					word3:
					cout<<"h,h,h,m--()ship()------------------------m,m\n";
					cout<<"enter the creature you want to move to second island: ";
					cin>>n;
					if(n=="m")
					{
						goto word2;
					}
					else if(n=="hh")
					{
						word5:
						cout<<"h,m------------------------()ship()--h,h,m,m\n";
						cout<<"enter the creature you want to bring back: ";
						cin>>n;
						if(n=="m")
						{
							cout<<"m,m,h--()ship()------------------------h,h,m\n";
							cout<<"\n=======you lose=======\nnumber of monster on first island is greater than humans ";
						}
						else if(n=="hh")
						{
							goto word3;
						}
						else if(n=="hm"||n=="mh")
						{
							word7:
							cout<<"m,h,m,h--()ship()------------------------h,m\n";
							cout<<"enter the creature you want to move: ";
							cin>>n;
							if(n=="mh"||n=="hm")
							{
								goto word5;	
							}
							else if(n=="m")
							{
								cout<<"m,h,h------------------------()ship()--m,h,m\n";
								cout<<"number of monster on second island is greater than humans";
							}
							else if(n=="h")
							{
								cout<<"m,m,h--()ship()------------------------h,h,m\n";
								cout<<"\n===========you lose==========\nnumber of monsters on first island is greater than human";
							}
							else if(n=="hh")
							{
								cout<<"m,m------------------------()ship()--h,h,h,m\n";
								cout<<"enter the creature you want to bring back: ";
								cin>>n;
								if(n=="m")
								{
									word8:
									cout<<"m,m,m--()ship()------------------------h,h,h,\n";
									cout<<"enter the creature you want to move: ";
									cin>>n;
									if(n=="m")
									{
										cout<<"m,m------------------------()ship()--m,h,h,h,\n";
										cout<<"enter the creature that you want to bring back: ";
										cin>>n;
										if(n=="hm"||n=="mh")
										{
											cout<<"m,m,m,h--()ship()------------------------h,h,\n";
											cout<<"\n=============you lose=============\nnumber of monsters on first island is greater than humans";
										}
										else if(n=="h")
										{
											cout<<"m,m,h--()ship()------------------------m,h,h,\n";
											cout<<"\n=============you lose==============\nnumber of monsters on first island is greater than humans";
										}
										else if(n=="m")
										{
											goto word8;
										}	
										
									}
									else if(n=="mm")
									{
										word9:
										cout<<"m------------------------()ship()--m,m,h,h,h,\n";
										cout<<"enter the creature you want to bring back: ";
										cin>>n;
										if(n=="mm")
										{
											goto word8;
										}
										else if(n=="mh"||n=="hm")
										{
										cout<<"m,h,m--()ship()------------------------m,m,h,h,h,\n";
										cout<<"\n=====you lose======\nnumber of monsters in first island is greater than human: ";
										}
										else if(n=="m")
										{
											cout<<"m,m--()ship()------------------------m,h,h,h,\n";
											cout<<"enter the creature you want to move: ";
											cin>>n;
											if(n=="m")
											{
												goto word9;
											}
											else if(n=="mm")
											{
												cout<<"------------------------()ship()--m,m,m,h,h,h,\n";
												cout<<"\n=========CONGRATULATIONS======\n\n         YOU WON THE GAME";
												cout<<"\npress 1 to restart the game: ";
												cin>>x;
												if(x==1)
												{
													goto word;
												}
												else
												cout<<"\nbyeee";
												
											}
												
											
										}
									}
								}
								
								else if(n=="mh"||n=="hm")
								{
									cout<<"m,m,m,h--()ship()------------------------h,h\n";
									cout<<"\n===========you lose=========\nnumber of monster in first island is greater than human";
								}
								else if(n=="hh")
								{
									goto word7;
								}
							}
							
						}
						else if(n=="mm")
						{
							
						}
						else if(n=="h")
						{
							cout<<"h,h,m------------------------()ship()--h,m,m\n";
							cout<<"\n===============you lose=============\nnumber of monsters on second island is greater than number of humans";
						}
						
					}
					else if(n=="h")
					{
						cout<<"h,h,m------------------------()ship()--h,m,m\n";
						cout<<"\n============you lose=============\nnumber of monsters on second island is greater than number of humans";
					}
					else if(n=="mh"||n=="hm")
					{
						cout<<"h,h------------------------()ship()--h,m,m,m\n";
						cout<<"\n============you lose==============\nnumber of monsters on second island is greater than number of humans ";
					}
					else if(n=="mm")
					{
						cout<<"you can only move single monster or two humans in this case: ";
						goto word3;
					}
					
				}
				else 
				{
				cout<<"you can only move single monster or both monster in this case";
				goto word2;
				}
			}
			else if(n=="mh"||n=="hm")
			{
				cout<<"m,h,h------------------------()ship()--m,h,m\n";
				cout<<"\n===============you lose=============\nnumber of monster on second island is greater than number of humans";
			}
			else if(n=="hh")
			{
				cout<<"m,m,h------------------------()ship()--h,h,m\n";
				cout<<"\n===============you lose==============\nnumber of monsters on first island is greater than number of humans";
			}
			else if(n=="h")
			{
				cout<<"m,m,h,h------------------------()ship()--h,m\n";
				cout<<"enter the creature you want to bring back: ";
				cin>>n;
				if(n=="mh"||n=="hm")
				{
					goto word;
				}
				else if(n=="m")
				{
					cout<<"m,m,m,h,h--()ship()------------------------h\n";
					cout<<"\n======you lose\nnumber of monster on first island is greater than humans";
				}
				else if(n=="h")
				{
					goto word1;
				}
			}

		}
		else if(n=="mm")
		{
			goto word;
		}
		else
		cout<<"you can only bring back single monster or double monster in this case";
		
	}
	//condition4end
	//condition5start
	else if(n=="hm"||n=="mh")
	{
		cout<<"m,h,m,h------------------------()ship()--h,m\n";
		cout<<"enter the creature you want to bring back: ";
		cin>>n;
		if(n=="h")
		{
			goto word1;
		}
		if(n=="hm"||n=="mh")
		{
			goto word;
		}
		if(n=="m")
		{
			cout<<"m,m,m,h,h--()ship()------------------------h,\n";
			cout<<"\n=============you lose==============\nnumber of monster in first island is greater than humans";
		}
		
	}
	//condition5end
	
	
}
