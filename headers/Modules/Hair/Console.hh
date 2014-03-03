//
// Console.hh for Epil in /home/lucas/Documents/Epitech/Tech3/PFA/epil-ation
// 
// Made by Lucas Merlette
// Login   <lucas@epitech.net>
// 
// Started on  Mon Mar  3 10:40:55 2014 Lucas Merlette
// Last update Mon Mar  3 11:43:19 2014 Lucas Merlette
//

#ifndef	EPIL_MODULES_HAIR_CONSOLE_HH_
# define EPIL_MODULES_HAIR_CONSOLE_HH_

# include <iostream>

namespace epil
{
  namespace hair
  {
    class Console
    {
    public:
      Console();
      ~Console();

      template <typename T>
      static inline void log(T v_type)
      {
        std::cout << v_type << std::endl;
      }

      template <typename T>
      static inline void log(std::ostream &is, T v_type)
      {
        is << v_type << std::endl;
      }
    private:
    };
  };
};

#endif /* !EPIL_MODULES_HAIR_CONSOLE_HH_ */
