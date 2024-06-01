; dll entry point designed In x64 MASM
.data
TRUE equ 1
DLL_PROCESS_ATTACH equ 1
DLL_THREAD_ATTACH equ 2
DLL_THREAD_DETACH equ 3
DLL_PROCESS_DETACH equ 0

.code
DllMain PROC hModule:QWORD, ul_reason_for_call:QWORD, lpReserved:QWORD
    ; ul_reason_for_call is passed in rdx

    ; switch (ul_reason_for_call)
    cmp rdx, DLL_PROCESS_ATTACH
    je handle_case
    cmp rdx, DLL_THREAD_ATTACH
    je handle_case
    cmp rdx, DLL_THREAD_DETACH
    je handle_case
    cmp rdx, DLL_PROCESS_DETACH
    je handle_case

    ; Default return TRUE
    mov eax, TRUE
    ret

handle_case:
    ; Handle the cases, break; does nothing special here
    mov eax, TRUE
    ret

DllMain ENDP
END
