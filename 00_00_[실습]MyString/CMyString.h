#pragma once

class CMyString
{
public:
	// 생성자
	CMyString();
	// 소멸자
	~CMyString();

	const char* getData() const
	{
		return m_pszData;
	}
	void setData(const char* pParam);
	size_t getLength() const;
private:
	char* m_pszData = nullptr;
	size_t length = 0;
};