cmake_minimum_required(VERSION 3.25)
project(yamp_labs)

set(CMAKE_CXX_STANDARD 17)

add_executable(yamp_labs main/main.cpp hash_table/Hash_table.cpp hash_table/Hash_table.h Node/Node.cpp Node/Node.h Token/Token.cpp Token/Token.h main/main.h utils/Utils.h Test/Test.cpp Test/Test.h lexical_analizator/DFA.cpp lexical_analizator/DFA.h lexical_analizator/lexical_analizator.h lexical_analizator/lexical_analizator.cpp parse_tree/parse_tree.cpp parse_tree/parse_tree.h lexical_item/lexical_item.h lexical_item/terminal.cpp lexical_item/terminal.h parse/parser.cpp parse/parser.h parse/main_parse.h semantic/semantic.cpp semantic/semantic.h)
