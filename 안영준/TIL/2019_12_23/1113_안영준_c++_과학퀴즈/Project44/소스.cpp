#include <iostream>

#include <time.h>

#include <iomanip>

#include <fstream>

#include <string>

#include <Windows.h>

using namespace std;



int score = 0; //����

int cnt = 0; //Ƚ��

void AnswerTrue(); //������ ��

void AnswerFail(); //������ ��

void print();



void main() {

	char name[20]; //�̸�

	char answer[25]; //��

	string group; //�з�

	string ques; //����

	char ans[500]; //��

	char choose[20]; //���� ����





	ifstream inFile("QUIZ.txt", ios::in); //���� ����. �Է�����



	print();



	cout << "\t\t������ �����Ͻðڽ��ϱ�?(Y || y) : ";

	cin >> choose;

	if (!strcmp("Y", choose) || !strcmp("y", choose)) {



		system("cls");

		print();



		ofstream fout("info.txt");

		cout << "\t\t������� �̸��� �Է����ּ��� : ";

		cin >> name;



		fout << name;

		fout.close();



		while (inFile >> group >> ques >> ans) { //����

			Sleep(1500);     // 3�ʰ� ��� 

			system("cls");

			print();

			cout << "\t\t" << group << endl;

			cout << "\t\t" << ques << endl;

			cout << "\t\t�� : ";



			cin >> answer;



			if (!strcmp(ans, answer)) {

				AnswerTrue();

			}

			else {

				AnswerFail();

				cout << "\t\t" << "���� : " << ans << endl;

			}

			Sleep(1500);     // 3�ʰ� ��� 

			system("cls");

			printf("\n\n\n");

			printf("\t--------------------------------------------------------------\n");



			cout << "\t���� �׸��ҷ���(stop) or ���� ����ҷ���(�ƹ�Ű�� �Է�) : ";

			cin >> choose;

			if (!strcmp("stop", choose) || !strcmp("STOP", choose)) {

				Sleep(1500);

				system("cls");

				ifstream infoRea("info.txt", ios::in);

				while (infoRea >> name) {

					printf("\n\n\n");

					cout << "\t\t----------���� �˸�----------\t" << endl;

					cout << "\t\t" << "  �̸� : " << name << "\t ���� : " << score << "��" << endl;

				}

				infoRea.close();



				Sleep(1500);

				return;

			}

		}

	}

	else

		return;

}



void print() {

	printf("\n\n\n");

	printf("\t\t-------------------------------------\n");



}



void AnswerTrue() {

	cout << endl;

	system("cls");

	print();

	cout << "\t\t" << "�����Դϴ�." << endl;

	cnt++;

	score++;

	cout << "\t\t" << "---" << endl;

	cout << "\t\t" << cnt << "ȸ" << endl;

	cout << "\t\t" << "---" << endl;

	cout << "\t\t" << " O" << endl;

	cout << "\t\t" << "---" << endl;

	cout << "\t\t" << "���� ���� : " << score << "��" << endl;

	printf("\t\t-----------------------------------\n");

}



void AnswerFail() {

	cout << endl;

	system("cls");

	print();

	cout << "\t\t" << "�ƽ��� Ʋ�Ƚ��ϴ٤Ф�" << endl;

	score--;

	cnt++;

	cout << "\t\t" << "---" << endl;

	cout << "\t\t" << cnt << "ȸ" << endl;

	cout << "\t\t" << "---" << endl;

	cout << "\t\t" << " X" << endl;

	cout << "\t\t" << "---" << endl;

	score++;

	cout << "\t\t" << "���� ���� : " << score << "��" << endl;

	printf("\t\t-----------------------------------\n");

}



