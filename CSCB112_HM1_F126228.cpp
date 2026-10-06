#include <iostream>
#include <vector>
#include <string>

// 1
void PrintOutName() {
    std::cout << "Simeon Stamboliyski" << std::endl;
}

// 2
void PrintOutMajorAndUniversity() {
    std::cout << "New Bulgarian University / Informatics (Computer Science)" << std::endl;
}

// 3
void PrintOutKeywords() {
    std::vector<std::string> keywords ={
        "auto", "bool", "break", "case", "catch", "char", "class", 
        "const", "continue", "default", "delete", "do", "double", 
        "else", "enum", "explicit", "extern", "false", "float", 
        "for", "friend", "goto", "if", "inline", "int", "long", 
        "mutable", "namespace", "new", "nullptr", "private", 
        "protected", "public", "return", "short", "signed", 
        "sizeof", "static", "struct", "switch", "template", 
        "this", "throw", "true", "try", "typedef", "typename", 
        "union", "unsigned", "using", "virtual", "void", "volatile", 
        "while"
    };

    std::cout << "Служебни думи в C++:\n";
    for (const auto& kw : keywords) {
        std::cout << kw << "\n";
    }
}

// 4
void DefinitionOfTerminology() {
    std::string leksema = "Лексема: Най-малката неделима единична граматична единица (символ или група от символи) в изходния код на програмата, която има самостоятелно значение за компилатора.";
    
    std::string literal = "Литерал: Константна стойност, записана директно в кода на програмата (например числа, текстови низове или булеви стойности).";
    
    std::string komanda = "Команда (Инструкция): Синтактична единица, която описва конкретно действие за изпълнение от програмата.";

    std::cout << leksema << "\n\n";
    std::cout << literal << "\n\n";
    std::cout << komanda << "\n";
}

// 5
// #define: Използва се за дефиниране на макроси или константи. Препроцесорът заменя всяко срещане на този макрос в кода със зададената стойност или израз преди компилация.

// #undef: Премахва (отменя) съществуваща дефиниция на макрос, направена с #define.

// #include: Включва съдържанието на външен файл (например стандартни хедъри като <iostream> или потребителски файлове) директно в текущия изходен код.

// #if: Условна директива, която проверява дали дадено константно булево изражение е истина, за да реши дали да включи съответния блок код в компилацията.

// #ifdef: Проверява дали даден макрос е дефиниран (if defined). Ако е дефиниран, кодът до съответния #endif се компилира.

// #ifndef: Проверява дали даден макрос не е дефиниран (if not defined). Използва се масово в хедър файловете (т.нар. include guards), за да се предотврати многократното им включване.

// #else: Служи като алтернативен клон към условните директиви (#if, #ifdef, #ifndef), когато горното условие е неуспешно.

// #elif: Комбинация от „else“ и „if“ (иначе ако). Позволява проверка на допълнително условие в условен блок за компилация.

// #endif: Указва край на условен блок за компилация, започнал с #if, #ifdef или #ifndef.

// #line: Позволява на програмиста да промени вътрешния номер на текущия ред и/или името на файла в съобщенията за грешки и предупреждения на компилатора.

// #error: Принудително спира процеса на компилация и извежда дефинирано от потребителя съобщение за грешка.

// #pragma: Използва се за предаване на специфични за конкретния компилатор инструкции и настройки (например често използваното #pragma once за защита срещу повторно включване на хедъри).

int main() {
    PrintOutName();
    std::cout << "\n------------------------\n\n";
    
    PrintOutMajorAndUniversity();
    std::cout << "\n------------------------\n\n";
    
    PrintOutKeywords();
    std::cout << "\n------------------------\n\n";
    
    DefinitionOfTerminology();
    std::cout << "\n------------------------\n\n";

    return 0;
}