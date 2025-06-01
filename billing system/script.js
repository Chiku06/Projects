// Menu items
const menuItems = [
    { name: "Chole Bhature", price: 80},
    { name: "Lassii", price: 40 },
    { name: "Chai", price: 20 },
    { name: "Samosha", price: 15 },
    { name: "Khadi Chawal", price: 80 }
];

// Load menu on page load
window.onload = function() {
    const menuTable = document.getElementById("menu");
    menuItems.forEach((item, index) => {
        const row = `<tr>
                        <td>${item.name}</td>
                        <td>${item.price.toFixed(2)}</td>
                        <td><input type="number" id="qty-${index}" min="0" value="0"></td>
                     </tr>`;
        menuTable.innerHTML += row;
    });
};

function calculateTotal() {
    let subtotal = 0;
    menuItems.forEach((item, index) => {
        const qty = parseInt(document.getElementById(`qty-${index}`).value) || 0;
        subtotal += item.price * qty;
    });

    const tax = subtotal * 0.18;
    const total = subtotal + tax;

    document.getElementById("subtotal").innerText = subtotal.toFixed(2);
    document.getElementById("tax").innerText = tax.toFixed(2);
    document.getElementById("total").innerText = total.toFixed(2);
}
