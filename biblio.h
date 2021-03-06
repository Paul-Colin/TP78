#ifndef BIBLIO_H   //compilation conditionnelle
#define BIBLIO_H


#include "livre.h"

#define CAPACITE_BIBLIO 20 // nb maximum de livres ds la bibliotheque

typedef  T_livre 	T_tabloDeLivres[CAPACITE_BIBLIO];

typedef struct
{
	T_tabloDeLivres etagere;
	int nbLivres;  //nb de livres actuellement ds la bibliotheque

} T_Bibliotheque;




//prototypes
void init (T_Bibliotheque *ptrB);
int ajouterLivre(T_Bibliotheque  *ptrB);
int  afficherBibliotheque(const T_Bibliotheque  *ptrB);
int rechercherTitre(T_Bibliotheque *ptrB,char *rechercheT);
int rechercherAuteur(T_Bibliotheque *ptrB,char *rechercheA);
int emprunter(T_Bibliotheque *ptrB ,char *rechercheT,char *rechercheA) ;
int supprimer(T_Bibliotheque *ptrB, char *rechercheT,char *rechercheA) ;
int restituer(T_Bibliotheque *ptrB ,char *rechercheT,char *rechercheA);
void tri_titre(T_Bibliotheque *ptrB); 
void tri_auteur(T_Bibliotheque *ptrB);
void tri_annee(T_Bibliotheque *ptrB);
void chargement(T_Bibliotheque *ptrB) ;
void sauvegarde(T_Bibliotheque *ptrB) ;
void lireDateSysteme(T_Emp *E);
void afficherLivreEmp(T_livre *L);
void LivreDispo(T_Bibliotheque *ptrB);



#endif
