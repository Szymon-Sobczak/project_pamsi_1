## Opis 
Przygotował Szymon Sobczak 259275. 
Program realizujący symulację przesyłu pliku tekstowego przez sieć - na ocenę bdb.

## Uruchamianie Programu
 * Aby móc poprawnie skompilować program należy najpierw stworzyć katalog build, o ile go nie ma, a następnie użyć programu cmake poleceniem `cmake ..` do stworzenia pliku makefile w katalogu `build/`.
 * Następnie należy użyć Makefile poleceniem `make`, aby skompilować program po wcześniejszym poprawnym stworzeniu pliku `Makefile` z pomocą cmake w katalogu `build/`. 
 * Po poprawnym skompilowaniu, aby uruchomić program, należy użyć polecenia `./main` w katalogu `build/`.

## Uwagi 
 * Główna pętla programu - driver znajduje się w katalogu `./app`
 * Wszystkie pliki źródłowe znajdują się w katalogu `./src`
 * Wszystkie pliki nagłówków znajdują się w katalogu `./inc`

## ENG Building
Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target.

Requirements: cmake

The main loop of the program is in the `app` folder.

