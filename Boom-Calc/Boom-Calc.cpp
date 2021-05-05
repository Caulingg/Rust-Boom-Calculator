#include <iostream>
#include <algorithm>

int main()
{   
    int keypressed;
    std::cout << "Choose What you want to do :" << std::endl;
    std::cout << "[1] Calculate Explosives" << std::endl;
    std::cout << "[2] Calculate Rockets" << std::endl;
    std::cout << "[3] Calculate C4" << std::endl;
	std::cout << "[4] Calculate Gunpowder" << std::endl;
	std::cout << "[5]" << std::endl;
	std::cout << "[5]Exit" << std::endl;
    std::cin >> keypressed;
	
	system("cls");

	if (keypressed > 4)
	{
		std::cout << "You have selected an invalid option!" << std::endl;
	}
    if (keypressed == 1)
    {
		int sulfur;
		int lg;
		int gp;
		int frags;
		std::cout << "Enter the amount of Sulfur then the amount of low grade you have: " << std::endl;
		std::cin >> sulfur >> lg;
		std::cout << "Enter the ammount of gun powder and metal frags you have: " << std::endl;
		std::cin >> gp >> frags;
		if (lg < 60)
		{
			std::cout << "You must have more than 60 low grade to craft explosives!" << std::endl;
		}
		if (sulfur < 200)
		{
			std::cout << "You must have sulfur to craft explosives!" << std::endl;
		}
		if (gp < 50)
		{
			std::cout << "you dont have enough gun powder for a single explosive!" << std::endl;

		}
		if (frags < 10)
		{
			std::cout << "you dont have enough metal frags for a single explosive!" << std::endl;
		}
		int exp_per_sulf = sulfur / 10;
		int exp_per_lg = lg / 3;
		int exp_per_gp = gp / 50;
		int exp_per_frags = frags / 10;
		std::cout << "The amount of explosives you can make with your current resources:" << std::min({ exp_per_sulf,exp_per_lg,exp_per_gp,exp_per_frags }) << std::endl;
		std::cin.get();

	}
	if (keypressed == 2)
	{
		int explosives;
		int pipes;
		int gunp;
		std::cout << "Enter your amount of explosives, pipes, and gun powder: " << std::endl;
		std::cin >> explosives >> pipes >> gunp;
		if (explosives < 10)
		{
			std::cout << "You dont have enough explosives for 1 rocket!" << std::endl;
		}
		if (pipes < 2)
		{
			std::cout << "You do not have enough pipes for 1 rocket!" << std::endl;
		}
		if (gunp < 150)
		{
			std::cout << "You do not have enough gun powder for 1 rocket! " << std::endl;
		}
		int rock_per_exp = explosives / 10;
		int rock_per_pipes = pipes / 2;
		int rock_per_gp = gunp / 150;
		std::cout << "You can currently craft this many rockets: " << std::min({rock_per_exp,rock_per_pipes,rock_per_gp}) << std::endl;
		std::cin.get();
		
	}
	if (keypressed == 3)
	{
		int explo;
		int tech;
		int cloth;
		std::cout << "Enter your ammount of explosives, tech trash, and cloth: " << std::endl;
		std::cin >> explo >> tech >> cloth;
		if (explo < 20)
		{
			std::cout << "You dont have enough explosives for 1 C4!" << std::endl;
		}
		if (tech < 2)
		{
			std::cout << "You dont have enough tech trash for 1 C4! " << std::endl;
		}
		if (cloth < 5)
		{
			std::cout << "You dont have enough cloth for 1 C4!" << std::endl;
		}
		int c4_per_exp = explo / 20;
		int c4_per_tech = tech / 2;
		int c4_per_cloth = cloth / 5;
		std::cout << "You can craft this much C4 with your resources: " << std::min({ c4_per_exp,c4_per_tech,c4_per_cloth }) << std::endl;
		std::cin.get();
	}
	if (keypressed == 4)
	{
		int sulfur;
		int charcoal;
		std::cout << "Enter your ammount of sulfur then charcoal: " << std::endl;
		std::cin >> sulfur >> charcoal;
		if (sulfur < 20)
		{
			std::cout << "You dont have enough sulfur for 10 gun powder! " << std::endl;
		}
		if (charcoal < 30)
		{
			std::cout << "You dont have enough charcoal for 10 gun powder! " << std::endl;
		}
		int sulf_per_gp = sulfur / 20;
		int charc_per_gp = charcoal / 30;
		std::cout << "This is the amount of gun powder you can craft with your resources: " << std::min({ sulf_per_gp,charc_per_gp }) << std::endl;
		std::cin.get();
	
	}
	if (keypressed == 5)
	{
		exit;
	}
	std::cout << "Press Any Key to exit!\n";
	std::cin.get();

}




