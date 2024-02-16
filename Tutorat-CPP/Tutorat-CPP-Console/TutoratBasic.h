#pragma once
#include <iostream>
#include <vector>

// Un fichier .h contient une classe et la liste de ses champs et m�thodes (fonctions)
// Seule "la signature" des fonctions est pr�sente dans un fichier .h
// Il faudra inscrire sa "d�claration" dans le fichier .cpp (voir tuto l�-bas)

// Qu'est-ce que la signature d'une fonction ?
// C'est ce qui d�termine le type qu'elle renvoie, son nom et les potentiels param�tres qu'elle prends.
// [type] [nom]([param�tres])
// Exemple : void Test(int)

// Comment pr�ciser l'accessibilit� ?
// En c#, on �crirait l'accessibilit� ainsi : private void Test(int)
// En c++, on range les donn�es par accessibilit� (voir la classe ci-dessous)

class TutoratBasic
{
private:
	// Toutes les donn�es inscrites ici seront private

	// Cr�ation d'un vector (= liste en c#) : std::vector<[type]> [nom];
	// Un include est n�cessaire.
	std::vector<int> _numbers;

protected:
	// Toutes les donn�es inscrites ici seront protected

public:
	// Toutes les donn�es inscrites ici seront public
	void HelloWorld();
};