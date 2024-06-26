//
// Created by Denis Osipov on 25.09.2023.
//
#pragma once
#include <utility>

#include "../main/main.h"
#include "../lexical_item/lexical_item.h"
#ifndef YAMP_LABS_TOKEN_H
#define YAMP_LABS_TOKEN_H


class Token : public lexical_item {
public:
    // типы лексем

    enum Type_lexeme {
        RETURN, INT, FLOAT,
        ID, INT_NUMBER,FLOAT_NUMBER,
        UNDEFINED,
        SUM, MINUS,
        MULTIPLY, DIVIDE, MOD,
        LEFT_BRACKET, RIGHT_BRACKET,
        SIMPLE_STRING, NUMBER,
        EQUALS, SEMICOLON, LEFT_FIGURE_BRACKET, RIGHT_FIGURE_BRACKET, COMMA,
    };

    // базовый конструктор токена. Изначально мы не знаем что перед нами
    // инициализируем как {undefined, "", ""}
    Token();

    // конструктор по типу токена и его текстового представления
    Token(Type_lexeme &type, string text);

//    Token(const Type_lexeme& type, std::string  text) : type_lexeme(type), text_lexeme(std::move(text)), type_variable() {};

    Token(Type_lexeme type, string text);

    // конструктор только по текстому содержимому лексемы. по умолчанию подставляем undefined
    Token(string text);

    Token(const Token &v) = default;


    // стандартный конструктор копирования
    Token(Token &other) = default;

    // метод возвращает тип токена
    Type_lexeme get_type() const {
        return this->type_lexeme;
    }


    // метод возвращает текстовое представление лексемы
    string get_text() const {
        return this->text_lexeme;
    }

    // метод возвращает тип переменной (int float)
    string get_type_variable() {
        return this->type_variable;
    }


    // сеттер для типа переменной (int float)
    void set_type_variable(string type_of_variable) {
        this->type_variable = std::move(type_of_variable);
    }

    string print_type_token(Token& v);


    string getText();

    bool isEqual(Token& other);

    string class_name() const override { return {"token"}; }

    void set_var_type(string& var_type) { type_variable = var_type; };

    string var_type() const { return type_variable; }

    bool operator==(const Token& v) const& {
        return type_lexeme == v.type_lexeme && text_lexeme == v.text_lexeme && type_variable == v.type_variable;
    }

private:
    string text_lexeme;
    Type_lexeme type_lexeme;
    // тип для переменных чиселок (int float)
    string type_variable;

};


#endif //YAMP_LABS_TOKEN_H
