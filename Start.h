﻿#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include "ConsoleHelper.h"
#include "Color.h" 
#include "Classes.h"
#include "CursorFunctions.h"
#include "FileHelper.h"
using namespace std;

#pragma region Setups

#pragma region Ingredients
Ingredient* bread = new Bread("Bread", 0.352, 1.99, 13.16, 69, 1.47);
Ingredient* pasta = new Pasta("Pasta", 1.206, 14.48, 70.05, 369, 6.45);
Ingredient* salt = new Salt("Salt", 0.23, 0.1, 0.02, 1, 2.32);
Ingredient* seasoning = new Seasoning("Seasoning", 0.44, 1.36, 0.21, 2, 3.45);
Ingredient* bean = new Bean("Bean", 0.1, 7.5, 25, 128, 4.43);
Ingredient* rice = new Rice("Rice", 0, 3, 36, 160, 5.65);
Ingredient* mushroom = new Mushroom("Mushroom", 0.24, 2.16, 2.3, 15, 3.34);
Ingredient* meat = new Meat("Meat", 5.47, 7.49, 0, 81, 9.21);
Ingredient* spices = new Spices("Spices", 0.02, 0.47, 2.04, 9, 2.45);
Ingredient* broccoli = new Broccoli("Broccoli", 0.34, 2.57, 6.04, 31, 1.26);
Ingredient* cheese = new Cheese("Cheese", 6.46, 5.33, 1.13, 84, 3.56);
Ingredient* tomatoes = new Tomatoes("Tomatoes", 0.25, 1.08, 4.82, 22, 3.43);
Ingredient* eggs = new Eggs("Eggs", 4.97, 6.29, 0.38, 74, 0.14);
Ingredient* freshherbs = new FreshHerbs("FreshHerbs", 2.3, 3.4, 2.4, 9.1, 2.45);
Ingredient* milk = new Milk("Milk", 4.88, 8.03, 11.49, 122, 1.23);
Ingredient* orange = new Orange("Orange", 0.16, 1.23, 15.29, 62, 4.45);
Ingredient* pear = new Pear("Pear", 0.2, 0.63, 25.66, 96, 4.04);
Ingredient* potato = new Potato("Potato", 4.01, 2.77, 32.33, 174, 3.68);
Ingredient* onion = new Onion("Onion", 0.13, 1.47, 16.18, 67, 3.45);
Ingredient* oil = new Oil("Oil", 13.6, 0, 0, 120, 3.37);
Ingredient* flour = new Flour("Flour", 1.22, 12.91, 95.39, 455, 2.56);
Ingredient* veggies = new Veggies("Veggies", 0, 1, 8, 50, 4.78);
Ingredient* butter = new Butter("Butter", 11.52, 0.12, 0.01, 102, 2.14);
Ingredient* toast = new Toast("Toast", 0.96, 2.16, 13.06, 70, 2.12);
Ingredient* cinnamon = new Cinnamon("Cinnamon", 0.07, 0.09, 1.84, 6, 0.45);
Ingredient* sugar = new Sugar("Sugar", 0, 4.2, 0, 16, 2.12);
Ingredient* garlic = new Garlic("Garlic", 0.02, 0.19, 0.99, 4, 0.50);

const int ingredient_count = 27;
Ingredient** restaruant_ingredients = new Ingredient * [ingredient_count]{ bread, pasta, salt, seasoning,
bean, rice, mushroom, meat, spices, broccoli, cheese, tomatoes, eggs, freshherbs, milk, orange,
pear, potato, onion, oil, flour, veggies, butter, toast, cinnamon, sugar, garlic };
#pragma endregion

#pragma region Stock
RecipeItem* RPbread = new RecipeItem(bread, 100);
RecipeItem* RPpasta = new RecipeItem(pasta, 100);
RecipeItem* RPsalt = new RecipeItem(salt, 100);
RecipeItem* RPseasoning = new RecipeItem(seasoning, 100);
RecipeItem* RPbean = new RecipeItem(bean, 100);
RecipeItem* RPrice = new RecipeItem(rice, 100);
RecipeItem* RPmushroom = new RecipeItem(mushroom, 100);
RecipeItem* RPmeat = new RecipeItem(meat, 100);
RecipeItem* RPspices = new RecipeItem(spices, 100);
RecipeItem* RPbroccoli = new RecipeItem(broccoli, 100);
RecipeItem* RPcheese = new RecipeItem(cheese, 100);
RecipeItem* RPtomatoes = new RecipeItem(tomatoes, 100);
RecipeItem* RPeggs = new RecipeItem(eggs, 100);
RecipeItem* RPfreshherbs = new RecipeItem(freshherbs, 100);
RecipeItem* RPmilk = new RecipeItem(milk, 100);
RecipeItem* RPorange = new RecipeItem(orange, 100);
RecipeItem* RPpear = new RecipeItem(pear, 100);
RecipeItem* RPpotato = new RecipeItem(potato, 100);
RecipeItem* RPonion = new RecipeItem(onion, 100);
RecipeItem* RPoil = new RecipeItem(oil, 100);
RecipeItem* RPflour = new RecipeItem(flour, 100);
RecipeItem* RPveggies = new RecipeItem(veggies, 100);
RecipeItem* RPbutter = new RecipeItem(butter, 100);
RecipeItem* RPtoast = new RecipeItem(toast, 100);
RecipeItem* RPcinnamon = new RecipeItem(cinnamon, 100);
RecipeItem* RPsugar = new RecipeItem(sugar, 100);
RecipeItem* RPgarlic = new RecipeItem(garlic, 100);

RecipeItem** stockIngredients = new RecipeItem* [ingredient_count] { RPbread, RPpasta, RPsalt, RPseasoning,
RPbean, RPrice, RPmushroom, RPmeat, RPspices, RPbroccoli, RPcheese, RPtomatoes, RPeggs, RPfreshherbs, RPmilk, RPorange,
RPpear, RPpotato, RPonion, RPoil, RPflour, RPveggies, RPbutter, RPtoast, RPcinnamon, RPsugar, RPgarlic };

Stock* stock = new Stock(stockIngredients, ingredient_count);
#pragma endregion

#pragma region Meals
RecipeItem* recipe1ofgbBroccoli = new RecipeItem(broccoli, 1);
RecipeItem* recipe2ofgbBroccoli = new RecipeItem(butter, 2);
RecipeItem* recipe3ofgbBroccoli = new RecipeItem(onion, 1);
RecipeItem* recipe4ofgbBroccoli = new RecipeItem(garlic, 1);
RecipeItem** gbBrocolliIngredients = new RecipeItem * [4]{ recipe1ofgbBroccoli,recipe2ofgbBroccoli,recipe3ofgbBroccoli,recipe4ofgbBroccoli };
Meal* garlicButterBroccoli = new GarlicButterBroccoli(gbBrocolliIngredients, 4, "Garlic-Butter Brocolli");

RecipeItem* recipe1ofPastaPrimavera = new RecipeItem(pasta, 1);
RecipeItem* recipe2ofPastaPrimavera = new RecipeItem(veggies, 2);
RecipeItem* recipe3ofPastaPrimavera = new RecipeItem(cheese, 1);
RecipeItem* recipe4ofPastaPrimavera = new RecipeItem(salt, 1);
RecipeItem** pastaPrimaveraIngredients = new RecipeItem * [4]{ recipe1ofPastaPrimavera,recipe2ofPastaPrimavera,recipe3ofPastaPrimavera, recipe4ofPastaPrimavera };
Meal* pastaPrimavera = new PastaPrimavera(pastaPrimaveraIngredients, 4, "Pasta Primavera");

RecipeItem* recipe1ofPastaPomodoro = new RecipeItem(pasta, 1);
RecipeItem* recipe2ofPastaPomodoro = new RecipeItem(meat, 1);
RecipeItem* recipe3ofPastaPomodoro = new RecipeItem(bread, 1);
RecipeItem* recipe4ofPastaPomodoro = new RecipeItem(eggs, 2);
RecipeItem* recipe5ofPastaPomodoro = new RecipeItem(seasoning, 1);
RecipeItem* recipe6ofPastaPomodoro = new RecipeItem(cheese, 1);
RecipeItem** pastaPomodoroIngredients = new RecipeItem * [6]{ recipe1ofPastaPomodoro,recipe2ofPastaPomodoro,recipe3ofPastaPomodoro, recipe4ofPastaPomodoro, recipe5ofPastaPomodoro,recipe6ofPastaPomodoro };
Meal* pastaPomodoro = new PastaPomodoro(pastaPomodoroIngredients, 6, "Pasta Pomodoro");

RecipeItem* recipe1ofRiceAndBeans = new RecipeItem(rice, 2);
RecipeItem* recipe2ofRiceAndBeans = new RecipeItem(bean, 2);
RecipeItem* recipe3ofRiceAndBeans = new RecipeItem(onion, 1);
RecipeItem* recipe4ofRiceAndBeans = new RecipeItem(meat, 1);
RecipeItem* recipe5ofRiceAndBeans = new RecipeItem(seasoning, 1);
RecipeItem* recipe6ofRiceAndBeans = new RecipeItem(oil, 1);
RecipeItem* recipe7ofRiceAndBeans = new RecipeItem(garlic, 1);
RecipeItem** riceAndBeansIngredients = new RecipeItem * [7]{ recipe1ofRiceAndBeans,recipe2ofRiceAndBeans,recipe3ofRiceAndBeans, recipe4ofRiceAndBeans, recipe5ofRiceAndBeans,recipe6ofRiceAndBeans, recipe7ofRiceAndBeans };
Meal* riceAndBeans = new RiceAndBeans(riceAndBeansIngredients, 7, "Rice And Beans");

