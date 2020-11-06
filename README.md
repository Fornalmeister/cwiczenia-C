# cwiczenia-C
Podstawy instrukcje
1. Napisz kod wczytujący dwie liczby zmiennoprzecinkowe, a następnie wypisujący iloraz
obu liczb. Pamiętaj o wyjątku związanym z dzieleniem przez zero.
2. Napisz program wczytujący z konsoli trzy liczby całkowite, a następnie wypisujący
największą spośród nich.
3. Napisz program wczytujący liczby zmiennoprzecinkowe w pętli, aż do wprowadzenia
zera. Wypisz średnią arytmetyczną wprowadzonych liczb, jeżeli nie podano, żadnej
liczby wypisz stosowną informację.
4. Napisz program wypisujący trójkąt prostokątny za pomocą znaku ‘*’ o wysokości
podanej z konsoli przez użytkownika.




tablice i funkcje
1. Napisz funkcję, która będzie zwracała wartość określoną wzorem:
f(n) = (n/2) + 2. Rezultat funkcji wypisz w konsoli w przestrzeni main.
2. Napisz funkcję float min(float m1, float m2, float m3), która zwróci wartość
najmniejszej z podanych liczb.
3. Napisz funkcję o deklaracji void printLine(int width, char c) wypisującą linie
o podanej szerokości z pomocą podanego znaku.
4. Napisz funkcję o deklaracji void printRectangle(int height, int width, char c),
która na podstawie funkcji printLine z zadania 5 wyrysuje prostokąt w konsoli
na podstawie wysokości, szerokości oraz znaku, które zostaną podane jako
parametry.
5. Napisz funkcję float Fibonacci(int n), która zwróci wartość n-tego elementu
ciągu Fibonacciego. Jako miejsce definicji funkcji wykorzystaj odrębny plik o
rozszerzeniu .h.
𝐹(𝑥) = {
0 𝑔𝑑𝑦 𝑛 = 0
1 𝑔𝑑𝑦 𝑛 = 1
𝐹(𝑛 − 1) + 𝐹(𝑛 − 2) 𝑔𝑑𝑦 𝑛 > 1
6. Zdefiniuj tablicę o rozmiarze 20, przechowującą wartości całkowite. Wypełnij
ją kolejnymi potęgami liczby 2. Wyświetl ostateczny stan tablicy.
7. Napisz kod umożliwiający wczytywanie n wartości całkowitych ze
standardowego wejścia i wczytanie ich do tablicy. 
8. Napisz funkcję float mean(int numbers[], int length), która zwraca średnią
arytmetyczną wartości zawartych w tablicy.
9. Napisz funkcję void reverse(int numbers[], int length), która w tablicy
numbers[] o długości length odwróci kolejność liczb, a następnie w funkcji
main wypisze zawartość tablicy.
10.Napisz kod umożliwiający inicjalizację wartości tablicy typu całkowitego o
rozmiarze 3x3 ze standardowego wejścia.
11.Wykorzystując funkcje zewnętrznej biblioteki string.h, wykonaj następujące
operacje:
• wprowadź dwa łańcuch znaków z konsoli,
• porównaj wprowadzone łańcuchy, zwracając wiadomość czy są one
identyczne,
• połącz obydwa łańcuch, dłuższy łańcuch jako pierwszy od lewej,
• wypisz na konsoli efekt połączenia łańcuchów. 



// (ciag dalszy tablic)
1. Napisz funkcję sprawdzającą, czy rok jest przestępny.
2. Napisz funkcję int randomNumber(int min, int max) zwracającą liczbę pseudolosową z
przedziału podanego przez użytkownika.
3. Napisz funkcje int findDigit(char text[200]) zliczającą ilość cyfr w tablicy.
4. Napisz funkcję printTranspositionArray pozwalającą na wypisanie tablicy 3x3 po
operacji transpozycji.
5. Napisz funkcję wyszukującą w tablicy 2-wymiarowej 4x4 podany znak. Wypisz ilość
pojawiającej się liter. Prototyp funkcji to: int search(char t[4][4], char z).
