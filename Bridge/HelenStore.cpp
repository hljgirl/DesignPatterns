#include "stdafx.h"
#include "HelenStore.h"


HelenStore::HelenStore(Shoe* shoe):Store(shoe)
{

}


HelenStore::~HelenStore()
{
}

void HelenStore::Selling()
{
	_shoe->Sale();
}
