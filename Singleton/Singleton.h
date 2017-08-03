#pragma once
class Singleton
{
public:
	
	~Singleton();
	static Singleton* GetInstance();

protected:
	Singleton();

private:
	static Singleton * _singleton;
};

