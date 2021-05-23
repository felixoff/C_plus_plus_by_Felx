#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include<iostream>

class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        virtual ~Bureaucrat();
        Bureaucrat &operator =(const Bureaucrat &other);
        std::string const getName() const;
        int getGrade() const;
        void gradeInc();
        void gradeDesc();
        void signForm(Form &form) const;
        class GradeTooHighException:public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException:public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator <<(std::ostream &output, Bureaucrat const &other);

#endif