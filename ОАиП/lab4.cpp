// WindowsProject1.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject1.h"

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
    LoadStringW(hInstance, IDC_WINDOWSPROJECT1, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT1));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT1));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT1);
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
//
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

        HPEN hPen;
        //dom
        hPen = CreatePen(PS_SOLID, 5, RGB(158, 47, 29));
        SelectObject(hdc, hPen);
        //Крыша
        MoveToEx(hdc, 150, 350, NULL);
        LineTo(hdc, 275, 250);
        LineTo(hdc, 400, 350);
        //Дом
        LineTo(hdc,400,525);
        LineTo(hdc,150,525);
        LineTo(hdc,150,350);
        LineTo(hdc,400,350);
        //Окно
        MoveToEx(hdc, 225, 400, NULL);
        LineTo(hdc,225,475);
        LineTo(hdc,325,475);
        LineTo(hdc,325,400);
        LineTo(hdc,225,400);
        //Рама
        MoveToEx(hdc,275,400,NULL);
        LineTo(hdc,275,475);
        MoveToEx(hdc,275,425,NULL);
        LineTo(hdc,325,425);
        //elka
        hPen = CreatePen(PS_SOLID,2,RGB(1,99,38) );
        SelectObject(hdc, hPen);
        MoveToEx(hdc, 450, 525, NULL);
        LineTo(hdc,600,525);
        LineTo(hdc,525,450);
        LineTo(hdc,575,450);
        LineTo(hdc,525,400);
        LineTo(hdc,550,400);
        LineTo(hdc,525,375);
        LineTo(hdc,500,400);
        LineTo(hdc,525,400);
        LineTo(hdc,475,450);
        LineTo(hdc,525,450);
        LineTo(hdc,450,525);
        //derevo
        MoveToEx(hdc,75,525,NULL);
        LineTo(hdc,75,400);
        MoveToEx(hdc,75,475,NULL);
        LineTo(hdc,25,425);
        MoveToEx(hdc, 40, 440, NULL);
        LineTo(hdc, 25, 475);
        MoveToEx(hdc, 50, 450, NULL);
        LineTo(hdc, 60, 415);
        MoveToEx(hdc, 100, 400, NULL);
        LineTo(hdc,85,375);
        MoveToEx(hdc, 85, 415, NULL);
        LineTo(hdc, 100, 450);
        MoveToEx(hdc, 75, 425, NULL);
        LineTo(hdc, 125, 375);
        //samolet
        hPen = CreatePen(PS_SOLID,2,RGB(8,139,219));
        SelectObject(hdc,hPen);
        MoveToEx(hdc,425,175,NULL);
        LineTo(hdc,500,100);
        LineTo(hdc,800,100);
        LineTo(hdc,850,50);
        LineTo(hdc,900,50);
        LineTo(hdc,875,100);
        LineTo(hdc,850,175);
        LineTo(hdc,675,175);
        MoveToEx(hdc, 600, 175, NULL);
        LineTo(hdc, 425, 175);
        MoveToEx(hdc, 450,150, NULL);
        LineTo(hdc, 500,150);
        LineTo(hdc,500,100);
        MoveToEx(hdc, 700, 150, NULL);
        LineTo(hdc, 600, 250);
        LineTo(hdc,525,250);
        LineTo(hdc,625,150);
        MoveToEx(hdc, 665, 100, NULL);
        LineTo(hdc, 710, 50);
        LineTo(hdc,770,50);
        LineTo(hdc,730,100);
        //budka
        hPen = CreatePen(PS_SOLID, 2, RGB(225, 0, 0));
        SelectObject(hdc, hPen);
        MoveToEx(hdc, 700, 525, NULL);
        LineTo(hdc, 800, 525);
        LineTo(hdc,800,450);
        LineTo(hdc, 825, 450);
        LineTo(hdc,750,400);
        LineTo(hdc,675,450);
        LineTo(hdc,700,450);
        LineTo(hdc,700,525);
        MoveToEx(hdc, 725, 525, NULL);
        LineTo(hdc, 725,490);
        LineTo(hdc, 730, 485);
        LineTo(hdc,770,485);
        LineTo(hdc,775,490);
        LineTo(hdc,775,525);
        

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