RecipeItem* recipe1ofGrilledCheese = new RecipeItem(bread, 1);
RecipeItem* recipe2ofGrilledCheese = new RecipeItem(meat, 1);
RecipeItem* recipe3ofGrilledCheese = new RecipeItem(milk, 1);
RecipeItem* recipe4ofGrilledCheese = new RecipeItem(salt, 1);
RecipeItem* recipe5ofGrilledCheese = new RecipeItem(seasoning, 1);
RecipeItem* recipe6ofGrilledCheese = new RecipeItem(cheese, 1);
RecipeItem** grilledCheeseIngredients = new RecipeItem * [6]{ recipe1ofGrilledCheese,recipe2ofGrilledCheese,recipe3ofGrilledCheese, recipe4ofGrilledCheese, recipe5ofGrilledCheese,recipe6ofGrilledCheese };
Meal* grilledCheese = new GrilledCheese(grilledCheeseIngredients, 6, "Grilled Cheese");

RecipeItem* recipe1ofChili = new RecipeItem(bean, 2);
RecipeItem* recipe2ofChili = new RecipeItem(onion, 2);
RecipeItem* recipe3ofChili = new RecipeItem(tomatoes, 1);
RecipeItem* recipe4ofChili = new RecipeItem(meat, 1);
RecipeItem* recipe5ofChili = new RecipeItem(seasoning, 1);
RecipeItem* recipe6ofChili = new RecipeItem(cheese, 1);
RecipeItem** chiliIngredients = new RecipeItem * [6]{ recipe1ofChili,recipe2ofChili,recipe3ofChili, recipe4ofChili, recipe5ofChili,recipe6ofChili };
Meal* chili = new Chili(chiliIngredients, 6, "Chili");

RecipeItem* recipe1ofNoodleSoup = new RecipeItem(veggies, 2);
RecipeItem* recipe2ofNoodleSoup = new RecipeItem(meat, 2);
RecipeItem* recipe3ofNoodleSoup = new RecipeItem(pasta, 1);
RecipeItem** noodleSoupIngredients = new RecipeItem * [3]{ recipe1ofNoodleSoup,recipe2ofNoodleSoup,recipe3ofNoodleSoup };
Meal* noodleSoup = new NoodleSoup(noodleSoupIngredients, 3, "Noodle Soup");

RecipeItem* recipe1ofFriedRice = new RecipeItem(rice, 2);
RecipeItem* recipe2ofFriedRice = new RecipeItem(veggies, 2);
RecipeItem* recipe3ofFriedRice = new RecipeItem(eggs, 1);
RecipeItem* recipe4ofFriedRice = new RecipeItem(seasoning, 1);
RecipeItem** friedRiceIngredients = new RecipeItem * [4]{ recipe1ofFriedRice,recipe2ofFriedRice,recipe3ofFriedRice, recipe4ofFriedRice };
Meal* friedRice = new FriedRice(friedRiceIngredients, 4, "Fried Rice");

RecipeItem* recipe1ofRisotto = new RecipeItem(rice, 2);
RecipeItem* recipe2ofRisotto = new RecipeItem(veggies, 2);
RecipeItem* recipe3ofRisotto = new RecipeItem(butter, 1);
RecipeItem* recipe4ofRisotto = new RecipeItem(cheese, 1);
RecipeItem** risottoIngredients = new RecipeItem * [4]{ recipe1ofRisotto,recipe2ofRisotto,recipe3ofRisotto,recipe4ofRisotto };
Meal* risotto = new Risotto(risottoIngredients, 4, "Risotto");

RecipeItem* recipe1ofEggsAndToast = new RecipeItem(eggs, 2);
RecipeItem* recipe2ofEggsAndToast = new RecipeItem(toast, 2);
RecipeItem** eggsAndToastIngredients = new RecipeItem * [2]{ recipe1ofEggsAndToast,recipe2ofEggsAndToast };
Meal* eggsAndToast = new EggsAndToast(eggsAndToastIngredients, 2, "Eggs And Toast");

RecipeItem* recipe1ofFrenchToast = new RecipeItem(eggs, 2);
RecipeItem* recipe2ofFrenchToast = new RecipeItem(toast, 2);
RecipeItem* recipe3ofFrenchToast = new RecipeItem(milk, 1);
RecipeItem* recipe4ofFrenchToast = new RecipeItem(cinnamon, 1);
RecipeItem** frenchToastIngredients = new RecipeItem * [4]{ recipe1ofFrenchToast,recipe2ofFrenchToast,recipe3ofFrenchToast,recipe4ofFrenchToast };
Meal* frenchToast = new FrenchToast(frenchToastIngredients, 4, "French Toast");

RecipeItem* recipe1ofVegetarianOmelette = new RecipeItem(eggs, 3);
RecipeItem* recipe2ofVegetarianOmelette = new RecipeItem(butter, 1);
RecipeItem* recipe3ofVegetarianOmelette = new RecipeItem(milk, 1);
RecipeItem* recipe4ofVegetarianOmelette = new RecipeItem(veggies, 2);
RecipeItem** vegetarianOmeletteIngredients = new RecipeItem * [4]{ recipe1ofVegetarianOmelette,recipe2ofVegetarianOmelette,recipe3ofVegetarianOmelette,recipe4ofVegetarianOmelette };
Meal* vegetarianOmelette = new VegetarianOmelette(vegetarianOmeletteIngredients, 4, "Vegetarian Omelette");

RecipeItem* recipe1ofPancakes = new RecipeItem(eggs, 3);
RecipeItem* recipe2ofPancakes = new RecipeItem(butter, 1);
RecipeItem* recipe3ofPancakes = new RecipeItem(milk, 1);
RecipeItem* recipe4ofPancakes = new RecipeItem(flour, 2);
RecipeItem* recipe5ofPancakes = new RecipeItem(oil, 1);
RecipeItem** pancakesIngredients = new RecipeItem * [5]{ recipe1ofPancakes,recipe2ofPancakes,recipe3ofPancakes,recipe4ofPancakes,recipe5ofPancakes };
Meal* pancakes = new Pancakes(pancakesIngredients, 5, "Pancakes");

RecipeItem* recipe1ofShakshuka = new RecipeItem(eggs, 3);
RecipeItem* recipe2ofShakshuka = new RecipeItem(spices, 1);
RecipeItem* recipe3ofShakshuka = new RecipeItem(meat, 1);
RecipeItem* recipe4ofShakshuka = new RecipeItem(oil, 1);
RecipeItem** shakshukaIngredients = new RecipeItem * [4]{ recipe1ofShakshuka,recipe2ofShakshuka,recipe3ofShakshuka,recipe4ofShakshuka };
Meal* shakshuka = new Shakshuka(shakshukaIngredients, 4, "Shakshuka");

RecipeItem* recipe1ofCinnamonRolls = new RecipeItem(eggs, 1);
RecipeItem* recipe2ofCinnamonRolls = new RecipeItem(flour, 1);
RecipeItem* recipe3ofCinnamonRolls = new RecipeItem(butter, 1);
RecipeItem* recipe4ofCinnamonRolls = new RecipeItem(cinnamon, 3);
RecipeItem* recipe5ofCinnamonRolls = new RecipeItem(sugar, 2);
RecipeItem* recipe6ofCinnamonRolls = new RecipeItem(milk, 1);
RecipeItem** cinnamonRollsIngredients = new RecipeItem * [6]{ recipe1ofCinnamonRolls,recipe2ofCinnamonRolls,recipe3ofCinnamonRolls,recipe4ofCinnamonRolls,recipe5ofCinnamonRolls,recipe6ofCinnamonRolls };
Meal* cinnamonRolls = new CinnamonRolls(cinnamonRollsIngredients, 6, "Cinnamon Rolls");

RecipeItem* recipe1ofRicePudding = new RecipeItem(eggs, 1);
RecipeItem* recipe2ofRicePudding = new RecipeItem(rice, 1);
RecipeItem* recipe3ofRicePudding = new RecipeItem(butter, 1);
RecipeItem* recipe4ofRicePudding = new RecipeItem(cinnamon, 1);
RecipeItem* recipe5ofRicePudding = new RecipeItem(sugar, 2);
RecipeItem* recipe6ofRicePudding = new RecipeItem(milk, 1);
RecipeItem** ricePuddingIngredients = new RecipeItem * [6]{ recipe1ofRicePudding,recipe2ofRicePudding,recipe3ofRicePudding,recipe4ofRicePudding,recipe5ofRicePudding,recipe6ofRicePudding };
Meal* ricePudding = new RicePudding(ricePuddingIngredients, 6, "Rice Pudding");

RecipeItem* recipe1ofVanillaPudding = new RecipeItem(butter, 1);
RecipeItem* recipe2ofVanillaPudding = new RecipeItem(sugar, 2);
RecipeItem* recipe3ofVanillaPudding = new RecipeItem(milk, 1);
RecipeItem** vanillaPuddingIngredients = new RecipeItem * [3]{ recipe1ofVanillaPudding,recipe2ofVanillaPudding,recipe3ofVanillaPudding };
Meal* vanillaPudding = new VanillaPudding(vanillaPuddingIngredients, 3, "Vanilla Pudding");

