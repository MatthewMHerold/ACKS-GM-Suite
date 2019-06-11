#include <iostream>

#include "CharacterGenerator.h"

void newCharacter(void)
{
	int characterChoice = 0;
	bool exitChargen = 0;

	while (exitChargen != 1)
	{
		std::cout << "Character Menu\n";


		std::cout << "\nPlease select an option for character creation from below:\n\n";
		std::cout << "1. Completely random character\n";
		std::cout << "2. Human\n";
		std::cout << "3. Elf\n";
		std::cout << "4. Dwarf\n";
		std::cout << "5. Nobiran\n";
		std::cout << "6. Halfling\n";
		std::cout << "7. Thrassian\n";
		std::cout << "8. Zaharan\n";
		std::cout << "9. Go back\n\n";

		std::cin >> characterChoice;

		if (characterChoice == 1)
		{
			fullRandomCharacter();
		}

		else if (characterChoice == 2)
		{
			humanClass();
		}

		else if (characterChoice == 3)
		{
			elfClass();
		}

		else if (characterChoice == 4)
		{
			dwarfClass();
		}

		else if (characterChoice == 5)
		{
			nobiranClass();
		}

		else if (characterChoice == 6)
		{
			halflingClass();
		}

		else if (characterChoice == 7)
		{
			thrassianClass();
		}

		else if (characterChoice == 8)
		{
			zaharanClass();
		}

		else
		{
			exitChargen = 1;
		}
	}
}

void fullRandomCharacter(void)
{
	int pickClass = rand() % 31;

	switch (pickClass)
	{
	case 0: //anti-paladin class
		antiPaladin();
		break;

	case 1: //assassin class
		assassin();
		break;

	case 2: //barbarian
		barbarian();
		break;

	case 3: //bard
		bard();
		break;

	case 4: //bladedancer
		bladedancer();
		break;

	case 5: //cleric
		cleric();
		break;

	case 6: //explorer
		explorer();
		break;

	case 7: //fighter
		fighter();
		break;

	case 8: //mage
		mage();
		break;

	case 9: //mystic
		mystic();
		break;

	case 10: //paladin
		paladin();
		break;

	case 11: //priestess
		priestess();
		break;

	case 12: //shaman
		shaman();
		break;

	case 13: //thief
		thief();
		break;

	case 14: //venturer
		venturer();
		break;

	case 15: //warlock
		warlock();
		break;

	case 16: //witch
		witch();
		break;

	case 17: //dwarven craftpriest
		dwarvenCraftpriest();
		break;

	case 18: //dwarven delver
		dwarvenDelver();
		break;

	case 19: //dwarven fury
		dwarvenFury();
		break;

	case 20: //dwarven machinist
		dwarvenMachinist();
		break;

	case 21: //dwarven vaultguard
		dwarvenVaultguard();
		break;

	case 22: //elven courtier
		elvenCourtier();
		break;

	case 23: //elven enchanter
		elvenEnchanter();
		break;

	case 24: //elven nightblade
		elvenNightblade();
		break;

	case 25: //elven ranger
		elvenRanger();
		break;

	case 26: //elven spellsword
		elvenSpellsword();
		break;

	case 27: //zaharan ruinguard
		zaharanRuinguard();
		break;

	case 28: //thrassian gladiator
		thrassianGladiator();
		break;

	case 29: //nobiran wonderworker
		nobiranWonderworker();
		break;

	case 30: //gnomish trickster
		gnomishTrickster();
		break;
	}
}

bool primeRequisite(int stat)
{
	if (stat < 9)
	{
		return false;
	}

	else
	{
		return true;
	}
}

bool wwRequirement(int stat) //wonderworker requirement check
{
	if (stat < 11)
	{
		return false;
	}

	else
	{
		return true;
	}
}

void humanClass(void)
{
	int characterChoice;

	std::cout << "1. Anti-Paladin\n";
	std::cout << "2. Assassin\n";
	std::cout << "3. Barbarian\n";
	std::cout << "4. Bard\n";
	std::cout << "5. Bladedancer\n";
	std::cout << "6. Cleric\n";
	std::cout << "7. Explorer\n";
	std::cout << "8. Fighter\n";
	std::cout << "9. Mage\n";
	std::cout << "10. Mystic\n";
	std::cout << "11. Paladin\n";
	std::cout << "12. Priestess\n";
	std::cout << "13. Shaman\n";
	std::cout << "14. Thief";
	std::cout << "15. Venturer\n";
	std::cout << "16. Warlock\n";
	std::cout << "17. Witch\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		antiPaladin();
	}

	else if (characterChoice == 2)
	{
		assassin();
	}

	else if (characterChoice == 3)
	{
		barbarian();
	}

	else if (characterChoice == 4)
	{
		bard();
	}

	else if (characterChoice == 5)
	{
		bladedancer();
	}

	else if (characterChoice == 6)
	{
		cleric();
	}

	else if (characterChoice == 7)
	{
		explorer();
	}

	else if (characterChoice == 8)
	{
		fighter();
	}

	else if (characterChoice == 9)
	{
		mage();
	}

	else if (characterChoice == 10)
	{
		mystic();
	}

	else if (characterChoice == 11)
	{
		paladin();
	}

	else if (characterChoice == 12)
	{
		priestess();
	}

	else if (characterChoice == 13)
	{
		shaman();
	}

	else if (characterChoice == 14)
	{
		thief();
	}

	else if (characterChoice == 15)
	{
		venturer();
	}

	else if (characterChoice == 16)
	{
		warlock();
	}

	else if (characterChoice == 17)
	{
		witch();
	}
}

void elfClass(void)
{
	int characterChoice;

	std::cout << "1. Elven Courtier\n";
	std::cout << "2. Elven Enchanter\n";
	std::cout << "3. Elven Nightblade\n";
	std::cout << "4. Elven Ranger\n";
	std::cout << "5. Elven Spellsword\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		elvenCourtier();
	}

	else if (characterChoice == 2)
	{
		elvenEnchanter();
	}

	else if (characterChoice == 3)
	{
		elvenNightblade();
	}

	else if (characterChoice == 4)
	{
		elvenRanger();
	}

	else if (characterChoice == 5)
	{
		elvenSpellsword();
	}
}

void dwarfClass(void)
{
	int characterChoice;

	std::cout << "1. Dwarven Craftpriest\n";
	std::cout << "2. Dwarven Delver\n";
	std::cout << "3. Dwarven Fury\n";
	std::cout << "4. Dwarven Machinist\n";
	std::cout << "5. Dwarven Vaultguard\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		dwarvenCraftpriest();
	}

	else if (characterChoice == 2)
	{
		dwarvenDelver();
	}

	else if (characterChoice == 3)
	{
		dwarvenFury();
	}

	else if (characterChoice == 4)
	{
		dwarvenMachinist();
	}

	else if (characterChoice == 5)
	{
		dwarvenVaultguard();
	}
}

void halflingClass(void)
{
	int characterChoice = 0;

	std::cout << "1. Halflings are not available at this time.\n";
	newCharacter();

	/*	std::cin >> characterChoice;

/*		if (characterChoice == 1)
		{

		}
		else
		{

		}*/
}

void nobiranClass(void)
{
	int characterChoice;

	std::cout << "1. Nobiran Wonderworker\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		nobiranWonderworker();
	}
	else
	{
		std::cout << "Only Nobiran Wonderworker is available at this time.\n\n";
		newCharacter();
	}
}

void thrassianClass(void)
{
	int characterChoice;

	std::cout << "1. Thrassian Gladiator\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		thrassianGladiator();
	}

	else
	{
		std::cout << "Only Thrassian Gladiator is available at this time.\n\n";
		newCharacter();
	}
}

void zaharanClass(void)
{
	int characterChoice;

	std::cout << "1. Zaharan Ruinguard\n";

	std::cin >> characterChoice;

	if (characterChoice == 1)
	{
		zaharanRuinguard();
	}
	else
	{
		std::cout << "Only the Zaharan Ruinguard is available at this time.\n\n";
		newCharacter();
	}
}

int rollStats(void)
{
	int stat = 0, i;

	for (i = 0; i < 3; i++)
	{
		stat += rand() % 6 + 1;
	}

	return(stat);
}

int modifier(int stat)
{
	if (stat == 3)
	{
		return -3;
	}

	else if (stat == 4 || stat == 5)
	{
		return -2;
	}

	else if (stat >= 6 && stat <= 8)
	{
		return -1;
	}

	else if (stat >= 9 && stat <= 12)
	{
		return 0;
	}

	else if (stat >= 13 && stat <= 15)
	{
		return 1;
	}

	else if (stat == 16 || stat == 17)
	{
		return 2;
	}

	else
	{
		return 3;
	}
}

void antiPaladin(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(charisma);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Anti-Paladin\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Desecrator \n";
		std::cout << "Proficiencies - Dungeon Bashing, Knowledge (Occult)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Gnawed wooden unholy symbol (mouth surrounded by eyes of Kaleth)\n";
		std::cout << "Befouled scourge [whip]\n";
		std::cout << "Balland chain[flail]\n";
		std::cout << "Filthy wool tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "Small tattered sacks\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Tormentor \n";
		std::cout << "Proficiencies - Combat Trickery (incapacitate), Profession (torturer)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Blackened wavy dagger (consecrated as an unholy symbol of Raviled)\n";
		std::cout << "Jagged battle axe\n";
		std::cout << "Scourge[whip]\n";
		std::cout << "Black hide armor with antlered leather cap\n";
		std::cout << "Ill-kept wool tunic and pants";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "6gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Deceiver \n";
		std::cout << "Proficiencies - Ambushing, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (horned rat of Galmorm)\n";
		std::cout << "Trio of well - concealed daggers\n";
		std::cout << "Fine leather armor\n";
		std::cout << "Dark hooded cloak\n";
		std::cout << "Black armiger's tunic and pants\n";
		std::cout << "leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 week's iron rations\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Corrupter \n";
		std::cout << "Proficiencies - Mystic Aura, Seduction\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (medusa's head of Nasga)\n";
		std::cout << "Slender scimitar [short sword]\n";
		std::cout << "Copper - barbed scourge [whip]\n";
		std::cout << "Form - fitting black leather armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Embroidered hooded cloak\n";
		std::cout << "Hand-sized steel mirror\n";
		std::cout << "Velvet-lined pouch\n";
		std::cout << "Bottle (4 pints) of fine wine\n";
		std::cout << "1 weeks' iron rations, 7gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Slayer \n";
		std::cout << "Proficiencies - Berserkergang, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (black guantlet with six arrows of Bel)\n";
		std::cout << "Barbed morning star\n";
		std::cout << "Serrated two-handed sword\n";
		std::cout << "Fire-blackened banded plate armor\n";
		std::cout << "Blood-stained wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations, 12gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Enforcer \n";
		std::cout << "Proficiencies - Alertness, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (silver draconic eye of Iskra)\n";
		std::cout << "Black-shafted spear\n";
		std::cout << "Blackened sword\n";
		std::cout << "Black steel shield bearing draconic eye symbol\n";
		std::cout << "Black lamellar armor\n";
		std::cout << "Black hooded cloak\n";
		std::cout << "Black guard's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Gloves\n";
		std::cout << "Backpack\n";
		std::cout << "2 large sacks\n";
		std::cout << "Crowbar\n";
		std::cout << "Tinderbox\n";
		std::cout << "Flask of military oil\n";
		std::cout << "12 torches\n";
		std::cout << "50' rope\n";
		std::cout << "Waterskin\n";
		std::cout << "2 manacles\n";
		std::cout << "2 weeks' iron rations, 13gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Doombringer \n";
		std::cout << "Proficiencies - Kin-Slaying, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (skull on black circle of Dirgion)\n";
		std::cout << "Wickedly-curved scythe\n";
		std::cout << "Barbed flail\n";
		std::cout << "Black banded plate armor\n";
		std::cout << "Black steel shield with skull symbol\n";
		std::cout << "Red hooded leather cloak\n";
		std::cout << "Red armiger's tunic and pants\n";
		std::cout << "High black boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of unholy water, 3gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Oppressor \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (all-devouring worm of chaos)\n";
		std::cout << "Black-shafted spear\n";
		std::cout << "Polished sword\n";
		std::cout << "Steel shield bearing all-devouring worm symbol\n";
		std::cout << "Black lamellar armor\n";
		std::cout << "Black armiger's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations, 3gp\n\n\n";
	}
}

