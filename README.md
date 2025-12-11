# Super Trunfo em C


Um projeto educativo desenvolvido como parte da minha jornada de aprendizagem em **Linguagem C**.

Cada nível introduz novos conceitos de programação, evoluindo desde entrada e saída básicas até cálculos, funções e comparações completas entre cartas.


---
## 🌱 Nível Novato

📌 **Objetivo**: apenas entrada e saída de dados.

Neste nível, o usuário cadastra manualmente duas cartas e seus atributos.

Não há cálculos automáticos nem comparações — apenas coleta e exibição dos dados.

---
## 🌍 Nível Aventureiro

📌 **Objetivo**: introduzir cálculos automáticos sem usar laços ou condicionais.

Além dos atributos básicos, são calculados automaticamente:

- **Densidade populacional:** `população / área`

- **PIB per capita:** `PIB / população`

As cartas ainda são cadastradas manualmente, mas agora ganham atributos derivados.

---
## 🏆 Nível Mestre
📌 **Objetivo:** comparar cartas e determinar vencedores.

O código agora inclui:

### ✔️ Comparação entre atributos

Para cada atributo, o programa indica qual carta é vencedora:

- **Densidade populacional:** menor valor vence.

- **Todos os outros atributos:** maior valor vence.

### ✔️ Cálculo do Super Poder

Soma ponderada dos principais atributos de cada carta:

Inclui:

- População

- Área

- PIB

- Pontos turísticos

- PIB per capita

- Densidade invertida (`1 / densidade`), para manter o critério “maior vence”

A carta com maior Super Poder é a campeã.

---
## 📁 Estrutura do Repositório
```
supertrunfo/
│
├── nivel-novato/
│   └── main.c
│
├── nivel-aventureiro/
│   └── main2.c
│
├── nivel-mestre/
│   └── main3.c
│
└── supertrunfo2/
    ├── nivel-novato.c
    ├── nivel-aventureiro.c
    └── nivel-mestre.c
```

A pasta `supertrunfo2/` contém versões mais recentes e organizadas. 

---
## 💻 Tecnologias Usadas

- Linguagem C

- `stdio.h` e `string.h`

- Estruturas (`struct`)

- Funções e cálculos matemáticos básicos


---
## 💖 Autora
Projeto desenvolvido por **Maria N. V. Borges**,

estudante de Ciência da Computação, apaixonada por programação, tecnologia e aprendizado contínuo.


---
## ✨ Contribuições

Fique à vontade para:

- Abrir issues

- Sugerir melhorias

- Fazer pull requests

Toda contribuição é bem-vinda! 💫
