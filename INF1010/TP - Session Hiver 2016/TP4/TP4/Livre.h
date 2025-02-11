/****************************************************************************
* Fichier: Livre.h
* Auteur: PolySensei & Associates
* Date: 22 f�vrier 2016
* Mise a jour : 3 mars 2016
* Description: D�finition de la classe Livre
****************************************************************************/
#ifndef LIVRE_H
#define LIVRE_H
#include "ObjetEmpruntable.h"


class Livre :
	public ObjetEmpruntable
{
public:
	Livre();
	Livre(const std::string& cote, const std::string& titre, unsigned int annee,
		unsigned int ageMin, unsigned int nbExemplaires, const std::string& auteur, const std::string& genre);
	virtual ~Livre();

	std::string obtenirAuteur() const;
	std::string obtenirGenre() const;

	void modifierAuteur(std::string const& auteur);
	void modifierGenre(std::string const& genre);

	//recherche renvoie true si motsCle est pr�sent dans les attributs de type string; false sinon
	virtual bool recherche(const std::string& motsCle) const; // Vincent : virtual - red�finit dans LivreNumerique.

	friend std::ostream& operator<<(std::ostream& o, const Livre& livre);

protected :
	std::string auteur_;
	std::string genre_;
};

#endif