void assassin(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();


		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(charisma);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Assassin\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Cutthroat \n";
		std::cout << "Proficiencies - Combat Reflexes, Gambling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Hand axe\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Cheap tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "12 iron spikes,\n";
		std::cout << "Small hammer\n";
		std::cout << "1 flask of military oil\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Bounty Hunter \n";
		std::cout << "Proficiencies - Combat Trickery (incapacitate), Tracking\n\n";
		std::cout << "Equipment: ";
		std::cout << "Bola\n";
		std::cout << "Serrated sword\n";
		std::cout << "Dagger\n";
		std::cout << "Net\n";
		std::cout << "Leather armor\n";
		std::cout << "Black cloak\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Crowbar\n";
		std::cout << "50' rope\n";
		std::cout << "Manacles\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Small hammer\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Pirate \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "2 well-balanced daggers with boot sheathes\n";
		std::cout << "Leather armor\n";
		std::cout << "Colorful tunic and pants\n";
		std::cout << "Silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Bravo \n";
		std::cout << "Proficiencies - Fighting Style (two weapon fighting), intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Serrated sword\n";
		std::cout << "Left-hand dagger\n";
		std::cout << "Black leather armor\n";
		std::cout << "Duelist's cloak\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Hight boots\n";
		std::cout << "Belt pouch with bone dice ade from last foe\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "6gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Assassin-for-Hire \n";
		std::cout << "Proficiencies - Precise Shooting, Bargaining\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Abalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Pair of well-shaprened short swords\n";
		std::cout << "Bloodstained leather armor\n";
		std::cout << "Dark cloak with hood\n";
		std::cout << "Black tunic and pants\n";
		std::cout << "Low boots\n";
		std::cout << "Leather belt\n";
		std::cout << "Belt pouch\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "Tinderbox\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "50' rope\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "17gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Betrayer \n";
		std::cout << "Proficiencies - Bribery, Seduction\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Slender short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Long leather whip\n";
		std::cout << "Tight leather armor\n";
		std::cout << "leather cloak\n";
		std::cout << "Elegant silk tunic and pants\n";
		std::cout << "Silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Manacles\n";
		std::cout << "1 dose of giant centipede poison\n";
		std::cout << "1 lb of dried belladonna\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "6gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Infiltrator \n";
		std::cout << "Proficiencies - Skulking, Disguise\n\n";
		std::cout << "Equipment:n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Unmarked leather armor\n";
		std::cout << "Simple hooded cloak\n";
		std::cout << "Plain tunic with pants\n";
		std::cout << "Leather Gloves\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Thieves' Tools\n";
		std::cout << "Disguise kit\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "40gp for bribes\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Cult Deathbringer \n";
		std::cout << "Proficiencies - Arcane Dabbling, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Wavy-bladed sword and short sword\n";
		std::cout << "Dagger in wrist sheath\n";
		std::cout << "Leather armor under grey cassock with hood\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Soft-soled shoes\n";
		std::cout << "Leather belt\n";
		std::cout << "Belt pouch\n";
		std::cout << "Holy symbol (eclipsed sun)\n";
		std::cout << "2 flasks of holy water\n";
		std::cout << "sacred religious text\n";
		std::cout << "6 torches\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}
}

void barbarian(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(constitution);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Barbarian\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Tribal Warrior (Ivory Kingdoms): \n";
		std::cout << "Proficiencies - Beast Friendship, Tracking, *Running*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bola\n";
		std::cout << "5 feathered darts\n";
		std::cout << "Spear decorated with beads and feathers\n";
		std::cout << "Club\n";
		std::cout << "Cowhide\n";
		std::cout << "Shield\n";
		std::cout << "Wildebeast hide armor\n";
		std::cout << "Loincloth\n";
		std::cout << "Sandals\n";
		std::cout << "Leather pouch\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Berserker (Jutland): \n";
		std::cout << "Proficiencies - Berserkergang, Intimidation, *Climbing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Long bearded axe [great axe]\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Rough spun wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Sea Rover (Jutland): \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring, *Climbing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Iron-tipped spear\n";
		std::cout << "Bearded axe [battle axe]\n";
		std::cout << "Kite shield painted with dragon\n";
		std::cout << "Leather armor\n";
		std::cout << "Rough spun wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Wineskin with strong ale\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3 gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Skrimisher (Skysostan): \n";
		std::cout << "Proficiencies - Skrimishing, Endurance, *Precise Shooting*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Pair of scimitars [short swords]\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "6gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Death Dealer (Jutland): \n";
		std::cout << "Proficiencies - Ambushing, Survival, *Climbing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Two-handed iron sword\n";
		std::cout << "Francisca [hand axe]\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Silver arm-bands (25gp value)\n";
		std::cout << "Wineskin with strong ale\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Pit Fighter (Ivory Kingdoms): \n";
		std::cout << "Proficiencies - Combat Reflexes, Gambling, *Running*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Spear\n";
		std::cout << "Weighted net\n";
		std::cout << "hand axe\n";
		std::cout << "Gladiatorial armor [chain mail armor]\n";
		std::cout << "Plumed heavy helmet with visor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "Small sack\n";
		std::cout << "Amphora of oil (for polishing body)\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "49gp in arena winnings\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Housecarl (Jutland): \n";
		std::cout << "Proficiencies - Fighting Style (weapon and shield), Military Strategy, *Climbing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Iron spear\n";
		std::cout << "Iron sword\n";
		std::cout << "Kite shield painted with house crest\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Silver arm-bands (25gp value)\n";
		std::cout << "Silver amulet (25gp value)\n";
		std::cout << "Leather belt\n";
		std::cout << "High boots\n";
		std::cout << "Wineskin\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook";
		std::cout << "1 weeks' iron rations";
		std::cout << "8gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Nomad (Skysostan): \n";
		std::cout << "Proficiencies - Weapon Focus (bow/crossbow), Riding, *Precise Shooting*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}
}

void bard(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(dexterity);
		requisiteCheckTwo = primeRequisite(charisma);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Bard\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Woodland Piper: \n";
		std::cout << "Proficiencies - Beast Friendship, Naturalism, *Performance (instruments)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "2 javelins\n";
		std::cout << "Hide armor\n";
		std::cout << "Leather shoes\n";
		std::cout << "Leather belt\n";
		std::cout << "Belt pouch\n";
		std::cout << "Pan pipes\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7sp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Charlatan: \n";
		std::cout << "Proficiencies - Prestidigitation, Alchemy, *Performance (oration)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Leather armor under mage's cassock\n";
		std::cout << "Cloak with embroidered sigils\n";
		std::cout << "Fancy silver sash\n";
		std::cout << "Leather shoes\n";
		std::cout << "Backpack\n";
		std::cout << "4 tallow candles\n";
		std::cout << "Tinderbox\n";
		std::cout << "4 pints of rare wine in potion vials\n";
		std::cout << "Leather-bound spellbook (blank)\n";
		std::cout << "1 week's iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Swashbuckler: \n";
		std::cout << "Proficiencies - Swashbuckler, Seafaring, *Performance (singing)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "2 well-balanced daggers with boot-sheathes\n";
		std::cout << "Leather armor\n";
		std::cout << "Colorful tunic and pants\n";
		std::cout << "Bright silk girdle\n";
		std::cout << "High boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Wandering Minstrel: \n";
		std::cout << "Proficiencies - Magical Music, Diplomacy, *Performance (instruments)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Quiver with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Well-maintained leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Lute";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Historian: \n";
		std::cout << "Proficiencies - Magical Engineering, Knowledge (history), *Performance (epic poetry)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Quiver with 20 bolts\n";
		std::cout << "Shortsword\n";
		std::cout << "Dagger\n";
		std::cout << "Well-maintained leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Parchment journal half-filled with entries\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "20gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Beguiler: \n";
		std::cout << "Proficiencies - Mystic Aura, Seduction, *Performance (singing)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Sword\n";
		std::cout << "Polished leather armor\n";
		std::cout << "Flamboyant silk cloak\n";
		std::cout << "Fancy tunic and pants\n";
		std::cout << "Long leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Bright silk sash\n";
		std::cout << "Purse\n";
		std::cout << "Belt pouch\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "15gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Spy: \n";
		std::cout << "Proficiencies - Eavesdropping, Lip Reading, *Performance (acting)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short Sword\n";
		std::cout << "Dagger\n";
		std::cout << "Unmarked leather armor\n";
		std::cout << "Simple hooded cloak\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Disguise kit\n";
		std::cout << "Crowbar\n";
		std::cout << "50' rope\n";
		std::cout << "3 weeks' iron rations\n";
		std::cout << "60gp for bribes\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Aristocrat: \n";
		std::cout << "Proficiencies - Command, Leadership, *Performance (oration)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Matching sword and dagger with laqered hilts\n";
		std::cout << "Exquisitely stitched leather armor\n";
		std::cout << "Fur-lined cloak\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Embossed leather belt\n";
		std::cout << "High boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "20gp\n\n\n";
	}
}

void bladedancer(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(dexterity);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Bladedancer\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Warrior Witch: \n";
		std::cout << "Proficiencies - Apostasy, Alchemy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (lion of Ianna)\n";
		std::cout << "Wickedly curved short sword\n";
		std::cout << "Animal skin cloak\n";
		std::cout << "Leather girdle\n";
		std::cout << "Leather breast band\n";
		std::cout << "Loin cloth\n";
		std::cout << "High boots\n";
		std::cout << "Leather pouch\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Oracle Dancer: \n";
		std::cout << "Proficiencies - Prophecy, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Wavy-bladed short sword\n";
		std::cout << "Strappy leather armor\n";
		std::cout << "Crimson and gold chiton\n";
		std::cout << "Loin cloth\n";
		std::cout << "Sandals\n";
		std::cout << "Purse\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Bringer of Mercy: \n";
		std::cout << "Proficiencies - Laying on Hands, Healing\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Slender-bladed sword\n";
		std::cout << "Very sharp dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "White chiton\n";
		std::cout << "White sash\n";
		std::cout << "High sandals\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb comfrey\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Bladesinger: \n";
		std::cout << "Proficiencies - Magical Music, Performance (singing)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Long-bladed glaive [pole arm]\n";
		std::cout << "Polished sword and dagger\n";
		std::cout << "Strappy leather armor\n";
		std::cout << "Bladedancer's head dress (20gp value)\n";
		std::cout << "Crimson chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Temple Bladedancer: \n";
		std::cout << "Proficiencies - Swashbuckler, Performance (dancing)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Pair of gracefully curved swords\n";
		std::cout << "Polished leather armor\n";
		std::cout << "Bladedancer's head dress (20gp value)\n";
		std::cout << "Golden silk cloak\n";
		std::cout << "White chiton\n";
		std::cout << "High boots\n";
		std::cout << "backpack\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Veiled Assassin: \n";
		std::cout << "Proficiencies - Quiet Magic, Seduction\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Slender short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Black silk cloak, veil, and sash\n";
		std::cout << "Black silk chiton\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Gold bangles (20gp value)\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "20gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Consular: \n";
		std::cout << "Proficiencies - Contemplation, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Finely made sword and dagger\n";
		std::cout << "Elegant leather armor\n";
		std::cout << "Bladedancer's head dress (20gp value)\n";
		std::cout << "White silk chiton\n";
		std::cout << "Gold bangles (20gp value)\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "35gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Warrior Princess: \n";
		std::cout << "Proficiencies - Martial Training (bows/crossbows), Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Finely made glaive [pole arm]\n";
		std::cout << "Elegant leather armor\n";
		std::cout << "Crimson Chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Bladedancer's head dress (20gp value)\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding tack and saddle\n";
		std::cout << "Saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}
}

