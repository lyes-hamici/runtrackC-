#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Note {
    string nom;
    string prenom;
    double note;
};

void ajouterNote(vector<Note>& listeNotes) {
    Note nouvelleNote;
    cout << "Entrez le nom de l'etudiant : ";
    cin >> nouvelleNote.nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> nouvelleNote.prenom;
    cout << "Entrez la note de l'etudiant : ";
    cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    cout << "Note ajoutee avec succes." << endl;
}

void afficherListeNotes(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
    } else {
        cout << "Liste des notes :" << endl;
        for (const auto& note : listeNotes) {
            cout << note.nom << " " << note.prenom << " : " << fixed << setprecision(2) << note.note << endl;
        }
    }
}

void supprimerNoteEtudiant(vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
        return;
    }
    string nom, prenom;
    cout << "Entrez le nom de l'etudiant dont vous voulez supprimer la note : ";
    cin >> nom;
    cout << "Entrez le prenom de l'etudiant : ";
    cin >> prenom;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            cout << "Note de l'etudiant supprimee avec succes." << endl;
            return;
        }
    }
    cout << "Aucune note trouvee pour cet etudiant." << endl;
}

void afficherMoyenneNotes(const vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        cout << "La liste des notes est vide." << endl;
        return;
    }
    double somme = 0.0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    double moyenne = somme / listeNotes.size();
    cout << "Moyenne des notes : " << fixed << setprecision(2) << moyenne << endl;
}

int main() {
    vector<Note> listeNotes;
    int choix;
    do {
        cout << "\nMenu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste des notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Choix : ";
        cin >> choix;
        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNoteEtudiant(listeNotes);
                break;
            case 4:
                afficherMoyenneNotes(listeNotes);
                break;
            case 5:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide. Veuillez reessayer." << endl;
        }
    } while (choix != 5);
    return 0;
}