RecipeItem* recipe1ofVanillaCustardPie = new RecipeItem(butter, 1);
RecipeItem* recipe2ofVanillaCustardPie = new RecipeItem(sugar, 2);
RecipeItem* recipe3ofVanillaCustardPie = new RecipeItem(milk, 1);
RecipeItem* recipe4ofVanillaCustardPie = new RecipeItem(eggs, 3);
RecipeItem* recipe5ofVanillaCustardPie = new RecipeItem(spices, 2);
RecipeItem* recipe6ofVanillaCustardPie = new RecipeItem(flour, 1);
RecipeItem** vanillaCustardPieIngredients = new RecipeItem * [6]{ recipe1ofVanillaCustardPie,recipe2ofVanillaCustardPie,recipe3ofVanillaCustardPie, recipe4ofVanillaCustardPie, recipe5ofVanillaCustardPie, recipe6ofVanillaCustardPie };
Meal* vanillaCustardPie = new VanillaCustardPie(vanillaCustardPieIngredients, 6, "Vanilla Custard Pie");

RecipeItem* recipe1ofBreadPudding = new RecipeItem(butter, 1);
RecipeItem* recipe2ofBreadPudding = new RecipeItem(sugar, 1);
RecipeItem* recipe3ofBreadPudding = new RecipeItem(milk, 1);
RecipeItem* recipe4ofBreadPudding = new RecipeItem(eggs, 2);
RecipeItem* recipe5ofBreadPudding = new RecipeItem(bread, 2);
RecipeItem* recipe6ofBreadPudding = new RecipeItem(cinnamon, 1);
RecipeItem** breadPuddingIngredients = new RecipeItem * [6]{ recipe1ofBreadPudding,recipe2ofBreadPudding,recipe3ofBreadPudding, recipe4ofBreadPudding, recipe5ofBreadPudding, recipe6ofBreadPudding };
Meal* breadPudding = new BreadPudding(breadPuddingIngredients, 6, "Bread Pudding");

RecipeItem* recipe1OfDoner = new RecipeItem(bread, 2);
RecipeItem* recipe2OfDoner = new RecipeItem(meat, 3);
RecipeItem* recipe3OfDoner = new RecipeItem(tomatoes, 2);
RecipeItem** donerIngredients = new RecipeItem * [3]{ recipe3OfDoner , recipe2OfDoner , recipe1OfDoner };
Meal* doner = new Doner(donerIngredients, 3, "Doner");

const int meal_count = 20;
Meal** restaruant_meals = new Meal * [meal_count]{ garlicButterBroccoli, pastaPrimavera, pastaPomodoro, riceAndBeans, grilledCheese, chili, noodleSoup, friedRice, risotto, eggsAndToast, frenchToast, vegetarianOmelette, pancakes, shakshuka, cinnamonRolls, ricePudding, vanillaPudding, vanillaCustardPie, breadPudding, doner };
#pragma endregion

#pragma region Orders
Order* order1 = new Order(2, vegetarianOmelette, 2);
Order* order4 = new Order(2, garlicButterBroccoli, 2);
Order* order10 = new Order(4, vegetarianOmelette, 1);
Order* order2 = new Order(4, breadPudding, 4);
Order* order3 = new Order(7, doner, 2);
Order* order6 = new Order(8, doner, 5);
Order* order5 = new Order(8, vanillaCustardPie, 6);
Order* order7 = new Order(8, shakshuka, 7);
Order* order8 = new Order(9, pancakes, 2);
Order* order9 = new Order(9, ricePudding, 5);

Order** table2Orders = new Order * [2]{ order1, order4 };
Order** table4Orders = new Order * [2]{ order10, order2 };
Order** table7Orders = new Order * [1]{ order3 };
Order** table8Orders = new Order * [3]{ order5,order6,order7 };
Order** table9Orders = new Order * [2]{ order8,order9 };
#pragma endregion

#pragma region Tables

Table* table0 = new Table(true, nullptr, 0);
Table* table1 = new Table(false, nullptr, 0);
Table* table2 = new Table(true, table2Orders, 2);
Table* table3 = new Table(false, nullptr, 0);
Table* table4 = new Table(true, table4Orders, 2);
Table* table5 = new Table(false, nullptr, 0);
Table* table6 = new Table(false, nullptr, 0);
Table* table7 = new Table(true, table7Orders, 1);
Table* table8 = new Table(true, table8Orders, 3);
Table* table9 = new Table(true, table9Orders, 2);

Table** tables = new Table * [10]{ table0,table1,table2,table3,table4,table5,table6,table7,table8,table9 };
const int table_count = 10;
#pragma endregion

#pragma region Kitchen
Order** orders = new Order * [10]{ order1 , order2, order3, order4, order5, order6, order7,order8, order9, order10};
Kitchen* kitchen = new Kitchen(restaruant_meals,meal_count, orders, 10);
#pragma endregion

#pragma region Admins
Admin* admin1 = new Admin("John","john123");
Admin* admin2 = new Admin("George","george123");
Admin** admins = new Admin * [2]{ admin1, admin2 };
#pragma endregion

#pragma region Restaruant
Restaruant* restaruant = new Restaruant("John\'s restaruant", "The Corniche, 25 Albert Embankment Lambeth", "London", kitchen, stock, admins, 2, tables, table_count);
#pragma endregion

#pragma endregion

#pragma region SearchEngine
string LowerCase(string str)
{
    int l = str.length();
    string newstring;
    newstring.resize(l);
    for (int x = 0; x < l; x++)
    {
        if (str[x] >= 65 && str[x] <= 90)
        {
            newstring[x] = str[x] + 32;
        }
        else
        {
            newstring[x] = str[x];
        }
    }
    return newstring;
}

bool IsSuffix(string name, string word, int word_length)
{
    int l_name = name.length();
    int l_word = word_length;
    int counter = 0;
    name = LowerCase(name);
    word = LowerCase(word);
    for (int x = 0; x < l_name - l_word; x++)
    {
        counter = 0;
        for (int y = 0; y < l_word; y++)
        {
            if (name[x + y] == word[y])
            {
                counter++;
            }
        }
        if (counter == l_word)
        {
            return true;
        }
    }
    return false;
}

bool IsPrefixLetter(string name, string word, int word_length)
{
    int l = word_length;
    name = LowerCase(name);
    word = LowerCase(word);
    for (int x = 0; x < l; x++)
    {
        if (name[x] != word[x])
        {
            return false;
        }
    }
    return true;
}

void SearchEngine()
{
    Zoom(42);
    string word = "";
    word.resize(100);
    int i = 0;
    system("cls");
    cout << "\n  - - - Press Enter to leave - - -" << endl;
    cout << "\n  Search meal : ";
    CursorCoordinates(16 + i , 3);
    ShowCursor();
    const int size = meal_count;
    bool hasShown[size]{}; // For displaying in alphabetical order
    while ((word[i] = _getch()) != '\r')
    {
        for (int x = 0; x < size; x++)
        {
            hasShown[x] = false;
        }
        CursorCoordinates(16 + i, 3);
        SetColor(YELLOW);
        Zoom(42);
        if (int(word[i]) == 8) // Backspace
        {
            if (i > 0)
            {
                word[i] = NULL;
                word[i - 1] = NULL;
                i--;
            }
        }
        else
        {
            i++;
        }
        
        system("cls");
        cout << "\n  - - - Press Enter to leave - - -" << endl;
        cout << "\n  Search meal : ";
        cout << word << endl;

        int rank = 1;
        cout << endl;
        for (int x = 0; x < meal_count; x++)
        {
            if (IsPrefixLetter(restaruant_meals[x]->GetName(), word, i))
            {
                if (!hasShown[x])
                {
                    cout << "  " << rank << ") " << restaruant_meals[x]->GetName() << endl;
                    rank++;
                    hasShown[x] = true;
                }
            }
        }
        for (int x = 0; x < meal_count; x++)
        {
            if (IsSuffix(restaruant_meals[x]->GetName(), word, i))
            {
                if (!hasShown[x])
                {
                    cout << "  " << rank << ") " << restaruant_meals[x]->GetName() << endl;
                    rank++;
                    hasShown[x] = true;
                }
            }
        }
        if (rank == 1) 
        {
            SetColor(RED);
            cout << "  No results match your search :(" << endl;
        }
        CursorCoordinates(16 + i, 3);
    }

    system("cls");
    HideCursor();
}

#pragma endregion 

void AddIngredientRecursively(int& ing_count, Meal*& meal, RecipeItem* item, int counter, char key) 
{
    cout << "\a" << endl;
    ing_count++;
    SetColor(GREEN);
    // 174 - length
    CursorCoordinates(55, 8);
    string string = "";
    string += " ";
    string += restaruant_ingredients[counter]->GetName();
    string += " was added to ";
    string += meal->GetName();
    
    int l = string.length();
    int x_coordinate = (147 - l) / 2 + 13;
    CursorCoordinates(x_coordinate, 8);
    cout << ing_count;
    cout << string << endl;
    CursorCoordinates(1, 50);
    key = _getch();
    if (key == '\r')
    {
        AddIngredientRecursively(ing_count,meal, item, counter, key);
    }
    else
    {
        item->SetAmount(ing_count);
        meal->AddIngredient(item);
    }
}

