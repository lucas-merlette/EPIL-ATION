//
// Profile.cpp for Epil in /home/lucas/Documents/Epitech/Tech3/PFA/epil-ation/sources/UI
// 
// Made by Lucas Merlette
// Login   <lucas@epitech.net>
// 
// Started on  Mon Feb 24 23:40:15 2014 Lucas Merlette
// Last update Mon Feb 24 23:54:21 2014 Lucas Merlette
//

#include  "Profile.hh"

using namespace	epil;

Profile::Profile()
{
}

Profile::Profile(std::string const &id)
  : _id(id)
{
}

void  Profile::setId(std::string const &id)
{
  this->_id = id;
}

// void  Profile::setAction(AType actionType)
// {
//   this->_actionList.push_back(new Action(actionType))
// }

std::string const   &Profile::getId()
{
  if (!this->_id.empty())
    return (this->_id);
  throw new std::exception();
}

// std::list<Action*>  &Profile::getActionList()
// {
//   if (this->_actionList)
//     return (this->_actionList);
//   throw new std::exception();
// }

bool	Profile::isComplete()
{
  return (!this->_id.empty() ? true : false);
}

Profile::~Profile()
{
  std::cout << "===================" << std::endl;
  std::cout << "In Profile Dtor" << std::endl;
  this->_id.clear();
  // for (std::list<Action*>::iterator it = this->_actionList.begin();
  //   it != this->_actionList.end(); ++it)
  //   delete it;
  std::cout << "Profile successfully cleared" << std::endl;
  std::cout << "===================" << std::endl;
}