# README

*C'hi++* è una metafisica priva, o quasi, di elementi metafisici; una *theologia naturalis* per coloro che non riescono ad accettare per fede le affermazioni o le contraddizioni delle religioni canoniche, ma allo stesso tempo trovano insoddisfacente una visione [siero]positivistica dell'esistenza.  

Il nome *C'hi++* è un gioco di parole fra il termine giapponese *C'hi* (ovvero: soffio vitale) e il linguaggio di programmazione chiamato: *C++*. Non è un accostamento casuale: la mia intenzione è quella di gestire l'evoluzione della mia teoria così come si gestisce il software; in particolare, il software *open-source*.

Un beneficio collaterale di questa metafisica è che può costituire una base “vendor independent” per la definizione di valori e principii etici che permettano alle macchine basate su Intelligenza Artificiale di risolvere problemi come questo:  

![Quiz](./img/quiz.png)

## Caratteristiche

Le principali caratteristiche del C'hi++ sono:

- __è un'etica [RISC](http://www.treccani.it/enciclopedia/risc/)__, con un numero ristretto di dogmi;

- **è _open-source_** perché ciascuno possa modificarla per adattarla alle sue esigenze. 

- **è _portabile_**: molti precetti del *C'hi++* sono compatibili con precetti o idee appartenenti ad altre mistiche o filosofie;

- **è sottoposta a versionamento**, così come avviene con il software, per poter gestire l'evoluzione della dottrina;

- **non si propone come Unica Verità Incontestabile**, ma come un'approssimazione sicuramente incompleta e perfettibile della verità;

- **ha una sua cosmogonia**, del tutto indipendente dalla presenza o dall'assenza di una Divinità.

## Documentazione

Il *C'hi++* ha tre testi di riferimento:

- [**C'hi++**](src/doc/chi-plus-plus.md): un manuale di programmazione scritto nello stile dei libri di filosofia giapponesi del XVII secolo. Il testo riporterà gli insegnamenti che un vecchio maestro tramanda al suo giovane allievo sulla programmazione dei computer. Dopo aver insegnato al suo allievo a programmare con il linguaggio C++, il Maestro gli parlerà del *C'hi++*, ovvero il linguaggio con cui è stata scritta l'applicazione che gestisce l'Universo. 

- [**Sostiene Aristotele**](src/doc/sostiene-aristotele.md): un documento che risale al Giugno del 2007 e che possiamo considerare una versione preliminare del *C'hi++*. In questo documento, che risentiva della recente lettura di *Eureka* di Poe, ipotizzavo una vita dell'Universo ciclica, costituita da fasi di espansione e fasi di contrazione[

- [**Ipotesi per una metafisica open-source**](src/doc/proposta-per-una-metafisica-open-source.md): nato inzialmente come Manifesto del progetto, questo testo si è espanso per più di quaranta pagine e ho deciso per ciò di considerarlo un documento a sé stante.

*Sostiene Aristotele* e *Ipotesi per una metafisica open-source* sono completati, mentre di *C'hi++* ho scritto solo i primi capitoli. 

Esiste anche una mappa mentale nella quale sto riportando tutti i miei appunti e le mie idee per *C'hi++*. 

## Strumenti
Tutti i formati utilizzati per i file sono standard pubblici che possono essere creati e letti con strumenti gratuiti: 

- **Markdown** per i sorgenti dei testi;
- **PDF** per i file di output come articoli o saggi;
- **C++** per il codice;

Fa eccezione solo la mappa mentale per *C'hi++*, che è stata realizzata con il programma [VUE](https://vue.tufts.edu/) della Tufts University, ma si tratta comunque di un file in formato XML, facilmente leggibile anche nei *diff* di Git.
Sfortunatamente, lo sviluppo di VUE è fermo dal 20 Giugno del 2017, ma il codice è comunque [disponibile su GitHub](https://github.com/VUE/VUE).

 
## Struttura delle directory
I file del progetto sono suddivisi nelle seguenti directory:

| Nome  | Contenuto
|---|---|
|**bin**| programmi eseguibili per la gestione del progetto; al momento, solo lo script per il cambio di versione git.
| **docs** | file per la pubblicazione del progetto su Github Pages [https://chi.carlosimonelli.it/](https://chi.carlosimonelli.it/).
| **img** | contiene i file immagine del progetto.
| **out** | file di output del sistema: articoli, saggi ecc.
| **src** | file "sorgenti" del progetto, siano essi degli script in C++ (*src/cpp*) o i file in formato Markdown dei testi (*src/doc*).

I file [CHANGELOG](CHANGELOG.md) e VERSION sono utilizzati per il controllo di versione con Git. 

Il file README.md è quello che state leggendo e contiene una breve descrizione degli scopi e delle caratteristiche del progetto.


