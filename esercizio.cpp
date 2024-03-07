#include <stdio.h>
//dichiarazione funzione
int partita();

int main() {

    char scelta;
    // opzioni del giocatore
    printf("\n\nBenvenuto! Cosa vuoi fare?\n\nA) Iniziare una nuova partita\n\nB) Uscire dal gioco\n\n");
    printf("Inserisci la lettera maiuscola corrispondente: ");
    
    scanf(" %c", &scelta);  
    // opzione inizio nuova partita
    if (scelta == 'A') {

        partita();
    }
    //opzione uscita dal gioco
    else if (scelta == 'B') {

        printf("\nUscita in corso, grazie per aver giocato.\n\n");

        return 0;
    }
    //opzione nel caso in cui si sbaglia a inserire la lettera corrispondente
    else {

        printf("\nScelta non valida. Inserire lettera A o B!\n\n");
        //riparte la funzione main con la scelta delle opzioni
        return main();
    }

    return 0;
}
//definizione funzione
int partita() {

    int punteggio = 0;

    char nickname[20];  
    char risposta1, risposta2, risposta3;
    
    printf("\n\nNuova partita iniziata!\n\n");
    //inserimento nickname
    printf("Inserisci nickname: ");
    scanf(" %s", &nickname);  

  
    //prima domanda
    printf("\n\nDomanda 1: La capitale dell'Italia?\n");
    printf("\nA -> Roma\n\nB -> Milano\n\nC -> Napoli\n\n");
    printf("\nLa risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta1);
    //se la risposta è giusta, incrementa di 1 il punteggio 
    if (risposta1 == 'A') {
        punteggio = punteggio + 1;
    }
    //seconda domanda
    printf("\n\n\nDomanda 2:Il capoluogo dell'Emilia Romagna?\n");
    printf("\nA -> Rimini\n\nB -> Parma\n\nC -> Bologna\n");
    printf("\nLa risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta2);

    if (risposta2 == 'C') {
        punteggio = punteggio + 1;
    }
    //terza domanda
    printf("\n\n\nDomanda 3: Isola con estensione maggiore?\n");
    printf("\nA -> Sardegna\n\nB -> Sicilia\n\nC -> Elba\n");
    printf("\nLa risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta3);

    if (risposta3 == 'B') {
        punteggio = punteggio + 1;
    }
    //fine del gioco e risultato con nickname e punteggio
    printf("\n\nFine del quiz! %s ha totalizzato il seguente punteggio: %d!\n\n", nickname, punteggio);
    //commento in base al punteggio ottenuto
    if( punteggio <2) {
        printf("Sei scarso, hai bisogno di un ripasso di geografia!\n");
    }

    else {
        printf("Complimenti! sei bravo in geografia!\n");
    }
    //si torna alla funzione main, per iniziare un nuovo gioco, o uscire da esso
    return main();
}
