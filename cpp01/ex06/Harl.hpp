#ifndef HARL_HPP
# define HARL_HPP

# define GREEN "\033[38;5;46m"
# define WHITE "\033[1;37m"
# define BLUE "\033[1;36m"
# define YELLOW "\033[1;33m"
# define RED "\033[1;31m"
# define PURPLE "\033[1;35m"
# define RESET "\033[m"

# include <iostream>
# include <string>


class Harl
{

	public:

		Harl(std::string level);
		Harl( Harl const & src );
		~Harl();

		void		complain(std::string level);

	private:
		void		_debug();
		void		_info();
		void		_warning();
		void		_error();
		void		_invalid();
		std::string	_level;
};

typedef void	(Harl::*complainFuncs)();

enum COMPLAINS {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

#endif /* ************************************************************ HARL_H */