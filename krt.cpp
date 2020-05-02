#include <iostream>

#include <fstream>

#include <string>

#include"classes.hpp"

#include<cstdlib>



using namespace std;

int main(int ac, char *av[] ){
if(ac<=1){
        cout<<"Не заданы имена файлов"<<endl;
        cout<<"Необходимо задать 2 имя файла"<<endl;
        return 0;
       }
    ofstream f(av[1]);
     if(!f.is_open()){
         cout<<"ошибка открытия";
         return 0;
       }

int i,d=1;



menu m;

int k=1;

for(i=0;i=d;i=0){





if(k==1){

cout<<"Здравствуйте"<< endl;

cout<<"Впишите пироженное и напиток,который вы хотите :"<< endl;

cout<<"T-Узнать состав пироженных:\n(Впишите цифру)"<< endl;

cout<<"4-Состав Донатса:"<< endl;

cout<<"5-Состав Медовика:"<< endl;

cout<<"6-Состав Трубочки:"<< endl;

cout<<"7-Перейти к меню"<< endl;

cin>> m.z;



if (m.z==7){

k=2;

}

if(k==1){

if (m.z==4){

cout<<"Состав Донатса:\nтеплое молоко – 250 мл,\nдрожжи свежие – 30 г,\nжелтки – 2 шт.,\nсоль – 1 ч.ложка,\nсахар – 60 г,\nмасло сливочное – 40 г,\nванильный сахар – 10 г,\nмука – 500 г\nГлазировка:\nшоколад черный – 200 г,\nсливки – 50 г,\nмасло растительное для жарки."<<endl;}

if (m.z==5){

cout<<"Состав Т.Медовика:\nДля медовых коржей:\n2 шт. яйца\n2 ст. л. мед\n1 ст. сахар (250 г.)\n3-4 ст. мука (500-550 г.)\n50 г. сливочное масло\n1 ч. л. сода\nДля заварного крема:\n500 мл. молоко\n2 шт. яйца\n2 ст. л. (50 г.) мука\n150-200 г. сахар\n100 г. сливочное масло\n1 шт. (пакетик) ванильный сахар "<<endl;}

if (m.z==6){

cout<<"Состав Трубочки:\nяйцо 4 шт.\nсахар 1 стакан\nсливочное масло 200 г\nмука 1 стакан\nванилин"<< endl;}

cout<<"\n1-Узнать состав других пироженных\n"<<endl;

cout<<"\n2-Продолжить дальше\n"<<endl;



cin>> m.z;

if(m.z==1){

k=1;

}

if(m.z==2){

k=k+1;

}

}

}

if(k==2){

cout<<"On-Выпечка(Вписать):\n"<< endl;

cout<<"--Донатс\n"<< endl;

cout<<"--Торт Медовик\n"<< endl;

cout<<"--Трубочка\n"<< endl;



cin>> m.q;

cout<<"Вы хотите добавить допинг?(Цифру)\n"<< endl;

cout<<"1-Да\n"<< endl;

cout<<"2-Нет\n"<< endl;

cin>> m.z;

if (m.z==1){

k=3;

}

if (m.z==2){

k=4;

}

}

if (k==3){

cout<<"Добавите допинг к пироженому:(Вписать)\n"<< endl;

cout<<"--Пудра\n"<< endl;

cout<<"--Мармелад\n"<< endl;

cout<<"--Шоколад\n"<< endl;

cin>> m.k;

k=k+1;

}

if(k==4){

cout<<"\nНапитки(Вписать)\n"<<endl;

cout<<"1-Вода\n"<< endl;

cout<<"2-Кола\n"<< endl;

cout<<"3-Сок\n"<< endl;

cin >> m.r;

k=k+1;

}

if(k==5){

system("clear");

cout<<"Выберите (число)"<< endl;

cout<<"\n1-Вернуться к началу\n"<< endl;

cout<<"\n2-Поменять напиток\n"<< endl;

cout<<"\n3-Поменять напиток и пироженное\n"<< endl;

cout<<"\n4-Завершить заказ\n"<< endl;

cout<<"\n5-Удалить заказ\n"<< endl;

cin >> m.j;

if (m.j==2){

d=1;

k=4;

}

if (m.j==3){

d=1;

k=2;

}

if (m.j==4){

k=6;

}

if(m.j==1){

k=1;

d=d;

}

if(m.j==5){

k=10;

}

}

if(k==6){

cout<<"\nВы выбрали :"<<m.q << " c " <<m.k <<","<<m.r<<endl;



persone namep;

cout<<"\nВведите имя : "<<endl;

cin>> namep.name;

cout<<"Введите фамилию : "<<endl;

cin>> namep.familia;

cout<<"Введите свой номер телефона,\nчтобы мы вас опвестили о готовности :"<<endl;

cin>> namep.nomer;

cout<<"Вы ввели :"<< namep.name << namep.familia <<", "<<"\nВаш номер телефона: "<< namep.nomer <<endl;

d=0;

}

if(k==10){

system("clear");

cout<<"\nВЫ УДАЛИЛИ ЗАКАЗ\n"<< endl;

d=0;

}

}
persone namep;
f<<namep.name<<" ";
f<<namep.familia<<"-";
f<<namep.nomer<<endl;
f<<m.q<<" ";
f<<m.k<<" ";
f<<m.r;
return 0;
f.close();
}
