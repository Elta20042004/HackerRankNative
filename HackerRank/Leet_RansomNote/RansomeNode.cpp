//
////unordered_map used hash table
//
//#include "stdafx.h"
//#include <algorithm>
//#include <unordered_map>
//
//class RansomeNode {
//public:
//	bool canConstruct(const std::string& ransomNote, const std::string& magazine) const {
//
//		std::unordered_map<char,int> myMap;
//		for (std::string::const_iterator it=magazine.begin(); it<magazine.end(); ++it)
//		{
//			std::unordered_map<char,int>::iterator itMap = myMap.find(*it);
//			if (itMap==myMap.end())
//			{
//				myMap.insert ( std::pair<char,int>(*it,1) );	
//			}
//			else
//			{
//				itMap->second++;
//			}			 
//		}
//		
//		for (std::string::const_iterator it=ransomNote.begin(); it<ransomNote.end(); ++it)
//		{
//			std::unordered_map<char,int>::iterator itMap = myMap.find(*it);
//			if (itMap!=myMap.end())
//			{
//				myMap.find(*it)->second--;
//			}
//		
//			if (itMap==myMap.end() || itMap->second<0 )
//			{
//				return false;
//			}
//		}
//	
//		return true;
//	}
//};
//
////ARRAY
//
//#include "stdafx.h"
//#include <algorithm>
//#include <array>
//
//class RansomeNode {
//public:
//	bool canConstruct(const std::string& ransomNote, const std::string& magazine) const {
//		std::array<int, 100> myArray = {0};
//
//		if (ransomNote.length()==0 && magazine.length()==0)
//		{
//			return true;
//		}
//		else if (ransomNote.length()==0
//			|| magazine.length()==0
//			|| ransomNote.length()>magazine.length())
//		{
//			return false;
//		}
//
//		std::string::const_iterator it=magazine.begin();
//
//		while (it<magazine.end())
//		{
//			if (myArray[*it-'A']==0)
//			{
//				myArray[*it-'A']=1;
//			}
//			else
//			{
//				myArray[*it-'A']++;
//			}		
//			++it;
//		}
//
//		for (std::string::const_iterator it=ransomNote.begin(); it<ransomNote.end(); ++it)
//		{
//
//			myArray[*it-'A']--;
//
//			if ( myArray[*it-'A']<0)
//			{		
//				return false;	
//			}
//
//		}
//		return true;
//	}
//};
//
//
//// in old c++ i don't put element by index in vector
#include "stdafx.h"
#include <algorithm>
#include <vector>


class RansomeNode {
public:
	bool canConstruct(const std::string& ransomNote, const std::string& magazine) const {

		std::vector<int> myVector;

		for (std::string::const_iterator it=magazine.begin(); it<magazine.end(); ++it)
		{
			int i = *it-'A';
			//c11
			myVector.insert(myVector.begin() + i, 1);
		}
		return true;
	}
};
//
//
//
// // MAP used red-black tree
//
//#include "stdafx.h"
//#include <algorithm>
//#include <map>
//
//class RansomeNode {
//public:
//	bool canConstruct(const std::string& ransomNote, const std::string& magazine) const {
//
//		if (ransomNote.length()==0)
//		{
//			return true;
//		}
//		else if (magazine.length()==0)
//		{
//			return false;
//		}
//				
//		std::map<char,int> myMap;
//
//		for (std::string::const_iterator it=magazine.begin(); it<magazine.end(); ++it)
//		{
//			std::map<char,int>::iterator itMap = myMap.find(*it);
//			if (itMap==myMap.end())
//			{
//				myMap.insert ( std::pair<char,int>(*it,1) );	
//			}
//			else
//			{
//				itMap->second++;
//			}			 
//		}
//
//		for (std::string::const_iterator it=ransomNote.begin(); it<ransomNote.end(); ++it)
//		{
//			std::map<char,int>::iterator itMap = myMap.find(*it);
//			if (itMap!=myMap.end())
//			{
//				myMap.find(*it)->second--;
//			}
//
//			if (itMap==myMap.end() || itMap->second<0 )
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//