void ChooseAdditionalIngredient(Meal*& meal)
{
    const int igredient_count = 27 + 1; // ingredient choices + "back" choice
    int Set[igredient_count]{};
    int counter = 0;
    int prev_counter = 0;
    char key;

    HideCursor();
    Zoom(23);
    while (true)
    {
        Set[27] = RED;
        for (int x = 0; x < igredient_count; x++)
        {
            if (x == counter)
            {
                Set[x] = BLUE;
            }
            else
            {
                if (x != 27)
                    Set[x] = AQUA;
            }
        }
        system("cls");
        
        SetColor(BLUE);
        cout << "                        __      ________   ________       _____ ____  _____   ______   _______    _________ ________   _____ _________ ____  _____ _________                                 " << endl;
        cout << "                       /  \\    |_   ___ \\.|_   ___ \\.    |_   _|_   \\|_   _|.' ___  | |_   __ \\  |_   ___  |_   ___ \\.|_   _|_   ___  |_   \\|_   _|  _   _  |                         " << endl;
        cout << "                      / /\\ \\     | |   \\. \\ | |   \\. \\     | |   |   \\ | | / .'   \\_|   | |__) |   | |_  \\_| | |   \\. \\ | |   | |_  \\_| |   \\ | | |_/ | | \\_|                  " << endl;
        cout << "                     / ____ \\    | |    | | | |    | |     | |   | |\\ \\| | | |    ____  |  __ /    |  _|  _  | |    | | | |   |  _|  _  | |\\ \\| |     | |                               " << endl;
        cout << "                   _/ /    \\ \\_ _| |___.' /_| |___.' /    _| |_ _| |_\\   |_\\ \\.___]  _|_| |  \\ \\_ _| |___/ |_| |___.' /_| |_ _| |___/ |_| |_\\   |_   _| |_                           " << endl;
        cout << "                  |____|  |____|________.'|________.'    |_____|_____|\\____|\\._____.' |____| |___|_________|________.'|_____|_________|_____|\\____| |_____|                               " << endl;
        cout << "=============================================================================================================================================================================================" << endl;
       
        for (int x = 7; x < 47; x++)
        {
            CursorCoordinates(23, x);
            cout << "|";
            CursorCoordinates(148, x);
            cout << "|";
        }

#pragma region Choices
        SetColor(Set[0]);
        CursorCoordinates(30, 10);
        cout << "================================" << endl;
        CursorCoordinates(30, 11);
        cout << "|            BREAD             |" << endl;
        CursorCoordinates(30, 12);
        cout << "================================" << endl;

        SetColor(Set[1]);
        CursorCoordinates(30, 14);
        cout << "================================" << endl;
        CursorCoordinates(30, 15);
        cout << "|            PASTA             |" << endl;
        CursorCoordinates(30, 16);
        cout << "================================" << endl;

        SetColor(Set[2]);
        CursorCoordinates(30, 18);
        cout << "================================" << endl;
        CursorCoordinates(30, 19);
        cout << "|             SALT             |" << endl;
        CursorCoordinates(30, 20);
        cout << "================================" << endl;

        SetColor(Set[3]);
        CursorCoordinates(30, 22);
        cout << "================================" << endl;
        CursorCoordinates(30, 23);
        cout << "|           SEASONING          |" << endl;
        CursorCoordinates(30, 24);
        cout << "================================" << endl;

        SetColor(Set[4]);
        CursorCoordinates(30, 26);
        cout << "================================" << endl;
        CursorCoordinates(30, 27);
        cout << "|             BEAN             |" << endl;
        CursorCoordinates(30, 28);
        cout << "================================" << endl;

        SetColor(Set[5]);
        CursorCoordinates(30, 30);
        cout << "================================" << endl;
        CursorCoordinates(30, 31);
        cout << "|             RICE             |" << endl;
        CursorCoordinates(30, 32);
        cout << "================================" << endl;

        SetColor(Set[6]);
        CursorCoordinates(30, 34);
        cout << "================================" << endl;
        CursorCoordinates(30, 35);
        cout << "|           MUSHROOM           |" << endl;
        CursorCoordinates(30, 36);
        cout << "================================" << endl;

        SetColor(Set[7]);
        CursorCoordinates(30, 38);
        cout << "================================" << endl;
        CursorCoordinates(30, 39);
        cout << "|             MEAT             |" << endl;
        CursorCoordinates(30, 40);
        cout << "================================" << endl;

        SetColor(Set[8]);
        CursorCoordinates(30, 42);
        cout << "================================" << endl;
        CursorCoordinates(30, 43);
        cout << "|            SPICES            |" << endl;
        CursorCoordinates(30, 44);
        cout << "================================" << endl;



        SetColor(Set[9]);
        CursorCoordinates(70, 10);
        cout << "================================" << endl;
        CursorCoordinates(70, 11);
        cout << "|           BROCCOLI           |" << endl;
        CursorCoordinates(70, 12);
        cout << "================================" << endl;

        SetColor(Set[10]);
        CursorCoordinates(70, 14);
        cout << "================================" << endl;
        CursorCoordinates(70, 15);
        cout << "|            CHEESE            |" << endl;
        CursorCoordinates(70, 16);
        cout << "================================" << endl;

        SetColor(Set[11]);
        CursorCoordinates(70, 18);
        cout << "================================" << endl;
        CursorCoordinates(70, 19);
        cout << "|           TOMATOES           |" << endl;
        CursorCoordinates(70, 20);
        cout << "================================" << endl;

        SetColor(Set[12]);
        CursorCoordinates(70, 22);
        cout << "================================" << endl;
        CursorCoordinates(70, 23);
        cout << "|             EGGS             |" << endl;
        CursorCoordinates(70, 24);
        cout << "================================" << endl;

        SetColor(Set[13]);
        CursorCoordinates(70, 26);
        cout << "================================" << endl;
        CursorCoordinates(70, 27);
        cout << "|          FRESHHERBS          |" << endl;
        CursorCoordinates(70, 28);
        cout << "================================" << endl;

        SetColor(Set[14]);
        CursorCoordinates(70, 30);
        cout << "================================" << endl;
        CursorCoordinates(70, 31);
        cout << "|             MILK             |" << endl;
        CursorCoordinates(70, 32);
        cout << "================================" << endl;

        SetColor(Set[15]);
        CursorCoordinates(70, 34);
        cout << "================================" << endl;
        CursorCoordinates(70, 35);
        cout << "|            ORANGE            |" << endl;
        CursorCoordinates(70, 36);
        cout << "================================" << endl;

        SetColor(Set[16]);
        CursorCoordinates(70, 38);
        cout << "================================" << endl;
        CursorCoordinates(70, 39);
        cout << "|             PEAR             |" << endl;
        CursorCoordinates(70, 40);
        cout << "================================" << endl;

        SetColor(Set[17]);
        CursorCoordinates(70,42);
        cout << "================================" << endl;
        CursorCoordinates(70, 43);
        cout << "|            POTATO            |" << endl;
        CursorCoordinates(70, 44);
        cout << "================================" << endl;



        SetColor(Set[18]);
        CursorCoordinates(110, 10);
        cout << "================================" << endl;
        CursorCoordinates(110, 11);
        cout << "|            ONION             |" << endl;
        CursorCoordinates(110, 12);
        cout << "================================" << endl;

        SetColor(Set[19]);
        CursorCoordinates(110, 14);
        cout << "================================" << endl;
        CursorCoordinates(110, 15);
        cout << "|             OIL              |" << endl;
        CursorCoordinates(110, 16);
        cout << "================================" << endl;

        SetColor(Set[20]);
        CursorCoordinates(110, 18);
        cout << "================================" << endl;
        CursorCoordinates(110, 19);
        cout << "|            FLOUR             |" << endl;
        CursorCoordinates(110, 20);
        cout << "================================" << endl;

        SetColor(Set[21]);
        CursorCoordinates(110, 22);
        cout << "================================" << endl;
        CursorCoordinates(110, 23);
        cout << "|           VEGGIES            |" << endl;
        CursorCoordinates(110, 24);
        cout << "================================" << endl;

        SetColor(Set[22]);
        CursorCoordinates(110, 26);
        cout << "================================" << endl;
        CursorCoordinates(110, 27);
        cout << "|            BUTTER            |" << endl;
        CursorCoordinates(110, 28);
        cout << "================================" << endl;

        SetColor(Set[23]);
        CursorCoordinates(110, 30);
        cout << "================================" << endl;
        CursorCoordinates(110, 31);
        cout << "|            TOAST             |" << endl;
        CursorCoordinates(110, 32);
        cout << "================================" << endl;

        SetColor(Set[24]);
        CursorCoordinates(110, 34);
        cout << "================================" << endl;
        CursorCoordinates(110, 35);
        cout << "|           CINNAMON           |" << endl;
        CursorCoordinates(110, 36);
        cout << "================================" << endl;

        SetColor(Set[25]);
        CursorCoordinates(110, 38);
        cout << "================================" << endl;
        CursorCoordinates(110, 39);
        cout << "|            SUGAR             |" << endl;
        CursorCoordinates(110, 40);
        cout << "================================" << endl;

        SetColor(Set[26]);
        CursorCoordinates(110, 42);
        cout << "================================" << endl;
        CursorCoordinates(110, 43);
        cout << "|            GARLIC            |" << endl;
        CursorCoordinates(110, 44);
        cout << "================================" << endl;
        
        SetColor(Set[27]);
        CursorCoordinates(3, 42);
        cout << "==============" << endl;
        CursorCoordinates(3, 43);
        cout << "|    BACK    |" << endl;
        CursorCoordinates(3, 44);
        cout << "==============" << endl;
#pragma endregion

        key = _getch();

        if (key == 72 && counter != 0 && counter != 9 && counter != 18 && counter != 27) // up
        {
            counter--;
        }
        if (key == 80 && counter != 8 && counter != 17 && counter != 26 && counter != 27) // down
        {
            counter++;
        }
        if (key == 77 && counter < 18 || key == 77 && counter == 27) // right
        {
            if (counter == 27)
            {
                counter = prev_counter;
            }
            else
            {
                counter += 9;
            }
        }
        if (key == 75 && counter != 27) // left
        {
            if (counter >= 0 && counter < 9)
            {
                prev_counter = counter;
                counter = 27;
            }
            else
            {
                counter -= 9;
            }
        }
        if (key == '\r')
        {
            if (counter == 27) // back
            {
                break;
            }
            else
            {
                int ing_count = 0;
                RecipeItem* item = new RecipeItem(restaruant_ingredients[counter], 1);

                AddIngredientRecursively(ing_count, meal, item, counter, key);

                if (key == 72 && counter != 0 && counter != 9 && counter != 18 && counter != 27) // up
                {
                    counter--;
                }
                if (key == 80 && counter != 8 && counter != 17 && counter != 25 && counter != 27) // down
                {
                    counter++;
                }
                if (key == 77 && counter < 17 || key == 77 && counter == 27) // right
                {
                    if (counter == 27)
                    {
                        counter = prev_counter;
                    }
                    else
                    {
                        counter += 9;
                    }
                }
                if (key == 75 && counter != 27) // left
                {
                    if (counter >= 0 && counter < 9)
                    {
                        prev_counter = counter;
                        counter = 27;
                    }
                    else
                    {
                        counter -= 9;
                    }
                }
            }
        }
    }

}