void cleric(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(dexterity);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Cleric\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Hermit: \n";
		std::cout << "Proficiencies - Laying on Hands, Naturalism\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Hand-carved wood holy symbol (white lady of Mityara)\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Hide armor\n";
		std::cout << "Itchy wool tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "2 small sacks\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Prophet: \n";
		std::cout << "Proficiencies - Prophecy, Performance (storytelling)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (silver crescent of Istreus)\n";
		std::cout << "Sling\n";
		std::cout << "30 sling stones\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Leather armor\n";
		std::cout << "grey wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Mendicant: \n";
		std::cout << "Proficiencies - Beast Friendship, Animal Husbandry\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (gallery of Naurivus)\n";
		std::cout << "Wooden walking staff\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Green traveler's cloak\n";
		std::cout << "Green cassock\n";
		std::cout << "Sandals\n";
		std::cout << "2 small sacks\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "Trained hunting dog\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Proselytizer: \n";
		std::cout << "Proficiencies - Divine Health, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Mace\n";
		std::cout << "Wooden shield\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Purple priest's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "Holy book (The Laws of the Light)\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Priest: \n";
		std::cout << "Proficiencies - Divine Blessing, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Mace\n";
		std::cout << "Wooden Shield\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Purple priest's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "Holy book (The LAws of the Light)\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Undead Slayer: \n";
		std::cout << "Proficiencies - Righteous Turning, Healing\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (hammer of Turas)\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Blue priest's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 flask of holy water\n";
		std::cout << "1 lb of garlic\n";
		std::cout << "1 lb of wolfsbane\n";
		std::cout << "Mirror\n";
		std::cout << "4 stakes and mallet\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Exorcist: \n";
		std::cout << "Proficiencies - Sensing Evil, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (hammer of Turas)\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Blue priest's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 flasks of holy water\n";
		std::cout << "12 torches\n";
		std::cout << "Tinder box\n";
		std::cout << "50' rope\n";
		std::cout << "Manacles\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Crusader: \n";
		std::cout << "Proficiencies - Martial Training (Swords/daggers), Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Polished sword and dagger\n";
		std::cout << "steel shield bearing symbol of the winged sun\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Purple armiger's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}
}

void explorer(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(dexterity);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Explorer\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Wanderer: \n";
		std::cout << "Proficiencies - Running, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Old spear\n";
		std::cout << "Hand axe\n";
		std::cout << "Battered leather armor\n";
		std::cout << "Deep cowled traveler's cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Well-worn low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Cartographer: \n";
		std::cout << "Proficiencies - Land Surveying, Mapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Spear\n";
		std::cout << "Hand axe\n";
		std::cout << "Leather armor\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tattered cartographic journal\n";
		std::cout << "Quill and ink\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Mariner: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "Leather armor\n";
		std::cout << "Mariner's tunic and pants\n";
		std::cout << "Fancy red sash\n";
		std::cout << "Polished high boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Wineskin\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Pathfinder: \n";
		std::cout << "Proficiencies - Precise Shooting, Tracking\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Sturdy longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Spear\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Wind-battered fur cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Lantern\n";
		std::cout << "Tinderbox\n";
		std::cout << "2 flasks of common oil\n";
		std::cout << "Blanket";
		std::cout << "50' rope";
		std::cout << "12 iron spikes";
		std::cout << "Small hammer";
		std::cout << "Wineskin";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Waylayer: \n";
		std::cout << "Proficiencies - Ambushing, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Net\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Dark tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "4 stakes and mallet\n";
		std::cout << "12 iron spikes\n";
		std::cout << "50' rope\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "Tinderbox";
		std::cout << "12 torches";
		std::cout << "2 weeks' iron rations";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Scout: \n";
		std::cout << "Proficiencies - Passing without Trace, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "2 short swords\n";
		std::cout << "Hand axe\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Grey-green traveler's cloak, tunic, and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Blanket\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Monster Hunter: \n";
		std::cout << "Proficiencies - Skirmishing, Trapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Spear\n";
		std::cout << "Short sword\n";
		std::cout << "Net\n";
		std::cout << "Shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Hunter green cloak, tunic, and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb garlic\n";
		std::cout << "1 lb wolfsbane\n";
		std::cout << "1 vial of holy water\n";
		std::cout << "50' rope\n";
		std::cout << "12 torches";
		std::cout << "Tinderbox";
		std::cout << "2 weeks' iron rations";
		std::cout << "4gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Outrider: \n";
		std::cout << "Proficiencies - Fighting Style (missile weapon), Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "Dagger\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}
}

void fighter(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Fighter\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Thug: \n";
		std::cout << "Proficiencies - Dungeon Bashing, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Morning star\n";
		std::cout << "Scarred leather armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Ravager: \n";
		std::cout << "Proficiencies - Berserker, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Long bearded axe [great axe]\n";
		std::cout << "Francisca [hand axe]\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Thick wool cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Small sack\n";
		std::cout << "Wineskin with strong ale\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Corsair: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "2 well-balanced daggers with boot sheaths\n";
		std::cout << "Leather armor\n";
		std::cout << "Colorful tunic and pants\n";
		std::cout << "Silk girdle\n";
		std::cout << "High boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Guardsman: \n";
		std::cout << "Proficiencies - Alertness, Signaling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Glaive [pole arm]\n";
		std::cout << "Flanged mace\n";
		std::cout << "Wooden shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Lantern\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Mercenary: \n";
		std::cout << "Proficiencies - Combat Reflexxes, Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Well-oiled sword\n";
		std::cout << "Steel shield re-painted many times\n";
		std::cout << "Slightly battered chain mail armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Gladiator: \n";
		std::cout << "Proficiencies - Weapon Focus (sowrds and daggers), Gambling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "2 gilded swords\n";
		std::cout << "Lamellar armor\n";
		std::cout << "Plumbed heavy helmet with visor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "Small sack\n";
		std::cout << "Amphora of oil (for polishing body)\n";
		std::cout << "2 week's iron rations\n";
		std::cout << "13gp in arena winnings\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Legionary: \n";
		std::cout << "Proficiencies - FIghting Style (weapon and shield), Siege Engineering\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Military-issue sword and spear\n";
		std::cout << "Steel shield bearing Imperial eagle\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Imperial field manual\n";
		std::cout << "Tent\n";
		std::cout << "Wool blanket\n";
		std::cout << "Waterskin\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "30gp in back pay\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Lancer: \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Lance with pennant\n";
		std::cout << "Polished sword\n";
		std::cout << "Steel shield bearing noble house's crest\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebacks\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}
}

void mage(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(intelligence);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Mage\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Hedge Wizard: \n";
		std::cout << "Proficiencies - Familiar (owl), Healing, *Animal Husbandry*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Owl Familiar\n";
		std::cout << "Musty old spellbook with Slipperiness and *Ventriloquism*\n";
		std::cout << "Gnarled oaken staff\n";
		std::cout << "Simple robe\n";
		std::cout << "Leather shoes\n";
		std::cout << "Medicine bag\n";
		std::cout << "1 lb comfrey\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Soothsayer: \n";
		std::cout << "Proficiencies - Soothsaying, Performance (storytelling), *Theology*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Enameled spellbook with Protection from Evil and *Magic Mouth*\n";
		std::cout << "Smooth-worn staff\n";
		std::cout << "Blue robe with crescents\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Ornamental crystal ball (20gp value)\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Necromancer: \n";
		std::cout << "Proficiencies - Black Lore of Zahar, ALchemy, *Healing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-bound snakeskin spellbook with Choking Grip and *Darkness*\n";
		std::cout << "Curved sacrificial dagger\n";
		std::cout << "Grey robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb birthwort\n";
		std::cout << "1 lb goldenrod\n";
		std::cout << "1 lb woundwort\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "5gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Elementalist: \n";
		std::cout << "Proficiencies - Elementalism, Naturalism, *Healing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Wood-paneled spellbook with Burning Hands and *Detect Magic*\n";
		std::cout << "Gnarled oaken quarterstaff\n";
		std::cout << "5 darts\n";
		std::cout << "Four-colored cassock with hood\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "57gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Magical Scholar: \n";
		std::cout << "Proficiencies - Loremastery, Collegiate Wizardry, *Knowledge *astrology)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Well-kept spellbook with Sleep and *Read Languages*\n";
		std::cout << "Rune-etched staff\n";
		std::cout << "Blue mage's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "80gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Eunuch Sorcerer: \n";
		std::cout << "Proficiencies - Mystic Aura, Intimidation, *Theology*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Rolled papyrus spellbook with Summon Berserkers and *Wall of Smoke*\n";
		std::cout << "Wavy-bladed dagger\n";
		std::cout << "Black and gold Somirean robes\n";
		std::cout << "Polished iron skullcap\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "95gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Warmage: \n";
		std::cout << "Proficiencies - Battle Magic, Military Strategy, *Siege Engineering*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Academy-issue spellbook with Magic Missile and *Shield*\n";
		std::cout << "Iron-shod staff\n";
		std::cout << "Officer's dagger\n";
		std::cout << "Red armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "100gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Court Magist: \n";
		std::cout << "Proficiencies - Prestidigitation, Diplomacy, *Language*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bronze-framed spellbook with Charm Person and *Unseen Servant*\n";
		std::cout << "Quarterstaff tipped with glass gemstone (45gp value)\n";
		std::cout << "5 darts\n";
		std::cout << "Silk mage's cassock\n";
		std::cout << "Extravagent hat\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations";
		std::cout << "22gp";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}
}

void mystic(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, requisiteCheckFour = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(constitution);
		requisiteCheckThree = primeRequisite(dexterity);
		requisiteCheckFour = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true && requisiteCheckFour == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Mystic\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Ascetic: \n";
		std::cout << "Proficiencies - Wakefulness, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Staff";
		std::cout << "War rings[treat as dart]\n";
		std::cout << "Wide-brimmed hat\n";
		std::cout << "Simple wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "30gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Yogi: \n";
		std::cout << "Proficiencies - Contortionism, Performance (yoga)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elephant trunk blade [pole arm]\n";
		std::cout << "5 war rings [darts]\n";
		std::cout << "Wide-brimmed hat\n";
		std::cout << "Saffron yellow robe\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandles\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "40gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Temple Guard: \n";
		std::cout << "Proficiencies - Precise Shooting, Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bamboo longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Pair of khanda [swords]\n";
		std::cout << "5 war rings [darts]\n";
		std::cout << "Saffron red robe with head wrapping\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "40gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Enlightened Mind: \n";
		std::cout << "Proficiencies - Illusion Resistance, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Double-ended flail [flail]\n";
		std::cout << "Pair of khanda [swords]\n";
		std::cout << "5 war rings [darts]\n";
		std::cout << "WIde-brimmed hat\n";
		std::cout << "Blue robe\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "63gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Warrior Monk: \n";
		std::cout << "Proficiencies - Swashbuckling, Performance (chanting)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elephant trunk blade [pole arm]\n";
		std::cout << "Pair of khanda [swords]\n";
		std::cout << "5 war rings [darts]\n";
		std::cout << "Saffron red robe with head wrapping\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "80gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Cultist: \n";
		std::cout << "Proficiencies - Arcane Dabbling, Knowledge (occult)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Coiling blade [whip]\n";
		std::cout << "Pair of double bladed daggers [short sword]\n";
		std::cout << "Pair of tiger's claws [daggers]\n";
		std::cout << "Grey robe with hood\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2 doses of giant centipede poison\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Faith Healer: \n";
		std::cout << "Proficiencies - Laying on Hands, Healing\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Spear";
		std::cout << "Pair of tulwars[short swords]\n";
		std::cout << "Wide-brimmed hat\n";
		std::cout << "White robe\n";
		std::cout << "Leather belt\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 lb birthwort\n";
		std::cout << "2 lb comfrey\n";
		std::cout << "2 lb goldenrod\n";
		std::cout << "2 lb woundwort\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "60gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Noble Philosopher: \n";
		std::cout << "Proficiencies - Command, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bamboo longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Elephant trunk blade [pole arm]\n";
		std::cout << "Pair of khanda [swords]\n";
		std::cout << "5 war rings [darts]\n";
		std::cout << "Ochre silk robe\n";
		std::cout << "Silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "26gp\n\n\n";
	}
}

