// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146900b84 FUN_146900b84 body=117 status=ok
// SIG undefined FUN_146900b84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146900b84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964270) {
    FUN_144b3d300(&DAT_14c964270);
    if (DAT_14c964270 == -1) {
      DAT_14c964258 = 0;
      _DAT_14c964260 = 0;
      _DAT_14c964268 = 2;
      atexit(FUN_14283cd7e);
      _Init_thread_footer(&DAT_14c964270);
    }
  }
  return &DAT_14c964258;
}



// FUNCTION 146900bf9 FUN_146900bf9 body=341 status=ok
// SIG undefined FUN_146900bf9(void)

void FUN_146900bf9(longlong *param_1,char param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  undefined1 auStack_278 [40];
  short *local_250;
  short *local_248;
  ulonglong *local_240;
  char local_238;
  short local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  psVar1 = (short *)*param_1;
  iVar2 = (int)((ulonglong)(param_1[1] - (longlong)psVar1) >> 1);
  if (0 < iVar2) {
    iVar3 = 1;
    lVar4 = 0;
    psVar5 = psVar1;
    do {
      if (*psVar5 == 0x27) {
        if (iVar3 != 0) {
          local_248 = (short *)CONCAT44(local_248._4_4_,iVar2);
          local_250 = psVar1;
          iVar2 = FUN_144a98c79(&local_250,
                                CONCAT62((uint6)((ulonglong)(param_1[1] - (longlong)psVar1) >> 0x11)
                                         ,0x27),0);
          if (iVar3 + -1 < iVar2) {
            local_250 = local_230;
            local_238 = '\0';
            local_240 = &local_30;
            local_248 = local_250;
            FUN_1449668a2(&local_250,*param_1 + (lVar4 >> 0x20) * 2 + 2,iVar2 - iVar3);
            param_1[1] = *param_1;
            FUN_1449668a2(param_1,local_250,
                          (ulonglong)((longlong)local_248 - (longlong)local_250) >> 1);
            if (local_238 == '\x01') {
              FUN_1400020a8(local_250);
            }
          }
          else if (param_2 != '\0') {
            *(undefined2 *)param_1[1] = 0;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1269,
                          L"Bad path name: %s, missing \' or an incorrect format",*param_1);
          }
        }
        break;
      }
      psVar5 = psVar5 + 1;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
    } while (psVar5 < psVar1 + iVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146900d4f FUN_146900d4f body=127 status=ok
// SIG undefined FUN_146900d4f(void)

undefined8 FUN_146900d4f(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c949800 & 1) == 0) {
    FUN_144a4a122(&local_29);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_140be8491(param_1,&local_48,param_3);
    FUN_144a49ece(&local_29);
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146900dcf FUN_146900dcf body=16 status=ok
// SIG undefined FUN_146900dcf(void)

PRTL_CRITICAL_SECTION_DEBUG
FUN_146900dcf(_LIST_ENTRY *param_1,wchar_t *param_2,uint param_3,undefined4 param_4,wchar_t *param_5
             )

{
  ulonglong uVar1;
  longlong *plVar2;
  _LIST_ENTRY *p_Var3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  wchar_t *pwVar10;
  _LIST_ENTRY *p_Var11;
  undefined7 uVar17;
  LPCRITICAL_SECTION p_Var12;
  _LIST_ENTRY *p_Var13;
  size_t sVar14;
  longlong lVar15;
  undefined8 uVar16;
  _LIST_ENTRY *p_Var18;
  longlong lVar19;
  undefined *puVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  LPCRITICAL_SECTION p_Var24;
  longlong *plVar25;
  ulonglong uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  longlong *plVar32;
  ulonglong uVar33;
  char cVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  PRTL_CRITICAL_SECTION_DEBUG p_Var37;
  PRTL_CRITICAL_SECTION_DEBUG p_Var38;
  bool bVar39;
  undefined1 auStack_528 [32];
  _LIST_ENTRY *p_Stack_508;
  char cStack_4f9;
  ulonglong uStack_4f8;
  _LIST_ENTRY *p_Stack_4f0;
  uint uStack_4e8;
  uint uStack_4e4;
  longlong *plStack_4e0;
  longlong *plStack_4d8;
  uint *puStack_4d0;
  LPCRITICAL_SECTION p_Stack_4c8;
  _LIST_ENTRY *p_Stack_4c0;
  _LIST_ENTRY *p_Stack_4b8;
  longlong lStack_4b0;
  undefined4 uStack_4a4;
  longlong lStack_4a0;
  wchar_t *pwStack_498;
  ulonglong uStack_490;
  longlong lStack_488;
  undefined8 uStack_480;
  _LIST_ENTRY *p_Stack_478;
  undefined8 uStack_470;
  _LIST_ENTRY *p_Stack_468;
  _LIST_ENTRY *p_Stack_460;
  wchar_t *pwStack_458;
  char cStack_450;
  _LIST_ENTRY a_Stack_448 [2];
  _LIST_ENTRY *p_Stack_420;
  wchar_t awStack_3ee [211];
  wchar_t awStack_248 [256];
  ulonglong uStack_48;
  
  if ((DAT_14c949800 & 1) != 0) {
    return (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  p_Stack_4f0 = param_1;
  pwVar10 = wcschr(param_2,L'\'');
  if (pwVar10 == (wchar_t *)0x0) {
    FUN_1446f470e(&p_Stack_468,param_2,1);
    p_Var18 = p_Stack_468;
  }
  else {
    cStack_450 = '\0';
    pwStack_458 = (wchar_t *)&uStack_48;
    p_Stack_468 = a_Stack_448;
    if (param_2 == (wchar_t *)0x0) {
      sVar14 = 0;
    }
    else {
      sVar14 = wcslen(param_2);
    }
    p_Stack_460 = a_Stack_448;
    FUN_1449668a2(&p_Stack_468,param_2,sVar14);
    FUN_146900bf9(&p_Stack_468,0);
    FUN_1446f82e2(&p_Stack_478,(ulonglong)((longlong)p_Stack_460 - (longlong)p_Stack_468) >> 1);
    p_Var18 = p_Stack_478;
    if (cStack_450 == '\x01') {
      FUN_1400020a8(p_Stack_468);
    }
  }
  if ((param_3 & 0xc) == 0 && (char)param_4 == '\0') {
    FUN_1449232c8(&p_Stack_468,p_Var18);
    p_Var18 = p_Stack_468;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
    if ((DAT_14c949800 & 1) == 0) {
LAB_14027809d:
      p_Var24 = (LPCRITICAL_SECTION)&DAT_14c964408;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
      bVar39 = false;
    }
    else {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar30 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar30 != 2)) {
        if (iVar30 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140278b23;
        }
        goto LAB_14027809d;
      }
LAB_140278b23:
      bVar39 = true;
      p_Var24 = (LPCRITICAL_SECTION)0x0;
    }
    if (DAT_14c964438 == DAT_14c964464) {
LAB_1402780c3:
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      uVar4 = (uint)((ulonglong)p_Var18 >> 0x10);
      uVar5 = (uint)p_Var18 & 0xffff;
      uVar4 = (uVar5 >> 4) +
              ((uint)p_Var18 << 0x10 | uVar5) + (int)((ulonglong)p_Var18 >> 0x20) +
              (uVar4 << 0x13 | uVar4 & 0xffff);
      puVar20 = &DAT_14c964468;
      if (DAT_14c964470 != (undefined *)0x0) {
        puVar20 = DAT_14c964470;
      }
      iVar30 = *(int *)(puVar20 + (ulonglong)(DAT_14c964478 - 1U & uVar4) * 4);
      if (iVar30 == -1) goto LAB_1402780c3;
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      do {
        lVar23 = DAT_14c964430 + (longlong)iVar30 * 0x20;
        if (*(uint *)(DAT_14c964430 + (longlong)iVar30 * 0x20) == uVar4) {
          lStack_4b0 = lVar23 + 8;
          if (lStack_4b0 == 0 || lVar23 == 0) goto LAB_1402780c3;
          lVar15 = *(longlong *)(lVar23 + 8);
          plVar2 = *(longlong **)(lVar23 + 0x10);
          uStack_4f8 = 0;
          if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
            puVar31 = (uint *)(plVar2 + 2);
            uVar4 = *(uint *)(plVar2 + 5);
            uVar26 = 1;
            plVar25 = plVar2;
            if (uVar4 == 0) {
              uVar4 = 0;
              plVar32 = (longlong *)0x0;
              goto LAB_140278691;
            }
            puVar27 = (uint *)plVar2[4];
            if ((uint *)plVar2[4] == (uint *)0x0) {
              puVar27 = puVar31;
            }
            uVar28 = *puVar27;
            if (uVar28 != 0) {
              plVar32 = (longlong *)0x0;
              uVar5 = 0;
              goto LAB_140278650;
            }
            iVar30 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar30 = uVar4 - 1;
            }
            uVar35 = 0;
            uVar33 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar33 = uVar35;
            }
            plVar32 = (longlong *)(ulonglong)((int)uVar33 + 1);
            uStack_4f8 = (ulonglong)((int)uVar33 * 0x20 + 0x20);
            uVar5 = 0;
            goto LAB_140278633;
          }
          uVar26 = 1;
          if (DAT_14c964348 == 0) {
            puVar31 = &DAT_14c964330;
            uVar4 = 0;
            plVar32 = (longlong *)0x0;
            plVar25 = &DAT_14c964320;
            goto LAB_140278691;
          }
          puVar31 = &DAT_14c964330;
          puVar27 = DAT_14c964340;
          if (DAT_14c964340 == (uint *)0x0) {
            puVar27 = &DAT_14c964330;
          }
          uVar4 = *puVar27;
          if (uVar4 != 0) {
            plVar32 = (longlong *)0x0;
            uVar5 = 0;
            goto LAB_140278565;
          }
          iVar30 = DAT_14c964348 + 0x1e;
          if (-1 < (int)(DAT_14c964348 - 1)) {
            iVar30 = DAT_14c964348 - 1;
          }
          uVar35 = 0;
          uVar33 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar33 = uVar35;
          }
          plVar32 = (longlong *)(ulonglong)((int)uVar33 + 1);
          uStack_4f8 = (ulonglong)((int)uVar33 * 0x20 + 0x20);
          uVar5 = 0;
          goto LAB_140278548;
        }
        iVar30 = *(int *)(lVar23 + 0x18);
      } while (iVar30 != -1);
    }
LAB_1402780c6:
    p_Var18 = p_Stack_420;
    if (!bVar39) {
      LeaveCriticalSection(p_Var24);
      p_Var18 = p_Stack_420;
    }
    goto LAB_140277e34;
  }
  p_Stack_478 = (_LIST_ENTRY *)0x0;
  uStack_470 = 0;
  if ((DAT_14c949800 & 1) != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x29d,
                  L"Illegal call to StaticFindAllObjectsFast() while serializing object data or garbage collecting!"
                 );
  }
  uVar4 = FUN_14482ca40();
  FUN_1449232c8(&p_Stack_468,p_Var18);
  p_Var13 = p_Stack_468;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_140277ddd:
    p_Var24 = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    uVar36 = 0;
  }
  else {
    uVar36 = (undefined4)CONCAT71((int7)((ulonglong)p_Var18 >> 8),1);
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar30 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar30 != 2)) {
      if (iVar30 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar36 = (undefined4)CONCAT71((uint7)(uint3)(DVar8 >> 8),1);
        if (DVar8 == DVar9) goto LAB_140278ad9;
      }
      goto LAB_140277ddd;
    }
LAB_140278ad9:
    p_Var24 = (LPCRITICAL_SECTION)0x0;
  }
  if (DAT_14c964438 == DAT_14c964464) {
LAB_140277dfe:
    bVar39 = false;
  }
  else {
    uVar5 = (uint)((ulonglong)p_Var13 >> 0x10);
    uVar28 = (uint)p_Var13 & 0xffff;
    uVar5 = (uVar28 >> 4) +
            ((uint)p_Var13 << 0x10 | uVar28) + (int)((ulonglong)p_Var13 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    puVar20 = &DAT_14c964468;
    if (DAT_14c964470 != (undefined *)0x0) {
      puVar20 = DAT_14c964470;
    }
    iVar30 = *(int *)(puVar20 + (ulonglong)(DAT_14c964478 - 1U & uVar5) * 4);
    if (iVar30 == -1) goto LAB_140277dfe;
    do {
      lVar23 = DAT_14c964430 + (longlong)iVar30 * 0x20;
      p_Stack_4c8 = p_Var24;
      if (*(uint *)(DAT_14c964430 + (longlong)iVar30 * 0x20) == uVar5) {
        lStack_4b0 = lVar23 + 8;
        if (lStack_4b0 != 0 && lVar23 != 0) {
          lVar15 = *(longlong *)(lVar23 + 8);
          plVar2 = *(longlong **)(lVar23 + 0x10);
          puVar31 = (uint *)0x0;
          if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
            puVar27 = (uint *)(plVar2 + 2);
            uVar5 = *(uint *)(plVar2 + 5);
            uVar26 = 1;
            plVar25 = plVar2;
            if (uVar5 == 0) {
              uVar5 = 0;
              uVar33 = 0;
              goto LAB_140278217;
            }
            puVar31 = (uint *)plVar2[4];
            if ((uint *)plVar2[4] == (uint *)0x0) {
              puVar31 = puVar27;
            }
            uVar28 = *puVar31;
            if (uVar28 != 0) {
              uVar33 = 0;
              uVar29 = 0;
              goto LAB_1402781e1;
            }
            iVar30 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar30 = uVar5 - 1;
            }
            uVar33 = 0;
            uVar26 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar26 = uVar33;
            }
            iVar30 = (int)uVar26;
            uVar29 = 0;
            goto LAB_1402781c4;
          }
          uVar26 = 1;
          if (DAT_14c964348 == 0) {
            puVar27 = &DAT_14c964330;
            uVar5 = 0;
            uVar33 = 0;
            puVar31 = (uint *)0x0;
            plVar25 = &DAT_14c964320;
            goto LAB_140278217;
          }
          puVar27 = &DAT_14c964330;
          puVar31 = DAT_14c964340;
          if (DAT_14c964340 == (uint *)0x0) {
            puVar31 = &DAT_14c964330;
          }
          uVar5 = *puVar31;
          if (uVar5 != 0) {
            uVar33 = 0;
            uVar28 = 0;
            goto LAB_140277fe1;
          }
          iVar30 = DAT_14c964348 + 0x1e;
          if (-1 < (int)(DAT_14c964348 - 1)) {
            iVar30 = DAT_14c964348 - 1;
          }
          uVar33 = 0;
          uVar26 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar26 = uVar33;
          }
          iVar30 = (int)uVar26;
          uVar28 = 0;
          goto LAB_140277fc4;
        }
        break;
      }
      iVar30 = *(int *)(lVar23 + 0x18);
    } while (iVar30 != -1);
    bVar39 = false;
  }
LAB_140277e00:
  if ((char)uVar36 == '\0') {
    LeaveCriticalSection(p_Var24);
  }
  if (p_Stack_420 != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  p_Var18 = p_Stack_478;
  if (!bVar39) {
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    goto LAB_140277e34;
  }
  uVar26 = uStack_470 & 0xffffffff;
  if ((int)uStack_470 < 2) {
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_478->Flink;
    goto LAB_140277e34;
  }
  if ((param_3 & 4) == 0) {
LAB_140278b4f:
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)p_Stack_478->Flink;
  }
  else {
    lVar23 = 0;
    p_Var38 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    do {
      p_Var37 = *(PRTL_CRITICAL_SECTION_DEBUG *)((longlong)&p_Var18->Flink + lVar23);
      if (p_Var37 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        lVar15 = FUN_1400163b0();
        p_Var13 = (p_Var37->ProcessLocksList).Flink;
        if ((*(int *)&p_Var13[3].Blink < *(int *)(lVar15 + 0x38)) ||
           ((&(p_Var13[3].Flink)->Flink)[*(int *)(lVar15 + 0x38)] != (_LIST_ENTRY *)(lVar15 + 0x30))
           ) {
          if ((p_Var38 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
             (lVar15 = FUN_144a79778(), p_Var38 = p_Var37, (*(byte *)(lVar15 + 0x2c) & 0x10) == 0))
          {
            p_Var38 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          }
        }
        else {
          lVar15 = FUN_144a79778(p_Var37);
          if ((*(byte *)(lVar15 + 0x2c) & 0x10) != 0) goto LAB_140278b52;
        }
      }
      lVar23 = lVar23 + 8;
    } while (uVar26 << 3 != lVar23);
    p_Var37 = p_Var38;
    if (p_Var38 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) goto LAB_140278b4f;
  }
LAB_140278b52:
  cVar34 = (char)param_4;
  p_Var18 = p_Stack_478;
  if (cVar34 != '\0' || (param_3 & 8) != 0) {
    p_Stack_468 = a_Stack_448;
    cStack_450 = '\0';
    pwStack_458 = awStack_248;
    memcpy(p_Stack_468,L"StaticFindFirstObject: Ambiguous object name ",0x5a);
    p_Stack_460 = (_LIST_ENTRY *)awStack_3ee;
    if (param_2 == (wchar_t *)0x0) {
      sVar14 = 0;
    }
    else {
      sVar14 = wcslen(param_2);
    }
    FUN_1449668a2(&p_Stack_468,param_2,sVar14);
    if (param_5 != (wchar_t *)0x0) {
      if (pwStack_458 <= (wchar_t *)((longlong)p_Stack_460 + 0xe)) {
        FUN_140213274(&p_Stack_468,7);
      }
      builtin_wcsncpy((wchar_t *)p_Stack_460,L" while ",7);
      p_Stack_460 = (_LIST_ENTRY *)((longlong)p_Stack_460 + 0xe);
      sVar14 = wcslen(param_5);
      FUN_1449668a2(&p_Stack_468,param_5,sVar14 & 0xffffffff);
    }
    if (pwStack_458 <= (wchar_t *)((longlong)p_Stack_460 + 0x1c)) {
      FUN_140213274(&p_Stack_468,0xe);
    }
    builtin_wcsncpy((wchar_t *)p_Stack_460,L", will return ",0xe);
    p_Stack_460 = (_LIST_ENTRY *)((longlong)p_Stack_460 + 0x1c);
    lStack_488 = 0;
    uStack_480 = 0;
    FUN_1401031ac(p_Var37,0,&lStack_488);
    iVar30 = (int)uStack_480 + -1;
    if ((int)uStack_480 == 0) {
      iVar30 = 0;
    }
    FUN_1449668a2(&p_Stack_468,lStack_488,iVar30);
    if (lStack_488 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_458 <= (wchar_t *)((longlong)p_Stack_460 + 0x28)) {
      FUN_140213274(&p_Stack_468);
    }
    builtin_wcsncpy((wchar_t *)p_Stack_460,L" but could also be: ",0x14);
    p_Stack_460 = (_LIST_ENTRY *)((longlong)p_Stack_460 + 0x28);
    if (0 < (longlong)(int)uStack_470) {
      lVar23 = 0;
      do {
        if ((PRTL_CRITICAL_SECTION_DEBUG)(&p_Stack_478->Flink)[lVar23] != p_Var37) {
          lStack_488 = 0;
          uStack_480 = 0;
          FUN_1401031ac((PRTL_CRITICAL_SECTION_DEBUG)(&p_Stack_478->Flink)[lVar23],0,&lStack_488);
          iVar30 = (int)uStack_480 + -1;
          if ((int)uStack_480 == 0) {
            iVar30 = 0;
          }
          FUN_1449668a2(&p_Stack_468,lStack_488,iVar30);
          if (lStack_488 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar23 = lVar23 + 1;
      } while ((int)uStack_470 != lVar23);
      if (2 < (int)uStack_470) {
        FUN_140212e80(&p_Stack_468,L" or %d other object(s)",(int)uStack_470 + -2);
      }
    }
    if (cVar34 == '\x01') {
      *(wchar_t *)&p_Stack_460->Flink = L'\0';
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x331,&DAT_149e0625e
                    ,p_Stack_468);
    }
    else if (cVar34 != '\0') {
      uVar16 = FUN_144a82cde();
      p_Var18 = p_Stack_468;
      *(wchar_t *)&p_Stack_460->Flink = L'\0';
      FUN_1446f470e(&lStack_488,L"LogUObjectGlobals",1);
      p_Stack_508 = p_Var18;
      FUN_145bf7c2e(uVar16,&lStack_488,param_4,&DAT_149e0625e);
    }
    p_Var18 = p_Stack_478;
    if (cStack_450 == '\x01') {
      FUN_1400020a8(p_Stack_468);
      p_Var18 = p_Stack_478;
    }
  }
LAB_140277e34:
  if (p_Var18 != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_48 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return p_Var37;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    uVar5 = uVar5 + 0x20;
    uVar4 = puVar27[uVar35 + 1];
    uVar35 = uVar35 + 1;
    if (uVar4 != 0) break;
LAB_140278548:
    if (uVar33 == uVar35) {
      plVar25 = &DAT_14c964320;
      uVar4 = DAT_14c964348;
      goto LAB_140278691;
    }
  }
  plVar32 = (longlong *)(uVar35 & 0xffffffff);
LAB_140278565:
  uVar26 = (ulonglong)(-uVar4 & uVar4);
  uVar33 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)DAT_14c964348 <= (int)uVar28) {
    uVar28 = DAT_14c964348;
  }
  plVar25 = &DAT_14c964320;
  goto LAB_14027868e;
  while( true ) {
    uVar5 = uVar5 + 0x20;
    uVar28 = puVar27[uVar35 + 1];
    uVar35 = uVar35 + 1;
    if (uVar28 != 0) break;
LAB_140278633:
    plStack_4d8 = plVar32;
    if (uVar33 == uVar35) goto LAB_140278691;
  }
  plVar32 = (longlong *)(uVar35 & 0xffffffff);
LAB_140278650:
  uVar26 = (ulonglong)(-uVar28 & uVar28);
  uVar33 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)uVar4 <= (int)uVar28) {
    uVar28 = uVar4;
  }
LAB_14027868e:
  uStack_4f8 = (ulonglong)uVar5;
  uVar4 = uVar28;
LAB_140278691:
  plStack_4d8 = (longlong *)CONCAT71(plStack_4d8._1_7_,lVar15 == 0 && plVar2 != (longlong *)0x0);
  uStack_4e8 = CONCAT31(uStack_4e8._1_3_,plVar2 == (longlong *)0x0 && lVar15 == 0);
  p_Stack_4c0 = p_Stack_4f0 + 3;
  uVar5 = 0xffffffff;
  p_Stack_4b8 = (_LIST_ENTRY *)0x0;
  p_Var18 = p_Stack_4f0;
  uStack_4e4 = param_3;
  plStack_4e0 = plVar25;
  puStack_4d0 = puVar31;
  do {
    p_Stack_4c8 = (LPCRITICAL_SECTION)(lStack_4b0 + ((ulonglong)p_Stack_4b8 & 0xff) * 8);
LAB_1402786de:
    if ((char)plStack_4d8 == '\0') {
      p_Var12 = p_Stack_4c8;
      if ((uStack_4e8 & 1) != 0) goto LAB_1402780c3;
    }
    else {
      if ((int)puVar31[6] <= (int)uVar4) goto LAB_1402780c3;
      p_Var12 = (LPCRITICAL_SECTION)((longlong)(int)uVar4 * 0x10 + *plVar25);
    }
    p_Var37 = p_Var12->DebugInfo;
    p_Var13 = (p_Var37->ProcessLocksList).Blink;
    if (p_Var13 != p_Stack_468) goto LAB_1402787c3;
    if (p_Var18 == (_LIST_ENTRY *)0x0) {
LAB_140278758:
      uVar28 = *(uint *)((longlong)&p_Var37->CriticalSection + 4);
      if ((int)uVar28 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      p_Var13 = (_LIST_ENTRY *)(ulonglong)*(uint *)(lVar15 + 8);
      if (((*(uint *)(lVar15 + 8) >> 0x1c & 1) == 0) &&
         (uVar16._0_4_ = p_Var37->EntryCount, uVar16._4_4_ = p_Var37->ContentionCount,
         p_Var13 = (_LIST_ENTRY *)FUN_140278fd0(&p_Stack_468,uVar16), plVar25 = plStack_4e0,
         p_Var18 = p_Stack_4f0, puVar31 = puStack_4d0, (char)p_Var13 != '\0')) goto LAB_1402780c6;
    }
    else {
      p_Var13 = (p_Var37->ProcessLocksList).Flink;
      if ((uStack_4e4 & 2) == 0) {
        if ((*(int *)&p_Var18[3].Blink <= *(int *)&p_Var13[3].Blink) &&
           (p_Var13 = p_Var13[3].Flink, (&p_Var13->Flink)[*(int *)&p_Var18[3].Blink] == p_Stack_4c0)
           ) goto LAB_140278758;
      }
      else if (p_Var13 == p_Var18) goto LAB_140278758;
    }
LAB_1402787c3:
    if ((char)plStack_4d8 != '\0') {
      uVar5 = uVar5 & ~(uint)uVar26;
      puVar27 = *(uint **)(puVar31 + 4);
      if (*(uint **)(puVar31 + 4) == (uint *)0x0) {
        puVar27 = puVar31;
      }
      uVar28 = puVar31[6];
      iVar30 = (int)plVar32;
      lVar15 = (longlong)iVar30;
      uVar4 = puVar27[lVar15] & uVar5;
      if (uVar4 == 0) {
        iVar6 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar6 = uVar28 - 1;
        }
        iVar6 = iVar6 >> 5;
        uStack_4f8 = (ulonglong)((int)uStack_4f8 + 0x20);
        iVar7 = iVar6;
        if (iVar6 < iVar30) {
          iVar7 = iVar30;
        }
        if (iVar30 < iVar6) {
          lVar19 = 0;
          do {
            uVar4 = puVar27[lVar15 + lVar19 + 1];
            if (uVar4 != 0) {
              plVar32 = (longlong *)(ulonglong)(iVar30 + (int)lVar19 + 1);
              uVar5 = 0xffffffff;
              goto LAB_140278849;
            }
            uStack_4f8 = (ulonglong)((int)uStack_4f8 + 0x20);
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar15 != lVar19);
          uVar5 = 0xffffffff;
          iVar30 = iVar7;
        }
        plVar32 = (longlong *)(ulonglong)(iVar30 + 1);
        p_Var18 = p_Stack_4f0;
        puVar31 = puStack_4d0;
        uVar4 = uVar28;
      }
      else {
LAB_140278849:
        uVar26 = (ulonglong)(-uVar4 & uVar4);
        uVar33 = uVar26 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = ((int)uStack_4f8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar4) {
          uVar4 = uVar28;
        }
      }
      goto LAB_1402786de;
    }
    uStack_4e8 = CONCAT31(uStack_4e8._1_3_,1);
    uVar33 = (ulonglong)p_Stack_4b8 & 1;
    uVar17 = (undefined7)((ulonglong)p_Var13 >> 8);
    p_Stack_4b8 = (_LIST_ENTRY *)CONCAT71(uVar17,1);
    if (uVar33 == 0) {
      uStack_4e8 = CONCAT31(uStack_4e8._1_3_,*(longlong *)(lVar23 + 0x10) == 0);
      p_Stack_4b8 = (_LIST_ENTRY *)CONCAT71(uVar17,1);
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 + 0x20;
    uVar5 = puVar31[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar5 != 0) break;
LAB_140277fc4:
    if (uVar26 == uVar33) {
      plVar25 = &DAT_14c964320;
      uVar5 = DAT_14c964348;
      goto LAB_1402788de;
    }
  }
  uVar33 = uVar33 & 0xffffffff;
LAB_140277fe1:
  uVar26 = (ulonglong)(-uVar5 & uVar5);
  uVar35 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar5 = (uVar28 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)DAT_14c964348 <= (int)uVar5) {
    uVar5 = DAT_14c964348;
  }
  puVar31 = (uint *)(ulonglong)uVar28;
  plVar25 = &DAT_14c964320;
  goto LAB_140278217;
  while( true ) {
    uVar29 = uVar29 + 0x20;
    uVar28 = puVar31[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar28 != 0) break;
LAB_1402781c4:
    if (uVar26 == uVar33) goto LAB_1402788de;
  }
  uVar33 = uVar33 & 0xffffffff;
LAB_1402781e1:
  uVar26 = (ulonglong)(-uVar28 & uVar28);
  uVar35 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar29 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)uVar5 <= (int)uVar28) {
    uVar28 = uVar5;
  }
  uVar5 = uVar28;
  puVar31 = (uint *)(ulonglong)uVar29;