void ShowOneMealsChoices(Meal*& meal, const int& tableNo)
{
    const int choice_count = 7;
    int Set[choice_count]{};
    int counter = 1;
    int prev_counter = 1;
    int m_count = 1;
    char key;

    HideCursor();
    while (true)
    {
        Zoom(50);
        Set[0] = RED;
        Set[6] = GREEN;
        for (int x = 0; x < choice_count; x++)
        {
            if (x == counter)
            {
                Set[x] = BLUE;
            }
            else
            {
                if (x != 6 && x != 0)
                    Set[x] = AQUA;
            }
        }
        system("cls");


        SetColor(AQUA);
        for (int x = 0; x < 22; x++)
        {
            CursorCoordinates(19, x);
            cout << "\b|" << endl;
            CursorCoordinates(65, x);
            cout << "\b|" << endl;
        }

        string mealname = meal->GetName();
        int x_coordinate = ((45 - (7 + mealname.length())) / 2) + 19;

        CursorCoordinates(x_coordinate, 2);
        cout << "MEAL : " << mealname << endl;

        for (int y = 19; y < 64; y++)
        {
            CursorCoordinates(y, 0);
            cout << "_";
            CursorCoordinates(y, 3);
            cout << "_";
        }

#pragma region Choices

        SetColor(Set[0]);
        CursorCoordinates(1,18);
        cout << "==============" << endl;
        CursorCoordinates(1,19);
        cout << "|    BACK    |" << endl;
        CursorCoordinates(1,20);
        cout << "==============" << endl;

        CursorCoordinates(32, 6);
        SetColor(Set[1]);
        cout << "SEE ABOUT THE MEAL" << endl;

        CursorCoordinates(32, 8);
        SetColor(Set[2]);
        cout << "SEE IMAGE OF MEAL" << endl;

        CursorCoordinates(32, 10);
        SetColor(Set[3]);
        cout << "ADD MORE INGREDIENT" << endl;

        CursorCoordinates(34, 13);
        SetColor(AQUA);
        cout << "MEAL COUNT : " << m_count << endl;

        CursorCoordinates(31, 13);
        SetColor(Set[4]);
        cout << "\b -" << endl;

        CursorCoordinates(50, 13);
        SetColor(Set[5]);
        cout << "\b +" << endl;

        SetColor(Set[6]);
        CursorCoordinates(68, 18);
        cout << "===============" << endl;
        CursorCoordinates(68, 19);
        cout << "|    ORDER    |" << endl;
        CursorCoordinates(68, 20);
        cout << "===============" << endl;

#pragma endregion

        CursorCoordinates(34, 16);
        SetColor(AQUA);
        cout << "PRICE : " << meal->CalculatePriceOfMeal() * m_count << "$" << endl;

        key = _getch();

        if (key == 72 && counter > 1 && counter < 6) // up
        {
            if (counter == 5)
                counter -= 2;
            else
                counter--;
        }
        if (key == 80 && counter < 4 && counter > 0) // down
        {
            counter++;
        }
        if (key == 77) // right
        {
            if (counter >= 1 && counter <= 3 || counter == 5)
            {
                prev_counter = counter;
                counter = 6;
            }
            else if (counter == 4)
                counter++;
            else if (counter == 0)
                counter = prev_counter;
        }
        if (key == 75) // left
        {
            if (counter >= 1 && counter <= 4)
            {
                prev_counter = counter;
                counter = 0;
            }
            else if (counter == 5)
                counter--;
            else if (counter == 6)
                counter = prev_counter;
        }
        if (key == '\r')
        {
            if (counter == 0)
            {
                break;
            }
            else if (counter == 1) // Set About Meal
            {
                SetColor(WHITE);
                meal->Show();
                cout << endl << endl << " ";
                system("pause");
            }
            else if (counter == 2) // See image of the meal
            {
                if (meal->GetName() == "Garlic-Butter Brocolli")
                    system("start garlicButterBroccoli.png");
                else if (meal->GetName() == "Pasta Primavera")
                    system("start pastaPrimavera.jpeg");
                else if (meal->GetName() == "Pasta Pomodoro")
                    system("start pastaPomodoro.jpeg");
                else if (meal->GetName() == "Rice And Beans")
                    system("start riceAndBeans.png");
                else if (meal->GetName() == "Grilled Cheese")
                    system("start grilledCheese.jpeg");
                else if (meal->GetName() == "Chili")
                    system("start chili.jpeg");
                else if (meal->GetName() == "Noodle Soup")
                    system("start noodleSoup.jpeg");
                else if (meal->GetName() == "Fried Rice")
                    system("start friedRice.jpeg");
                else if (meal->GetName() == "Risotto")
                    system("start risotto.jpeg");
                else if (meal->GetName() == "Eggs And Toast")
                    system("start eggsAndToast.jpeg");
                else if (meal->GetName() == "French Toast")
                    system("start frenchToast.jpeg");
                else if (meal->GetName() == "Vegetarian Omelette")
                    system("start vegetarianOmelette.jpeg");
                else if (meal->GetName() == "Pancakes")
                    system("start pancakes.jpeg");
                else if (meal->GetName() == "Shakshuka")
                    system("start shakshuka.jpeg");
                else if (meal->GetName() == "Cinnamon Rolls")
                    system("start cinnamonRolls.jpeg");
                else if (meal->GetName() == "Rice Pudding")
                    system("start ricePudding.jpeg");
                else if (meal->GetName() == "Vanilla Pudding")
                    system("start vanillaPudding.jpeg");
                else if (meal->GetName() == "Vanilla Custard Pie")
                    system("start vanillaCustardPie.jpeg");
                else if (meal->GetName() == "Bread Pudding")
                    system("start breadPudding.jpeg");
                else if (meal->GetName() == "Doner")
                    system("start doner.jpeg");
            }
            else if (counter == 3) // add more ingredient
            {
                ChooseAdditionalIngredient(meal);
            }
            else if (counter == 4)
            {
                if (m_count - 1 > 0)
                    m_count--;
            }
            else if (counter == 5)
            {
                if (m_count + 1 < 100)
                    m_count++;  
            }
            else if (counter == 6) // order 
            {
                if (restaruant->GetStock()->HasEnoughIngredientForMeal(*meal))
                {
                    Order* newOrder = new Order(tableNo, meal, m_count);
                    restaruant->GetKitchen()->AddOrder(*newOrder);
                    tables[tableNo]->AddOrder(*newOrder);
                    cout << "\a" << endl;
                    system("cls");
                    Zoom(150);
                    cout << "\nYour meal has been ordered!" << endl;
                    cout << "\n\n\n  Press any key to go BACK" << endl;
                    CursorCoordinates(1, 50);
                    system("pause");
                    break;
                }
                else
                {
                    system("cls");
                    cout << "Sorry, there are not enough ingredients for " << meal->GetName() << endl;
                    system("pause");
                    break;
                }
            }
        }
    }
}

