/*1- deve ter um caso basico (um fim)
 2- deve mudar o seu estado e se aproximar do caso basico,a cada chamada o resultado obtido deve se aproximar daquele resultado previsto como resultado final
 3- deve chamar a si mesmo recursivamente

 recursão direta - onde a função chama ela mesma
 recursao indireta - onde a primeira função chama uma segunda que chama a primeira novamente
 recursao em calda- onde a chamada da recursividade é a ultima instrução a ser executada
 recursao sem calda- qualquer caso sem cauda, a chamada da recursividade NÃO é a ultima instrução, e vc provavelmente vai usar esse resultado p realizar alguma instrução

 a recursão tem uma estrutura de dados embutida nela, coisa que os loopings n possuem, pra cada chamada da função usualmente há uma copia separada de cada variavel local e dos parametros, o looping por si só n te dá isso, vc teria q criar uma pilha por exemplo

 1. Qual é o caso básico?
          ↓
2. O que muda a cada chamada?
          ↓
3. Essa mudança me aproxima do caso básico?
          ↓
4. Depois da chamada recursiva ainda existe alguma coisa para fazer?
 */