void paladin(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Paladin\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Errant: \n";
		std::cout << "Proficiencies - Running, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Hand-carved wood holy symbol (galley of Naurivus)\n";
		std::cout << "Morning star\n";
		std::cout << "Peasant's wool tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "2 small sakcs\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Gallant: \n";
		std::cout << "Proficiencies - Mystic Aura, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Well-kept wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Temple Guard: \n";
		std::cout << "Proficiencies - Alertness, Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Spear\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Purple military cloak\n";
		std::cout << "Guard's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Champion: \n";
		std::cout << "Proficiencies - Divine Blessing, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Sword\n";
		std::cout << "Steel shield bearing symbol of winged sun\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Foe Hunter: \n";
		std::cout << "Proficiencies - Goblin-Slaying, Military Strategy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winded sun of Ammonar)\n";
		std::cout << "Two-handed sword\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb garlic\n";
		std::cout << "1 lb wolfsbane\n";
		std::cout << "4 stakes and mallet\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Vanguard: \n";
		std::cout << "Proficiencies - Combat Reflexes, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (hammer of Turas)\n";
		std::cout << "Razor-sharp glaive [pole arm]\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield bearing symbol of Turas\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Blue armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Inquisitor: \n";
		std::cout << "Proficiencies - Illusion Resistance, Profession (judge)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (hammer of Turas)\n";
		std::cout << "Ball-and-chain [flail]\n";
		std::cout << "Steel shield bearing symbol of Turas\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Blue priest's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 flasks of holy water\n";
		std::cout << "12 torches\n";
		std::cout << "Tinderbox\n";
		std::cout << "50' rope\n";
		std::cout << "Manacles\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Templar: \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "White lance\n";
		std::cout << "Polished sword\n";
		std::cout << "Steel shield bearing symbol of the winged sun\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Purple armiger's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddelbags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n\n\n";
	}
}

void priestess(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Priestess\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Anchorite: \n";
		std::cout << "Proficiencies - Contemplation, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (wheel of Calefa)\n";
		std::cout << "Wickedly curved dagger\n";
		std::cout << "Animal skin cloak\n";
		std::cout << "Leather girdle\n";
		std::cout << "Leather breast band\n";
		std::cout << "Loin cloth\n";
		std::cout << "High boots\n";
		std::cout << "Leather pouch\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Oracle: \n";
		std::cout << "Proficiencies - Prophecy, Performance (storytelling)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (wheel of Calefa)\n";
		std::cout << "Wavy-bladed dagger\n";
		std::cout << "White and grey chiton\n";
		std::cout << "Sandals\n";
		std::cout << "Purse\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Chantress: \n";
		std::cout << "Proficiencies - Magical Music, Performance (singing)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Stiletto\n";
		std::cout << "Priestess' headdress (20gp value)\n";
		std::cout << "Scarlet silk chiton\n";
		std::cout << "Gold sash\n";
		std::cout << "High sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Canoness: \n";
		std::cout << "Proficiencies - Divine Blessing, Theology\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (white lady of Mityara)\n";
		std::cout << "SLender whitewood staff\n";
		std::cout << "Priestess' headdress (20gp value)\n";
		std::cout << "White silk chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Bakcpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1 gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Medician: \n";
		std::cout << "Proficiencies - Laying on Hands, Healing\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (white lady of Mityara)\n";
		std::cout << "Slender whitewood staff\n";
		std::cout << "White silk chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb birthwort\n";
		std::cout << "1 lb comfrey\n";
		std::cout << "1 lb goldenrod\n";
		std::cout << "1 lb woundwort\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1 gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Sacred Courtesan: \n";
		std::cout << "Proficiencies - Mystic Aura, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (9-pointed star of Ianna)\n";
		std::cout << "Stiletto\n";
		std::cout << "Gold silk cloak, veil, and sash\n";
		std::cout << "Scarlet silk chiton\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Gold bangles (20gp value)\n";
		std::cout << "Gold earrings (20gp value)\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "17gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Missionary: \n";
		std::cout << "Proficiencies - Divine Health, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (white lady of Mityara)\n";
		std::cout << "Slender whitewood staff\n";
		std::cout << "Priestess' headdress (20gp value)\n";
		std::cout << "White silk chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 flasks of holy water\n";
		std::cout << "Holy book (The Laws of Light)\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "16gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Lightbringer: \n";
		std::cout << "Proficiencies - Righteous Turning, Leadership\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (white lady of Mityara)\n";
		std::cout << "Slender whitewood staff\n";
		std::cout << "Priestess' headdress (20gp value)\n";
		std::cout << "White silk chiton\n";
		std::cout << "Gold silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding tack and saddle\n";
		std::cout << "Saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "18gp\n\n\n";
	}
}

void shaman(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Shaman\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Pariah: \n";
		std::cout << "Proficiencies - Apostasy, Survival, *Quiet Magic*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Rat totem animal*\n";
		std::cout << "Heretical holy symbol (horned rat)\n";
		std::cout << "Club\n";
		std::cout << "Hide armor\n";
		std::cout << "Itchy wool tunic and pants\n";
		std::cout << "Sandals\n";
		std::cout << "2 small sacks\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Wise Man: \n";
		std::cout << "Proficiencies - Loremastery, Knowledge (history), *Sensing Power*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Owl totem animal*\n";
		std::cout << "Holy symbol (silver crescent)\n";
		std::cout << "QUarterstaff\n";
		std::cout << "Leather armor\n";
		std::cout << "Grey wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "5gp\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Warchanter: \n";
		std::cout << "Proficiencies - Battle Magic, Performance (chanting), *Berserkergang*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Bear totem animal*\n";
		std::cout << "Holy symbol (bear's teeth)\n";
		std::cout << "Iron spear\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Leather armor\n";
		std::cout << "Bear fur cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Runecaster: \n";
		std::cout << "Proficiencies - Elementalism, Craft (rune-carving), *Ambushing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Wolf totem animal*\n";
		std::cout << "Holy symbol (runestone)\n";
		std::cout << "Short sword\n";
		std::cout << "Wooden shield\n";
		std::cout << "Leather armor\n";
		std::cout << "Wool tunic and patns\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Small hammer\n";
		std::cout << "Carving knife\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Druid: \n";
		std::cout << "Proficiencies - Beast Friendship, Naturalism, *Diving Blessing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Raven animal totem*\n";
		std::cout << "Holy symbol (golden sickle)\n";
		std::cout << "Whitewood spear\n";
		std::cout << "Sickle sword [short sword]\n";
		std::cout << "Dagger\n";
		std::cout << "Shield\n";
		std::cout << "Leather armor under white druid's robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "1 lb garlic\n";
		std::cout << "1 lb wolfsbane\n";
		std::cout << "2 weeks' iron rations";
		std::cout << "1gp";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Snake Handler: \n";
		std::cout << "Proficiencies - Divine Health, Healing, *Laying on Hands*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Python totem animal*\n";
		std::cout << "Holy symbol *two snakes coiled around rod*\n";
		std::cout << "Long staff\n";
		std::cout << "2 daggers\n";
		std::cout << "Leather armor under forest green robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 lb comfrey\n";
		std::cout << "2 lb goldenrod\n";
		std::cout << "2 lb woundwort\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Spirit Raiser: \n";
		std::cout << "Proficiencies - Sensing Evil, Leadership, *Command*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Eagle totem animal*\n";
		std::cout << "Holy symbol (eagle on sun)\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor under blue robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "3 flasks of holy water\n";
		std::cout << "Tinderbox\n";
		std::cout << "6 tallow candles\n";
		std::cout << "4 lb garlic\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Nomad Shaman: \n";
		std::cout << "Proficiencies - Unflappable Casting, Riding, *Running*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "*Horse totem animal*\n";
		std::cout << "Holy symbol (engraved horn)\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Leather armor\n";
		std::cout << "Fur lined cloak\n";
		std::cout << "Wool tunic nad pants\n";
		std::cout << "Leather gloves\n";
		std::cout << "Leather belt\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 flasks of holy water\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags";
		std::cout << "2 weeks' iron rations";
		std::cout << "26gp";
		std::cout << "\n";
		std::cout << "Totem animal and totem proficiency noted in asterisks\n\n\n";
	}
}

void thief(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(dexterity);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Thief\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Outlaw: \n";
		std::cout << "Proficiencies - Skulking, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Handmade shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Short sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Tattered cloak\n";
		std::cout << "Old freeholder's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Well-worn low boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Thief-Acrobat: \n";
		std::cout << "Proficiencies - Acrobatics, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bola\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Supple leather armor\n";
		std::cout << "Cloak\n";
		std::cout << "Tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Buccaneer: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "2 well-balanced daggers with boot sheathes\n";
		std::cout << "Leather armor\n";
		std::cout << "Colorful tunic and pants\n";
		std::cout << "Silk girdle\n";
		std::cout << "High boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "50' rope\n";
		std::cout << "Thieves' tools\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Tomb Raider: \n";
		std::cout << "Proficiencies - Trap Finding, Mapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "10' pole\n";
		std::cout << "Short sword\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Tanned brown cloak\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 large treasure sacks\n";
		std::cout << "Thieves' tools\n";
		std::cout << "50' rope\n";
		std::cout << "Tinderbox";
		std::cout << "Lantern";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "2 flasks of military oil";
		std::cout << "Wineskin";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Cat Burglar: \n";
		std::cout << "Proficiencies - Cat Burglary, Gambling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Short sword\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Supple leather armor\n";
		std::cout << "Black cloak with hood and bandana\n";
		std::cout << "Black tunic and pants\n";
		std::cout << "Padded sandles\n";
		std::cout << "Backpack\n";
		std::cout << "2 large sacks\n";
		std::cout << "Thieves' tools\n";
		std::cout << "Crowbar\n";
		std::cout << "100' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Lantern";
		std::cout << "Tinderbox";
		std::cout << "2 flasks of common oil";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "Wineskin";
		std::cout << "1 weeks' iron rations";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Lockbreaker: \n";
		std::cout << "Proficiencies - Lockpicking, Craft (locksmithing)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "SHort sword\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Leather armor\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Freeholder's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Thieves' tools\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "Lantern";
		std::cout << "2 flasks of common oil";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "Wineskin";
		std::cout << "1 week's iron rations\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Failed Apprentice: \n";
		std::cout << "Proficiencies - Arcane Dabbling, Collegiate Wizardry\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Quarterstaff\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Leather armor under blue mage's cassock\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Thieves' tools\n";
		std::cout << "50' rope\n";
		std::cout << "Spellbook (blank)\n";
		std::cout << "Lantern\n";
		std::cout << "Tinderbox\n";
		std::cout << "4 flasks of military oil\n";
		std::cout << "2 flasks of common oil\n";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "1 lb garlic";
		std::cout << "1 lb wolfsbane";
		std::cout << "Wineskin";
		std::cout << "1 weeks' iron rations";
		std::cout << "4gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Traveler: \n";
		std::cout << "Proficiencies - Skirmishing, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "Thieves' tools\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}
}

void venturer(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(charisma);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Venturer\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Bankrupt: \n";
		std::cout << "Proficiencies - Running, Gambling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Slightly notched short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Shabby linen tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Belt pouch\n";
		std::cout << "Pair of bone dice\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Factotum: \n";
		std::cout << "Proficiencies - Arcane Dabbling, Bargaining\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "14gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Merchant Mariner: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Scimitar [short sword]\n";
		std::cout << "Leather armor\n";
		std::cout << "Mariner's tunic and pants\n";
		std::cout << "Fancy gold sash\n";
		std::cout << "Polished high boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Merchant Traveler: \n";
		std::cout << "Proficiencies - Alertness, Navigation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Tanned brown cloak\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 large treasure sacks\n";
		std::cout << "50' rope\n";
		std::cout << "Tinderbox\n";
		std::cout << "Lantern\n";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "2 flasks of military oil";
		std::cout << "Wineskin";
		std::cout << "2 weeks' iron rations";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Antiquary: \n";
		std::cout << "Proficiencies - Magical Engineering, Knowledge (history)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Well-maintained leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Collector's journal\n";
		std::cout << "Quill and ink\n";
		std::cout << "Collection of ancient coins (32gp value)\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Caravaneer: \n";
		std::cout << "Proficiencies - Precise Shot, Animal Husbandry\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor under dusty robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 flask of common oil\n";
		std::cout << "1 pont of good wine in wineskin\n";
		std::cout << "Small cart\n";
		std::cout << "Mule\n";
		std::cout << "Draft harness and tack";
		std::cout << "2 leather saddlebags";
		std::cout << "2 weeks' iron rations";
		std::cout << "5gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Comprador: \n";
		std::cout << "Proficiencies - Lip Reading, Language\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "70gp for bribes\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Magnate: \n";
		std::cout << "Proficiencies - Leadership, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Gaudy silver rings (20gp value)\n";
		std::cout << "Riding boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "14gp\n\n\n";
	}
}

