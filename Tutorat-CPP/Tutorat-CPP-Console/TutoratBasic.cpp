#include "TutoratBasic.h"

// Un fichier .cpp contient "les d�finitions" des m�thodes d'une classe.
// On utilise la signature d'une fonction en pr�cisant le nom de ses param�tres et son corps.
// Attention, en cpp, il faut pr�ciser le nom de la classe devant le nom de la fonction.
// Exemple : void MyClass::MyFunction(int myParam) { [corps de la fonction] }

void TutoratBasic::MyFunction(int myParam) { /* Corps de la fonction */ }

// Ici, myParam est appel� un param�tre de la fonction MyFunction.
// En revanche, lorsqu'on appelle la fonction, les variables ajout�es entre parenth�se
// sont nomm�es des "arguments". On dit qu'un argument est pass� en param�tre d'une fonction.
// https://developer.mozilla.org/fr/docs/Glossary/Parameter

TutoratBasic::TutoratBasic()
{
    // La d�finition du constructeur de la classe.
}

void TutoratBasic::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.
}

// ----- UTILISER LA CONSOLE -----
void TutoratBasic::UseConsole()
{
    // -- Pour tester cette fonction, appelle-la dans TestFunctionsHere().

    // En c++, il existe deux moyens d'afficher des informations dans la console.
    // Le plus simple est d'utiliser std::cout.

    std::cout << "Hello World" << std::endl;

    // Le std::endl permet de retourner � la ligne.

    // Il est �galement possible d'utiliser printf. Ici, c'est le "\n" qui permet de retourner � la ligne.

    printf("Hello World\n");

    // La particularit� du printf est qu'il peut afficher des variables o� on le souhaite dans le string.
    // Par d�faut, il doit forc�ment prendre un string en param�tre.

    printf("My int variable : %i\n", 10);
    printf("My first int variable : %i, and my second : %i\n", 10, 20);

    // https://cplusplus.com/reference/cstdio/printf/

    // Il est possible de prendre les inputs utilisateurs gr�ce � std::cin.
    // Le programme s'arr�te tant que l'utilisateur n'a pas entr� d'input.
    // On stocke l'input dans une variable cr��e pr�c�demment.

    std::string input;
    std::cin >> input;
    std::cout << "You typed : " << input << std::endl;
}

// ----- EXERCICES : MATHS BASIQUES -----
// 
// -- Cr�er une fonction qui prends deux int en param�tres, les additionne et retourne le r�sultat.

// -- Cr�er une fonction qui prends deux int en param�tres, les multiplie et retourne le r�sultat.

// -- Cr�er une fonction qui prends un int en param�tre, y ajoute 10 et retourne le r�sultat.

// -- Cr�er une fonction qui prends deux int en param�tre, y ajoute 5 sur le premier et 6 sur le second et retourne le int le plus �lev�.
// Il est possible de d�clarer plusieurs variables du m�me type sur une seule ligne.
// https://www.w3schools.com/cpp/cpp_variables_multiple.asp

// -- Cr�er une fonction qui prends un int en param�tre, et retourne un bool si oui ou non ce int est strictement inf�rieur � 10.

// -- Cr�er une fonction qui prends un int en param�tre, et retourne un bool si oui ou non ce int est �gal 10.

// -- Cr�er une fonction qui prends un int en param�tre. Si le int est �gal � 2, on arr�te tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le r�sultat.

// -- Reprenons la toute premi�re fonction cr��e dans cette section pour cr�er une fonction surcharg�e qui va additionner
// deux float pass�s en param�tre. Ainsi, nous pourrons appeler la m�me fonction, que ce soit pour des int ou des float.
// https://www.w3schools.com/cpp/cpp_function_overloading.asp

// -- Cr�er une fonction qui prends un int en param�tre et l'incr�mente de 1.
// Ensuite, tant que ce int n'est pas �gal ou sup�rieur � 10, la fonction est relanc�e.
// C'est ce que l'on appelle une fonction r�cursive.
// https://www.programiz.com/cpp-programming/recursion

// ----- EXERCICES : STRINGS -----

// -- Cr�er une fonction qui prends un string en param�tre, et en retourne un string compos� du param�tre pr�c�d� de "Hello ".

// -- Cr�er une fonction qui prends un string en param�tre, et en retourne sa longueur.
// https://www.w3schools.com/cpp/cpp_strings_length.asp

// -- Cr�er une fonction qui prends un string en param�tre, et retourne un bool si oui ou non sa longueur est sup�rieure � 8.

// -- Cr�er une fonction qui prends un string en param�tre, et en retourne sa premi�re lettre.
// https://www.w3schools.com/cpp/cpp_strings_access.asp

// Note : un string est en r�alit� un array de char. Il est donc possible de manipuler un string
// en se d�pla�ant d'index en index.
void StringArray()
{
    std::string hello = "Hello";
    char c = hello[3];
    hello[0] = 'A';
}

// -- Cr�er une fonction qui prends un string en param�tre, �change sa premi�re et derni�re lettre puis retourne le r�sultat.
// Pour obtenir la derni�re lettre d'un string, le plus simple est d'utiliser sa longueur.
// La derni�re lettre d'un string est �quivalent � sa longueur - 1.