#pragma once

//#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		void	setIdeas( const std::string& idea, unsigned int i );
		const	std::string&	getIdeas( unsigned int i ) const;
		Brain();
		~Brain();
		Brain( const Brain& other );
		Brain&	operator=( const Brain& other );
};