void warlock(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(intelligence);

		if (requisiteCheckOne == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Warlock\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Pact Witch: \n";
		std::cout << "Proficiencies - Beast Friendship, Animal Husbandry, *Healing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Cat familiar\n";
		std::cout << "Musty old spellbook with Choking Grip and *Protection from Evil*\n";
		std::cout << "Gnarled oaken staff\n";
		std::cout << "Simple robe\n";
		std::cout << "Leather shoes\n";
		std::cout << "Medicine bag\n";
		std::cout << "1 lb comfrey\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Changeling: \n";
		std::cout << "Proficiencies - Elven Bloodline, Mimicry, *Naturalism*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Lizard familiar\n";
		std::cout << "Wood-paneled spellbook with Choking Grip and *Ventriloquism*\n";
		std::cout << "Smooth-worn staff\n";
		std::cout << "Robe stitched together of many fabrics\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb birthwort\n";
		std::cout << "1 lb woundwort\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Deranged Alchemist: \n";
		std::cout << "Proficiencies - Transmogrification, Alchemy, *Alchemy 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Toad familiar\n";
		std::cout << "Curiously-stained spellbook with Choking Grip and *Slipperiness*\n";
		std::cout << "Razpr-like dagger\n";
		std::cout << "Grey warlock's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather golves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb birthwort\n";
		std::cout << "1 lb goldenrod\n";
		std::cout << "1 lb woundwort\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "5gp";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Defilier: \n";
		std::cout << "Proficiencies - Elementalism, Naturalism, *Intimidation*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Raven familiar\n";
		std::cout << "Rusted iron-bound spellbook with Choking grip and *Burning Hands*\n";
		std::cout << "Misshapen yew quarterstaff\n";
		std::cout << "5 darts\n";
		std::cout << "Grey and green cassock with hood\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "57gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Corrupted Scholar: \n";
		std::cout << "Proficiencies - Loremastery, Knowledge (occult), *Alchemy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Owl familiar\n";
		std::cout << "Bloodstained spellbook with Choking Grip and *Read Languages*\n";
		std::cout << "Rune-etched staff\n";
		std::cout << "Silver dagger\n";
		std::cout << "Grey warlock's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "50gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Diabolist: \n";
		std::cout << "Proficiencies - Divine Blessing, Theology, *Knowledge (occult)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bat familiar\n";
		std::cout << "Leather and bone spellbook with Choking Grip and *Summon Berserkers*\n";
		std::cout << "Wavy-bladed silver dagger\n";
		std::cout << "Long leather whip\n";
		std::cout << "Grey warlock's cassock\n";
		std::cout << "Polished iron skullcap\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "60gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Destrouyer: \n";
		std::cout << "Proficiencies - Battle Magic, Military Strategy, *Siege Engineering*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Hawk familiar\n";
		std::cout << "Battle-scarred spellbook with Choking Grip and *Magic Missile*\n";
		std::cout << "Iron-show staff topped with skull\n";
		std::cout << "2 wickedly curved silver daggers\n";
		std::cout << "10 darts\n";
		std::cout << "Black armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "40gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Scheming Vizier: \n";
		std::cout << "Proficiencies - Mystic Aura, Intimidation, *Leadership*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Viper familiar\n";
		std::cout << "Rolled papyrus spellbook with Choking Grip and *Charm Person*\n";
		std::cout << "Wavy-bladed dagger\n";
		std::cout << "Long leather whip\n";
		std::cout << "Black silk robes\n";
		std::cout << "Glearming silver skullcap (45gp value)\n";
		std::cout << "Leather belt\n";
		std::cout << "Low books\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations";
		std::cout << "20gp";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}
}

void witch(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Witch\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Crone (Antiquarian): \n";
		std::cout << "Proficiencies - Contemplation, Survival, *Healing*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (7-spoked wheel)\n";
		std::cout << "Rusty dagger\n";
		std::cout << "Tattered cloak\n";
		std::cout << "Patched wool dress\n";
		std::cout << "Leather shoes\n";
		std::cout << "Leather pouch\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "5gp\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Dark Oracle (Cthonic): \n";
		std::cout << "Proficiencies - Prophecy, Performance (storytelling), *Sedection*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (purple circle on black)\n";
		std::cout << "Wavy-bladed dagger\n";
		std::cout << "Purple and black chiton\n";
		std::cout << "Sandals\n";
		std::cout << "Purse\n";
		std::cout << "Flask of unholy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Botono (Voudon): \n";
		std::cout << "Proficiencies - Prestidigitation, Intimidation, *Craft (doll-making)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (bloody teeth)\n";
		std::cout << "Ivory dagger\n";
		std::cout << "Baobab staff tipped with hyena skull\n";
		std::cout << "Zebra-hide cloak\n";
		std::cout << "Linen breastwrap\n";
		std::cout << "Loincloth\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 clay dolls (5gp each)\n";
		std::cout << "Craftsman's tools\n";
		std::cout << "12 iron spikes\n";
		std::cout << "6 torches\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Lorelei (Sylvan): \n";
		std::cout << "Proficiencies - Magical Music, Performance (singing), *Beast Friendship*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (white bird)\n";
		std::cout << "Slender whitewood staff\n";
		std::cout << "Elaborate bronze choker necklace (20gp value)\n";
		std::cout << "Green silk dress\n";
		std::cout << "Autumn-hued silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Village Witch (Antiquarian): \n";
		std::cout << "Proficiencies - Laying on Hands, Healing, *Healing 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (pair of horns around a lunar disc)\n";
		std::cout << "Slender oak staff\n";
		std::cout << "Freeholder's dress\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather shoes\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb birthwort\n";
		std::cout << "2 lb comfrey\n";
		std::cout << "1 lb goldenrod\n";
		std::cout << "1 lb woundwort\n";
		std::cout << "5 scented wax candles\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "14gp";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Death Mistress (Cthonic): \n";
		std::cout << "Proficiencies - Familiar (python), Knowledge (occult), *Seduction*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Python familiar\n";
		std::cout << "Unholy symbol (medusa's head)\n";
		std::cout << "Stiletto [dagger]\n";
		std::cout << "Black silk cloak, veil, and sash\n";
		std::cout << "Black silk chiton\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Silver bangles (20gp value)\n";
		std::cout << "Silver earrings (20gp value)\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "5 black wax candles\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "14gp\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Fetishist (Voudon): \n";
		std::cout << "Proficiencies - Arcane Dabbling, Knowledge (occult), *Craft (jewelling)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Unholy symbol (green eye surrounded by tentacles)\n";
		std::cout << "Gnarled baobab staff\n";
		std::cout << "Copper and clay amulet (20gp value)\n";
		std::cout << "Elephant hide cloak\n";
		std::cout << "Linen breastwrap\n";
		std::cout << "Loincloth\n";
		std::cout << "Sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 flask of unholy water\n";
		std::cout << "6 torches\n";
		std::cout << "Craftsman's tools\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "23gp\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Faerie Princess (Sylvan): \n";
		std::cout << "Proficiencies - Elven Bloodline, Riding, *Beast Friendship*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Holy symbol (flower garland)\n";
		std::cout << "Slender whitewood staff\n";
		std::cout << "Gossamer head dress (20gp value)\n";
		std::cout << "White silk dress\n";
		std::cout << "Colorful silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding tack and saddle\n";
		std::cout << "Saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "18gp\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "The tradition of the Witch is noted in parenthesis next to their name, and any bonus proficiencies are noted in asterisks\n\n\n";
	}
}

void dwarvenCraftpriest(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(wisdom);
		requisiteCheckTwo = primeRequisite(constitution);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Dwarven Craftpriest\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Outcast: \n";
		std::cout << "Proficiencies - Quiet Magic, Caving, *Craft (leatherwork) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Wood and leather holy symbol (leatherworker's insignia)\n";
		std::cout << "Hand axe\n";
		std::cout << "Hide runic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Runeseer: \n";
		std::cout << "Proficiencies - Prophesy, Performance (chanting), *Craft (rune-carving) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Carved stone holy symbol (rune-carver's insignia)\n";
		std::cout << "Hand axe\n";
		std::cout << "Leather armor\n";
		std::cout << "Stone-grey wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Reliquary Guardian: \n";
		std::cout << "Proficiencies - Battle Magic, Signaling, *Craft (weaponsmithing) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron holy symbol (weaponsmith's insignia)\n";
		std::cout << "Morning star\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Documentarian: \n";
		std::cout << "Proficiencies - Loremastery, Mapping, *Craft (bookbinding) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bronze holy symbol (bookbinder's insignia)\n";
		std::cout << "Battle axe\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Wineskin with good wine\n";
		std::cout << "Small sack\n";
		std::cout << "Blank parchment book half-filled with journal entries\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Reclaimer: \n";
		std::cout << "Proficiencies - Magical Engineering, Knowledge (history), *Craft (stonemasonry) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Steel holy symbol (stonemason's insignia)\n";
		std::cout << "War hammer with carved head\n";
		std::cout << "Engraved banded plate armor\n";
		std::cout << "Steel shield with craft insignia\n";
		std::cout << "Backpack\n";
		std::cout << "Stonemason's tools\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Sacrementalist: \n";
		std::cout << "Proficiencies - Dwarven Brewing, Alchemy, *Craft (brewing) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Glass holy symbol (brewer's insignia)\n";
		std::cout << "Mace\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 flask of holy water\n";
		std::cout << "Brewer's tools\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Purifier: \n";
		std::cout << "Proficiencies - Righteous Turning, Knowledge (occult), *Craft (jewelling) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bejeweled holy symbol (jeweler's insignia)\n";
		std::cout << "Mace with diamond-shaped head\n";
		std::cout << "Steel shield with craft insignia\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 flask of holy water\n";
		std::cout << "Brewer's tools\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Seeker: \n";
		std::cout << "Proficiencies - Sensing Evil, Theology, *Craft (armor-making) 2*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Steel holy symbol (armorer's insignia)\n";
		std::cout << "Flail\n";
		std::cout << "Steel shield with craft insignia\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Mule\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 flask of holy water\n";
		std::cout << "Armorer's tools\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "9gp\n\n\n";
	}
}

void dwarvenDelver(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(dexterity);
		requisiteCheckTwo = primeRequisite(constitution);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Dwarven Delver\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Survivalist: \n";
		std::cout << "Proficiencies - Blind-Fighting, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Handcrafted shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Battle axe\n";
		std::cout << "Leather armor\n";
		std::cout << "Tattered cloak\n";
		std::cout << "Threadbare tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Scuffed low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Prowler: \n";
		std::cout << "Proficiencies - Skulking, Lip Reading\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Mace\n";
		std::cout << "2 hand axes\n";
		std::cout << "Leather armor\n";
		std::cout << "Charcoal grey cloak\n";
		std::cout << "Tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Crowbar\n";
		std::cout << "50' rope\n";
		std::cout << "Manacles\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes";
		std::cout << "1 weeks' iron rations";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Mountaineer: \n";
		std::cout << "Proficiencies - Mountaineering, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Battle axe\n";
		std::cout << "Hand axe\n";
		std::cout << "LEather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "100' sturdy climbing rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Mallet and 4 stakes\n";
		std::cout << "Tinderbox";
		std::cout << "12 torches";
		std::cout << "1 weeks' iron rations";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Tunnel Runner: \n";
		std::cout << "Proficiencies - Running, Mapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "10' pole\n";
		std::cout << "Battle axe\n";
		std::cout << "2 hand axes\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Tanned brown cloak\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 large sacks\n";
		std::cout << "50' rope\n";
		std::cout << "Tinderbox\n";
		std::cout << "Lantern";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "2 flasks of military oil";
		std::cout << "Wineskin";
		std::cout << "2 weeks' iron rations";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Pest Controller: \n";
		std::cout << "Proficiencies - Precise Shooting, Animal Training\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "10' pole\n";
		std::cout << "War hammer splattered with bug-guts\n";
		std::cout << "2 hand axes\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Tanned brown cloak\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather pants\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 large treasure sacks\n";
		std::cout << "50' rope\n";
		std::cout << "Tinderbox\n";
		std::cout << "Lantern";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "2 flask's of military oil";
		std::cout << "Wineskin";
		std::cout << "2 ill-tempered dwarven terriers [hunting dogs]";
		std::cout << "2 weeks' iron rations";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Treasure Hunter: \n";
		std::cout << "Proficiencies - Trap Finding, Bargaining\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "10' pole\n";
		std::cout << "Battle axe\n";
		std::cout << "2 hand axes\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Tanned brown cloak\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 large treasure sacks\n";
		std::cout << "Strange curio found in an old tomb (15gp value)\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook";
		std::cout << "Tinderbox";
		std::cout << "Lantern";
		std::cout << "2 flasks of military oil";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "Wineskin";
		std::cout << "2 weeks' iron rations";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Vermin Slayer: \n";
		std::cout << "Proficiencies - Vermin-Slaying, Trapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "War hammer\n";
		std::cout << "Leather armor\n";
		std::cout << "Cloak with hood and bandana\n";
		std::cout << "Thick tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "4 flasks of military oil";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "1 dose of giant centipede poison";
		std::cout << "1 weeks' iron rations";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Patroller: \n";
		std::cout << "Proficiencies - Alertness, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "10 dats\n";
		std::cout << "Battle axe\n";
		std::cout << "Leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "Riding boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Lantern\n";
		std::cout << "Sure-footed mule\n";
		std::cout << "Riding saddle and tack";
		std::cout << "Leather saddlebags";
		std::cout << "1 weeks' iron rations";
		std::cout << "40gp\n\n\n";
	}
}

