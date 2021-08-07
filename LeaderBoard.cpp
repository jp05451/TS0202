#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
				fstream f;
				int score[10] = { 0 }, i = 0,j;
				string name[10] = { "\0" };
				f.open("scores.txt", ios::in);
				if (!f.is_open())
				{
								cout << "File Open Error" << endl;
								return 0;
				}
				else
				{
								//cout << "File Open Success" << endl;
								while(f>>name[i])
								{
												//cout << i + 1 << "\t";
											    //cout << setw(10) << name[i] << "\t";
												f >> score[i];
												//cout << setw(10) << score[i] << endl;
												i++;
								}
								int num = i,temp;
								string tempn;
								for (i = 1; i <= num; i++)
								{
												for (j = 0; j < i; j++)
												{
																if (score[i] > score[j])
																{
																				temp = score[i];
																				score[i] = score[j];
																				score[j] = temp;

																				tempn = name[i];
																				name[i] = name[j];
																				name[j] = tempn;
																}
												}
								}
								for (i = 0; i < 3; i++)
								{
												cout << name[i] << endl;
												cout << score[i] << endl;
								}
				}
				//cout << "File Close" << endl;
				f.close();
}