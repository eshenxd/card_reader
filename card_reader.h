/*
    �������ƣ�card_Reader
	���빦�ܣ�������ɻ��������֤�������˿ڶ�ռ
	          ǰ���¼��ˢ������
	�������ߣ�Ethan
	����ʱ�䣺2015-09-17
	�޸ļ�¼��
*/
#ifndef _CARD_READER_H_
#define _CARD_READER_H_

#include <string>
#include <vector>
class Card{
public:
	Card(std::string _cardPath);

	bool get_run_card();
	void set_run_card();

private:
	bool Is_run;
	std::string cardPath;
	std::vector<std::string>filePath;

	void Is_run_card();
};
#endif