void ShowAllMealsChoices(const int& tableNo)
{
    int Set[meal_count + 2]{}; // + "Back" choice + "Search Meal" choice
    int counter = 21;
    int prev_counter = 0;
    char key;

    HideCursor();
    while (true)
    {
        Zoom(21);
        Set[20] = RED;
        for (int x = 0; x < meal_count + 2; x++)
        {
            if (x == counter)
            {
                Set[x] = YELLOW;
            }
            else
            {
                if (x != 20)
                    Set[x] = GREEN;
            }
        }
        system("cls");

        SetColor(YELLOW);
        cout << "\t\t\t\t\t\t                   ____    ____  __________      __       _____      _______        " << endl;
        cout << "\t\t\t\t\t\t                  |_   \\  /   _||_   ___  |     /  \\     |_   _|    /  ___  |     " << endl;
        cout << "\t\t\t\t\t\t                    |   \\/   |    | |_  \\_|    / /\\ \\      | |     |  (__ \\_|  " << endl;
        cout << "\t\t\t\t\t\t                    | |\\  /| |    |  _|  _    / ____ \\     | |   _  _'.___\\-.    " << endl;
        cout << "\t\t\t\t\t\t                   _| |_\\/_| |_  _| |___/ | _/ /    \\ \\_  _| |__/ || \\____) |   " << endl;
        cout << "\t\t\t\t\t\t                  |_____||_____||_________||____|  |____||________||________.'      " << endl;

        for (int x = 0; x < 49; x++)
        {
            CursorCoordinates(35, x);
            cout << "\b|" << endl;
            CursorCoordinates(157, x);
            cout << "\b|" << endl;
        }

#pragma region Meals

        SetColor(Set[0]);
        CursorCoordinates(60, 10);
        cout << "================================" << endl;
        CursorCoordinates(60, 11);
        cout << "|   GARLIC - BUTTER BROCCOLI   |" << endl;
        CursorCoordinates(60, 12);
        cout << "================================" << endl;

        SetColor(Set[1]);
        CursorCoordinates(60, 14);
        cout << "================================" << endl;
        CursorCoordinates(60, 15);
        cout << "|        PASTA PRIMAVERA       |" << endl;
        CursorCoordinates(60, 16);
        cout << "================================" << endl;

        SetColor(Set[2]);
        CursorCoordinates(60, 18);
        cout << "================================" << endl;
        CursorCoordinates(60, 19);
        cout << "|        PASTA POMODORO        |" << endl;
        CursorCoordinates(60, 20);
        cout << "================================" << endl;

        SetColor(Set[3]);
        CursorCoordinates(60, 22);
        cout << "================================" << endl;
        CursorCoordinates(60, 23);
        cout << "|       RICE AND BEANS         |" << endl;
        CursorCoordinates(60, 24);
        cout << "================================" << endl;

        SetColor(Set[4]);
        CursorCoordinates(60, 26);
        cout << "================================" << endl;
        CursorCoordinates(60, 27);
        cout << "|        GRILLED CHEESE        |" << endl;
        CursorCoordinates(60, 28);
        cout << "================================" << endl;

        SetColor(Set[5]);
        CursorCoordinates(60, 30);
        cout << "================================" << endl;
        CursorCoordinates(60, 31);
        cout << "|            CHILI             |" << endl;
        CursorCoordinates(60, 32);
        cout << "================================" << endl;

        SetColor(Set[6]);
        CursorCoordinates(60, 34);
        cout << "================================" << endl;
        CursorCoordinates(60, 35);
        cout << "|         NOODLE SOUP          |" << endl;
        CursorCoordinates(60, 36);
        cout << "================================" << endl;

        SetColor(Set[7]);
        CursorCoordinates(60, 38);
        cout << "================================" << endl;
        CursorCoordinates(60, 39);
        cout << "|          FRIED RISE          |" << endl;
        CursorCoordinates(60, 40);
        cout << "================================" << endl;

        SetColor(Set[8]);
        CursorCoordinates(60, 42);
        cout << "================================" << endl;
        CursorCoordinates(60, 43);
        cout << "|           RISOTTO            |" << endl;
        CursorCoordinates(60, 44);
        cout << "================================" << endl;

        SetColor(Set[9]);
        CursorCoordinates(60, 46);
        cout << "================================" << endl;
        CursorCoordinates(60, 47);
        cout << "|        EGGS AND TOAST        |" << endl;
        CursorCoordinates(60, 48);
        cout << "================================" << endl;

        SetColor(Set[10]);
        CursorCoordinates(100, 10);
        cout << "================================" << endl;
        CursorCoordinates(100, 11);
        cout << "|         FRENCH TOAST         |" << endl;
        CursorCoordinates(100, 12);
        cout << "================================" << endl;

        SetColor(Set[11]);
        CursorCoordinates(100, 14);
        cout << "================================" << endl;
        CursorCoordinates(100, 15);
        cout << "|     VEGETARIAN OMELETTE      |" << endl;
        CursorCoordinates(100, 16);
        cout << "================================" << endl;

        SetColor(Set[12]);
        CursorCoordinates(100, 18);
        cout << "================================" << endl;
        CursorCoordinates(100, 19);
        cout << "|           PANCAKES           |" << endl;
        CursorCoordinates(100, 20);
        cout << "================================" << endl;

        SetColor(Set[13]);
        CursorCoordinates(100, 22);
        cout << "================================" << endl;
        CursorCoordinates(100, 23);
        cout << "|          SHAKSHUKA           |" << endl;
        CursorCoordinates(100, 24);
        cout << "================================" << endl;

        SetColor(Set[14]);
        CursorCoordinates(100, 26);
        cout << "================================" << endl;
        CursorCoordinates(100, 27);
        cout << "|        CINNAMON ROLLS        |" << endl;
        CursorCoordinates(100, 28);
        cout << "================================" << endl;

        SetColor(Set[15]);
        CursorCoordinates(100, 30);
        cout << "================================" << endl;
        CursorCoordinates(100, 31);
        cout << "|         RICE PUDDING         |" << endl;
        CursorCoordinates(100, 32);
        cout << "================================" << endl;

        SetColor(Set[16]);
        CursorCoordinates(100, 34);
        cout << "================================" << endl;
        CursorCoordinates(100, 35);
        cout << "|       VANILLA PUDDING        |" << endl;
        CursorCoordinates(100, 36);
        cout << "================================" << endl;

        SetColor(Set[17]);
        CursorCoordinates(100, 38);
        cout << "================================" << endl;
        CursorCoordinates(100, 39);
        cout << "|     VANILLA CUSTARD PIE      |" << endl;
        CursorCoordinates(100, 40);
        cout << "================================" << endl;

        SetColor(Set[18]);
        CursorCoordinates(100, 42);
        cout << "================================" << endl;
        CursorCoordinates(100, 43);
        cout << "|        BREAD PUDDING         |" << endl;
        CursorCoordinates(100, 44);
        cout << "================================" << endl;

        SetColor(Set[19]);
        CursorCoordinates(100, 46);
        cout << "================================" << endl;
        CursorCoordinates(100, 47);
        cout << "|            DONER             |" << endl;
        CursorCoordinates(100, 48);
        cout << "================================" << endl;

        SetColor(Set[20]);
        CursorCoordinates(3, 41);
        cout << "============================= " << endl;
        CursorCoordinates(3, 42);
        cout << "|   ___  ___   ___  _  __   | " << endl;
        CursorCoordinates(3, 43);
        cout << "|  | _ )/   \\ / __|| |/ /   | " << endl;
        CursorCoordinates(3, 44);
        cout << "|  | _ \\| - || (__ |   <    | " << endl;
        CursorCoordinates(3, 45);
        cout << "|  |___/|_|_| \\___||_|\\_\\   | " << endl;
        CursorCoordinates(3, 46);
        cout << "|                           | " << endl;
        CursorCoordinates(3, 47);
        cout << "============================= " << endl;

        SetColor(Set[21]);
        CursorCoordinates(60, 7);
        cout << "========================================================================" << endl;
        CursorCoordinates(60, 8);
        cout << "|                             SEARCH MEAL                              |" << endl;
        CursorCoordinates(60, 9);
        cout << "========================================================================" << endl;
#pragma endregion

        key = _getch();

        if (key == 72 && counter >= 0 && counter != 20 && counter != 21) // up
        {
            if (counter == 0 || counter == 10)
            {
                prev_counter = counter;
                counter = 21;
            }
            else
            {
                counter--;
            }
        }
        if (key == 80 && counter < 19 && counter != meal_count / 2 - 1 || key == 80 && counter == 21 ) // down
        {
            if (counter == 21)
            {
                counter = prev_counter;
            }
            else
            {
                counter++;
            }
        }
        if (key == 77 && counter < meal_count / 2 && counter != 21 || key == 77 && counter == 20 && counter != 21) // right
        {
            if (counter == 20)
            {
                counter = prev_counter;
                prev_counter = 0;
            }
            else
            {
                counter += meal_count / 2;
            }
        }
        if (key == 75 && counter != 20) // left
        {
            if (counter < meal_count / 2 || counter == 21)
            {
                prev_counter = counter;
                counter = 20;
            }
            else
            {
                counter -= meal_count / 2;
            }
        }
        if (key == '\r')
        {
            if (counter == 20)
            {
                break;
            }
            if (counter == 21)
            {
                system("cls");
                SearchEngine();
            }
            for (int x = 0; x < meal_count; x++)
            {
                if (x == counter)
                {
                    system("cls");
                    ShowOneMealsChoices(restaruant_meals[x], tableNo);
                }
            }
        }
    }
}