void dwarvenFury(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(constitution);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Dwarven Fury\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Foe Eater: \n";
		std::cout << "Proficiencies - Goblin Slaying, Craft (cooking)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Battle axe\n";
		std::cout << "Hand axe\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "6 weeks' goblin jerky [iron rations]\n";
		std::cout << "15gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Dungeoneer: \n";
		std::cout << "Proficiencies - Dungeon bashing, Caving\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-shod spear\n";
		std::cout << "War hammer\n";
		std::cout << "Wooden kite shield\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "50' rope\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Crowbar\n";
		std::cout << "2 weeks' iron rations";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Belligerent: \n";
		std::cout << "Proficiencies - Weapon Focus (axes), Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Battle axe\n";
		std::cout << "Brace of 3 hand axes\n";
		std::cout << "Steel shield repainted many times\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "LEather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "21gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Warmonger: \n";
		std::cout << "Proficiencies - Combat Reflexes, Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-shod spear\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield painted with clan emblem\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "53gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Tempest: \n";
		std::cout << "Proficiencies - Fighting Style (two weapons), Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Pair of battle axes notched with many kills\n";
		std::cout << "2 hand axes\n";
		std::cout << "Military Cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "2 weeks' rations\n";
		std::cout << "43gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Dirge Marcher: \n";
		std::cout << "Proficiencies - Alerness, Performance (play instruments)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer\n";
		std::cout << "Steel kite shield\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "50' rope\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Crowbar\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "Dwarven bagpipes";
		std::cout << "41gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Bloodboiler: \n";
		std::cout << "Proficiencies - Dwarven Brewing, Siege Engineering\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Spiked mace\n";
		std::cout << "Heavy steel shield with many dents\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 tinderboxes\n";
		std::cout << "24 torches\n";
		std::cout << "12 flasks of military oil\n";
		std::cout << "50' rope\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Crowbar\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Vengeful Lord: \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer carved with clan emblem\n";
		std::cout << "2 hand axes\n";
		std::cout << "Steel shield painted with clan emblem\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Gold bracers earned in battle (25gp value)\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Mule\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "85gp\n\n\n";
	}
}

void dwarvenMachinist(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(intelligence);
		requisiteCheckTwo = primeRequisite(constitution);
		requisiteCheckThree = primeRequisite(dexterity);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Dwarven Machinist\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Scavenger: \n";
		std::cout << "Proficiencies - Scavenging, Survival, *Craft (carpentry) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Beat-up war hammer\n";
		std::cout << "Scruffy workman's apron\n";
		std::cout << "Tainted wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Scavenged machinist's tools\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Apothecary: \n";
		std::cout << "Proficiencies - Dwarven Brewing, Alchemy, *Craft (brewing) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer\n";
		std::cout << "Wooden shield\n";
		std::cout << "Stained workman's apron\n";
		std::cout << "Wool tunic and pants smelling of alcohol\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "4 flasks of military oil\n";
		std::cout << "2 flasks of common oil\n";
		std::cout << "2 wineskins with dwarven honey-mead\n";
		std::cout << "Machinist's tools\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Mechanic: \n";
		std::cout << "Proficiencies - Jury-Rigging, Signaling, *Craft (blacksmith) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer\n";
		std::cout << "Hand axe\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Greasy workman's apron\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "50' rope\n";
		std::cout << "Crowbar\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Machinist's tools";
		std::cout << "1 weeks' iron rations";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Discoverer: \n";
		std::cout << "Proficiencies - Inventing, Seafaring, *Craft (shipwright) 3)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Battle axe\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Cloak with hood\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Parchment journal half-filled with automaton sketches\n";
		std::cout << "Quill and ink\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Machinist's tools\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Engineer: \n";
		std::cout << "Proficiencies - Tinkering, Engineering, *Craft (stonemasonry) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Workman's apron\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Crowbar\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Machinist's tools\n";
		std::cout << "Stonemason's tools";
		std::cout << "1 weeks' iron rations";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Arillerist: \n";
		std::cout << "Proficiencies - Precise Shooting, Siege Engineering, *Craft (weaponsmithing) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "2 cases with 20 bolts each\n";
		std::cout << "War hammer\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Military cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Machinist's tools\n";
		std::cout << "Weaponsmith's tools\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "War Machinist: \n";
		std::cout << "Proficiencies - Martial Training (plate armor), Military Strategy, *Craft (armor-making) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield\n";
		std::cout << "Personally forged plate armor\n";
		std::cout << "Military cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Crowbar\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "Machinist's tools";
		std::cout << "Armorer's tools";
		std::cout << "1 weeks' iron rations";
		std::cout << "17gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Artificer: \n";
		std::cout << "Proficiencies - Magical Engineering, Collegiate Wizardry, *Craft (jewelling) 3*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Battle axe\n";
		std::cout << "Steel shield\n";
		std::cout << "Chain mail\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Silk tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Machinist's tools\n";
		std::cout << "Jeweler's tools";
		std::cout << "1 weeks' iron rations";
		std::cout << "7gp\n\n\n";
	}
}

void dwarvenVaultguard(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(constitution);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Dwarven Vaultguard\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Deserter: \n";
		std::cout << "Proficiencies - Blind Fighting, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Battle axe\n";
		std::cout << "Hand axe\n";
		std::cout << "Leather armor\n";
		std::cout << "Threadbare tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Battlerager: \n";
		std::cout << "Proficiencies - Berserkergang, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Rune-carved battle axe\n";
		std::cout << "Wooden kite shield\n";
		std::cout << "Dagger\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Sentinel: \n";
		std::cout << "Proficiencies - ALertness, Signaling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-shod spear\n";
		std::cout << "War hammer\n";
		std::cout << "Wooden kite shield\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Clansdwarf: \n";
		std::cout << "Proficiencies - Fighting Style (weapon and shield), Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-shod spear\n";
		std::cout << "War hammer\n";
		std::cout << "Steel shield painted with clan emblem\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Goblin Slayer: \n";
		std::cout << "Proficiencies - Goblin-Slaying, Caving\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Battle axe notched with many kills\n";
		std::cout << "2 hand axes\n";
		std::cout << "Steel shield painted with vault insignia\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Military cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Flask of military oil\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Axebearer: \n";
		std::cout << "Proficiencies - Weapon Focus (axes), Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Battle axe\n";
		std::cout << "Brace of 3 axes\n";
		std::cout << "Steel shield repainted many times\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Gold bracers earned in battle (15gp value)\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Besieger: \n";
		std::cout << "Proficiencies - Dungeon Bashing, Siege Engineering\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Spiked mace\n";
		std::cout << "Heavy steel shield with many dents\n";
		std::cout << "Dwarf forged plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "50' rope\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes";
		std::cout << "Crowbar";
		std::cout << "2 weeks' iron rations";
		std::cout << "14gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Highborn: \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "War hammer carved with clan emblem\n";
		std::cout << "2 hand axes\n";
		std::cout << "Steel shield painted with clan emblem\n";
		std::cout << "Dwarf-forged plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Mule\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations";
		std::cout << "3gp\n\n\n";
	}
}

void elvenCourtier(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(intelligence);
		requisiteCheckTwo = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Elven Courtier\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Dilettante: \n";
		std::cout << "Proficiencies - Loremastery, Gambling, *Performance (oration)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Slightly notched short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Shabby linen tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Belt pouch\n";
		std::cout << "Pair of dice carved with leaves\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Philanthropist: \n";
		std::cout << "Proficiencies - Laying on Hands, Healing, *Performance (singing)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Slender short sword\n";
		std::cout << "Stiletto [dagger]\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Silvery white cloak\n";
		std::cout << "White linen tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb comfrey\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Colonizer: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring, *Performance (oration)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Mariner's tunic and pants\n";
		std::cout << "Well-stitched sash\n";
		std::cout << "Embroidered high boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Wineskin\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "15gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Rake: \n";
		std::cout << "Proficiencies - Combat Trickery (disarm), Manual of Arms, *Performance (instruments)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "SLender short sword\n";
		std::cout << "Stiletto [dagger]\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Sunset red cloak embroidered with gold flowers\n";
		std::cout << "Crimson linen tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Aulos [woodwind musical instrument]\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Scion: \n";
		std::cout << "Proficiencies - Command, Military Strategy, *Performance (epic poetry)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Gracefully curved sword\n";
		std::cout << "Light steel shield with Argollean house crest\n";
		std::cout << "Well made chain mail armor\n";
		std::cout << "Sapphire blue cloak embroidered with teal leaves\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "30gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Socialite: \n";
		std::cout << "Proficiencies - Familiar (small dog), Seduction, *Performance (singing)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Small dog familiar*\n";
		std::cout << "Long slender sword\n";
		std::cout << "Stiletto [dagger]\n";
		std::cout << "Form-fitting chain mail armor\n";
		std::cout << "SIlvery white silk cloak and sapphire blue dress\n";
		std::cout << "Tear-drop silver earrings (10gp value)\n";
		std::cout << "High boots\n";
		std::cout << "2 purses\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "31gp\n";
		std::cout << "\n";
		std::cout << "* - Breed of elven hunting dog, fits in a purse.  Move 60', AC0, #AT 1, Dmg 1d3-1\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Intriguer: \n";
		std::cout << "Proficiencies - Eavesdropping, Lip Reading, *Performance (oration)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Long slender sword\n";
		std::cout << "Stiletto [dagger]\n";
		std::cout << "Light steel shield\n";
		std::cout << "Form-fitting chain mail armor\n";
		std::cout << "Midnight blue cassock\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "34gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Emissary: \n";
		std::cout << "Proficiencies - Mystic Aura, Riding, *Performance (epic poetry)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Whitewood lance\n";
		std::cout << "Gracefully curved sword\n";
		std::cout << "Light steel shield with Argollean house crest\n";
		std::cout << "Gleaming chain mail armor\n";
		std::cout << "Winged heavy helmet\n";
		std::cout << "Silvery white cloak embroidered with leaf motif\n";
		std::cout << "Sunset red armiger's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding tack and saddle\n";
		std::cout << "Saddlebags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "15gp\n\n\n";
	}
}

