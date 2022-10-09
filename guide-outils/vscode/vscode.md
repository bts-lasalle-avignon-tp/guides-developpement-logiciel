# Visual Studio Code (VSCode)

- [Visual Studio Code (VSCode)](#visual-studio-code-vscode)
  - [Présentation](#présentation)
  - [Installation](#installation)
  - [Installation Ubuntu](#installation-ubuntu)
  - [Espace de travail (_workspace_)](#espace-de-travail-workspace)
  - [Paramètres](#paramètres)
  - [Palette de commandes](#palette-de-commandes)
  - [Les raccourcis](#les-raccourcis)
  - [Gestion du contrôle de source](#gestion-du-contrôle-de-source)
  - [Les extensions](#les-extensions)
    - [Divers](#divers)
    - [C/C++](#cc)
    - [Git](#git)
    - [Markdown](#markdown)
    - [Java](#java)
    - [Diagrammes](#diagrammes)
    - [Conteneur](#conteneur)
    - [Base de données](#base-de-données)
  - [Voir aussi](#voir-aussi)

## Présentation

VSCode est un « éditeur de code » développé par Microsoft sous licence open source (MIT) et disponible pour Windows (7, 8 et 10), macOS (10.10 et supérieur) et GNU/Linux. Il utilise des extensions pour devenir pleinement un EDI ou IDE.

Liens :

- [https://code.visualstudio.com/](https://code.visualstudio.com/)
- [https://marketplace.visualstudio.com/vscode](https://marketplace.visualstudio.com/vscode)
- [https://code.visualstudio.com/docs/getstarted/keybindings](https://code.visualstudio.com/docs/getstarted/keybindings)
- [https://code.visualstudio.com/docs/getstarted/tips-and-tricks](https://code.visualstudio.com/docs/getstarted/tips-and-tricks)

## Installation

- [Download](https://code.visualstudio.com/Download)
- [Setup](https://code.visualstudio.com/docs/setup/linux)
- [Getting Started](https://code.visualstudio.com/docs)

## Installation Ubuntu

```sh
sudo apt install --assume-yes --install-recommends software-properties-common apt-transport-https wget
sudo apt install --assume-yes --install-recommends python3 python3-venv
wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -
sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"
sudo apt update && sudo apt install --assume-yes code
```

## Espace de travail (_workspace_)

C'est une notion importante de l'utilisation de VSCode. Pour l’éditeur, un dossier est un espace de travail. Il est possible d’organiser autant d’espaces de travail que l’on souhaite. Dès le lancement de VSCode, l’explorateur demande l’ouverture d’un dossier pour commencer à travailler.

Il est possible de lancer VSCode en ligne de commande directement à partir d'un dossier :

```
cd <dossier>
code .
```

## Paramètres

Les paramètres de VSCode sont accessibles via `Fichier > Préférences > Paramètres` et sont définis dans un fichier JSON `settings.json` :

- Sous Windows : `%APPDATA%\Code\User\settings.json`
- Sous Mac : `$HOME/Library/Application Support/Code/User/settings.json`
- Sous Linux : `$HOME/.config/Code/User/settings.json`

Les paramètres de personnalisation sont stockés dans un dossier `.vscode` et ne s’activent que lorsque l’espace de travail est ouvert dans l’éditeur.

## Palette de commandes

VSCode propose également un exécuteur de commandes intégré et facilement accessible avec le raccourci `Ctrl+Maj+P`.

## Les raccourcis

Liens :

- [https://code.visualstudio.com/docs/getstarted/keybindings](https://code.visualstudio.com/docs/getstarted/keybindings)
- [https://code.visualstudio.com/docs/getstarted/tips-and-tricks](https://code.visualstudio.com/docs/getstarted/tips-and-tricks)

Pour le C++ :

- Renommer le symbole : `F2`
- Atteindre la définition : `F12` (il faut configurer un raccourci pour "Atteindre la déclaration")
- Atteindre les références : `Maj + F12`
- Basculer sur les fichiers ouverts : `Ctrl+Tab`
- Aller à un fichier : `Ctrl+P`
- Aller à un symbole : `Ctrl+Maj+O`
- Suggestions : `Ctrl+Espace` et `Ctrl+Maj+Espace`

Quelques raccourcis :

- Terminal : `Ctrl+Shift+T`
- Barre latérale : `Ctrl+B`
- Source Control : `Ctrl+Maj+G`
- Extensions : `Ctrl+Maj+X`
- Palette de commandes : `Ctrl+Maj+P`
- Aperçu Markdown : `Ctrl+Maj+V` ou côte à côte avec `Ctrl+K V`

## Gestion du contrôle de source

VSCode intégre la gestion du contrôle de source (SCM) et inclut par défaut la prise en charge de Git.

Liens :

- [https://code.visualstudio.com/docs/editor/versioncontrol](https://code.visualstudio.com/docs/editor/versioncontrol)
- [https://code.visualstudio.com/docs/editor/github](https://code.visualstudio.com/docs/editor/github)

Il existe de nombreuses extensions pour faciliter l'utilisation de Git dont [Git Extension Pack](https://marketplace.visualstudio.com/items?itemName=donjayamanne.git-extension-pack).

## Les extensions

Lister les extensions installées :

```sh
code --list-extensions
```

Installer une extension :

```sh
code --install-extension <extension>
```

### Divers

Quelques extensions utiles :

- vscode-icons : https://marketplace.visualstudio.com/items?itemName=vscode-icons-team.vscode-icons
- change-case : https://marketplace.visualstudio.com/items?itemName=wmaurer.change-case
- Better Comments : https://marketplace.visualstudio.com/items?itemName=aaron-bond.better-comments
- Bracket Pair Colorizer 2 : https://marketplace.visualstudio.com/items?itemName=CoenraadS.bracket-pair-colorizer-2
- Trailing Spaces : https://marketplace.visualstudio.com/items?itemName=shardulm94.trailing-spaces
- Path Autocomplete : https://marketplace.visualstudio.com/items?itemName=ionutvmi.path-autocomplete
- Dash : https://marketplace.visualstudio.com/items?itemName=deerawan.vscode-dash
- Rainbow CSV : https://marketplace.visualstudio.com/items?itemName=mechatroner.rainbow-csv
- tl;dr pages : https://marketplace.visualstudio.com/items?itemName=bmuskalla.vscode-tldr

```sh
code --install-extension vscode-icons-team.vscode-icons
code --install-extension wmaurer.change-case
code --install-extension aaron-bond.better-comments
code --install-extension CoenraadS.bracket-pair-colorizer-2
code --install-extension shardulm94.trailing-spaces
code --install-extension ionutvmi.path-autocomplete
code --install-extension deerawan.vscode-dash
code --install-extension mechatroner.rainbow-csv
code --install-extension bmuskalla.vscode-tldr
```

Voir aussi :

- Terminal : https://marketplace.visualstudio.com/items?itemName=formulahendry.terminal
- Terminal Zoom : https://marketplace.visualstudio.com/items?itemName=trybick.terminal-zoom

### C/C++

Pré-requis Ubuntu :

```sh
sudo apt install --assume-yes --install-recommends make gcc g++ clang-format clang-tidy cppcheck cppman libstdc++-9-doc git git-man doxygen libcppunit-dev subversion meld zeal uncrustify astyle cmake manpages-fr manpages-fr-dev manpages-fr-extra aspell-fr bash-completion vim
```

L'[extension C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) ajoute la prise en charge du langage C/C++ à Visual Studio Code.

Documentations et tutoriels :

- https://code.visualstudio.com/docs/languages/cpp
- https://code.visualstudio.com/docs/cpp/config-linux

Le pack `ms-vscode.cpptools-extension-pack` comprend un ensemble d'extensions pour le développement C++ dans Visual Studio Code :

- C/C++ : https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
- C/C++ Themes : https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-themes
- CMake : https://marketplace.visualstudio.com/items?itemName=twxs.cmake
- CMake Tools : https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools
- Doxygen Documentation Generator : https://marketplace.visualstudio.com/items?itemName=cschlosser.doxdocgen
- Better C++ Syntax : https://marketplace.visualstudio.com/items?itemName=jeff-hykin.better-cpp-syntax
- Remote Development Extension Pack : https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack

```sh
code --install-extension ms-vscode.cpptools-extension-pack
```

Il existe de nombreuses autres extensions pour le C/C++, par exemple :

- Easy C++ projects : https://marketplace.visualstudio.com/items?itemName=ACharLuk.easy-cpp-projects
- C/C++ Makefile Project : https://marketplace.visualstudio.com/items?itemName=adriano-markovic.c-cpp-makefile-project
- C/C++ Compile Run : https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run
- C/C++ Project Generator : https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-project-generator
- Cpp Reference : https://marketplace.visualstudio.com/items?itemName=Guyutongxue.cpp-reference
- Clang-Format : https://marketplace.visualstudio.com/items?itemName=xaver.clang-format
- Diff : https://marketplace.visualstudio.com/items?itemName=fabiospampinato.vscode-diff

```sh
code --install-extension ACharLuk.easy-cpp-projects
code --install-extension adriano-markovic.c-cpp-makefile-project
code --install-extension Guyutongxue.cpp-reference
code --install-extension danielpinto8zz6.c-cpp-compile-run
code --install-extension danielpinto8zz6.c-cpp-project-generator
code --install-extension xaver.clang-format
code --install-extension fabiospampinato.vscode-diff
```

La prise en charge des `TODO` dans le code :

```sh
code --install-extension wayou.vscode-todo-highlight
code --install-extension minhthai.vscode-todo-parser
code --install-extension Gruntfuggly.todo-tree
```

Voir aussi :

- Tabnine : https://marketplace.visualstudio.com/items?itemName=TabNine.tabnine-vscode

### Git

Git est intégré dans VSCode notamment dans le contrôle de source (SCM).

Liens :

- https://code.visualstudio.com/docs/editor/versioncontrol
- https://code.visualstudio.com/docs/editor/github

Il existe de nombreuses extensions pour faciliter l’utilisation de Git dont [Git Extension Pack](https://marketplace.visualstudio.com/items?itemName=donjayamanne.git-extension-pack) qui comprend :

- Git History : https://marketplace.visualstudio.com/items?itemName=donjayamanne.githistory
- Project Manager : https://marketplace.visualstudio.com/items?itemName=alefragnani.project-manager
- GitLens : https://marketplace.visualstudio.com/items?itemName=eamodio.gitlens
- gitignore : https://marketplace.visualstudio.com/items?itemName=codezombiech.gitignore
- Open in GitHub / Bitbucket / VisualStudio.com : https://marketplace.visualstudio.com/items?itemName=ziyasal.vscode-open-in-github

```sh
code --install-extension donjayamanne.git-extension-pack
```

Et quelques autres :

- GitHub Pull Requests and Issues : https://marketplace.visualstudio.com/items?itemName=GitHub.vscode-pull-request-github
- GitHub Repositories : https://marketplace.visualstudio.com/items?itemName=github.remotehub
- Git Graph : https://marketplace.visualstudio.com/items?itemName=mhutchie.git-graph
- Git Project Manager : https://marketplace.visualstudio.com/items?itemName=felipecaputo.git-project-manager
- Git Blame : https://marketplace.visualstudio.com/items?itemName=waderyan.gitblame
- Git File History : https://marketplace.visualstudio.com/items?itemName=fabiospampinato.vscode-git-history

```sh
code --install-extension GitHub.vscode-pull-request-github
code --install-extension github.remotehub
code --install-extension mhutchie.git-graph
code --install-extension felipecaputo.git-project-manager
code --install-extension waderyan.gitblame
code --install-extension fabiospampinato.vscode-git-history
```

Il existe aussi une extension pour intégrer les outils d'Atlassian dont Jira et Bitbucket : https://marketplace.visualstudio.com/items?itemName=atlassian.atlascode

```sh
code --install-extension atlassian.atlascode
```

VSCode possède une extension dédiée à [GitHub Classroom](https://marketplace.visualstudio.com/items?itemName=GitHub.classroom). Elle permet de parcourir les devoirs et de commencer à travailler dessus. Elle apparaît dans l’onglet de l’[extension GitHub](https://marketplace.visualstudio.com/items?itemName=GitHub.vscode-pull-request-github) et il faut commencer par s’authentifier. La liste des devoirs apparaît alors dans l’arborescence.

```sh
code --install-extension GitHub.vscode-pull-request-github
code --install-extension GitHub.classroom
```

Liste des extensions pour Github : https://marketplace.visualstudio.com/search?term=GitHub&target=VSCode

### Markdown

[Markdown](https://fr.wikipedia.org/wiki/Markdown) est un langage de balisage léger créé par John Gruber en 2004. Son but est d’offrir une syntaxe facile à lire et à écrire. Il est très utilisé par les développeurs.

Lien : https://code.visualstudio.com/docs/languages/markdown

VSCode prend en charge automatiquement les fichiers Markdown qui ont l'extension `.md`.

Il existe des packs d'extensions Markdown : https://marketplace.visualstudio.com/items?itemName=bat67.markdown-extension-pack

- Markdown All in One : https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one
- Markdown Preview Enhanced : https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced
- Markdown PDF : https://marketplace.visualstudio.com/items?itemName=yzane.markdown-pdf
- markdownlint : https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint
- Markdown TOC : https://marketplace.visualstudio.com/items?itemName=AlanWalk.markdown-toc
- ...

### Java

Pré-requis Ubuntu :

```sh
sudo apt install --assume-yes --install-recommends default-jdk
```

Lien : https://code.visualstudio.com/docs/languages/java

Le pack [Extension Pack for Java](https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-java-pack) installera les extensions suivantes :

- Language Support for Java by Red Hat : https://marketplace.visualstudio.com/items?itemName=redhat.java
- Debugger for Java : https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-java-debug
- Test Runner for Java : https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-java-test
- Maven for Java : https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-maven
- Project Manager for Java : https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-java-dependency
- Visual Studio IntelliCode : https://marketplace.visualstudio.com/items?itemName=VisualStudioExptTeam.vscodeintellicode    

Dans la plupart des projets, les dépendances de bibliothèques tierces en Java sont gérées traditionnellement par Maven ou Gradle. Il existe une extension pour Gradle :

- Gradle for Java : https://marketplace.visualstudio.com/items?itemName=vscjava.vscode-gradle

Une fois les extensions Java installées, il est possible d'utiliser le raccourci `Ctrl-espace`.

### Diagrammes

Pré-requis Ubuntu :

```sh
sudo apt install --assume-yes --install-recommends graphviz plantuml
```

Draw.io Integration : https://marketplace.visualstudio.com/items?itemName=hediet.vscode-drawio

```sh
code --install-extension hediet.vscode-drawio
```

Il est aussi possible d'intégrer des diagrammes dans Markdown :

- Markdown Preview Mermaid Support (prise en charge des diagrammes et organigrammes [Mermaid](https://mermaid-js.github.io/mermaid/#/)) : https://marketplace.visualstudio.com/items?itemName=bierner.markdown-mermaid
- PlantUML (prise en charge des diagrammes UML (et d'autres) [PlantUML](https://plantuml.com/fr/)) : https://marketplace.visualstudio.com/items?itemName=jebbs.plantuml
- Graphviz Markdown Preview (création de graphiques avec [Graphviz](https://www.graphviz.org/)) : https://marketplace.visualstudio.com/items?itemName=geeklearningio.graphviz-markdown-preview

```sh
code --install-extension bierner.markdown-mermaid
code --install-extension jebbs.plantuml
code --install-extension Yog.yog-plantuml-highlight
code --install-extension joaompinto.vscode-graphviz
code --install-extension geeklearningio.graphviz-markdown-preview
code --install-extension EFanZh.graphviz-preview
```

### Conteneur

Pré-requis Ubuntu :

```sh
sudo apt install --assume-yes --install-recommends openssh-client
sudo apt install --assume-yes --install-recommends ca-certificates curl gnupg lsb-release
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
sudo apt update
sudo apt install --assume-yes --install-recommends docker-ce docker-ce-cli containerd.io
```

Le pack [Remote Development](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack) permet d'ouvrir n'importe quel dossier dans un conteneur ou sur une machine distante.

Liens :

- https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack
- https://aka.ms/vscode/remote-dev

Il inclut trois extensions :

- [Remote - SSH](https://aka.ms/vscode-remote/download/ssh) : https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-ssh
- [Remote - Containers](https://aka.ms/vscode-remote/download/containers) :  https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers
- [Remote - WSL](https://aka.ms/vscode-remote/download/wsl) : https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl

### Base de données

Pré-requis Ubuntu :

```sh
sudo apt install --assume-yes --install-recommends sqlite3 sqlitebrowser mysql-server phpmyadmin
```

Quelques extensions :

- SQLite : https://marketplace.visualstudio.com/items?itemName=alexcvzz.vscode-sqlite
- MySQL : https://marketplace.visualstudio.com/items?itemName=formulahendry.vscode-mysql et https://marketplace.visualstudio.com/items?itemName=cweijan.vscode-mysql-client2
- MySQL Syntax : https://marketplace.visualstudio.com/items?itemName=jakebathman.mysql-syntax

```sh
code --install-extension alexcvzz.vscode-sqlite
code --install-extension formulahendry.vscode-mysql
code --install-extension cweijan.vscode-mysql-client2
code --install-extension jakebathman.mysql-syntax
```

## Voir aussi

- Premiers pas avec [Visual Studio Code (VSCode)](http://tvaira.free.fr/projets/activites/activite-visualcode.html) ou [vscode.pdf](http://tvaira.free.fr/dev/tutoriel/vscode.pdf)
- [VSCode et Git](https://btssn-lasalle84.github.io/guides-developpement-logiciel/git.html#ancre-vscode)
- L'extension [PlatformIO](http://tvaira.free.fr/dev/tutoriel/platformio.html) pour le développement sur systèmes embarqués (Arduino, ESP32, ...)
- [Markdown et VSCode](http://tvaira.free.fr/projets/activites/markdown-vscode.pdf)

---
©️ Thierry VAIRA <thierry.vaira@gmail.com>
