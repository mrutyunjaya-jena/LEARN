// ARRAYS 

let fruits = ["apple ", "mango", "grapes"];

// ARRAY INDEX 
console.log(fruits[0]);
console.log(fruits);

// LOOP OVER ARRAY
// ARRAY METHODS
fruits.push("guava");  // [ 'apple ', 'mango', 'grapes', 'guava' ]  = added at last 
console.log(fruits);

console.log(fruits.toString()); //apple ,mango,grapes,guava = prints aas a string , dot't chage an whole array 

let specFruit = ["tomato"];

let totFruits = fruits.concat(specFruit); // [ 'apple ', 'mango', 'grapes', 'guava', 'tomato' ] = joints arrya 1 and array 2
console.log(totFruits);

console.log(totFruits.pop()); // [ 'apple ', 'mango', 'grapes', 'guava' ] = last one tamato is removed
console.log(totFruits);

totFruits.unshift("fig"); // [ 'fig', 'apple ', 'mango', 'grapes', 'guava' ] = added at first 
console.log(totFruits);
totFruits.shift("fig"); //[ 'apple ', 'mango', 'grapes', 'guava' ] = removes at first 
console.log(totFruits);

// SLICE
console.log(totFruits.slice(1,3)); // [ 'mango', 'grapes' ] = returns slice of array but (last index -1) prints

// SPLICE 
console.log(totFruits.splice(2 ,1,"banana")); // change the original array and adds new  

console.log(totFruits);