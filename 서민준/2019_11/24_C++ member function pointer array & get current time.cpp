// Visual Studio 2019���� �ۼ��� �ڵ��Դϴ�.

#include <iostream>
#include <chrono>
#include <ctime>

// ������ �����ϱ� ���� ����� ������ enum
enum { SUNDAY, MONDAY, TUSEDAY, WEDNESDAY, THRUSDAY, FRIDAY, SATURDAY };

class CTimer
{
private:
	int month; // ��
	int day; // ��
	int week; // ����
	
	void (CTimer::* funcPtr[3])() const; // �Լ� ������ �迭

	void WhatTimeIsItNow() const; // ���� �ð� ǥ��
	void WhatDayOfWeekYesterday() const;
	void WhatDayOfWeekFiveDaysAfter() const;

	void PrintDayOfWeek(int day) const; // ���ڷ� ���޵� ���Ͽ� �ش��ϴ� ���ڿ� ���

public:
	CTimer();
	void run() const;
};

CTimer::CTimer()
	: month(11), day(24), week(SUNDAY)
{
	funcPtr[0] = &CTimer::WhatTimeIsItNow;
	funcPtr[1] = &CTimer::WhatDayOfWeekYesterday;
	funcPtr[2] = &CTimer::WhatDayOfWeekFiveDaysAfter;

	std::cout << "������ " << month << "�� " << day << "���Դϴ�." << std::endl << std::endl;
}

void CTimer::WhatTimeIsItNow() const
{
	auto nowTime = std::chrono::system_clock::now(); // ���� �ð� ������ �޴´�.
	time_t time = std::chrono::system_clock::to_time_t(nowTime); // auto �ڷ����� time_t�� �������ش�.

	struct tm* clock; // ���� �ð� ����� ���ϰ� �����ϱ� ���� ����
	clock = localtime(&time);

	std::cout << "���� �ð� : " << clock->tm_hour << "�� " << clock->tm_min << "�� " << clock->tm_sec << "��" << std::endl;
}

void CTimer::WhatDayOfWeekYesterday() const
{
	std::cout << "������ ";

	if (week != SUNDAY)
		PrintDayOfWeek(week - 1);
	else
		PrintDayOfWeek(week);

	std::cout << "�̾����ϴ�." << std::endl;
}

void CTimer::WhatDayOfWeekFiveDaysAfter() const
{
	std::cout << "5�� �Ĵ� ";
	PrintDayOfWeek((week + 5) % 7);
	std::cout << "�Դϴ�.";
}

void CTimer::PrintDayOfWeek(int day) const
{
	if (day == SUNDAY)
		std::cout << "�Ͽ���";
	else if (day == MONDAY)
		std::cout << "������";
	else if (day == TUSEDAY)
		std::cout << "ȭ����";
	else if (day == WEDNESDAY)
		std::cout << "������";
	else if (day == THRUSDAY)
		std::cout << "�����";
	else if (day == FRIDAY)
		std::cout << "�ݿ���";
	else
		std::cout << "�����";
}

void CTimer::run() const
{
	int option;

	std::cout << "======= ���� ��� �� �ϳ��� �������ּ���. =======" << std::endl;
	std::cout << "1. ���� �ð���?" << std::endl;
	std::cout << "2. ���� ������?" << std::endl;
	std::cout << "3. 5�� �� ������?" << std::endl;

	if (option == TIME)
		(this->*funcPtr[0])();
	else if (option == YESTERDAY)
		(this->*funcPtr[1])();
	else
		(this->*funcPtr[2])();
}

int main()
{
	CTimer time_obj;

	time_obj.run();

	return 1;
}