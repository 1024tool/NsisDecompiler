#pragma once
#include <string>
#include <vector>

//	������� ��� ������� ���������� ����������
class CGlobalVars
{
public:
	CGlobalVars(void);
	~CGlobalVars(void);

	void SetVarCount(int i = 0);

	//	������� ��� ���������� �� ��� �����.
	std::string GetVarName(int id);
	
	//	 ������� �������� ���������� �� 
	std::string GetVarValue(int id);
	
	void SetVarValue(int id,std::string var);


	//	
	std::vector<std::string> _values;
	//	������������ ���-�� ����������
	int	_max_var_count;
};

