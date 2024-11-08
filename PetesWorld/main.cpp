// program to find countries in Pete's World
// date November 2022
// author Pete Lowe / Ceanford Samsin / Padraig o'Reilly
// add your name here
//  or here
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	


	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia & Herzegovina" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bahrain, Bangladesh, Bhutan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no B's in the Rest of the World" << std::endl;
		}
	}

	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Cuba, Canada, Cayman Islands, Chile, Colombia" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Cyprus, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Congo republic of, Democratic Republic of the Congo, Cote D'ivoire,  " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cook Islands" << std::endl;
		}
	}

	if (letter == 'd' || letter == 'D')
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no D's in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no D's in the Rest of the World" << std::endl;
		}
	}

	if (letter == 'e' || letter == 'E')
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritrea, Ethiopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no E's in the Rest of the World" << std::endl;
		}
	}

	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in the Rest of the World" << std::endl;
		}
	}

	if (letter == 'y' || letter == 'Y') // written by Ceanford
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in rest of the world" << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X') // written by Ceanford
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in America" << std::endl; // default negatitive response
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in rest of the world" << std::endl;
		}

	}
	if (letter == 'w' || letter == 'W') // written by Ceanford
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl; // defeault negatitve
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') // written by Ceanford
	{
		if (region == 1)
		{
			std::cout << "Venezuela" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British), Virgin Islands (U.S.)" << std::endl;
		}
	}
	
	
	
	return 1;
}