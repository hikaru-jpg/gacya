function callCppFunction() {
            let inputValue = document.getElementById("userInput").value;

            if (inputValue === "" || isNaN(inputValue)) {
                alert("数値を入力してください！");
                return;
            }

            // C++ の関数（WebAssembly）を呼び出して値を渡す
            let result = Module.ccall(
                'processInput', // C++ 側の関数名
                'number',       // 返り値の型（number = int）
                ['number'],     // 引数の型（整数を受け取る）
                [parseInt(inputValue)] // JavaScriptから数値を渡す
            );

            document.getElementById("result").textContent = `C++ の結果: ${result}`;
        }