LAB_140278217:
  uStack_4f8 = CONCAT71(uStack_4f8._1_7_,plVar2 == (longlong *)0x0 && lVar15 == 0);
  p_Stack_4b8 = p_Stack_4f0 + 3;
  uStack_490 = 0;
  uVar35 = 0xffffffff;
  p_Stack_4c0 = (_LIST_ENTRY *)((ulonglong)p_Stack_4c0 & 0xffffffff00000000);
  p_Var18 = p_Stack_4f0;
  cStack_4f9 = (char)param_4;
  uStack_4e8 = uVar4 | 0x10000000;
  uStack_4e4 = param_3;
  plStack_4e0 = plVar25;
  uStack_4a4 = uVar36;
  pwStack_498 = param_2;
  do {
    plStack_4d8 = (longlong *)(lStack_4b0 + (uStack_490 & 0xff) * 8);
LAB_14027826b:
    iVar30 = (int)uVar33;
    if (lVar15 != 0 || plVar2 == (longlong *)0x0) {
      plVar32 = plStack_4d8;
      if ((uStack_4f8 & 1) != 0) goto LAB_14027845b;
    }
    else {
      if ((int)puVar27[6] <= (int)uVar5) {
LAB_14027845b:
        bVar39 = (int)p_Stack_4c0 != 0;
        param_4 = (undefined4)CONCAT71((int7)(uVar35 >> 8),cStack_4f9);
        p_Var24 = p_Stack_4c8;
        param_2 = pwStack_498;
        uVar36 = uStack_4a4;
        param_3 = uStack_4e4;
        goto LAB_140277e00;
      }
      plVar32 = (longlong *)((longlong)(int)uVar5 * 0x10 + *plVar25);
    }
    p_Var13 = (_LIST_ENTRY *)*plVar32;
    p_Var11 = p_Var13[1].Blink;
    if (p_Var13[1].Blink != p_Stack_468) goto LAB_140278312;
    if (p_Var18 == (_LIST_ENTRY *)0x0) {
LAB_1402782dc:
      uVar4 = *(uint *)((longlong)&p_Var13->Blink + 4);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      p_Var11 = (_LIST_ENTRY *)(ulonglong)*(uint *)(lVar19 + 8);
      if (((uStack_4e8 & *(uint *)(lVar19 + 8)) == 0) &&
         (puStack_4d0 = puVar31,
         p_Var11 = (_LIST_ENTRY *)FUN_140278fd0(&p_Stack_468,p_Var13[2].Flink),
         puVar31 = puStack_4d0, p_Var18 = p_Stack_4f0, plVar25 = plStack_4e0, (char)p_Var11 != '\0')
         ) {
        lVar19 = (longlong)(int)uStack_470;
        uVar4 = (int)uStack_470 + 1;
        uStack_470 = CONCAT44(uStack_470._4_4_,uVar4);
        if (uStack_470._4_4_ < uVar4) {
          lStack_4a0 = lVar19;
          FUN_1447f76d2(&p_Stack_478,lVar19);
          lVar19 = lStack_4a0;
        }
        (&p_Stack_478->Flink)[lVar19] = p_Var13;
        p_Stack_4c0 = (_LIST_ENTRY *)CONCAT44(p_Stack_4c0._4_4_,(int)p_Stack_4c0 + 1);
        p_Var11 = p_Stack_478;
        puVar31 = puStack_4d0;
        p_Var18 = p_Stack_4f0;
        plVar25 = plStack_4e0;
      }
    }
    else {
      p_Var3 = p_Var13[1].Flink;
      p_Var11 = p_Var3;
      if ((uStack_4e4 & 2) == 0) {
        if ((*(int *)&p_Var18[3].Blink <= *(int *)&p_Var3[3].Blink) &&
           (p_Var11 = p_Var3[3].Flink,
           (&(p_Var3[3].Flink)->Flink)[*(int *)&p_Var18[3].Blink] == p_Stack_4b8))
        goto LAB_1402782dc;
      }
      else if (p_Var3 == p_Var18) goto LAB_1402782dc;
    }
LAB_140278312:
    if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
      uVar4 = (uint)uVar35 & ~(uint)uVar26;
      uVar35 = (ulonglong)uVar4;
      puVar21 = *(uint **)(puVar27 + 4);
      if (*(uint **)(puVar27 + 4) == (uint *)0x0) {
        puVar21 = puVar27;
      }
      uVar28 = puVar27[6];
      lVar19 = (longlong)iVar30;
      uVar4 = puVar21[lVar19] & uVar4;
      if (uVar4 == 0) {
        iVar6 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar6 = uVar28 - 1;
        }
        iVar6 = iVar6 >> 5;
        puVar31 = (uint *)(ulonglong)((int)puVar31 + 0x20);
        iVar7 = iVar6;
        if (iVar6 < iVar30) {
          iVar7 = iVar30;
        }
        if (iVar30 < iVar6) {
          lVar22 = 0;
          do {
            uVar4 = puVar21[lVar19 + lVar22 + 1];
            if (uVar4 != 0) {
              uVar33 = (ulonglong)(iVar30 + (int)lVar22 + 1);
              uVar35 = 0xffffffff;
              goto LAB_14027838d;
            }
            puVar31 = (uint *)(ulonglong)((int)puVar31 + 0x20);
            lVar22 = lVar22 + 1;
          } while (iVar7 - lVar19 != lVar22);
          uVar35 = 0xffffffff;
          iVar30 = iVar7;
        }
        uVar33 = (ulonglong)(iVar30 + 1);
        p_Var18 = p_Stack_4f0;
        uVar5 = uVar28;
      }
      else {
LAB_14027838d:
        uVar26 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar26 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar5 = ((int)puVar31 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar5) {
          uVar5 = uVar28;
        }
      }
      goto LAB_14027826b;
    }
    uStack_4f8 = CONCAT71(uStack_4f8._1_7_,1);
    uVar1 = uStack_490 & 1;
    uVar17 = (undefined7)((ulonglong)p_Var11 >> 8);
    uStack_490 = CONCAT71(uVar17,1);
    if (uVar1 == 0) {
      uStack_4f8 = CONCAT71(uStack_4f8._1_7_,*(longlong *)(lVar23 + 0x10) == 0);
      uStack_490 = CONCAT71(uVar17,1);
    }
  } while( true );
LAB_1402788de:
  uVar33 = (ulonglong)(iVar30 + 1);
  uVar26 = 1;
  puVar31 = (uint *)(ulonglong)(iVar30 * 0x20 + 0x20);
  goto LAB_140278217;
}



// FUNCTION 146900ddf FUN_146900ddf body=322 status=ok
// SIG undefined FUN_146900ddf(void)

void FUN_146900ddf(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_68 [2];
  ulonglong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0 && param_3 != (longlong *)0x0) {
    uVar3 = FUN_1446f8646();
    local_88 = local_88 & 0xffffffff00000000;
    FUN_146123bc0(local_68,uVar3,0,0);
    if (local_58 != (ulonglong *)0x0) {
      do {
        uVar1 = *local_58;
        if ((((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(uVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) &&
            ((*(uint *)(uVar1 + 8) >> 0x1e & 1) == 0)) &&
           (((DAT_14c872a71 != '\x01' ||
             (lVar4 = FUN_144a79778(uVar1), (*(byte *)(lVar4 + 0x2e) & 0x10) != 0)) &&
            ((uVar3 = DAT_14c872be8, cVar2 = FUN_140d50488(param_3,0,DAT_14c872be8), param_1 != 0 &&
             (cVar2 != '\0')))))) {
          local_78 = uVar3;
          local_80 = 0x8000000;
          local_88 = uVar1;
          (**(code **)(*param_3 + 0xf8))(param_3,param_1,uVar1,1);
        }
        FUN_1427b9a5c(local_68);
      } while (local_58 != (ulonglong *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_68[0] + 0x30));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146900f22 FUN_146900f22 body=433 status=ok
// SIG undefined FUN_146900f22(void)

ulonglong FUN_146900f22(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong *param_4,
                       undefined8 param_5,undefined1 param_6,undefined1 *param_7)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_8a8 [32];
  undefined1 local_888;
  undefined8 local_880;
  longlong local_870 [2];
  longlong local_860;
  int local_858;
  longlong local_850;
  undefined8 local_848;
  undefined1 local_840;
  ushort local_838 [1028];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  uVar2 = 0;
  uVar4 = 0;
  if (DAT_14c75ece8 != '\0') {
    uVar4 = param_6;
  }
  local_880 = 0;
  local_888 = 1;
  cVar1 = FUN_140751ea8(param_1,param_2,local_838,0x400);
  if (cVar1 != '\0') {
    lVar3 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)local_838 + lVar3);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)((longlong)&DAT_149e30aac + lVar3);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_14690100d;
LAB_146900fba:
      lVar3 = lVar3 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_146900fba;
    }
    if (uVar5 != uVar7) {
      local_848 = param_5;
      local_850 = param_3;
      local_840 = uVar4;
      uVar2 = FUN_14283d42c(&local_850,local_838);
      if (uVar2 != 0) {
LAB_146901008:
        *param_4 = uVar2;
        goto LAB_146901014;
      }
      lVar3 = FUN_144a797b2();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(param_3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        FUN_140056680(local_870,local_838);
        FUN_1468b7fce(&local_860,local_870,0);
        if (local_870[0] != 0) {
          FUN_1400020a8();
        }
        if (local_858 < 2) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_14283d42c(&local_850,local_860);
        }
        if (local_860 != 0) {
          FUN_1400020a8();
        }
        if (uVar2 != 0) goto LAB_146901008;
      }
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 1;
      }
      uVar2 = 0;
      goto LAB_146901016;
    }
LAB_14690100d:
    *param_4 = 0;
