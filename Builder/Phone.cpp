#include "stdafx.h"
#include "Phone.h"


Phone::Phone()
{
	base_config_ = "base config";

	printf("Phone construct!\n");
}


Phone::~Phone()
{
	printf("Phone destruct!\n");

}

void Phone::AssembleProcessor(string processor)
{
	processor_ = processor;
}

void Phone::AssembleMemory(string memory)
{
	memory_ = memory;
}

void Phone::AssemblePanel(string panel)
{
	panel_ = panel;
}

void Phone::ShowConfig()
{
	printf("ShowConfig:\n");
	printf("%s\n", base_config_.c_str());
	printf("%s\n", processor_.c_str());
	printf("%s\n", panel_.c_str());
	printf("%s\n", memory_.c_str());
}
