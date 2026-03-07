// DOM PART ONE 

//alert("hello mantu"); // POPUP IN WEB PAGE 

// WINDOW OBJECT 
// window.alert("hello mantu");
// window.document
// window.document.childNodes


//DOM MANTMULATION 
// SELECTING WITH ID 
// IN CSS FILE CAN BE LINTENED AS (#idName)
let headder1 = document.getElementById("1");


// RETURNS HEADDER ID /*h1#1attributeStyleMap: StylePropertyMap {size: 0}attributes: NamedNodeMap {0: id, id: id, length: 1}baseURI: "http://localhost:5500/PROJECTS/JS/LEC_SRADHA_DIDI/"childNodes: NodeList [text]children: HTMLCollection []classList: DOMTokenList [value: '']clientHeight: 58clientWidth: 769contentEditable: "inherit"currentCSSZoom: 1dataset: DOMStringMap {}firstChild: textid: "1"innerHTML: "Hello Mantu"innerText: "Hello Mantu"isConnected: truelastChild: textlocalName: "h1"namespaceURI: "http://www.w3.org/1999/xhtml"nextElementSibling: h2#2nextSibling: textnodeName: "H1"nodeType: 1offsetHeight: 58offsetLeft: 8offsetParent: bodyoffsetTop: 34offsetWidth: 769outerHTML: "<h1 id=\"1\">Hello Mantu</h1>"outerText: "Hello Mantu"ownerDocument: documentparentElement: bodyparentNode: bodypart: DOMTokenList [value: '']previousSibling: textscrollHeight: 58scrollWidth: 769spellcheck: truestyle: CSSStyleDeclaration {accentColor: '', additiveSymbols: '', alignContent: '', alignItems: '', alignSelf: '', …}tabIndex: -1tagName: "H1"textContent: "Hello Mantu"translate: truewritingSuggestions: "true"[[Prototype]]: HTMLHeadingElement*/
// console.log(headder1);
console.dir(headder1);


// SELECTING WITH CLASS 
// IN CSS FILE CAN BE LINTENED AS (.className)
document.getElementsByClassName("");

// SELECTING WITH TAG
// IN CSS FILE CAN BE LINTENED AS , BY  DEFAULT , (tagName)
document.getElementsByTagName("");

//QUERRY SELECTOR 
// RETURNS NODELIST
document.querySelector("");