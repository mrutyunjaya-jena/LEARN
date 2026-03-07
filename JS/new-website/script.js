const button = document.getElementById("helloBtn");
const message = document.getElementById("message");

button.addEventListener("click", () => {
  message.textContent = "Nice. Your new site is working.";
});
