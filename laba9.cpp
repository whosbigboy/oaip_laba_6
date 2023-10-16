// laba9.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "laba9.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_LABA9, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LABA9));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LABA9));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LABA9);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
void StClausAuto(HDC hdc, int x, int y) {
    //вверхний треугольник
    MoveToEx(hdc, 20 + x, 0 + y, NULL);
    LineTo(hdc, 30 + x, 20 + y);
    LineTo(hdc, 10 + x, 20 + y);;
    LineTo(hdc, 20 + x, 0 + y);
    //средний
    MoveToEx(hdc, 20 + x, 10 + y, NULL);
    LineTo(hdc, 30 + x, 40 + y);
    LineTo(hdc, 10 + x, 40 + y);;
    LineTo(hdc, 20 + x, 10 + y);
    //нижний
    MoveToEx(hdc, 20 + x, 30 + y, NULL);
    LineTo(hdc, 40 + x, 80 + y);
    LineTo(hdc, 0 + x, 80 + y);;
    LineTo(hdc, 20 + x, 30 + y);
}
void drawTruck(HDC hdc, int x, int y) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 200));
    SelectObject(hdc, hPen);

    Rectangle(hdc, 0 + x, 30 + y, 40 + x, 50 + y);
    Rectangle(hdc, 10 + x, 10 + y, 40 + x, 30 + y);
    Rectangle(hdc, 40 + x, 0 + y, 100 + x, 50 + y);

    hPen = CreatePen(PS_SOLID, 3, RGB(100, 0, 0));
    SelectObject(hdc, hPen);
    Ellipse(hdc, 10 + x, 40 + y, 30 + x, 60 + y);
    Ellipse(hdc, 70 + x, 40 + y, 90 + x, 60 + y);
}
void drawTruck1(HDC hdc) {
    drawTruck(hdc, 750,10);
    drawTruck(hdc, 750,310);
    drawTruck(hdc, 1050,10);
    drawTruck(hdc, 1050, 310);
    drawTruck(hdc, 900, 160);
}
void drawTruck2(HDC hdc) {
    drawTruck(hdc,10,400);
    drawTruck(hdc, 135, 400);
    drawTruck(hdc, 260, 400);
    drawTruck(hdc, 385, 400);
    drawTruck(hdc, 510, 400);
    drawTruck(hdc, 635, 400);
}
void drawTruck3(HDC hdc) {
    drawTruck(hdc,750, 10);
    drawTruck(hdc, 750, 75);
    drawTruck(hdc, 750, 150);
    drawTruck(hdc, 750, 225);
    drawTruck(hdc, 750, 310);
    drawTruck(hdc, 750, 385);
}
void drawTruck4(HDC hdc) {
    drawTruck(hdc, 510, 10);
    drawTruck(hdc, 550, 75);
    drawTruck(hdc, 590, 140);
    drawTruck(hdc, 630, 205);
}
void Logo(HDC hdc, int x, int y) {
    HPEN hPen = CreatePen(PS_SOLID, 10, RGB(150, 150, 150));
    SelectObject(hdc, hPen);
    Ellipse(hdc, x, y, x + 200, y + 200);
    Ellipse(hdc,x+5,y+5,x+195,y+195);
    Ellipse(hdc, x + 10, y + 10, x + 190, y + 190);
   
    MoveToEx(hdc, x-25, y+90, NULL);
    LineTo(hdc,x+110,y+90);
    MoveToEx(hdc, x-25, y+95, NULL);
    LineTo(hdc, x+110, y+95);
    MoveToEx(hdc, x-25, y+100, NULL);
    LineTo(hdc, x+110, y+100);

    LineTo(hdc,x+90,y+115);
    MoveToEx(hdc, x+100, y+100, NULL);
    LineTo(hdc, x+80,y+115);
    MoveToEx(hdc, x+90, y+100, NULL);
    LineTo(hdc, x+70, y+115);

    LineTo(hdc,x+230,y+115);
    MoveToEx(hdc, x+70, y+120, NULL);
    LineTo(hdc, x+230, y+120);
    MoveToEx(hdc, x+70, y+125, NULL);
    LineTo(hdc, x+230, y+125);

    MoveToEx(hdc, x-25, y+90, NULL);
    LineTo(hdc, x-45, y+100);
    LineTo(hdc,x-25,y+100);

    MoveToEx(hdc, x+230, y+125, NULL);
    LineTo(hdc, x+250, y+115);
    LineTo(hdc,x+230,y+115);
}
void Logo1(HDC hdc,int x,int y){
    Logo(hdc, x, y);
    Logo(hdc,x+300,y );
    Logo(hdc, x + 600, y);
}
void Logo2(HDC hdc, int x, int y) {
    Logo(hdc, x, y);
    Logo(hdc, x, y+225);
    Logo(hdc, x, y+450);
}
void Logo3(HDC hdc, int x, int y) {
    Logo(hdc, x, y);
    Logo(hdc, x + 225, y + 125);
    Logo(hdc, x + 450, y + 250);
    Logo(hdc, x+450, y);
}
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...
            StClausAuto(hdc, 0, 0);
            StClausAuto(hdc, 200, 200);
            StClausAuto(hdc, 100, 100);
            StClausAuto(hdc, 0, 200);
            StClausAuto(hdc, 200, 0);

            int x = 0;
            do{
                StClausAuto(hdc,x,300);
                x += 50;
            } while (x < 400);

            int y = 0;
            do {
                StClausAuto(hdc, 350, y);
                y += 100;
            } while (y < 300);

            x = 410;
            y = 0;
            do {
                StClausAuto(hdc, x, y);
                x += 75;
                y += 100;
            } while (x < 650 && y < 400);

            drawTruck(hdc,425,300);

            drawTruck1(hdc);

            drawTruck2(hdc);

            drawTruck3(hdc);

            drawTruck4(hdc);

            Logo(hdc, 50, 500);

            Logo1(hdc, 325, 500);

            Logo2(hdc, 925, 50);

            Logo3(hdc, 925, 50);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
