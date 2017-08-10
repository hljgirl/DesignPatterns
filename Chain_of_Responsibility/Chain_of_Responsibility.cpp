// Chain_of_Responsibility.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "CaptainHandler.h"
#include "ChiefHandler.h"
#include "ColoneHandler.h"

int main()
{
	Girl *xiaoA = new Girl("xiaoA", 'A');
	Girl *xiaoB = new Girl("xiaoB", 'B');
	Girl *xiaoC = new Girl("xiaoC", 'C');
	Girl *xiaoD = new Girl("xiaoD", 'D');


	Handler* captain_handler = new CaptainHandler("captain_tom");
	Handler* colonel_handler = new ColoneHandler("colone_jack");
	Handler* chief_handler = new ChiefHandler("chief_jone");

	captain_handler->SetHandler(colonel_handler);
	colonel_handler->SetHandler(chief_handler);

	captain_handler->Accept(xiaoA);
	captain_handler->Accept(xiaoB);
	captain_handler->Accept(xiaoC);
	captain_handler->Accept(xiaoD);


	delete xiaoA;
	delete xiaoB;
	delete xiaoC;
	delete xiaoD;
	delete captain_handler;
	delete colonel_handler;
	delete chief_handler;


	getchar();
    return 0;
}