void elvenEnchanter(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(intelligence);
		requisiteCheckTwo = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Elven Enchanter\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Trickster: \n";
		std::cout << "Proficiencies - Passing Without Trace, Disguise, *Mimicry*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Spellbook with charm person and *slipperiness*\n";
		std::cout << "Oaken staff\n";
		std::cout << "Simple robe\n";
		std::cout << "Leather shoes\n";
		std::cout << "Small sack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Charlatan: \n";
		std::cout << "Proficiencies - Quiet Magic, Bargaining, *Performance (storytelling)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Fancy spellbook with Charm Person and *Magic Mouth*\n";
		std::cout << "Quarterstaff\n";
		std::cout << "Blue mage's cassock\n";
		std::cout << "Cloak with embroidered sigils\n";
		std::cout << "Fancy silver sash\n";
		std::cout << "Leather shoes\n";
		std::cout << "Backpack\n";
		std::cout << "4 tallow candles\n";
		std::cout << "Tinderbox\n";
		std::cout << "4 pints of rare wine in potion vials\n";
		std::cout << "Ornamental crystal ball (20gp value)\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Occultist: \n";
		std::cout << "Proficiencies - Sensing Power, Knowledge (occult), *Theology*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Black leather spellbook with Charm Person and *Choking Grip*\n";
		std::cout << "Silver dagger\n";
		std::cout << "Midnight blue robe\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "8gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Transmogrifier: \n";
		std::cout << "Proficiencies - Transmogrification, Naturalism, *Alchemy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Wood-paneled spellbook with Charm Person and *Chameleon*\n";
		std::cout << "Gnarled oaken quarterstaff\n";
		std::cout << "5 darts\n";
		std::cout << "Leaf green cassock with hood\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "57gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Antiquarian: \n";
		std::cout << "Proficiencies - Loremastery, Knowledge (history), *Language*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Well-kept spellbook with Charm Person and *Read Languages*\n";
		std::cout << "Rune-etched staff\n";
		std::cout << "Blue mage's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Parchment journal half-filled with entries\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "70gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Siren: \n";
		std::cout << "Proficiencies - Magical Music, Seduction, *Diplomacy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Silk stiched spellbook with Charm Person and *Ventriloquism*\n";
		std::cout << "Silver dagger\n";
		std::cout << "Blue silk cloak, veil, and sash\n";
		std::cout << "White silk dress\n";
		std::cout << "Long leather gloves\n";
		std::cout << "Silver bangles (10gp value)\n";
		std::cout << "Silver earrings (10gp value)\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "4gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Militant: \n";
		std::cout << "Proficiencies - Wakefulness, Military Strategy, *Manual of Arms*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Steel-bound spellbook with Charm Person and *Shield*\n";
		std::cout << "Iron-shod staff\n";
		std::cout << "2 silver daggers\n";
		std::cout << "10 darts\n";
		std::cout << "Leaf green armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "40gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Patrician: \n";
		std::cout << "Proficiencies - Unflappable Casting, Diplomacy, *Collegiate Wizardry*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bronze-framed spellbook with Charm Person and *Unseen Servant*\n";
		std::cout << "Quarterstaff tipped with glass gemstone (45gp value)\n";
		std::cout << "10 darts\n";
		std::cout << "Silk mage's cassock\n";
		std::cout << "Feathered hat\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "20gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}
}

void elvenNightblade(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(dexterity);
		requisiteCheckTwo = primeRequisite(intelligence);

		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Elven Nightblade\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Rogue: \n";
		std::cout << "Proficiencies - Prestidigitation, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Handmade shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Short sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Patched cloack\n";
		std::cout << "Stained tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Scuffed low boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Pursuer: \n";
		std::cout << "Proficiencies - Sniping, Tracking\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Bola\n";
		std::cout << "Gracefully curved sword\n";
		std::cout << "Dagger in boot sheath\n";
		std::cout << "Supple leather armor\n";
		std::cout << "Grey-green cloak\n";
		std::cout << "Dark tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Manacles\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Antagonist: \n";
		std::cout << "Proficiencies - Skirmishing, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Well-honed sword\n";
		std::cout << "Short sword\n";
		std::cout << "5 darts in bandoleer\n";
		std::cout << "2 daggers in boot sheathes\n";
		std::cout << "Scarred leather armor\n";
		std::cout << "Grey-green cloak\n";
		std::cout << "Dark tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "17gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Duelist-for-Hire: \n";
		std::cout << "Proficiencies - Fighting Style (two weapons), Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Dueling sword and short sword\n";
		std::cout << "2 throwing daggers\n";
		std::cout << "Sturdy leather armor\n";
		std::cout << "Duelist's cloak\n";
		std::cout << "Tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Silent Slayer: \n";
		std::cout << "Proficiencies - Skulking, ALchemy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "COmposite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Pair of gracefully curved short swords\n";
		std::cout << "Supple leather armor\n";
		std::cout << "Black cloak with hood and bandana\n";
		std::cout << "Black tunic and pants\n";
		std::cout << "Padded sandals\n";
		std::cout << "Backpack\n";
		std::cout << "2 large sacks\n";
		std::cout << "Crowbar\n";
		std::cout << "100' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "2 flasks of common oil\n";
		std::cout << "Small hammer";
		std::cout << "12 iron spikes";
		std::cout << "Wineskin";
		std::cout << "1 weeks' iron rations";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Arcane Avenger: \n";
		std::cout << "Proficiencies - Battle Magic, Collegiate Wizardry\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Short sword\n";
		std::cout << "Wavy-bladed silver dagger\n";
		std::cout << "Leather armor under midnight blue mage's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Spellbook (blank)\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Deceiver: \n";
		std::cout << "Proficiencies - Quiet Magic, Seduction\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Slender short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Coiled leather whip\n";
		std::cout << "Strappy leather armor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Elegant silk tunic and pants\n";
		std::cout << "Silk sash\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Manacles\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "30gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Royal Enforcer: \n";
		std::cout << "Proficiencies - Sensing Power, Diplomacy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Pair of gracefully curved short swords\n";
		std::cout << "Leather armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}
}

void elvenRanger(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(dexterity);
		requisiteCheckThree = primeRequisite(intelligence);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Elven Ranger\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Wanderer: \n";
		std::cout << "Proficiencies - Running, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Old spear\n";
		std::cout << "Hand axe\n";
		std::cout << "Battered leather armor\n";
		std::cout << "Deep cowled traveler's cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "LEather belt\n";
		std::cout << "Well-worn low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Trapper: \n";
		std::cout << "Proficiencies - Ambushing, Trapping\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Well-oiled longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Spear\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Sturdy low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Mariner: \n";
		std::cout << "Proficiencies - Swashbuckling, Seafaring\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Leather armor\n";
		std::cout << "Mariner's tunic and pants\n";
		std::cout << "Well-stitched sash\n";
		std::cout << "Embroidered high boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "Wineskin\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Hunter: \n";
		std::cout << "Proficiencies - Weapon Focus (bows/crossbows), Tracking\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Sturdy longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Leaf-headed spear\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Wind-battered fur cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Lantern\n";
		std::cout << "Tinderbox\n";
		std::cout << "2 flasks of common oil\n";
		std::cout << "Blanket";
		std::cout << "50' rope";
		std::cout << "12 iron spikes";
		std::cout << "Small hammer";
		std::cout << "Wineskin";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Woodland Stallker: \n";
		std::cout << "Proficiencies - Precise Shooting, Naturalism\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Net\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Hooded cloak\n";
		std::cout << "Dark tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "2 flasks of military oil\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Scout: \n";
		std::cout << "Proficiencies - Alertness, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "2 gracefully curved short swords\n";
		std::cout << "Hand axe\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Grey-green traveler's cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "50' rope\n";
		std::cout << "Grappling hook\n";
		std::cout << "Blanket\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Falconer: \n";
		std::cout << "Proficiencies - Skirmishing, Animal Training\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Leaf-headed spear\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Forest green cloak\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 lb garlic\n";
		std::cout << "50' rope\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches";
		std::cout << "2 trained hawks";
		std::cout << "2 weeks' iron rations";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Mounted Archer: \n";
		std::cout << "Proficiencies - Fighting Style (missile weapon), Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Light riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather saddlebags\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}
}

void elvenSpellsword(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(intelligence);
		if (requisiteCheckOne == true && requisiteCheckTwo == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Elven Spellsword\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Exile: \n";
		std::cout << "Proficiencies - Running, Survival, *Navigation*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Tattered spellbook with Darkness and *Slipperiness*\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Old short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Threadbare tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Beastmaster: \n";
		std::cout << "Proficiencies - Beast Friendship, Animal Husbandry, *Naturalism*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Hidebound spellbook with Sleep and *Chameleon*\n";
		std::cout << "Longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Gracefully curved short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Well-stitched fur armor\n";
		std::cout << "Thick wool cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Dreadsword: \n";
		std::cout << "Proficiencies - Black Lore of Zahar, Knowledge (occult), *Intimidation*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Black leather spellbook with Choking Grip and *Silent Step*\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Wickedly curved sword\n";
		std::cout << "2 well-balanced daggers with boot sheathes\n";
		std::cout << "Ring mail armor\n";
		std::cout << "Black cloak\n";
		std::cout << "Charcoal grey tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Bladesinger: \n";
		std::cout << "Proficiencies - Magical Music, Performance (singing), *Diplomacy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Embossed spellbook with Charm Person and *Read Languages*\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Two-handed sword with elaborate hilt\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Sea-green hooded cloak\n";
		std::cout << "Traveler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron ration\n";
		std::cout << "1gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Swordmage: \n";
		std::cout << "Proficiencies - Battle Magic, Military Strategy, *Manual of Arms*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Leather-bound spellbook with Magic Missile and *Sharpness*\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Gracefully curved sword and dagger\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Traverler's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Flametongue: \n";
		std::cout << "Proficiencies - Elementalism, Naturalism, *Survival*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Redwood spellbook with Burning Hands and *Shield*\n";
		std::cout << "Longbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Pair of gracefully curved swords\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "4 flasks of military oil\n";
		std::cout << "10gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Captain: \n";
		std::cout << "Proficiencies - Command, Leadership, *Military Strategy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Battle-scarred spellbook with Summon Berserkers and *Hold Portal*\n";
		std::cout << "Elven composite bow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Whitewood spear with leaf-head\n";
		std::cout << "Gracefully curved sword\n";
		std::cout << "Steel shield bearing house crest\n";
		std::cout << "Banded plate armor\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Winged Knight: \n";
		std::cout << "Proficiencies - Familiar (eagle), Riding, *Leadership*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Eagle Familiar\n";
		std::cout << "Finely-made spellbook with Protection from Evil and *Jump*\n";
		std::cout << "Lance with pennant\n";
		std::cout << "Polished sword\n";
		std::cout << "Steel shield bearing house crest\n";
		std::cout << "Banded plate armor with eagle feather wings (decorative)\n";
		std::cout << "Armiger's tunic and pants\n";
		std::cout << "High boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "10gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}
}

void zaharanRuinguard(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, requisiteCheckFour = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(intelligence);
		requisiteCheckThree = primeRequisite(wisdom);
		requisiteCheckFour = primeRequisite(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true && requisiteCheckFour == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Zaharan Ruinguard\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Flesheater: \n";
		std::cout << "Proficiencies - Kin-Slaying, Craft (cooking)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Serrated sword\n";
		std::cout << "Wooden shield\n";
		std::cout << "Curiously pale-colored hide armor\n";
		std::cout << "Blood-stained wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "3 weeks' dried white meat (iron rations)\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Hatemonger: \n";
		std::cout << "Proficiencies - Berserkergang, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Great axe tipped with spike\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Torn wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Grimguard: \n";
		std::cout << "Proficiencies - Fighting Style (weapon and shield), Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Jagged battle axe\n";
		std::cout << "Iron-shod shield\n";
		std::cout << "Grey banded plate armor\n";
		std::cout << "Grey hooded cloak\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "4gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Avenger: \n";
		std::cout << "Proficiencies - Sensing Good, Profession (torcherer)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Serrated sword\n";
		std::cout << "Copper-barbed scourge [whip]\n";
		std::cout << "Iron-shod shield\n";
		std::cout << "Grey plate armor\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Doomwielder: \n";
		std::cout << "Proficiencies - Fighting Style (two-handed weapon), Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Serrated two-handed sword\n";
		std::cout << "Barbed morning star\n";
		std::cout << "Plate armor adorned with skulls\n";
		std::cout << "Heavy skull helmet\n";
		std::cout << "Blood-stained wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Warmaster: \n";
		std::cout << "Proficiencies - Ambushing, Military Strategy\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Ball-and-chain [flail]\n";
		std::cout << "Black steel shield bearing taloned hand of Bel\n";
		std::cout << "Black plate armor\n";
		std::cout << "Heavy horned helmet\n";
		std::cout << "Black armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Crowbar\n";
		std::cout << "Tinderbox\n";
		std::cout << "12 torches\n";
		std::cout << "1 flask of military oil\n";
		std::cout << "50' rope\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Ruinbinder: \n";
		std::cout << "Proficiencies - Familiar, Knowledge (occult)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Vulture familiar\n";
		std::cout << "Rune-carved two-handed sword\n";
		std::cout << "Red-lacquered plate armor\n";
		std::cout << "Heavy helmet with crimson crest\n";
		std::cout << "Red armiger's tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 flasks of unholy water\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Shadowcrown: \n";
		std::cout << "Proficiencies - Command, Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Polished sword\n";
		std::cout << "Black steel shield bearing red eye of fire\n";
		std::cout << "Black plate armor\n";
		std::cout << "Heavy helmet affixed with black iron crown\n";
		std::cout << "Black armiger's tunic and pants\n";
		std::cout << "Riding boots\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "2 weeks' iron rations\n\n\n";
	}
}

