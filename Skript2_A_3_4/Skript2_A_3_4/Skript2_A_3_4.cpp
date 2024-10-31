#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <errno.h>

struct Person
{
    std::string pnummer;
    std::string name;
    std::string vorname;
    std::string adresse;
    std::string hnummer;
    std::string plz;
    std::string ort;
    std::string mail;
    std::string telefon;
};

std::vector<Person> akte;

void speichern(std::vector<Person>& person, std::string dateiname)
{
    FILE* datei;
    errno_t err;
    
    err = fopen_s(&datei,dateiname.c_str(), "w");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return;
    }

    for (int i = 0; i < person.size(); i++)
    {
        fprintf(datei, "PERSONALNUMMER = %s \n NAME = %s \n VORNAME = %s \n ADRESSE = %s \n HAUSNUMMER = %s \n PLZ = %s \n ORT = %s \n E-Mail = %s \n TELEFON = %s",
            person[i].pnummer, person[i].name, person[i].vorname, person[i].adresse, person[i].hnummer, person[i].plz, person[i].ort, person[i].mail, person[i].telefon);
    }
    
}

void laden(std::vector<Person> &person, std::string  dateiname)
{
    FILE* datei;
    errno_t err;

    err = fopen_s(&datei, dateiname.c_str(), "w");
    if (datei == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return;
    }

}

bool pnummerExists(const std::vector<Person>& akte, const std::string pnummer)
{
    for (int i = 0; i < akte.size(); i++)
    {
        if (akte[i].pnummer == pnummer)
        {
            std::cout << "Die Personalnummer " << pnummer << " wird bereits verwendet!\n";
            return true;
        }
    }
    return false;
}


bool nameValid(std::string name)
{
    for (char a : name)
    {
        if (!isalpha(a) && !isspace(a))
        {
            std::cout << "Das Zeichen " << a << " ist nicht in dieser Kategorie erlaubt!" << std::endl;
            return false;
        }
    }
    return true;
}

bool nummerValid(std::string nummer)
{
    for (char a : nummer)
    {
        if (!isdigit(a))
        {
            std::cout << "Das Zeichen " << a << " ist nicht in dieser Kategorie erlaubt!" << std::endl;
            return false;
        }
    }
    return true;
}

bool adresseValid(std::string adresse)
{
    char special[] = { '@', '!', '?', '_', '+', '#', ',' };
    for (char a : adresse)
    {
        if (std::find(std::begin(special), std::end(special), a) != std::end(special))
        {
            std::cout << "Das Zeichen " << a << " ist nicht in dieser Kategorie erlaubt!" << std::endl;
            return false;
        }
    }
    return true;
}

bool plzValid(std::string plz)
{
    for (char a : plz)
    {
        if (!isdigit(a))
        {
            std::cout << "Das Zeichen " << a << " ist nicht in dieser Kategorie erlaubt!" << std::endl;
            return false;
        }
    }
    return true;
}

bool mailValid(std::string mail)
{
    bool vorhanden = false;
    bool punkt = false;
    for (char a : mail)
    {
        if (a == '@')
        {
            if (vorhanden)
            {
                std::cout << "Das Zeichen " << a << " darf nicht mehrmals vorkommen!" << std::endl;
                return false;
            }
            vorhanden = true;
        }
        if (a == '.')
        {
            punkt = true;
        }
    }
    if (vorhanden && punkt)
    {
        return true;
    }
    else
    {
        std::cout << "Sie haben einen '.' oder '@' Zeichen in Ihrer E-Mail-Adresse vergessen!" << std::endl;
        return false;
    }
}

void displayPerson(Person person)
{
    std::cout << "Personal-Nummer: " << person.pnummer << "\n"
        << "Name: " << person.name << "\n"
        << "Vorname: " << person.vorname << "\n"
        << "Adresse: " << person.adresse << " " << person.hnummer << "\n"
        << "PLZ: " << person.plz << "\n"
        << "Ort: " << person.ort << "\n"
        << "E-Mail: " << person.mail << "\n"
        << "Telefon: " << person.telefon << "\n"
        << "-----------------------\n";
}

