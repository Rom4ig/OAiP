#include "stdafx.h"
#include <iostream>
#include <memory>
const int MagicNubmer = 12;
std::shared_ptr<char> getln()
{
	char *line = nullptr, *tmp = nullptr;

	size_t size = 0, index = 0;
	int ch = EOF;
	while (ch)
	{
		ch = getc(stdin);
		if (ch == EOF || ch == '\n')
			ch = 0;
		if (size <= index)
		{
			size += MagicNubmer;
			tmp = (char*)realloc(line, size);
			if (!tmp)
			{
				free(line);
				line = NULL;
				break;

			}
			line = tmp;
		}
		line[index++] = ch;
	}
	return std::shared_ptr<char>(line, free);
}
int main()
{
	auto ln1 = getln();
	auto ln2 = getln();
	char* c = ln1.get();
	std::cout << ln1 << std::endl << ln2 << std::endl;
	return 0;
}