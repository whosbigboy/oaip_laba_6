// WindowsProject2.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "WindowsProject2.h"

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
    LoadStringW(hInstance, IDC_WINDOWSPROJECT2, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WINDOWSPROJECT2));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINDOWSPROJECT2));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_WINDOWSPROJECT2);
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
            //car
            HPEN hPen = CreatePen(PS_SOLID,3,RGB(128,0,60));
            SelectObject(hdc,hPen);
            
            HBRUSH hBrush = CreateSolidBrush(RGB(255,128,67));
            SelectObject(hdc,hBrush);

            Rectangle(hdc,50,200,300,250);

            MoveToEx(hdc,100,200,NULL);
            LineTo(hdc,150,150);
            LineTo(hdc,250,150);
            LineTo(hdc,300,200);

            hPen = CreatePen(PS_SOLID,8,RGB(30,100,190));
            SelectObject(hdc,hPen);

            hBrush = CreateHatchBrush(HS_FDIAGONAL,RGB(190,30,85));
            SelectObject(hdc, hBrush);

            Ellipse(hdc,75,225,125,275);

            hPen = CreatePen(PS_SOLID, 12, RGB(2, 198, 225));
            SelectObject(hdc, hPen);

            hBrush = CreateHatchBrush(HS_CROSS, RGB(19, 220, 5));
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 225, 225, 275, 275);
            //snejnaya baba

            hPen = CreatePen(PS_DASH, 1, RGB(255, 18, 90));
            SelectObject(hdc, hPen);

            hBrush = CreateHatchBrush(HS_HORIZONTAL, RGB(19, 220, 5));
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 350, 300, 450, 200);

            hPen = CreatePen(PS_SOLID, 1, RGB(202, 19, 225));
            SelectObject(hdc, hPen);

            hBrush = CreateHatchBrush(HS_CROSS, RGB(119, 20, 135));
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 365, 225, 435, 150);

            hPen = CreatePen(PS_SOLID, 1, RGB(234, 1, 225));
            SelectObject(hdc, hPen);

            hBrush = CreateSolidBrush(RGB(129, 22, 2255));
            SelectObject(hdc, hBrush);

            Ellipse(hdc, 375, 165, 425, 115);

            hPen = CreatePen(PS_SOLID,5, RGB(133, 5, 10));
            SelectObject(hdc,hPen);
            MoveToEx(hdc,375,175,NULL);
            LineTo(hdc,325,200);
            MoveToEx(hdc, 425, 175, NULL);
            LineTo(hdc, 475, 200);

            hPen = CreatePen(PS_SOLID,5,RGB(255,124,18));
            SelectObject(hdc, hPen);
            MoveToEx(hdc,400,135,NULL);
            LineTo(hdc, 350, 150);
            LineTo(hdc,400,140);
            hPen = CreatePen(PS_SOLID, 10, RGB(0, 0, 0));
            SelectObject(hdc, hPen);
            MoveToEx(hdc, 390, 125, NULL);
            LineTo(hdc, 390, 123);
            MoveToEx(hdc, 405, 125, NULL);
            LineTo(hdc, 405, 123);

            //автобус
            hPen = CreatePen(PS_SOLID,5,RGB(235,232,50));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(235, 232, 50));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 500, 250, 1000, 75);
            //колеса
            hPen = CreatePen(PS_SOLID, 10, RGB(0, 0, 0));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(204, 197, 209));
            SelectObject(hdc, hBrush);
            Ellipse(hdc, 550, 275, 600, 225);
            Ellipse(hdc, 850, 275, 900, 225);
            //Окна
            hPen = CreatePen(PS_SOLID, 5, RGB(228, 228, 228));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(50, 228, 247));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 500, 175, 600, 75);
            Rectangle(hdc,625,150,675,100);
            Rectangle(hdc, 825, 150, 875, 100);
            Rectangle(hdc, 925, 150, 975, 100);
            //Двери
            hBrush = CreateSolidBrush(RGB(2, 2, 2));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 700, 250, 750, 150);
            Rectangle(hdc,750,250,800,150);
            //цветок
            hPen = CreatePen(PS_SOLID, 5, RGB(150,17,38));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(150, 17, 38));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 1050, 250, 1100, 200);
            hPen = CreatePen(PS_SOLID, 1, RGB(56, 225, 15));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(31,143,8));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 1070, 200, 1080, 100);
            hPen = CreatePen(PS_SOLID, 5, RGB(236, 242, 45));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(97, 22, 32));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 1050, 100, 1100, 50);
            //лепестки
            hPen = CreatePen(PS_SOLID, 1, RGB(236, 242, 45));
            SelectObject(hdc, hPen);
            hBrush = CreateSolidBrush(RGB(236, 242, 45));
            SelectObject(hdc, hBrush);
            Rectangle(hdc, 1025, 25, 1055, 125);
            Rectangle(hdc, 1100, 25, 1130, 125);
            Rectangle(hdc, 1050, 25, 1100, 50);
            Rectangle(hdc, 1050, 100, 1100, 125);
            
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