void ShowTableChoices()
{
    int Set[table_count + 1]{}; // + "Back" choice
    int counter = 0;
    int prev_counter = 0;
    char key;

    HideCursor();
    while (true)
    {
        Zoom(21);
        Set[table_count] = BLUE;
        for (int x = 0; x < table_count + 1; x++)
        {
            if (x == counter)
            {
                Set[x] = YELLOW;
            }
            else
            {
                if (x != table_count)
                {
                    if (tables[x]->GetHasClient())
                    {
                        Set[x] = RED;
                    }
                    else
                    {
                        Set[x] = GREEN;
                    }
                }
            }
        }

        system("cls");

        SetColor(BLUE);
        cout << "=============================================================================================================================================================================================================================================" << endl;
        cout << "\t ______   _____    _________      __       _______ _________       ______ ____  ____   ____     ____    _______ _________     _________      __      ______   _____    _________                      " << endl;
        cout << "\t|_   __ \\|_   _|  |_   ___  |    /  \\     /  ___  |_   ___  |    ./ ___  |_   ||   _|.'    \\. .'    \\. /  ___  |_   ___  |   |  _   _  |    /  \\    |_   _ \\ |_   _|  |_   ___  |               " << endl;
        cout << "\t  | |__) | | |      | |_  \\_|   / /\\ \\   |  (__ \\_| | |_  \\_|   / ./   \\_| | |__| | /  .--.  \\  .--.  \\  (__ \\_| | |_  \\_|   |_/ | | \\_|   / /\\ \\     | |_) |  | |      | |_  \\_|       " << endl;
        cout << "\t  |  ___/  | |   _  |  _|  _   / ____ \\   '.___\\-.  |  _|  _    | |        |  __  | | |    | | |    | |'.___\\-.  |  _|  _        | |      / ____ \\    |  __/.  | |   _  |  _|  _                  " << endl;
        cout << "\t _| |_    _| |__/ |_| |___/ |_/ /    \\ \\_|\\\\____) |_| |___/ |   \\ \\.___.'\\_| |  | |_\\  \\--'  /  \\--'  /\\\\____) |_| |___/ |      _| |_   _/ /    \\ \\_ _| |__) |_| |__/ |_| |___/ |       " << endl;
        cout << "\t|_____|  |________|_________|____|  |____|_______.'_________|    \\._____.'____||____|\\.____.' \\.____.'|_______.'_________|     |_____| |____|  |____|_______/|________|_________|                  " << endl;
        cout << "=============================================================================================================================================================================================================================================" << endl;

        #pragma region PrintTables

        SetColor(Set[0]);
        CursorCoordinates(3, 15);
        cout << "       _____________________       " << endl;
        CursorCoordinates(3, 16);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(3, 17);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(3, 18);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(3, 19);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(3, 20);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(3, 21);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(3, 22);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(3, 23);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(3, 24);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(3, 25);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(12, 20);
        SetColor(RED);
        cout << "TABLE NO 1" << endl;

        SetColor(Set[1]);
        CursorCoordinates(41, 15);
        cout << "       _____________________       " << endl;
        CursorCoordinates(41, 16);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(41, 17);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(41, 18);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(41, 19);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(41, 20);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(41, 21);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(41, 22);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(41, 23);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(41, 24);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(41, 25);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(50, 20);
        SetColor(RED);
        cout << "TABLE NO 2" << endl;

        SetColor(Set[2]);
        CursorCoordinates(79, 15);
        cout << "       _____________________       " << endl;
        CursorCoordinates(79, 16);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(79, 17);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(79, 18);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(79, 19);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(79, 20);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(79, 21);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(79, 22);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(79, 23);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(79, 24);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(79, 25);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(88, 20);
        SetColor(RED);
        cout << "TABLE NO 3" << endl;

        SetColor(Set[3]);
        CursorCoordinates(117, 15);
        cout << "       _____________________       " << endl;
        CursorCoordinates(117, 16);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(117, 17);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(117, 18);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(117, 19);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(117, 20);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(117, 21);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(117, 22);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(117, 23);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(117, 24);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(117, 25);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(126, 20);
        SetColor(RED);
        cout << "TABLE NO 4" << endl;

        SetColor(Set[4]);
        CursorCoordinates(155, 15);
        cout << "       _____________________       " << endl;
        CursorCoordinates(155, 16);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(155, 17);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(155, 18);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(155, 19);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(155, 20);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(155, 21);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(155, 22);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(155, 23);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(155, 24);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(155, 25);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(164, 20);
        SetColor(RED);
        cout << "TABLE NO 5" << endl;
        
        SetColor(Set[5]);
        CursorCoordinates(3, 30);
        cout << "       _____________________       " << endl;
        CursorCoordinates(3, 31);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(3, 32);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(3, 33);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(3, 34);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(3, 35);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(3, 36);
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(3, 37);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(3, 38);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(3, 39);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(3, 40);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(12, 35);
        SetColor(RED);
        cout << "TABLE NO 6" << endl;

        SetColor(Set[6]);
        CursorCoordinates(41, 30);
        cout << "       _____________________       " << endl;
        CursorCoordinates(41, 31);
        cout << "      /                    /|      " << endl;
        CursorCoordinates(41, 32);
        cout << "     /                    / |      " << endl;
        CursorCoordinates(41, 33);
        cout << "    /                    /  |      " << endl;
        CursorCoordinates(41, 34);
        cout << "   /____________________/  /|       " << endl;
        CursorCoordinates(41, 35);
        cout << "   |                    | /||      " << endl;
        CursorCoordinates(41, 36); 
        cout << "   |____________________|/ ||      " << endl;
        CursorCoordinates(41, 37);
        cout << "   ||  ||               ||          " << endl;
        CursorCoordinates(41, 38); 
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(41, 39);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(41, 40);
        cout << "   ||                   ||          " << endl;
        CursorCoordinates(50, 35);
        SetColor(RED);
        cout << "TABLE NO 7" << endl;

        SetColor(Set[7]);
        CursorCoordinates(79, 30);
        cout << "       ______________________       " << endl;
        CursorCoordinates(79, 31);
        cout << "      /                     /|      " << endl;
        CursorCoordinates(79, 32);
        cout << "     /                     / |      " << endl;
        CursorCoordinates(79, 33);
        cout << "    /                     /  |      " << endl;
        CursorCoordinates(79, 34);
        cout << "   /_____________________/  /|       " << endl;
        CursorCoordinates(79, 35);
        cout << "   |                     | /||      " << endl;
        CursorCoordinates(79, 36);
        cout << "   |_____________________|/ ||      " << endl;
        CursorCoordinates(79, 37);
        cout << "   ||  ||                ||          " << endl;
        CursorCoordinates(79, 38);
        cout << "   ||                    ||          " << endl;
        CursorCoordinates(79, 39);
        cout << "   ||                    ||          " << endl;
        CursorCoordinates(79, 40);
        cout << "   ||                    ||          " << endl;
        CursorCoordinates(88, 35);
        SetColor(RED);
        cout << "TABLE NO 8" << endl;

        SetColor(Set[8]);
        CursorCoordinates(117, 30);
        cout << "       _______________________       " << endl;
        CursorCoordinates(117, 31);
        cout << "      /                      /|      " << endl;
        CursorCoordinates(117, 32);
        cout << "     /                      / |      " << endl;
        CursorCoordinates(117, 33);
        cout << "    /                      /  |      " << endl;
        CursorCoordinates(117, 34);
        cout << "   /______________________/  /|       " << endl;
        CursorCoordinates(117, 35);
        cout << "   |                      | /||      " << endl;
        CursorCoordinates(117, 36);
        cout << "   |______________________|/ ||      " << endl;
        CursorCoordinates(117, 37);
        cout << "   ||  ||                 ||          " << endl;
        CursorCoordinates(117, 38);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(117, 39);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(117, 40);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(126, 35);
        SetColor(RED);
        cout << "TABLE NO 9" << endl;

        SetColor(Set[9]);
        CursorCoordinates(155, 30);
        cout << "       _______________________       " << endl;
        CursorCoordinates(155, 31);
        cout << "      /                      /|      " << endl;
        CursorCoordinates(155, 32);
        cout << "     /                      / |      " << endl;
        CursorCoordinates(155, 33);
        cout << "    /                      /  |      " << endl;
        CursorCoordinates(155, 34);
        cout << "   /______________________/  /|       " << endl;
        CursorCoordinates(155, 35);
        cout << "   |                      | /||      " << endl;
        CursorCoordinates(155, 36);
        cout << "   |______________________|/ ||      " << endl;
        CursorCoordinates(155, 37);
        cout << "   ||  ||                 ||          " << endl;
        CursorCoordinates(155, 38);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(155, 39);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(155, 40);
        cout << "   ||                     ||          " << endl;
        CursorCoordinates(164, 35);
        SetColor(RED);
        cout << "TABLE NO 10" << endl;
   
#pragma endregion

        SetColor(Set[table_count]);

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "      ====================== " << endl;
        cout << "      |                    | " << endl;
        cout << "      |     <-- BACK       |" << endl;
        cout << "      |                    | " << endl;
        cout << "      ====================== " << endl;

        key = _getch();

        if (key == 75 && counter > 0 && counter != table_count / 2 && counter != table_count) // left
        {
            counter--;
        }
        if (key == 77 && counter < 9 && counter != table_count / 2 - 1 && counter != table_count) // right
        {
            counter++;
        }
        if (key == 72 && counter > 4) // up
        {
            if (counter == table_count)
                counter = prev_counter;
            else
                counter -= table_count / 2;
        }
        if (key == 80 && counter != table_count) // down
        {
            if (counter > 4 && counter < 10)
            {
                prev_counter = counter;
                counter = table_count;
            }
            else
            {
                counter += table_count / 2;
            }
        }
            
        if (key == '\r')
        {
            if (counter == table_count)
            {
                system("cls");
                break;
            }
            for (int x = 0; x < table_count; x++)
            {
                if (x == counter)
                {
                   if (!tables[x]->GetHasClient())
                   {
                       ShowAllMealsChoices(x);
                   }
                   else
                   {
                       cout << "\a" << endl;
                       CursorCoordinates(80,10);
                       SetColor(RED);
                       cout << "TABLE NO " << x + 1 << " IS FULL!" << endl;
                       CursorCoordinates(1,50);

                       key = _getch();

                       if (key == 75 && counter > 0 && counter != table_count / 2 && counter != table_count) // left
                       {
                           counter--;
                       }
                       if (key == 77 && counter < 9 && counter != table_count / 2 - 1 && counter != table_count) // right
                       {
                           counter++;
                       }
                       if (key == 72 && counter > 4) // up
                       {
                           if (counter == table_count)
                               counter = prev_counter;
                           else
                               counter -= table_count / 2;
                       }
                       if (key == 80 && counter != table_count) // down
                       {
                           if (counter > 4 && counter < 10)
                           {
                               prev_counter = counter;
                               counter = table_count;
                           }
                           else
                           {
                               counter += table_count / 2;
                           }
                       }
                   }
                }
            }
        }
    }
}

void ShowOrdersForKitchen();

