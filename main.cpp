#include <iostream>
#include <emscripten.h>

EM_JS(void, show_alert, (), {
    alert("Hello, World!");
});


extern "C" {
    void showHelloWorld() {
        show_alert();  // Вызываем функцию alert
    }
    int add(int a, int b) {
        return a + b;
    }
}