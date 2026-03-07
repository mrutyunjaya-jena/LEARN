// CLASS & OBJECTS

// OBJECTS 



 const student ={

    fullName : "mant ",
    roll  : 89,

 };


 // PROTOTYPES IN JS 


 const studentN = {
    greet() {
        console.log("Hello!");
    }
};

const mantu = {
    name: "Mantu"
};

// Inheriting
mantu.__proto__ = studentN;

mantu.greet(); // Hello!


// Constructor Function + Prototype

function Person(name) {
    this.name = name;
}

Person.prototype.sayHello = function() {
    console.log("Hi, I am " + this.name);
};

const p1 = new Person("Mantu");
const p2 = new Person("Rahul");

p1.sayHello();
p2.sayHello();


//Modern Class (Behind the Scenes Uses Prototype)

class Animal {
    constructor(name) {
        this.name = name;
    }

    speak() {
        console.log(this.name + " makes sound");
    }
}

const dog = new Animal("Dog");
dog.speak();


console.log(dog.__proto__);
console.log(dog.__proto__.__proto__);



// CLASSES IN JS 

class Calculator {
    add(a, b) {// CONSTRUCTORS IN CLASS (PARAMETERIZED)
        return a + b;
    }

    multiply(a, b) {
        return a * b;
    }
}

const calc = new Calculator(); // object usngi new keyword 
console.log(calc.add(5, 3));      // 8
console.log(calc.multiply(5, 3)); // 15


// INHERITANCE 
// METHOD OVERIDING

class Animal {
    speak() {
        console.log("Animal makes a sound");
    }
}

class Dog extends Animal {
    speak() {
        console.log("Dog barks");
    }
}

const d = new Dog();
d.speak();

// OVERRIDING USING SUPER KEYWORD 
class Dog extends Animal {
    speak() {
        super.speak();
        console.log("Dog barks loudly");
    }
}

const dO = new Dog();
dO.speak();


// METHOD OVERLOADING
class Calculator {
    add(a, b, c) {
        if (c !== undefined) {
            return a + b + c;
        }
        return a + b;
    }
}

const cal = new Calculator();

console.log(cal.add(2, 3));      // 5
console.log(cal.add(2, 3, 4));   // 9
