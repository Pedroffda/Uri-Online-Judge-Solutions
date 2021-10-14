#include <stdio.h>
#include <string.h>

int main()
{
	char animal[20];
	
	scanf("%s", animal);
	
	if (strcmp(animal, "vertebrado") == 0)
	{
		scanf("%s", animal);
		if (strcmp(animal, "ave") == 0)
		{
			scanf("%s", animal);
			if (strcmp(animal, "carnivoro") == 0)
			{printf("aguia\n");}
			if (strcmp(animal, "onivoro") == 0)
			{printf("pomba\n");}
			
		}
		if (strcmp(animal, "mamifero") == 0)
		{
			scanf("%s", animal);
			if (strcmp(animal, "onivoro") == 0)
			{printf("homem\n");}
			if (strcmp(animal, "herbivoro") == 0)
			{printf("vaca\n");}
		}
	}
	
	else if (strcmp(animal, "invertebrado") == 0)
	{
		scanf("%s", animal);
		if (strcmp(animal, "inseto") == 0)
		{
			scanf("%s", animal);
			if (strcmp(animal, "hematofago") == 0)
			{printf("pulga\n");}
			if (strcmp(animal, "herbivoro") == 0)
			{printf("lagarta\n");}
		}
		if (strcmp(animal, "anelideo") == 0)
		{
			scanf("%s", animal);
			if (strcmp(animal, "hematofago") == 0)
			{printf("sanguessuga\n");}
			if (strcmp(animal, "onivoro") == 0)
			{printf("minhoca\n");}
		}
	}		
		
	return 0;
}
