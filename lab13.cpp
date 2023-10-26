// lab13.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "lab13.h"

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
    LoadStringW(hInstance, IDC_LAB13, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LAB13));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LAB13));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LAB13);
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

void Image0(HDC hdc, int cx, int cy,COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4] = {
        cx,cy + 20,
        cx + 20,cy - 20,
        cx - 20,cy - 20,
        cx,cy + 20
    };
    Polyline(hdc, p, 4);

    DeleteObject(hPen);
}

void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4] = {
        cx,cy - 20,
        cx + 20,cy + 20,
        cx - 20,cy + 20,
        cx,cy - 20
    };
    Polyline(hdc, p, 4);

    DeleteObject(hPen);
}

void Image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[5] = {
        cx,cy - 20,
        cx + 20,cy,
        cx,cy + 20,
        cx - 20,cy,
        cx,cy - 20
    };
    Polyline(hdc, p, 5);

    DeleteObject(hPen);
}

void Image3(HDC hdc, int cx, int cy,COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[5] = {
        cx,cy ,
        cx - 20,cy - 40,
        cx,cy - 20,
        cx + 20,cy - 40,
        cx,cy
    };
    Polyline(hdc, p, 5);

    DeleteObject(hPen);
}

void Image4(HDC hdc, int cx, int cy,COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[7] = {
        cx,cy,
        cx,cy - 40,
        cx + 40,cy - 40,
        cx + 20,cy - 30,
        cx + 40,cy - 20,
        cx,cy - 20,
        cx,cy
    };
    Polyline(hdc, p, 7);

    DeleteObject(hPen);
}

void Image5(HDC hdc, int cx, int cy,COLORREF color) {
    HPEN hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[6] = {
        cx,cy,
        cx,cy - 40,
        cx + 20,cy - 20,
        cx + 40,cy - 40,
        cx + 40,cy,
        cx,cy
    };
    Polyline(hdc, p, 6);

    DeleteObject(hPen);
}

void PictureV(HDC hdc) {
    int x, y,z, i;
    x = 240;
    y = 40;
    z = 250;
    i = 0;
    do {
        Image0(hdc, x, y, RGB(0, 0, z));
        y += 50;
        z -= 40;
        i++;
    } while (i < 6);
}

void PictureH(HDC hdc) {
    int x, y, z,w, i;
    x = 40;
    y = 290;
    z = 250;
    w = 125;
    i = 0;
    do {
        Image0(hdc, x, y, RGB(z, w, 0));
        x += 50;
        z -= 40;
        w -= 25;
        i++;
    } while (i < 6);
}

void PictureVH(HDC hdc) {
    int x, y, i, j;
    unsigned r, g;

    y = 40;
    i = 0;
    g = 0;
    do {
        x = 340;
        j = 0;
        r = 0;
        do {
            Image0(hdc, x, y, RGB(r, g,0));
            x += 50;
            j++;
            r += 36;
        } while (j < 8);
        y += 50;
        i++;
        g += 51;
    } while (i < 6);
}

void PictureVH1(HDC hdc) {
    int x, y, i, j;
    unsigned r, g;

    y = 40;
    i = 0;
    g = 0;
    do {
        x = 740;
        j = 0;
        r = 0;
        do {
            Image2(hdc, x, y, RGB(r, g, 0));
            x += 50;
            j++;
            r += 36;
        } while (j < 8);
        y += 50;
        i++;
        g += 51;
    } while (i < 6);
}

void PictureVH2(HDC hdc) {
    int x, y, i, j;
    unsigned r, g;

    y = 360;
    i = 0;
    g = 0;
    do {
        x = 740;
        j = 0;
        r = 0;
        do {
            Image3(hdc, x, y, RGB(r, g, 0));
            x += 50;
            j++;
            r += 36;
        } while (j < 8);
        y += 50;
        i++;
        g += 51;
    } while (i < 6);
}

void PictureVH3(HDC hdc) {
    int x, y, i, j;
    unsigned r, g;

    y = 360;
    i = 0;
    g = 0;
    do {
        x = 320;
        j = 0;
        r = 0;
        do {
            Image4(hdc, x, y, RGB(r, g, 0));
            x += 50;
            j++;
            r += 36;
        } while (j < 8);
        y += 50;
        i++;
        g += 51;
    } while (i < 6);
}

void PictureVH4(HDC hdc) {
    int x, y, i, j;
    unsigned r, g;

    y = 360;
    i = 0;
    g = 0;
    do {
        x = 20;
        j = 0;
        r = 0;
        do {
            Image5(hdc, x, y, RGB(r, g, 0));
            x += 50;
            j++;
            r += 50;
        } while (j < 6);
        y += 50;
        i++;
        g += 51;
    } while (i < 6);
}



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

            Image0(hdc, 40, 40, RGB(255, 0, 0));
            Image0(hdc, 140, 40, RGB(200, 0, 0));
            Image0(hdc, 240, 40, RGB(150, 0, 0));
            Image0(hdc, 240, 240, RGB(100, 0, 0));
            Image0(hdc, 40, 240, RGB(0, 0, 0));

            Image1(hdc, 90, 40, RGB(0, 255, 0));
            Image1(hdc, 190, 40, RGB(0, 200, 0));
            Image1(hdc, 90, 240, RGB(0, 150, 0));
            Image1(hdc, 190, 240, RGB(0, 100, 0));
            Image1(hdc, 140, 240, RGB(0, 50, 0));

            PictureV(hdc);

            PictureH(hdc);

            PictureVH(hdc);

            PictureVH1(hdc);

            PictureVH2(hdc);

            PictureVH3(hdc);

            PictureVH4(hdc);

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
