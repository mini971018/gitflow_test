#pragma once

// Ό³Έν :
class abc
{
public:
	// constrcuter destructer
	abc();
	~abc();

	// delete Function
	abc(const abc& _Other) = delete;
	abc(abc&& _Other) noexcept = delete;
	abc& operator=(const abc& _Other) = delete;
	abc& operator=(abc&& _Other) noexcept = delete;

protected:

private:
	void abctest();
	void ctest();
};

