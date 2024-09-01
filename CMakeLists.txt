cmake_minimum_required(VERSION 3.5)

# Define o nome do projeto e a linguagem
project(ProgEstrut LANGUAGES C)

# Adiciona o executável ao projeto
add_executable(ProgEstrut main.c)

# Inclui diretórios padrão de instalação do GNU
include(GNUInstallDirs)

# Define as regras de instalação
install(TARGETS ProgEstrut
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}  # Instala o executável no diretório padrão de binários
)
