#pragma once
#include <string>
//	������� ��� ������� ���������� ����������
class CGlobalVars
{
public:
	CGlobalVars(void);
	~CGlobalVars(void);

	void SetVarCount(int i = 0);

	//	������� ��� ���������� �� ��� �����.
	std::string GetVarName(int id);
	//	������������ ���-�� ����������
	int	_max_var_count;
};

