# Systèmes Embarqués
## Description
**Bonne chance**
## Matériel et sessions utilisées 
* Sessions du CIME 
xph3sei206, xph3sei210 et xph3sei209
* Matériel FPGA et SD
Nous avons utilisés le matérien n° 6 et 7
## Liens utiles
* [Chamilo de la matière](https://chamilo.grenoble-inp.fr/courses/PHELMA5PMESEN7/index.php?id_session=0)
* [Github du projet](https://github.com/lambremi/SystemesEmbarques)
* [Notion du projet](https://www.notion.so/invite/142eefe4c4559cf11346c3c7b93ced8470ec7005)
* [Google Docs du projet](https://docs.google.com/document/d/1CKzjBNG5KMEnRkBht0hFXc6-6X_QD-N0SXa2cnMQL8Q/edit?usp=sharing)
## Git
### Faire des branches
* Créer une branche
```
git checkout -b <nom de la branche>
```
* Changer de branche
```
git checkout <nom de la branche>
```
* push la branche
```
git push origin <nom de la branche>
```

### Ajouter des fichiers au git
* Aller dans le gitignore et utiliser ! pour enlever un fichier du gitignore


## Compilation
### Source
- source sourceme.sh dans TP3ANew
- source setenv.sh dans lowrisc.../

### Make
- make application dans fpga/bare-metal/examples/

### Portage sur le FPGA 
- renommer l'executable "application" en boot.bin
- renommer les images ppm en 1.ppm, 2.ppm etc.
- utiliser le protocole picocom (protocole detaille page 20 du pdf "technical_documentation")

### Installation sur carte
- Mettre le `boot.bin` dans la carte SD
- Mettre les images sous la forme de `1.ppm`, `2.ppm`, etc. dans la carte SD
- Le système peut mettre du temps à démarrer
- En cas de blocage appuyer sur le bouton **prog**, éventuellement plusieurs fois
- Mettre le **switch 1 à 1**
- Pour communiquer avec la carte, utiliser **picocom**
- **Faire chier pontar --> baiser la carte**

## Rapport
- Gros bonus pour ceux qui font un truc clean avec des exemples sur lesquels on a un exemple pour valier chaque taches
- Faire un gros readme
- Partie CC (note)
    - Petit exam
    - Rendu des TP
    - Rendu du projet

## Contributeurs
* [Arthur PONT](https://www.linkedin.com/in/arthur-pont-243227222/)
* [Louis LEMAIRE](https://www.linkedin.com/in/louis-lemaire-/)
* [Gaël OUSSET](https://www.linkedin.com/in/ga%C3%ABl-ousset-9b08b5251/)
* [Guillaume DALLE](https://www.linkedin.com/in/guillaume-dalle-987213223/)
* [Tristan RIVET](https://www.linkedin.com/in/tristan-rivet-b7aa4121a/)
* [Rémi LAMBERT](https://www.linkedin.com/in/r%C3%A9mi-lambert-916033252/)