LAB_146901014:
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_146901016:
  if ((local_30 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1469010d4 FUN_1469010d4 body=133 status=ok
// SIG undefined FUN_1469010d4(void)

void FUN_1469010d4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1447f76d2(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x10),
           (longlong)(int)uVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_14079e7a6((undefined8 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 14690116e FUN_14690116e body=38 status=ok
// SIG undefined FUN_14690116e(void)

void FUN_14690116e(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x98))(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  return;
}



// FUNCTION 14690119a FUN_14690119a body=262 status=ok
// SIG undefined FUN_14690119a(void)

void FUN_14690119a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,(longlong)iStack_5c * 0x10 + *local_78,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469012a2 FUN_1469012a2 body=94 status=ok
// SIG undefined FUN_1469012a2(void)

undefined8 FUN_1469012a2(undefined8 param_1,undefined8 param_2)

{
  if (DAT_14c964300 == '\0') {
    FUN_14052bb08(DAT_14c872ce0,L"Core.System",L"AssetLogShowsDiskPath",&DAT_14c75ecf0,
                  &DAT_14c872ce8);
    DAT_14c964300 = '\x01';
  }
  FUN_140056680(param_1,param_2);
  return param_1;
}



// FUNCTION 146901300 FUN_146901300 body=143 status=ok
// SIG undefined FUN_146901300(void)

undefined8 FUN_146901300(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_1469012a2(&local_38);
  puVar1 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar1 = local_38;
  }
  FUN_140002266(param_1,L"[AssetLog] %s: %s",puVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146901390 FUN_146901390 body=291 status=ok
// SIG undefined FUN_146901390(void)

undefined8 * FUN_146901390(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x28) == 0 && *(longlong *)(param_2 + 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
    FUN_146901a0a();
    puVar1[1] = &DAT_14c9643b0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_149eb06f0;
    local_30 = *param_1;
    if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    FUN_146901b30(puVar1,&local_30,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
    FUN_146901a0a();
    puVar1[1] = &DAT_14c9643b0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_149eb06f0;
    local_28 = *param_1;
    if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    FUN_146907b50(puVar1,&local_28,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469014b4 FUN_1469014b4 body=293 status=ok
// SIG undefined FUN_1469014b4(void)

undefined8 * FUN_1469014b4(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x28) == 0 && *(longlong *)(param_2 + 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
    uVar2 = FUN_1468900ae();
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_149e70630;
    local_30 = *param_1;
    if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    FUN_1468901dc(puVar1,&local_30,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
    uVar2 = FUN_1468900ae();
    puVar1[1] = uVar2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_149e70630;
    local_28 = *param_1;
    if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) &&
       (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    FUN_146907c3a(puVar1,&local_28,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469015da FUN_1469015da body=174 status=ok
// SIG undefined FUN_1469015da(void)

ulonglong FUN_1469015da(ulonglong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = FUN_144a66780();
  if (*(int *)(lVar2 + 0x220) != *(int *)(lVar2 + 0x24c)) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = lVar2 + 0x250;
    if (*(longlong *)(lVar2 + 600) != 0) {
      lVar4 = *(longlong *)(lVar2 + 600);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x260) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                    );
    if (iVar5 != -1) {
      while (puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x218) + (longlong)iVar5 * 0x18),
            *puVar1 != param_1) {
        iVar5 = (int)puVar1[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (puVar1 != (ulonglong *)0x0) {
        return puVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 146901688 FUN_146901688 body=340 status=ok
// SIG undefined FUN_146901688(void)

void FUN_146901688(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 ***local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = &local_50;
  local_78 = FUN_146908468;
  lVar4 = FUN_144a773aa(&local_78,&DAT_14c75ecf8);
  if (param_1 == 0xffffffff) {
    FUN_1469017de(lVar4 + 0x10);
    uVar2 = local_60;
  }
  else {
    local_48 = lVar4 + 0x28;
    local_50 = (undefined8 ***)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(lVar4 + 0x40) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = (undefined8 ****)local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = (code *)(lVar4 + 0x18);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        uVar1 = *(uint *)(*(longlong *)local_78 + 8 + (longlong)iVar3 * 0x18);
        if ((uVar1 & param_1) != 0) {
          local_50 = (undefined8 ***)CONCAT44(local_50._4_4_,uVar1 & ~param_1);
          FUN_146908882(lVar4 + 0x10,*(undefined8 *)(*(longlong *)local_78 + (longlong)iVar3 * 0x18)
                        ,&local_50);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469017de FUN_1469017de body=75 status=ok
// SIG undefined FUN_1469017de(void)

void FUN_1469017de(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_146908db4(param_1 + 8);
  if (iVar2 < iVar1) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
    return;
  }
  return;
}



// FUNCTION 14690182a FUN_14690182a body=48 status=ok
// SIG undefined FUN_14690182a(void)

void FUN_14690182a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14690185a FUN_14690185a body=120 status=ok
// SIG undefined FUN_14690185a(void)

void FUN_14690185a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar1 + lVar3);
      FUN_1400ddfc2(param_1 + 0x10,&local_38);
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469018d4 FUN_1469018d4 body=180 status=ok
// SIG undefined FUN_1469018d4(void)

undefined8 * FUN_1469018d4(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_146901a0a();
  puVar1[1] = &DAT_14c9643b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149eb06f0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14690198a(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690198a FUN_14690198a body=126 status=ok
// SIG undefined FUN_14690198a(void)

undefined8 *
FUN_14690198a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146901ab0(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149eb06f0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146901a0a FUN_146901a0a body=166 status=ok
// SIG undefined FUN_146901a0a(void)

void FUN_146901a0a(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964400) {
    FUN_144b3d300(&DAT_14c964400);
    if (DAT_14c964400 == -1) {
      uVar1 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c9643b0,L"FUtf8StrProperty",0x1000000000000000,0,0x1000000000008001,0,
                    uVar1,FUN_1469018d4);
      atexit(FUN_1428402eb);
      _Init_thread_footer(&DAT_14c964400);
      return;
    }
  }
  return;
}



// FUNCTION 146901ab0 FUN_146901ab0 body=126 status=ok
// SIG undefined FUN_146901ab0(void)

undefined8 *
FUN_146901ab0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146908f82(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149eb0d30;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146901b30 FUN_146901b30 body=118 status=ok
// SIG undefined FUN_146901b30(void)

undefined8 * FUN_146901b30(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146901ba8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb06f0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146901ba8 FUN_146901ba8 body=118 status=ok
// SIG undefined FUN_146901ba8(void)

undefined8 * FUN_146901ba8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14690900a(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb0d30;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146901c20 FUN_146901c20 body=1012 status=ok
// SIG undefined FUN_146901c20(void)

undefined8 FUN_146901c20(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  longlong *_Src_00;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong **pplVar7;
  size_t sVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b78) {
    FUN_144a5dc74(&local_68);
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x158))(*(longlong **)(*param_3 + 8),&local_68);
    lVar3 = FUN_1467cf004(&local_68);
    if (lVar3 == 0) {
      FUN_140056680(&local_78,&DAT_149dfb77a);
    }
    else {
      puVar4 = (undefined8 *)FUN_1467cf004(&local_68);
      local_78 = (void *)0x0;
      local_70 = *(int *)(puVar4 + 1);
      lVar3 = (longlong)local_70;
      _Src = (void *)*puVar4;
      if (lVar3 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_70,0);
        memcpy(local_78,_Src,lVar3 * 2);
      }
    }
    iVar2 = local_70 + -1;
    if (local_70 == 0) {
      iVar2 = 0;
    }
    FUN_142747508(&local_58,local_78,iVar2);
    uVar1 = uStack_50;
    plVar6 = local_58;
    iVar2 = (int)uStack_50;
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_4 = param_4 + *(int *)(param_1 + 0x44);
    lVar3 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
    puVar4 = (undefined8 *)(param_4 + lVar3);
    *(int *)(lVar3 + 8 + param_4) = iVar2;
    if (*(int *)(lVar3 + 0xc + param_4) == 0 && iVar2 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_140841c90(puVar4,uVar1 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy((void *)*puVar4,plVar6,(longlong)iVar2);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8(plVar6);
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    if (uVar1 == DAT_14c892b74) {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_68);
      iVar2 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        iVar2 = 0;
      }
      FUN_142747508(&local_58,local_68,iVar2);
LAB_146901e0a:
      _Src_00 = local_58;
      iVar2 = (int)uStack_50;
      sVar8 = (size_t)(int)uStack_50;
      param_4 = param_4 + *(int *)(param_1 + 0x44);
      lVar3 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40);
      puVar4 = (undefined8 *)(param_4 + lVar3);
      *(int *)(lVar3 + 8 + param_4) = (int)uStack_50;
      if (*(int *)(lVar3 + 0xc + param_4) == 0 && (int)uStack_50 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_140841c90(puVar4,uStack_50 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy((void *)*puVar4,_Src_00,sVar8);
        }
      }
      plVar6 = local_68;
      if (_Src_00 != (longlong *)0x0) {
        FUN_1400020a8(_Src_00);
        plVar6 = local_68;
      }
    }
    else {
      if (uVar1 != DAT_14c892bd0) {
        uVar5 = 0;
        if (uVar1 != DAT_14c892bd4) goto LAB_146901d98;
        local_68 = (longlong *)0x0;
        uStack_60 = 0;
        local_58 = param_3;
        uVar5 = FUN_144aff0e0();
        FUN_140117ade(uVar5,&local_68);
        iVar2 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar2 = 0;
        }
        FUN_14274749c(&local_58,local_68,iVar2);
        goto LAB_146901e0a;
      }
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      local_68 = param_3;
      uVar5 = FUN_144aff0e0(&local_68);
      FUN_1427479f3(uVar5,&local_58);
      plVar6 = local_58;
      local_68 = (longlong *)0x0;
      sVar8 = (size_t)(int)uStack_50;
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_50);
      if (sVar8 == 0) {
        uStack_60 = uStack_50 & 0xffffffff;
      }
      else {
        FUN_140841c90(&local_68,uStack_50 & 0xffffffff,0);
        memcpy(local_68,plVar6,sVar8);
      }
      plVar6 = local_68;
      pplVar7 = (longlong **)
                ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
                param_4 + *(int *)(param_1 + 0x44));
      if (pplVar7 != &local_68) {
        iVar2 = (int)uStack_60;
        sVar8 = (size_t)(int)uStack_60;
        *(int *)(pplVar7 + 1) = (int)uStack_60;
        if ((int)uStack_60 == 0 && *(int *)((longlong)pplVar7 + 0xc) == 0) {
          *(undefined4 *)((longlong)pplVar7 + 0xc) = 0;
        }
        else {
          FUN_140841c90(pplVar7,uStack_60 & 0xffffffff);
          if (iVar2 != 0) {
            memcpy(*pplVar7,plVar6,sVar8);
          }
        }
      }
      plVar6 = local_58;
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
        plVar6 = local_58;
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = 3;
LAB_146901d98:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146902020 FUN_146902020 body=459 status=ok
// SIG undefined FUN_146902020(void)

void FUN_146902020(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined **_Src;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined *)0x0;
  uStack_30 = 0;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x88))();
    if (cVar1 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_146902093;
    }
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      _Src = (undefined **)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_38,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_38,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
    }
  }
  else {
LAB_146902093:
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1427476d0(&local_38,*param_3,iVar3);
  }
  if ((param_7 & 1) == 0) {
    puVar2 = local_38;
    iVar3 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar3 = 0;
    }
  }
  else {
    if ((int)uStack_30 - 2U < 0x7fffffff) {
      FUN_1469021ec(&local_38,&local_58);
      puVar4 = local_58;
      if (local_50 == 0) {
        puVar4 = &DAT_149e02088;
      }
      FUN_142747894(&local_48,&DAT_149e6f1ac,puVar4);
      iVar3 = local_40 + -1;
      if (local_40 == 0) {
        iVar3 = 0;
      }
      thunk_FUN_140a6aedf(param_2,local_48,iVar3);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1469020d0;
    }
    puVar2 = &DAT_149e6f1b1;
    iVar3 = 2;
  }
  thunk_FUN_140a6aedf(param_2,puVar2,iVar3);
LAB_1469020d0:
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469021ec FUN_1469021ec body=89 status=ok
// SIG undefined FUN_1469021ec(void)

undefined8 * FUN_1469021ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140841c90(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1);
  }
  FUN_1467ad552(param_2,0);
  return param_2;
}



// FUNCTION 146902246 FUN_146902246 body=565 status=ok
// SIG undefined FUN_146902246(void)

wchar_t * FUN_146902246(longlong *param_1,wchar_t *param_2,longlong *param_3,int param_4,
                       undefined8 param_5,byte param_6,undefined8 param_7)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined8 *_Dst;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((param_6 & 1) == 0) {
    FUN_14274722a(&local_48,param_2);
    local_58 = CONCAT44(uStack_44,local_48);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    sVar3 = wcslen(param_2);
    pwVar4 = param_2 + (int)sVar3;
LAB_1469022a6:
    if (param_4 == 1) {
      cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar2 == '\0') {
          _Dst = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
          if (_Dst != &local_58) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_58,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,&local_58,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_58);
        }
        goto LAB_146902384;
      }
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    if (param_3 != &local_58) {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
  }
  else {
    if (*param_2 == L'\"') {
      local_68 = 0;
      uStack_60 = 0;
      pwVar4 = (wchar_t *)FUN_1401e9420(param_2,&local_68,0);
      if (pwVar4 != (wchar_t *)0x0) {
        if ((pwVar4 <= param_2) || (pwVar4[-1] == L'\"')) {
          iVar1 = (int)uStack_60 + -1;
          if ((int)uStack_60 == 0) {
            iVar1 = 0;
          }
          FUN_142747508(&local_48,local_68,iVar1);
          local_58 = CONCAT44(uStack_44,local_48);
          uStack_50 = CONCAT44(uStack_3c,uStack_40);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1469022a6;
        }
        FUN_140047918(param_7,L"Missing terminating \'\"\' in string property value: %s",param_2);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_140047918(param_7,L"Missing opening \'\"\' in string property value: %s",param_2);
    }
    pwVar4 = (wchar_t *)0x0;
  }
LAB_146902384:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return pwVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469024a4 FUN_1469024a4 body=29 status=ok
// SIG undefined FUN_1469024a4(void)

undefined8 FUN_1469024a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469024c6 FUN_1469024c6 body=32 status=ok
// SIG undefined FUN_1469024c6(void)

undefined8 FUN_1469024c6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FUtf8String");
  return param_2;
}



// FUNCTION 1469024fc FUN_1469024fc body=207 status=ok
// SIG undefined FUN_1469024fc(void)

ulonglong FUN_1469024fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  void *unaff_RBX;
  bool bVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == (undefined8 *)0x0) {
    uStack_30 = 0;
LAB_146902567:
    local_38 = (void *)0x0;
    iVar2 = 0;
  }
  else {
    local_38 = (void *)0x0;
    uVar1 = *(uint *)(param_3 + 1);
    unaff_RBX = (void *)*param_3;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_30 = (ulonglong)uVar1;
      goto LAB_146902567;
    }
    FUN_140841c90(&local_38,uVar1,0);
    memcpy(local_38,unaff_RBX,(longlong)(int)uVar1);
    iVar2 = (int)uStack_30;
  }
  if (*(int *)(param_2 + 1) == iVar2) {
    unaff_RBX = (void *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (iVar2 < 2) goto LAB_146902590;
    iVar2 = FUN_1467b86b2(*param_2,local_38);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = *(int *)(param_2 + 1) + iVar2 == 1;
  }
  unaff_RBX = (void *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3);
LAB_146902590:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469025cc FUN_1469025cc body=75 status=ok
// SIG undefined FUN_1469025cc(void)

void FUN_1469025cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1427479f3(uVar1,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146902618 FUN_146902618 body=53 status=ok
// SIG undefined FUN_146902618(void)

void FUN_146902618(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      FUN_146909094(param_2,param_3);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14690266a FUN_14690266a body=66 status=ok
// SIG undefined FUN_14690266a(void)

void FUN_14690266a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1469026fa FUN_1469026fa body=54 status=ok
// SIG undefined FUN_1469026fa(void)

void FUN_1469026fa(undefined8 param_1,longlong *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = -0x100000000;
  }
  return;
}



// FUNCTION 146902730 FUN_146902730 body=107 status=ok
// SIG undefined FUN_146902730(void)

void FUN_146902730(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468bb93e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14690279c FUN_14690279c body=90 status=ok
// SIG undefined FUN_14690279c(void)

longlong FUN_14690279c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    FUN_14472412f(lVar1,*(undefined4 *)(param_1 + 0x108));
    lVar1 = *(longlong *)(param_2 + 0x100);
    if (*(longlong *)(param_2 + 0x100) == 0) {
      lVar1 = param_2;
    }
    FUN_146869bb8(param_1,lVar1,*(undefined4 *)(param_2 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  }
  return param_1;
}



// FUNCTION 1469027f6 FUN_1469027f6 body=125 status=ok
// SIG undefined FUN_1469027f6(void)

void FUN_1469027f6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_146869e52(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146902874 FUN_146902874 body=68 status=ok
// SIG undefined FUN_146902874(void)

void FUN_146902874(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (*param_1 == 0)) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400dcd30(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1469028b8 FUN_1469028b8 body=477 status=ok
// SIG undefined FUN_1469028b8(void)

void FUN_1469028b8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146902a96 FUN_146902a96 body=474 status=ok
// SIG undefined FUN_146902a96(void)

void FUN_146902a96(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146902c72 FUN_146902c72 body=114 status=ok
// SIG undefined FUN_146902c72(void)

void FUN_146902c72(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146902ce4 FUN_146902ce4 body=114 status=ok
// SIG undefined FUN_146902ce4(void)

void FUN_146902ce4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146902d56 FUN_146902d56 body=195 status=ok
// SIG undefined FUN_146902d56(void)

longlong * FUN_146902d56(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c964628 != DAT_14c964654) {
    puVar3 = &DAT_14c964658;
    if (DAT_14c964660 != (undefined *)0x0) {
      puVar3 = DAT_14c964660;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c964668 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c964620 + (longlong)iVar2 * 0x18);
        if (*plVar1 == *param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_146902dfd;
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_146902e1a(&local_14,param_1);
  plVar1 = (longlong *)(DAT_14c964620 + (longlong)local_14 * 0x18);
LAB_146902dfd:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 + 1;
}



// FUNCTION 146902e1a FUN_146902e1a body=300 status=ok
// SIG undefined FUN_146902e1a(void)

undefined4 * FUN_146902e1a(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146902f48(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_146903056(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c964628 - DAT_14c964654;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c964668)) {
      param_2 = DAT_14c964668 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x14) = param_2;
      puVar4 = DAT_14c964660;
      if (DAT_14c964660 == (undefined *)0x0) {
        puVar4 = &DAT_14c964658;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14c964668 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14c964660;
      if (DAT_14c964660 == (undefined *)0x0) {
        puVar4 = &DAT_14c964658;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14c964668 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14c964668 = iVar6;
      FUN_146902a96(&DAT_14c964620);
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146902f48 FUN_146902f48 body=270 status=ok
// SIG undefined FUN_146902f48(void)

int * FUN_146902f48(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c964650;
  iVar4 = DAT_14c964628;
  if (DAT_14c964654 == 0) {
    iVar2 = DAT_14c964628 + 1;
    bVar7 = DAT_14c96462c == DAT_14c964628;
    DAT_14c964628 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c964620,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c964630,1);
    puVar3 = DAT_14c964640;
    if (DAT_14c964640 == (undefined *)0x0) {
      puVar3 = &DAT_14c964630;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c964650;
    DAT_14c964650 = *(int *)(DAT_14c964620 + 4 + lVar6 * 0x18);
    DAT_14c964654 = DAT_14c964654 + -1;
    iVar4 = iVar2;
    if (DAT_14c964654 != 0) {
      *(undefined4 *)(DAT_14c964620 + (longlong)DAT_14c964650 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c964630;
  if (DAT_14c964640 != (undefined *)0x0) {
    puVar3 = DAT_14c964640;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c964620;
  return param_1;
}



// FUNCTION 146903056 FUN_146903056 body=156 status=ok
// SIG undefined FUN_146903056(void)

undefined8 FUN_146903056(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c964628 - DAT_14c964654 != 1) && (DAT_14c964628 != DAT_14c964654)) {
    puVar6 = &DAT_14c964658;
    if (DAT_14c964660 != (undefined *)0x0) {
      puVar6 = DAT_14c964660;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c964668 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c964620 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1469030f2(&DAT_14c964620,*param_3,1);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1469030f2 FUN_1469030f2 body=138 status=ok
// SIG undefined FUN_1469030f2(void)

void FUN_1469030f2(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14690317c FUN_14690317c body=190 status=ok
// SIG undefined FUN_14690317c(void)

longlong FUN_14690317c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14690321d;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14690323c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14690321d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14690323c FUN_14690323c body=302 status=ok
// SIG undefined FUN_14690323c(void)

undefined4 *
FUN_14690323c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14690336c(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_146903452(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1469028b8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690336c FUN_14690336c body=229 status=ok
// SIG undefined FUN_14690336c(void)

int * FUN_14690336c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146903452 FUN_146903452 body=176 status=ok
// SIG undefined FUN_146903452(void)

void FUN_146903452(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_146902874(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146903502(param_1,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1469034c5;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1469034c5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146903502 FUN_146903502 body=114 status=ok
// SIG undefined FUN_146903502(void)

void FUN_146903502(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146903574 FUN_146903574 body=154 status=ok
// SIG undefined FUN_146903574(void)

undefined8 FUN_146903574(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14690360e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14690360e FUN_14690360e body=123 status=ok
// SIG undefined FUN_14690360e(void)

void FUN_14690360e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  FUN_146902874(*param_1 + lVar2 + 8);
  FUN_146903502(param_1,param_2);
  return;
}



// FUNCTION 14690368a FUN_14690368a body=93 status=ok
// SIG undefined FUN_14690368a(void)

void FUN_14690368a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1469030f2(param_1,param_2,1);
  return;
}



// FUNCTION 1469036e8 FUN_1469036e8 body=29 status=ok
// SIG undefined FUN_1469036e8(void)

undefined8 FUN_1469036e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146903706 FUN_146903706 body=29 status=ok
// SIG undefined FUN_146903706(void)

undefined8 FUN_146903706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146903724 FUN_146903724 body=116 status=ok
// SIG undefined FUN_146903724(void)

undefined4 FUN_146903724(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_144a9ffb2(0,param_2,param_1);
  lVar3 = -1;
  if (-1 < (int)uVar1) {
    lVar3 = (ulonglong)uVar1 * 2 + (ulonglong)((ulonglong)uVar1 == 0);
  }
  lVar3 = FUN_14001cc68(lVar3,0x10);
  FUN_1446e71a3(lVar3,uVar1,param_2,param_1);
  uVar2 = FUN_144a49b4a(uVar1,lVar3);
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  return uVar2;
}



// FUNCTION 146903798 FUN_146903798 body=230 status=ok
// SIG undefined FUN_146903798(void)

int * FUN_146903798(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14690387e FUN_14690387e body=148 status=ok
// SIG undefined FUN_14690387e(void)

void FUN_14690387e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146903912((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1469038e8;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1469038e8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 146903912 FUN_146903912 body=138 status=ok
// SIG undefined FUN_146903912(void)

void FUN_146903912(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14690399c FUN_14690399c body=474 status=ok
// SIG undefined FUN_14690399c(void)

void FUN_14690399c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146903b77 FUN_146903b77 body=314 status=ok
// SIG undefined FUN_146903b77(void)

void FUN_146903b77(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (0 < (int)param_2) {
    uVar9 = 1;
    do {
      if (uVar9 < param_2) {
        uVar1 = *(undefined8 *)(param_1 + -8 + uVar9 * 8);
        uVar2 = *(undefined8 *)(param_1 + uVar9 * 8);
        lVar6 = FUN_144b00dc8(uVar2);
        lVar7 = FUN_144b00dc8(uVar1);
        if (lVar7 == 0 || lVar6 == 0) {
          if (lVar6 != lVar7 && lVar6 != 0) {
LAB_146903c2e:
            uVar1 = *(undefined8 *)(param_1 + -8 + uVar9 * 8);
            *(undefined8 *)(param_1 + -8 + uVar9 * 8) = *(undefined8 *)(param_1 + uVar9 * 8);
            *(undefined8 *)(param_1 + uVar9 * 8) = uVar1;
          }
        }
        else if (lVar6 == lVar7) {
          iVar4 = FUN_14283ebea(uVar2);
          lVar6 = *(longlong *)(lVar6 + 0x18);
          iVar5 = FUN_14283ebea(uVar1);
          if (*(longlong *)(lVar6 + 0x28 + (longlong)iVar4 * 0x68) <
              *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x28 + (longlong)iVar5 * 0x68))
          goto LAB_146903c2e;
        }
      }
      iVar4 = (int)uVar9;
      uVar9 = uVar9 + 2;
    } while (iVar4 + 1 < (int)param_2);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar3 = uVar8 * 2;
        lVar7 = 0;
        lVar6 = param_1;
        uVar10 = param_2;
        do {
          uVar11 = uVar10;
          if ((int)uVar3 <= (int)uVar10) {
            uVar11 = uVar3;
          }
          FUN_146903cb1(lVar6,uVar8,uVar11);
          lVar7 = lVar7 + (int)uVar3;
          lVar6 = lVar6 + (longlong)(int)uVar3 * 8;
          uVar10 = uVar10 + uVar8 * -2;
        } while (lVar7 < (longlong)(ulonglong)param_2);
        uVar8 = uVar3;
      } while ((int)uVar3 < (int)param_2);
    }
  }
  return;
}



// FUNCTION 146903cb1 FUN_146903cb1 body=609 status=ok
// SIG undefined FUN_146903cb1(void)

void FUN_146903cb1(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  
  if (param_3 <= param_2 || param_2 < 1) {
    return;
  }
  iVar16 = 0;
  do {
    puVar2 = (undefined8 *)(param_1 + (longlong)param_2 * 8);
    iVar14 = 0;
    if (param_2 - iVar16 != 0 && iVar16 <= param_2) {
      uVar12 = param_2 - iVar16;
      iVar13 = 0;
      do {
        uVar6 = (uVar12 >> 1) + iVar13;
        iVar14 = (uVar12 & 1) + uVar6;
        uVar3 = *(undefined8 *)(param_1 + (longlong)iVar16 * 8 + (ulonglong)uVar6 * 8);
        uVar4 = *puVar2;
        lVar9 = FUN_144b00dc8(uVar4);
        lVar10 = FUN_144b00dc8(uVar3);
        if ((lVar9 == 0) || (lVar10 == 0)) {
          if ((lVar9 != 0) && (lVar9 != lVar10)) {
LAB_146903da0:
            iVar14 = iVar13;
          }
        }
        else if (lVar9 == lVar10) {
          iVar7 = FUN_14283ebea(uVar4);
          lVar9 = *(longlong *)(lVar9 + 0x18);
          iVar8 = FUN_14283ebea(uVar3);
          if (*(longlong *)(lVar9 + 0x28 + (longlong)iVar7 * 0x68) <
              *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x28 + (longlong)iVar8 * 0x68))
          goto LAB_146903da0;
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
        iVar13 = iVar14;
      } while (bVar5);
    }
    iVar14 = iVar14 + iVar16;
    iVar16 = param_2 - iVar14;
    if (iVar16 == 0 || param_2 < iVar14) {
      return;
    }
    if (param_3 - param_2 == 0 || param_3 < param_2) {
      iVar13 = 0;
    }
    else {
      puVar15 = (undefined8 *)(param_1 + (longlong)iVar14 * 8);
      iVar13 = 0;
      uVar12 = param_3 - param_2;
      do {
        uVar6 = (uVar12 >> 1) + iVar13;
        uVar3 = *puVar15;
        uVar4 = puVar2[uVar6];
        lVar9 = FUN_144b00dc8(uVar4);
        lVar10 = FUN_144b00dc8(uVar3);
        if ((lVar9 == 0) || (lVar10 == 0)) {
          if ((lVar9 != 0) && (lVar9 != lVar10)) {
LAB_146903e69:
            iVar13 = uVar6 + (uVar12 & 1);
          }
        }
        else if (lVar9 == lVar10) {
          iVar7 = FUN_14283ebea(uVar4);
          lVar9 = *(longlong *)(lVar9 + 0x18);
          iVar8 = FUN_14283ebea(uVar3);
          if (*(longlong *)(lVar9 + 0x28 + (longlong)iVar7 * 0x68) <
              *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x28 + (longlong)iVar8 * 0x68))
          goto LAB_146903e69;
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
      param_2 = param_2 + iVar13;
      if (0 < iVar13) {
        puVar2 = puVar15 + (param_2 - iVar14);
        puVar17 = puVar15 + iVar16;
        puVar11 = puVar15 + iVar16;
        do {
          while( true ) {
            puVar1 = puVar17 + 1;
            uVar3 = *puVar15;
            *puVar15 = *puVar17;
            puVar15 = puVar15 + 1;
            *puVar17 = uVar3;
            if (puVar1 == puVar2) break;
            puVar17 = puVar1;
            if (puVar15 == puVar11) {
              puVar11 = puVar1;
            }
          }
          puVar17 = puVar11;
        } while (puVar15 != puVar11);
      }
    }
    if (param_3 <= param_2) {
      return;
    }
    iVar16 = iVar14 + iVar13 + 1;
    if (param_2 <= iVar16) {
      return;
    }
  } while( true );
}



// FUNCTION 146903f12 FUN_146903f12 body=38 status=ok
// SIG undefined FUN_146903f12(void)

undefined8 FUN_146903f12(undefined8 param_1,int param_2)

{
  FUN_1403ecd2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146903f3e FUN_146903f3e body=33 status=ok
// SIG undefined FUN_146903f3e(void)

void FUN_146903f3e(undefined8 param_1)

{
  FUN_1403ecdae();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 146903f94 FUN_146903f94 body=73 status=ok
// SIG undefined FUN_146903f94(void)

void FUN_146903f94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146903fde(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_146869e52(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 146903fde FUN_146903fde body=108 status=ok
// SIG undefined FUN_146903fde(void)

ulonglong FUN_146903fde(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14690404a FUN_14690404a body=125 status=ok
// SIG undefined FUN_14690404a(void)

void FUN_14690404a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 5,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 5)) {
        uVar4 = uVar2 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_146869cc8(param_1,param_2,uVar4,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469040c8 FUN_1469040c8 body=251 status=ok
// SIG undefined FUN_1469040c8(void)

void FUN_1469040c8(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_1405a0337(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469041c4 FUN_1469041c4 body=145 status=ok
// SIG undefined FUN_1469041c4(void)

void FUN_1469041c4(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_1405a0337(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146904255 FUN_146904255 body=1092 status=ok
// SIG undefined FUN_146904255(void)

void FUN_146904255(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar2 = *(ulonglong *)(param_2[1] + 0x18);
  uVar12 = (uint)uVar2;
  if ((param_2[7] & 0x80000000002000U) == 0 && (uVar2 & 0x3a800000) == 0) {
    local_1f0 = param_2 + 0x10;
    uVar8 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar8 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar11 = 0;
    local_1f8 = param_4;
    local_1e8 = param_3;
    do {
      pppuVar7 = (undefined ***)
                 ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar11 +
                 *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar12 >> 0x10 & 1) == 0) {
        if ((uVar12 >> 0x15 & 1) == 0) {
          if ((uVar12 >> 0x14 & 1) == 0) {
            if ((uVar2 >> 0x2e & 1) == 0) {
              if ((uVar2 >> 0x2f & 1) == 0) {
                if ((uVar2 >> 0x34 & 1) == 0) {
                  if ((uVar12 >> 0xc & 1) == 0) {
                    if ((uVar2 >> 0x38 & 1) == 0) {
                      lVar9 = param_1[1];
                      if (lVar9 == 0) {
                        FUN_1404a881e(param_1);
                        lVar9 = param_1[1];
                      }
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1c0 = &local_1c8;
                      local_1d0 = lVar9;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar7,0);
                    }
                    else {
                      FUN_1469048d2(param_1,param_2,pppuVar7,param_4);
                    }
                  }
                  else {
                    FUN_1404a87e6(param_1,param_2,pppuVar7,param_4);
                  }
                }
                else {
                  FUN_140176128(param_1,param_2,pppuVar7,param_4);
                }
              }
              else {
                FUN_1469047d6(param_1,param_2,pppuVar7,param_4);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = param_2[0xf];
              local_1b0 = local_1f0[2];
              local_1c0 = (undefined ****)*local_1f0;
              uStack_1b8 = (undefined4)local_1f0[1];
              uStack_1b4 = *(undefined4 *)((longlong)local_1f0 + 0xc);
              iVar1 = *(int *)(pppuVar7 + 1);
              param_3 = local_1e8;
              local_1c8 = pppuVar7;
              if (iVar1 != *(int *)((longlong)pppuVar7 +
                                   (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar6 = 0;
                  iVar10 = iVar6;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar6;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar10 = iVar6;
                      if (cVar4 != '\0') break;
                      iVar6 = iVar6 + 1;
                      iVar10 = iVar1;
                    } while (iVar1 != iVar6);
                  }
                  local_1dc = iVar10;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  while (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
                    lVar9 = (longlong)local_1b0._4_4_;
                    FUN_146904255(param_1,local_1d8,
                                  (undefined **)(lVar9 * iVar10 + (longlong)ppuVar5),param_4);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar10 = iVar10 + 1;
                      if (iVar1 <= iVar10) break;
                      local_1dc = iVar10;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    local_1dc = iVar10;
                    cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    param_4 = local_1f8;
                  }
                }
                param_3 = local_1e8;
                if ((*(ulonglong *)(*(longlong *)(local_1d0 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar1 = *(int *)(local_1c8 + 1);
                  iVar6 = 0;
                  iVar10 = iVar6;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar6;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar10 = iVar6;
                      if (cVar4 != '\0') break;
                      iVar6 = iVar6 + 1;
                      iVar10 = iVar1;
                    } while (iVar1 != iVar6);
                  }
                  local_1dc = iVar10;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  param_3 = local_1e8;
                  while (local_1e8 = param_3, cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
                    lVar9 = (longlong)local_1b0._4_4_;
                    FUN_146904255(param_1,local_1d0,
                                  (undefined **)(lVar9 * iVar10 + (longlong)ppuVar5),param_4);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar10 = iVar10 + 1;
                      if (iVar1 <= iVar10) break;
                      local_1dc = iVar10;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    local_1dc = iVar10;
                    cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    param_4 = local_1f8;
                    param_3 = local_1e8;
                  }
                }
              }
            }
          }
          else {
            FUN_142840681(param_1,param_2[0xe],pppuVar7,param_4);
          }
        }
        else {
          FUN_14690469a(param_1,param_2,pppuVar7,param_4);
        }
      }
      else {
        (**(code **)(*param_1 + 0x10))(param_1,pppuVar7);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14690469a FUN_14690469a body=316 status=ok
// SIG undefined FUN_14690469a(void)

void FUN_14690469a(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  if ((*(ulonglong *)(plVar3[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    uVar7 = (uint)*(ulonglong *)(plVar3[1] + 0x18);
    bVar1 = *(byte *)(param_2 + 0x70);
    if ((uVar7 >> 0x10 & 1) != 0 && (bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014690470f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1,param_3);
      return;
    }
    (**(code **)(*plVar3 + 0x178))(plVar3);
    uVar2 = (uint)param_3[1];
    uVar6 = (ulonglong)uVar2;
    if (uVar6 != 0) {
      lVar9 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
      if ((uVar7 >> 0x14 & 1) == 0) {
        if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if ((int)param_3[1] == 0) {
              lVar4 = 0;
            }
            else {
              if ((bVar1 & 1) == 0) {
                uVar5 = *param_3;
              }
              else {
                uVar5 = *param_3;
                if ((uVar5 & 1) != 0) {
                  uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                }
              }
              lVar4 = uVar5 + lVar8;
            }
            FUN_146904255(param_1,plVar3,lVar4,param_4);
            lVar8 = lVar8 + lVar9;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        lVar8 = 0;
        do {
          if ((int)param_3[1] == 0) {
            lVar4 = 0;
          }
          else {
            if ((bVar1 & 1) == 0) {
              uVar5 = *param_3;
            }
            else {
              uVar5 = *param_3;
              if ((uVar5 & 1) != 0) {
                uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
              }
            }
            lVar4 = uVar5 + lVar8;
          }
          FUN_142840681(param_1,plVar3[0xe],lVar4,param_4);
          lVar8 = lVar8 + lVar9;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1469047d6 FUN_1469047d6 body=251 status=ok
// SIG undefined FUN_1469047d6(void)

void FUN_1469047d6(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_146904255(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469048d2 FUN_1469048d2 body=145 status=ok
// SIG undefined FUN_1469048d2(void)

void FUN_1469048d2(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_146904255(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146904963 FUN_146904963 body=251 status=ok
// SIG undefined FUN_146904963(void)

void FUN_146904963(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_1449c252b(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146904a5f FUN_146904a5f body=145 status=ok
// SIG undefined FUN_146904a5f(void)

void FUN_146904a5f(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_1449c252b(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146904af0 FUN_146904af0 body=1212 status=ok
// SIG undefined FUN_146904af0(void)

void FUN_146904af0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_238 [40];
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar2 = *(ulonglong *)(param_2[1] + 0x18);
  uVar7 = (uint)uVar2;
  if ((param_2[7] & 0x80000000002000U) == 0 && (uVar2 & 0x3a800000) == 0) {
    local_1e8 = param_2 + 0x10;
    uVar10 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar10 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar9 = 0;
    local_210 = param_4;
    local_208 = param_3;
    do {
      pppuVar6 = (undefined ***)
                 ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar9 +
                 *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar7 >> 0x10 & 1) == 0) {
        if ((uVar7 >> 0x15 & 1) == 0) {
          if ((uVar7 >> 0x14 & 1) == 0) {
            if ((uVar2 >> 0x2e & 1) == 0) {
              if ((uVar2 >> 0x2f & 1) == 0) {
                if ((uVar2 >> 0x34 & 1) == 0) {
                  if ((uVar7 >> 0xc & 1) == 0) {
                    if ((uVar2 >> 0x38 & 1) == 0) {
                      plVar12 = (longlong *)param_1[1];
                      if (plVar12 == (longlong *)0x0) {
                        FUN_1404a881e(param_1);
                        plVar12 = (longlong *)param_1[1];
                      }
                      param_4 = local_210;
                      local_200 = plVar12[0x12];
                      local_1f8 = plVar12[0xe];
                      local_1f0 = plVar12[0x13];
                      plVar12[0x12] = local_210;
                      (**(code **)(*plVar12 + 0x88))(plVar12,param_2);
                      plVar12[0x13] = 0;
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1c0 = &local_1c8;
                      local_1d0 = plVar12;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar6,0);
                      plVar12[0x12] = local_200;
                      (**(code **)(*plVar12 + 0x88))(plVar12,local_1f8);
                      plVar12[0x13] = local_1f0;
                      param_3 = local_208;
                    }
                    else {
                      FUN_1469051e2(param_1,param_2,pppuVar6,param_4);
                    }
                  }
                  else {
                    FUN_1404a87e6(param_1,param_2,pppuVar6,param_4);
                  }
                }
                else {
                  FUN_140176128(param_1,param_2,pppuVar6,param_4);
                }
              }
              else {
                FUN_1469050e6(param_1,param_2,pppuVar6,param_4);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = (longlong *)param_2[0xf];
              local_1b0 = local_1e8[2];
              local_1c0 = (undefined ****)*local_1e8;
              uStack_1b8 = (undefined4)local_1e8[1];
              uStack_1b4 = *(undefined4 *)((longlong)local_1e8 + 0xc);
              iVar1 = *(int *)(pppuVar6 + 1);
              param_4 = local_210;
              param_3 = local_208;
              local_1c8 = pppuVar6;
              if (iVar1 != *(int *)((longlong)pppuVar6 +
                                   (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar11 = 0;
                  iVar8 = iVar11;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar11;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar8 = iVar11;
                      if (cVar4 != '\0') break;
                      iVar11 = iVar11 + 1;
                      iVar8 = iVar1;
                    } while (iVar1 != iVar11);
                  }
LAB_146904f51:
                  local_1dc = iVar8;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    FUN_146904af0(param_1,local_1d8,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar8 + (longlong)ppuVar5),
                                  local_210);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar8 = iVar8 + 1;
                      if (iVar1 <= iVar8) break;
                      local_1dc = iVar8;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    goto LAB_146904f51;
                  }
                }
                param_4 = local_210;
                param_3 = local_208;
                if ((*(ulonglong *)(local_1d0[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar1 = *(int *)(local_1c8 + 1);
                  iVar11 = 0;
                  iVar8 = iVar11;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar11;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar8 = iVar11;
                      if (cVar4 != '\0') break;
                      iVar11 = iVar11 + 1;
                      iVar8 = iVar1;
                    } while (iVar1 != iVar11);
                  }
LAB_146904e57:
                  local_1dc = iVar8;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  param_4 = local_210;
                  param_3 = local_208;
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    FUN_146904af0(param_1,local_1d0,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar8 + (longlong)ppuVar5),
                                  local_210);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar8 = iVar8 + 1;
                      if (iVar1 <= iVar8) break;
                      local_1dc = iVar8;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    goto LAB_146904e57;
                  }
                }
              }
            }
          }
          else {
            FUN_1428406d4(param_1,param_2[0xe],pppuVar6,param_4);
          }
        }
        else {
          FUN_146904fad(param_1,param_2,pppuVar6,param_4);
        }
      }
      else if (*pppuVar6 != (undefined **)0x0) {
        (**(code **)(*param_1 + 0x88))(param_1,pppuVar6,param_4,param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146904fad FUN_146904fad body=313 status=ok
// SIG undefined FUN_146904fad(void)

void FUN_146904fad(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  uVar5 = *(ulonglong *)(plVar3[1] + 0x18);
  if ((uVar5 & 0x810001fbc66bc2) == 0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    (**(code **)(*plVar3 + 0x178))(plVar3);
    uVar2 = (uint)param_3[1];
    uVar9 = (ulonglong)uVar2;
    if (uVar9 != 0) {
      uVar7 = (uint)uVar5;
      if ((uVar7 >> 0x10 & 1) == 0 || (bVar1 & 1) != 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
        if ((uVar7 >> 0x14 & 1) == 0) {
          if (0 < (int)uVar2) {
            lVar8 = 0;
            do {
              if ((int)param_3[1] == 0) {
                lVar4 = 0;
              }
              else {
                if ((bVar1 & 1) == 0) {
                  uVar5 = *param_3;
                }
                else {
                  uVar5 = *param_3;
                  if ((uVar5 & 1) != 0) {
                    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                  }
                }
                lVar4 = uVar5 + lVar8;
              }
              FUN_146904af0(param_1,plVar3,lVar4,param_4);
              lVar8 = lVar8 + lVar6;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if ((int)param_3[1] == 0) {
              lVar4 = 0;
            }
            else {
              if ((bVar1 & 1) == 0) {
                uVar5 = *param_3;
              }
              else {
                uVar5 = *param_3;
                if ((uVar5 & 1) != 0) {
                  uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                }
              }
              lVar4 = uVar5 + lVar8;
            }
            FUN_1428406d4(param_1,plVar3[0xe],lVar4,param_4);
            lVar8 = lVar8 + lVar6;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,*param_3,uVar9,param_4,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1469050e6 FUN_1469050e6 body=251 status=ok
// SIG undefined FUN_1469050e6(void)

void FUN_1469050e6(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_146904af0(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469051e2 FUN_1469051e2 body=145 status=ok
// SIG undefined FUN_1469051e2(void)

void FUN_1469051e2(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_146904af0(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146905273 FUN_146905273 body=251 status=ok
// SIG undefined FUN_146905273(void)

void FUN_146905273(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_1448809ad(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14690536f FUN_14690536f body=145 status=ok
// SIG undefined FUN_14690536f(void)

void FUN_14690536f(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_1448809ad(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146905400 FUN_146905400 body=1092 status=ok
// SIG undefined FUN_146905400(void)

void FUN_146905400(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar2 = *(ulonglong *)(param_2[1] + 0x18);
  uVar12 = (uint)uVar2;
  if ((param_2[7] & 0x80000000002000U) == 0 && (uVar2 & 0x3a800000) == 0) {
    local_1f0 = param_2 + 0x10;
    uVar8 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar8 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar11 = 0;
    local_1f8 = param_4;
    local_1e8 = param_3;
    do {
      pppuVar7 = (undefined ***)
                 ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar11 +
                 *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar12 >> 0x10 & 1) == 0) {
        if ((uVar12 >> 0x15 & 1) == 0) {
          if ((uVar12 >> 0x14 & 1) == 0) {
            if ((uVar2 >> 0x2e & 1) == 0) {
              if ((uVar2 >> 0x2f & 1) == 0) {
                if ((uVar2 >> 0x34 & 1) == 0) {
                  if ((uVar12 >> 0xc & 1) == 0) {
                    if ((uVar2 >> 0x38 & 1) == 0) {
                      lVar9 = param_1[1];
                      if (lVar9 == 0) {
                        FUN_1404a881e(param_1);
                        lVar9 = param_1[1];
                      }
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1c0 = &local_1c8;
                      local_1d0 = lVar9;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar7,0);
                    }
                    else {
                      FUN_146905a7d(param_1,param_2,pppuVar7,param_4);
                    }
                  }
                  else {
                    FUN_1404a87e6(param_1,param_2,pppuVar7,param_4);
                  }
                }
                else {
                  FUN_140176128(param_1,param_2,pppuVar7,param_4);
                }
              }
              else {
                FUN_146905981(param_1,param_2,pppuVar7,param_4);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = param_2[0xf];
              local_1b0 = local_1f0[2];
              local_1c0 = (undefined ****)*local_1f0;
              uStack_1b8 = (undefined4)local_1f0[1];
              uStack_1b4 = *(undefined4 *)((longlong)local_1f0 + 0xc);
              iVar1 = *(int *)(pppuVar7 + 1);
              param_3 = local_1e8;
              local_1c8 = pppuVar7;
              if (iVar1 != *(int *)((longlong)pppuVar7 +
                                   (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar6 = 0;
                  iVar10 = iVar6;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar6;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar10 = iVar6;
                      if (cVar4 != '\0') break;
                      iVar6 = iVar6 + 1;
                      iVar10 = iVar1;
                    } while (iVar1 != iVar6);
                  }
                  local_1dc = iVar10;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  while (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
                    lVar9 = (longlong)local_1b0._4_4_;
                    FUN_146905400(param_1,local_1d8,
                                  (undefined **)(lVar9 * iVar10 + (longlong)ppuVar5),param_4);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar10 = iVar10 + 1;
                      if (iVar1 <= iVar10) break;
                      local_1dc = iVar10;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    local_1dc = iVar10;
                    cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    param_4 = local_1f8;
                  }
                }
                param_3 = local_1e8;
                if ((*(ulonglong *)(*(longlong *)(local_1d0 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar1 = *(int *)(local_1c8 + 1);
                  iVar6 = 0;
                  iVar10 = iVar6;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar6;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar10 = iVar6;
                      if (cVar4 != '\0') break;
                      iVar6 = iVar6 + 1;
                      iVar10 = iVar1;
                    } while (iVar1 != iVar6);
                  }
                  local_1dc = iVar10;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  param_3 = local_1e8;
                  while (local_1e8 = param_3, cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
                    lVar9 = (longlong)local_1b0._4_4_;
                    FUN_146905400(param_1,local_1d0,
                                  (undefined **)(lVar9 * iVar10 + (longlong)ppuVar5),param_4);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar10 = iVar10 + 1;
                      if (iVar1 <= iVar10) break;
                      local_1dc = iVar10;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    local_1dc = iVar10;
                    cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    param_4 = local_1f8;
                    param_3 = local_1e8;
                  }
                }
              }
            }
          }
          else {
            FUN_142840727(param_1,param_2[0xe],pppuVar7,param_4);
          }
        }
        else {
          FUN_146905845(param_1,param_2,pppuVar7,param_4);
        }
      }
      else {
        (**(code **)(*param_1 + 0x10))(param_1,pppuVar7);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146905845 FUN_146905845 body=316 status=ok
// SIG undefined FUN_146905845(void)

void FUN_146905845(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  if ((*(ulonglong *)(plVar3[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    uVar7 = (uint)*(ulonglong *)(plVar3[1] + 0x18);
    bVar1 = *(byte *)(param_2 + 0x70);
    if ((uVar7 >> 0x10 & 1) != 0 && (bVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469058ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))(param_1,param_3);
      return;
    }
    (**(code **)(*plVar3 + 0x178))(plVar3);
    uVar2 = (uint)param_3[1];
    uVar6 = (ulonglong)uVar2;
    if (uVar6 != 0) {
      lVar9 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
      if ((uVar7 >> 0x14 & 1) == 0) {
        if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if ((int)param_3[1] == 0) {
              lVar4 = 0;
            }
            else {
              if ((bVar1 & 1) == 0) {
                uVar5 = *param_3;
              }
              else {
                uVar5 = *param_3;
                if ((uVar5 & 1) != 0) {
                  uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                }
              }
              lVar4 = uVar5 + lVar8;
            }
            FUN_146905400(param_1,plVar3,lVar4,param_4);
            lVar8 = lVar8 + lVar9;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else if (0 < (int)uVar2) {
        lVar8 = 0;
        do {
          if ((int)param_3[1] == 0) {
            lVar4 = 0;
          }
          else {
            if ((bVar1 & 1) == 0) {
              uVar5 = *param_3;
            }
            else {
              uVar5 = *param_3;
              if ((uVar5 & 1) != 0) {
                uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
              }
            }
            lVar4 = uVar5 + lVar8;
          }
          FUN_142840727(param_1,plVar3[0xe],lVar4,param_4);
          lVar8 = lVar8 + lVar9;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 146905981 FUN_146905981 body=251 status=ok
// SIG undefined FUN_146905981(void)

void FUN_146905981(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_146905400(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146905a7d FUN_146905a7d body=145 status=ok
// SIG undefined FUN_146905a7d(void)

void FUN_146905a7d(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_146905400(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146905b0e FUN_146905b0e body=251 status=ok
// SIG undefined FUN_146905b0e(void)

void FUN_146905b0e(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_1407f9f37(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146905c0a FUN_146905c0a body=145 status=ok
// SIG undefined FUN_146905c0a(void)

void FUN_146905c0a(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_1407f9f37(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146905c9b FUN_146905c9b body=1212 status=ok
// SIG undefined FUN_146905c9b(void)

void FUN_146905c9b(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_238 [40];
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar2 = *(ulonglong *)(param_2[1] + 0x18);
  uVar7 = (uint)uVar2;
  if ((param_2[7] & 0x80000000002000U) == 0 && (uVar2 & 0x3a800000) == 0) {
    local_1e8 = param_2 + 0x10;
    uVar10 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar10 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar9 = 0;
    local_210 = param_4;
    local_208 = param_3;
    do {
      pppuVar6 = (undefined ***)
                 ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar9 +
                 *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar7 >> 0x10 & 1) == 0) {
        if ((uVar7 >> 0x15 & 1) == 0) {
          if ((uVar7 >> 0x14 & 1) == 0) {
            if ((uVar2 >> 0x2e & 1) == 0) {
              if ((uVar2 >> 0x2f & 1) == 0) {
                if ((uVar2 >> 0x34 & 1) == 0) {
                  if ((uVar7 >> 0xc & 1) == 0) {
                    if ((uVar2 >> 0x38 & 1) == 0) {
                      plVar12 = (longlong *)param_1[1];
                      if (plVar12 == (longlong *)0x0) {
                        FUN_1404a881e(param_1);
                        plVar12 = (longlong *)param_1[1];
                      }
                      param_4 = local_210;
                      local_200 = plVar12[0x12];
                      local_1f8 = plVar12[0xe];
                      local_1f0 = plVar12[0x13];
                      plVar12[0x12] = local_210;
                      (**(code **)(*plVar12 + 0x88))(plVar12,param_2);
                      plVar12[0x13] = 0;
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1c0 = &local_1c8;
                      local_1d0 = plVar12;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar6,0);
                      plVar12[0x12] = local_200;
                      (**(code **)(*plVar12 + 0x88))(plVar12,local_1f8);
                      plVar12[0x13] = local_1f0;
                      param_3 = local_208;
                    }
                    else {
                      FUN_14690638d(param_1,param_2,pppuVar6,param_4);
                    }
                  }
                  else {
                    FUN_1404a87e6(param_1,param_2,pppuVar6,param_4);
                  }
                }
                else {
                  FUN_140176128(param_1,param_2,pppuVar6,param_4);
                }
              }
              else {
                FUN_146906291(param_1,param_2,pppuVar6,param_4);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = (longlong *)param_2[0xf];
              local_1b0 = local_1e8[2];
              local_1c0 = (undefined ****)*local_1e8;
              uStack_1b8 = (undefined4)local_1e8[1];
              uStack_1b4 = *(undefined4 *)((longlong)local_1e8 + 0xc);
              iVar1 = *(int *)(pppuVar6 + 1);
              param_4 = local_210;
              param_3 = local_208;
              local_1c8 = pppuVar6;
              if (iVar1 != *(int *)((longlong)pppuVar6 +
                                   (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar11 = 0;
                  iVar8 = iVar11;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar11;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar8 = iVar11;
                      if (cVar4 != '\0') break;
                      iVar11 = iVar11 + 1;
                      iVar8 = iVar1;
                    } while (iVar1 != iVar11);
                  }
LAB_1469060fc:
                  local_1dc = iVar8;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    FUN_146905c9b(param_1,local_1d8,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar8 + (longlong)ppuVar5),
                                  local_210);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar8 = iVar8 + 1;
                      if (iVar1 <= iVar8) break;
                      local_1dc = iVar8;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    goto LAB_1469060fc;
                  }
                }
                param_4 = local_210;
                param_3 = local_208;
                if ((*(ulonglong *)(local_1d0[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar1 = *(int *)(local_1c8 + 1);
                  iVar11 = 0;
                  iVar8 = iVar11;
                  if (0 < iVar1) {
                    do {
                      local_1dc = iVar11;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar8 = iVar11;
                      if (cVar4 != '\0') break;
                      iVar11 = iVar11 + 1;
                      iVar8 = iVar1;
                    } while (iVar1 != iVar11);
                  }
LAB_146906002:
                  local_1dc = iVar8;
                  cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                  param_4 = local_210;
                  param_3 = local_208;
                  if (cVar4 != '\0') {
                    if ((local_1a8 & 1) == 0) {
                      ppuVar5 = *local_1c8;
                    }
                    else {
                      ppuVar3 = *local_1c8;
                      ppuVar5 = (undefined **)(((longlong)ppuVar3 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar3 & 1) == 0) {
                        ppuVar5 = ppuVar3;
                      }
                    }
                    FUN_146905c9b(param_1,local_1d0,
                                  (undefined **)
                                  ((longlong)local_1b0._4_4_ * (longlong)iVar8 + (longlong)ppuVar5),
                                  local_210);
                    iVar1 = *(int *)(local_1c8 + 1);
                    do {
                      iVar8 = iVar8 + 1;
                      if (iVar1 <= iVar8) break;
                      local_1dc = iVar8;
                      cVar4 = FUN_1446ec082(&local_1d8,&local_1dc);
                    } while (cVar4 == '\0');
                    goto LAB_146906002;
                  }
                }
              }
            }
          }
          else {
            FUN_1428407a3(param_1,param_2[0xe],pppuVar6,param_4);
          }
        }
        else {
          FUN_146906158(param_1,param_2,pppuVar6,param_4);
        }
      }
      else if (*pppuVar6 != (undefined **)0x0) {
        (**(code **)(*param_1 + 0x88))(param_1,pppuVar6,param_4,param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146906158 FUN_146906158 body=313 status=ok
// SIG undefined FUN_146906158(void)

void FUN_146906158(longlong *param_1,longlong param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  uVar5 = *(ulonglong *)(plVar3[1] + 0x18);
  if ((uVar5 & 0x810001fbc66bc2) == 0) {
    bVar1 = *(byte *)(param_2 + 0x70);
    (**(code **)(*plVar3 + 0x178))(plVar3);
    uVar2 = (uint)param_3[1];
    uVar9 = (ulonglong)uVar2;
    if (uVar9 != 0) {
      uVar7 = (uint)uVar5;
      if ((uVar7 >> 0x10 & 1) == 0 || (bVar1 & 1) != 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x78) + 0x34);
        if ((uVar7 >> 0x14 & 1) == 0) {
          if (0 < (int)uVar2) {
            lVar8 = 0;
            do {
              if ((int)param_3[1] == 0) {
                lVar4 = 0;
              }
              else {
                if ((bVar1 & 1) == 0) {
                  uVar5 = *param_3;
                }
                else {
                  uVar5 = *param_3;
                  if ((uVar5 & 1) != 0) {
                    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                  }
                }
                lVar4 = uVar5 + lVar8;
              }
              FUN_146905c9b(param_1,plVar3,lVar4,param_4);
              lVar8 = lVar8 + lVar6;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if ((int)param_3[1] == 0) {
              lVar4 = 0;
            }
            else {
              if ((bVar1 & 1) == 0) {
                uVar5 = *param_3;
              }
              else {
                uVar5 = *param_3;
                if ((uVar5 & 1) != 0) {
                  uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
                }
              }
              lVar4 = uVar5 + lVar8;
            }
            FUN_1428407a3(param_1,plVar3[0xe],lVar4,param_4);
            lVar8 = lVar8 + lVar6;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,*param_3,uVar9,param_4,param_2);
      }
    }
  }
  return;
}



// FUNCTION 146906291 FUN_146906291 body=251 status=ok
// SIG undefined FUN_146906291(void)

void FUN_146906291(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)(param_2 + 0x70);
  local_28 = *(int *)(param_2 + 0x88);
  local_38 = *(undefined4 *)(param_2 + 0x78);
  uStack_34 = *(undefined4 *)(param_2 + 0x7c);
  uStack_30 = *(undefined4 *)(param_2 + 0x80);
  uStack_2c = *(undefined4 *)(param_2 + 0x84);
  local_40 = param_3;
  if ((*(ulonglong *)(*(longlong *)(local_48 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
    local_58 = &local_48;
    local_50 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        FUN_146905c9b(param_1,local_48,
                      (longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40,param_4);
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14690638d FUN_14690638d body=145 status=ok
// SIG undefined FUN_14690638d(void)

void FUN_14690638d(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((*(ulonglong *)(plVar1[1] + 0x18) & 0x810001fbc66bc2) == 0) {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_2 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_3 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_3);
    }
    if ((param_3 != 0) && (cVar3 != '\0')) {
      FUN_146905c9b(param_1,plVar1,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14690646a FUN_14690646a body=136 status=ok
// SIG undefined FUN_14690646a(void)

undefined8 * FUN_14690646a(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400190da(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb13a0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469064f4 FUN_1469064f4 body=29 status=ok
// SIG undefined FUN_1469064f4(void)

undefined8 FUN_1469064f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906556 FUN_146906556 body=136 status=ok
// SIG undefined FUN_146906556(void)

undefined8 * FUN_146906556(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018ee2(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb1610;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469065e0 FUN_1469065e0 body=29 status=ok
// SIG undefined FUN_1469065e0(void)

undefined8 FUN_1469065e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906686 FUN_146906686 body=136 status=ok
// SIG undefined FUN_146906686(void)

undefined8 * FUN_146906686(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018440(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb1af0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906710 FUN_146906710 body=29 status=ok
// SIG undefined FUN_146906710(void)

undefined8 FUN_146906710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906772 FUN_146906772 body=136 status=ok
// SIG undefined FUN_146906772(void)

undefined8 * FUN_146906772(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001876a(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb1d60;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469067fc FUN_1469067fc body=29 status=ok
// SIG undefined FUN_1469067fc(void)

undefined8 FUN_1469067fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690685e FUN_14690685e body=136 status=ok
// SIG undefined FUN_14690685e(void)

undefined8 * FUN_14690685e(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017b3e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb1fd0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469068e8 FUN_1469068e8 body=29 status=ok
// SIG undefined FUN_1469068e8(void)

undefined8 FUN_1469068e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690694a FUN_14690694a body=136 status=ok
// SIG undefined FUN_14690694a(void)

undefined8 * FUN_14690694a(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018cea(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb2240;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469069d4 FUN_1469069d4 body=29 status=ok
// SIG undefined FUN_1469069d4(void)

undefined8 FUN_1469069d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906a7a FUN_146906a7a body=136 status=ok
// SIG undefined FUN_146906a7a(void)

undefined8 * FUN_146906a7a(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017230(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb2720;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906b04 FUN_146906b04 body=29 status=ok
// SIG undefined FUN_146906b04(void)

undefined8 FUN_146906b04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906bfe FUN_146906bfe body=139 status=ok
// SIG undefined FUN_146906bfe(void)

undefined8 * FUN_146906bfe(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400182dc(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb2dc0;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906c8a FUN_146906c8a body=29 status=ok
// SIG undefined FUN_146906c8a(void)

undefined8 FUN_146906c8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906cf4 FUN_146906cf4 body=139 status=ok
// SIG undefined FUN_146906cf4(void)

undefined8 * FUN_146906cf4(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1456ac7e8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3010;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906d80 FUN_146906d80 body=29 status=ok
// SIG undefined FUN_146906d80(void)

undefined8 FUN_146906d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906dea FUN_146906dea body=139 status=ok
// SIG undefined FUN_146906dea(void)

undefined8 * FUN_146906dea(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001742c(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3260;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906e76 FUN_146906e76 body=29 status=ok
// SIG undefined FUN_146906e76(void)

undefined8 FUN_146906e76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146906f16 FUN_146906f16 body=142 status=ok
// SIG undefined FUN_146906f16(void)

undefined8 * FUN_146906f16(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140019248(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3700;
  param_1[0x10] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146906fa6 FUN_146906fa6 body=29 status=ok
// SIG undefined FUN_146906fa6(void)

undefined8 FUN_146906fa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907016 FUN_146907016 body=139 status=ok
// SIG undefined FUN_146907016(void)

undefined8 * FUN_146907016(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018ba2(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3950;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469070a2 FUN_1469070a2 body=29 status=ok
// SIG undefined FUN_1469070a2(void)

undefined8 FUN_1469070a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907150 FUN_146907150 body=136 status=ok
// SIG undefined FUN_146907150(void)

undefined8 * FUN_146907150(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016d3a(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3d10;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469071da FUN_1469071da body=29 status=ok
// SIG undefined FUN_1469071da(void)

undefined8 FUN_1469071da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690723c FUN_14690723c body=142 status=ok
// SIG undefined FUN_14690723c(void)

undefined8 * FUN_14690723c(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016b32(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb3ef0;
  param_1[0x10] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469072cc FUN_1469072cc body=71 status=ok
// SIG undefined FUN_1469072cc(void)

undefined8 * FUN_1469072cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70270;
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xf] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907366 FUN_146907366 body=142 status=ok
// SIG undefined FUN_146907366(void)

undefined8 * FUN_146907366(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017750(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb40d0;
  param_1[0x14] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x15] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469073f6 FUN_1469073f6 body=38 status=ok
// SIG undefined FUN_1469073f6(void)

undefined8 FUN_1469073f6(undefined8 param_1,int param_2)

{
  FUN_140969e76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690746e FUN_14690746e body=142 status=ok
// SIG undefined FUN_14690746e(void)

undefined8 * FUN_14690746e(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018a12(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb42b0;
  param_1[0x12] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x13] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469074fe FUN_1469074fe body=71 status=ok
// SIG undefined FUN_1469074fe(void)

undefined8 * FUN_1469074fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149e70450;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xe] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469075e4 FUN_1469075e4 body=139 status=ok
// SIG undefined FUN_1469075e4(void)

undefined8 * FUN_1469075e4(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400188d8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb4670;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907670 FUN_146907670 body=29 status=ok
// SIG undefined FUN_146907670(void)

undefined8 FUN_146907670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469076da FUN_1469076da body=139 status=ok
// SIG undefined FUN_1469076da(void)

undefined8 * FUN_1469076da(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400174a6(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb4850;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907766 FUN_146907766 body=29 status=ok
// SIG undefined FUN_146907766(void)

undefined8 FUN_146907766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469077d0 FUN_1469077d0 body=139 status=ok
// SIG undefined FUN_1469077d0(void)

undefined8 * FUN_1469077d0(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400196de(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb4a60;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690785c FUN_14690785c body=29 status=ok
// SIG undefined FUN_14690785c(void)

undefined8 FUN_14690785c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690795c FUN_14690795c body=139 status=ok
// SIG undefined FUN_14690795c(void)

undefined8 * FUN_14690795c(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400199c4(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb5040;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469079e8 FUN_1469079e8 body=29 status=ok
// SIG undefined FUN_1469079e8(void)

undefined8 FUN_1469079e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907a52 FUN_146907a52 body=139 status=ok
// SIG undefined FUN_146907a52(void)

undefined8 * FUN_146907a52(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140019940(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb5220;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907ade FUN_146907ade body=38 status=ok
// SIG undefined FUN_146907ade(void)

undefined8 FUN_146907ade(undefined8 param_1,int param_2)

{
  FUN_1468e1a30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907b50 FUN_146907b50 body=134 status=ok
// SIG undefined FUN_146907b50(void)

undefined8 * FUN_146907b50(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_146901b30(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb5400;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907bd8 FUN_146907bd8 body=29 status=ok
// SIG undefined FUN_146907bd8(void)

undefined8 FUN_146907bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907c3a FUN_146907c3a body=136 status=ok
// SIG undefined FUN_146907c3a(void)

undefined8 * FUN_146907c3a(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468901dc(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb55e0;
  param_1[0xe] = *(undefined8 *)(param_3 + 0x20);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907cc4 FUN_146907cc4 body=29 status=ok
// SIG undefined FUN_146907cc4(void)

undefined8 FUN_146907cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907d26 FUN_146907d26 body=142 status=ok
// SIG undefined FUN_146907d26(void)

undefined8 * FUN_146907d26(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001785e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb57c0;
  param_1[0x10] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907db6 FUN_146907db6 body=29 status=ok
// SIG undefined FUN_146907db6(void)

undefined8 FUN_146907db6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907e26 FUN_146907e26 body=142 status=ok
// SIG undefined FUN_146907e26(void)

undefined8 * FUN_146907e26(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018356(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb59a0;
  param_1[0x10] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907eb6 FUN_146907eb6 body=29 status=ok
// SIG undefined FUN_146907eb6(void)

undefined8 FUN_146907eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146907f26 FUN_146907f26 body=139 status=ok
// SIG undefined FUN_146907f26(void)

undefined8 * FUN_146907f26(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017cac(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eb5b80;
  param_1[0xf] = *(undefined8 *)(param_3 + 0x20);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146907fb2 FUN_146907fb2 body=29 status=ok
// SIG undefined FUN_146907fb2(void)

undefined8 FUN_146907fb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14690801c FUN_14690801c body=75 status=ok
// SIG undefined FUN_14690801c(void)

void FUN_14690801c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      FUN_1446efa72((longlong)param_1 + 8,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 146908068 FUN_146908068 body=119 status=ok
// SIG undefined FUN_146908068(void)

void FUN_146908068(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1408938e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469080e0 FUN_1469080e0 body=38 status=ok
// SIG undefined FUN_1469080e0(void)

undefined8 FUN_1469080e0(undefined8 param_1,int param_2)

{
  FUN_145c063c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146908106 FUN_146908106 body=53 status=ok
// SIG undefined FUN_146908106(void)

void FUN_146908106(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  FUN_1469081b8(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000146908134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  return;
}



// FUNCTION 14690813c FUN_14690813c body=60 status=ok
// SIG undefined FUN_14690813c(void)

void FUN_14690813c(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  FUN_145c06410(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1469081b8 FUN_1469081b8 body=137 status=ok
// SIG undefined FUN_1469081b8(void)

void FUN_1469081b8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  
  iVar2 = param_2 + 0xffff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (iVar2 >> 0x10 < *(int *)(param_1 + 0x10)) {
    lVar6 = (longlong)(iVar2 >> 0x10) * 0x10;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + lVar6);
    if (lVar1 != 0) {
      lVar3 = (longlong)(param_2 % 0x10000) * 0x10;
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        piVar5 = (int *)(*(longlong *)(param_1 + 8) + lVar6);
        puVar4 = (undefined8 *)(lVar1 + lVar3);
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          if (*(longlong *)(piVar5 + 2) != 0) {
            FUN_1400020a8();
          }
          piVar5[2] = 0;
          piVar5[3] = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -0x100000;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
    }
  }
  return;
}



// FUNCTION 146908242 FUN_146908242 body=48 status=ok
// SIG undefined FUN_146908242(void)

void FUN_146908242(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146908272 FUN_146908272 body=83 status=ok
// SIG undefined FUN_146908272(void)

void FUN_146908272(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  if (*param_3 == 0) {
    FUN_1469081b8(param_1,param_2);
  }
  else {
    puVar4 = (undefined4 *)FUN_1469082c6(param_1,param_2);
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    lVar3 = param_3[1];
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    *puVar4 = (int)*param_3;
    puVar4[1] = uVar1;
    puVar4[2] = (int)lVar3;
    puVar4[3] = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001469082be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  return;
}



// FUNCTION 1469082c6 FUN_1469082c6 body=180 status=ok
// SIG undefined FUN_1469082c6(void)

longlong FUN_1469082c6(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14690837a();
  uVar2 = param_2 + 0xffff;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  lVar4 = (longlong)((int)uVar2 >> 0x10) * 0x10;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + lVar4);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + lVar4);
  if (lVar4 == 0) {
    lVar4 = FUN_14001cc68(0x100000,0x10);
    lVar5 = 8;
    do {
      *(undefined8 *)(lVar4 + -8 + lVar5) = 0;
      *(undefined4 *)(lVar4 + lVar5) = 0xffffffff;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x100008);
    *(longlong *)(piVar1 + 2) = lVar4;
    uVar3 = *(int *)(param_1 + 0x20) + 0x100000;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 < *(uint *)(param_1 + 0x24)) {
      uVar3 = *(uint *)(param_1 + 0x24);
    }
    *(uint *)(param_1 + 0x24) = uVar3;
    lVar4 = *(longlong *)(piVar1 + 2);
  }
  lVar5 = (longlong)(int)(param_2 - (uVar2 & 0xffff0000)) * 0x10;
  if (*(longlong *)(lVar4 + lVar5) == 0) {
    *piVar1 = *piVar1 + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    lVar4 = *(longlong *)(piVar1 + 2);
  }
  return lVar4 + lVar5;
}



// FUNCTION 14690837a FUN_14690837a body=103 status=ok
// SIG undefined FUN_14690837a(void)

void FUN_14690837a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2 + 0xffff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 <= iVar2 >> 0x10) {
    iVar2 = (iVar2 >> 0x10) + 1;
    *(int *)(param_1 + 0x10) = iVar2;
    uVar3 = iVar2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < uVar3) {
      FUN_1469083e2(param_1 + 8);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8)),0,(longlong)(int)uVar3 << 4
          );
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x1c) = iVar1 << 0x10;
  return;
}



// FUNCTION 1469083e2 FUN_1469083e2 body=132 status=ok
// SIG undefined FUN_1469083e2(void)

void FUN_1469083e2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146908468 FUN_146908468 body=109 status=ok
// SIG undefined FUN_146908468(void)

undefined8 * FUN_146908468(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_149eb5d80;
  puVar2[2] = &PTR_FUN_149eb5d90;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  return puVar2;
}



// FUNCTION 1469084d6 FUN_1469084d6 body=38 status=ok
// SIG undefined FUN_1469084d6(void)

undefined8 FUN_1469084d6(undefined8 param_1,int param_2)

{
  FUN_146908832();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469084fc FUN_1469084fc body=74 status=ok
// SIG undefined FUN_1469084fc(void)

undefined8 * FUN_1469084fc(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eb5d88;
  puVar1 = TlsGetValue(DAT_14c75ecf8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ecf8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146908546 FUN_146908546 body=38 status=ok
// SIG undefined FUN_146908546(void)

undefined8 FUN_146908546(undefined8 param_1,int param_2)

{
  FUN_1469085c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146908572 FUN_146908572 body=33 status=ok
// SIG undefined FUN_146908572(void)

void FUN_146908572(undefined8 param_1)

{
  FUN_1469017de();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1469085c8 FUN_1469085c8 body=61 status=ok
// SIG undefined FUN_1469085c8(void)

void FUN_1469085c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eb5d90;
  FUN_1469017de();
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_146908606(param_1 + 1);
  return;
}



// FUNCTION 146908606 FUN_146908606 body=52 status=ok
// SIG undefined FUN_146908606(void)

void FUN_146908606(longlong *param_1)

{
  FUN_14690863a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14690863a FUN_14690863a body=89 status=ok
// SIG undefined FUN_14690863a(void)

void FUN_14690863a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1469086e4 FUN_1469086e4 body=219 status=ok
// SIG undefined FUN_1469086e4(void)

void FUN_1469086e4(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2) {
          lVar2 = *param_1;
          plVar5 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[8];
          }
          lVar1 = lVar2 + (longlong)iVar4 * 0x18;
          lVar8 = (longlong)*(int *)(lVar1 + 0x14);
          iVar7 = *(int *)((longlong)plVar5 + lVar8 * 4);
          if (iVar7 == iVar4) {
            puVar6 = (undefined4 *)((longlong)plVar5 + lVar8 * 4);
          }
          else {
            do {
              lVar8 = (longlong)iVar7;
              iVar7 = *(int *)(lVar2 + 0x10 + lVar8 * 0x18);
            } while (iVar7 != iVar4);
            puVar6 = (undefined4 *)(lVar2 + lVar8 * 0x18 + 0x10);
          }
          *puVar6 = *(undefined4 *)(lVar1 + 0x10);
          FUN_1469087c0();
          return;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1469087c0 FUN_1469087c0 body=114 status=ok
// SIG undefined FUN_1469087c0(void)

void FUN_1469087c0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146908832 FUN_146908832 body=80 status=ok
// SIG undefined FUN_146908832(void)

void FUN_146908832(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eb5d80;
  FUN_1469085c8(param_1 + 2);
  *param_1 = &PTR_FUN_149eb5d88;
  puVar1 = TlsGetValue(DAT_14c75ecf8);
  if (puVar1 != param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014690887b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c75ecf8,(LPVOID)0x0);
  return;
}



// FUNCTION 146908882 FUN_146908882 body=149 status=ok
// SIG undefined FUN_146908882(void)

void FUN_146908882(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  iVar1 = *param_3;
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
    FUN_140f9708a(&DAT_14c9647b8,param_1);
  }
  local_40 = param_1 + 0x58;
  local_38 = param_1 + 0x60;
  FUN_14690892c(param_1 + 8,local_2c);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690892c FUN_14690892c body=324 status=ok
// SIG undefined FUN_14690892c(void)

undefined4 * FUN_14690892c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146908a72(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146908b58(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146908bd8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146908a72 FUN_146908a72 body=230 status=ok
// SIG undefined FUN_146908a72(void)

int * FUN_146908a72(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146908b58 FUN_146908b58 body=128 status=ok
// SIG undefined FUN_146908b58(void)

undefined8 FUN_146908b58(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1469087c0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146908bd8 FUN_146908bd8 body=474 status=ok
// SIG undefined FUN_146908bd8(void)

void FUN_146908bd8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146908db4 FUN_146908db4 body=63 status=ok
// SIG undefined FUN_146908db4(void)

void FUN_146908db4(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14690863a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146908bd8(param_1);
    return;
  }
  FUN_146908df4(param_1);
  FUN_14690863a(param_1);
  return;
}



// FUNCTION 146908df4 FUN_146908df4 body=322 status=ok
// SIG undefined FUN_146908df4(void)

void FUN_146908df4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146908f38 FUN_146908f38 body=74 status=ok
// SIG undefined FUN_146908f38(void)

undefined8 * FUN_146908f38(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eb5db0;
  puVar1 = TlsGetValue(DAT_14c75ec34);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ec34,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146908f82 FUN_146908f82 body=135 status=ok
// SIG undefined FUN_146908f82(void)

undefined8 *
FUN_146908f82(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149eb0f10;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690900a FUN_14690900a body=137 status=ok
// SIG undefined FUN_14690900a(void)

undefined8 * FUN_14690900a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8000000000200);
  *param_1 = &PTR_LAB_149eb0f10;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909094 FUN_146909094 body=84 status=ok
// SIG undefined FUN_146909094(void)

undefined8 * FUN_146909094(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140841c90(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1469090e8 FUN_1469090e8 body=182 status=ok
// SIG undefined FUN_1469090e8(void)

longlong * FUN_1469090e8(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1400021e4(&local_20,param_1);
  cVar1 = FUN_144a791f8(param_1,L"__verse_0x",10,1);
  if (cVar1 != '\0') {
    FUN_144a49bb4(param_1,&local_30,0x13);
    if (&local_30 == param_1) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_30;
      *(undefined4 *)(param_1 + 1) = local_28;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469091b0 FUN_1469091b0 body=318 status=ok
// SIG undefined FUN_1469091b0(void)

undefined8 * FUN_1469091b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_78 [32];
  int local_58;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x2e4) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  FUN_1469090e8(&local_38);
  _Src = local_38;
  iVar1 = *(int *)(param_1 + 0x2f8);
  if (iVar1 < 2) {
    local_48 = (void *)0x0;
    local_40 = local_30;
    if ((longlong)local_30 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_30,0);
      memcpy(local_48,_Src,(longlong)local_30 * 2);
    }
  }
  else {
    local_58 = iVar1 + (uint)(local_30 == 0);
    local_48 = (void *)0x0;
    FUN_14125bce8(&local_48,local_38,local_30,0);
    FUN_1401aebe8(&local_48,*(undefined8 *)(param_1 + 0x2f0),iVar1 + -1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1467ad6b2(param_2,&local_48,0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469092f0 FUN_1469092f0 body=453 status=ok
// SIG undefined FUN_1469092f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469092f0(longlong param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_48;
  
  thunk_FUN_1446f1718();
  if (*(longlong *)(param_1 + 0x80) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = 0;
    lVar7 = *(longlong *)(param_1 + 0x80);
    do {
      lVar8 = *(longlong *)(lVar7 + 0x58);
      lVar3 = FUN_14496b3f0(lVar7);
      if (lVar3 != 0) {
        lVar4 = FUN_145956efc();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           ((*(byte *)(lVar3 + 0x250) & 1) != 0)) {
          lVar3 = *(longlong *)(param_1 + 0x80);
          if (lVar3 != 0) {
            plVar5 = (longlong *)(param_1 + 0x80);
            if (lVar3 != lVar7) {
              do {
                lVar3 = *(longlong *)(lVar3 + 0x58);
                if (lVar3 == 0) goto LAB_14690937a;
              } while (lVar3 != lVar7);
              plVar5 = &local_48;
            }
            *plVar5 = *(longlong *)(lVar7 + 0x58);
            *(undefined8 *)(lVar7 + 0x58) = 0;
          }
LAB_14690937a:
          bVar6 = 1;
        }
      }
      lVar7 = lVar8;
    } while (lVar8 != 0);
  }
  if ((*(uint *)(param_1 + 8) >> 0x13 & 1) != 0) {
    cVar2 = FUN_1427c402c();
    if ((cVar2 == '\0') && (iVar1 = *(int *)(param_1 + 0x260), (longlong)iVar1 != 0)) {
      lVar7 = *(longlong *)(param_1 + 600);
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar7 + lVar8) != 0) {
          (**(code **)(*param_2 + 0x198))(param_2);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if ((*(byte *)(param_1 + 0x250) & 1) != 0) {
      (*(code *)*_DAT_00000000)(0,param_1);
    }
    iVar1 = *(int *)(param_1 + 0x1f8);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1f0);
      lVar8 = 0;
      do {
        lVar3 = FUN_1400796d0(param_1,*(undefined8 *)(lVar7 + lVar8),1);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar7 + 8 + lVar8);
          *(byte *)(lVar3 + 0xb1) = *(byte *)(lVar3 + 0xb1) | 4;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar8);
    }
  }
  if (((*(uint *)(param_1 + 8) >> 0x13 & 1) == 0) && (-1 < *(int *)(param_1 + 0xd4))) {
    return;
  }
  FUN_1408a750e(param_1,bVar6 | param_3 & 1);
  return;
}



// FUNCTION 1469094b6 FUN_1469094b6 body=81 status=ok
// SIG undefined FUN_1469094b6(void)

void FUN_1469094b6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    lVar2 = FUN_140010bca();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      (**(code **)(*param_2 + 0x198))(param_2,lVar1);
    }
  }
  return;
}



// FUNCTION 146909508 FUN_146909508 body=16 status=ok
// SIG undefined FUN_146909508(void)

undefined8 FUN_146909508(void)

{
  FUN_14690a6d0();
  return 0;
}



// FUNCTION 146909518 FUN_146909518 body=22 status=ok
// SIG undefined FUN_146909518(void)

undefined8 FUN_146909518(undefined8 param_1,undefined8 param_2)

{
  FUN_1417138d2();
  return param_2;
}



// FUNCTION 14690952e FUN_14690952e body=181 status=ok
// SIG undefined FUN_14690952e(void)

void FUN_14690952e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_146891920();
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar5 = *(longlong *)(lVar3 + 0x110);
  if (lVar5 == 0) {
    FUN_140aa6c08(lVar3);
    lVar5 = *(longlong *)(lVar3 + 0x110);
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
  if (((*(byte *)(param_1 + 0x250) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x260), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 600);
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar5);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447f76d2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1469095e4 FUN_1469095e4 body=77 status=ok
// SIG undefined FUN_1469095e4(void)

void FUN_1469095e4(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  FUN_1468918e0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909632 FUN_146909632 body=113 status=ok
// SIG undefined FUN_146909632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146909632(longlong param_1,longlong param_2)

{
  if (((*(uint *)(param_2 + 8) >> 0xc & 1) == 0) &&
     (((*(uint *)(param_2 + 8) & 0x30) == 0 ||
      ((*(uint *)(*(longlong *)(param_2 + 0x10) + 8) >> 0xc & 1) == 0)))) {
    FUN_14690982a(param_1,param_2);
    (**(code **)(_DAT_00000000 + 0x18))(0,param_2,param_1 + 0x280);
  }
                    /* WARNING: Could not recover jumptable at 0x00014690967c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x10))(0,param_2,param_1 + 0x270);
  return;
}



// FUNCTION 1469096a4 FUN_1469096a4 body=96 status=ok
// SIG undefined FUN_1469096a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469096a4(longlong param_1,longlong param_2)

{
  if (((*(char *)(param_1 + 0x350) == '\x01') && (*(longlong *)(param_1 + 0x78) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x10) == 0)) {
    FUN_146909704(param_1,param_2);
  }
  FUN_14690982a(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000146909701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,param_2,param_1 + 0x280);
  return;
}



// FUNCTION 146909704 FUN_146909704 body=214 status=ok
// SIG undefined FUN_146909704(void)

void FUN_146909704(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    do {
      puVar1 = (ulonglong *)(lVar2 + 0x38);
      if ((*puVar1 & 0x8000080000) != 0) break;
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
    if ((*puVar1 & 0x8000080000) != 0) {
      FUN_146899382(local_e0,2);
      lVar2 = *(longlong *)(param_1 + 0x110);
      if (lVar2 == 0) {
        FUN_140aa6c08(param_1);
        lVar2 = *(longlong *)(param_1 + 0x110);
      }
      FUN_14050314a(local_e0,param_2,lVar2);
      local_f8 = param_2;
      local_f0 = local_e0;
      FUN_14019af10(param_1,param_2,lVar2,0);
      FUN_1401be4be(local_e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469097e4 FUN_1469097e4 body=68 status=ok
// SIG undefined FUN_1469097e4(void)

void FUN_1469097e4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690982a FUN_14690982a body=203 status=ok
// SIG undefined FUN_14690982a(void)

void FUN_14690982a(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(uint *)(param_2 + 1) & 0x30) == 0) &&
     (((param_3 == 0 || (*(longlong **)(param_3 + 8) != param_2)) && (DAT_14c86a9f0 == '\0')))) {
    if (*(longlong *)(param_1 + 0x268) != 0) {
      FUN_1400337aa();
      local_38 = &local_41;
      local_40 = FUN_141073f72;
      lVar2 = FUN_144a773aa(&local_40,&DAT_14c75ec34);
      uVar1 = *(undefined1 *)(lVar2 + 0x20);
      *(undefined1 *)(lVar2 + 0x20) = 0;
      (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(param_1 + 0x268),0);
      *(undefined1 *)(lVar2 + 0x20) = uVar1;
    }
    FUN_1469098f6(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469098f6 FUN_1469098f6 body=287 status=ok
// SIG undefined FUN_1469098f6(void)

void FUN_1469098f6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  do {
    if (lVar1 == 0) {
      return;
    }
    lVar6 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (bVar7) goto LAB_14690995b;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_14690995b:
      if (*(longlong *)(lVar1 + 0x70) != 0) {
        lVar4 = FUN_145b2ab64();
        lVar6 = *(longlong *)(lVar1 + 0x70);
        if ((((lVar6 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) &&
           (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) &&
            ((*(longlong *)(lVar6 + 200) != 0 && (lVar4 = *(longlong *)(lVar6 + 0xd0), lVar4 != 0)))
            ))) {
          if (param_3 != 0) {
            cVar3 = FUN_14019afc2(param_3,lVar1);
            if (cVar3 != '\0') goto LAB_146909995;
            lVar4 = *(longlong *)(lVar6 + 0xd0);
          }
          plVar5 = *(longlong **)(lVar4 + 0x110);
          if (plVar5 == (longlong *)0x0) {
            FUN_140aa6c08(lVar4);
            plVar5 = *(longlong **)(lVar4 + 0x110);
          }
          (**(code **)(*plVar5 + 0x248))
                    (plVar5,*(undefined8 *)(lVar6 + 200),*(int *)(lVar1 + 0x44) + param_2);
        }
      }
    }
LAB_146909995:
    lVar1 = *(longlong *)(lVar1 + 0x18);
  } while( true );
}



// FUNCTION 146909a16 FUN_146909a16 body=62 status=ok
// SIG undefined FUN_146909a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146909a16(longlong param_1,longlong param_2)

{
  FUN_140e97a80();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146909a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_00000000 + 8))(0,param_1);
    return;
  }
  return;
}



// FUNCTION 146909a54 FUN_146909a54 body=68 status=ok
// SIG undefined FUN_146909a54(void)

void FUN_146909a54(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909a9a FUN_146909a9a body=61 status=ok
// SIG undefined FUN_146909a9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146909a9a(longlong param_1)

{
  FUN_1400105f6();
  if (((*(uint *)(param_1 + 8) >> 0x13 & 1) != 0) && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146909ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*_DAT_00000000)(0,param_1);
    return;
  }
  return;
}



// FUNCTION 146909ad8 FUN_146909ad8 body=68 status=ok
// SIG undefined FUN_146909ad8(void)

void FUN_146909ad8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909b1e FUN_146909b1e body=318 status=ok
// SIG undefined FUN_146909b1e(void)

uint FUN_146909b1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if ((plVar1 == (longlong *)0x0) ||
     ((**(code **)(*plVar1 + 8))(plVar1,&local_48), (local_40 & 0x10000000000000) == 0)) {
    uVar3 = 0;
    if (param_1 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(ulonglong *)(param_1 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_1;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      uVar3 = 0;
      do {
        if (0 < *(int *)(local_40 + 0x30)) {
          lVar4 = 0;
          do {
            iVar2 = FUN_1449b1a2a(local_40,*(int *)(local_40 + 0x34) * lVar4 +
                                           *(int *)(local_40 + 0x44) + param_2);
            uVar3 = iVar2 + (uVar3 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)(local_40 + 0x30));
        }
        local_40 = *(ulonglong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146909c5e FUN_146909c5e body=22 status=ok
// SIG undefined FUN_146909c5e(void)

undefined8 FUN_146909c5e(undefined8 param_1,undefined8 param_2)

{
  FUN_1417138d2();
  return param_2;
}



// FUNCTION 146909c9c FUN_146909c9c body=47 status=ok
// SIG undefined FUN_146909c9c(void)

void FUN_146909c9c(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146909ce2 FUN_146909ce2 body=54 status=ok
// SIG undefined FUN_146909ce2(void)

undefined1 FUN_146909ce2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146909ddc(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 146909d40 FUN_146909d40 body=59 status=ok
// SIG undefined FUN_146909d40(void)

undefined8 FUN_146909d40(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909ddc FUN_146909ddc body=214 status=ok
// SIG undefined FUN_146909ddc(void)

longlong FUN_146909ddc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_144a787a6();
  plVar1 = (longlong *)(param_2 + 0x10);
  lVar3 = FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x28) != 0) goto LAB_146909e16;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 0x18);
    if ((cVar2 != '\0') || (*(int *)(param_2 + 0x28) == 0)) {
      lVar4 = *plVar1;
      goto LAB_146909e89;
    }
LAB_146909e16:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_146909e3b;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_146909e3b:
        *plVar1 = lVar4;
        goto LAB_146909e89;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
  }
  lVar4 = 0;
LAB_146909e89:
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1406fa324(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 146909eb4 FUN_146909eb4 body=51 status=ok
// SIG undefined FUN_146909eb4(void)

void FUN_146909eb4(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 146909f24 FUN_146909f24 body=54 status=ok
// SIG undefined FUN_146909f24(void)

undefined1 FUN_146909f24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14690a03c(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146909f82 FUN_146909f82 body=59 status=ok
// SIG undefined FUN_146909f82(void)

undefined8 FUN_146909f82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146909fc8 FUN_146909fc8 body=38 status=ok
// SIG undefined FUN_146909fc8(void)

void FUN_146909fc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14690a03c FUN_14690a03c body=199 status=ok
// SIG undefined FUN_14690a03c(void)

longlong * FUN_14690a03c(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_1446ebfd4();
  if (*param_2 == 0) {
    if ((int)param_2[3] != 0) goto LAB_14690a06a;
  }
  else {
    cVar1 = FUN_144729dda(param_2 + 1);
    if ((cVar1 != '\0') || ((int)param_2[3] == 0)) {
      lVar3 = *param_2;
      goto LAB_14690a0dd;
    }
LAB_14690a06a:
    lVar3 = FUN_14007daa4(param_2,0,0);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (bVar5) goto LAB_14690a08f;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_14690a08f:
        *param_2 = lVar3;
        goto LAB_14690a0dd;
      }
    }
    if (*param_2 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  lVar3 = 0;
LAB_14690a0dd:
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14690a132 FUN_14690a132 body=102 status=ok
// SIG undefined FUN_14690a132(void)

undefined1 FUN_14690a132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined2 *)(param_2 + 8 + lVar3) = *(undefined2 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14690a1c0 FUN_14690a1c0 body=59 status=ok
// SIG undefined FUN_14690a1c0(void)

undefined8 FUN_14690a1c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690a262 FUN_14690a262 body=63 status=ok
// SIG undefined FUN_14690a262(void)

void FUN_14690a262(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  return;
}



// FUNCTION 14690a30a FUN_14690a30a body=97 status=ok
// SIG undefined FUN_14690a30a(void)

undefined1 FUN_14690a30a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14690a562(param_2,param_3);
    FUN_14690a562(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14690a394 FUN_14690a394 body=59 status=ok
// SIG undefined FUN_14690a394(void)

undefined8 FUN_14690a394(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690a3e0 FUN_14690a3e0 body=40 status=ok
// SIG undefined FUN_14690a3e0(void)

void FUN_14690a3e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14690a456(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14690a456 FUN_14690a456 body=83 status=ok
// SIG undefined FUN_14690a456(void)

void FUN_14690a456(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14690a4aa(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14690a4aa(param_1);
  return;
}



// FUNCTION 14690a4aa FUN_14690a4aa body=54 status=ok
// SIG undefined FUN_14690a4aa(void)

void FUN_14690a4aa(longlong *param_1)

{
  FUN_14690a4e0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14690a4e0 FUN_14690a4e0 body=128 status=ok
// SIG undefined FUN_14690a4e0(void)

void FUN_14690a4e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14690a562 FUN_14690a562 body=122 status=ok
// SIG undefined FUN_14690a562(void)

longlong FUN_14690a562(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14690a5dc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14690a5dc FUN_14690a5dc body=243 status=ok
// SIG undefined FUN_14690a5dc(void)

longlong * FUN_14690a5dc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14690a4e0(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar8 = 0;
      uVar7 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar6 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar8) = *(undefined4 *)(lVar3 + lVar8);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar8) = *(undefined4 *)(lVar3 + 4 + lVar8);
        }
        else {
          lVar4 = *(longlong *)(lVar3 + 8 + lVar8);
          *(longlong *)(lVar5 + 8 + lVar8) = lVar4;
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_1456cec3c();
          }
          *(undefined2 *)(lVar5 + 0x10 + lVar8) = *(undefined2 *)(lVar3 + 0x10 + lVar8);
          *(undefined8 *)(lVar5 + 0x18 + lVar8) = *(undefined8 *)(lVar3 + 0x18 + lVar8);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14690a6d0 FUN_14690a6d0 body=197 status=ok
// SIG undefined FUN_14690a6d0(void)

void FUN_14690a6d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c964900;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c96490c = DAT_14c96490c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c9648f8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c9648f8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c96490c = DAT_14c96490c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14690a76a;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c96490c = DAT_14c96490c + -1;
LAB_14690a76a:
  FUN_14474d06a(&DAT_14c9648f8,0);
  return;
}



// FUNCTION 14690a79b FUN_14690a79b body=864 status=ok
// SIG undefined FUN_14690a79b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14690a79b(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  double *pdVar10;
  double dVar11;
  double dVar18;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  double dVar2;
  double dVar4;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar5 = *param_1;
  dVar6 = param_1[1];
  dVar11 = param_1[2] * -1.0;
  dVar18 = param_1[3] * 1.0;
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar25 = param_2[1];
  dVar26 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[2];
  local_b8 = (dVar11 * dVar25 + (dVar18 * *param_2 * 1.0 - dVar1 * dVar5)) - dVar6 * dVar3 * -1.0;
  dStack_b0 = (dVar18 * dVar26 + (dVar11 * *param_2 * -1.0 - dVar2 * dVar6)) - dVar5 * dVar4 * 1.0;
  local_a8 = dVar18 * dVar3 * 1.0 + dVar5 * dVar25 + (dVar11 * dVar1 - *param_2 * dVar6 * 1.0);
  dStack_a0 = dVar11 * dVar4 * -1.0 + dVar6 * dVar26 + (dVar18 * dVar2 - *param_2 * dVar5 * -1.0);
  FUN_1448052ee(&local_b8,&local_d8);
  local_f8 = local_d8;
  if (param_4[1] <= local_d8) {
    local_f8 = param_4[1];
  }
  if (local_f8 <= param_3[1]) {
    local_f8 = param_3[1];
  }
  pdVar10 = &local_f8;
  dStack_f0 = dStack_d0;
  if (*param_4 <= dStack_d0) {
    dStack_f0 = *param_4;
  }
  if (dStack_f0 <= *param_3) {
    dStack_f0 = *param_3;
  }
  local_e8 = local_c8;
  if (param_4[2] <= local_c8) {
    local_e8 = param_4[2];
  }
  if (local_e8 <= param_3[2]) {
    local_e8 = param_3[2];
  }
  uVar8 = FUN_144a7484c(pdVar10,&local_118);
  local_a8 = local_108;
  dStack_a0 = dStack_100;
  local_b8 = local_118;
  dStack_b0 = dStack_110;
  local_108 = local_108 * -1.0;
  dStack_100 = dStack_100 * 1.0;
  dVar2 = *param_2;
  dVar1 = param_2[1];
  dVar25 = param_2[2];
  dVar26 = param_2[3];
  *param_1 = dVar1 * local_108 * -1.0 +
             ((dVar2 * dStack_100 - local_118 * dVar26 * 1.0) - dVar25 * dStack_110);
  param_1[1] = dVar2 * local_108 * 1.0 +
               ((dVar1 * dStack_100 - local_118 * dVar25 * -1.0) - dVar26 * dStack_110);
  param_1[2] = dVar26 * local_108 * 1.0 +
               dStack_110 * dVar2 + (dStack_100 * dVar25 - local_118 * dVar1 * 1.0);
  param_1[3] = dVar25 * local_108 * -1.0 +
               dStack_110 * dVar1 + (dStack_100 * dVar26 - local_118 * dVar2 * -1.0);
  dVar2 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar19._8_8_ = dStack_f0 - dStack_d0;
  auVar19._0_8_ = local_f8 - local_d8;
  auVar20 = divpd(auVar19,_DAT_1499387d0);
  auVar12._0_8_ = (local_e8 - local_c8) / 360.0;
  auVar12._8_8_ = 0;
  auVar21 = roundpd(auVar20,auVar20,3);
  auVar20 = roundpd(auVar12,auVar12,3);
  auVar27._0_8_ = (local_e8 - local_c8) - auVar20._0_8_ * dVar2;
  auVar27._8_8_ = 0.0 - auVar20._8_8_ * dVar1;
  dVar25 = (local_f8 - local_d8) - auVar21._0_8_ * dVar2;
  dVar26 = (dStack_f0 - dStack_d0) - auVar21._8_8_ * dVar1;
  auVar24._0_8_ = dVar25 + dVar2;
  auVar24._8_8_ = dVar26 + dVar1;
  auVar23._0_8_ = dVar2 + auVar27._0_8_;
  auVar23._8_8_ = dVar1 + auVar27._8_8_;
  auVar13._8_8_ = -(ulonglong)(0.0 <= dVar26);
  auVar13._0_8_ = -(ulonglong)(0.0 <= dVar25);
  auVar20._8_8_ = dVar26;
  auVar20._0_8_ = dVar25;
  auVar21 = blendvpd(auVar24,auVar20,auVar13);
  auVar14._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
  auVar14._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
  auVar20 = blendvpd(auVar23,auVar27,auVar14);
  auVar28._0_8_ = auVar21._0_8_ + -360.0;
  auVar28._8_8_ = auVar21._8_8_ + -360.0;
  auVar15._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
  auVar15._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
  auVar12 = blendvpd(auVar21,auVar28,auVar15);
  auVar16._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
  auVar16._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
  auVar21._8_8_ = auVar20._8_8_ + -360.0;
  auVar21._0_8_ = auVar20._0_8_ + -360.0;
  auVar20 = blendvpd(auVar20,auVar21,auVar16);
  auVar22._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar12._8_8_));
  auVar22._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar12._0_8_));
  iVar7 = movmskpd((int)uVar8,auVar22);
  auVar17._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._8_8_));
  auVar17._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._0_8_));
  uVar9 = movmskpd((int)pdVar10,auVar17);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44((int)((ulonglong)uVar8 >> 0x20),iVar7) >> 8),
                    (uVar9 & 0x3fffffff) != 0 || iVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690aafc FUN_14690aafc body=994 status=ok
// SIG undefined FUN_14690aafc(void)

undefined8 *
FUN_14690aafc(undefined8 *param_1,longlong param_2,double *param_3,double *param_4,char param_5,
             double *param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  uVar5 = DAT_14c8463e8;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar7 = *param_4;
  dVar6 = param_4[1];
  dVar1 = param_4[2];
  if (ABS(1.0 - (dVar1 * dVar1 + dVar7 * dVar7 + dVar6 * dVar6)) < 0.009999999776482582) {
    if ((param_5 == '\0') ||
       (ABS(1.0 - (param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1])) <
        0.009999999776482582)) {
      dVar2 = param_3[2] - *(double *)(param_2 + 0x30);
      dVar3 = param_3[1] - *(double *)(param_2 + 0x28);
      dVar4 = *param_3 - *(double *)(param_2 + 0x20);
      dVar8 = dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3;
      if (9.99999993922529e-09 < dVar8) {
        dVar8 = 1.0 / SQRT(dVar8);
        dVar4 = dVar4 * dVar8;
        dVar3 = dVar3 * dVar8;
        dVar2 = dVar2 * dVar8;
      }
      local_98 = dVar4;
      local_90 = dVar3;
      local_88 = dVar2;
      if (1e-05 < param_7) {
        dVar8 = (double)param_7;
        if (180.0 <= dVar8) {
          dVar8 = 180.0;
        }
        dVar6 = dVar1 * dVar2 + dVar7 * dVar4 + dVar6 * dVar3;
        dVar7 = dVar6;
        if (1.0 <= dVar6) {
          dVar7 = 1.0;
        }
        dVar7 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                             ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar7));
        if (dVar8 * 0.017453292519943295 < dVar7) {
          dVar7 = (dVar8 * 0.017453292519943295) / dVar7;
          dVar2 = (dVar2 - param_4[2]) * dVar7 + param_4[2];
          dVar3 = (dVar3 - param_4[1]) * dVar7 + param_4[1];
          dVar4 = (dVar4 - *param_4) * dVar7 + *param_4;
          dVar7 = dVar2 * dVar2 + dVar4 * dVar4 + dVar3 * dVar3;
          local_98 = dVar4;
          local_90 = dVar3;
          local_88 = dVar2;
          if (9.99999993922529e-09 < dVar7) {
            dVar7 = 1.0 / SQRT(dVar7);
            dVar4 = dVar4 * dVar7;
            dVar3 = dVar3 * dVar7;
            dVar2 = dVar2 * dVar7;
            local_98 = dVar4;
            local_90 = dVar3;
            local_88 = dVar2;
          }
        }
      }
      if (param_5 != '\0') {
        dVar7 = dVar2 * param_6[2] + dVar4 * *param_6 + dVar3 * param_6[1];
        local_88 = dVar2 - param_6[2] * dVar7;
        local_90 = dVar3 - param_6[1] * dVar7;
        local_98 = dVar4 - dVar7 * *param_6;
        dVar7 = local_88 * local_88 + local_98 * local_98 + local_90 * local_90;
        if (9.99999993922529e-09 < dVar7) {
          dVar7 = 1.0 / SQRT(dVar7);
          local_98 = local_98 * dVar7;
          local_90 = local_90 * dVar7;
          local_88 = local_88 * dVar7;
        }
      }
      FUN_144a9d448(param_1,param_4,&local_98);
      if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  param_1[2] = DAT_14c8463e0;
  param_1[3] = uVar5;
  uVar5 = DAT_14c8463d8;
  *param_1 = DAT_14c8463d0;
  param_1[1] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14690aedf FUN_14690aedf body=2373 status=ok
// SIG undefined FUN_14690aedf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14690aedf(double *param_1,undefined8 param_2,double *param_3,longlong *param_4)

{
  double dVar1;
  undefined1 auVar3 [16];
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  char cVar19;
  int iVar20;
  double *pdVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar27;
  double *pdVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  double *local_3e0;
  double local_3d8 [8];
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  double local_378 [4];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double dVar2;
  undefined8 *puVar26;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar25 = param_4[1];
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_3e0 = param_1;
  FUN_1449437a2(param_2,local_378);
  if (0 < (longlong)(int)lVar25) {
    lVar27 = 0;
    do {
      lVar4 = *param_4;
      if (1e-05 < *(float *)(lVar4 + 0x10 + lVar27)) {
        pdVar21 = (double *)(lVar4 + lVar27 + 0x80);
        pdVar28 = local_178;
        for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
          *pdVar28 = *pdVar21;
          pdVar21 = pdVar21 + 1;
          pdVar28 = pdVar28 + 1;
        }
        local_3e8 = &local_318;
        FUN_14690b826(lVar4 + lVar27,local_178,param_2,param_3);
      }
      lVar27 = lVar27 + 0xe0;
    } while ((longlong)(int)lVar25 * 0xe0 - lVar27 != 0);
  }
  auVar46 = _DAT_149934d80;
  local_3d8[0] = 0.0;
  local_3d8[1] = 0.0;
  local_3d8[2] = 0.0;
  local_3d8[3] = 1.0;
  local_3d8[4] = 0.0;
  local_3d8[5] = 0.0;
  local_3d8[6] = 0.0;
  local_3d8[7] = 0.0;
  dVar33 = (double)DAT_149934d80;
  dVar38 = DAT_149934d80._8_8_;
  local_398 = _DAT_149934d80;
  local_388 = 0x3ff0000000000000;
  uStack_380 = 0;
  cVar19 = FUN_14690b8e6(&local_318);
  if (cVar19 == '\0') {
    cVar19 = FUN_14690bb70(&local_318,local_1f8);
    if (cVar19 != '\0') {
      local_358 = (double)local_1f8._0_8_;
      dStack_350 = (double)local_1f8._8_8_;
      local_348 = local_1e8;
      dStack_340 = 0.0;
    }
    cVar19 = FUN_14690bc74(&local_318,local_178);
    if (cVar19 != '\0') {
      local_378[0] = local_178[0];
      local_378[1] = local_178[1];
      local_378[2] = local_178[2];
      local_378[3] = local_178[3];
    }
    puVar26 = &local_318;
    pdVar21 = (double *)FUN_14690bea6(puVar26,&local_278);
    uVar23 = SUB84(puVar26,0);
    if ((char)pdVar21 != '\0') {
      local_338 = local_278;
      dStack_330 = dStack_270;
      local_328 = local_268;
      dStack_320 = 0.0;
    }
  }
  else {
    pdVar21 = local_3d8;
    pdVar28 = local_378;
    for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
      *pdVar28 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar28 = pdVar28 + 1;
    }
    uVar23 = 0;
    pdVar21 = param_3;
  }
  dVar13 = dStack_320;
  pdVar28 = local_3e0;
  local_3e0[6] = 0.0;
  local_3e0[7] = 0.0;
  local_3e0[4] = 0.0;
  local_3e0[5] = 0.0;
  auVar34 = *(undefined1 (*) [16])(param_3 + 8);
  dVar5 = auVar34._0_8_;
  dVar7 = auVar34._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_3 + 10);
  dVar6 = auVar3._0_8_;
  auVar39._8_8_ = dStack_330;
  auVar39._0_8_ = local_338;
  auVar18._8_8_ = dStack_320;
  auVar18._0_8_ = local_328;
  auVar34 = minpd(auVar39,auVar34);
  auVar39 = minpd(auVar18,auVar3);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar20 = movmskpd((int)pdVar21,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar22 = movmskpd(uVar23,auVar34);
  if ((uVar22 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar14 = *param_3;
    dVar15 = param_3[1];
    dVar16 = param_3[2];
    dVar17 = param_3[3];
    dVar33 = param_3[3];
    dVar38 = param_3[3];
    dVar32 = *param_3;
    dVar40 = *param_3;
    dVar43 = param_3[1];
    dVar45 = param_3[1];
    dVar1 = param_3[2];
    dVar2 = param_3[2];
    dVar9 = local_358 * dVar5;
    dVar10 = dStack_350 * dVar7;
    dVar11 = local_348 * dVar6;
    dVar44 = dStack_340 * auVar3._8_8_;
    dVar48 = dVar10 * dVar14 - dVar15 * dVar9;
    dVar49 = dVar11 * dVar15 - dVar16 * dVar10;
    dVar50 = dVar9 * dVar16 - dVar14 * dVar11;
    dVar12 = dVar44 * dVar17 - dVar17 * dVar44;
    dVar49 = dVar49 + dVar49;
    dVar50 = dVar50 + dVar50;
    dVar48 = dVar48 + dVar48;
    dVar12 = dVar12 + dVar12;
    dVar37 = param_3[4];
    dVar42 = param_3[5];
    dVar41 = param_3[6];
    dVar44 = (dVar12 * dVar17 - dVar12 * dVar17) + dVar38 * dVar12 + dVar44 + param_3[7];
    *local_3e0 = local_378[1] * dVar1 * -1.0 +
                 local_378[2] * dVar43 + local_378[3] * dVar32 * 1.0 + local_378[0] * dVar33;
    local_3e0[1] = local_378[0] * dVar2 * 1.0 +
                   local_378[3] * dVar45 + local_378[2] * dVar40 * -1.0 + local_378[1] * dVar38;
    local_3e0[2] = local_378[3] * dVar1 * 1.0 +
                   ((dVar32 * local_378[1] * 1.0 + local_378[2] * dVar33) - local_378[0] * dVar43);
    local_3e0[3] = local_378[2] * dVar2 * -1.0 +
                   ((dVar40 * local_378[0] * -1.0 + local_378[3] * dVar38) - local_378[1] * dVar45);
    local_3e0[4] = (dVar48 * dVar15 - dVar16 * dVar50) + dVar33 * dVar49 + dVar9 + dVar37;
    local_3e0[5] = (dVar49 * dVar16 - dVar48 * dVar14) + dVar38 * dVar50 + dVar10 + dVar42;
    auVar46._8_4_ = SUB84(dVar44,0);
    auVar46._0_8_ = (dVar50 * dVar14 - dVar15 * dVar49) + dVar33 * dVar48 + dVar11 + dVar41;
    auVar46._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])(local_3e0 + 6) = auVar46;
  }
  else {
    dVar45 = *param_3;
    dVar1 = param_3[1];
    dVar2 = param_3[2];
    dVar37 = dVar1 + dVar1;
    dVar41 = dVar2 + dVar2;
    dVar40 = dVar45 * (dVar45 + dVar45);
    local_1a8 = (1.0 - (dVar40 + dVar1 * dVar37)) * dVar6;
    dVar32 = param_3[3];
    dVar42 = dVar41 * dVar32;
    dVar44 = (dVar45 + dVar45) * param_3[3];
    dVar32 = dVar37 * dVar32;
    local_1b8 = (dVar32 + *param_3 * dVar41) * dVar6;
    dVar40 = (dVar38 - (dVar2 * dVar41 + dVar40)) * dVar7;
    dVar43 = (dVar37 * dVar45 + dVar42) * dVar5;
    local_1c8 = (dVar41 * dVar1 + dVar44) * dVar7;
    dStack_1b0 = (dVar41 * dVar1 - dVar44) * dVar6;
    local_1e8 = (*param_3 * dVar41 - dVar32) * dVar5;
    local_1f8._8_4_ = SUB84(dVar43,0);
    local_1f8._0_8_ = (dVar33 - (dVar2 * dVar41 + dVar1 * dVar37)) * dVar5;
    local_1f8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar40,0);
    local_1d8._0_8_ = (dVar37 * dVar45 - dVar42) * dVar7;
    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar40 = local_378[1] + local_378[1];
    dVar43 = local_378[2] + local_378[2];
    dVar32 = local_378[0] * (local_378[0] + local_378[0]);
    local_228 = (1.0 - (dVar32 + local_378[1] * dVar40)) * local_328;
    dVar45 = (local_378[0] + local_378[0]) * local_378[3];
    local_238 = (dVar40 * local_378[3] + local_378[0] * dVar43) * local_328;
    dStack_230 = (dVar43 * local_378[1] - dVar45) * local_328;
    local_278 = (dVar33 - (local_378[2] * dVar43 + local_378[1] * dVar40)) * local_338;
    dVar33 = (dVar38 - (local_378[2] * dVar43 + dVar32)) * dStack_330;
    dStack_270 = (dVar40 * local_378[0] + dVar43 * local_378[3]) * local_338;
    local_248 = (dVar43 * local_378[1] + dVar45) * dStack_330;
    local_268 = (local_378[0] * dVar43 - dVar40 * local_378[3]) * local_338;
    uStack_260 = 0;
    local_258._8_4_ = SUB84(dVar33,0);
    local_258._0_8_ = (dVar40 * local_378[0] - dVar43 * local_378[3]) * dStack_330;
    local_258._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = local_358;
    dStack_210 = dStack_350;
    local_208 = local_348;
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(local_178);
    FUN_144a1c686(local_178,0x3e45798ee0000000);
    auVar30._8_8_ = -(ulonglong)(0.0 <= dVar7 * dStack_330);
    auVar30._0_8_ = -(ulonglong)(0.0 <= dVar5 * local_338);
    auVar34 = blendvpd(_DAT_149936790,auVar46,auVar30);
    uVar29 = -(ulonglong)(0.0 <= dVar6 * local_328);
    dVar33 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
    dVar38 = auVar34._0_8_;
    local_178[2] = local_178[2] * dVar38;
    local_178[1] = local_178[1] * dVar38;
    local_178[0] = local_178[0] * dVar38;
    dVar38 = auVar34._8_8_;
    local_148 = local_148 * dVar38;
    local_150 = local_150 * dVar38;
    local_158 = dVar38 * local_158;
    local_128 = local_128 * dVar33;
    local_130 = local_130 * dVar33;
    local_138 = dVar33 * local_138;
    FUN_14481fd10(&local_298,local_178);
    dVar33 = local_288 * local_288 + local_298 * local_298;
    dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar36._0_8_ = dVar33 + dVar38;
    auVar36._8_8_ = dVar33 + dVar38;
    auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar34 = sqrtpd(auVar36,auVar36);
    auVar46 = divpd(auVar46,auVar34);
    auVar47._0_8_ = auVar46._0_8_ * local_288;
    auVar47._8_8_ = auVar46._8_8_ * dStack_280;
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar31);
    *pdVar28 = (double)((ulonglong)(local_298 * auVar46._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    pdVar28[1] = (double)((ulonglong)(dStack_290 * auVar46._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    *(undefined1 (*) [16])(pdVar28 + 2) = auVar34;
    pdVar28[4] = local_118;
    pdVar28[5] = dStack_110;
    pdVar28[6] = local_108;
    pdVar28[7] = 0.0;
  }
  dVar13 = dVar13 * auVar3._8_8_;
  auVar8._8_4_ = SUB84(dStack_330 * dVar7,0);
  auVar8._0_8_ = local_338 * dVar5;
  auVar8._12_4_ = (int)((ulonglong)(dStack_330 * dVar7) >> 0x20);
  *(undefined1 (*) [16])(pdVar28 + 8) = auVar8;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = local_328 * dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(pdVar28 + 10) = auVar3;
  FUN_14690bf94(&local_318);
  if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pdVar28;
}



// FUNCTION 14690b826 FUN_14690b826 body=191 status=ok
// SIG undefined FUN_14690b826(void)

void FUN_14690b826(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_14690cc98();
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    local_98 = *(undefined4 *)(param_1 + 0x10);
    local_90 = param_5;
    (**(code **)(*plVar1 + 8))(plVar1,&local_88,param_3,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690b8e6 FUN_14690b8e6 body=649 status=ok
// SIG undefined FUN_14690b8e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14690b8e6(longlong *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((0 < (int)uVar1) && ((longlong)(int)param_1[9] != 0)) {
    pfVar24 = (float *)param_1[8];
    fVar30 = 0.0;
    lVar26 = 0;
    do {
      fVar30 = fVar30 + *(float *)((longlong)pfVar24 + lVar26);
      lVar26 = lVar26 + 4;
    } while ((longlong)(int)param_1[9] * 4 != lVar26);
    if (1e-05 < fVar30) {
      fVar30 = (float)(~-(uint)(1.0 < fVar30) & 0x3f800000 |
                      (uint)(1.0 / fVar30) & -(uint)(1.0 < fVar30));
      pdVar2 = (double *)*param_1;
      fVar31 = *pfVar24 * fVar30;
      dVar34 = (double)fVar31;
      dVar35 = (double)fVar31;
      dVar39 = pdVar2[8] * dVar34;
      dVar42 = pdVar2[9] * dVar35;
      dVar43 = pdVar2[10] * dVar34;
      dVar44 = pdVar2[0xb] * dVar35;
      dVar36 = pdVar2[4] * dVar34;
      dVar38 = pdVar2[5] * dVar35;
      dVar14 = pdVar2[6] * dVar34;
      dVar15 = pdVar2[7] * dVar35;
      dVar9 = *pdVar2 * dVar34;
      dVar10 = pdVar2[1] * dVar35;
      dVar34 = dVar34 * pdVar2[2];
      dVar35 = dVar35 * pdVar2[3];
      auVar47._8_4_ = SUB84(dVar10,0);
      auVar47._0_8_ = dVar9;
      auVar47._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *param_2 = auVar47;
      *(double *)param_2[1] = dVar34;
      *(double *)(param_2[1] + 8) = dVar35;
      auVar40._8_4_ = SUB84(dVar38,0);
      auVar40._0_8_ = dVar36;
      auVar40._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      param_2[2] = auVar40;
      auVar12._8_4_ = SUB84(dVar15,0);
      auVar12._0_8_ = dVar14;
      auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      param_2[3] = auVar12;
      *(double *)param_2[4] = dVar39;
      *(double *)(param_2[4] + 8) = dVar42;
      *(double *)param_2[5] = dVar43;
      *(double *)(param_2[5] + 8) = dVar44;
      if (uVar1 != 1) {
        pfVar24 = (float *)0x2;
        if (2 < (int)uVar1) {
          pfVar24 = (float *)(ulonglong)uVar1;
        }
        pfVar25 = (float *)&DAT_00000001;
        lVar26 = 0xb0;
        do {
          lVar3 = *param_1;
          fVar31 = *(float *)(param_1[8] + (longlong)pfVar25 * 4) * fVar30;
          dVar16 = (double)fVar31;
          dVar17 = (double)fVar31;
          pdVar2 = (double *)(lVar3 + -0x50 + lVar26);
          dVar19 = *pdVar2 * dVar16;
          dVar20 = pdVar2[1] * dVar17;
          pdVar2 = (double *)(lVar3 + -0x40 + lVar26);
          dVar22 = *pdVar2 * dVar16;
          dVar23 = pdVar2[1] * dVar17;
          dVar45 = dVar34 * dVar22 + dVar9 * dVar19;
          dVar48 = dVar35 * dVar23 + dVar10 * dVar20;
          lVar27 = -(ulonglong)(0.0 <= dVar45 + dVar48);
          lVar28 = -(ulonglong)(0.0 <= dVar45 + dVar48);
          uVar32 = (undefined4)lVar28;
          uVar33 = (undefined4)((ulonglong)lVar28 >> 0x20);
          auVar46._0_8_ = 0.0 - dVar19;
          auVar46._8_8_ = 0.0 - dVar20;
          auVar49._0_8_ = 0.0 - dVar22;
          auVar49._8_8_ = 0.0 - dVar23;
          auVar4._8_4_ = uVar32;
          auVar4._0_8_ = lVar27;
          auVar4._12_4_ = uVar33;
          auVar18._8_4_ = SUB84(dVar20,0);
          auVar18._0_8_ = dVar19;
          auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          auVar47 = blendvpd(auVar46,auVar18,auVar4);
          dVar9 = dVar9 + auVar47._0_8_;
          dVar10 = dVar10 + auVar47._8_8_;
          auVar5._8_4_ = uVar32;
          auVar5._0_8_ = lVar27;
          auVar5._12_4_ = uVar33;
          auVar21._8_4_ = SUB84(dVar23,0);
          auVar21._0_8_ = dVar22;
          auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          auVar47 = blendvpd(auVar49,auVar21,auVar5);
          dVar34 = dVar34 + auVar47._0_8_;
          dVar35 = dVar35 + auVar47._8_8_;
          auVar7._8_4_ = SUB84(dVar10,0);
          auVar7._0_8_ = dVar9;
          auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *param_2 = auVar7;
          *(double *)param_2[1] = dVar34;
          *(double *)(param_2[1] + 8) = dVar35;
          pdVar2 = (double *)(lVar3 + -0x30 + lVar26);
          dVar36 = dVar36 + *pdVar2 * dVar16;
          dVar38 = dVar38 + pdVar2[1] * dVar17;
          pdVar2 = (double *)(lVar3 + -0x20 + lVar26);
          dVar14 = dVar14 + *pdVar2 * dVar16;
          dVar15 = dVar15 + pdVar2[1] * dVar17;
          auVar11._8_4_ = SUB84(dVar38,0);
          auVar11._0_8_ = dVar36;
          auVar11._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          param_2[2] = auVar11;
          auVar13._8_4_ = SUB84(dVar15,0);
          auVar13._0_8_ = dVar14;
          auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          param_2[3] = auVar13;
          pdVar2 = (double *)(lVar3 + -0x10 + lVar26);
          dVar39 = dVar39 + *pdVar2 * dVar16;
          dVar42 = dVar42 + pdVar2[1] * dVar17;
          dVar43 = dVar43 + dVar16 * *(double *)(lVar3 + lVar26);
          dVar44 = dVar44 + dVar17 * ((double *)(lVar3 + lVar26))[1];
          *(double *)param_2[4] = dVar39;
          *(double *)(param_2[4] + 8) = dVar42;
          *(double *)param_2[5] = dVar43;
          *(double *)(param_2[5] + 8) = dVar44;
          pfVar25 = (float *)((longlong)pfVar25 + 1);
          lVar26 = lVar26 + 0x60;
        } while (pfVar24 != pfVar25);
      }
      dVar36 = dVar34 * dVar34 + dVar9 * dVar9;
      dVar38 = dVar35 * dVar35 + dVar10 * dVar10;
      auVar37._0_8_ = dVar36 + dVar38;
      auVar37._8_8_ = dVar36 + dVar38;
      uVar29 = -(ulonglong)(1e-08 <= auVar37._8_8_);
      auVar47 = sqrtpd(auVar37,auVar37);
      auVar40 = divpd(_DAT_149934d80,auVar47);
      auVar41._0_8_ = auVar40._0_8_ * dVar34;
      auVar41._8_8_ = auVar40._8_8_ * dVar35;
      auVar6._8_4_ = (int)uVar29;
      auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar37._0_8_);
      auVar6._12_4_ = (int)(uVar29 >> 0x20);
      auVar47 = blendvpd(_DAT_149935300,auVar41,auVar6);
      uVar29 = (ulonglong)(dVar10 * auVar40._8_8_) & uVar29;
      auVar8._8_4_ = (int)uVar29;
      auVar8._0_8_ = (ulonglong)(dVar9 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar37._0_8_);
      auVar8._12_4_ = (int)(uVar29 >> 0x20);
      *param_2 = auVar8;
      param_2[1] = auVar47;
      return CONCAT71((int7)((ulonglong)pfVar24 >> 8),1);
    }
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149935300) is written */
  return 0;
}



// FUNCTION 14690bb70 FUN_14690bb70 body=260 status=ok
// SIG undefined FUN_14690bb70(void)

undefined8 FUN_14690bb70(longlong param_1,double *param_2)

{
  float *pfVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((0 < *(int *)(param_1 + 0x18)) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    pfVar1 = *(float **)(param_1 + 0x50);
    fVar8 = 0.0;
    lVar6 = 0;
    do {
      fVar8 = fVar8 + *(float *)((longlong)pfVar1 + lVar6);
      lVar6 = lVar6 + 4;
    } while ((longlong)*(int *)(param_1 + 0x58) * 4 != lVar6);
    if (1e-05 < fVar8) {
      fVar8 = (float)(~-(uint)(1.0 < fVar8) & 0x3f800000 |
                     (uint)(1.0 / fVar8) & -(uint)(1.0 < fVar8));
      pdVar2 = *(double **)(param_1 + 0x10);
      dVar9 = (double)(*pfVar1 * fVar8);
      dVar10 = pdVar2[2] * dVar9;
      dVar4 = pdVar2[1] * dVar9;
      dVar9 = dVar9 * *pdVar2;
      *param_2 = dVar9;
      param_2[1] = dVar4;
      param_2[2] = dVar10;
      uVar5 = CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
      if (*(int *)(param_1 + 0x18) < 2) {
        return uVar5;
      }
      lVar6 = 1;
      lVar7 = 10;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        dVar11 = (double)(*(float *)(*(longlong *)(param_1 + 0x50) + lVar6 * 4) * fVar8);
        dVar10 = dVar10 + *(double *)(lVar3 + lVar7 * 4) * dVar11;
        dVar4 = dVar4 + *(double *)(lVar3 + -8 + lVar7 * 4) * dVar11;
        dVar9 = dVar9 + dVar11 * *(double *)(lVar3 + -0x10 + lVar7 * 4);
        *param_2 = dVar9;
        param_2[1] = dVar4;
        param_2[2] = dVar10;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 6;
      } while (lVar6 < *(int *)(param_1 + 0x18));
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 14690bc74 FUN_14690bc74 body=562 status=ok
// SIG undefined FUN_14690bc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14690bc74(longlong param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  
  if ((0 < *(int *)(param_1 + 0x28)) && ((longlong)*(int *)(param_1 + 0x68) != 0)) {
    pfVar5 = *(float **)(param_1 + 0x60);
    fVar8 = 0.0;
    lVar6 = 0;
    do {
      fVar8 = fVar8 + *(float *)((longlong)pfVar5 + lVar6);
      lVar6 = lVar6 + 4;
    } while ((longlong)*(int *)(param_1 + 0x68) * 4 != lVar6);
    if (1e-05 < fVar8) {
      fVar8 = (float)(~-(uint)(1.0 < fVar8) & 0x3f800000 |
                     (uint)(1.0 / fVar8) & -(uint)(1.0 < fVar8));
      pdVar1 = *(double **)(param_1 + 0x20);
      dVar9 = (double)(*pfVar5 * fVar8);
      dVar10 = *pdVar1 * dVar9;
      dVar11 = pdVar1[1] * dVar9;
      dVar2 = dVar9 * pdVar1[2];
      dVar9 = dVar9 * pdVar1[3];
      *param_2 = dVar10;
      param_2[1] = dVar11;
      auVar14._8_4_ = SUB84(dVar9,0);
      auVar14._0_8_ = dVar2;
      auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 2) = auVar14;
      if (1 < *(int *)(param_1 + 0x28)) {
        pfVar5 = (float *)&DAT_00000001;
        lVar6 = 0xc;
        do {
          dVar12 = (double)(*(float *)(*(longlong *)(param_1 + 0x60) + (longlong)pfVar5 * 4) * fVar8
                           );
          pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + -0x10 + lVar6 * 4);
          dVar3 = *pdVar1 * dVar12;
          dVar4 = pdVar1[1] * dVar12;
          pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
          dVar15 = dVar12 * *pdVar1;
          dVar12 = dVar12 * pdVar1[1];
          if (0.0 <= dVar12 * dVar9 + dVar2 * dVar15 + dVar4 * dVar11 + dVar10 * dVar3) {
            dVar10 = dVar10 + dVar3;
            dVar11 = dVar11 + dVar4;
            dVar2 = dVar2 + dVar15;
            dVar9 = dVar9 + dVar12;
          }
          else {
            dVar10 = dVar10 - dVar3;
            dVar11 = dVar11 - dVar4;
            dVar2 = dVar2 - dVar15;
            dVar9 = dVar9 - dVar12;
          }
          *param_2 = dVar10;
          param_2[1] = dVar11;
          param_2[2] = dVar2;
          param_2[3] = dVar9;
          pfVar5 = (float *)((longlong)pfVar5 + 1);
          lVar6 = lVar6 + 8;
        } while ((longlong)pfVar5 < (longlong)*(int *)(param_1 + 0x28));
        dVar10 = *param_2;
        dVar11 = param_2[1];
        dVar2 = param_2[2];
        dVar9 = param_2[3];
      }
      dVar12 = dVar2 * dVar2 + dVar10 * dVar10;
      dVar15 = dVar9 * dVar9 + dVar11 * dVar11;
      auVar13._0_8_ = dVar12 + dVar15;
      auVar13._8_8_ = dVar12 + dVar15;
      auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
      auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
      auVar14 = sqrtpd(auVar13,auVar13);
      auVar14 = divpd(_DAT_149934d80,auVar14);
      auVar16._0_8_ = auVar14._0_8_ * dVar2;
      auVar16._8_8_ = auVar14._8_8_ * dVar9;
      *param_2 = (double)((ulonglong)(dVar10 * auVar14._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_));
      param_2[1] = (double)((ulonglong)(dVar11 * auVar14._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_));
      auVar14 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar7);
      *(undefined1 (*) [16])(param_2 + 2) = auVar14;
      return CONCAT71((int7)((ulonglong)pfVar5 >> 8),1);
    }
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return 0;
}



// FUNCTION 14690bea6 FUN_14690bea6 body=237 status=ok
// SIG undefined FUN_14690bea6(void)

undefined8 FUN_14690bea6(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = DAT_14c8464f0;
  if ((0 < *(int *)(param_1 + 0x38)) && ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    fVar6 = 0.0;
    lVar4 = 0;
    do {
      fVar6 = fVar6 + *(float *)(*(longlong *)(param_1 + 0x70) + lVar4);
      lVar4 = lVar4 + 4;
    } while ((longlong)*(int *)(param_1 + 0x78) * 4 != lVar4);
    if (1e-05 < fVar6) {
      param_2[2] = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar8;
      uVar3 = CONCAT71((int7)((ulonglong)dVar7 >> 8),1);
      if (*(int *)(param_1 + 0x38) < 1) {
        return uVar3;
      }
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar1 = param_2[2];
      lVar4 = 4;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x30);
        dVar9 = (double)(*(float *)(*(longlong *)(param_1 + 0x70) + lVar5 * 4) *
                        (float)(~-(uint)(1.0 < fVar6) & 0x3f800000 |
                               (uint)(1.0 / fVar6) & -(uint)(1.0 < fVar6)));
        dVar1 = dVar1 + *(double *)(lVar2 + lVar4 * 4) * dVar9;
        dVar8 = dVar8 + *(double *)(lVar2 + -8 + lVar4 * 4) * dVar9;
        dVar7 = dVar7 + dVar9 * *(double *)(lVar2 + -0x10 + lVar4 * 4);
        *param_2 = dVar7;
        param_2[1] = dVar8;
        param_2[2] = dVar1;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 6;
      } while (lVar5 < *(int *)(param_1 + 0x38));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14690bf94 FUN_14690bf94 body=131 status=ok
// SIG undefined FUN_14690bf94(void)

void FUN_14690bf94(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14690c017 FUN_14690c017 body=864 status=ok
// SIG undefined FUN_14690c017(void)

double * FUN_14690c017(double *param_1,double *param_2,undefined1 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = *param_2 * 0.017453292519943295;
  dVar5 = param_2[1] * 0.017453292519943295;
  dVar1 = param_2[2];
  if (param_4 != '\0') {
    dVar6 = -dVar6;
    dVar5 = -dVar5;
  }
  dVar2 = cos(dVar6 * 0.5);
  dVar3 = cos(dVar5 * 0.5);
  dVar7 = dVar1 * 0.017453292519943295 * 0.5;
  dVar1 = cos(dVar7);
  dVar6 = sin(dVar6 * 0.5);
  dVar5 = sin(dVar5 * 0.5);
  dVar7 = sin(dVar7);
  dVar8 = DAT_14c8463e8;
  switch(param_3) {
  case 0:
    dVar9 = dVar2 * dVar3 * dVar1 + dVar6 * dVar5 * dVar7;
    dVar8 = dVar2 * dVar3 * dVar7 - dVar1 * dVar6 * dVar5;
    break;
  case 1:
    *param_1 = dVar3 * dVar6 * dVar1 + dVar2 * dVar5 * dVar7;
    param_1[1] = dVar2 * dVar5 * dVar1 + dVar3 * dVar6 * dVar7;
    param_1[2] = dVar2 * dVar3 * dVar7 + -dVar6 * dVar5 * dVar1;
    param_1[3] = dVar2 * dVar3 * dVar1 + dVar7 * -dVar6 * dVar5;
    return param_1;
  case 2:
    dVar9 = dVar2 * dVar3 * dVar1 - dVar7 * dVar6 * dVar5;
    dVar8 = dVar2 * dVar3 * dVar7 + dVar6 * dVar5 * dVar1;
    break;
  case 3:
    dVar9 = dVar2 * dVar3 * dVar1 + dVar6 * dVar5 * dVar7;
    dVar8 = dVar2 * dVar3 * dVar7 + dVar1 * dVar6 * dVar5;
    dVar4 = dVar2 * dVar5 * dVar1 - dVar7 * dVar3 * dVar6;
    goto LAB_14690c1cf;
  case 4:
    dVar9 = dVar2 * dVar3 * dVar1 + dVar6 * dVar5 * dVar7;
    dVar8 = dVar2 * dVar3 * dVar7 - dVar1 * dVar6 * dVar5;
    goto LAB_14690c326;
  case 5:
    dVar9 = dVar2 * dVar3 * dVar1 - dVar7 * dVar6 * dVar5;
    dVar8 = dVar2 * dVar3 * dVar7 + dVar6 * dVar5 * dVar1;
LAB_14690c326:
    *param_1 = dVar3 * dVar6 * dVar1 + dVar2 * dVar5 * dVar7;
    param_1[1] = dVar2 * dVar5 * dVar1 - dVar7 * dVar3 * dVar6;
    goto LAB_14690c1e1;
  default:
    param_1[2] = DAT_14c8463e0;
    param_1[3] = dVar8;
    dVar1 = DAT_14c8463d8;
    *param_1 = DAT_14c8463d0;
    param_1[1] = dVar1;
    return param_1;
  }
  dVar4 = dVar2 * dVar5 * dVar1 + dVar3 * dVar6 * dVar7;
LAB_14690c1cf:
  *param_1 = dVar3 * dVar6 * dVar1 - dVar7 * dVar2 * dVar5;
  param_1[1] = dVar4;
LAB_14690c1e1:
  param_1[2] = dVar8;
  param_1[3] = dVar9;
  return param_1;
}



// FUNCTION 14690c377 FUN_14690c377 body=1588 status=ok
// SIG undefined FUN_14690c377(void)

double * FUN_14690c377(double *param_1,double *param_2,byte param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  
  if (5 < param_3) {
    uVar17 = (undefined4)DAT_14c8464e0;
    uVar18 = (uint)((ulonglong)DAT_14c8464e0 >> 0x20);
    uVar19 = (undefined4)DAT_14c8464e8;
    uVar20 = (uint)((ulonglong)DAT_14c8464e8 >> 0x20);
    uVar15 = (undefined4)DAT_14c8464f0;
    uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    goto LAB_14690c5e9;
  }
  dVar1 = *param_2;
  dVar7 = param_2[1];
  dVar11 = param_2[2];
  dVar13 = param_2[3];
  dVar4 = dVar7 + dVar7;
  dVar14 = dVar11 + dVar11;
  dVar12 = dVar1 * (dVar1 + dVar1);
  dVar10 = (dVar1 + dVar1) * dVar13;
  dVar9 = 1.0 - (dVar7 * dVar4 + dVar11 * dVar14);
  dVar6 = dVar1 * dVar4 + dVar14 * dVar13;
  dVar5 = dVar1 * dVar14 - dVar4 * dVar13;
  dVar2 = dVar1 * dVar4 - dVar14 * dVar13;
  dVar3 = 1.0 - (dVar11 * dVar14 + dVar12);
  dVar11 = dVar7 * dVar14 + dVar10;
  dVar13 = dVar4 * dVar13 + dVar1 * dVar14;
  dVar10 = dVar7 * dVar14 - dVar10;
  dVar1 = 1.0 - (dVar7 * dVar4 + dVar12);
  switch(param_3) {
  case 0:
    dVar7 = dVar5;
    if (1.0 <= dVar5) {
      dVar7 = 1.0;
    }
    dVar7 = (double)(~-(ulonglong)(-1.0 < dVar7) & 0x3ff0000000000000 |
                    (ulonglong)-dVar7 & -(ulonglong)(-1.0 < dVar7));
    dVar13 = dVar7;
    if (1.0 <= dVar7) {
      dVar13 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar13));
    uVar19 = SUB84(dVar7,0);
    uVar20 = (uint)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar5)) {
      uVar8 = FUN_144afd35e(-dVar2,dVar3);
      uVar15 = (undefined4)uVar8;
      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
LAB_14690c985:
      uVar17 = 0;
      uVar18 = 0;
      goto LAB_14690c5e9;
    }
    uVar8 = FUN_144afd35e(dVar11,dVar1);
    uVar17 = (undefined4)uVar8;
    uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
    break;
  case 1:
    dVar7 = dVar6;
    if (1.0 <= dVar6) {
      dVar7 = 1.0;
    }
    if (dVar7 <= -1.0) {
      dVar7 = -1.0;
    }
    dVar11 = dVar7;
    if (1.0 <= dVar7) {
      dVar11 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar11));
    uVar15 = SUB84(dVar7,0);
    uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar6)) {
      uVar8 = FUN_144afd35e(dVar13,dVar1);
      uVar19 = (undefined4)uVar8;
      uVar20 = (uint)((ulonglong)uVar8 >> 0x20);
      goto LAB_14690c985;
    }
    uVar8 = FUN_144afd35e(-dVar10,dVar3);
    uVar17 = (undefined4)uVar8;
    uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
    dVar13 = -dVar5;
    goto LAB_14690c830;
  case 2:
    dVar7 = dVar11;
    if (1.0 <= dVar11) {
      dVar7 = 1.0;
    }
    if (dVar7 <= -1.0) {
      dVar7 = -1.0;
    }
    dVar13 = dVar7;
    if (1.0 <= dVar7) {
      dVar13 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar13));
    uVar17 = SUB84(dVar7,0);
    uVar18 = (uint)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar11)) {
      uVar8 = FUN_144afd35e(dVar6,dVar9);
      uVar15 = (undefined4)uVar8;
      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
LAB_14690c949:
      uVar19 = 0;
      uVar20 = 0;
      goto LAB_14690c5e9;
    }
    uVar8 = FUN_144afd35e(-dVar5,dVar1);
    uVar19 = (undefined4)uVar8;
    uVar20 = (uint)((ulonglong)uVar8 >> 0x20);
    dVar6 = -dVar2;
    dVar9 = dVar3;
    break;
  case 3:
    dVar7 = dVar2;
    if (1.0 <= dVar2) {
      dVar7 = 1.0;
    }
    dVar7 = (double)(~-(ulonglong)(-1.0 < dVar7) & 0x3ff0000000000000 |
                    (ulonglong)-dVar7 & -(ulonglong)(-1.0 < dVar7));
    dVar14 = dVar7;
    if (1.0 <= dVar7) {
      dVar14 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar14));
    uVar15 = SUB84(dVar7,0);
    uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar2)) {
      uVar8 = FUN_144afd35e(-dVar10,dVar1);
      uVar17 = (undefined4)uVar8;
      uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
      goto LAB_14690c949;
    }
    uVar8 = FUN_144afd35e(dVar11,dVar3);
    uVar17 = (undefined4)uVar8;
    uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
LAB_14690c830:
    uVar8 = FUN_144afd35e(dVar13,dVar9);
    uVar19 = (undefined4)uVar8;
    uVar20 = (uint)((ulonglong)uVar8 >> 0x20);
    goto LAB_14690c5e9;
  case 4:
    dVar7 = dVar10;
    if (1.0 <= dVar10) {
      dVar7 = 1.0;
    }
    dVar7 = (double)(~-(ulonglong)(-1.0 < dVar7) & 0x3ff0000000000000 |
                    (ulonglong)-dVar7 & -(ulonglong)(-1.0 < dVar7));
    dVar11 = dVar7;
    if (1.0 <= dVar7) {
      dVar11 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar11));
    uVar17 = SUB84(dVar7,0);
    uVar18 = (uint)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar10)) {
      uVar8 = FUN_144afd35e(-dVar5,dVar9);
      uVar19 = (undefined4)uVar8;
      uVar20 = (uint)((ulonglong)uVar8 >> 0x20);
LAB_14690c9a2:
      uVar15 = 0;
      uVar16 = 0;
      goto LAB_14690c5e9;
    }
    uVar8 = FUN_144afd35e(dVar13,dVar1);
    uVar19 = (undefined4)uVar8;
    uVar20 = (uint)((ulonglong)uVar8 >> 0x20);
    dVar9 = dVar3;
    break;
  case 5:
    dVar7 = dVar13;
    if (1.0 <= dVar13) {
      dVar7 = 1.0;
    }
    if (dVar7 <= -1.0) {
      dVar7 = -1.0;
    }
    dVar14 = dVar7;
    if (1.0 <= dVar7) {
      dVar14 = 1.0;
    }
    dVar7 = asin((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar14));
    uVar19 = SUB84(dVar7,0);
    uVar20 = (uint)((ulonglong)dVar7 >> 0x20);
    if (0.9999 <= ABS(dVar13)) {
      uVar8 = FUN_144afd35e(dVar11,dVar3);
      uVar17 = (undefined4)uVar8;
      uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
      goto LAB_14690c9a2;
    }
    uVar8 = FUN_144afd35e(-dVar10,dVar1);
    uVar17 = (undefined4)uVar8;
    uVar18 = (uint)((ulonglong)uVar8 >> 0x20);
    dVar6 = -dVar2;
  }
  uVar8 = FUN_144afd35e(dVar6,dVar9);
  uVar15 = (undefined4)uVar8;
  uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
LAB_14690c5e9:
  if (param_4 != '\0') {
    uVar18 = uVar18 ^ 0x80000000;
    uVar20 = uVar20 ^ 0x80000000;
  }
  *param_1 = (double)CONCAT44(uVar18,uVar17) * 180.0 * 0.3183098861837907;
  param_1[1] = (double)CONCAT44(uVar20,uVar19) * 180.0 * 0.3183098861837907;
  param_1[2] = (double)CONCAT44(uVar16,uVar15) * 180.0 * 0.3183098861837907;
  return param_1;
}



// FUNCTION 14690c9ab FUN_14690c9ab body=138 status=ok
// SIG undefined FUN_14690c9ab(void)

undefined4 *
FUN_14690c9ab(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_3 == (char)param_4) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_5);
  FUN_14690c017(local_48,param_2,param_3,uVar4 & 0xffffffff);
  FUN_14690c377(param_1,local_48,param_4,uVar4 & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14690ca3a FUN_14690ca3a body=494 status=ok
// SIG undefined FUN_14690ca3a(void)

uint FUN_14690ca3a(longlong *param_1,double *param_2,float param_3,int param_4,char param_5,
                  undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  uint local_9c;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  double *local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[1];
  local_98 = (longlong)(int)lVar3;
  local_90 = local_98 - 1;
  local_68 = param_2[2];
  local_78 = *param_2;
  dStack_70 = param_2[1];
  lVar2 = *param_1;
  local_88 = local_90 * 0xe0;
  dVar12 = *(double *)(lVar2 + 0x20 + local_88) - local_78;
  dVar13 = *(double *)(lVar2 + 0x28 + local_88) - dStack_70;
  dVar11 = *(double *)(lVar2 + 0x30 + local_88) - local_68;
  dVar12 = dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12;
  uVar8 = 0;
  if (param_4 < 1) {
    param_4 = 0;
  }
  bVar7 = 0;
  iVar10 = 0;
  local_a0 = param_4;
  local_80 = param_2;
  do {
    if ((SQRT(dVar12) <= (double)param_3) || (iVar10 == local_a0)) break;
    local_9c = uVar8;
    if (param_5 == '\0') {
      if (2 < (int)local_98) {
        iVar5 = 1;
        do {
          local_a8 = param_7;
          bVar4 = FUN_142840fec(param_1,iVar5,&local_78,uVar6 & 0xffffffff);
          bVar7 = bVar7 | bVar4;
          iVar1 = iVar5 - (int)lVar3;
          iVar5 = iVar5 + 1;
        } while (iVar1 != -2);
      }
    }
    else if (2 < (int)local_98) {
      uVar9 = local_90 & 0xffffffff;
      do {
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
        local_a8 = param_7;
        bVar4 = FUN_142840fec(param_1,uVar9,&local_78,uVar6 & 0xffffffff);
        bVar7 = bVar7 | bVar4;
      } while (1 < uVar8);
    }
    iVar10 = iVar10 + 1;
    lVar2 = *param_1;
    dVar12 = *local_80 - *(double *)(lVar2 + 0x20 + local_88);
    dVar13 = local_80[1] - *(double *)(lVar2 + 0x28 + local_88);
    dVar11 = local_80[2] - *(double *)(lVar2 + 0x30 + local_88);
    dVar12 = dVar11 * dVar11 + dVar13 * dVar13 + dVar12 * dVar12;
    uVar8 = CONCAT31((int3)(local_9c >> 8),(byte)local_9c | bVar7);
  } while ((bVar7 & 1) != 0);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 14690cc55 FUN_14690cc55 body=55 status=ok
// SIG undefined FUN_14690cc55(void)

void FUN_14690cc55(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964aa0 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964aa0 = FUN_14171c317(FUN_146277717,uVar1,L"ETransformConstraintType");
  }
  return;
}



// FUNCTION 14690cc98 FUN_14690cc98 body=4009 status=ok
// SIG undefined FUN_14690cc98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14690cc98(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *param_3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2d8);
  }
  plVar11 = *(longlong **)(param_1 + 8);
  if (plVar11 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar11 + 0x28))();
    auVar52 = _DAT_149934d80;
    if ((char)uVar8 == '\0') {
      if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
        if (cVar7 != '\0') {
          dVar33 = *(double *)(param_1 + 0x40);
          dVar26 = *(double *)(param_1 + 0x48);
          dVar15 = *(double *)(param_1 + 0x50);
          dVar40 = *param_4;
          dVar16 = param_4[1];
          dVar24 = param_4[2];
          dVar34 = param_4[3];
          dVar38 = param_4[3];
          dVar31 = dVar33 * dVar24 - dVar40 * dVar15;
          dVar29 = dVar26 * dVar40 - dVar33 * dVar16;
          dVar23 = dVar15 * dVar16 - dVar26 * dVar24;
          dVar23 = dVar23 + dVar23;
          dVar31 = dVar31 + dVar31;
          dVar29 = dVar29 + dVar29;
          dVar46 = param_2[6];
          dVar1 = param_2[5];
          param_3[4] = (dVar29 * dVar16 - dVar31 * dVar24) + dVar34 * dVar23 + dVar33 + param_2[4];
          param_3[5] = (dVar24 * dVar23 - dVar40 * dVar29) + dVar38 * dVar31 + dVar26 + dVar1;
          param_3[6] = dVar29 * dVar34 + dVar15 + (dVar31 * dVar40 - dVar23 * dVar16) + dVar46;
          param_3[7] = 0.0;
        }
        if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
          cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          if (cVar7 != '\0') {
            dVar15 = *param_4;
            dVar40 = param_4[1];
            dVar16 = param_4[2];
            dVar24 = param_4[3];
            dVar38 = param_2[3];
            dVar34 = param_2[3];
            dVar46 = param_2[1];
            dVar1 = param_2[1];
            dVar33 = param_2[2];
            dVar26 = param_2[2];
            dVar29 = dVar40 * dVar33 * -1.0 +
                     dVar16 * dVar46 + *param_2 * dVar24 * 1.0 + dVar38 * dVar15;
            dVar23 = dVar15 * dVar26 * 1.0 +
                     dVar24 * dVar1 + *param_2 * dVar16 * -1.0 + dVar34 * dVar40;
            dVar33 = dVar24 * dVar33 * 1.0 +
                     ((*param_2 * dVar40 * 1.0 + dVar38 * dVar16) - dVar46 * dVar15);
            dVar15 = dVar16 * dVar26 * -1.0 +
                     ((*param_2 * dVar15 * -1.0 + dVar34 * dVar24) - dVar1 * dVar40);
            dVar34 = *(double *)(param_1 + 0x20);
            dVar38 = *(double *)(param_1 + 0x28);
            dVar46 = *(double *)(param_1 + 0x30);
            dVar1 = *(double *)(param_1 + 0x38);
            dVar26 = dVar38 * dVar33 * -1.0 +
                     dVar46 * dVar23 + dVar1 * dVar29 * 1.0 + dVar34 * dVar15;
            dVar40 = dVar34 * dVar33 * 1.0 +
                     dVar1 * dVar23 + dVar46 * dVar29 * -1.0 + dVar38 * dVar15;
            dVar16 = dVar1 * dVar33 * 1.0 +
                     ((dVar29 * dVar38 * 1.0 + dVar15 * dVar46) - dVar23 * dVar34);
            dVar46 = dVar46 * dVar33 * -1.0 +
                     ((dVar29 * dVar34 * -1.0 + dVar15 * dVar1) - dVar23 * dVar38);
            dVar34 = dVar16 * dVar16 + dVar26 * dVar26;
            dVar38 = dVar46 * dVar46 + dVar40 * dVar40;
            auVar17._0_8_ = dVar34 + dVar38;
            auVar17._8_8_ = dVar34 + dVar38;
            auVar52._8_8_ = -(ulonglong)(1e-08 <= auVar17._8_8_);
            auVar52._0_8_ = -(ulonglong)(1e-08 <= auVar17._0_8_);
            auVar36 = sqrtpd(auVar17,auVar17);
            auVar36 = divpd(_DAT_149934d80,auVar36);
            auVar27._0_8_ = auVar36._0_8_ * dVar16;
            auVar27._8_8_ = auVar36._8_8_ * dVar46;
            auVar52 = blendvpd(_DAT_149935300,auVar27,auVar52);
            *param_3 = (double)((ulonglong)(dVar26 * auVar36._0_8_) &
                               -(ulonglong)(1e-08 <= auVar17._0_8_));
            param_3[1] = (double)((ulonglong)(dVar40 * auVar36._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar17._8_8_));
            *(undefined1 (*) [16])(param_3 + 2) = auVar52;
          }
          if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
            cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
            if (cVar7 != '\0') {
              dVar1 = param_2[9];
              dVar33 = param_4[9];
              dVar34 = param_2[10];
              dVar38 = param_4[10];
              dVar46 = *(double *)(param_1 + 0x70);
              dVar26 = *(double *)(param_1 + 0x68);
              param_3[8] = param_2[8] * param_4[8] * *(double *)(param_1 + 0x60);
              param_3[9] = dVar1 * dVar33 * dVar26;
              param_3[10] = dVar34 * dVar38 * dVar46;
              param_3[0xb] = 0.0;
            }
          }
        }
      }
    }
    else {
      auVar17 = *(undefined1 (*) [16])(param_4 + 8);
      dVar34 = auVar17._0_8_;
      dVar33 = auVar17._8_8_;
      auVar36 = *(undefined1 (*) [16])(param_4 + 10);
      dVar38 = auVar36._0_8_;
      auVar27 = *(undefined1 (*) [16])(param_1 + 0x60);
      dVar46 = auVar27._0_8_;
      dVar26 = auVar27._8_8_;
      auVar43 = *(undefined1 (*) [16])(param_1 + 0x70);
      dVar1 = auVar43._0_8_;
      auVar17 = minpd(auVar27,auVar17);
      auVar27 = minpd(auVar43,auVar36);
      auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
      iVar9 = movmskpd(uVar8,auVar18);
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      uVar10 = movmskpd((int)plVar11,auVar28);
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar31 = *(double *)(param_1 + 0x20);
        dVar32 = *(double *)(param_1 + 0x28);
        dVar37 = *(double *)(param_1 + 0x30);
        dVar48 = *(double *)(param_1 + 0x38);
        dVar44 = *param_4;
        dVar49 = param_4[1];
        dVar2 = param_4[2];
        dVar3 = param_4[3];
        dVar40 = param_4[3];
        dVar15 = param_4[3];
        dVar24 = param_4[1];
        dVar16 = param_4[1];
        dVar29 = param_4[2];
        dVar23 = param_4[2];
        dVar25 = dVar32 * dVar29 * -1.0 +
                 dVar37 * dVar24 + dVar48 * *param_4 * 1.0 + dVar31 * dVar40;
        dVar30 = dVar31 * dVar23 * 1.0 +
                 dVar48 * dVar16 + dVar37 * *param_4 * -1.0 + dVar32 * dVar15;
        auVar47._0_8_ =
             dVar48 * dVar29 * 1.0 + ((*param_4 * dVar32 * 1.0 + dVar37 * dVar40) - dVar31 * dVar24)
        ;
        auVar47._8_8_ =
             dVar37 * dVar23 * -1.0 +
             ((*param_4 * dVar31 * -1.0 + dVar48 * dVar15) - dVar32 * dVar16);
        dVar16 = *(double *)(param_1 + 0x40) * dVar34;
        dVar24 = *(double *)(param_1 + 0x48) * dVar33;
        dVar29 = *(double *)(param_1 + 0x50) * dVar38;
        dVar23 = *(double *)(param_1 + 0x58) * auVar36._8_8_;
        dVar37 = dVar24 * dVar44 - dVar49 * dVar16;
        dVar48 = dVar29 * dVar49 - dVar2 * dVar24;
        dVar31 = dVar16 * dVar2 - dVar44 * dVar29;
        dVar32 = dVar23 * dVar3 - dVar3 * dVar23;
        dVar48 = dVar48 + dVar48;
        dVar31 = dVar31 + dVar31;
        dVar37 = dVar37 + dVar37;
        dVar32 = dVar32 + dVar32;
        dVar16 = (dVar37 * dVar49 - dVar2 * dVar31) + dVar40 * dVar48 + dVar16 + param_4[4];
        dVar24 = (dVar48 * dVar2 - dVar37 * dVar44) + dVar15 * dVar31 + dVar24 + param_4[5];
        dVar40 = (dVar31 * dVar44 - dVar49 * dVar48) + dVar40 * dVar37 + dVar29 + param_4[6];
        dVar15 = (dVar32 * dVar3 - dVar32 * dVar3) + dVar15 * dVar32 + dVar23 + param_4[7];
        uVar8 = 0;
      }
      else {
        dVar16 = *param_4;
        dVar24 = param_4[1];
        dVar29 = param_4[2];
        dVar23 = dVar24 + dVar24;
        dVar31 = dVar29 + dVar29;
        dVar40 = dVar16 * (dVar16 + dVar16);
        local_188 = (1.0 - (dVar40 + dVar24 * dVar23)) * dVar38;
        dVar15 = param_4[3];
        dVar32 = dVar31 * dVar15;
        dVar37 = (dVar16 + dVar16) * param_4[3];
        dVar15 = dVar23 * dVar15;
        local_198 = (dVar15 + *param_4 * dVar31) * dVar38;
        local_1d8 = ((double)DAT_149934d80 - (dVar29 * dVar31 + dVar24 * dVar23)) * dVar34;
        dStack_1d0 = (dVar23 * dVar16 + dVar32) * dVar34;
        local_1a8 = (dVar31 * dVar24 + dVar37) * dVar33;
        dStack_190 = (dVar31 * dVar24 - dVar37) * dVar38;
        local_1c8 = (*param_4 * dVar31 - dVar15) * dVar34;
        uStack_1c0 = 0;
        local_1b8._8_8_ = (DAT_149934d80._8_8_ - (dVar29 * dVar31 + dVar40)) * dVar33;
        local_1b8._0_8_ = (dVar23 * dVar16 - dVar32) * dVar33;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = param_4[4];
        dStack_170 = param_4[5];
        local_168 = param_4[6];
        uStack_160 = 0x3ff0000000000000;
        dVar40 = *(double *)(param_1 + 0x20);
        dVar16 = *(double *)(param_1 + 0x28);
        dVar24 = *(double *)(param_1 + 0x30);
        dVar29 = dVar16 + dVar16;
        dVar23 = dVar24 + dVar24;
        dVar37 = dVar40 * (dVar40 + dVar40);
        local_208 = (1.0 - (dVar37 + dVar16 * dVar29)) * dVar1;
        dVar48 = *(double *)(param_1 + 0x20) * dVar23;
        dVar15 = *(double *)(param_1 + 0x38);
        dVar31 = dVar23 * dVar15;
        dVar32 = (dVar40 + dVar40) * *(double *)(param_1 + 0x38);
        dVar15 = dVar29 * dVar15;
        local_238 = (dVar29 * dVar40 - dVar31) * dVar26;
        local_258 = ((double)DAT_149934d80 - (dVar24 * dVar23 + dVar16 * dVar29)) * dVar46;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar24 * dVar23 + dVar37)) * dVar26;
        dStack_250 = (dVar29 * dVar40 + dVar31) * dVar46;
        local_228 = (dVar23 * dVar16 + dVar32) * dVar26;
        local_248 = (dVar48 - dVar15) * dVar46;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_8_ = (dVar23 * dVar16 - dVar32) * dVar1;
        local_218._0_8_ = (dVar15 + dVar48) * dVar1;
        uStack_200 = 0;
        local_1f8 = *(double *)(param_1 + 0x40);
        dStack_1f0 = *(double *)(param_1 + 0x48);
        local_1e8 = *(double *)(param_1 + 0x50);
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar19._8_8_ = -(ulonglong)(0.0 <= dVar33 * dVar26);
        auVar19._0_8_ = -(ulonglong)(0.0 <= dVar34 * dVar46);
        auVar17 = blendvpd(_DAT_149936790,auVar52,auVar19);
        uVar14 = -(ulonglong)(0.0 <= dVar38 * dVar1);
        dVar15 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar40 = auVar17._0_8_;
        local_148 = local_148 * dVar40;
        local_150 = local_150 * dVar40;
        local_158 = local_158 * dVar40;
        dVar40 = auVar17._8_8_;
        local_128 = local_128 * dVar40;
        local_130 = local_130 * dVar40;
        local_138 = dVar40 * local_138;
        local_108 = local_108 * dVar15;
        local_110 = local_110 * dVar15;
        local_118 = dVar15 * local_118;
        pdVar12 = &local_278;
        iVar9 = FUN_14481fd10(pdVar12,&local_158);
        uVar8 = SUB84(pdVar12,0);
        dVar15 = local_268 * local_268 + local_278 * local_278;
        dVar40 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar39._0_8_ = dVar15 + dVar40;
        auVar39._8_8_ = dVar15 + dVar40;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
        auVar17 = sqrtpd(auVar39,auVar39);
        auVar52 = divpd(auVar52,auVar17);
        auVar53._0_8_ = auVar52._0_8_ * local_268;
        auVar53._8_8_ = auVar52._8_8_ * dStack_260;
        dVar25 = (double)((ulonglong)(local_278 * auVar52._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
        dVar30 = (double)((ulonglong)(dStack_270 * auVar52._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
        auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar20);
        dVar15 = 0.0;
        dVar16 = local_f8;
        dVar24 = dStack_f0;
        dVar40 = local_e8;
      }
      auVar27 = _DAT_149934d80;
      dVar33 = dVar33 * dVar26;
      dVar34 = dVar34 * dVar46;
      dVar23 = auVar36._8_8_ * auVar43._8_8_;
      dVar38 = dVar38 * dVar1;
      auVar52 = *(undefined1 (*) [16])(param_2 + 8);
      dVar46 = auVar52._0_8_;
      dVar26 = auVar52._8_8_;
      auVar17 = *(undefined1 (*) [16])(param_2 + 10);
      dVar1 = auVar17._0_8_;
      dVar29 = auVar17._8_8_;
      local_2b8._8_4_ = SUB84(dVar33,0);
      local_2b8._0_8_ = dVar34;
      local_2b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar36._8_8_ = dVar33;
      auVar36._0_8_ = dVar34;
      auVar52 = minpd(auVar36,auVar52);
      auVar50._8_8_ = dVar23;
      auVar50._0_8_ = dVar38;
      auVar17 = minpd(auVar50,auVar17);
      auVar43._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
      auVar43._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
      iVar9 = movmskpd(iVar9,auVar43);
      auVar51._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
      auVar51._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
      uVar10 = movmskpd(uVar8,auVar51);
      dVar33 = auVar47._0_8_;
      dVar31 = auVar47._8_8_;
      uVar6 = local_2b8._8_8_;
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar3 = *param_2;
        dVar4 = param_2[1];
        dVar32 = param_2[3];
        dVar37 = param_2[3];
        dVar48 = param_2[1];
        dVar44 = param_2[1];
        dVar5 = param_2[2];
        dVar41 = param_2[3];
        dVar2 = param_2[2];
        dVar49 = param_2[2];
        dVar42 = dVar30 * dVar2 * -1.0 + dVar33 * dVar48 + dVar31 * *param_2 * 1.0 + dVar25 * dVar32
        ;
        dVar45 = dVar25 * dVar49 * 1.0 +
                 dVar31 * dVar44 + dVar33 * *param_2 * -1.0 + dVar30 * dVar37;
        auVar54._0_8_ =
             dVar31 * dVar2 * 1.0 + ((*param_2 * dVar30 * 1.0 + dVar33 * dVar32) - dVar25 * dVar48);
        auVar54._8_8_ =
             dVar33 * dVar49 * -1.0 +
             ((*param_2 * dVar25 * -1.0 + dVar31 * dVar37) - dVar30 * dVar44);
        dVar16 = dVar16 * dVar46;
        dVar24 = dVar24 * dVar26;
        dVar40 = dVar40 * dVar1;
        dVar15 = dVar15 * dVar29;
        dVar33 = dVar24 * dVar3 - dVar16 * dVar4;
        dVar48 = dVar40 * dVar4 - dVar24 * dVar5;
        dVar44 = dVar16 * dVar5 - dVar40 * dVar3;
        dVar31 = dVar15 * dVar41 - dVar15 * dVar41;
        dVar48 = dVar48 + dVar48;
        dVar44 = dVar44 + dVar44;
        dVar33 = dVar33 + dVar33;
        dVar31 = dVar31 + dVar31;
        local_f8 = (dVar33 * dVar4 - dVar5 * dVar44) + dVar32 * dVar48 + dVar16 + param_2[4];
        dStack_f0 = (dVar48 * dVar5 - dVar33 * dVar3) + dVar37 * dVar44 + dVar24 + param_2[5];
        local_e8 = (dVar44 * dVar3 - dVar4 * dVar48) + dVar32 * dVar33 + dVar40 + param_2[6];
        dVar33 = (dVar31 * dVar41 - dVar31 * dVar41) + dVar37 * dVar31 + dVar15 + param_2[7];
      }
      else {
        dVar3 = *param_2;
        dVar4 = param_2[1];
        dVar5 = param_2[2];
        dVar48 = dVar4 + dVar4;
        dVar44 = dVar5 + dVar5;
        dVar37 = dVar3 * (dVar3 + dVar3);
        dVar32 = param_2[3];
        dVar49 = dVar44 * dVar32;
        dVar2 = (dVar3 + dVar3) * param_2[3];
        dVar32 = dVar48 * dVar32;
        dStack_2a0 = dVar23 * dVar29;
        local_188 = (1.0 - (dVar37 + dVar4 * dVar48)) * dVar1;
        local_198 = (dVar32 + *param_2 * dVar44) * dVar1;
        dStack_190 = (dVar44 * dVar4 - dVar2) * dVar1;
        dVar41 = (double)local_2b8._8_8_ * dVar26;
        local_1d8 = ((double)DAT_149934d80 - (dVar5 * dVar44 + dVar4 * dVar48)) * dVar46;
        dVar37 = (DAT_149934d80._8_8_ - (dVar5 * dVar44 + dVar37)) * dVar26;
        dStack_1d0 = (dVar48 * dVar3 + dVar49) * dVar46;
        local_1a8 = (dVar44 * dVar4 + dVar2) * dVar26;
        local_1c8 = (*param_2 * dVar44 - dVar32) * dVar46;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar37,0);
        local_1b8._0_8_ = (dVar48 * dVar3 - dVar49) * dVar26;
        local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = param_2[4];
        dStack_170 = param_2[5];
        local_168 = param_2[6];
        uStack_160 = 0x3ff0000000000000;
        dVar44 = dVar30 + dVar30;
        dVar32 = dVar33 + dVar33;
        dVar49 = dVar25 * (dVar25 + dVar25);
        local_208 = (1.0 - (dVar49 + dVar30 * dVar44)) * dVar38;
        dVar37 = (dVar25 + dVar25) * dVar31;
        local_238 = (dVar44 * dVar25 - dVar32 * dVar31) * (double)local_2b8._8_8_;
        dVar48 = (dVar32 * dVar30 - dVar37) * dVar38;
        local_258 = ((double)DAT_149934d80 - (dVar33 * dVar32 + dVar30 * dVar44)) * dVar34;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar33 * dVar32 + dVar49)) * (double)local_2b8._8_8_;
        dStack_250 = (dVar44 * dVar25 + dVar32 * dVar31) * dVar34;
        local_228 = (dVar32 * dVar30 + dVar37) * (double)local_2b8._8_8_;
        local_248 = (dVar25 * dVar32 - dVar44 * dVar31) * dVar34;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar48,0);
        local_218._0_8_ = (dVar44 * dVar31 + dVar25 * dVar32) * dVar38;
        local_218._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        uStack_200 = 0;
        uStack_1e0 = 0x3ff0000000000000;
        local_2a8 = dVar38 * dVar1;
        local_298 = dVar34 * dVar46;
        dStack_290 = dVar41;
        local_288 = dVar40;
        dStack_280 = dVar15;
        local_1f8 = dVar16;
        dStack_1f0 = dVar24;
        local_1e8 = dVar40;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar41);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar34 * dVar46);
        auVar52 = blendvpd(_DAT_149936790,auVar27,auVar21);
        uVar14 = -(ulonglong)(0.0 <= dVar38 * dVar1);
        dVar33 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar15 = auVar52._0_8_;
        local_148 = local_148 * dVar15;
        local_150 = local_150 * dVar15;
        local_158 = local_158 * dVar15;
        dVar15 = auVar52._8_8_;
        local_128 = local_128 * dVar15;
        local_130 = local_130 * dVar15;
        local_138 = dVar15 * local_138;
        local_108 = local_108 * dVar33;
        local_110 = local_110 * dVar33;
        local_118 = dVar33 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar33 = local_268 * local_268 + local_278 * local_278;
        dVar15 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar35._0_8_ = dVar33 + dVar15;
        auVar35._8_8_ = dVar33 + dVar15;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar52 = sqrtpd(auVar35,auVar35);
        auVar52 = divpd(auVar27,auVar52);
        auVar55._0_8_ = auVar52._0_8_ * local_268;
        auVar55._8_8_ = auVar52._8_8_ * dStack_260;
        dVar42 = (double)((ulonglong)(local_278 * auVar52._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dVar45 = (double)((ulonglong)(dStack_270 * auVar52._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar22);
        dVar33 = 0.0;
      }
      *param_3 = dVar42;
      param_3[1] = dVar45;
      *(undefined1 (*) [16])(param_3 + 2) = auVar54;
      param_3[4] = local_f8;
      param_3[5] = dStack_f0;
      param_3[6] = local_e8;
      param_3[7] = dVar33;
      param_3[8] = dVar34 * dVar46;
      param_3[9] = (double)uVar6 * dVar26;
      param_3[10] = dVar38 * dVar1;
      param_3[0xb] = dVar23 * dVar29;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14690dc42 FUN_14690dc42 body=1258 status=ok
// SIG undefined FUN_14690dc42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14690dc42(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_178 [32];
  undefined8 local_158 [12];
  undefined1 local_f8 [104];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_1 + 0x20);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((*(char *)(param_1 + 0x14) == '\x01') && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (cVar1 == '\0') {
      if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
        if (cVar1 != '\0') {
          dVar5 = param_2[6] - param_3[6];
          dVar13 = param_2[4] - param_3[4];
          dVar15 = param_2[5] - param_3[5];
          dVar14 = *param_4;
          dVar16 = -dVar14;
          dVar17 = -param_4[1];
          dVar10 = param_4[2] * -1.0;
          dVar12 = param_4[3] * 1.0;
          dVar19 = dVar13 * dVar10 - dVar16 * dVar5;
          dVar18 = dVar15 * dVar16 - dVar13 * dVar17;
          dVar9 = dVar5 * dVar17 - dVar15 * dVar10;
          dVar9 = dVar9 + dVar9;
          dVar19 = dVar19 + dVar19;
          dVar18 = dVar18 + dVar18;
          *(double *)(param_1 + 0x40) =
               (dVar18 * dVar17 - dVar19 * dVar10) + dVar12 * dVar9 + dVar13;
          *(double *)(param_1 + 0x48) = dVar18 * dVar14 + dVar10 * dVar9 + dVar12 * dVar19 + dVar15;
          *(double *)(param_1 + 0x50) = dVar12 * dVar18 + dVar5 + (dVar19 * dVar16 - dVar9 * dVar17)
          ;
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          if (cVar1 != '\0') {
            dVar15 = param_3[2] * -1.0;
            dVar16 = param_3[3] * 1.0;
            dVar19 = *param_2;
            dVar14 = param_2[1];
            dVar5 = param_2[2];
            dVar10 = param_2[3];
            dVar9 = param_3[1];
            dVar18 = param_3[1];
            dVar12 = dVar14 * dVar15 * -1.0 +
                     ((dVar19 * dVar16 - *param_3 * dVar10 * 1.0) - dVar5 * dVar9);
            dVar13 = dVar19 * dVar15 * 1.0 +
                     ((dVar14 * dVar16 - *param_3 * dVar5 * -1.0) - dVar10 * dVar18);
            dVar17 = dVar10 * dVar15 * 1.0 +
                     dVar9 * dVar19 + (dVar16 * dVar5 - *param_3 * dVar14 * 1.0);
            dVar19 = dVar5 * dVar15 * -1.0 +
                     dVar18 * dVar14 + (dVar16 * dVar10 - *param_3 * dVar19 * -1.0);
            dVar14 = param_4[2] * -1.0;
            dVar10 = param_4[3] * 1.0;
            dVar9 = param_4[1];
            dVar18 = param_4[1];
            dVar5 = dVar13 * dVar14 * -1.0 +
                    ((dVar10 * dVar12 - *param_4 * dVar19 * 1.0) - dVar17 * dVar9);
            dVar15 = dVar12 * dVar14 * 1.0 +
                     ((dVar10 * dVar13 - *param_4 * dVar17 * -1.0) - dVar19 * dVar18);
            dVar16 = dVar19 * dVar14 * 1.0 +
                     dVar12 * dVar9 + (dVar10 * dVar17 - *param_4 * dVar13 * 1.0);
            dVar19 = dVar17 * dVar14 * -1.0 +
                     dVar13 * dVar18 + (dVar10 * dVar19 - *param_4 * dVar12 * -1.0);
            dVar18 = dVar16 * dVar16 + dVar5 * dVar5;
            dVar9 = dVar19 * dVar19 + dVar15 * dVar15;
            auVar6._0_8_ = dVar18 + dVar9;
            auVar6._8_8_ = dVar18 + dVar9;
            auVar8._8_8_ = -(ulonglong)(1e-08 <= auVar6._8_8_);
            auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar6._0_8_);
            auVar7 = sqrtpd(auVar6,auVar6);
            auVar7 = divpd(_DAT_149934d80,auVar7);
            auVar11._0_8_ = auVar7._0_8_ * dVar16;
            auVar11._8_8_ = auVar7._8_8_ * dVar19;
            auVar8 = blendvpd(_DAT_149935300,auVar11,auVar8);
            *(ulonglong *)(param_1 + 0x20) =
                 (ulonglong)(dVar5 * auVar7._0_8_) & -(ulonglong)(1e-08 <= auVar6._0_8_);
            *(ulonglong *)(param_1 + 0x28) =
                 (ulonglong)(dVar15 * auVar7._8_8_) & -(ulonglong)(1e-08 <= auVar6._8_8_);
            *(undefined1 (*) [16])(param_1 + 0x30) = auVar8;
          }
          if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
            if (cVar1 != '\0') {
              dVar19 = param_3[10];
              dVar18 = param_2[10];
              dVar14 = param_4[10];
              dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[9])) &
                              (ulonglong)(1.0 / param_4[9])) *
                      (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_3[9])) &
                              (ulonglong)(1.0 / param_3[9])) * param_2[9];
              auVar7._8_4_ = SUB84(dVar9,0);
              auVar7._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[8])) &
                                     (ulonglong)(1.0 / param_4[8])) *
                             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_3[8])) &
                                     (ulonglong)(1.0 / param_3[8])) * param_2[8];
              auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              *(undefined1 (*) [16])(param_1 + 0x60) = auVar7;
              *(double *)(param_1 + 0x70) =
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar14)) &
                           (ulonglong)(1.0 / dVar14)) *
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar19)) &
                           (ulonglong)(1.0 / dVar19)) * dVar18;
              *(undefined8 *)(param_1 + 0x78) = 0;
            }
          }
        }
      }
    }
    else {
      FUN_1449437a2(param_2,local_f8,param_3);
      FUN_1449437a2(local_f8,local_158,param_4);
      puVar3 = local_158;
      puVar4 = (undefined8 *)(param_1 + 0x20);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690e12e FUN_14690e12e body=469 status=ok
// SIG undefined FUN_14690e12e(void)

void FUN_14690e12e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1449437a2(param_2,&local_98,param_4);
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar1 != '\0') {
      local_b8 = local_78;
      uStack_b0 = uStack_70;
      local_a8 = local_68;
      if ((char)param_1[1] == '\0') {
        local_b8 = DAT_14c8464e0;
      }
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        uStack_b0 = DAT_14c8464e8;
      }
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        local_a8 = DAT_14c8464f0;
      }
      FUN_14690e378(param_6,&local_b8,param_5);
    }
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 != '\0') {
      local_b8 = CONCAT44(uStack_94,local_98);
      uStack_b0 = CONCAT44(uStack_8c,uStack_90);
      local_a8 = CONCAT44(uStack_84,local_88);
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      FUN_14690e3f2(param_1 + 1,&local_b8,&DAT_14c8463d0);
      FUN_14690e4a0(param_6,&local_b8,param_5);
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (cVar1 != '\0') {
      local_b8 = local_58;
      uStack_b0 = uStack_50;
      local_a8 = local_48;
      if ((char)param_1[1] == '\0') {
        local_b8 = DAT_14c8464e0;
      }
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        uStack_b0 = DAT_14c8464e8;
      }
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        local_a8 = DAT_14c8464f0;
      }
      FUN_14690e51a(param_6,&local_b8,param_5);
    }
  }
  else {
    FUN_14690e304(param_6,&local_98,param_5);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690e304 FUN_14690e304 body=115 status=ok
// SIG undefined FUN_14690e304(void)

void FUN_14690e304(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144a2c682(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x60 + *param_1);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (int)param_1[9];
  *(uint *)(param_1 + 9) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 8,iVar1);
  }
  *(undefined4 *)(param_1[8] + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 14690e378 FUN_14690e378 body=121 status=ok
// SIG undefined FUN_14690e378(void)

void FUN_14690e378(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 0x10,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  iVar2 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
    FUN_14475e4ac((longlong *)(param_1 + 0x50),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 4) = param_3;
  return;
}



// FUNCTION 14690e3f2 FUN_14690e3f2 body=172 status=ok
// SIG undefined FUN_14690e3f2(void)

void FUN_14690e3f2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448052ee(param_2,local_38);
  FUN_1448052ee(param_3,&local_58);
  FUN_144a7484c(local_38,&local_58);
  param_2[4] = local_48;
  param_2[5] = uStack_44;
  param_2[6] = uStack_40;
  param_2[7] = uStack_3c;
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690e4a0 FUN_14690e4a0 body=121 status=ok
// SIG undefined FUN_14690e4a0(void)

void FUN_14690e4a0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
    FUN_140e16be0(param_1 + 0x20,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = param_2[4];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  iVar2 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
    FUN_14475e4ac((longlong *)(param_1 + 0x60),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 4) = param_3;
  return;
}



// FUNCTION 14690e51a FUN_14690e51a body=121 status=ok
// SIG undefined FUN_14690e51a(void)

void FUN_14690e51a(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 0x30,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  iVar2 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
    FUN_14475e4ac((longlong *)(param_1 + 0x70),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 4) = param_3;
  return;
}



// FUNCTION 14690e594 FUN_14690e594 body=1285 status=ok
// SIG undefined FUN_14690e594(void)

void FUN_14690e594(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar5 = &local_f8;
  for (lVar4 = 0xc; dVar11 = (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0),
      dVar9 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8),
      dVar7 = (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0),
      dVar6 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8), lVar4 != 0; lVar4 = lVar4 + -1)
  {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      dVar7 = *(double *)(param_1 + 0x30);
      dVar9 = *(double *)(param_1 + 0x38);
      dVar11 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
      auVar2._8_4_ = (undefined4)uStack_f0;
      auVar2._0_8_ = dVar11;
      auVar2._12_4_ = uStack_f0._4_4_;
      dVar6 = auVar2._8_8_;
      dVar1 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
      dVar8 = dVar9 * dVar11 - dVar7 * dVar6;
      dVar10 = *(double *)(param_1 + 0x40) * dVar6 - dVar9 * dVar1;
      dVar13 = dVar7 * dVar1 - dVar11 * *(double *)(param_1 + 0x40);
      dVar10 = dVar10 + dVar10;
      dVar13 = dVar13 + dVar13;
      dVar8 = dVar8 + dVar8;
      local_108 = dVar8 * (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) +
                  *(double *)(param_1 + 0x40) + (dVar13 * dVar11 - dVar10 * dVar6);
      local_118 = (dVar8 * dVar6 - dVar13 * dVar1) +
                  (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) * dVar10 + dVar7;
      dStack_110 = (dVar1 * dVar10 - dVar11 * dVar8) +
                   (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) * dVar13 + dVar9;
    }
    else {
      local_108 = *(double *)(param_1 + 0x40);
      local_118 = *(double *)(param_1 + 0x30);
      dStack_110 = *(double *)(param_1 + 0x38);
    }
    local_1b0 = &DAT_14c8464e0;
    local_1a8 = 0;
    local_1b8 = 0;
    FUN_14690aafc(&local_178,&local_f8,param_1 + 0x58,&local_118);
    dVar6 = (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) * local_168 * -1.0 +
            (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8) * dStack_170 +
            (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) * local_178 * 1.0 +
            (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8) * dStack_160;
    dVar7 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8) * local_168 * 1.0 +
            (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) * dStack_170 +
            (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8) * local_178 * -1.0 +
            (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) * dStack_160;
    dVar9 = (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0) * local_168 * 1.0 +
            ((local_178 * (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) * 1.0 +
             dStack_160 * (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8)) -
            (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8) * dStack_170);
    dVar11 = (double)CONCAT44(local_e8._4_4_,(undefined4)local_e8) * local_168 * -1.0 +
             ((local_178 * (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8) * -1.0 +
              dStack_160 * (double)CONCAT44(uStack_e0._4_4_,(undefined4)uStack_e0)) -
             (double)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0) * dStack_170);
  }
  uStack_f0._4_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_f0._0_4_ = SUB84(dVar7,0);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    dVar8 = *(double *)(param_1 + 0x10);
    dVar10 = *(double *)(param_1 + 0x18);
    auVar3._8_4_ = (undefined4)uStack_f0;
    auVar3._0_8_ = dVar6;
    auVar3._12_4_ = uStack_f0._4_4_;
    dVar1 = auVar3._8_8_;
    dVar13 = dVar10 * dVar6 - dVar8 * dVar1;
    dVar12 = *(double *)(param_1 + 0x20) * dVar1 - dVar10 * dVar9;
    dVar14 = dVar8 * dVar9 - dVar6 * *(double *)(param_1 + 0x20);
    dVar12 = dVar12 + dVar12;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    local_168 = dVar13 * dVar11 + *(double *)(param_1 + 0x20) + (dVar14 * dVar6 - dVar12 * dVar1);
    local_178 = (dVar13 * dVar1 - dVar14 * dVar9) + dVar11 * dVar12 + dVar8;
    dStack_170 = (dVar9 * dVar12 - dVar6 * dVar13) + dVar11 * dVar14 + dVar10;
  }
  else {
    local_168 = *(double *)(param_1 + 0x20);
    local_178 = *(double *)(param_1 + 0x10);
    dStack_170 = *(double *)(param_1 + 0x18);
  }
  local_198 = *(double *)(param_2 + 0x20);
  dStack_190 = *(double *)(param_2 + 0x28);
  local_188 = *(double *)(param_2 + 0x30);
  local_1b0 = &DAT_14c8464e0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_f8 = dVar6;
  uStack_f0 = dVar7;
  local_e8 = dVar9;
  uStack_e0 = dVar11;
  FUN_14690aafc(&local_118,&local_f8,&local_198,&local_178);
  local_f8 = dVar7 * local_108 * -1.0 +
             dVar9 * dStack_110 + dVar11 * local_118 * 1.0 + dVar6 * local_100;
  uStack_f0 = dVar6 * local_108 * 1.0 +
              dVar11 * dStack_110 + dVar9 * local_118 * -1.0 + dVar7 * local_100;
  local_e8 = dVar11 * local_108 * 1.0 +
             ((local_118 * dVar7 * 1.0 + local_100 * dVar9) - dVar6 * dStack_110);
  uStack_e0 = dVar9 * local_108 * -1.0 +
              ((local_118 * dVar6 * -1.0 + local_100 * dVar11) - dVar7 * dStack_110);
  FUN_1449437a2(&local_f8,&local_178,param_4);
  local_198 = local_178;
  dStack_190 = dStack_170;
  local_188 = local_168;
  dStack_180 = dStack_160;
  FUN_14690e3f2(param_1 + 8,&local_198,&DAT_14c8463d0);
  FUN_14690e4a0(param_6,&local_198,param_5);
  if ((local_90 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690ea9a FUN_14690ea9a body=55 status=ok
// SIG undefined FUN_14690ea9a(void)

void FUN_14690ea9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964b18 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964b18 = FUN_14171c317(FUN_14171c8fe,uVar1,L"EEulerRotationOrder");
  }
  return;
}



// FUNCTION 14690ead1 FUN_14690ead1 body=1250 status=ok
// SIG undefined FUN_14690ead1(void)

int FUN_14690ead1(longlong *param_1,double *param_2,double param_3,double param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  pdVar10 = (double *)*param_1;
  dVar16 = *param_2 - *pdVar10;
  dVar18 = param_2[1] - pdVar10[1];
  dVar15 = param_2[2] - pdVar10[2];
  uVar1 = *(uint *)(param_1 + 1);
  if (dVar15 * dVar15 + dVar18 * dVar18 + dVar16 * dVar16 <= param_3 * param_3) {
    uVar7 = (longlong)(int)uVar1 - 1;
    lVar9 = uVar7 * 0x50;
    dVar16 = *param_2 - pdVar10[uVar7 * 10];
    dVar15 = param_2[1] - pdVar10[uVar7 * 10 + 1];
    dVar18 = param_2[2] - pdVar10[uVar7 * 10 + 2];
    iVar5 = 0;
    if (param_4 < SQRT(dVar18 * dVar18 + dVar15 * dVar15 + dVar16 * dVar16)) {
      pdVar10 = pdVar10 + uVar7 * 10;
      pdVar10[2] = param_2[2];
      dVar15 = param_2[1];
      *pdVar10 = *param_2;
      pdVar10[1] = dVar15;
      uVar8 = uVar1 - 2;
      if (param_5 < 1) {
        param_5 = 0;
      }
      lVar6 = (longlong)(int)uVar8 * 0x50;
      do {
        if (iVar5 == param_5) {
          lVar11 = *param_1;
          break;
        }
        lVar11 = (ulonglong)uVar8 * 0x50;
        lVar12 = (ulonglong)uVar8 + 1;
        if (2 < (int)uVar1) {
          do {
            lVar2 = *param_1;
            dVar15 = *(double *)(lVar2 + 0x60 + lVar11);
            dVar14 = *(double *)(lVar2 + 0x10 + lVar11) - dVar15;
            dVar16 = *(double *)(lVar2 + 0x58 + lVar11);
            dVar17 = *(double *)(lVar2 + 8 + lVar11) - dVar16;
            dVar18 = *(double *)(lVar2 + 0x50 + lVar11);
            dVar4 = *(double *)(lVar2 + lVar11) - dVar18;
            dVar13 = 1.0 / SQRT(dVar14 * dVar14 + dVar4 * dVar4 + dVar17 * dVar17);
            dVar3 = *(double *)(lVar2 + 0x68 + lVar11);
            *(double *)(lVar2 + lVar11) = dVar13 * dVar4 * dVar3 + dVar18;
            *(double *)(lVar2 + 8 + lVar11) = dVar17 * dVar13 * dVar3 + dVar16;
            *(double *)(lVar2 + 0x10 + lVar11) = dVar14 * dVar13 * dVar3 + dVar15;
            lVar12 = lVar12 + -1;
            lVar11 = lVar11 + -0x50;
          } while (1 < lVar12);
          lVar11 = 0x50;
          do {
            lVar12 = *param_1;
            dVar15 = *(double *)(lVar12 + -0x40 + lVar11);
            dVar14 = *(double *)(lVar12 + 0x10 + lVar11) - dVar15;
            dVar16 = *(double *)(lVar12 + -0x50 + lVar11);
            dVar18 = *(double *)(lVar12 + -0x48 + lVar11);
            dVar17 = *(double *)(lVar12 + 8 + lVar11) - dVar18;
            dVar4 = *(double *)(lVar12 + lVar11) - dVar16;
            dVar13 = 1.0 / SQRT(dVar14 * dVar14 + dVar4 * dVar4 + dVar17 * dVar17);
            dVar3 = *(double *)(lVar12 + 0x18 + lVar11);
            *(double *)(lVar12 + lVar11) = dVar13 * dVar4 * dVar3 + dVar16;
            *(double *)(lVar12 + 8 + lVar11) = dVar17 * dVar13 * dVar3 + dVar18;
            *(double *)(lVar12 + 0x10 + lVar11) = dVar14 * dVar13 * dVar3 + dVar15;
            lVar11 = lVar11 + 0x50;
          } while ((uVar7 & 0xffffffff) * 0x50 != lVar11);
        }
        iVar5 = iVar5 + 1;
        lVar11 = *param_1;
        dVar15 = *param_2 - *(double *)(lVar11 + lVar6);
        dVar18 = param_2[1] - *(double *)(lVar11 + 8 + lVar6);
        dVar16 = param_2[2] - *(double *)(lVar11 + 0x10 + lVar6);
      } while (param_4 < ABS(*(double *)(lVar11 + 0x18 + lVar9) -
                             SQRT(dVar16 * dVar16 + dVar18 * dVar18 + dVar15 * dVar15)));
      lVar6 = (longlong)(int)uVar1 * 0x50;
      dVar15 = *(double *)(lVar11 + -0x90 + lVar6);
      dVar14 = *(double *)(lVar11 + 0x10 + lVar9) - dVar15;
      dVar16 = *(double *)(lVar11 + -0xa0 + lVar6);
      dVar18 = *(double *)(lVar11 + -0x98 + lVar6);
      dVar17 = *(double *)(lVar11 + 8 + lVar9) - dVar18;
      dVar13 = *(double *)(lVar11 + lVar9) - dVar16;
      dVar4 = 1.0 / SQRT(dVar14 * dVar14 + dVar13 * dVar13 + dVar17 * dVar17);
      dVar3 = *(double *)(lVar11 + 0x18 + lVar9);
      *(double *)(lVar11 + lVar9) = dVar4 * dVar13 * dVar3 + dVar16;
      *(double *)(lVar11 + 8 + lVar9) = dVar17 * dVar4 * dVar3 + dVar18;
      *(double *)(lVar11 + 0x10 + lVar9) = dVar14 * dVar4 * dVar3 + dVar15;
      iVar5 = 1;
    }
  }
  else {
    iVar5 = 1;
    if (1 < (int)uVar1) {
      lVar9 = 0;
      do {
        lVar6 = *param_1;
        dVar15 = *(double *)(lVar6 + 0x10 + lVar9);
        dVar13 = param_2[2] - dVar15;
        dVar16 = *(double *)(lVar6 + 8 + lVar9);
        dVar14 = param_2[1] - dVar16;
        dVar3 = *param_2 - *(double *)(lVar6 + lVar9);
        dVar4 = 1.0 / SQRT(dVar13 * dVar13 + dVar3 * dVar3 + dVar14 * dVar14);
        dVar18 = *(double *)(lVar6 + 0x68 + lVar9);
        *(double *)(lVar6 + 0x50 + lVar9) = dVar4 * dVar3 * dVar18 + *(double *)(lVar6 + lVar9);
        *(double *)(lVar6 + 0x58 + lVar9) = dVar14 * dVar4 * dVar18 + dVar16;
        *(double *)(lVar6 + 0x60 + lVar9) = dVar13 * dVar4 * dVar18 + dVar15;
        lVar9 = lVar9 + 0x50;
      } while ((ulonglong)uVar1 * 0x50 + -0x50 != lVar9);
    }
  }
  return iVar5;
}



// FUNCTION 14690efb3 FUN_14690efb3 body=2416 status=ok
// SIG undefined FUN_14690efb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14690efb3(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,undefined8 *param_7,float param_8,float param_9,
                  float param_10,int param_11,undefined8 *param_12,longlong *param_13,
                  longlong *param_14,float param_15,longlong *param_16)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  double dVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar18;
  uint uVar19;
  undefined8 uVar17;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [12];
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined4 *)(param_16 + 1) = 0;
  local_1c0 = param_1;
  local_1b0 = param_4;
  if (*(int *)((longlong)param_16 + 0xc) < 0) {
    FUN_1401a2688(param_16,0);
  }
  local_10c = 0;
  lVar9 = *param_2;
  uVar33 = 0;
  if ((param_10 != 0.0) || (NAN(param_10))) {
    if (*(int *)(param_12 + 1) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)*param_12;
    }
    uVar17 = (**(code **)(*plVar13 + 0x58))(plVar13,(undefined4 *)(lVar9 + 8),param_10,&local_10c);
    uVar33 = (undefined4)uVar17;
    local_138 = (code *)0x0;
    uStack_130 = (double *)0x0;
    local_128 = 0.0;
    FUN_140703ce0(param_2,&local_108,uVar17);
  }
  else {
    local_f8 = *(undefined8 *)(lVar9 + 0x18);
    local_108 = *(undefined4 *)(lVar9 + 8);
    uStack_104 = *(undefined4 *)(lVar9 + 0xc);
    uStack_100 = *(undefined4 *)(lVar9 + 0x10);
    uStack_fc = *(undefined4 *)(lVar9 + 0x14);
  }
  iVar7 = (int)local_1c0[1];
  lVar12 = (longlong)iVar7;
  uStack_130 = &local_158;
  local_138 = FUN_1469123ee;
  lVar9 = FUN_144a773aa(&local_138,&DAT_14c75ecfc);
  plVar13 = (longlong *)(lVar9 + 0x10);
  FUN_144a84024(plVar13,iVar7,1);
  FUN_140ee84a4(param_16,iVar7,1);
  local_1c8 = lVar12;
  if (0 < lVar12) {
    lVar9 = 0x20;
    lVar12 = 0;
    local_1b8 = param_3;
    do {
      uVar14 = uVar33;
      if (lVar12 != 0) {
        if (*(int *)(param_12 + 1) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)*param_12;
        }
        uVar14 = (**(code **)(*plVar10 + 0x58))
                           (uVar33,&local_108,
                            *(float *)(*param_14 + lVar12 * 4) *
                            (((param_6 - param_15) * param_9 + param_15) / param_15),&local_10c);
      }
      *(undefined4 *)(*plVar13 + lVar12 * 4) = uVar14;
      lVar4 = *param_16;
      local_148 = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      FUN_140703ce0(param_2,&local_138,*(undefined4 *)(*plVar13 + lVar12 * 4),&local_158);
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      *puVar1 = (undefined4)local_138;
      puVar1[1] = local_138._4_4_;
      puVar1[2] = (undefined4)uStack_130;
      puVar1[3] = uStack_130._4_4_;
      pdVar2 = (double *)(lVar4 + 0x10 + lVar9);
      *pdVar2 = local_128;
      pdVar2[1] = 0.0;
      local_148 = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      FUN_140703ce0(local_1b0,&local_138,*(undefined4 *)(*plVar13 + lVar12 * 4),&local_158);
      uVar17 = local_1b8;
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar9);
      *puVar3 = local_138;
      puVar3[1] = uStack_130;
      pdVar2 = (double *)(lVar4 + 0x30 + lVar9);
      *pdVar2 = local_128;
      pdVar2[1] = 0.0;
      puVar1 = (undefined4 *)(lVar4 + lVar9);
      local_108 = *puVar1;
      uStack_104 = puVar1[1];
      uStack_100 = puVar1[2];
      uStack_fc = puVar1[3];
      local_f8 = *(undefined8 *)(lVar4 + 0x10 + lVar9);
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + 0x60;
    } while (local_1c8 != lVar12);
    iVar7 = (int)local_1c8;
    lVar9 = 0;
    do {
      pauVar11 = (undefined1 (*) [16])(lVar9 * 0x60 + *param_16);
      local_148 = 0.0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_140 = 1.0;
      FUN_14099e59e(uVar17,&local_138,*(undefined4 *)(*plVar13 + lVar9 * 4),&local_158);
      plVar10 = (longlong *)0x0;
      if (*(int *)(param_7 + 1) != 0) {
        plVar10 = (longlong *)*param_7;
      }
      fVar15 = (float)(**(code **)(*plVar10 + 0x58))
                                (plVar10,*(float *)(*plVar13 + lVar9 * 4) / param_5);
      local_1a8 = (double)(fVar15 + param_8);
      local_198 = local_1a8;
      if (param_11 != 3) {
        local_198 = 0.0;
      }
      uStack_1a0 = local_1a8;
      if (param_11 != 1) {
        uStack_1a0 = 0.0;
      }
      if (param_11 != 2) {
        local_1a8 = 0.0;
      }
      FUN_144a7484c(&local_1a8,&local_158);
      dVar32 = DAT_14c8463d0;
      uVar33 = (undefined4)DAT_14c8463d0;
      uVar14 = DAT_14c8463d0._4_4_;
      dVar25 = DAT_14c8463d0._8_8_;
      uVar23 = DAT_14c8463d0._8_4_;
      uVar24 = DAT_14c8463d0._12_4_;
      dVar29 = DAT_14c8463e0;
      uVar16 = (undefined4)DAT_14c8463e0;
      uVar18 = DAT_14c8463e0._4_4_;
      dVar30 = DAT_14c8463e0._8_8_;
      uVar20 = DAT_14c8463e0._8_4_;
      uVar21 = DAT_14c8463e0._12_4_;
      if (lVar9 < (longlong)(ulonglong)(iVar7 - 1)) {
        lVar12 = (lVar9 + 1) * 0x60;
        pdVar2 = (double *)(*param_16 + 0x20 + lVar12);
        local_160 = *(double *)(*param_16 + 0x30 + lVar12) - *(double *)pauVar11[3];
        local_170 = *pdVar2 - *(double *)pauVar11[2];
        dStack_168 = pdVar2[1] - *(double *)(pauVar11[2] + 8);
        dVar32 = local_160 * local_160 + local_170 * local_170 + dStack_168 * dStack_168;
        if (9.99999993922529e-09 < dVar32) {
          dVar32 = 1.0 / SQRT(dVar32);
          local_170 = local_170 * dVar32;
          dStack_168 = dStack_168 * dVar32;
          local_160 = local_160 * dVar32;
          if (param_11 == 1) {
            uVar22 = 0;
            dVar32 = 1.0;
            dVar29 = 0.0;
            uVar34 = 0x3ff00000;
LAB_14690f4ae:
            uVar19 = 0;
            dVar25 = 0.0;
          }
          else {
            uVar34 = 0;
            if (param_11 == 2) {
              dVar32 = 0.0;
              dVar29 = 1.0;
              uVar22 = 0x3ff00000;
              goto LAB_14690f4ae;
            }
            uVar22 = 0;
            uVar19 = 0x3ff00000;
            dVar32 = 0.0;
            dVar29 = 0.0;
            dVar25 = 1.0;
          }
          lVar4 = *local_1c0;
          dVar28 = *(double *)(lVar4 + lVar12);
          dVar31 = ((double *)(lVar4 + lVar12))[1];
          dVar8 = *(double *)(lVar4 + 0x10 + lVar12);
          pdVar2 = (double *)(lVar4 + 0x18 + lVar12);
          dVar30 = *pdVar2;
          dVar26 = (double)((ulonglong)uVar22 << 0x20) * dVar28 - dVar31 * dVar32;
          dVar27 = (double)((ulonglong)uVar19 << 0x20) * dVar31 - dVar8 * dVar29;
          dVar25 = (double)((ulonglong)uVar34 << 0x20) * dVar8 - dVar25 * dVar28;
          dVar27 = dVar27 + dVar27;
          dVar25 = dVar25 + dVar25;
          dVar26 = dVar26 + dVar26;
          local_178 = dVar26 * dVar30 + (double)((ulonglong)uVar19 << 0x20) +
                      (dVar25 * dVar28 - dVar27 * dVar31);
          dVar32 = (dVar26 * dVar31 - dVar25 * dVar8) + dVar30 * dVar27 + dVar32;
          dVar29 = (dVar8 * dVar27 - dVar28 * dVar26) + *pdVar2 * dVar25 + dVar29;
          dVar25 = local_178 * local_178 + dVar32 * dVar32 + dVar29 * dVar29;
          if ((dVar25 != 1.0) || (NAN(dVar25))) {
            if (9.99999993922529e-09 <= dVar25) {
              dVar25 = 1.0 / SQRT(dVar25);
              local_178 = local_178 * dVar25;
              stack0xfffffffffffffe80 = dVar29 * dVar25;
              local_188._0_8_ = dVar25 * dVar32;
            }
            else {
              local_178 = DAT_14c8464f0;
              local_188._4_4_ = DAT_14c8464e0._4_4_;
              local_188._0_4_ = (undefined4)DAT_14c8464e0;
              local_188._8_4_ = (undefined4)DAT_14c8464e8;
              uStack_17c = DAT_14c8464e8._4_4_;
            }
          }
          else {
            local_188._8_4_ = SUB84(dVar29,0);
            local_188._0_8_ = dVar32;
            uStack_17c = (int)((ulonglong)dVar29 >> 0x20);
          }
          FUN_144a9d448(&local_1a8,local_188,&local_170);
          uVar16 = (undefined4)local_198;
          uVar18 = local_198._4_4_;
          uVar20 = uStack_190;
          uVar21 = uStack_18c;
          uVar33 = (undefined4)local_1a8;
          uVar14 = local_1a8._4_4_;
          uVar23 = (undefined4)uStack_1a0;
          uVar24 = uStack_1a0._4_4_;
        }
        dVar29 = (double)CONCAT44(uVar18,uVar16);
        dVar30 = (double)CONCAT44(uVar21,uVar20);
        dVar32 = (double)CONCAT44(uVar14,uVar33);
        dVar25 = (double)CONCAT44(uVar24,uVar23);
        lVar12 = (lVar9 + 1) * 0x20;
        puVar1 = (undefined4 *)(*param_13 + lVar12);
        uVar33 = *puVar1;
        uVar14 = puVar1[1];
        uVar23 = puVar1[2];
        uVar24 = puVar1[3];
        puVar1 = (undefined4 *)(*param_13 + 0x10 + lVar12);
        uVar16 = *puVar1;
        uVar18 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
      }
      lVar9 = lVar9 + 1;
      dVar26 = dVar25 * local_148 * -1.0 +
               dVar29 * dStack_150 + dVar30 * local_158 * 1.0 + dVar32 * local_140;
      dVar27 = dVar32 * local_148 * 1.0 +
               dVar30 * dStack_150 + dVar29 * local_158 * -1.0 + dVar25 * local_140;
      dVar28 = dVar30 * local_148 * 1.0 +
               ((local_158 * dVar25 * 1.0 + local_140 * dVar29) - dVar32 * dStack_150);
      dVar32 = dVar29 * local_148 * -1.0 +
               ((local_158 * dVar32 * -1.0 + local_140 * dVar30) - dVar25 * dStack_150);
      dVar25 = (double)CONCAT44(uVar24,uVar23) * dVar28 * -1.0 +
               (double)CONCAT44(uVar18,uVar16) * dVar27 +
               (double)CONCAT44(uVar21,uVar20) * dVar26 * 1.0 +
               (double)CONCAT44(uVar14,uVar33) * dVar32;
      dVar30 = (double)CONCAT44(uVar14,uVar33) * dVar28 * 1.0 +
               (double)CONCAT44(uVar21,uVar20) * dVar27 +
               (double)CONCAT44(uVar18,uVar16) * dVar26 * -1.0 +
               (double)CONCAT44(uVar24,uVar23) * dVar32;
      dVar31 = (double)CONCAT44(uVar21,uVar20) * dVar28 * 1.0 +
               ((dVar26 * (double)CONCAT44(uVar24,uVar23) * 1.0 +
                dVar32 * (double)CONCAT44(uVar18,uVar16)) - dVar27 * (double)CONCAT44(uVar14,uVar33)
               );
      dVar26 = (double)CONCAT44(uVar18,uVar16) * dVar28 * -1.0 +
               ((dVar26 * (double)CONCAT44(uVar14,uVar33) * -1.0 +
                dVar32 * (double)CONCAT44(uVar21,uVar20)) - dVar27 * (double)CONCAT44(uVar24,uVar23)
               );
      dVar32 = (double)local_138 * dVar31 * 1.0 +
               dStack_120 * dVar30 + local_128 * dVar25 * -1.0 + (double)uStack_130 * dVar26;
      dVar29 = local_128 * dVar31 * -1.0 +
               ((dVar25 * (double)local_138 * -1.0 + dVar26 * dStack_120) -
               dVar30 * (double)uStack_130);
      auVar5._8_4_ = SUB84(dVar32,0);
      auVar5._0_8_ = (double)uStack_130 * dVar31 * -1.0 +
                     local_128 * dVar30 + dStack_120 * dVar25 * 1.0 + (double)local_138 * dVar26;
      auVar5._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      *pauVar11 = auVar5;
      auVar6._8_4_ = SUB84(dVar29,0);
      auVar6._0_8_ = dStack_120 * dVar31 * 1.0 +
                     ((dVar25 * (double)uStack_130 * 1.0 + dVar26 * local_128) -
                     dVar30 * (double)local_138);
      auVar6._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      pauVar11[1] = auVar6;
    } while (lVar9 != local_1c8);
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14690f924 FUN_14690f924 body=209 status=ok
// SIG undefined FUN_14690f924(void)

void FUN_14690f924(void)

{
  FUN_1402e3c0d();
  return;
}



// FUNCTION 14690fb9a FUN_14690fb9a body=59 status=ok
// SIG undefined FUN_14690fb9a(void)

undefined8 FUN_14690fb9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14690fc70 FUN_14690fc70 body=54 status=ok
// SIG undefined FUN_14690fc70(void)

undefined1 FUN_14690fc70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14690fcce FUN_14690fcce body=59 status=ok
// SIG undefined FUN_14690fcce(void)

undefined8 FUN_14690fcce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