void thrassianGladiator(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(strength);
		requisiteCheckTwo = primeRequisite(constitution);
		requisiteCheckThree = primeRequisite(dexterity);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Thrassian Gladiator\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Runaway: \n";
		std::cout << "Proficiencies - Ambushing, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Spiked club\n";
		std::cout << "2 javelins\n";
		std::cout << "5 barbed darts\n";
		std::cout << "Round wooden shield\n";
		std::cout << "Leather armor\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Small sack\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "3gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Rampager: \n";
		std::cout << "Proficiencies - Berserkergang, Intimidation\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Great axe tipped with spike\n";
		std::cout << "Leather scale armor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Small sack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "7gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Beastfighter: \n";
		std::cout << "Proficiencies - Skirmishing, Animal Training\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "Hunting spear\n";
		std::cout << "Pair of short swords\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Small sack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "6gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Manhunter: \n";
		std::cout << "Proficiencies - Kin-Slayer, Tracking\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bola\n";
		std::cout << "Razor-sharp trident [pole arm]\n";
		std::cout << "Weighted net\n";
		std::cout << "Serrated short sword\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Small sack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "37gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Arena Veteran: \n";
		std::cout << "Proficiencies - Combat Reflexes, Endurance\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Gilded sword\n";
		std::cout << "Large steel shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Plumed heavy helmet with visor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Backpack\n";
		std::cout << "Amphora of oil (for polishing body)\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "25gp in arena winnings\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Prizefighter: \n";
		std::cout << "Proficiencies - Weapon Focus (sword and dagger), Gambling\n\n";
		std::cout << "Equipment:\n";
		std::cout << "2 gilded swords\n";
		std::cout << "Large steel shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Plumed heavy helmet with visor\n";
		std::cout << "Leather cloack\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Backpack\n";
		std::cout << "Amphora of oil (for polishing body)\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "\n";
		std::cout << "42gp in arena winnings\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Gladiator Trainer: \n";
		std::cout << "Proficiencies - Fighting Style (weapon and shield), Manual of Arms\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Trainer's whip\n";
		std::cout << "Razor-sharp trident [pole arm]\n";
		std::cout << "Weighted net\n";
		std::cout << "2 gilded swords\n";
		std::cout << "Large steel shield\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Plumed heavy helmet with visor\n";
		std::cout << "Leather cloak\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Backpack\n";
		std::cout << "Amphora of oil (for polishing body)\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "42gp in arena winnings\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Slaver: \n";
		std::cout << "Proficiencies - Combat Trickery (incapacitate), Riding\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bola\n";
		std::cout << "5 barbed darts\n";
		std::cout << "Slaver's whip\n";
		std::cout << "Mancatcher [pole arm]\n";
		std::cout << "Weighted net\n";
		std::cout << "Chain mail armor\n";
		std::cout << "Loincloth\n";
		std::cout << "High sandals\n";
		std::cout << "Small sack\n";
		std::cout << "Slave laborer* (40gp value)\n";
		std::cout << "Medium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Leather bags\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "18gp\n\n";
		std::cout << "Slave laborer is a normal man (AC 0, Move 120', HD 1/2, HP 3, #AT 1, Dmg by weapon, ML -4(\n\n\n";
	}
}

void nobiranWonderworker(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, requisiteCheckFour = false, requisiteCheckFive = false, requisiteCheckSix = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = wwRequirement(strength);
		requisiteCheckTwo = wwRequirement(dexterity);
		requisiteCheckThree = wwRequirement(constitution);
		requisiteCheckFour = wwRequirement(intelligence);
		requisiteCheckFive = wwRequirement(wisdom);
		requisiteCheckSix = wwRequirement(charisma);

		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true && requisiteCheckFour == true && requisiteCheckFive == true && requisiteCheckSix == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Nobiran Wonderworker\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Ferine: \n";
		std::cout << "Proficiencies - BEast Friendship, Naturalism, *Survival*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Tattered spellbook with Slipperiness and *Chameleon*\n";
		std::cout << "Gnarled oaken staff\n";
		std::cout << "Simple robe\n";
		std::cout << "Leather shoes\n";
		std::cout << "Belt pouch\n";
		std::cout << "Fiercely loyal hunting dog\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "2gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Augur: \n";
		std::cout << "Proficiencies - Prophecy, Performance (storytelling), *Theology*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Rolled papyrus spellbook with Charm Person and *Magic Mouth*\n";
		std::cout << "Elaborately-carved staff\n";
		std::cout << "Blue robe with crescents\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Ornamental crystal ball (20gp value)\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Corrupted Soul: \n";
		std::cout << "Proficiencies - Apostasy, Alchemy, *Knowledge (occult)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-bound snakeskin spellbook with Choking Grip and *Darkness*\n";
		std::cout << "Unholy symbol (serpent of Saqqara [Iskra])\n";
		std::cout << "Curved sacrificial dagger\n";
		std::cout << "Grey robes\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "10gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Servant of Fire: \n";
		std::cout << "Proficiencies - Elementalism (Fire), Theology, *Naturalism*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Red leather spellbook with Burning Hands and *Shield*\n";
		std::cout << "Holy symbol (ivory torch of Mityara)\n";
		std::cout << "Gnarled oaken quarterstaff\n";
		std::cout << "5 darts\n";
		std::cout << "Flame red cassock with hood\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "7gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Astrologer: \n";
		std::cout << "Proficiencies - Sensing Power, Knowledge (astrology), *Collegiate Wizardry*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Bronze-framed spellbook with Sleep and *Detect Magic*\n";
		std::cout << "Holy symbol (ankh of Teos [Istreus])\n";
		std::cout << "Rune-etched staff\n";
		std::cout << "Blue mage's cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Flask of holy water\n";
		std::cout << "Astrologer's journal tracking constellations\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "20gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Inceptor: \n";
		std::cout << "Proficiencies - Transmogrification, Healing, *Alchemy*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Rolled papyrus spellbook with Summon Berserkers and *Unseen Servant*\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Silver dagger\n";
		std::cout << "Purple cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "25gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Wrathbringer: \n";
		std::cout << "Proficiencies - Martial Training (axes), Military Strategy, *Profession (judge)*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Iron-shod spellbook with Magic Missile and *Sharpness*\n";
		std::cout << "Holy symbol (axe of Indura [Ianna])\n";
		std::cout << "Battle axe\n";
		std::cout << "2 hand axes\n";
		std::cout << "Red and gold cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "Flask of holy water\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "27gp\n";
		std::cout << "\n";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Messiah: \n";
		std::cout << "Proficiencies - Contemplation, Diplomacy, *Leadership*\n\n";
		std::cout << "Equipment:\n";
		std::cout << "White leather spellbook with Protection from Evil and *Light*\n";
		std::cout << "Holy symbol (winged sun of Ammonar)\n";
		std::cout << "Quarterstaff tipped with glass gemstone (45gp value)\n";
		std::cout << "White cassock\n";
		std::cout << "Leather belt\n";
		std::cout << "Leather gloves\n";
		std::cout << "High boots\n";
		std::cout << "Backpack\n";
		std::cout << "Quill and ink\n";
		std::cout << "MEdium riding horse\n";
		std::cout << "Riding saddle and tack\n";
		std::cout << "Saddlebags\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "14gp\n";
		std::cout << "";
		std::cout << "Proficiency and spell in asterisks are if character has high enough INT\n\n\n";
	}
}

void gnomishTrickster(void)
{
	int templateChoice = rollStats(), strength = 0, dexterity = 0, constitution = 0, intelligence = 0, wisdom = 0, charisma = 0, pickClass = 0, health = 0, healthTemp = 0;
	bool requisiteCheckOne = false, requisiteCheckTwo = false, requisiteCheckThree = false, charDone = false; //used to determine if the while loop can exit or not

	while (charDone == false)
	{
		strength = rollStats();
		dexterity = rollStats();
		constitution = rollStats();
		intelligence = rollStats();
		wisdom = rollStats();
		charisma = rollStats();

		requisiteCheckOne = primeRequisite(constitution);
		requisiteCheckTwo = primeRequisite(intelligence);
		requisiteCheckThree = primeRequisite(charisma);
		if (requisiteCheckOne == true && requisiteCheckTwo == true && requisiteCheckThree == true)
		{
			charDone = true;
		}

		else
		{
			charDone = false;
		}
	}

	healthTemp = ((rand() % 6 + 1) + modifier(constitution));

	if (healthTemp > 0)
	{
		health = healthTemp;
	}

	else
	{
		health = 1;
	}

	std::cout << "Class: Gnomish Trickster\n";
	std::cout << "HP: " << health << "\n";
	std::cout << "STR: " << strength << "\n";
	std::cout << "DEX: " << dexterity << "\n";
	std::cout << "CON: " << constitution << "\n";
	std::cout << "INT: " << intelligence << "\n";
	std::cout << "WIS: " << wisdom << "\n";
	std::cout << "CHA: " << charisma << "\n\n";

	if (templateChoice == 3 || templateChoice == 4)
	{
		std::cout << "Wastrel: \n";
		std::cout << "Proficiencies - Skrimishing, Survival\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "War hammer\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Cheap wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Scuffed low boots\n";
		std::cout << "Backpack\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 5 || templateChoice == 6)
	{
		std::cout << "Know-It-All: \n";
		std::cout << "Proficiencies - Loremastery, Knowledge (trivia)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "War hammer\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Meticulous wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Carefully-detailed journal\n";
		std::cout << "Quill and ink\n";
		std::cout << "2 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 7 || templateChoice == 8)
	{
		std::cout << "Tinker: \n";
		std::cout << "Proficiencies - Magical Engineering, Craft (tinkering)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Shortbow\n";
		std::cout << "Quiver with 20 arrows\n";
		std::cout << "War hammer\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Stained wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Tinker's tools\n";
		std::cout << "Crowbar\n";
		std::cout << "Small hammer\n";
		std::cout << "12 iron spikes\n";
		std::cout << "Hand-sized mirror\n";
		std::cout << "Tinderbox";
		std::cout << "12 torches";
		std::cout << "2 weeks' iron rations";
		std::cout << "4gp\n\n\n";
	}

	else if (templateChoice == 9 || templateChoice == 10)
	{
		std::cout << "Performer: \n";
		std::cout << "Proficiencies - Unflappable Casting, Performance (acting)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword with lacquered hilt\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Dyed and patched wool tunic\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Journal with plays\n";
		std::cout << "Quill and ink\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "2gp\n\n\n";
	}

	else if (templateChoice == 11 || templateChoice == 12)
	{
		std::cout << "Mummer: \n";
		std::cout << "Proficiencies - Quiet Magic, Disguise\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Crossbow\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Blackened short sword\n";
		std::cout << "Blackened dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Mummer's mask\n";
		std::cout << "Wool tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Disguise kit\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "10gp\n\n\n";
	}

	else if (templateChoice == 13 || templateChoice == 14)
	{
		std::cout << "Jongleur: \n";
		std::cout << "Proficiencies - Magical Music, Performance (instrument)\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "4 throwing daggers\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Colorful wool tunic and pants\n";
		std::cout << "Jongleur's cap\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Zither [stringed musical instrument]\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "1gp\n\n\n";
	}

	else if (templateChoice == 15 || templateChoice == 16)
	{
		std::cout << "Voluptuary: \n";
		std::cout << "Proficiencies - Mystic Aura, Seduction\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "SHort sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Feathered hat\n";
		std::cout << "Expensive linen tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "4 pints of rare wine\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "47gp\n\n\n";
	}

	else if (templateChoice == 17 || templateChoice == 18)
	{
		std::cout << "Swindler: \n";
		std::cout << "Proficiencies - Bribery, Bargaining\n\n";
		std::cout << "Equipment:\n";
		std::cout << "Arbalest\n";
		std::cout << "Case with 20 bolts\n";
		std::cout << "Short sword\n";
		std::cout << "Dagger\n";
		std::cout << "Leather armor\n";
		std::cout << "Embroidered cloak\n";
		std::cout << "Well-made linen tunic and pants\n";
		std::cout << "Leather belt\n";
		std::cout << "Low boots\n";
		std::cout << "Backpack\n";
		std::cout << "Mule\n";
		std::cout << "Draft harness and tack\n";
		std::cout << "Gaudily painted peddler's cart\n";
		std::cout << "1 weeks' iron rations\n";
		std::cout << "20gp\n\n\n";
	}
}