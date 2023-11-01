﻿// lab14.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "lab14.h"
#include "Images.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

int image1_x = 110;
int image1_y = 110;
int type = 0;
int r = 255;
int g = 0;
int b = 0;

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
    LoadStringW(hInstance, IDC_LAB14, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LAB14));

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
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LAB14));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LAB14);
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
    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_LEFT: // стрелка ВЛЕВО
            image1_x -= 10;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_RIGHT: // стрелка ВПРАВО
            image1_x += 10;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_DOWN: // стрелка ВНИЗ
            image1_y += 10;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_UP: // стрелка ВВЕРХ
            image1_y -= 10;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_SPACE:
            type++;
            if (type > 23)type = 0;
            InvalidateRect(hWnd, NULL, TRUE);
            break;
        case VK_F1:
            r+=25;
            if (r > 255)r = 0;
            InvalidateRect(hWnd, NULL, TRUE);
        case VK_F2:
            g+=25;
            if (g > 255)g = 0;
            InvalidateRect(hWnd, NULL, TRUE);
        case VK_F3:
            b+=25;
            if (b > 255)b = 0;
            InvalidateRect(hWnd, NULL, TRUE);

        
        }
        break;
    case WM_LBUTTONDOWN:
    {
        WORD xPos, yPos;

        xPos = LOWORD(lParam);
        yPos = HIWORD(lParam);

        image1_x = xPos;
        image1_y = yPos;
        InvalidateRect(hWnd, NULL, TRUE);
        break;
    }
    break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Добавьте сюда любой код прорисовки, использующий HDC...
            //Rectangle(hdc, image1_x - 10, image1_y - 10, image1_x + 10, image1_y + 10);
            //Image5(hdc, image1_x, image1_y, RGB(120,23,243));
            if (type == 0) Image0(hdc, image1_x, image1_y, RGB(r, g, b));
            if (type == 1) Image1(hdc, image1_x, image1_y, RGB(r, g, b));
            if (type == 2) Image2(hdc, image1_x, image1_y, RGB(r, g, b));
            if (type == 3) Image3(hdc, image1_x, image1_y, RGB(r, g, b));
            if (type == 4) Image4(hdc, image1_x, image1_y, RGB(r, g, b)); 
            if (type == 5) Image5(hdc, image1_x, image1_y, RGB(r,g,b));
            if (type == 6) PictureV(hdc);
            if (type == 7) PictureH(hdc);
            if (type == 8) PictureVH(hdc);
            if (type == 9) PictureVH1(hdc);
            if (type == 10) PictureVH2(hdc);
            if (type == 11) PictureVH3(hdc);
            if (type == 12) PictureVH4(hdc);
            if (type == 13) drawHome(hdc);
            if (type == 14) drawCar(hdc);
            if (type == 15) drawTree(hdc);
            if (type == 16) drawTree2(hdc);
            if (type == 17) drawElka(hdc);
            if (type == 18) drawDerevo(hdc);
            if (type == 19) drawSnejnayaBaba(hdc);
            if (type == 20) drawBus(hdc);
            if (type == 21) drawFlower(hdc);
            if (type == 22) drawTrava(hdc);
            if (type == 23) drawLestnica(hdc);
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
