#include "replace.hpp"

/*void	my_replace(std::string& name, std::string& s1, std::string& s2)
{
	std::ifstream ifs(name);
	std::ofstream ofs("FILENAME.replace");
	std::string context;
	std::filebuf* inbuf;
	std::stringstream str;
	int	pos = 0;
	std::string tmp;

	if (!ifs.is_open())
	{
		std::cout << "Can\'t open file\n";
		return ;
	}
	inbuf = ifs.rdbuf();
	str << ifs.rdbuf();
	context = str.str();
	pos = context.find(s1);
	while (pos != -1)
	{
		tmp = context.substr(0, pos);
		ofs << tmp;
		ofs << s2;
		context = context.substr(pos + s1.size());
		pos = context.find(s1);
	}
	ofs << context;
}*/

int main(int argc, char **argv)
{
	std::string fname;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cout << "Wrong number of args\n";
		return (-1);
	}
	fname = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (fname.empty() || s1.empty() || s2.empty())
	{
		std::cout << "filename or strs is empty\n";
		return (-1);
	}
	my_replace(fname, s1, s2);
	return (0);
}