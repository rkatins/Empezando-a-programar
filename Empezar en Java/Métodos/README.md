## Métodos
A diferencia de lenguajes de programacion como C, no existe un solo tipo y no son siempre funciones. En el caso de Java tenemos dos tipos en los que diferenciar (que a su vez se dividen en dos tipos más).

### Tipos de métodos

+ Funcion -> Devuelve un valor, tiene return
Una funcion devuelve el dato el cual es indicado en la primera línea del método.
```
    public String mSaludarFuncion() {
        String saludo = "Buenos dias";
        
        return saludo;
    }
```
+ Procedimiento -> No devuelve nada, no teiene return
Un procedimiento no devuelve nada, se indica como ```void```, el cual es indicado en la primera línea del método.
```
    public void mSaludarProcedimiento() {
        System.out.println("Buenos dias")
    }
```

---

Ambos tipos de métodos tienen dos variables, que son iguales para ambos métodos: con parámetros y sin parámetros.

+ Con parámetros
Pensemos en ello como una pieza de puzzle la cual requiere un requisito/s, si tu no le das ningun requisito/s o un requisito/s que coincida no va a funcionar.
```
    public String mSaludarFuncion(String saludo) {
        return saludo;
    }
```
```
    public void mSaludarProcedimiento(String saludo) {
        System.out.println(saludo)
    }
```
En este ejemplo el método nos pide una variable de tipo ```String``` y nosotros le pasamos una variable de tipo ```String``` (da igual el nombre de nuestra variable, el nombre que se indica en el método es el nombre con el que se va a usar dentro del propio método).

+ Sin parámetros
```
    public String mSaludarFuncion() {
        String saludo = "Buenos dias";
        
        return saludo;
    }
```
```
    public void mSaludarProcedimiento() {
        System.out.println("Buenos dias")
    }
```
