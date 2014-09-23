#include <iostream>
#include <string>
using namespace std;

// Foncteur qui effectue un chiffrement par decalage
class ChiffrementDecal{

public:

  // Constructeur prenant le decalage voulu en argument
  ChiffrementDecal(int decalage)
  { 
	  
     // A vous de jouer...
	  m_decalage=decalage;
  }


  string crypt(string text)
  {
	  string textcrypt("");
	   const char * c2;
	   c2=text.c_str();
	  for(int i=0;i<text.size();i++)
	  {
		  int decalage= (c2[i]+m_decalage)-65;
		  int reste=decalage%26;
		  char ch=char(65+reste);
		  
		textcrypt=textcrypt+ch;
	  }
	  return textcrypt;
  }
  // A vous de jouer...

private:
 
  int m_decalage; // Le decalage a appliquer au texte
  
};


int main()
{
  
  // Le message a crypter
  string texte("BIENVENUE SUR LE MOOC C++ D'OCR !!");

  // Demande du decalage a l'utilisateur
  cout << "Quel decalage voulez-vous utiliser ? ";
  int decalage;
  cin >> decalage;

  // Creation du foncteur
  ChiffrementDecal foncteur(decalage);

  // Chaine de caracteres pour le message crypter
  string texte_crypte;

  texte_crypte=foncteur.crypt(texte);

  cout<<texte_crypte<<endl;
  // A vous de jouer.... 

  
  return 0;
}

