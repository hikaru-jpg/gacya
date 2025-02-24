document.getElementById("gacha-btn").addEventListener("click", function() {
    let items = ["SSRキャラ", "SRキャラ", "Rキャラ", "Nキャラ"];
    let rates = [5, 20, 50, 25]; // 排出率（%）
    
    // ランダムにガチャ結果を決定
    let randomValue = Math.random() * 100;
    let sum = 0;
    let result = "???";
    for (let i = 0; i < items.length; i++) {
        sum += rates[i];
        if (randomValue < sum) {
            result = items[i];
            break;
        }
    }

    document.getElementById("result").textContent = `結果: ${result}`;
});
