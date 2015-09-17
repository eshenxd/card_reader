/*
    代码名称：card_Reader
	代码功能：解决网吧环境下身份证读卡器端口独占
	          前提下检测刷卡动作
	代码作者：Ethan
	创建时间：2015-09-17
	修改记录：
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