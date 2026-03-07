// EVENT IN JS 
// EVEVT = MOUSE CLICKS , TAPS , MOUSE MOVEMENTS ETC.
// you can get more events on mdn documents 
//onclick, ondblclik,

// EVENT HANDLELINH IN JS 

let btn1 = document.querySelector("#btn1");

// btn1.onclick = () => {

//     console.log("buttion was clicked ");
// };

// EVENT LISTENER
btn1.addEventListener("click",() =>{
    console.log(" buttion 1 was clicked - handler 1");

});
btn1.addEventListener("click",() =>{
    console.log(" buttion 1 was clicked - handler 2");

});
btn1.addEventListener("click",() =>{
    console.log(" buttion 1 was clicked - handler 4");

});
const listner3 = () =>{
    console.log(" buttion 1 was clicked - handler 3");

};

btn1.removeEventListener("click", listner3);
