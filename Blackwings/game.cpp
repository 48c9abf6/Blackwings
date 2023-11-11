#include "pch.h"

VOID Game::OnGameInit() 
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    Hooks::HookWinAPI();
    Hooks::HookWinSock();

    DetourTransactionCommit();
}

VOID Game::OnGameStart()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    Hooks::HookGameResolution();

    DetourTransactionCommit();
}