int main()
{
    system("chcp 65001>NUL");

    std::locale::global(std::locale("de_DE.UTF-8"));
    
    char cwahl = 'y';
    int wahl;

    //laden(akte, "PERSONENAKTE.txt");


    do
    {
        std::cout << "\nMenue:\n";
        std::cout << "1. Daten einer Person eingeben\n";
        std::cout << "2. Personen aus der Akte auflisten\n";
        std::cout << "Bitte wählen Sie eine Option: ";
        std::cin >> wahl;
        std::cin.ignore();

        if (wahl == 1)
        {
            std::string pnummer, name, vorname, hnummer, adresse, plz, ort, mail, telefon;

            std::cout << "Geben Sie Ihre Personalnummer ein: ";
            std::getline(std::cin, pnummer);
            while (!nummerValid(pnummer) || pnummerExists(akte,pnummer))
            {
                if (!nummerValid(pnummer))
                    std::cout << "Geben Sie eine gueltige Personalnummer ein!\n";
                std::cout << "Geben Sie eine nicht verwendete Personalnummer ein: ";
                std::getline(std::cin, pnummer);
            }

            std::cout << "Geben Sie Ihren Namen ein (Nachname): ";
            std::getline(std::cin, name);
            while (!nameValid(name))
            {
                std::cout << "Geben Sie einen gueltigen Namen ein!\n";
                std::getline(std::cin, name);
            }

            std::cout << "Geben Sie Ihren Vornamen ein: ";
            std::getline(std::cin, vorname);
            while (!nameValid(vorname))
            {
                std::cout << "Geben Sie einen gueltigen Vornamen ein!\n";
                std::getline(std::cin, vorname);
            }

            std::cout << "Geben Sie Ihre Adresse an: ";
            std::getline(std::cin, adresse);
            while (!adresseValid(adresse))
            {
                std::cout << "Geben Sie eine gueltige Adresse ein!\n";
                std::getline(std::cin, adresse);
            }

            std::cout << "Geben Sie Ihre Hausnummer an: ";
            std::getline(std::cin, hnummer);
            while (!nummerValid(hnummer))
            {
                std::cout << "Geben Sie eine gueltige Hausnummer ein!\n";
                std::getline(std::cin, hnummer);
            }

            std::cout << "Geben Sie Ihre Postleitzahl an: ";
            std::getline(std::cin, plz);
            while (!plzValid(plz))
            {
                std::cout << "Geben Sie eine gueltige Postleitzahl ein!\n";
                std::getline(std::cin, plz);
            }

            std::cout << "Geben Sie Ihren Wohnort an: ";
            std::getline(std::cin, ort);
            while (!nameValid(ort))
            {
                std::cout << "Geben Sie einen gueltigen Wohnort ein!\n";
                std::getline(std::cin, ort);
            }

            std::cout << "Geben Sie Ihre E-Mail an: ";
            std::getline(std::cin, mail);
            while (!mailValid(mail))
            {
                std::cout << "Geben Sie eine gueltige E-Mail ein!\n";
                std::getline(std::cin, mail);
            }

            std::cout << "Geben Sie Ihre Telefonnummer an: ";
            std::getline(std::cin, telefon);
            while (!nummerValid(telefon))
            {
                std::cout << "Geben Sie eine gueltige Hausnummer ein!\n";
                std::getline(std::cin, telefon);
            }

            akte.push_back(Person{ pnummer, name, vorname, adresse, hnummer, plz, ort, mail });

            speichern(akte, "PERSONENAKTE.txt");
            
            std::cout << "Person erfolgreich hinzugefuegt.\n";
        }
        else if (wahl == 2)
        {
            int pwahl;
            std::cout << "\nListe der Personen:\n";
            for (auto p : akte)
            {
                std::cout << p.pnummer << ". " << p.name << std::endl;
            }
            std::cout << std::endl << "Waehlen Sie eine Person basierend auf deren Personalnummer (00 -> 0; 01 -> 1...): ";
            std::cin >> pwahl;
            std::cout << "\n-----------------------";
            if (pwahl >= 0 && pwahl < akte.size())
            {
                displayPerson(akte[pwahl]);
            }
            else
            {
                std::cout << "Ungueltige Auswahl!" << std::endl;
            }
        }
        else
        {
            std::cout << "Ungueltige Wahl. Bitte versuchen Sie es erneut." << std::endl;
        }

        std::cout << "\nWollen Sie zurueck zum Menue? (y/n): ";
        std::cin >> cwahl;
        std::cin.ignore();
    } while (cwahl != 'n');

    return 0;
}