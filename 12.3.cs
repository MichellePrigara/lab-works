
using System;
class HelloWorld {
  static void Main() {
    int a = int.Parse(Console.ReadLine());
    string[] f1 = {"", "одно ", "два ", "три ", "четыре ", "пять ", "шесть ", "семь ", "восемь ", "девять ", "десять ", "одиннадцать ", "двенадцать ", "тринадцать ", "четырнадцать ", "пятнадцать ", "шестнадцать ", "семнадцать ", "восемнадцать ", "девятнадцать "};
    string[] f2 = {"", "", "двадцать ", "тридцать ", "сорок "};
    Console.WriteLine(f1[0]);
    if (a < 20){
        Console.WriteLine(f1[a] + "учебных заданий");
    }
    else {if (a % 10 == 1){
        Console.WriteLine(f2[a / 10] + f1[a % 10] + "учебное задание");
    }
        else{
            Console.WriteLine(f2[a / 10] + f1[a % 10] + "учебных заданий");
        }
    }
  }
}