void ShowAdminSide()
{
    int Set[2]{};
    int counter = 0;
    char key;

    HideCursor();
    while (true)
    {
        Zoom(50);
        Set[0] = RED;
        Set[1] = RED;
        if (counter == 0)
        {
            Set[counter] = GREEN;
        }
        else
        {
            Set[counter] = GREEN;
        }

        system("cls");

        SetColor(Set[0]);
        cout << endl;
        cout << "        ___  ____  _____ _________   ______ ____  ____ _________ ____  _____       " << endl;
        cout << "       |_  ||_  _||_   _|  _   _  |./ ___  |_   ||   _|_   ___  |_   \\|_   _|     " << endl;
        cout << "         | |_/ /    | | |_/ | | \\_| ./   \\_| | |__| |   | |_  \\_| |   \\ | |    " << endl;
        cout << "         |  __'.    | |     | |   | |        |  __  |   |  _|  _  | |\\ \\| |      " << endl;
        cout << "        _| |  \\ \\_ _| |_   _| |_  \\ \\.___.'\\_| |  | |_ _| |___/ |_| |_\\   |_ " << endl;
        cout << "       |____||____|_____| |_____|  \\._____.'____||____|_________|_____|\\____|    " << endl;

        SetColor(YELLOW);
        cout << "\n\n\n==============================TO GO BACK PRESS ESC=============================================" << endl;

        SetColor(Set[1]);
        cout << endl;
        cout << endl;
        cout << "                  _______ _________   ____     ______ ___  ____          " << endl;
        cout << "                 /  ___  |  _   _  |.'    \\. ./ ___  |_  ||_  _|        " << endl;
        cout << "                |  (__ \\_|_/ | | \\_|  .--.  \\ ./   \\_| | |_/ /       " << endl;
        cout << "                 '.___\\-.    | |   | |    | | |        |  __'.          " << endl;
        cout << "                |\\\\____) |  _| |_  \\  \\--'  / \\.___.'\\_| |  \\ \\_ " << endl;
        cout << "                |_______.' |_____|  \\.____.' \\._____.'____||____|      " << endl;


        key = _getch();

        if (key == 72 && counter == 1)
        {
            counter--;
        }
        if (key == 80 && counter == 0)
        {
            counter++;
        }

        if (key == 27)
        {
            break;
        }

        if (key == '\r')
        {
            if (counter == 0)
            {
                ShowOrdersForKitchen();
            }
            else
            {
                system("cls");
                restaruant->GetStock()->ShowAllIngredients();
                cout << "\n  Press any key to go BACK . . ." << endl;
                CursorCoordinates(1, 50);
                system("pause");
            }
        }
    }
}

int GetTablesOrderedMealCount()
{
    int counter = 0;
    const int size = 20;
    bool hasShown[size]{};
    for (int y = 0; y < size; y++)
    {
        hasShown[y] = false;
    }
    int length = restaruant->GetKitchen()->GetOrderCount();
    for (int x = 0; x < length; x++)
    {
        int table_no = restaruant->GetKitchen()->GetOrders()[x]->GetTableNo();
        if (!hasShown[table_no])
        {
            hasShown[table_no] = true;
            counter++;
        }
    }
    return counter;
}

void ShowOrdersForKitchen()
{
    // accept or decline meal
    // if accept { r4educe ingredinet count } {send message to table that the order has been accepted} {delete order}
    // else {send message than order has not been accepted, it has been declined } {delete order}

    int counter = 0;
    char key;
    const int size = 10;
    bool hasShown[size]{};

    HideCursor();
    while (true)
    {
        const int order_count = restaruant->GetKitchen()->GetOrderCount();
        int* Set = new int[order_count * 2] {};
        int tableCountOrderedMeal = GetTablesOrderedMealCount();
        system("cls");
        Zoom(40);
        if (counter >= tableCountOrderedMeal * 2)
        {
            counter = tableCountOrderedMeal * 2 - 2;
        }

        for (int x = 0; x < order_count * 2; x++)
        {
            if (x == counter)
            {
                Set[x] = BLUE;
            }
            else
            {
                Set[x] = YELLOW;
            }
        }
        
        SetColor(WHITE);
        if (order_count == 0)
        {
            Zoom(150);
            SetColor(RED);
            cout << "\n    There is no order :(" << endl;
            cout << "\n\n    Press ESC to go BACK" << endl;
        }
        else
        {
            cout << " ============================================= ORDERS =============================================" << endl;
            int y_coordinate = 3;
            int index = 0;
            for (int y = 0; y < size; y++)
            {
                hasShown[y] = false;
            }
            int length = restaruant->GetKitchen()->GetOrderCount();
            for (int x = 0; x < length; x++)
            {
                int table_no = restaruant->GetKitchen()->GetOrders()[x]->GetTableNo();
                if (!hasShown[table_no])
                {
                    cout << "\n\n ============ TABLE NO " << table_no + 1 << " ============ " << endl;

                    CursorCoordinates(40, y_coordinate);
                    SetColor(Set[index]);
                    cout << "ACCEPT " << endl;

                    CursorCoordinates(48, y_coordinate);
                    SetColor(YELLOW);
                    cout << "|" << endl;

                    CursorCoordinates(51, y_coordinate);
                    SetColor(Set[index + 1]);
                    cout << "DECLINE" << endl;

                    int table_order_count = tables[table_no]->GetOrderCount();
                    y_coordinate += 3;
                    y_coordinate += table_order_count;

                    for (int y = 0; y < length; y++)
                    {
                        if (restaruant->GetKitchen()->GetOrders()[y]->GetTableNo() == table_no)
                        {
                            restaruant->GetKitchen()->GetOrders()[y]->ShowOrder();
                        }
                    }

                    hasShown[table_no] = true;
                    index += 2;
                }
            }
        }

        key = _getch();

        if (order_count != 0)
        {
            if (key == 72 && counter > 1) // up
            {
                counter -= 2;
            }
            if (key == 80 && counter < tableCountOrderedMeal * 2 - 2) // down
            {
                counter += 2;
            }
            if (key == 77 && counter % 2 == 0) // right
            {
                counter++;
            }
            if (key == 75 && counter % 2 == 1) // left
            {
                counter--;
            }
            if (key == '\r')
            {
                int orderNo = (counter / 2);
                int tableNo = restaruant->GetKitchen()->GetOrders()[orderNo]->GetTableNo();
                if (counter % 2 == 0) // Accept
                {
                    OrderWriteToFile("Orders.txt", tables[tableNo], true);
                    restaruant->GetStock()->ReduceIngredientsByTable(tables[tableNo]);
                    restaruant->GetKitchen()->DeleteOrderByTableNo(tableNo);
                    //restaruant->GetKitchen()->SetOrderCount(restaruant->GetKitchen()->GetOrderCount() - 1);
                    cout << "\a" << endl;
                }
                else // Decline
                {
                    OrderWriteToFile("Orders.txt", tables[tableNo], false);
                    restaruant->GetKitchen()->DeleteOrderByTableNo(tableNo);
                    cout << "\a" << endl;
                }
            }
        }

        if (key == 27)
        {
            break;
        }
    }
}

bool AdminIdentityVerification()
{
    ShowCursor();
    system("cls");
    Zoom(60);

    SetColor(AQUA);
    cout << " =================== ADMIN IDENTITY VERIFICATION =================== " << endl;
    string name;
    cout << "\n  Enter your name : ";
    getline(cin, name);

    string password;
    cout << "\n  Enter your password : ";
    getline(cin, password);

    HideCursor();
    if (restaruant->IsAdmin(name, password))
        return true;

    return false;
}

void AdminOrClient()
{
    int Set[2]{};
    int counter = 0;
    char key;

    HideCursor();
    while (true)
    {
        Zoom(50);
        Set[0] = RED;
        Set[1] = RED;
        if (counter == 0)
        {
            Set[counter] = GREEN;
        }
        else
        {
            Set[counter] = GREEN;
        }

        system("cls");

        SetColor(Set[0]);
        cout << endl;
        cout << "                 ______ _____    _____ _________ ____  _____ _________ " << endl;
        cout << "               ./ ___  |_   _|  |_   _|_   ___  |_   \\|_   _|  _   _  |" << endl;
        cout << "              / ./   \\_| | |      | |   | |_  \\_| |   \\ | | |_/ | | \\_|" << endl;
        cout << "              | |        | |   _  | |   |  _|  _  | |\\ \\| |     | |    " << endl;
        cout << "              \\ \\.___.'\\_| |__/ |_| |_ _| |___/ |_| |_\\   |_   _| |_   " << endl;
        cout << "               \\._____.'________|_____|_________|_____|\\____| |_____|  " << endl;

        SetColor(YELLOW);
        cout << "\n\n\n===========================================================================================================" << endl;

        SetColor(Set[1]);
        cout << endl;
        cout << endl;
        cout << "                    __      ________   ____    ____ _____ ____  _____ " << endl;
        cout << "                   /  \\    |_   ___ \\.|_   \\  /   _|_   _|_   \\|_   _|" << endl;
        cout << "                  / /\\ \\     | |   \\. \\ |   \\/   |   | |   |   \\ | |  " << endl;
        cout << "                 / ____ \\    | |    | | | |\\  /| |   | |   | |\\ \\| |  " << endl;
        cout << "               _/ /    \\ \\_ _| |___.' /_| |_\\/_| |_ _| |_ _| |_\\   |_ " << endl;
        cout << "              |____|  |____|________.'|_____||_____|_____|_____|\\____|" << endl;
        key = _getch();

        if (key == 72 && counter == 1) 
        {
            counter--;
        }
        if (key == 80 && counter == 0) 
        {
            counter++;
        }

        if (key == '\r')
        {
            if (counter == 0)
            {
                ShowTableChoices();
            }
            else
            {
                if (AdminIdentityVerification())
                    ShowAdminSide();
                else
                {
                    system("cls");
                    SetColor(RED);
                    Zoom(90);
                    cout << "\n\n\n\n\t  Incorrect name or password!" << endl;
                    cout << endl << endl;
                    cout << "         ";
                    system("pause");
                }
            }
        }
    }
}

void Start()
{
    FullScreenMode();
    system("start backgroundMusic.mp3");
    AdminOrClient();
}
