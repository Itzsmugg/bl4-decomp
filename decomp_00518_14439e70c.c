// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14439e70c FUN_14439e70c body=173 status=ok
// SIG undefined FUN_14439e70c(void)

void FUN_14439e70c(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar5[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar5[2] = uVar1;
  *puVar5 = &PTR_FUN_14ba44290;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 3) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  *(undefined4 *)(puVar5 + 5) = param_2[4];
  *(undefined1 *)((longlong)puVar5 + 0x2c) = 0;
  FUN_143e6b0f2(param_1,puVar5);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e7ba FUN_14439e7ba body=345 status=ok
// SIG undefined FUN_14439e7ba(void)

void FUN_14439e7ba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_1 + 0x588) + 0x20))(*(longlong **)(param_1 + 0x588),&local_58);
  if (local_58 != (longlong *)0x0) {
    iVar5 = (**(code **)(*local_58 + 0x448))();
    if (0 < iVar5) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      FUN_140dfab96(&local_68,param_2);
      puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648f0);
      uVar3 = *puVar7;
      uVar4 = *(undefined8 *)(param_1 + 0x588);
      QueryPerformanceCounter(&local_48);
      puVar6[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
      puVar6[2] = uVar4;
      *puVar6 = &PTR_FUN_14ba44350;
      puVar6[3] = uVar3;
      FUN_140df9946(local_68,puVar6 + 4);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
      FUN_143e6b0f2(param_1,puVar6);
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439e914 FUN_14439e914 body=238 status=ok
// SIG undefined FUN_14439e914(void)

void FUN_14439e914(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  bVar3 = *(byte *)(param_2 + 8);
  FUN_140dfab96(&local_58,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_48);
  puVar5[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14ba443e0;
  FUN_140df9946(local_58,puVar5 + 3);
  *(uint *)(puVar5 + 5) = (uint)bVar3;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  FUN_143e6b0f2(param_1,puVar5);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ea04 FUN_14439ea04 body=256 status=ok
// SIG undefined FUN_14439ea04(void)

void FUN_14439ea04(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_140dfab96(&local_58,param_2);
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
  uVar3 = *puVar6;
  uVar4 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_48);
  puVar5[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14ba44350;
  puVar5[3] = uVar3;
  FUN_140df9946(local_58,puVar5 + 4);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  FUN_143e6b0f2(param_1,puVar5);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439eb06 FUN_14439eb06 body=238 status=ok
// SIG undefined FUN_14439eb06(void)

void FUN_14439eb06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  bVar3 = *(byte *)(param_2 + 8);
  FUN_140dfab96(&local_58,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_48);
  puVar5[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar5[2] = uVar4;
  *puVar5 = &PTR_FUN_14ba443e0;
  FUN_140df9946(local_58,puVar5 + 3);
  *(uint *)(puVar5 + 5) = (uint)bVar3;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  FUN_143e6b0f2(param_1,puVar5);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ebf6 FUN_14439ebf6 body=149 status=ok
// SIG undefined FUN_14439ebf6(void)

void FUN_14439ebf6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_30);
  puVar2[1] = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_14ba44480;
  FUN_143e6b0f2(param_1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439ec8c FUN_14439ec8c body=136 status=ok
// SIG undefined FUN_14439ec8c(void)

void FUN_14439ec8c(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  int *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) &&
     ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x58) + lVar1) == *param_2) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))();
        local_20 = param_2;
        FUN_140b16dce(param_1 + 0x58);
        break;
      }
      lVar1 = lVar1 + 4;
    } while ((longlong)*(int *)(param_1 + 0x60) * 4 != lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14439ed16 FUN_14439ed16 body=455 status=ok
// SIG undefined FUN_14439ed16(void)

void FUN_14439ed16(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong **)(param_1 + 200) != (longlong *)0x0) &&
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 200) + 0x128))(), cVar7 != '\0')) &&
     (*(char *)(param_1 + 0xe0) == '\x01')) {
    lVar1 = param_1 + 8;
    plStack_50 = (longlong *)param_2[2];
    if (plStack_50 == (longlong *)0x0) {
LAB_14439ed8e:
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar9 = (int)plStack_50[1];
      do {
        if (iVar9 == 0) goto LAB_14439ed8e;
        LOCK();
        iVar6 = (int)plStack_50[1];
        bVar11 = iVar9 == iVar6;
        if (bVar11) {
          *(int *)(plStack_50 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar11);
      local_58 = (longlong *)param_2[1];
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar11 = false;
    }
    plVar5 = plStack_50;
    uVar8 = (**(code **)(*local_58 + 0x40))();
    iVar9 = FUN_148fb8d3c(lVar1,uVar8,&local_58);
    plVar4 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (!bVar11) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (iVar9 != -1) {
      cVar7 = (**(code **)(*param_2 + 0x28))(param_2);
      if (cVar7 != '\0') {
        puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x80))
                  (*(longlong **)(param_1 + 0xb8),*puVar10);
      }
      plVar5 = (longlong *)param_2[2];
      if (plVar5 == (longlong *)0x0) {
LAB_14439ee6f:
        local_58 = (longlong *)0x0;
        plStack_50 = (longlong *)0x0;
        FUN_148fb9444(lVar1);
      }
      else {
        iVar9 = (int)plVar5[1];
        do {
          if (iVar9 == 0) goto LAB_14439ee6f;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar11 = iVar9 == iVar6;
          if (bVar11) {
            *(int *)(plVar5 + 1) = iVar9 + 1;
            iVar6 = iVar9;
          }
          iVar9 = iVar6;
          UNLOCK();
        } while (!bVar11);
        local_58 = (longlong *)param_2[1];
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        plStack_50 = plVar5;
        FUN_148fb9444(lVar1);
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14439ef24 FUN_14439ef24 body=737 status=ok
// SIG undefined FUN_14439ef24(void)

void FUN_14439ef24(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined **local_550;
  undefined1 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  longlong local_528;
  undefined **local_520 [11];
  longlong *local_4c8;
  longlong local_4a8;
  longlong local_490;
  undefined8 local_468;
  undefined8 uStack_460;
  int local_44c;
  undefined1 local_448 [1032];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_578;
  FUN_1447400e4(local_520,0x2181,0);
  local_548 = 1;
  local_550 = &PTR_FUN_14ba445c8;
  local_540 = 0;
  uStack_538 = 0;
  lVar6 = FUN_14600b90e();
  plVar3 = *(longlong **)(lVar6 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_530 = *(undefined8 *)(param_1 + 0x60);
  local_528 = *(longlong *)(param_1 + 0x68);
  if (local_528 != 0) {
    LOCK();
    *(int *)(local_528 + 8) = *(int *)(local_528 + 8) + 1;
    UNLOCK();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((param_2 == '\0') && (*(int *)(param_1 + 0x58) != 0)) {
    iVar5 = *(int *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    goto LAB_14439f107;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((*(longlong **)(lVar6 + 0xb8) == (longlong *)0x0) ||
     (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 8))(), cVar4 == '\0')) {
LAB_14439f0de:
    uVar9 = 0;
    iVar5 = 0;
    uVar11 = 0;
  }
  else {
    local_44c = 0;
    local_558 = 0;
    iVar5 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x68))
                      (*(longlong **)(lVar6 + 0xb8),local_448,0x400,&local_44c);
    *(int *)(param_1 + 0x58) = iVar5;
    if (local_44c == 0 || iVar5 == 0) goto LAB_14439f0de;
    local_468 = 0;
    uStack_460 = 0;
    FUN_1407c8a86(local_448,local_44c,&local_468);
    uVar9 = local_468;
    iVar5 = (int)uStack_460;
    uVar11 = uStack_460._4_4_;
    lVar7 = *(longlong *)(lVar6 + 0x58);
    iVar10 = *(int *)(lVar6 + 0x60);
    lVar12 = (longlong)iVar10;
    if (lVar12 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(lVar7 + uVar8) == *(int *)(param_1 + 0x58)) {
          if ((int)(~uVar8 >> 2) != 0) goto LAB_14439f0e5;
          break;
        }
        uVar8 = uVar8 + 4;
      } while (lVar12 * 4 - uVar8 != 0);
    }
    *(uint *)(lVar6 + 0x60) = iVar10 + 1U;
    if (*(uint *)(lVar6 + 100) < iVar10 + 1U) {
      FUN_1447808da((longlong *)(lVar6 + 0x58),iVar10);
      lVar7 = *(longlong *)(lVar6 + 0x58);
    }
    *(undefined4 *)(lVar7 + lVar12 * 4) = *(undefined4 *)(param_1 + 0x58);
  }
LAB_14439f0e5:
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(int *)(param_1 + 0x50) = iVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar11;
LAB_14439f107:
  iVar10 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar10 = 0;
  }
  FUN_1402980a2(&local_540,uVar9,iVar10);
  FUN_1400748c2(local_520,1);
  (*(code *)local_550[1])(&local_550,local_520);
  FUN_14439f206(param_1,local_520);
  *(undefined1 *)(param_1 + 0x40) = 2;
  FUN_148fab8b0(&local_550);
  local_520[0] = &PTR_FUN_149e37560;
  if (local_490 != 0) {
    FUN_1400020a8();
  }
  local_520[0] = &PTR__purecall_149e35f70;
  if (local_4c8 != (longlong *)0x0) {
    if (*local_4c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_4c8);
  }
  if (local_4a8 != 0) {
    if (*(longlong *)(local_4a8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_4a8);
  }
  if ((local_40 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14439f206 FUN_14439f206 body=136 status=ok
// SIG undefined FUN_14439f206(void)

void FUN_14439f206(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 1;
  local_2c = 0;
  local_24 = 0;
  FUN_142b03d36(*(undefined8 *)(param_1 + 8),param_1,param_2);
  QueryPerformanceCounter(&local_20);
  *(float *)(param_1 + 0x44) = (float)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439f290 FUN_14439f290 body=586 status=ok
// SIG undefined FUN_14439f290(void)

undefined4 FUN_14439f290(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined7 uVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_488 [40];
  undefined **local_460;
  int local_458;
  undefined1 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined **local_438 [11];
  longlong *local_3e0;
  longlong local_3c0;
  longlong local_3a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_488;
  lVar4 = *(longlong *)(param_1 + 0x28);
  plVar5 = *(longlong **)(param_1 + 0x60);
  cVar7 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if ((cVar7 != '\0') && (*(char *)(lVar4 + 0xe0) == '\x01')) {
    FUN_148faba50(lVar4,&local_448,plVar5);
    bVar2 = *(byte *)(local_448 + 2);
    uVar10 = (undefined7)((ulonglong)lVar4 >> 8);
    if ((bVar2 & 5) == 0) {
      if ((bVar2 & 10) == 0) {
        iVar9 = (int)local_448[1];
        if ((1 < iVar9) && (0x7ffffbfe < iVar9 - 0x402U)) {
          uVar11 = 0;
          do {
            uVar3 = *(ushort *)(*local_448 + uVar11 * 2);
            if ((9 < (ushort)(uVar3 - 0x30)) &&
               ((uVar12 = uVar3 - 0x41, 0x25 < uVar12 ||
                ((0x3f0000003fU >> ((ulonglong)uVar12 & 0x3f) & 1) == 0)))) goto LAB_14439f313;
            uVar11 = uVar11 + 1;
          } while (iVar9 - 1 != uVar11);
          local_458 = iVar9 + -1;
          if (iVar9 == 0) {
            local_458 = 0;
          }
          local_460 = (undefined **)*local_448;
          uVar8 = FUN_14682b721(&local_460,local_438);
          iVar9 = (**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x78))
                            (*(longlong **)(lVar4 + 0xb8),local_438,uVar8,plVar5[3]);
          bVar13 = iVar9 == 0;
          bVar6 = !bVar13;
          uVar8 = (undefined4)CONCAT71(uVar10,bVar13);
          *(byte *)(local_448 + 2) = *(byte *)(local_448 + 2) | bVar13 * '\x02' + 2U;
          goto LAB_14439f324;
        }
LAB_14439f313:
        *(byte *)(local_448 + 2) = bVar2 | 2;
      }
      bVar6 = false;
      uVar8 = 0;
    }
    else {
      uVar8 = (undefined4)CONCAT71(uVar10,1);
      bVar6 = false;
    }
LAB_14439f324:
    if (local_440 != (longlong *)0x0) {
      plVar5 = local_440 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      if ((int)*plVar5 == 0) {
        (**(code **)*local_440)(local_440);
        piVar1 = (int *)((longlong)local_440 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*local_440 + 0x10))(local_440);
        }
      }
    }
    if (!bVar6) goto LAB_14439f350;
  }
  uVar8 = 0;
LAB_14439f350:
  local_458 = CONCAT31(local_458._1_3_,2);
  local_460 = &PTR_FUN_14ba445e8;
  FUN_1447400e4(local_438,0xc1,1);
  FUN_1400748c2(local_438,1);
  local_450 = (undefined1)uVar8;
  FUN_148fb498c(&local_460,local_438);
  FUN_14439f206(param_1,local_438);
  local_438[0] = &PTR_FUN_149e37560;
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  local_438[0] = &PTR__purecall_149e35f70;
  if (local_3e0 != (longlong *)0x0) {
    if (*local_3e0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_3e0);
  }
  if (local_3c0 != 0) {
    if (*(longlong *)(local_3c0 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_3c0);
  }
  if ((local_30 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439f4dc FUN_14439f4dc body=969 status=ok
// SIG undefined FUN_14439f4dc(void)

void FUN_14439f4dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *_Src;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  void **local_88;
  longlong *local_80;
  undefined **local_78;
  undefined1 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  char local_40 [8];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar3 = param_2[0x15];
    if ((longlong)uVar3 < param_2[0x14]) {
      bVar10 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) !=
               0;
      param_2[0x15] = uVar3 + 1;
      goto LAB_14439f551;
    }
    FUN_1405d09b8(param_2,1);
  }
  bVar10 = false;
LAB_14439f551:
  if ((((*(char *)(param_1 + 0x41) == '\x01') && (*(longlong *)(param_1 + 0x28) != 0)) && (bVar10))
     && ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) {
    lVar9 = param_2[0x15];
    local_48 = &PTR_FUN_14ba445d8;
    local_40[0] = '\0';
    plVar4 = (longlong *)param_2[1];
    if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,local_40,1);
    }
    else {
      local_40[0] = *(char *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      param_2[0x15] = lVar9;
      cVar6 = *(char *)(param_1 + 0x40);
      if (local_40[0] == '\x01' && cVar6 == '\x01') {
        local_70 = 1;
        local_78 = &PTR_FUN_14ba445c8;
        local_68 = (void *)0x0;
        uStack_60 = 0;
        puVar7 = (undefined8 *)FUN_14600b90e();
        local_58 = *puVar7;
        local_50 = puVar7[1];
        ppuVar8 = &PTR_FUN_14ba445c8;
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
          ppuVar8 = local_78;
        }
        (*(code *)ppuVar8[1])(&local_78,param_2);
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          plVar4 = *(longlong **)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x60) = local_58;
          *(longlong *)(param_1 + 0x68) = local_50;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
          if (cVar6 == '\0') {
            FUN_148fab9d6(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),0,1);
            FUN_14572541c(param_2);
          }
          else {
            FUN_148faba50(*(undefined8 *)(param_1 + 0x28),&local_88,*(undefined8 *)(param_1 + 0x60))
            ;
            _Src = local_68;
            if (local_88 == (void **)0x0) {
              FUN_148fab9d6(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60),0,0x14);
              FUN_14572541c(param_2);
            }
            else {
              if ((local_88 != &local_68) && (((ulonglong)local_88[2] & 5) == 0)) {
                iVar5 = (int)uStack_60;
                lVar9 = (longlong)(int)uStack_60;
                *(int *)(local_88 + 1) = (int)uStack_60;
                if ((int)uStack_60 == 0 && *(int *)((longlong)local_88 + 0xc) == 0) {
                  *(undefined4 *)((longlong)local_88 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(local_88,uStack_60 & 0xffffffff);
                  if (iVar5 != 0) {
                    memcpy(*local_88,_Src,lVar9 * 2);
                  }
                }
              }
              cVar6 = FUN_14439f290(param_1);
              if (cVar6 == '\0') {
                FUN_14439fc56(*(undefined8 *)(param_1 + 0x28),&local_38,
                              *(undefined8 *)(param_1 + 0x60));
                if (local_38 != 0) {
                  *(byte *)(local_38 + 0x10) = *(byte *)(local_38 + 0x10) | 2;
                }
                if (local_30 != (longlong *)0x0) {
                  plVar4 = local_30 + 1;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  if ((int)*plVar4 == 0) {
                    (**(code **)*local_30)(local_30);
                    piVar2 = (int *)((longlong)local_30 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    if (*piVar2 == 0) {
                      (**(code **)(*local_30 + 0x10))(local_30);
                    }
                  }
                }
              }
              if (*(char *)(param_1 + 0x40) != '\x03') {
                *(undefined1 *)(param_1 + 0x40) = 3;
                *(undefined1 *)(param_1 + 0x1b) = 1;
                FUN_145dcbe7a(*(undefined8 *)(param_1 + 8),param_1);
              }
            }
            if (local_80 != (longlong *)0x0) {
              plVar4 = local_80 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              if ((int)*plVar4 == 0) {
                (**(code **)*local_80)(local_80);
                piVar2 = (int *)((longlong)local_80 + 0xc);
                *piVar2 = *piVar2 + -1;
                if (*piVar2 == 0) {
                  (**(code **)(*local_80 + 0x10))(local_80);
                }
              }
            }
          }
        }
        FUN_148fab8b0(&local_78);
      }
      else if (cVar6 == '\x02') {
        if (local_40[0] == '\x03') {
          FUN_14439ef24(param_1,0);
        }
        else if (local_40[0] == '\x02') {
          local_70 = 2;
          local_78 = &PTR_FUN_14ba445e8;
          local_68 = (void *)((ulonglong)local_68 & 0xffffffffffffff00);
          FUN_148fb498c(&local_78,param_2);
          if (*(char *)(param_1 + 0x40) != '\x03') {
            *(undefined1 *)(param_1 + 0x40) = 3;
            *(undefined1 *)(param_1 + 0x1b) = 1;
            FUN_145dcbe7a(*(undefined8 *)(param_1 + 8),param_1);
          }
        }
      }
      else if (((*(char **)(param_1 + 8) != (char *)0x0) && (**(char **)(param_1 + 8) == '\x01')) &&
              (local_40[0] == '\x04')) {
        if (cVar6 == '\x03') {
          FUN_14439f290();
        }
        else {
          FUN_148fab906(param_1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439f8a6 FUN_14439f8a6 body=248 status=ok
// SIG undefined FUN_14439f8a6(void)

void FUN_14439f8a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_f8 [40];
  undefined **local_d0 [11];
  longlong *local_78;
  longlong local_58;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1447400e4(local_d0,*(longlong *)(param_2 + 0xa0) + 1,1);
  FUN_1400748c2(local_d0,0);
  FUN_1401177fa(local_d0,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0xa0));
  FUN_140055966(param_2,local_d0);
  local_d0[0] = &PTR_FUN_149e37560;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_d0[0] = &PTR__purecall_149e35f70;
  if (local_78 != (longlong *)0x0) {
    if (*local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_78);
  }
  if (local_58 != 0) {
    if (*(longlong *)(local_58 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439f9a0 FUN_14439f9a0 body=692 status=ok
// SIG undefined FUN_14439f9a0(void)

undefined8 * FUN_14439f9a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *_Str;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14ba421b8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  param_1[0x17] = *puVar7;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
  param_1[0x18] = *puVar7;
  param_1[0x19] = param_2;
  param_1[0x1a] = *param_3;
  lVar3 = param_3[1];
  param_1[0x1b] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1c] = 0;
  FUN_140056680(&local_58,L"SteamAuthComponentModuleInterface");
  cVar5 = FUN_146236598(&local_58);
  if (cVar5 == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    local_98 = &DAT_14c872ce8;
    local_80 = param_3;
    FUN_14105aa76(DAT_14c872ce0,L"PacketHandlerComponents",L"Components",&local_68);
    lVar3 = local_68;
    lVar10 = (longlong)(int)uStack_60;
    if (lVar10 != 0) {
      lVar9 = 0;
      do {
        local_78 = (void *)0x0;
        local_70 = *(int *)(lVar3 + 8 + lVar9);
        lVar11 = (longlong)local_70;
        _Src = *(void **)(lVar3 + lVar9);
        if (lVar11 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar11 * 2);
        }
        _Str = L"";
        if (local_50 != 0) {
          _Str = local_58;
        }
        if (_Str != (wchar_t *)0x0) {
          sVar8 = wcslen(_Str);
          local_90 = 0xffffffff;
          local_98 = (undefined8 *)((ulonglong)local_98 & 0xffffffff00000000);
          iVar6 = FUN_1447ee042(&local_78,_Str,sVar8 & 0xffffffff,1);
          if (iVar6 != -1) {
            *(undefined1 *)(param_1 + 0x1c) = 1;
            if (local_78 != (void *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar10 * 0x10 != lVar9);
    }
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    param_3 = local_80;
    if (local_68 != 0) {
      FUN_1400020a8();
      param_3 = local_80;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14439fc56 FUN_14439fc56 body=303 status=ok
// SIG undefined FUN_14439fc56(void)

undefined8 * FUN_14439fc56(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plStack_40 = *(longlong **)(param_3 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_14439fc82:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) goto LAB_14439fc82;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_48 = *(longlong **)(param_3 + 8);
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar4 = plStack_40;
  uVar6 = (**(code **)(*local_48 + 0x40))();
  iVar7 = FUN_148fb8d3c((longlong *)(param_1 + 8),uVar6,&local_48);
  plVar3 = plStack_40;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8);
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (lVar8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  *param_2 = *(undefined8 *)(lVar8 + 0x10);
  lVar8 = *(longlong *)(lVar8 + 0x18);
  param_2[1] = lVar8;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14439fd86 FUN_14439fd86 body=776 status=ok
// SIG undefined FUN_14439fd86(void)

undefined8 FUN_14439fd86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  longlong *local_70 [2];
  undefined8 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar10 = *(longlong **)(param_1 + 200);
  if (plVar10 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_60);
    lVar7 = FUN_145cbb6ba(local_60);
  }
  plVar10 = *(longlong **)(param_1 + 0xb8);
  if ((plVar10 == (longlong *)0x0) ||
     ((**(code **)(*plVar10 + 0x10))(plVar10,&local_58), local_58 != *(wchar_t **)(param_2 + 0x18)))
  {
    plVar10 = *(longlong **)(param_1 + 0xd0);
    if ((plVar10 != (longlong *)0x0) &&
       ((((int)plVar10[1] != 0 && ((longlong *)*plVar10 != (longlong *)0x0)) &&
        (cVar6 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar6 != '\0')))) {
      if (*(int *)(*(undefined8 **)(param_1 + 0xd0) + 1) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)**(undefined8 **)(param_1 + 0xd0);
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,param_2);
LAB_14439ffcf:
      FUN_14439ed16(param_1,param_2);
      uVar8 = 1;
      goto LAB_14439ff7e;
    }
    if (((lVar7 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x170), lVar5 != 0)) &&
       ((*(longlong *)(lVar5 + 1000) != 0 && (0 < *(int *)(lVar7 + 0x238))))) {
      lVar11 = 0;
      local_80 = lVar5;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar7 + 0x230) + 4 + lVar11 * 8);
        if (((iVar3 != 0) &&
            (uVar4 = *(uint *)(*(longlong *)(lVar7 + 0x230) + lVar11 * 8), -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            ((((plVar10 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar3)) &&
              ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
             ((lVar5 = *plVar10, lVar5 != 0 && (lVar9 = *(longlong *)(lVar5 + 0x398), lVar9 != 0))))
            )))) {
          if ((&DAT_149fc1b6e)[*(byte *)(lVar9 + 0x3b8)] == '\x01') {
            if ((*(longlong **)(lVar9 + 0x3a8) != (longlong *)0x0) &&
               (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x3a8) + 0x28))(), cVar6 != '\0')) {
              lVar9 = *(longlong *)(lVar5 + 0x398);
LAB_14439ff1a:
              FUN_1408e4d18(lVar9 + 0x3a0,&local_58);
              cVar6 = (*(code *)**(undefined8 **)local_58)(local_58,param_2);
              plVar10 = (longlong *)CONCAT44(uStack_4c,local_50);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar10 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if (cVar6 != '\0') {
                local_58 = L"HostClosedConnection";
                local_50 = 0x14;
                FUN_1446e940c(local_74,&local_58);
                local_58 = L"NetworkErrors";
                local_50 = 0xd;
                FUN_1446e940c(local_78,&local_58);
                local_58 = L"Host closed the connection.";
                local_50 = 0x1b;
                FUN_140208c1e(local_70,local_78,local_74,&local_58);
                cVar6 = (**(code **)(**(longlong **)(local_80 + 1000) + 0x6a8))
                                  (*(longlong **)(local_80 + 1000),lVar5,local_70);
                if (local_70[0] != (longlong *)0x0) {
                  (**(code **)(*local_70[0] + 0x10))();
                }
                if (cVar6 != '\0') goto LAB_14439ffcf;
                break;
              }
            }
          }
          else if ((*(uint *)(lVar9 + 0x3a8) & 0xffffff) != 0) goto LAB_14439ff1a;
        }
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < *(int *)(lVar7 + 0x238));
    }
  }
  uVar8 = 0;
LAB_14439ff7e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1443a0090 FUN_1443a0090 body=483 status=ok
// SIG undefined FUN_1443a0090(void)

undefined8 FUN_1443a0090(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(char *)(param_1 + 0xe0) == '\x01') && (*(longlong **)(param_1 + 200) != (longlong *)0x0))
     && (cVar6 = (**(code **)(**(longlong **)(param_1 + 200) + 0x128))(), cVar6 != '\0')) {
    plVar1 = (longlong *)(param_1 + 8);
    local_40 = param_1 + 0x18;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = local_38;
    uVar5 = local_70;
    local_68 = local_30;
    local_64 = local_2c;
    local_80 = local_48;
    local_78 = local_40;
    local_50 = 0;
    local_70._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_88 = plVar1;
    local_60 = plVar1;
    local_58 = plVar1;
    if (local_70._4_4_ < *(int *)(local_40 + 0x18)) {
      iVar7 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *(longlong *)(*local_88 + 0x10 + (longlong)iVar7 * 0x28);
        if (lVar4 != 0) {
          plVar1 = *(longlong **)(*local_88 + 0x18 + (longlong)iVar7 * 0x28);
          if (plVar1 != (longlong *)0x0) {
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          }
          if ((*(byte *)(lVar4 + 0x10) & 10) != 0) {
            cVar6 = FUN_14439fd86(param_1,*(undefined8 *)
                                           (*local_88 + (longlong)local_70._4_4_ * 0x28));
            if (cVar6 != '\0') {
              uVar5 = local_70;
              if (plVar1 != (longlong *)0x0) {
                plVar2 = plVar1 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar1)(plVar1);
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  uVar5 = local_70;
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                    uVar5 = local_70;
                  }
                }
              }
              break;
            }
            *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) | 8;
          }
          if (plVar1 != (longlong *)0x0) {
            plVar2 = plVar1 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar1)(plVar1);
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar7 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar5;
    if (((char)local_50 == '\x01') && (local_50._1_1_ == '\x01')) {
      FUN_148fb9214(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1443a0274 FUN_1443a0274 body=3 status=ok
// SIG undefined FUN_1443a0274(void)

undefined8 FUN_1443a0274(void)

{
  return 0;
}



// FUNCTION 1443a027d FUN_1443a027d body=69 status=ok
// SIG undefined FUN_1443a027d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443a027d(void)

{
  _DAT_14cbf4c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443a02bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4c58,1);
  return;
}



// FUNCTION 1443a02c2 FUN_1443a02c2 body=63 status=ok
// SIG undefined FUN_1443a02c2(void)

undefined8 FUN_1443a02c2(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar3;
  cVar2 = (**(code **)(*plVar1 + 0x110))(plVar1);
  if (cVar2 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443a02fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0xd0))(plVar1);
  return uVar4;
}



// FUNCTION 1443a0301 FUN_1443a0301 body=114 status=ok
// SIG undefined FUN_1443a0301(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443a0301(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  _DAT_14cbf4ce8 = 0;
  if (DAT_14cbf4ce0 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&DAT_14cbf4ca0);
  if (DAT_14cbf4c88 != 0) {
    FUN_1400020a8();
  }
  plVar3 = DAT_14cbf4c70;
  if (DAT_14cbf4c70 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4c70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443a036f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443a037a FUN_1443a037a body=142 status=ok
// SIG undefined FUN_1443a037a(void)

void FUN_1443a037a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443a03be;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443a03be:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443a03f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443a0408 FUN_1443a0408 body=142 status=ok
// SIG undefined FUN_1443a0408(void)

void FUN_1443a0408(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1443a044c;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443a044c:
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443a0483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443a0496 FUN_1443a0496 body=126 status=ok
// SIG undefined FUN_1443a0496(void)

undefined8 FUN_1443a0496(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"not implemented");
  local_48 = local_38;
  (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3,0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a0516 FUN_1443a0516 body=97 status=ok
// SIG undefined FUN_1443a0516(void)

void FUN_1443a0516(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x3f0);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 1000);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + 8 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 1443a0578 FUN_1443a0578 body=405 status=ok
// SIG undefined FUN_1443a0578(void)

ulonglong FUN_1443a0578(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  if (param_2 == 0) {
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x31] + 8))();
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x20))(param_1,0);
        FUN_140056680(&local_48,&DAT_149dfb77a);
        (**(code **)(*(longlong *)param_1[0x31] + 0x10))((longlong *)param_1[0x31],local_60);
        FUN_140adf1ea(&local_58,local_60);
        local_68 = &local_48;
        (**(code **)(*param_1 + 0xa8))(param_1,0,1,local_58);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        uVar5 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        goto LAB_1443a06b5;
      }
    }
    FUN_14020fad6(&local_38,L"Not logged in or no connection.");
    local_40 = (int)uStack_30;
  }
  else {
    FUN_140002266(&local_48,L"Invalid user %d",param_2);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_38 = local_48;
    uStack_30 = CONCAT44(local_3c,local_40);
  }
  if (local_40 < 2) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_14600b90e();
    local_68 = &local_38;
    uVar5 = 0;
    (**(code **)(*param_1 + 0xa8))(param_1,param_2,0,*puVar4);
  }
LAB_1443a06b5:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a070e FUN_1443a070e body=284 status=ok
// SIG undefined FUN_1443a070e(void)

longlong * FUN_1443a070e(longlong param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  longlong local_448;
  undefined8 uStack_440;
  int local_42c;
  undefined1 local_428 [1032];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_478;
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 == 0) && (*(longlong **)(param_1 + 0x188) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))();
    if (cVar1 != '\0') {
      local_42c = 0;
      local_458 = 0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x68))
                        (*(longlong **)(param_1 + 0x188),local_428,0x400,&local_42c);
      if (local_42c != 0 && iVar2 != 0) {
        local_448 = 0;
        uStack_440 = 0;
        FUN_1407c8a86(local_428,local_42c,&local_448);
        if (&local_448 == param_2) {
          if (local_448 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_448;
          local_448 = 0;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_440;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_440._4_4_;
        }
        FUN_14000f986(0x3dcccccd);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a082c FUN_1443a082c body=579 status=ok
// SIG undefined FUN_1443a082c(void)

void FUN_1443a082c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plStack_60 = *(longlong **)(param_2 + 0x10);
  if (plStack_60 == (longlong *)0x0) {
LAB_1443a0850:
    uVar9 = *(undefined8 *)(param_1 + 0x198);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plStack_60[1];
    do {
      if (iVar7 == 0) goto LAB_1443a0850;
      LOCK();
      iVar5 = (int)plStack_60[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plStack_60 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    local_68 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0x198);
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar4 = plStack_60;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_148dbc940(&local_58,param_3);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14ba45b40;
  local_48[3] = local_68;
  local_48[4] = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
    UNLOCK();
  }
  local_48[5] = 0;
  *(undefined4 *)(local_48 + 6) = 0;
  FUN_148dbc940(local_48 + 5,&local_58);
  FUN_145c398c4(uVar9,&local_48);
  if (local_40 == 0) {
LAB_1443a098c:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1443a098c;
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1443a09db;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a09db:
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443a0a70 FUN_1443a0a70 body=2624 status=ok
// SIG undefined FUN_1443a0a70(void)

void FUN_1443a0a70(LARGE_INTEGER param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  void *_Src;
  longlong *plVar4;
  longlong **pplVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  LARGE_INTEGER LVar10;
  longlong lVar11;
  uint uVar12;
  LARGE_INTEGER *pLVar13;
  ushort uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  longlong *local_160;
  LARGE_INTEGER local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 *local_148;
  int local_140;
  longlong *local_138;
  int local_130;
  longlong local_128;
  longlong *local_120;
  LARGE_INTEGER local_118;
  longlong *plStack_110;
  undefined2 *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [4];
  LARGE_INTEGER local_e8;
  longlong **pplStack_e0;
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  LARGE_INTEGER *local_68;
  LARGE_INTEGER *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_100 = (undefined2 *)0x0;
  local_f8 = *(int *)(param_3 + 1);
  lVar18 = (longlong)local_f8;
  _Src = (void *)*param_3;
  if (lVar18 == 0) {
    local_f4 = 0;
LAB_1443a0afc:
    FUN_14020fad6(&local_100,&DAT_14ba42ad4);
    local_178 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemSteam",L"DefaultLinkedAccountAuthTokenType",
                  &local_100);
  }
  else {
    FUN_1446dd670(&local_100,local_f8,0);
    memcpy(local_100,_Src,lVar18 * 2);
    if (local_f8 < 2) goto LAB_1443a0afc;
  }
  puVar7 = local_100;
  if (local_f8 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  lVar18 = 0;
  while( true ) {
    uVar14 = *(ushort *)((longlong)puVar7 + lVar18);
    uVar15 = (ulonglong)uVar14;
    uVar17 = *(ushort *)((longlong)&DAT_14ba42ad4 + lVar18);
    if (uVar14 != uVar17) break;
    if (uVar14 == 0) goto LAB_1443a0cb3;
LAB_1443a0b7e:
    lVar18 = lVar18 + 2;
  }
  if ((uVar17 | uVar14) < 0x80) {
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar16 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar16]) goto LAB_1443a0b7e;
  }
  if (uVar14 != uVar17) {
    lVar18 = 0;
    goto LAB_1443a0bb7;
  }
LAB_1443a0cb3:
  (**(code **)(**(longlong **)(param_1.QuadPart + 0x198) + 0x228))
            (*(longlong **)(param_1.QuadPart + 0x198),&local_118);
  pwVar19 = (wchar_t *)(local_118.QuadPart + 8);
  pplStack_e0 = (longlong **)CONCAT44(pplStack_e0._4_4_,param_2);
  local_d8.QuadPart = 0;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  local_e8 = param_1;
  FUN_148fb9bd4(&local_d8,param_4);
  local_158.QuadPart = 0;
  local_150 = 0;
  FUN_1446efa72(&local_158,0,4,0x10);
  local_150 = 4;
  *(undefined ***)local_158 = &PTR_LAB_14b4edf20;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar18 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar18 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar18;
  *(longlong *)(local_158.QuadPart + 0x10) = lVar11;
  *(undefined ***)local_158 = &PTR_FUN_14ba45bb0;
  ((LARGE_INTEGER *)(local_158.QuadPart + 0x18))->QuadPart = (LONGLONG)local_e8;
  *(undefined4 *)(local_158.QuadPart + 0x20) = pplStack_e0._0_4_;
  ((LARGE_INTEGER *)(local_158.QuadPart + 0x28))->QuadPart = (LONGLONG)local_d8;
  local_d8.QuadPart = 0;
  *(int *)(local_158.QuadPart + 0x30) = (int)uStack_d0;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  FUN_148fb9c58(pwVar19,&local_128,&local_158);
  if (local_150 == 0) {
LAB_1443a0de8:
    if ((wchar_t *)local_158.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((wchar_t *)local_158.QuadPart != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158.QuadPart,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    local_150 = 0;
    goto LAB_1443a0de8;
  }
  if ((int)uStack_d0 == 0) {
LAB_1443a0e32:
    if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_d8)(local_d8.QuadPart,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    goto LAB_1443a0e32;
  }
  plVar4 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1.QuadPart + 0x198) + 0x228))
            (*(longlong **)(param_1.QuadPart + 0x198),&local_e8);
  LVar10 = local_e8;
  if (*(int *)(local_e8.QuadPart + 0x28) != 1) {
    ((wchar_t *)(local_e8.QuadPart + 0x28))[0] = L'\x01';
    ((wchar_t *)(local_e8.QuadPart + 0x28))[1] = L'\0';
    puVar8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    lVar18 = *(longlong *)(LVar10.QuadPart + 0x20);
    QueryPerformanceCounter(&local_158);
    puVar8[1] = (double)local_158.QuadPart * DAT_14c83f420 + 16777216.0;
    *puVar8 = &PTR_LAB_14ba46e30;
    puVar8[2] = lVar18;
    *(undefined4 *)(puVar8 + 3) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    puVar8[4] = 0;
    *puVar8 = &PTR_FUN_14ba44600;
    *(undefined1 *)(puVar8 + 5) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    FUN_1410d2116(*(undefined8 *)(*(longlong *)(LVar10.QuadPart + 0x20) + 0x210),puVar8);
  }
  pplVar5 = pplStack_e0;
  if (pplStack_e0 != (longlong **)0x0) {
    LOCK();
    pplVar3 = pplStack_e0 + 1;
    *(int *)pplVar3 = *(int *)pplVar3 + -1;
    UNLOCK();
    if (*(int *)pplVar3 == 0) {
      (*(code *)**pplStack_e0)(pplStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)pplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pplVar5)[2])(pplVar5);
      }
    }
  }
  goto LAB_1443a0f52;
LAB_1443a0bb7:
  uVar14 = *(ushort *)((longlong)puVar7 + lVar18);
  uVar15 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)L"Session" + lVar18);
  if (uVar14 == uVar17) {
    if (uVar14 == 0) goto LAB_1443a0f92;
LAB_1443a0bd0:
    lVar18 = lVar18 + 2;
    goto LAB_1443a0bb7;
  }
  if ((uVar17 | uVar14) < 0x80) {
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar16 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar16]) goto LAB_1443a0bd0;
  }
  if (uVar14 != uVar17) {
    lVar18 = 6;
    lVar11 = 0;
    goto LAB_1443a0c0f;
  }
LAB_1443a0f92:
  local_e8.QuadPart = 0;
  pplStack_e0 = (longlong **)0x0;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1.QuadPart,&local_158,param_2);
  plVar4 = (longlong *)*param_4;
  local_d8 = local_158;
  uStack_d0 = CONCAT44(local_14c,local_150);
  if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2,1 < local_150,&local_e8);
  }
  LVar10 = local_e8;
  if ((wchar_t *)local_d8.QuadPart != (wchar_t *)0x0) {
LAB_1443a1013:
    FUN_1400020a8(local_d8.QuadPart);
    LVar10 = local_e8;
  }
  goto LAB_1443a1020;
LAB_1443a0c0f:
  uVar14 = *(ushort *)((longlong)puVar7 + lVar11);
  uVar15 = (ulonglong)uVar14;
  uVar17 = *(ushort *)((longlong)&DAT_14ba42adc + lVar11);
  if (uVar14 == uVar17) {
    if (uVar14 == 0) goto LAB_1443a1033;
LAB_1443a0c28:
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) goto LAB_1443a1033;
    lVar11 = lVar11 + 2;
    goto LAB_1443a0c0f;
  }
  if ((uVar17 | uVar14) < 0x80) {
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    uVar16 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar16]) goto LAB_1443a0c28;
  }
  if (uVar14 != uVar17) {
    local_d8.QuadPart = 0;
    uStack_d0 = 0;
    local_e8.QuadPart = 0;
    pplStack_e0 = (longlong **)0x0;
    plVar4 = (longlong *)*param_4;
    LVar10.QuadPart = local_e8.QuadPart;
    if ((plVar4 == (longlong *)0x0 || (int)param_4[1] == 0) ||
       ((**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,&local_e8), LVar10 = local_e8,
       (wchar_t *)local_d8.QuadPart == (wchar_t *)0x0)) goto LAB_1443a1020;
    goto LAB_1443a1013;
  }
LAB_1443a1033:
  if ((*(longlong **)(param_1.QuadPart + 0x188) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_1.QuadPart + 0x188) + 8))(), cVar6 == '\0'))
  goto LAB_1443a0f52;
  local_118.QuadPart = 0;
  plStack_110 = (longlong *)0x0;
  FUN_140056680(&local_e8,&DAT_149e31048);
  local_170 = 0;
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,1);
  cVar6 = FUN_1407cdbc6(&local_100,&local_e8,0,&local_118);
  if ((wchar_t *)local_e8.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
    local_178 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemSteam",L"DefaultRemoteServiceIdentity",&local_118);
  }
  if ((int)plStack_110 < 2) {
    local_d8.QuadPart = 0;
    uStack_d0 = 0;
    local_e8.QuadPart = 0;
    pplStack_e0 = (longlong **)0x0;
    plVar4 = (longlong *)*param_4;
    if ((plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) &&
       ((**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,&local_e8),
       (wchar_t *)local_d8.QuadPart != (wchar_t *)0x0)) {
      FUN_1400020a8();
    }
    LVar10 = local_118;
    if ((wchar_t *)local_e8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
      LVar10 = local_118;
    }
    goto LAB_1443a1020;
  }
  (**(code **)(**(longlong **)(param_1.QuadPart + 0x198) + 0x230))
            (*(longlong **)(param_1.QuadPart + 0x198),&local_128);
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_158 = param_1;
  local_150 = param_2;
  FUN_148fb9bd4(&local_148,param_4);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  FUN_1446efa72(&local_138,0,4,0x10);
  local_130 = 4;
  *local_138 = (longlong)&PTR_LAB_14ba45c90;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar18 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar18 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar18;
  local_138[2] = lVar11;
  *local_138 = (longlong)&PTR_FUN_14ba45c20;
  ((LARGE_INTEGER *)(local_138 + 3))->QuadPart = (LONGLONG)local_158;
  *(int *)(local_138 + 4) = local_150;
  local_138[5] = (longlong)local_148;
  local_148 = (undefined8 *)0x0;
  *(int *)(local_138 + 6) = local_140;
  local_140 = 0;
  if ((*(longlong **)(local_128 + 0xb8) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(local_128 + 0xb8) + 8))(), cVar6 == '\0')) {
    FUN_140056680(&local_e8,&DAT_149dfb77a);
    if ((local_130 != 0) && (local_138 != (longlong *)0x0)) {
      (**(code **)(*local_138 + 0x60))(local_138,0,&local_e8);
    }
    if ((wchar_t *)local_e8.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    LVar10 = local_118;
    if ((int)plStack_110 == 0) {
      LVar10.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    local_160 = *(longlong **)(local_128 + 0xb8);
    local_68 = (LARGE_INTEGER *)0x0;
    if ((wchar_t *)LVar10.QuadPart == (wchar_t *)0x0) {
      local_60 = (LARGE_INTEGER *)0x0;
      local_58 = 0;
    }
    else {
      sVar9 = wcslen((wchar_t *)LVar10);
      local_58 = FUN_14475aa65(0,LVar10.QuadPart,sVar9 & 0xffffffff);
      uVar12 = local_58 + 1;
      pLVar13 = (LARGE_INTEGER *)0x0;
      if (0x80 < uVar12) {
        FUN_1446efa72(&local_68,0,uVar12,1);
        pLVar13 = local_68;
      }
      local_60 = &local_e8;
      if (pLVar13 != (LARGE_INTEGER *)0x0) {
        local_60 = pLVar13;
      }
      FUN_14475a98a(local_60,uVar12,LVar10.QuadPart,(int)sVar9 + 1);
    }
    local_f0 = (**(code **)(*local_160 + 0x70))(local_160,local_60);
    if (local_68 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    local_e8.QuadPart = (LONGLONG)&local_f0;
    pplStack_e0 = &local_138;
    FUN_148fb87ea(local_128 + 0x68,local_ec);
  }
  if (local_130 == 0) {
LAB_1443a12bb:
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_138 != (longlong *)0x0) {
    (**(code **)*local_138)(local_138,0);
    FUN_1446efa72(&local_138,0,0,0x10);
    local_130 = 0;
    goto LAB_1443a12bb;
  }
  if (local_140 == 0) {
LAB_1443a12f7:
    if (local_148 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_148 != (undefined8 *)0x0) {
    (**(code **)*local_148)(local_148,0);
    FUN_1446efa72(&local_148,0,0,0x10);
    local_140 = 0;
    goto LAB_1443a12f7;
  }
  LVar10 = local_118;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_120 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      LVar10 = local_118;
      if (*piVar2 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
        LVar10 = local_118;
      }
    }
  }
LAB_1443a1020:
  if ((wchar_t *)LVar10.QuadPart != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a0f52:
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443a14d4 FUN_1443a14d4 body=3717 status=ok
// SIG undefined FUN_1443a14d4(void)

void FUN_1443a14d4(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong **pplVar12;
  wchar_t **ppwVar13;
  uint uVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  longlong local_210;
  longlong *local_208;
  longlong *local_200;
  uint local_1f4;
  longlong *local_1f0;
  longlong ***local_1e8;
  wchar_t ***local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  uint *local_1c0;
  char local_1b8;
  undefined7 uStack_1b7;
  int local_1b0;
  wchar_t *local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong *plStack_190;
  wchar_t *local_180;
  int local_178;
  wchar_t **local_100;
  wchar_t **local_f8;
  int local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong **local_68;
  longlong **local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((param_1[7] == 0) || (param_1[8] == 0)) {
    if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_238);
    }
  }
  else {
    local_198 = 0;
    plStack_190 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x68))(param_1);
    if (local_198 != 0) {
      (**(code **)(*(longlong *)param_1[7] + 0x160))();
    }
    if (*(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x4c) < 0x1f) {
      plVar15 = (longlong *)(param_3 + 0x18);
      uVar20 = 0;
      iVar6 = DAT_14cb8e478 + -1;
      if (DAT_14cb8e478 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        puVar18 = DAT_14cb8e470;
        if (DAT_14cb8e478 == 0) {
          puVar18 = &DAT_149dfb77a;
        }
        lVar17 = 0;
        uVar20 = 0;
        do {
          uVar14 = ((uint)(0x19 < (ushort)puVar18[lVar17] - 0x61) * 0x20 +
                   (uint)(ushort)puVar18[lVar17]) - 0x20;
          uVar19 = (uint)(uVar20 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar20 ^ uVar14) & 0xff) * 4);
          uVar20 = (ulonglong)
                   (uVar19 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar14 >> 8 & 0xff) * 4));
          lVar17 = lVar17 + 1;
        } while (iVar6 != (int)lVar17);
      }
      local_210 = param_3;
      local_1f0 = plVar15;
      local_1d0 = param_4;
      local_1c8 = param_2;
      iVar6 = FUN_140dfa800(plVar15,uVar20,&DAT_14cb8e470);
      lVar17 = 0;
      if (iVar6 != -1) {
        lVar17 = (longlong)iVar6 * 0x38 + *plVar15;
      }
      if (lVar17 != 0) {
        plVar15 = (longlong *)param_1[7];
        FUN_140b74056(lVar17 + 0x10,&local_1b8);
        puVar18 = &DAT_149dfb77a;
        if (local_1b0 != 0) {
          puVar18 = (undefined2 *)CONCAT71(uStack_1b7,local_1b8);
        }
        FUN_140002266(&local_1a8,&DAT_14b9b5e50,puVar18);
        pwVar16 = L"";
        if ((int)uStack_1a0 != 0) {
          pwVar16 = local_1a8;
        }
        local_68 = (longlong **)0x0;
        if (pwVar16 == (wchar_t *)0x0) {
          local_60 = (longlong **)0x0;
          local_58 = 0;
        }
        else {
          sVar4 = wcslen(pwVar16);
          local_58 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
          uVar14 = local_58 + 1;
          local_60 = (longlong **)0x0;
          if (0x80 < uVar14) {
            FUN_1446efa72(&local_68,0,uVar14,1);
            local_60 = local_68;
          }
          if (local_60 == (longlong **)0x0) {
            local_60 = &local_e8;
          }
          FUN_14475a98a(local_60,uVar14,pwVar16,(int)sVar4 + 1);
        }
        pplVar12 = local_60;
        pwVar16 = DAT_14cbf4d00;
        if (DAT_14cbf4d08 == 0) {
          pwVar16 = L"";
        }
        local_100 = (wchar_t **)0x0;
        if (pwVar16 == (wchar_t *)0x0) {
          local_f8 = (wchar_t **)0x0;
          local_f0 = 0;
        }
        else {
          local_208 = plVar15;
          sVar4 = wcslen(pwVar16);
          local_f0 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
          uVar14 = local_f0 + 1;
          local_f8 = (wchar_t **)0x0;
          if (0x80 < uVar14) {
            FUN_1446efa72(&local_100,0,uVar14,1);
            local_f8 = local_100;
          }
          if (local_f8 == (wchar_t **)0x0) {
            local_f8 = &local_180;
          }
          FUN_14475a98a(local_f8,uVar14,pwVar16,(int)sVar4 + 1);
          plVar15 = local_208;
        }
        cVar3 = (**(code **)(*plVar15 + 0x158))(plVar15,local_f8,pplVar12);
        if (local_100 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (CONCAT71(uStack_1b7,local_1b8) != 0) {
          FUN_1400020a8();
        }
        if ((cVar3 == '\0') && (FUN_140b74056(lVar17 + 0x10,&local_e8), local_e8 != (longlong *)0x0)
           ) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*(longlong *)param_1[8] + 0x20))((longlong *)param_1[8],&local_e8);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_e0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_e0)();
            LOCK();
            piVar1 = (int *)((longlong)local_e0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
          }
        }
      }
      lVar17 = local_210;
      local_1d8 = local_e0;
      if (local_e8 != (longlong *)0x0) {
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        lVar5 = (**(code **)(*local_e8 + 0x20))(local_e8,DAT_14c892fbc);
        if (lVar5 == 0) {
          local_218 = &DAT_14c872ce8;
          FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"DisableAdvancedPresence",&local_1b8)
          ;
        }
        else {
          if (*(char *)(lVar5 + 0x3f) == '\x01') {
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            FUN_148faeaca(local_e8,&local_1a8,DAT_14c892fbc);
            pwVar16 = local_1a8;
            if (1 < (int)uStack_1a0) {
              local_208 = (longlong *)param_1[7];
              local_68 = (longlong **)0x0;
              if (local_1a8 == (wchar_t *)0x0) {
                local_60 = (longlong **)0x0;
                local_58 = 0;
              }
              else {
                sVar4 = wcslen(local_1a8);
                local_58 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
                uVar14 = local_58 + 1;
                pplVar12 = (longlong **)0x0;
                if (0x80 < uVar14) {
                  FUN_1446efa72(&local_68,0,uVar14,1);
                  pplVar12 = local_68;
                }
                local_60 = pplVar12;
                if (pplVar12 == (longlong **)0x0) {
                  local_60 = &local_e8;
                }
                FUN_14475a98a(local_60,uVar14,pwVar16,(int)sVar4 + 1);
                lVar17 = local_210;
              }
              pplVar12 = local_60;
              pwVar16 = DAT_14cbf4cf0;
              if (DAT_14cbf4cf8 == 0) {
                pwVar16 = L"";
              }
              local_100 = (wchar_t **)0x0;
              if (pwVar16 == (wchar_t *)0x0) {
                local_f8 = (wchar_t **)0x0;
                local_f0 = 0;
              }
              else {
                local_200 = param_1;
                sVar4 = wcslen(pwVar16);
                local_f0 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
                uVar14 = local_f0 + 1;
                ppwVar13 = (wchar_t **)0x0;
                if (0x80 < uVar14) {
                  FUN_1446efa72(&local_100,0,uVar14,1);
                  ppwVar13 = local_100;
                }
                local_f8 = ppwVar13;
                if (ppwVar13 == (wchar_t **)0x0) {
                  local_f8 = &local_180;
                }
                FUN_14475a98a(local_f8,uVar14,pwVar16,(int)sVar4 + 1);
                lVar17 = local_210;
                param_1 = local_200;
              }
              (**(code **)(*local_208 + 0x158))(local_208,local_f8,pplVar12);
              if (local_100 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
              if (local_68 != (longlong **)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_1a8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          local_1b8 = '\0';
          local_218 = &DAT_14c872ce8;
          FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"DisableAdvancedPresence");
          if ((*(char *)(lVar5 + 0x3e) == '\x01') && (local_1b8 == '\0')) {
            FUN_141551f14(lVar5,&local_180);
            pwVar16 = local_180;
            if (1 < local_178) {
              plVar15 = (longlong *)param_1[7];
              local_68 = (longlong **)0x0;
              if (local_180 == (wchar_t *)0x0) {
                local_60 = (longlong **)0x0;
                local_58 = 0;
              }
              else {
                sVar4 = wcslen(local_180);
                local_58 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
                uVar14 = local_58 + 1;
                pplVar12 = (longlong **)0x0;
                if (0x80 < uVar14) {
                  FUN_1446efa72(&local_68,0,uVar14,1);
                  pplVar12 = local_68;
                }
                local_60 = pplVar12;
                if (pplVar12 == (longlong **)0x0) {
                  local_60 = &local_e8;
                }
                FUN_14475a98a(local_60,uVar14,pwVar16,(int)sVar4 + 1);
              }
              (**(code **)(*plVar15 + 0x158))(plVar15,"steam_player_group",local_60);
              if (local_68 != (longlong **)0x0) {
                FUN_1400020a8();
              }
            }
            iVar6 = *(int *)(lVar5 + 0x140);
            local_1a8 = (wchar_t *)0x0;
            uStack_1a0 = 0;
            lVar5 = 0xf;
            lVar17 = 0x1000000000;
            iVar7 = 0x10;
            iVar8 = iVar6;
            do {
              lVar17 = lVar17 + -0x100000000;
              *(undefined2 *)((longlong)&local_e8 + lVar5 * 2) =
                   *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar8 % 10) * 2);
              uVar14 = iVar8 + 9;
              lVar5 = lVar5 + -1;
              iVar7 = iVar7 + -1;
              iVar8 = iVar8 / 10;
            } while (0x12 < uVar14);
            if (iVar6 < 0) {
              iVar7 = (int)lVar5;
              lVar17 = (longlong)iVar7;
              *(undefined2 *)((longlong)&local_e8 + lVar17 * 2) = 0x2d;
            }
            else {
              lVar17 = lVar17 >> 0x20;
            }
            FUN_1400020e8(&local_1a8,(longlong)&local_e8 + lVar17 * 2,0x10 - iVar7);
            pwVar16 = local_1a8;
            lVar17 = local_210;
            if (1 < (int)uStack_1a0) {
              plVar15 = (longlong *)param_1[7];
              local_68 = (longlong **)0x0;
              if (local_1a8 == (wchar_t *)0x0) {
                local_60 = (longlong **)0x0;
                local_58 = 0;
              }
              else {
                sVar4 = wcslen(local_1a8);
                local_58 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
                uVar14 = local_58 + 1;
                pplVar12 = (longlong **)0x0;
                if (0x80 < uVar14) {
                  FUN_1446efa72(&local_68,0,uVar14,1);
                  pplVar12 = local_68;
                }
                local_60 = pplVar12;
                if (pplVar12 == (longlong **)0x0) {
                  local_60 = &local_e8;
                }
                FUN_14475a98a(local_60,uVar14,pwVar16,(int)sVar4 + 1);
              }
              lVar17 = local_210;
              (**(code **)(*plVar15 + 0x158))(plVar15,"steam_player_group_size",local_60);
              if (local_68 != (longlong **)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_1a8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_180 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      iVar6 = *(int *)(lVar17 + 0x40);
      if (iVar6 == 0) {
        uVar20 = 1;
        plVar15 = (longlong *)0x0;
        iVar7 = 0;
        iVar8 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar17 + 0x38);
        if (*(uint **)(lVar17 + 0x38) == (uint *)0x0) {
          puVar11 = (uint *)(lVar17 + 0x28);
        }
        uVar14 = *puVar11;
        if (uVar14 == 0) {
          iVar8 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar8 = iVar6 + -1;
          }
          plVar15 = (longlong *)0x0;
          plVar21 = (longlong *)(ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            plVar21 = plVar15;
          }
          iVar7 = 0;
          do {
            if (plVar21 == plVar15) goto LAB_1443a20d8;
            iVar7 = iVar7 + 0x20;
            uVar14 = puVar11[(longlong)plVar15 + 1];
            plVar15 = (longlong *)((longlong)plVar15 + 1);
          } while (uVar14 == 0);
        }
        else {
          plVar15 = (longlong *)0x0;
          iVar7 = 0;
        }
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar20 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar8 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
      }
      if (iVar8 < iVar6) {
        local_1e8 = &local_68;
        local_1e0 = &local_100;
        local_200 = param_1;
        local_1c0 = (uint *)(lVar17 + 0x28);
        uVar14 = 0xffffffff;
        do {
          local_1f4 = uVar14;
          lVar17 = *local_1f0;
          local_208 = plVar15;
          FUN_140b74056(lVar17 + (longlong)iVar8 * 0x38 + 0x10,&local_1a8);
          pwVar16 = L"";
          if ((int)uStack_1a0 != 0) {
            pwVar16 = local_1a8;
          }
          plVar15 = (longlong *)param_1[7];
          local_68 = (longlong **)0x0;
          if (pwVar16 == (wchar_t *)0x0) {
            local_60 = (longlong **)0x0;
            local_58 = 0;
          }
          else {
            sVar4 = wcslen(pwVar16);
            local_58 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
            uVar14 = local_58 + 1;
            pplVar12 = (longlong **)0x0;
            if (0x80 < uVar14) {
              FUN_1446efa72(local_1e8,0,uVar14,1);
              pplVar12 = local_68;
            }
            local_60 = pplVar12;
            if (pplVar12 == (longlong **)0x0) {
              local_60 = &local_e8;
            }
            FUN_14475a98a(local_60,uVar14,pwVar16,(int)sVar4 + 1);
          }
          pplVar12 = local_60;
          plVar21 = (longlong *)(lVar17 + (longlong)iVar8 * 0x38);
          if ((int)plVar21[1] == 0) {
            pwVar16 = L"";
LAB_1443a1f31:
            local_100 = (wchar_t **)0x0;
            sVar4 = wcslen(pwVar16);
            local_f0 = FUN_14475aa65(0,pwVar16,sVar4 & 0xffffffff);
            uVar14 = local_f0 + 1;
            ppwVar13 = (wchar_t **)0x0;
            if (0x80 < uVar14) {
              FUN_1446efa72(local_1e0,0,uVar14,1);
              ppwVar13 = local_100;
            }
            local_f8 = ppwVar13;
            if (ppwVar13 == (wchar_t **)0x0) {
              local_f8 = &local_180;
            }
            FUN_14475a98a(local_f8,uVar14,pwVar16,(int)sVar4 + 1);
          }
          else {
            pwVar16 = (wchar_t *)*plVar21;
            local_100 = (wchar_t **)0x0;
            if (pwVar16 != (wchar_t *)0x0) goto LAB_1443a1f31;
            local_f8 = (wchar_t **)0x0;
            local_f0 = 0;
          }
          (**(code **)(*plVar15 + 0x158))(plVar15,local_f8,pplVar12);
          lVar17 = local_210;
          if (local_100 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_200;
          if (local_68 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          if (local_1a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar14 = local_1f4 & ~(uint)uVar20;
          puVar11 = *(uint **)(lVar17 + 0x38);
          if (puVar11 == (uint *)0x0) {
            puVar11 = local_1c0;
          }
          iVar6 = *(int *)(lVar17 + 0x40);
          iVar8 = (int)local_208;
          lVar17 = (longlong)iVar8;
          uVar19 = puVar11[lVar17] & uVar14;
          plVar15 = local_208;
          if (uVar19 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar8) {
              iVar10 = iVar8;
            }
            if (iVar9 <= iVar8) break;
            lVar5 = 0;
            while( true ) {
              iVar7 = iVar7 + 0x20;
              uVar19 = puVar11[lVar17 + lVar5 + 1];
              if (uVar19 != 0) break;
              lVar5 = lVar5 + 1;
              if (iVar10 - lVar17 == lVar5) goto LAB_1443a20d8;
            }
            plVar15 = (longlong *)(ulonglong)(iVar8 + (int)lVar5 + 1);
            uVar14 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar19 & uVar19);
          uVar2 = uVar20 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        } while (iVar8 < iVar6);
      }
LAB_1443a20d8:
      (**(code **)(*param_1 + 0x20))(param_1,local_1c8,local_1d0);
      plVar15 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar21 = local_1d8 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    else {
      plVar15 = (longlong *)*param_4;
      if (plVar15 != (longlong *)0x0 && (int)param_4[1] != 0) {
        (**(code **)(*plVar15 + 0x60))(plVar15,param_2,0);
      }
    }
    plVar15 = plStack_190;
    if (plStack_190 != (longlong *)0x0) {
      LOCK();
      plVar21 = plStack_190 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plStack_190)(plStack_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a237c FUN_1443a237c body=813 status=ok
// SIG undefined FUN_1443a237c(void)

void FUN_1443a237c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *_Str;
  undefined **ppuVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_3[1] == 1) {
    lVar1 = *param_3;
    if (*(int *)(lVar1 + 0x20) == 1) {
      if (*(int *)(lVar1 + 0x18) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(lVar1 + 0x10);
      }
      iVar2 = _wtoi(_Str);
      plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
      lVar1 = *plVar3;
      plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0 || lVar1 == 0) goto LAB_1443a23ff;
      (**(code **)(*plVar3 + 0xf8))(plVar3,iVar2,0);
      uVar6 = *(undefined8 *)(param_1 + 200);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_148fba690(&local_50,param_4);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_40[2] = lVar5;
      ppuVar4 = &PTR_FUN_14ba45f60;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 200);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_148fba690(&local_50,param_4);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_40[2] = lVar5;
      ppuVar4 = &PTR_FUN_14ba45e50;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 200);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_148fba690(&local_50,param_4);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    *local_40 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_40[2] = lVar5;
    ppuVar4 = &PTR_FUN_14ba45d40;
  }
  local_38 = 3;
  *local_40 = ppuVar4;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0;
  FUN_148fba690(local_40 + 3,&local_50);
  FUN_145c398c4(uVar6,&local_40);
  if (local_38 == 0) {
LAB_1443a260a:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_1443a260a;
  }
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1443a23ff;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a23ff:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a26aa FUN_1443a26aa body=1456 status=ok
// SIG undefined FUN_1443a26aa(void)

void FUN_1443a26aa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_1e8 [32];
  longlong **local_1c8;
  undefined4 local_1c0;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198 [3];
  undefined8 *local_180;
  int local_178;
  undefined1 local_16d;
  undefined4 local_16c;
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined2 *local_138;
  int local_130;
  undefined **local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined2 **local_e8;
  undefined ***local_e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a0 = param_4;
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
  plVar1 = (longlong *)*puVar6;
  iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
  (**(code **)(*param_2 + 0x30))(param_2);
  lVar11 = param_1 + 0x78;
  uVar8 = 0;
  iVar7 = local_130 + -1;
  if (local_130 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    puVar9 = local_138;
    if (local_130 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    lVar12 = 0;
    uVar8 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar9[lVar12] - 0x61) * 0x20 + (uint)(ushort)puVar9[lVar12])
               - 0x20;
      uVar13 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar10) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar13 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar12 = lVar12 + 1;
    } while (iVar7 != (int)lVar12);
  }
  local_1a8 = param_1;
  iVar7 = FUN_145842592(lVar11,uVar8,&local_138);
  if (iVar7 != -1) {
    FUN_1461a92f0(lVar11,&local_138);
  }
  local_168 = &PTR_FUN_14b438d60;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_1b0 = lVar11;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      local_1c0 = 0x80;
      local_1c8 = (longlong **)&local_e8;
      cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,iVar7,&local_16c,&local_16d);
      if (((cVar3 != '\0') &&
          (cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,local_16c), cVar3 != '\0')) &&
         (iVar5 = RmStartSession(0,local_16c,0), iVar5 != 0x9f)) {
        FUN_140002266(&local_180,&DAT_149e25cfc,local_16c);
        local_198[0] = 0;
        local_198[1] = 0;
        FUN_1419050b0(&local_128,local_198,&local_180,1);
        uVar8 = uStack_140;
        lVar11 = (longlong)(int)uStack_140;
        uVar10 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar10);
        if (uStack_140._4_4_ < uVar10) {
          FUN_1465644b8(&local_148,uVar8 & 0xffffffff);
        }
        lVar11 = lVar11 * 0x40;
        *(undefined ***)(local_148 + lVar11) = &PTR_FUN_14b438dd0;
        *(undefined8 *)(local_148 + 8 + lVar11) = 0;
        *(ulonglong *)(local_148 + 8 + lVar11) = uStack_120;
        uStack_120 = 0;
        *(undefined4 *)(local_148 + 0x10 + lVar11) = (undefined4)local_118;
        *(undefined4 *)(local_148 + 0x14 + lVar11) = local_118._4_4_;
        local_118 = 0;
        *(undefined8 *)(local_148 + 0x18 + lVar11) = 0;
        *(longlong *)(local_148 + 0x18 + lVar11) = local_110;
        local_110 = 0;
        *(undefined4 *)(local_148 + 0x20 + lVar11) = (undefined4)local_108;
        *(undefined4 *)(local_148 + 0x24 + lVar11) = local_108._4_4_;
        local_108 = 0;
        *(undefined4 *)(local_148 + 0x28 + lVar11) = local_100;
        *(undefined8 *)(local_148 + 0x30 + lVar11) = 0;
        *(longlong *)(local_148 + 0x30 + lVar11) = local_f8;
        local_f8 = 0;
        *(undefined4 *)(local_148 + 0x38 + lVar11) = (undefined4)local_f0;
        *(undefined4 *)(local_148 + 0x3c + lVar11) = local_f0._4_4_;
        local_f0 = 0;
        local_128 = &PTR_FUN_14b438dd0;
        FUN_141215b86(0,0);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (uStack_120 != 0) {
          FUN_1400020a8();
        }
        if (local_198[0] != 0) {
          FUN_1400020a8();
        }
        if (local_180 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar4 != iVar7);
  }
  local_128 = (undefined **)0x0;
  uStack_120 = 1;
  FUN_14666fb5a(&local_128,0);
  FUN_14584247e(local_128,&local_168);
  local_e8 = &local_138;
  local_e0 = &local_128;
  FUN_145e1c386(local_1b0,&local_180,&local_e8);
  uVar2 = *(undefined8 *)(local_1a8 + 200);
  local_180 = (undefined8 *)0x0;
  local_178 = 0;
  FUN_14666fadc(&local_180,local_1a0);
  local_e8 = (undefined2 **)0x0;
  local_e0 = (undefined ***)((ulonglong)local_e0 & 0xffffffff00000000);
  FUN_1446efa72(&local_e8,0,3,0x10);
  local_e0._0_4_ = 3;
  *local_e8 = (undefined2 *)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  puVar9 = (undefined2 *)(DAT_14c758608 + 1);
  lVar11 = DAT_14c758608 + 1;
  if (puVar9 == (undefined2 *)0x0) {
    LOCK();
    UNLOCK();
    puVar9 = (undefined2 *)(DAT_14c758608 + 2);
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_e8[2] = puVar9;
  *local_e8 = (undefined2 *)&PTR_FUN_14ba460d0;
  local_e8[3] = (undefined2 *)0x0;
  *(undefined4 *)(local_e8 + 4) = 0;
  FUN_14666fadc(local_e8 + 3,&local_180);
  FUN_145c398c4(uVar2,&local_e8);
  if ((int)local_e0 == 0) {
LAB_1443a2b62:
    if (local_e8 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined2 **)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0._0_4_ = 0;
    goto LAB_1443a2b62;
  }
  if (local_178 != 0) {
    if (local_180 == (undefined8 *)0x0) goto LAB_1443a2bb8;
    (**(code **)*local_180)(local_180,0);
    FUN_1446efa72(&local_180,0,0,0x10);
    local_178 = 0;
  }
  if (local_180 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a2bb8:
  FUN_145842369(local_128,uStack_120 & 0xffffffff);
  if (local_128 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_145842390(&local_168);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443a2c5b FUN_1443a2c5b body=1285 status=ok
// SIG undefined FUN_1443a2c5b(void)

undefined8 FUN_1443a2c5b(wchar_t *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  wchar_t *pwVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_988 [40];
  longlong local_960 [2];
  undefined8 local_950 [32];
  undefined8 *local_850;
  undefined8 *local_848;
  int local_840;
  wchar_t local_838 [1023];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_988;
  wcsncpy(local_838,param_1,0x3ff);
  local_3a = 0;
  pwVar1 = wcsrchr(local_838,L'_');
  if (pwVar1 == (wchar_t *)0x0) {
    uVar4 = 0;
    goto switchD_1443a2d07_caseD_63;
  }
  *pwVar1 = L'\0';
  FUN_1446f470e(local_950,local_838,1);
  *param_3 = local_950[0];
  uVar4 = 0;
  switch(pwVar1[1]) {
  case L'b':
    FUN_140c3a2ac(param_4);
    *param_4 = 9;
    param_4[8] = 0;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) {
LAB_1443a3125:
      local_850 = (undefined8 *)0x0;
      local_848 = (undefined8 *)0x0;
      local_840 = 0;
    }
    else {
      sVar2 = strlen(param_2);
      iVar8 = (int)sVar2;
      uVar6 = iVar8 + 1;
      local_840 = iVar8;
      if (uVar6 < 0x81) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        FUN_1446efa72(&local_850,0,uVar6,2);
        puVar3 = local_850;
      }
      puVar7 = local_950;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      local_848 = puVar7;
      if (-1 < iVar8) {
        uVar5 = 0;
        do {
          *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
    }
    break;
  case L'c':
  case L'e':
  case L'g':
  case L'h':
  case L'j':
  case L'k':
    goto switchD_1443a2d07_caseD_63;
  case L'd':
    FUN_140c3a2ac(param_4);
    *param_4 = 5;
    *(undefined8 *)(param_4 + 8) = 0;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) goto LAB_1443a3125;
    sVar2 = strlen(param_2);
    iVar8 = (int)sVar2;
    uVar6 = iVar8 + 1;
    local_840 = iVar8;
    if (uVar6 < 0x81) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_1446efa72(&local_850,0,uVar6,2);
      puVar3 = local_850;
    }
    puVar7 = local_950;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    local_848 = puVar7;
    if (-1 < iVar8) {
      uVar5 = 0;
      do {
        *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    break;
  case L'f':
    FUN_140c3a2ac(param_4);
    *param_4 = 7;
    *(undefined4 *)(param_4 + 8) = 0;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) goto LAB_1443a3125;
    sVar2 = strlen(param_2);
    iVar8 = (int)sVar2;
    uVar6 = iVar8 + 1;
    local_840 = iVar8;
    if (uVar6 < 0x81) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_1446efa72(&local_850,0,uVar6,2);
      puVar3 = local_850;
    }
    puVar7 = local_950;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    local_848 = puVar7;
    if (-1 < iVar8) {
      uVar5 = 0;
      do {
        *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    break;
  case L'i':
    FUN_140c3a2ac(param_4);
    *param_4 = 1;
    *(undefined4 *)(param_4 + 8) = 0;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) goto LAB_1443a3125;
    sVar2 = strlen(param_2);
    iVar8 = (int)sVar2;
    uVar6 = iVar8 + 1;
    local_840 = iVar8;
    if (uVar6 < 0x81) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_1446efa72(&local_850,0,uVar6,2);
      puVar3 = local_850;
    }
    puVar7 = local_950;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    local_848 = puVar7;
    if (-1 < iVar8) {
      uVar5 = 0;
      do {
        *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    break;
  case L'l':
    FUN_140c3a2ac(param_4);
    *param_4 = 4;
    *(undefined8 *)(param_4 + 8) = 0;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) goto LAB_1443a3125;
    sVar2 = strlen(param_2);
    iVar8 = (int)sVar2;
    uVar6 = iVar8 + 1;
    local_840 = iVar8;
    if (uVar6 < 0x81) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      FUN_1446efa72(&local_850,0,uVar6,2);
      puVar3 = local_850;
    }
    puVar7 = local_950;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
    local_848 = puVar7;
    if (-1 < iVar8) {
      uVar5 = 0;
      do {
        *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    break;
  default:
    if (pwVar1[1] != L's') goto switchD_1443a2d07_caseD_63;
    local_850 = (undefined8 *)0x0;
    if (param_2 == (char *)0x0) {
      local_848 = (undefined8 *)0x0;
      local_840 = 0;
    }
    else {
      sVar2 = strlen(param_2);
      iVar8 = (int)sVar2;
      uVar6 = iVar8 + 1;
      local_840 = iVar8;
      if (uVar6 < 0x81) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        FUN_1446efa72(&local_850,0,uVar6,2);
        puVar3 = local_850;
      }
      puVar7 = local_950;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      local_848 = puVar7;
      if (-1 < iVar8) {
        uVar5 = 0;
        do {
          *(short *)((longlong)puVar7 + uVar5 * 2) = (short)param_2[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
    }
    FUN_140c3a228(param_4,local_848);
    goto LAB_1443a3015;
  }
  FUN_140056680(local_960,local_848);
  FUN_1418b4cfe(param_4,local_960);
  if (local_960[0] != 0) {
    FUN_1400020a8();
  }
LAB_1443a3015:
  if (local_850 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
switchD_1443a2d07_caseD_63:
  if ((local_38 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1443a3161 FUN_1443a3161 body=227 status=ok
// SIG undefined FUN_1443a3161(void)

void FUN_1443a3161(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  plVar1 = (longlong *)*puVar4;
  iVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x18));
  iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0x18));
  if (0 < iVar3) {
    *(int *)(param_2 + 0x114) = iVar3 - iVar2;
    (**(code **)(*plVar1 + 0x118))(plVar1,&local_48,*(undefined8 *)(param_1 + 0x18));
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar4 + 0x10))((longlong *)*puVar4,&local_50);
    if (local_48 == local_50) {
      (**(code **)(*plVar1 + 0x110))
                (plVar1,*(undefined8 *)(param_1 + 0x18),iVar2 < iVar3 & *(byte *)(param_2 + 0x39));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a3246 FUN_1443a3246 body=2168 status=ok
// SIG undefined FUN_1443a3246(void)

void FUN_1443a3246(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  size_t sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong **pplVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStack_248 [40];
  longlong *local_220;
  int local_214;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong ***local_1e8;
  undefined1 **local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [128];
  undefined1 *local_148;
  undefined1 *local_140;
  int local_138;
  longlong *local_130;
  longlong *local_128;
  longlong **local_b0;
  longlong **local_a8;
  int local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_130);
  plVar19 = local_128;
  plVar3 = local_130;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_128 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_1 + 0x2c));
    goto LAB_1443a3a47;
  }
  lVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if (lVar6 == 0) goto LAB_1443a3a47;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  local_1f0 = (longlong *)*puVar7;
  FUN_141904fbe(&local_1d8,param_1 + 0x48);
  lVar17 = local_1d8;
  plVar8 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ba461b0;
  plVar8[2] = (longlong)&PTR_FUN_14ba43820;
  *(undefined4 *)(plVar8 + 3) = 1;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  FUN_140df9946(lVar17,plVar8 + 8);
  *(undefined1 *)(plVar8 + 10) = 0;
  plVar8[4] = 0;
  plVar22 = (longlong *)plVar8[5];
  if (plVar22 != (longlong *)0x0) {
    plVar8[5] = 0;
    LOCK();
    plVar2 = plVar22 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,local_1c8);
  FUN_140adf1ea(&local_130,local_1c8);
  local_220 = (longlong *)FUN_14001cc68(0x30,0x10);
  local_220[1] = (longlong)&DAT_100000001;
  *local_220 = (longlong)&PTR_FUN_14ba461d0;
  plVar22 = local_220 + 2;
  local_220[2] = (longlong)&PTR_FUN_14ba46fd0;
  local_220[3] = (longlong)local_130;
  local_220[4] = (longlong)local_128;
  if (local_128 == (longlong *)0x0) {
    *(undefined4 *)(local_220 + 5) = 0;
  }
  else {
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
    *(undefined4 *)(local_220 + 5) = 0;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_128 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
  }
  (**(code **)(local_220[2] + 0x28))(plVar22,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xe0));
  if (local_220 == (longlong *)0x0) {
    plVar8[6] = (longlong)plVar22;
    plVar22 = (longlong *)plVar8[7];
    if (plVar22 != (longlong *)0x0) {
      plVar8[7] = 0;
LAB_1443a34c7:
      LOCK();
      plVar2 = plVar22 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar22)(plVar22);
LAB_1443a34ec:
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_220 + 1) = (int)local_220[1] + 1;
    UNLOCK();
    plVar8[6] = (longlong)plVar22;
    plVar22 = (longlong *)plVar8[7];
    if (local_220 == plVar22) {
      LOCK();
      plVar22 = local_220 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_220)(local_220);
        plVar22 = local_220;
        goto LAB_1443a34ec;
      }
    }
    else {
      plVar8[7] = (longlong)local_220;
      if (plVar22 != (longlong *)0x0) goto LAB_1443a34c7;
    }
  }
  local_200 = plVar19;
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(lVar6 + 0x100) = 0x10;
    plVar19 = *(longlong **)(lVar6 + 0x108);
    if (plVar19 != (longlong *)0x0) {
      *(undefined8 *)(lVar6 + 0x108) = 0;
LAB_1443a354f:
      LOCK();
      plVar22 = plVar19 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar21 = *piVar1;
        UNLOCK();
joined_r0x0001443a357f:
        if (iVar21 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(lVar6 + 0x100) = plVar8 + 2;
    plVar19 = *(longlong **)(lVar6 + 0x108);
    if (plVar8 == plVar19) {
      LOCK();
      plVar19 = plVar8 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar21 = *piVar1;
        UNLOCK();
        plVar19 = plVar8;
        goto joined_r0x0001443a357f;
      }
    }
    else {
      *(longlong **)(lVar6 + 0x108) = plVar8;
      if (plVar19 != (longlong *)0x0) goto LAB_1443a354f;
    }
  }
  *(undefined4 *)(lVar6 + 0x148) = 2;
  uVar18 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1443a3abf();
  local_208 = plVar3;
  local_210 = plVar8;
  local_1f8 = param_1;
  if (local_70 == 0) {
    uVar24 = 1;
    iVar21 = 0;
    iVar10 = 0;
  }
  else {
    puVar14 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar23 = *puVar14;
    if (uVar23 == 0) {
      iVar21 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar21 = local_70 + -1;
      }
      uVar18 = 0;
      uVar24 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar24 = uVar18;
      }
      iVar21 = 0;
      do {
        if (uVar24 == uVar18) goto LAB_1443a3967;
        iVar21 = iVar21 + 0x20;
        uVar23 = puVar14[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar18 = 0;
      iVar21 = 0;
    }
    uVar24 = (ulonglong)(-uVar23 & uVar23);
    uVar4 = uVar24 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = (iVar21 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar10) {
      iVar10 = local_70;
    }
  }
  if (iVar10 < local_70) {
    local_1e8 = &local_b0;
    local_1e0 = &local_148;
    uVar23 = 0xffffffff;
    do {
      lVar6 = (longlong)iVar10;
      local_214 = iVar21;
      if (*(int *)(local_98[0] + 0x18 + lVar6 * 0x28) == 0) {
        pwVar20 = L"";
LAB_1443a36fe:
        local_b0 = (longlong **)0x0;
        sVar9 = wcslen(pwVar20);
        local_a0 = FUN_14475aa65(0,pwVar20,sVar9 & 0xffffffff);
        uVar11 = local_a0 + 1;
        pplVar15 = (longlong **)0x0;
        if (0x80 < uVar11) {
          FUN_1446efa72(local_1e8,0,uVar11,1);
          pplVar15 = local_b0;
        }
        local_a8 = pplVar15;
        if (pplVar15 == (longlong **)0x0) {
          local_a8 = &local_130;
        }
        FUN_14475a98a(local_a8,uVar11,pwVar20,(int)sVar9 + 1);
      }
      else {
        pwVar20 = *(wchar_t **)(local_98[0] + 0x10 + lVar6 * 0x28);
        local_b0 = (longlong **)0x0;
        if (pwVar20 != (wchar_t *)0x0) goto LAB_1443a36fe;
        local_a8 = (longlong **)0x0;
        local_a0 = 0;
      }
      pplVar15 = local_a8;
      if (*(int *)(local_98[0] + 8 + lVar6 * 0x28) == 0) {
        pwVar20 = L"";
LAB_1443a37b7:
        local_148 = (undefined1 *)0x0;
        sVar9 = wcslen(pwVar20);
        local_138 = FUN_14475aa65(0,pwVar20,sVar9 & 0xffffffff);
        uVar11 = local_138 + 1;
        puVar16 = (undefined1 *)0x0;
        if (0x80 < uVar11) {
          FUN_1446efa72(local_1e0,0,uVar11,1);
          puVar16 = local_148;
        }
        local_140 = puVar16;
        if (puVar16 == (undefined1 *)0x0) {
          local_140 = local_1c8;
        }
        FUN_14475a98a(local_140,uVar11,pwVar20,(int)sVar9 + 1);
      }
      else {
        pwVar20 = *(wchar_t **)(local_98[0] + lVar6 * 0x28);
        local_148 = (undefined1 *)0x0;
        if (pwVar20 != (wchar_t *)0x0) goto LAB_1443a37b7;
        local_140 = (undefined1 *)0x0;
        local_138 = 0;
      }
      cVar5 = (**(code **)(*local_1f0 + 0xa0))
                        (local_1f0,*(undefined8 *)(local_1d8 + 0x18),local_140,pplVar15);
      if (local_148 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (cVar5 == '\0') {
        LOCK();
        *(undefined4 *)(local_1f8 + 0x1c) = 0;
        UNLOCK();
        break;
      }
      uVar23 = uVar23 & ~(uint)uVar24;
      puVar14 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar14 = local_88;
      }
      iVar10 = (int)uVar18;
      lVar6 = (longlong)iVar10;
      uVar11 = puVar14[lVar6] & uVar23;
      iVar21 = local_214;
      if (uVar11 == 0) {
        iVar12 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar12 = local_70 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) break;
        lVar17 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar11 = puVar14[lVar6 + lVar17 + 1];
          if (uVar11 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar13 - lVar6 == lVar17) goto LAB_1443a3967;
        }
        uVar18 = (ulonglong)(iVar10 + (int)lVar17 + 1);
        uVar23 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar11 & uVar11);
      uVar4 = uVar24 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar10 = (iVar21 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar10 < local_70);
  }
LAB_1443a3967:
  lVar6 = local_1f8;
  plVar19 = local_208;
  if (*(int *)(local_1f8 + 0x1c) == 0) {
    LOCK();
    *(undefined4 *)(local_1f8 + 0x1c) = 0;
    UNLOCK();
    (**(code **)(*local_1f0 + 0x78))(local_1f0,*(undefined8 *)(local_1d8 + 0x18));
    (**(code **)(*local_208 + 0x28))(local_208,*(undefined8 *)(lVar6 + 0x2c));
  }
  else {
    FUN_145fda490(local_208,local_1d8);
    FUN_148faf2ce(plVar19);
  }
  plVar19 = local_200;
  plVar3 = local_210;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_98);
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_220 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))();
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar3 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1d0 + 0x10))(local_1d0);
      }
    }
  }
LAB_1443a3a47:
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar19 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443a3abf FUN_1443a3abf body=3847 status=ok
// SIG undefined FUN_1443a3abf(void)

void FUN_1443a3abf(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong **pplVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  undefined2 *puVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong lVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0 [2];
  int local_8c;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong **local_68;
  longlong **local_60;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar23 = *(longlong **)(param_1 + 8);
  local_a8 = *(longlong **)(param_1 + 0x10);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  local_b0 = param_2;
  if (plVar23 != (longlong *)0x0) {
    (**(code **)(*plVar23 + 0x30))(plVar23,&local_78);
    FUN_1400b22c2(&local_88,"OWNINGID");
    local_68 = &local_88;
    local_60 = &local_78;
    FUN_1411f1c38(param_2,local_a0,&local_68,0);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar18 = local_b0;
  FUN_1400b22c2(&local_78,"OWNINGNAME");
  local_68 = &local_78;
  local_60 = (longlong **)(param_1 + 0x18);
  FUN_1413216f2(uVar18,&local_88,&local_68,0);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar32 = 0x1000000000;
  iVar33 = *(int *)(param_1 + 0x110);
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  lVar29 = 0xf;
  iVar21 = 0x10;
  lVar27 = 0x1000000000;
  iVar22 = iVar33;
  do {
    *(undefined2 *)((longlong)&local_68 + lVar29 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar22 % 10) * 2);
    uVar34 = iVar22 + 9;
    lVar29 = lVar29 + -1;
    lVar27 = lVar27 + -0x100000000;
    iVar21 = iVar21 + -1;
    iVar22 = iVar22 / 10;
  } while (0x12 < uVar34);
  if (iVar33 < 0) {
    iVar21 = (int)lVar29;
    lVar27 = (longlong)iVar21;
    *(undefined2 *)((longlong)&local_68 + lVar27 * 2) = 0x2d;
  }
  else {
    lVar27 = lVar27 >> 0x20;
  }
  FUN_1400020e8(&local_78,(longlong)&local_68 + lVar27 * 2,0x10 - iVar21);
  FUN_1400b22c2(&local_88,"NUMOPENPRIVCONN");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar33 = *(int *)(param_1 + 0x114);
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  lVar29 = 0xf;
  iVar21 = 0x10;
  lVar27 = 0x1000000000;
  iVar22 = iVar33;
  do {
    *(undefined2 *)((longlong)&local_68 + lVar29 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar22 % 10) * 2);
    uVar34 = iVar22 + 9;
    lVar29 = lVar29 + -1;
    lVar27 = lVar27 + -0x100000000;
    iVar21 = iVar21 + -1;
    iVar22 = iVar22 / 10;
  } while (0x12 < uVar34);
  if (iVar33 < 0) {
    iVar21 = (int)lVar29;
    lVar27 = (longlong)iVar21;
    *(undefined2 *)((longlong)&local_68 + lVar27 * 2) = 0x2d;
  }
  else {
    lVar27 = lVar27 >> 0x20;
  }
  FUN_1400020e8(&local_78,(longlong)&local_68 + lVar27 * 2,0x10 - iVar21);
  FUN_1400b22c2(&local_88,"NUMOPENPUBCONN");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar27 = *(longlong *)(param_1 + 0x100);
  if (lVar27 != 0) {
    local_b8 = *(longlong **)(param_1 + 0x108);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    plVar23 = *(longlong **)(lVar27 + 0x10);
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23,&local_8c);
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      lVar30 = 0xf;
      iVar22 = 0x10;
      lVar29 = 0x1000000000;
      iVar33 = local_8c;
      do {
        *(undefined2 *)((longlong)&local_68 + lVar30 * 2) =
             *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar33 % 10) * 2);
        uVar34 = iVar33 + 9;
        lVar30 = lVar30 + -1;
        lVar29 = lVar29 + -0x100000000;
        iVar22 = iVar22 + -1;
        iVar33 = iVar33 / 10;
      } while (0x12 < uVar34);
      if (local_8c < 0) {
        iVar22 = (int)lVar30;
        lVar29 = (longlong)iVar22;
        *(undefined2 *)((longlong)&local_68 + lVar29 * 2) = 0x2d;
      }
      else {
        lVar29 = lVar29 >> 0x20;
      }
      FUN_1400020e8(&local_78,(longlong)&local_68 + lVar29 * 2,0x10 - iVar22);
      FUN_1400b22c2(&local_88,"HOSTIP");
      local_68 = &local_88;
      local_60 = &local_78;
      FUN_1411f1c38(uVar18,local_a0,&local_68,0);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar22 = (**(code **)(**(longlong **)(lVar27 + 0x10) + 0x38))();
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      lVar30 = 0xf;
      iVar21 = 0x10;
      lVar29 = 0x1000000000;
      iVar33 = iVar22;
      do {
        *(undefined2 *)((longlong)&local_68 + lVar30 * 2) =
             *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar33 % 10) * 2);
        uVar34 = iVar33 + 9;
        lVar30 = lVar30 + -1;
        lVar29 = lVar29 + -0x100000000;
        iVar21 = iVar21 + -1;
        iVar33 = iVar33 / 10;
      } while (0x12 < uVar34);
      if (iVar22 < 0) {
        iVar21 = (int)lVar30;
        lVar29 = (longlong)iVar21;
        *(undefined2 *)((longlong)&local_68 + lVar29 * 2) = 0x2d;
      }
      else {
        lVar29 = lVar29 >> 0x20;
      }
      FUN_1400020e8(&local_78,(longlong)&local_68 + lVar29 * 2,0x10 - iVar21);
      FUN_1400b22c2(&local_88,"HOSTPORT");
      local_68 = &local_88;
      local_60 = &local_78;
      FUN_1411f1c38(uVar18,local_a0,&local_68,0);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(&local_88,&DAT_14ba43958);
    plVar23 = local_88;
    if (local_80 == 0) {
      plVar23 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_78,&DAT_149e0625e,plVar23);
    FUN_1400b22c2(local_a0,"CONMETHOD");
    local_68 = local_a0;
    local_60 = &local_78;
    FUN_1411f1c38(uVar18,&local_8c,&local_68,0);
    if (local_a0[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar23 = *(longlong **)(lVar27 + 0x20);
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x80))(plVar23,&local_78,0);
      FUN_1400b22c2(&local_88,&DAT_14ba42dd9);
      local_68 = &local_88;
      local_60 = &local_78;
      FUN_1411f1c38(uVar18,local_a0,&local_68,0);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar22 = (**(code **)(**(longlong **)(lVar27 + 0x20) + 0x38))();
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
      lVar29 = 0xf;
      iVar21 = 0x10;
      lVar27 = 0x1000000000;
      iVar33 = iVar22;
      do {
        *(undefined2 *)((longlong)&local_68 + lVar29 * 2) =
             *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar33 % 10) * 2);
        uVar34 = iVar33 + 9;
        lVar29 = lVar29 + -1;
        lVar27 = lVar27 + -0x100000000;
        iVar21 = iVar21 + -1;
        iVar33 = iVar33 / 10;
      } while (0x12 < uVar34);
      if (iVar22 < 0) {
        iVar21 = (int)lVar29;
        lVar27 = (longlong)iVar21;
        *(undefined2 *)((longlong)&local_68 + lVar27 * 2) = 0x2d;
      }
      else {
        lVar27 = lVar27 >> 0x20;
      }
      FUN_1400020e8(&local_78,(longlong)&local_68 + lVar27 * 2,0x10 - iVar21);
      FUN_1400b22c2(&local_88,&DAT_14ba42de1);
      local_68 = &local_88;
      local_60 = &local_78;
      FUN_1411f1c38(uVar18,local_a0,&local_68,0);
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar23 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  plVar23 = (longlong *)FUN_1401e3228(&DAT_14cb8e468);
  if (plVar23 != (longlong *)0x0) {
    (**(code **)(*plVar23 + 0x240))(plVar23,&local_68);
    if (local_68 == (longlong **)0x0) {
      cVar20 = '\0';
    }
    else {
      (**(code **)(*plVar23 + 0x240))(plVar23,&local_78);
      cVar20 = (**(code **)(*local_78 + 8))();
      plVar1 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    pplVar19 = local_60;
    if (local_60 != (longlong **)0x0) {
      LOCK();
      pplVar4 = local_60 + 1;
      *(int *)pplVar4 = *(int *)pplVar4 + -1;
      UNLOCK();
      if (*(int *)pplVar4 == 0) {
        (*(code *)**pplVar19)(pplVar19);
        LOCK();
        piVar2 = (int *)((longlong)pplVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar19)[2])(pplVar19);
        }
      }
    }
    if (cVar20 != '\0') {
      (**(code **)(*plVar23 + 0x240))(plVar23,&local_68);
      (*(code *)(*local_68)[2])(local_68,&local_78);
      pplVar19 = local_60;
      if (local_60 != (longlong **)0x0) {
        LOCK();
        pplVar4 = local_60 + 1;
        *(int *)pplVar4 = *(int *)pplVar4 + -1;
        UNLOCK();
        if (*(int *)pplVar4 == 0) {
          (*(code *)**pplVar19)(pplVar19);
          LOCK();
          piVar2 = (int *)((longlong)pplVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar19)[2])(pplVar19);
          }
        }
      }
      if (1 < (int)plStack_70) {
        FUN_1400b22c2(&local_88,"P2PPING");
        local_68 = &local_88;
        local_60 = &local_78;
        FUN_1413216f2(uVar18,local_a0,&local_68,0);
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  uVar18 = local_b0;
  bVar7 = *(byte *)(param_1 + 0x38);
  bVar8 = *(byte *)(param_1 + 0x39);
  bVar9 = *(byte *)(param_1 + 0x3a);
  bVar10 = *(byte *)(param_1 + 0x3b);
  bVar11 = *(byte *)(param_1 + 0x3c);
  bVar12 = *(byte *)(param_1 + 0x3d);
  bVar13 = *(byte *)(param_1 + 0x3e);
  bVar14 = *(byte *)(param_1 + 0x3f);
  bVar15 = *(byte *)(param_1 + 0x40);
  bVar16 = *(byte *)(param_1 + 0x41);
  uVar34 = (uint)*(byte *)(param_1 + 0x42) << 10;
  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar34);
  iVar33 = *(int *)(param_1 + 0x30);
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  lVar29 = 0xf;
  iVar21 = 0x10;
  lVar27 = 0x1000000000;
  iVar22 = iVar33;
  do {
    *(undefined2 *)((longlong)&local_68 + lVar29 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar22 % 10) * 2);
    uVar35 = iVar22 + 9;
    lVar29 = lVar29 + -1;
    lVar27 = lVar27 + -0x100000000;
    iVar21 = iVar21 + -1;
    iVar22 = iVar22 / 10;
  } while (0x12 < uVar35);
  if (iVar33 < 0) {
    iVar21 = (int)lVar29;
    lVar27 = (longlong)iVar21;
    *(undefined2 *)((longlong)&local_68 + lVar27 * 2) = 0x2d;
  }
  else {
    lVar27 = lVar27 >> 0x20;
  }
  FUN_1400020e8(&local_78,(longlong)&local_68 + lVar27 * 2,0x10 - iVar21);
  FUN_1400b22c2(&local_88,"NUMPUBCONN");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar33 = *(int *)(param_1 + 0x34);
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  lVar29 = 0xf;
  iVar21 = 0x10;
  lVar27 = 0x1000000000;
  iVar22 = iVar33;
  do {
    *(undefined2 *)((longlong)&local_68 + lVar29 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar22 % 10) * 2);
    uVar35 = iVar22 + 9;
    lVar29 = lVar29 + -1;
    lVar27 = lVar27 + -0x100000000;
    iVar21 = iVar21 + -1;
    iVar22 = iVar22 / 10;
  } while (0x12 < uVar35);
  if (iVar33 < 0) {
    iVar21 = (int)lVar29;
    lVar27 = (longlong)iVar21;
    *(undefined2 *)((longlong)&local_68 + lVar27 * 2) = 0x2d;
  }
  else {
    lVar27 = lVar27 >> 0x20;
  }
  FUN_1400020e8(&local_78,(longlong)&local_68 + lVar27 * 2,0x10 - iVar21);
  FUN_1400b22c2(&local_88,"NUMPRIVCONN");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  iVar33 = 0;
  puVar24 = &local_4a;
  lVar27 = 0x1000000000;
  uVar34 = (uint)bVar15 << 8 |
           (uint)bVar14 << 7 | (uint)bVar13 << 6 |
           (uint)bVar12 << 5 |
           (uint)bVar11 << 4 | (uint)bVar7 + (uint)bVar8 * 2 + (uint)bVar9 * 4 + (uint)bVar10 * 8 |
           (uint)bVar16 << 9 | uVar34;
  do {
    *puVar24 = *(undefined2 *)(&DAT_149e01586 + (ulonglong)(uVar34 % 10) * 2);
    lVar27 = lVar27 + -0x100000000;
    iVar33 = iVar33 + 1;
    puVar24 = puVar24 + -1;
    bVar17 = 9 < uVar34;
    uVar34 = uVar34 / 10;
  } while (bVar17);
  FUN_1400020e8(&local_78,(longlong)&local_68 + (lVar27 >> 0x1f),iVar33);
  FUN_1400b22c2(&local_88,"SESSIONFLAGS");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar33 = *(int *)(param_1 + 0x58);
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  lVar27 = 0xf;
  iVar21 = 0x10;
  iVar22 = iVar33;
  do {
    *(undefined2 *)((longlong)&local_68 + lVar27 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar22 % 10) * 2);
    uVar34 = iVar22 + 9;
    lVar27 = lVar27 + -1;
    lVar32 = lVar32 + -0x100000000;
    iVar21 = iVar21 + -1;
    iVar22 = iVar22 / 10;
  } while (0x12 < uVar34);
  if (iVar33 < 0) {
    iVar21 = (int)lVar27;
    lVar32 = (longlong)iVar21;
    *(undefined2 *)((longlong)&local_68 + lVar32 * 2) = 0x2d;
  }
  else {
    lVar32 = lVar32 >> 0x20;
  }
  FUN_1400020e8(&local_78,(longlong)&local_68 + lVar32 * 2,0x10 - iVar21);
  FUN_1400b22c2(&local_88,"BUILDID");
  local_68 = &local_88;
  local_60 = &local_78;
  FUN_1411f1c38(uVar18,local_a0,&local_68,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  iVar33 = *(int *)(param_1 + 0x88);
  if (iVar33 == 0) {
    uVar36 = 1;
    uVar37 = 0;
    iVar21 = 0;
    iVar22 = 0;
  }
  else {
    puVar28 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar28 = (uint *)(param_1 + 0x70);
    }
    uVar34 = *puVar28;
    if (uVar34 == 0) {
      iVar22 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar22 = iVar33 + -1;
      }
      uVar37 = 0;
      uVar36 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar36 = uVar37;
      }
      iVar21 = 0;
      do {
        if (uVar36 == uVar37) goto LAB_1443a48dc;
        iVar21 = iVar21 + 0x20;
        uVar34 = puVar28[uVar37 + 1];
        uVar37 = uVar37 + 1;
      } while (uVar34 == 0);
    }
    else {
      uVar37 = 0;
      iVar21 = 0;
    }
    uVar36 = (ulonglong)(-uVar34 & uVar34);
    uVar6 = uVar36 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar22 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar22) {
      iVar22 = iVar33;
    }
  }
  if (iVar22 < iVar33) {
    uVar34 = 0xffffffff;
    do {
      if (1 < *(byte *)(*(longlong *)(param_1 + 0x60) + 0x28 + (longlong)iVar22 * 0x38)) {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar22 * 0x38);
        puVar31 = puVar5 + 1;
        cVar20 = FUN_14666e7ae(*puVar5,puVar31,&local_78);
        if (cVar20 != '\0') {
          FUN_140b74056(puVar31,&local_88);
          if (1 < local_80) {
            local_68 = &local_78;
            local_60 = &local_88;
            FUN_140ac5c08(local_b0,local_a0,&local_68,0);
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      uVar34 = uVar34 & ~(uint)uVar36;
      puVar28 = *(uint **)(param_1 + 0x80);
      if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
        puVar28 = (uint *)(param_1 + 0x70);
      }
      iVar33 = *(int *)(param_1 + 0x88);
      iVar22 = (int)uVar37;
      lVar27 = (longlong)iVar22;
      uVar35 = puVar28[lVar27] & uVar34;
      if (uVar35 == 0) {
        iVar25 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar25 = iVar33 + -1;
        }
        iVar25 = iVar25 >> 5;
        iVar26 = iVar25;
        if (iVar25 < iVar22) {
          iVar26 = iVar22;
        }
        if (iVar25 <= iVar22) break;
        lVar29 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar35 = puVar28[lVar27 + lVar29 + 1];
          if (uVar35 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar26 - lVar27 == lVar29) goto LAB_1443a48cd;
        }
        uVar37 = (ulonglong)(iVar22 + (int)lVar29 + 1);
        uVar34 = 0xffffffff;
      }
      uVar36 = (ulonglong)(-uVar35 & uVar35);
      uVar6 = uVar36 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar22 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar22 < iVar33);
LAB_1443a48cd:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443a48dc:
  plVar23 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a49c8 FUN_1443a49c8 body=2517 status=ok
// SIG undefined FUN_1443a49c8(void)

ulonglong FUN_1443a49c8(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  size_t sVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  wchar_t *pwVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_288 [44];
  uint local_25c;
  longlong local_258;
  ulonglong local_250;
  int local_244;
  longlong *local_240;
  undefined1 **local_238;
  undefined1 **local_230;
  longlong *local_228;
  longlong *local_220;
  undefined1 local_218 [128];
  undefined1 *local_198;
  undefined1 *local_190;
  int local_188;
  undefined1 local_180 [128];
  undefined1 *local_100;
  undefined1 *local_f8;
  int local_f0;
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  LOCK();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_228);
  if ((local_228 != (longlong *)0x0) &&
     (lVar12 = (**(code **)(*local_228 + 0x20))(local_228,*(undefined8 *)(param_1 + 0x28)),
     lVar12 != 0)) {
    lVar21 = *(longlong *)(lVar12 + 0x100);
    plVar4 = *(longlong **)(lVar12 + 0x108);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar21 != 0) {
      uVar3 = *(undefined1 *)(lVar12 + 0x3e);
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_258 = lVar21;
      FUN_1443a3abf(lVar12);
      *(undefined4 *)(lVar12 + 0x40) = *(undefined4 *)(param_1 + 0x48);
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      uVar8 = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(lVar12 + 0x34) = uVar6;
      *(undefined4 *)(lVar12 + 0x38) = uVar7;
      *(undefined4 *)(lVar12 + 0x3c) = uVar8;
      puVar13 = (undefined8 *)(lVar12 + 0x48);
      if (puVar13 != (undefined8 *)(param_1 + 0x50)) {
        iVar10 = *(int *)(param_1 + 0x58);
        _Src = *(void **)(param_1 + 0x50);
        *(int *)(lVar12 + 0x50) = iVar10;
        if (iVar10 == 0 && *(int *)(lVar12 + 0x54) == 0) {
          *(undefined4 *)(lVar12 + 0x54) = 0;
        }
        else {
          FUN_1446dd670(puVar13,iVar10);
          if (iVar10 != 0) {
            memcpy((void *)*puVar13,_Src,(longlong)iVar10 * 2);
          }
        }
      }
      *(undefined4 *)(lVar12 + 0x58) = *(undefined4 *)(param_1 + 0x60);
      FUN_1412c5fc6(lVar12 + 0x60,param_1 + 0x68);
      FUN_1412c6060(lVar12 + 0xb0,param_1 + 0xb8);
      *(undefined1 *)(lVar12 + 0x3e) = uVar3;
      if (*(char *)(param_1 + 0x108) == '\x01') {
        puVar13 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
        lVar21 = local_258;
        plVar5 = (longlong *)*puVar13;
        uVar23 = 3;
        if ((((*(char *)(lVar12 + 0x3a) == '\0') && (*(char *)(lVar12 + 0x38) == '\x01')) &&
            (uVar23 = 1, *(char *)(lVar12 + 0x40) == '\0')) &&
           ((*(char *)(lVar12 + 0x3d) != '\x01' || (uVar23 = 0, *(char *)(lVar12 + 0x3f) == '\x01'))
           )) {
          uVar23 = 2;
        }
        cVar9 = (**(code **)(*plVar5 + 0x108))
                          (plVar5,*(undefined8 *)(*(longlong *)(local_258 + 0x30) + 0x18),uVar23);
        if (cVar9 != '\0') {
          iVar10 = (**(code **)(*plVar5 + 0x88))
                             (plVar5,*(undefined8 *)(*(longlong *)(lVar21 + 0x30) + 0x18));
          cVar9 = (**(code **)(*plVar5 + 0xf8))
                            (plVar5,*(undefined8 *)(*(longlong *)(lVar21 + 0x30) + 0x18),
                             *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x34));
          if (cVar9 != '\0') {
            iVar11 = (**(code **)(*plVar5 + 0x100))
                               (plVar5,*(undefined8 *)(*(longlong *)(lVar21 + 0x30) + 0x18));
            cVar9 = (**(code **)(*plVar5 + 0x110))
                              (plVar5,*(undefined8 *)(*(longlong *)(lVar21 + 0x30) + 0x18),
                               iVar11 != 0 & iVar10 < iVar11 & *(byte *)(lVar12 + 0x39));
            if (cVar9 != '\0') {
              LOCK();
              *(undefined4 *)(param_1 + 0x1c) = 1;
              UNLOCK();
              uVar22 = 1;
              uVar26 = 0;
              local_c8 = (uint *)0x0;
              local_c0 = 0;
              local_e8[0] = 0;
              local_e8[1] = 0;
              local_bc = 0xffffffff00000080;
              local_b4 = 0;
              local_a8 = 0;
              local_a0 = 0;
              local_240 = plVar5;
              FUN_1443a3abf(lVar12);
              iVar11 = 0;
              iVar10 = 0;
              if (local_70 != 0) {
                puVar18 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar18 = local_88;
                }
                uVar25 = *puVar18;
                if (uVar25 == 0) {
                  iVar10 = local_70 + 0x1e;
                  if (-1 < local_70 + -1) {
                    iVar10 = local_70 + -1;
                  }
                  uVar26 = 0;
                  uVar22 = (ulonglong)(uint)(iVar10 >> 5);
                  if (iVar10 >> 5 < 1) {
                    uVar22 = uVar26;
                  }
                  iVar11 = 0;
                  do {
                    if (uVar22 == uVar26) goto LAB_1443a4ef8;
                    iVar11 = iVar11 + 0x20;
                    uVar25 = puVar18[uVar26 + 1];
                    uVar26 = uVar26 + 1;
                  } while (uVar25 == 0);
                }
                else {
                  uVar26 = 0;
                }
                uVar22 = (ulonglong)(-uVar25 & uVar25);
                uVar2 = uVar22 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if (local_70 <= iVar10) {
                  iVar10 = local_70;
                }
              }
              if (iVar10 < local_70) {
                uVar25 = 0xffffffff;
                do {
                  if (*(int *)(local_98[0] + 8 + (longlong)iVar10 * 0x28) == 0) {
                    pwVar24 = L"";
LAB_1443a4d62:
                    local_100 = (undefined1 *)0x0;
                    local_250 = CONCAT44(local_250._4_4_,uVar25);
                    sVar14 = wcslen(pwVar24);
                    local_f0 = FUN_14475aa65(0,pwVar24,sVar14 & 0xffffffff);
                    uVar25 = local_f0 + 1;
                    puVar19 = (undefined1 *)0x0;
                    if (0x80 < uVar25) {
                      FUN_1446efa72(&local_100,0,uVar25,1);
                      puVar19 = local_100;
                    }
                    local_f8 = puVar19;
                    if (puVar19 == (undefined1 *)0x0) {
                      local_f8 = local_180;
                    }
                    FUN_14475a98a(local_f8,uVar25,pwVar24,(int)sVar14 + 1);
                    uVar25 = (uint)local_250;
                  }
                  else {
                    pwVar24 = *(wchar_t **)(local_98[0] + (longlong)iVar10 * 0x28);
                    local_100 = (undefined1 *)0x0;
                    if (pwVar24 != (wchar_t *)0x0) goto LAB_1443a4d62;
                    local_f8 = (undefined1 *)0x0;
                    local_f0 = 0;
                  }
                  cVar9 = (**(code **)(*local_240 + 0xa0))
                                    (local_240,
                                     *(undefined8 *)(*(longlong *)(local_258 + 0x30) + 0x18),
                                     local_f8,&DAT_149e02088);
                  if (local_100 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (cVar9 == '\0') {
                    LOCK();
                    *(undefined4 *)(param_1 + 0x1c) = 0;
                    UNLOCK();
                    break;
                  }
                  uVar25 = uVar25 & ~(uint)uVar22;
                  puVar18 = local_78;
                  if (local_78 == (uint *)0x0) {
                    puVar18 = local_88;
                  }
                  iVar10 = (int)uVar26;
                  lVar12 = (longlong)iVar10;
                  uVar15 = puVar18[lVar12] & uVar25;
                  if (uVar15 == 0) {
                    iVar16 = local_70 + 0x1e;
                    if (-1 < local_70 + -1) {
                      iVar16 = local_70 + -1;
                    }
                    iVar16 = iVar16 >> 5;
                    iVar17 = iVar16;
                    if (iVar16 < iVar10) {
                      iVar17 = iVar10;
                    }
                    if (iVar16 <= iVar10) break;
                    lVar21 = 0;
                    while( true ) {
                      iVar11 = iVar11 + 0x20;
                      uVar15 = puVar18[lVar12 + lVar21 + 1];
                      if (uVar15 != 0) break;
                      lVar21 = lVar21 + 1;
                      if (iVar17 - lVar12 == lVar21) goto LAB_1443a4ef8;
                    }
                    uVar26 = (ulonglong)(iVar10 + (int)lVar21 + 1);
                    uVar25 = 0xffffffff;
                  }
                  uVar22 = (ulonglong)(-uVar15 & uVar15);
                  uVar2 = uVar22 * 2 + 1;
                  lVar12 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                    }
                  }
                  iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                } while (iVar10 < local_70);
              }
LAB_1443a4ef8:
              if (*(int *)(param_1 + 0x1c) != 0) {
                if (local_c0 == 0) {
                  uVar26 = 1;
                  uVar22 = 0;
                  iVar10 = 0;
                  iVar11 = 0;
                }
                else {
                  puVar18 = local_c8;
                  if (local_c8 == (uint *)0x0) {
                    puVar18 = local_d8;
                  }
                  uVar25 = *puVar18;
                  if (uVar25 == 0) {
                    iVar10 = local_c0 + 0x1e;
                    if (-1 < local_c0 + -1) {
                      iVar10 = local_c0 + -1;
                    }
                    uVar22 = 0;
                    uVar26 = (ulonglong)(uint)(iVar10 >> 5);
                    if (iVar10 >> 5 < 1) {
                      uVar26 = uVar22;
                    }
                    iVar10 = 0;
                    do {
                      if (uVar26 == uVar22) goto LAB_1443a52b5;
                      iVar10 = iVar10 + 0x20;
                      uVar25 = puVar18[uVar22 + 1];
                      uVar22 = uVar22 + 1;
                    } while (uVar25 == 0);
                  }
                  else {
                    uVar22 = 0;
                    iVar10 = 0;
                  }
                  uVar26 = (ulonglong)(-uVar25 & uVar25);
                  uVar2 = uVar26 * 2 + 1;
                  lVar12 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                    }
                  }
                  iVar11 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                  if (local_c0 <= iVar11) {
                    iVar11 = local_c0;
                  }
                }
                if (iVar11 < local_c0) {
                  local_238 = &local_100;
                  local_230 = &local_198;
                  local_25c = 0xffffffff;
                  do {
                    lVar12 = (longlong)iVar11;
                    local_250 = uVar22;
                    local_244 = iVar10;
                    if (*(int *)(local_e8[0] + 0x18 + lVar12 * 0x28) == 0) {
                      pwVar24 = L"";
LAB_1443a5033:
                      local_100 = (undefined1 *)0x0;
                      sVar14 = wcslen(pwVar24);
                      local_f0 = FUN_14475aa65(0,pwVar24,sVar14 & 0xffffffff);
                      uVar25 = local_f0 + 1;
                      puVar19 = (undefined1 *)0x0;
                      if (0x80 < uVar25) {
                        FUN_1446efa72(local_238,0,uVar25,1);
                        puVar19 = local_100;
                      }
                      local_f8 = puVar19;
                      if (puVar19 == (undefined1 *)0x0) {
                        local_f8 = local_180;
                      }
                      FUN_14475a98a(local_f8,uVar25,pwVar24,(int)sVar14 + 1);
                    }
                    else {
                      pwVar24 = *(wchar_t **)(local_e8[0] + 0x10 + lVar12 * 0x28);
                      local_100 = (undefined1 *)0x0;
                      if (pwVar24 != (wchar_t *)0x0) goto LAB_1443a5033;
                      local_f8 = (undefined1 *)0x0;
                      local_f0 = 0;
                    }
                    puVar19 = local_f8;
                    if (*(int *)(local_e8[0] + 8 + lVar12 * 0x28) == 0) {
                      pwVar24 = L"";
LAB_1443a50f3:
                      local_198 = (undefined1 *)0x0;
                      sVar14 = wcslen(pwVar24);
                      local_188 = FUN_14475aa65(0,pwVar24,sVar14 & 0xffffffff);
                      uVar25 = local_188 + 1;
                      puVar20 = (undefined1 *)0x0;
                      if (0x80 < uVar25) {
                        FUN_1446efa72(local_230,0,uVar25,1);
                        puVar20 = local_198;
                      }
                      local_190 = puVar20;
                      if (puVar20 == (undefined1 *)0x0) {
                        local_190 = local_218;
                      }
                      FUN_14475a98a(local_190,uVar25,pwVar24,(int)sVar14 + 1);
                    }
                    else {
                      pwVar24 = *(wchar_t **)(local_e8[0] + lVar12 * 0x28);
                      local_198 = (undefined1 *)0x0;
                      if (pwVar24 != (wchar_t *)0x0) goto LAB_1443a50f3;
                      local_190 = (undefined1 *)0x0;
                      local_188 = 0;
                    }
                    cVar9 = (**(code **)(*local_240 + 0xa0))
                                      (local_240,
                                       *(undefined8 *)(*(longlong *)(local_258 + 0x30) + 0x18),
                                       local_190,puVar19);
                    uVar22 = local_250;
                    if (local_198 != (undefined1 *)0x0) {
                      FUN_1400020a8();
                    }
                    iVar10 = local_244;
                    if (local_100 != (undefined1 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (cVar9 == '\0') {
                      LOCK();
                      *(undefined4 *)(param_1 + 0x1c) = 0;
                      UNLOCK();
                      break;
                    }
                    uVar25 = local_25c & ~(uint)uVar26;
                    puVar18 = local_c8;
                    if (local_c8 == (uint *)0x0) {
                      puVar18 = local_d8;
                    }
                    iVar11 = (int)uVar22;
                    lVar12 = (longlong)iVar11;
                    uVar15 = puVar18[lVar12] & uVar25;
                    if (uVar15 == 0) {
                      iVar16 = local_c0 + 0x1e;
                      if (-1 < local_c0 + -1) {
                        iVar16 = local_c0 + -1;
                      }
                      iVar16 = iVar16 >> 5;
                      iVar17 = iVar16;
                      if (iVar16 < iVar11) {
                        iVar17 = iVar11;
                      }
                      if (iVar16 <= iVar11) break;
                      lVar21 = 0;
                      while( true ) {
                        iVar10 = iVar10 + 0x20;
                        uVar15 = puVar18[lVar12 + lVar21 + 1];
                        if (uVar15 != 0) break;
                        lVar21 = lVar21 + 1;
                        if (iVar17 - lVar12 == lVar21) goto LAB_1443a52b5;
                      }
                      uVar22 = (ulonglong)(iVar11 + (int)lVar21 + 1);
                      local_25c = 0xffffffff;
                      uVar25 = local_25c;
                    }
                    local_25c = uVar25;
                    uVar26 = (ulonglong)(-uVar15 & uVar15);
                    uVar2 = uVar26 * 2 + 1;
                    lVar12 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                      }
                    }
                    iVar11 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                  } while (iVar11 < local_c0);
                }
              }
LAB_1443a52b5:
              local_a0 = 0;
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              FUN_1407a3a68(local_e8);
            }
          }
        }
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 0x1c) = 1;
        UNLOCK();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1407a3a68(local_98);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  LOCK();
  uVar25 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = 1;
  uVar22 = (ulonglong)uVar25;
  UNLOCK();
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_220 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      uVar22 = (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar22 = (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a539e FUN_1443a539e body=250 status=ok
// SIG undefined FUN_1443a539e(void)

void FUN_1443a539e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_38 != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
    lVar3 = (**(code **)(*local_38 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x2c));
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x148) = 2;
      FUN_145fda490(local_38,*(undefined8 *)(param_1 + 0x38));
      FUN_148faf2ce(local_38);
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*local_38 + 0x28))(local_38,*(undefined8 *)(param_1 + 0x2c));
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a549a FUN_1443a549a body=4379 status=ok
// SIG undefined FUN_1443a549a(void)

void FUN_1443a549a(longlong param_1)

{
  wchar_t wVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  longlong lVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_248 [32];
  wchar_t *local_228;
  undefined4 local_21c;
  wchar_t *local_218;
  longlong *local_210;
  wchar_t **local_208;
  longlong local_200;
  wchar_t ***local_1f8;
  uint *local_1f0;
  wchar_t *local_1e8;
  undefined8 uStack_1e0;
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  wchar_t **local_1a0;
  uint local_194;
  wchar_t *local_190 [16];
  wchar_t **local_110;
  wchar_t **local_108;
  uint local_100;
  wchar_t local_f8 [64];
  wchar_t *local_78;
  wchar_t *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x1c)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
  }
  uVar16 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))(*(longlong **)(param_1 + 0x28),1);
  lVar3 = *(longlong *)(param_1 + 0x30);
  iVar19 = *(int *)(lVar3 + 0x50);
  local_200 = param_1;
  if (iVar19 == 0) {
    uVar17 = 0;
    iVar18 = 0;
    iVar6 = 0;
  }
  else {
    puVar10 = *(uint **)(lVar3 + 0x48);
    if (*(uint **)(lVar3 + 0x48) == (uint *)0x0) {
      puVar10 = (uint *)(lVar3 + 0x38);
    }
    uVar24 = *puVar10;
    if (uVar24 == 0) {
      iVar6 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar6 = iVar19 + -1;
      }
      uVar17 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar16 == uVar17) goto LAB_1443a6577;
        iVar18 = iVar18 + 0x20;
        uVar24 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar16 = (ulonglong)(-uVar24 & uVar24);
    uVar15 = uVar16 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar6 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar6) {
      iVar6 = iVar19;
    }
  }
  if (iVar19 <= iVar6) {
LAB_1443a6577:
    if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_208 = &local_78;
  local_1f8 = &local_110;
  uVar24 = 0xffffffff;
  local_1f0 = (uint *)(lVar3 + 0x38);
LAB_1443a55b8:
  lVar21 = *(longlong *)(lVar3 + 0x28);
  lVar14 = *(longlong *)(lVar21 + (longlong)iVar6 * 0x38);
  FUN_1446f470e(&local_1a8,L"DEDICATEDONLY",1);
  if ((((lVar14 != local_1a8) && (FUN_1446f470e(&local_1b0,L"MAPNAME",1), lVar14 != local_1b0)) &&
      (FUN_1446f470e(&local_1b8,L"EMPTYONLY",1), lVar14 != local_1b8)) &&
     (((FUN_1446f470e(&local_1c0,L"SECUREONLY",1), lVar14 != local_1c0 && (lVar14 != DAT_14cbf4d10))
      && (FUN_1446f470e(&local_1c8,L"LOBBYSEARCH",1), lVar14 != local_1c8)))) {
    lVar21 = lVar21 + (longlong)iVar6 * 0x38;
    pcVar22 = (char *)(lVar21 + 8);
    local_1d8 = (wchar_t *)0x0;
    uStack_1d0 = 0;
    cVar4 = FUN_14666e7ae(lVar14,pcVar22);
    if (cVar4 != '\0') {
      iVar19 = *(int *)(lVar21 + 0x28);
      cVar4 = *pcVar22;
      if (iVar19 == 6) {
        if (cVar4 == '\x01') {
          pwVar13 = L"";
          if ((int)uStack_1d0 != 0) {
            pwVar13 = local_1d8;
          }
          local_78 = (wchar_t *)0x0;
          if (pwVar13 == (wchar_t *)0x0) {
            local_70 = (wchar_t *)0x0;
            local_68 = 0;
            plVar11 = *(longlong **)(local_200 + 0x28);
            uVar20 = *(undefined4 *)(lVar21 + 0x10);
          }
          else {
            local_21c = *(undefined4 *)(lVar21 + 0x10);
            local_210 = *(longlong **)(local_200 + 0x28);
            sVar5 = wcslen(pwVar13);
            local_1e8 = (wchar_t *)((ulonglong)local_1e8 & 0xffffffff00000000);
            local_190[0] = (wchar_t *)CONCAT44(local_190[0]._4_4_,0x7fffffff);
            uVar15 = sVar5 & 0xffffffff;
            local_228 = pwVar13;
            do {
              iVar19 = (int)uVar15;
              if (iVar19 < 1) {
LAB_1443a5c38:
                local_68 = (int)local_1e8;
                uVar7 = (int)local_1e8 + 1;
                if (uVar7 < 0x81) goto LAB_1443a5c55;
                FUN_1446efa72(local_208,0,uVar7,1);
                local_190[0] = local_78;
                goto LAB_1443a5c57;
              }
              wVar1 = *pwVar13;
              uVar7 = (uint)(ushort)wVar1;
              pwVar12 = pwVar13 + 1;
              uVar23 = iVar19 - 1;
              if ((wVar1 & 0xfc00U) == 0xd800) {
                if (iVar19 == 1) {
                  cVar4 = FUN_140024707(uVar7,&local_1e8,local_190);
                  if (cVar4 != '\0') goto LAB_1443a5c38;
                  break;
                }
                if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                  uVar23 = iVar19 - 2;
                  pwVar12 = pwVar13 + 2;
                }
              }
              pwVar13 = pwVar12;
              cVar4 = FUN_140024707(uVar7,&local_1e8,local_190);
              uVar15 = (ulonglong)uVar23;
            } while (cVar4 != '\0');
            local_68 = -1;
            uVar7 = 0;
LAB_1443a5c55:
            local_190[0] = (wchar_t *)0x0;
LAB_1443a5c57:
            if (local_190[0] == (wchar_t *)0x0) {
              local_190[0] = local_f8;
            }
            iVar19 = (int)sVar5 + 1;
            local_1e8 = (wchar_t *)CONCAT44(local_1e8._4_4_,uVar7);
            pwVar13 = local_228;
            local_70 = local_190[0];
            do {
              plVar11 = local_210;
              uVar20 = local_21c;
              if (iVar19 < 1) break;
              wVar1 = *pwVar13;
              uVar7 = (uint)(ushort)wVar1;
              pwVar12 = pwVar13 + 1;
              iVar6 = iVar19 + -1;
              if ((wVar1 & 0xfc00U) == 0xd800) {
                if (iVar19 == 1) {
                  FUN_1400247af(uVar7,local_190,&local_1e8);
                  plVar11 = local_210;
                  uVar20 = local_21c;
                  break;
                }
                if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                  pwVar12 = pwVar13 + 2;
                  iVar6 = iVar19 + -2;
                }
              }
              iVar19 = iVar6;
              pwVar13 = pwVar12;
              cVar4 = FUN_1400247af(uVar7,local_190,&local_1e8);
              plVar11 = local_210;
              uVar20 = local_21c;
            } while (cVar4 != '\0');
          }
          (**(code **)(*plVar11 + 0x38))(plVar11,local_70,uVar20);
          pwVar13 = local_78;
          goto LAB_1443a6555;
        }
        goto LAB_1443a655f;
      }
      if (cVar4 == '\a') {
        local_21c = 0;
        if (iVar19 - 1U < 5) {
          local_21c = *(undefined4 *)(&DAT_14ba470d8 + (ulonglong)(iVar19 - 1U) * 4);
        }
        local_210 = *(longlong **)(local_200 + 0x28);
        FUN_140b74056(pcVar22,&local_1e8);
        pwVar13 = L"";
        if ((int)uStack_1e0 != 0) {
          pwVar13 = local_1e8;
        }
        local_78 = (wchar_t *)0x0;
        if (pwVar13 == (wchar_t *)0x0) {
          local_70 = (wchar_t *)0x0;
          local_68 = 0;
        }
        else {
          sVar5 = wcslen(pwVar13);
          local_1a0 = (wchar_t **)((ulonglong)local_1a0 & 0xffffffff00000000);
          local_190[0] = (wchar_t *)CONCAT44(local_190[0]._4_4_,0x7fffffff);
          uVar15 = sVar5 & 0xffffffff;
          local_228 = pwVar13;
          do {
            iVar19 = (int)uVar15;
            if (iVar19 < 1) {
LAB_1443a5e83:
              local_68 = (int)local_1a0;
              uVar7 = (int)local_1a0 + 1;
              if (uVar7 < 0x81) goto LAB_1443a5ea3;
              FUN_1446efa72(local_208,0,uVar7,1);
              local_190[0] = local_78;
              goto LAB_1443a5ea5;
            }
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            uVar23 = iVar19 - 1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                cVar4 = FUN_140024707(uVar7,&local_1a0,local_190);
                if (cVar4 != '\0') goto LAB_1443a5e83;
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                uVar23 = iVar19 - 2;
                pwVar12 = pwVar13 + 2;
              }
            }
            pwVar13 = pwVar12;
            cVar4 = FUN_140024707(uVar7,&local_1a0,local_190);
            uVar15 = (ulonglong)uVar23;
          } while (cVar4 != '\0');
          local_68 = -1;
          uVar7 = 0;
LAB_1443a5ea3:
          local_190[0] = (wchar_t *)0x0;
LAB_1443a5ea5:
          if (local_190[0] == (wchar_t *)0x0) {
            local_190[0] = local_f8;
          }
          iVar19 = (int)sVar5 + 1;
          local_1a0 = (wchar_t **)CONCAT44(local_1a0._4_4_,uVar7);
          pwVar13 = local_228;
          local_70 = local_190[0];
          do {
            if (iVar19 < 1) break;
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            iVar6 = iVar19 + -1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                FUN_1400247af(uVar7,local_190,&local_1a0);
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                pwVar12 = pwVar13 + 2;
                iVar6 = iVar19 + -2;
              }
            }
            iVar19 = iVar6;
            pwVar13 = pwVar12;
            cVar4 = FUN_1400247af(uVar7,local_190,&local_1a0);
          } while (cVar4 != '\0');
        }
        pwVar13 = L"";
        if ((int)uStack_1d0 != 0) {
          pwVar13 = local_1d8;
        }
        local_110 = (wchar_t **)0x0;
        if (pwVar13 == (wchar_t *)0x0) {
LAB_1443a63c6:
          local_110 = (wchar_t **)0x0;
          local_108 = (wchar_t **)0x0;
          local_100 = 0;
          pwVar12 = local_70;
        }
        else {
          local_228 = local_70;
          sVar5 = wcslen(pwVar13);
          local_194 = 0;
          local_1a0 = (wchar_t **)CONCAT44(local_1a0._4_4_,0x7fffffff);
          uVar15 = sVar5 & 0xffffffff;
          local_218 = pwVar13;
          do {
            iVar19 = (int)uVar15;
            if (iVar19 < 1) {
LAB_1443a60ce:
              local_100 = local_194;
              uVar7 = local_194 + 1;
              if (uVar7 < 0x81) goto LAB_1443a60ee;
              FUN_1446efa72(local_1f8,0,uVar7,1);
              local_1a0 = local_110;
              goto LAB_1443a60f0;
            }
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            uVar23 = iVar19 - 1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                cVar4 = FUN_140024707(uVar7,&local_194,&local_1a0);
                if (cVar4 != '\0') goto LAB_1443a60ce;
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                uVar23 = iVar19 - 2;
                pwVar12 = pwVar13 + 2;
              }
            }
            pwVar13 = pwVar12;
            cVar4 = FUN_140024707(uVar7,&local_194,&local_1a0);
            uVar15 = (ulonglong)uVar23;
          } while (cVar4 != '\0');
          local_100 = 0xffffffff;
          uVar7 = 0;
LAB_1443a60ee:
          local_1a0 = (wchar_t **)0x0;
LAB_1443a60f0:
          if (local_1a0 == (wchar_t **)0x0) {
            local_1a0 = local_190;
          }
          iVar19 = (int)sVar5 + 1;
          pwVar13 = local_218;
          local_194 = uVar7;
          local_108 = local_1a0;
          do {
            pwVar12 = local_228;
            if (iVar19 < 1) break;
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            iVar6 = iVar19 + -1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) goto LAB_1443a64f8;
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                pwVar12 = pwVar13 + 2;
                iVar6 = iVar19 + -2;
              }
            }
            iVar19 = iVar6;
            pwVar13 = pwVar12;
            cVar4 = FUN_1400247af(uVar7,&local_1a0,&local_194);
            pwVar12 = local_228;
          } while (cVar4 != '\0');
        }
        goto LAB_1443a651c;
      }
      if (cVar4 == '\x06') {
        local_1e8 = (wchar_t *)0x0;
        uStack_1e0 = 0;
        FUN_140b74118(pcVar22,&local_1e8);
        pwVar13 = local_1e8;
        if (1 < (int)uStack_1e0) {
          uVar7 = *(int *)(lVar21 + 0x28) - 1;
          local_21c = 0;
          if (uVar7 < 5) {
            local_21c = *(undefined4 *)(&DAT_14ba470d8 + (ulonglong)uVar7 * 4);
          }
          local_210 = *(longlong **)(local_200 + 0x28);
          local_78 = (wchar_t *)0x0;
          if (local_1e8 == (wchar_t *)0x0) {
            local_70 = (wchar_t *)0x0;
            local_68 = 0;
          }
          else {
            sVar5 = wcslen(local_1e8);
            local_1a0 = (wchar_t **)((ulonglong)local_1a0 & 0xffffffff00000000);
            local_190[0] = (wchar_t *)CONCAT44(local_190[0]._4_4_,0x7fffffff);
            uVar15 = sVar5 & 0xffffffff;
            local_228 = pwVar13;
            do {
              iVar19 = (int)uVar15;
              if (iVar19 < 1) {
LAB_1443a61e9:
                local_68 = (int)local_1a0;
                uVar7 = (int)local_1a0 + 1;
                if (uVar7 < 0x81) goto LAB_1443a6209;
                FUN_1446efa72(local_208,0,uVar7,1);
                local_190[0] = local_78;
                goto LAB_1443a620b;
              }
              wVar1 = *pwVar13;
              uVar7 = (uint)(ushort)wVar1;
              pwVar12 = pwVar13 + 1;
              uVar23 = iVar19 - 1;
              if ((wVar1 & 0xfc00U) == 0xd800) {
                if (iVar19 == 1) {
                  cVar4 = FUN_140024707(uVar7,&local_1a0,local_190);
                  if (cVar4 != '\0') goto LAB_1443a61e9;
                  break;
                }
                if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                  uVar23 = iVar19 - 2;
                  pwVar12 = pwVar13 + 2;
                }
              }
              pwVar13 = pwVar12;
              cVar4 = FUN_140024707(uVar7,&local_1a0,local_190);
              uVar15 = (ulonglong)uVar23;
            } while (cVar4 != '\0');
            local_68 = -1;
            uVar7 = 0;
LAB_1443a6209:
            local_190[0] = (wchar_t *)0x0;
LAB_1443a620b:
            if (local_190[0] == (wchar_t *)0x0) {
              local_190[0] = local_f8;
            }
            iVar19 = (int)sVar5 + 1;
            local_1a0 = (wchar_t **)CONCAT44(local_1a0._4_4_,uVar7);
            pwVar13 = local_228;
            local_70 = local_190[0];
            do {
              if (iVar19 < 1) break;
              wVar1 = *pwVar13;
              uVar7 = (uint)(ushort)wVar1;
              pwVar12 = pwVar13 + 1;
              iVar6 = iVar19 + -1;
              if ((wVar1 & 0xfc00U) == 0xd800) {
                if (iVar19 == 1) {
                  FUN_1400247af(uVar7,local_190,&local_1a0);
                  break;
                }
                if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                  pwVar12 = pwVar13 + 2;
                  iVar6 = iVar19 + -2;
                }
              }
              iVar19 = iVar6;
              pwVar13 = pwVar12;
              cVar4 = FUN_1400247af(uVar7,local_190,&local_1a0);
            } while (cVar4 != '\0');
          }
          pwVar13 = L"";
          if ((int)uStack_1d0 != 0) {
            pwVar13 = local_1d8;
          }
          local_110 = (wchar_t **)0x0;
          if (pwVar13 == (wchar_t *)0x0) goto LAB_1443a63c6;
          local_228 = local_70;
          sVar5 = wcslen(pwVar13);
          local_194 = 0;
          local_1a0 = (wchar_t **)CONCAT44(local_1a0._4_4_,0x7fffffff);
          uVar15 = sVar5 & 0xffffffff;
          local_218 = pwVar13;
          do {
            iVar19 = (int)uVar15;
            if (iVar19 < 1) {
LAB_1443a640d:
              local_100 = local_194;
              uVar7 = local_194 + 1;
              if (uVar7 < 0x81) goto LAB_1443a642d;
              FUN_1446efa72(local_1f8,0,uVar7,1);
              local_1a0 = local_110;
              goto LAB_1443a642f;
            }
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            uVar23 = iVar19 - 1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                cVar4 = FUN_140024707(uVar7,&local_194,&local_1a0);
                if (cVar4 != '\0') goto LAB_1443a640d;
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                uVar23 = iVar19 - 2;
                pwVar12 = pwVar13 + 2;
              }
            }
            pwVar13 = pwVar12;
            cVar4 = FUN_140024707(uVar7,&local_194,&local_1a0);
            uVar15 = (ulonglong)uVar23;
          } while (cVar4 != '\0');
          local_100 = 0xffffffff;
          uVar7 = 0;
LAB_1443a642d:
          local_1a0 = (wchar_t **)0x0;
LAB_1443a642f:
          if (local_1a0 == (wchar_t **)0x0) {
            local_1a0 = local_190;
          }
          iVar19 = (int)sVar5 + 1;
          pwVar13 = local_218;
          local_194 = uVar7;
          local_108 = local_1a0;
          do {
            pwVar12 = local_228;
            if (iVar19 < 1) break;
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            iVar6 = iVar19 + -1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) goto LAB_1443a64f8;
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                pwVar12 = pwVar13 + 2;
                iVar6 = iVar19 + -2;
              }
            }
            iVar19 = iVar6;
            pwVar13 = pwVar12;
            cVar4 = FUN_1400247af(uVar7,&local_1a0,&local_194);
            pwVar12 = local_228;
          } while (cVar4 != '\0');
          goto LAB_1443a651c;
        }
      }
      else {
        if (cVar4 != '\x01') goto LAB_1443a655f;
        uVar20 = 0;
        if (iVar19 - 1U < 5) {
          uVar20 = *(undefined4 *)(&DAT_14ba470d8 + (ulonglong)(iVar19 - 1U) * 4);
        }
        pwVar13 = L"";
        if ((int)uStack_1d0 != 0) {
          pwVar13 = local_1d8;
        }
        uVar2 = *(undefined4 *)(lVar21 + 0x10);
        pwVar12 = *(wchar_t **)(local_200 + 0x28);
        local_78 = (wchar_t *)0x0;
        if (pwVar13 == (wchar_t *)0x0) {
          local_70 = (wchar_t *)0x0;
          local_68 = 0;
        }
        else {
          local_210 = (longlong *)CONCAT44(local_210._4_4_,uVar2);
          local_228 = pwVar12;
          local_21c = uVar20;
          sVar5 = wcslen(pwVar13);
          local_1e8 = (wchar_t *)((ulonglong)local_1e8 & 0xffffffff00000000);
          local_190[0] = (wchar_t *)CONCAT44(local_190[0]._4_4_,0x7fffffff);
          uVar15 = sVar5 & 0xffffffff;
          local_218 = pwVar13;
          do {
            iVar19 = (int)uVar15;
            if (iVar19 < 1) {
LAB_1443a5d71:
              local_68 = (int)local_1e8;
              uVar7 = (int)local_1e8 + 1;
              if (uVar7 < 0x81) goto LAB_1443a5d8e;
              FUN_1446efa72(local_208,0,uVar7,1);
              local_190[0] = local_78;
              goto LAB_1443a5d90;
            }
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            uVar23 = iVar19 - 1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                cVar4 = FUN_140024707(uVar7,&local_1e8,local_190);
                if (cVar4 != '\0') goto LAB_1443a5d71;
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                uVar23 = iVar19 - 2;
                pwVar12 = pwVar13 + 2;
              }
            }
            pwVar13 = pwVar12;
            cVar4 = FUN_140024707(uVar7,&local_1e8,local_190);
            uVar15 = (ulonglong)uVar23;
          } while (cVar4 != '\0');
          local_68 = -1;
          uVar7 = 0;
LAB_1443a5d8e:
          local_190[0] = (wchar_t *)0x0;
LAB_1443a5d90:
          if (local_190[0] == (wchar_t *)0x0) {
            local_190[0] = local_f8;
          }
          iVar19 = (int)sVar5 + 1;
          local_1e8 = (wchar_t *)CONCAT44(local_1e8._4_4_,uVar7);
          pwVar13 = local_218;
          local_70 = local_190[0];
          do {
            if (iVar19 < 1) break;
            wVar1 = *pwVar13;
            uVar7 = (uint)(ushort)wVar1;
            pwVar12 = pwVar13 + 1;
            iVar6 = iVar19 + -1;
            if ((wVar1 & 0xfc00U) == 0xd800) {
              if (iVar19 == 1) {
                FUN_1400247af(uVar7,local_190,&local_1e8);
                break;
              }
              if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
                pwVar12 = pwVar13 + 2;
                iVar6 = iVar19 + -2;
              }
            }
            iVar19 = iVar6;
            pwVar13 = pwVar12;
            cVar4 = FUN_1400247af(uVar7,local_190,&local_1e8);
          } while (cVar4 != '\0');
          pwVar12 = local_228;
          uVar2 = local_210._0_4_;
          uVar20 = local_21c;
        }
        (**(code **)(*(longlong *)pwVar12 + 0x30))(pwVar12,local_70,uVar2,uVar20);
        pwVar13 = local_78;
      }
      goto LAB_1443a6555;
    }
    goto LAB_1443a655f;
  }
  goto LAB_1443a568c;
LAB_1443a64f8:
  FUN_1400247af(uVar7,&local_1a0,&local_194);
  pwVar12 = local_228;
LAB_1443a651c:
  (**(code **)(*local_210 + 0x28))(local_210,local_108,pwVar12,local_21c);
  if (local_110 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  pwVar13 = local_1e8;
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
    pwVar13 = local_1e8;
  }
LAB_1443a6555:
  if (pwVar13 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a655f:
  if (local_1d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1443a568c:
  uVar24 = uVar24 & ~(uint)uVar16;
  puVar10 = *(uint **)(lVar3 + 0x48);
  if (*(uint **)(lVar3 + 0x48) == (uint *)0x0) {
    puVar10 = local_1f0;
  }
  iVar19 = *(int *)(lVar3 + 0x50);
  iVar6 = (int)uVar17;
  lVar21 = (longlong)iVar6;
  uVar7 = puVar10[lVar21] & uVar24;
  if (uVar7 == 0) {
    iVar8 = iVar19 + 0x1e;
    if (-1 < iVar19 + -1) {
      iVar8 = iVar19 + -1;
    }
    iVar8 = iVar8 >> 5;
    iVar9 = iVar8;
    if (iVar8 < iVar6) {
      iVar9 = iVar6;
    }
    if (iVar8 <= iVar6) goto LAB_1443a6577;
    lVar14 = 0;
    while( true ) {
      iVar18 = iVar18 + 0x20;
      uVar7 = puVar10[lVar21 + lVar14 + 1];
      if (uVar7 != 0) break;
      lVar14 = lVar14 + 1;
      if (iVar9 - lVar21 == lVar14) goto LAB_1443a6577;
    }
    uVar17 = (ulonglong)(iVar6 + (int)lVar14 + 1);
    uVar24 = 0xffffffff;
  }
  uVar16 = (ulonglong)(-uVar7 & uVar7);
  uVar15 = uVar16 * 2 + 1;
  lVar21 = 0x3f;
  if (uVar15 != 0) {
    for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  iVar6 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
  if (iVar19 <= iVar6) goto LAB_1443a6577;
  goto LAB_1443a55b8;
}



// FUNCTION 1443a65b6 FUN_1443a65b6 body=979 status=ok
// SIG undefined FUN_1443a65b6(void)

ulonglong FUN_1443a65b6(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  LARGE_INTEGER LVar6;
  LARGE_INTEGER LVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  byte *local_80;
  int local_74;
  ulonglong *local_70;
  float local_68 [2];
  LARGE_INTEGER local_60;
  longlong *local_58;
  byte local_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  switch((char)param_1[8]) {
  case '\0':
    local_60.QuadPart = 0;
    plVar11 = (longlong *)FUN_140272950();
    uVar12 = (**(code **)(*plVar11 + 0xa8))(plVar11);
    if ((char)uVar12 != '\0') {
      puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
      uVar12 = (**(code **)(*(longlong *)*puVar10 + 8))();
      if ((char)uVar12 != '\0') {
        (**(code **)(*param_1 + 0x40))(param_1);
        uVar12 = (**(code **)(*(longlong *)param_1[5] + 0x20))();
        param_1[4] = uVar12;
      }
    }
    if (param_1[4] != 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      break;
    }
  default:
    LOCK();
    uVar9 = *(uint *)((longlong)param_1 + 0x1c);
    *(uint *)((longlong)param_1 + 0x1c) = 0;
    UNLOCK();
LAB_1443a6666:
    uVar12 = (ulonglong)uVar9;
    *(undefined1 *)(param_1 + 8) = 4;
    break;
  case '\x01':
    plVar11 = (longlong *)*puVar10;
    local_49 = '\0';
    uVar12 = (**(code **)(*plVar11 + 0x58))(plVar11,param_1[4]);
    if ((char)uVar12 == '\0') break;
    local_80 = &local_4a;
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,0x1fe);
    cVar8 = (**(code **)(*plVar11 + 0x68))(plVar11,param_1[4],(int *)((longlong)param_1 + 0x44),4);
    uVar9 = 0;
    if ((cVar8 != '\0') && (uVar9 = 0, local_49 == '\0')) {
      uVar9 = local_4a ^ 1;
    }
    LOCK();
    *(uint *)((longlong)param_1 + 0x1c) = uVar9;
    UNLOCK();
    uVar9 = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      uVar12 = (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],&local_60);
      plVar11 = local_58;
      LVar6 = local_60;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_58 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            uVar12 = (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      iVar14 = *(int *)((longlong)param_1 + 0x44);
      if (0 < iVar14) {
        local_70 = (ulonglong *)(param_1 + 9);
        iVar13 = 0;
        local_74 = iVar14;
        do {
          (**(code **)(*(longlong *)param_1[5] + 0x60))((longlong *)param_1[5],local_68,iVar13);
          FUN_140adf1ea(&local_60,local_68);
          uVar12 = FUN_148fab30e(LVar6.QuadPart,local_60.QuadPart);
          LVar7 = local_60;
          if ((char)uVar12 == '\0') {
            iVar14 = (int)param_1[10];
            *(uint *)(param_1 + 10) = iVar14 + 1U;
            if (*(uint *)((longlong)param_1 + 0x54) < iVar14 + 1U) {
              FUN_148fb7b2c(local_70,iVar14);
            }
            uVar12 = *local_70;
            *(undefined8 *)(uVar12 + (longlong)iVar14 * 8) = *(undefined8 *)(LVar7.QuadPart + 0x18);
            iVar14 = local_74;
          }
          plVar2 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_58 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              uVar12 = (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                uVar12 = (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar14 != iVar13);
      }
      *(undefined1 *)(param_1 + 8) = 2;
      goto LAB_1443a6940;
    }
    goto LAB_1443a6666;
  case '\x02':
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
    UNLOCK();
    lVar5 = param_1[10];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = param_1[9];
      lVar15 = 0;
      do {
        cVar8 = (**(code **)(*(longlong *)param_1[5] + 0xe0))
                          ((longlong *)param_1[5],*(undefined8 *)(lVar4 + lVar15));
        if (cVar8 == '\0') {
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
          UNLOCK();
          *(undefined1 *)(param_1 + 8) = 4;
          break;
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar15);
    }
    uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
    if (*(uint *)((longlong)param_1 + 0x1c) != 0) {
      *(undefined1 *)(param_1 + 8) = 3;
    }
    break;
  case '\x03':
    (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],&local_60);
    LVar6 = local_60;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_58 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    local_68[0] = 15.0;
    local_88 = &DAT_14c872ce8;
    FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystemSteam",
                  L"OnlineAsyncTaskSteamFindLobbiesBaseTimeout");
    uVar9 = *(uint *)(param_1 + 10);
    plVar11 = local_58;
    if (uVar9 != *(uint *)(LVar6.QuadPart + 0x328)) {
      uVar9 = QueryPerformanceCounter(&local_60);
      uVar12 = (ulonglong)uVar9;
      if (((double)local_60.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[1] <
          (double)local_68[0]) goto LAB_1443a6940;
      LOCK();
      uVar9 = *(uint *)((longlong)param_1 + 0x1c);
      *(uint *)((longlong)param_1 + 0x1c) = 0;
      UNLOCK();
    }
    uVar12 = (ulonglong)uVar9;
    *(undefined1 *)(param_1 + 8) = 4;
LAB_1443a6940:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        uVar12 = (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar12 = (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    break;
  case '\x04':
    LOCK();
    uVar9 = *(uint *)(param_1 + 3);
    *(uint *)(param_1 + 3) = 1;
    uVar12 = (ulonglong)uVar9;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1443a698a FUN_1443a698a body=654 status=ok
// SIG undefined FUN_1443a698a(void)

void FUN_1443a698a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_70);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_68)();
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
  }
  plVar9 = local_68;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_78 = local_68;
    if (0 < *(int *)(local_70 + 0x328)) {
      lVar10 = 0;
      lVar8 = 0;
      do {
        plVar9 = *(longlong **)(*(longlong *)(local_70 + 800) + lVar10);
        cVar7 = (**(code **)(*plVar9 + 0x28))(plVar9);
        if ((cVar7 != '\0') && ((*(uint *)((longlong)plVar9 + 0x1c) & 0xf40000) == 0x840000)) {
          lVar11 = *(longlong *)(param_1 + 0x30);
          iVar4 = *(int *)(lVar11 + 0x10);
          *(uint *)(lVar11 + 0x10) = iVar4 + 1U;
          if (*(uint *)(lVar11 + 0x14) < iVar4 + 1U) {
            FUN_145fee31c((longlong *)(lVar11 + 8),iVar4);
          }
          lVar5 = *(longlong *)(lVar11 + 8);
          lVar11 = lVar5 + (longlong)iVar4 * 0x120;
          puVar3 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x120);
          *puVar3 = &PTR_FUN_14b4c3b18;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          FUN_145ad316c(puVar3 + 5);
          puVar3[0x20] = 0;
          puVar3[0x21] = 0;
          puVar3[0x22] = 0;
          *(undefined4 *)(puVar3 + 0x23) = 9999;
          cVar7 = FUN_1416bb482(*(undefined8 *)(param_1 + 0x10),plVar9,lVar11,lVar11);
          if (cVar7 == '\0') {
            lVar11 = *(longlong *)(param_1 + 0x30) + 8;
            FUN_148fba96c(lVar11,*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) + -1);
            FUN_148fba9e0(lVar11);
          }
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar8 < *(int *)(local_70 + 0x328));
    }
    plVar9 = local_78;
    if (0 < (int)(*(longlong **)(param_1 + 0x30))[2]) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    }
  }
  *(uint *)(*(longlong *)(param_1 + 0x30) + 0x18) = (*(int *)(param_1 + 0x1c) == 0) + 2;
  if ((*(longlong *)(local_70 + 0x2e8) != 0) &&
     (*(longlong *)(param_1 + 0x30) == *(longlong *)(local_70 + 0x2e8))) {
    *(undefined8 *)(local_70 + 0x2e8) = 0;
    plVar6 = *(longlong **)(local_70 + 0x2f0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(local_70 + 0x2f0) = 0;
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  FUN_145c3913e(*(undefined8 *)(local_70 + 800),*(undefined4 *)(local_70 + 0x328));
  *(undefined4 *)(local_70 + 0x328) = 0;
  if (*(int *)(local_70 + 0x32c) != 0) {
    FUN_148fbaa8e(local_70 + 800);
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443a6c1a FUN_1443a6c1a body=554 status=ok
// SIG undefined FUN_1443a6c1a(void)

void FUN_1443a6c1a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_48 == 0) || (*(longlong *)(local_48 + 0x2e8) != 0)) goto LAB_1443a6c92;
  puVar4 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *puVar4 = &PTR_FUN_14b4c3a80;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0x100000000;
  puVar4[4] = &PTR_FUN_14b4c3a98;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = 0;
  puVar4[0xd] = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined1 *)(puVar4 + 0xf) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x84) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4c3ac0;
  plVar5[2] = (longlong)puVar4;
  *(undefined8 **)(local_48 + 0x2e8) = puVar4;
  plVar3 = *(longlong **)(local_48 + 0x2f0);
  if (plVar5 == plVar3) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443a6ddb:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    *(longlong **)(local_48 + 0x2f0) = plVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x0001443a6ddb;
      }
    }
  }
  *(undefined4 *)(*(longlong *)(local_48 + 0x2e8) + 0x18) = 1;
  uVar6 = FUN_14001cc68(0x78,0x10);
  local_50 = local_48 + 0x1e8;
  local_58 = *(undefined4 *)(param_1 + 0x38);
  FUN_148fafe0a(uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),
                local_48 + 0x2e8);
  FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x210),uVar6);
LAB_1443a6c92:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a6e45 FUN_1443a6e45 body=575 status=ok
// SIG undefined FUN_1443a6e45(void)

void FUN_1443a6e45(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  int local_80;
  longlong local_78 [3];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x48);
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1443a7052;
        iVar16 = iVar16 + 0x20;
        uVar15 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar14 = 0;
      iVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar15 = 0xffffffff;
    local_90 = param_2;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x28 + (longlong)iVar5 * 0x38) == param_3) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x38);
        puVar11 = puVar1 + 1;
        cVar4 = FUN_14666e7ae(*puVar1,puVar11,local_78);
        if (cVar4 != '\0') {
          FUN_140b74056(puVar11,&local_88);
          if (1 < local_80) {
            local_60 = local_78;
            local_58 = &local_88;
            FUN_140ac5c08(local_90,local_4c,&local_60,0);
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar12;
      puVar9 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x48);
      }
      iVar3 = *(int *)(param_1 + 0x60);
      iVar5 = (int)uVar14;
      lVar13 = (longlong)iVar5;
      uVar6 = puVar9[lVar13] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar6 = puVar9[lVar13 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar13 == lVar10) goto LAB_1443a7043;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
LAB_1443a7043:
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1443a7052:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a7085 FUN_1443a7085 body=5064 status=ok
// SIG undefined FUN_1443a7085(void)

void FUN_1443a7085(longlong param_1,wchar_t ***param_2)

{
  ulonglong uVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t ***pppwVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  undefined8 *puVar8;
  size_t sVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  wchar_t ****ppppwVar17;
  wchar_t **ppwVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  ulonglong uVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  undefined1 auStack_438 [40];
  longlong *local_410;
  wchar_t ***local_408;
  wchar_t ***local_400;
  wchar_t *local_3f8;
  undefined8 uStack_3f0;
  wchar_t *local_3e8;
  undefined8 uStack_3e0;
  wchar_t *local_3d0;
  int local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  wchar_t *local_398;
  undefined8 uStack_390;
  wchar_t *local_380;
  int local_378;
  wchar_t *local_370;
  int local_368;
  undefined4 local_364;
  wchar_t *local_360;
  int local_358;
  int local_354;
  wchar_t **local_2e0;
  wchar_t **local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  wchar_t **local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  longlong local_238;
  undefined4 local_230;
  longlong local_228 [2];
  uint local_218 [4];
  uint *local_208;
  int local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  wchar_t ***local_1d0;
  wchar_t **local_1c8;
  undefined8 ***local_150;
  undefined8 ***local_148;
  int local_140;
  undefined1 local_138 [56];
  undefined1 local_100 [160];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
  local_410 = (longlong *)*puVar8;
  FUN_1412c5ebc(local_138,param_2 + 5);
  local_370 = (wchar_t *)0x0;
  local_368 = *(int *)(param_2 + 4);
  lVar20 = (longlong)local_368;
  ppwVar18 = param_2[3];
  local_408 = param_2;
  if (lVar20 == 0) {
    local_364 = 0;
LAB_1443a7146:
    pwVar27 = L"";
  }
  else {
    FUN_1446dd670(&local_370,local_368,0);
    memcpy(local_370,ppwVar18,lVar20 * 2);
    if (local_368 == 0) goto LAB_1443a7146;
    local_150 = (wchar_t ****)0x0;
    pwVar27 = local_370;
    if (local_370 == (wchar_t *)0x0) {
      local_148 = (wchar_t ****)0x0;
      local_140 = 0;
      goto LAB_1443a71c0;
    }
  }
  local_150 = (wchar_t ****)0x0;
  sVar9 = wcslen(pwVar27);
  local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
  uVar22 = local_140 + 1;
  local_148 = (wchar_t ****)0x0;
  if (0x80 < uVar22) {
    FUN_1446efa72(&local_150,0,uVar22,1);
    local_148 = local_150;
  }
  if ((wchar_t ****)local_148 == (wchar_t ****)0x0) {
    local_148 = &local_1d0;
  }
  FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
LAB_1443a71c0:
  (**(code **)(*local_410 + 0x70))(local_410,local_148);
  if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*local_410 + 0x60))
            (local_410,*(int *)((longlong)local_408 + 0x34) + *(int *)(local_408 + 6));
  FUN_140056680(&local_380,&DAT_149dfb77a);
  pwVar27 = L"";
  if (local_378 != 0) {
    pwVar27 = local_380;
  }
  local_150 = (wchar_t ****)0x0;
  if (pwVar27 == (wchar_t *)0x0) {
    local_148 = (wchar_t ****)0x0;
    local_140 = 0;
  }
  else {
    sVar9 = wcslen(pwVar27);
    local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
    uVar22 = local_140 + 1;
    ppppwVar17 = (wchar_t ****)0x0;
    if (0x80 < uVar22) {
      FUN_1446efa72(&local_150,0,uVar22,1);
      ppppwVar17 = (wchar_t ****)local_150;
    }
    local_148 = ppppwVar17;
    if (ppppwVar17 == (wchar_t ****)0x0) {
      local_148 = &local_1d0;
    }
    FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
  }
  (**(code **)(*local_410 + 0xb8))(local_410,local_148);
  if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  local_400 = param_2 + 5;
  (**(code **)(*local_410 + 0x80))(local_410,0);
  local_398 = (wchar_t *)0x0;
  uStack_390 = 0;
  FUN_1446f470e(&local_3a0,L"MAPNAME",1);
  cVar7 = FUN_145e34e2c(local_138,local_3a0,&local_398);
  pwVar27 = local_398;
  if ((cVar7 != '\0') && (1 < (int)uStack_390)) {
    local_150 = (wchar_t ****)0x0;
    if (local_398 == (wchar_t *)0x0) {
      local_148 = (wchar_t ****)0x0;
      local_140 = 0;
    }
    else {
      sVar9 = wcslen(local_398);
      local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
      uVar22 = local_140 + 1;
      ppppwVar17 = (wchar_t ****)0x0;
      if (0x80 < uVar22) {
        FUN_1446efa72(&local_150,0,uVar22,1);
        ppppwVar17 = (wchar_t ****)local_150;
      }
      local_148 = ppppwVar17;
      if (ppppwVar17 == (wchar_t ****)0x0) {
        local_148 = &local_1d0;
      }
      FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
    }
    (**(code **)(*local_410 + 0x78))(local_410,local_148);
    if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1446f470e(&local_3a8,L"MAPNAME",1);
  FUN_1489bc31a(local_100,local_3a8);
  local_3ac = 0;
  FUN_1446f470e(&local_3b8,L"NUMBOTS",1);
  cVar7 = FUN_145e34a52(local_138,local_3b8,&local_3ac);
  if (cVar7 != '\0') {
    (**(code **)(*local_410 + 0x68))(local_410,local_3ac);
  }
  FUN_1446f470e(&local_3c0,L"NUMBOTS",1);
  FUN_1489bc31a(local_100,local_3c0);
  if (((param_1 != 0) && (lVar20 = *(longlong *)(param_1 + 0x178), lVar20 != 0)) &&
     (0 < *(int *)(lVar20 + 0x3b0))) {
    lVar28 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar20 + 0x3a8) + lVar28 * 8);
      if (lVar3 != 0) {
        if ((&DAT_149fc1b6e)[*(byte *)(lVar3 + 0x3b8)] == '\x01') {
          if ((*(longlong **)(lVar3 + 0x3a8) != (longlong *)0x0) &&
             (cVar7 = (**(code **)(**(longlong **)(lVar3 + 0x3a8) + 0x28))(), cVar7 != '\0')) {
LAB_1443a7551:
            plVar10 = (longlong *)FUN_1408e4caa(lVar3 + 0x3a0);
            puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x18))(plVar10);
            uVar4 = *puVar8;
            fVar2 = *(float *)(lVar3 + 0x390);
            FUN_141220240(lVar3,&local_360);
            pwVar27 = L"";
            if (local_358 != 0) {
              pwVar27 = local_360;
            }
            local_150 = (wchar_t ****)0x0;
            if (pwVar27 == (wchar_t *)0x0) {
              local_148 = (wchar_t ****)0x0;
              local_140 = 0;
            }
            else {
              sVar9 = wcslen(pwVar27);
              local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
              uVar22 = local_140 + 1;
              ppppwVar17 = (wchar_t ****)0x0;
              if (0x80 < uVar22) {
                FUN_1446efa72(&local_150,0,uVar22,1);
                ppppwVar17 = (wchar_t ****)local_150;
              }
              local_148 = ppppwVar17;
              if (ppppwVar17 == (wchar_t ****)0x0) {
                local_148 = &local_1d0;
              }
              FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
            }
            (**(code **)(*local_410 + 0x148))
                      (local_410,uVar4,local_148,(longlong)fVar2 & 0xffffffff);
            if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
              FUN_1400020a8();
            }
            if (local_360 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else if ((*(uint *)(lVar3 + 0x3a8) & 0xffffff) != 0) goto LAB_1443a7551;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)(lVar20 + 0x3b0));
  }
  local_208 = (uint *)0x0;
  local_200 = 0;
  local_228[0] = 0;
  local_228[1] = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  FUN_148fb0234(local_408,local_228);
  pppwVar5 = local_400;
  FUN_148faff37(&local_360,local_400);
  FUN_1400b22c2(&local_278,"SESSIONFLAGS");
  local_1d0 = &local_278;
  local_1c8 = &local_360;
  FUN_1411f1c38(local_228,&local_2c8,&local_1d0,0);
  if (local_278 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if (local_360 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_148fafe98(&local_3d0,pppwVar5);
  FUN_1443a6e45(local_138,local_228,2);
  uVar21 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = (wchar_t **)0x0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  FUN_1443a6e45(local_138,&local_278,1);
  local_2a8 = 0;
  local_2a0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  FUN_1443a6e45(local_138,&local_2c8,3);
  if (local_200 == 0) {
    uVar26 = 1;
    iVar23 = 0;
    iVar11 = 0;
  }
  else {
    puVar16 = local_208;
    if (local_208 == (uint *)0x0) {
      puVar16 = local_218;
    }
    uVar22 = *puVar16;
    if (uVar22 == 0) {
      iVar11 = local_200 + 0x1e;
      if (-1 < local_200 + -1) {
        iVar11 = local_200 + -1;
      }
      uVar21 = 0;
      uVar26 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar26 = uVar21;
      }
      iVar23 = 0;
      do {
        if (uVar26 == uVar21) goto LAB_1443a79a7;
        iVar23 = iVar23 + 0x20;
        uVar22 = puVar16[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar21 = 0;
      iVar23 = 0;
    }
    uVar26 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar26 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (local_200 <= iVar11) {
      iVar11 = local_200;
    }
  }
  if (iVar11 < local_200) {
    uVar22 = 0xffffffff;
    do {
      lVar20 = (longlong)iVar11;
      puVar25 = &DAT_149dfb77a;
      if (*(int *)(local_228[0] + 0x18 + lVar20 * 0x28) != 0) {
        puVar25 = *(undefined2 **)(local_228[0] + 0x10 + lVar20 * 0x28);
      }
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(local_228[0] + 8 + lVar20 * 0x28) != 0) {
        puVar24 = *(undefined2 **)(local_228[0] + lVar20 * 0x28);
      }
      FUN_140002266(&local_1d0,L",%s:%s",puVar24,puVar25);
      iVar11 = local_3c8 + -1;
      if (local_3c8 == 0) {
        iVar11 = 0;
      }
      iVar13 = (int)local_1c8 + -1;
      if ((int)local_1c8 == 0) {
        iVar13 = 0;
      }
      if (iVar11 + iVar13 < 0x80) {
        FUN_1400020e8(&local_3d0,local_1d0);
      }
      if (local_1d0 != (wchar_t ***)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 & ~(uint)uVar26;
      puVar16 = local_208;
      if (local_208 == (uint *)0x0) {
        puVar16 = local_218;
      }
      iVar11 = (int)uVar21;
      lVar20 = (longlong)iVar11;
      uVar12 = puVar16[lVar20] & uVar22;
      if (uVar12 == 0) {
        iVar13 = local_200 + 0x1e;
        if (-1 < local_200 + -1) {
          iVar13 = local_200 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar28 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar12 = puVar16[lVar20 + lVar28 + 1];
          if (uVar12 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar14 - lVar20 == lVar28) goto LAB_1443a79a7;
        }
        uVar21 = (ulonglong)(iVar11 + (int)lVar28 + 1);
        uVar22 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar26 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar11 < local_200);
  }
LAB_1443a79a7:
  if (local_408[0x20] != (wchar_t **)0x0) {
    FUN_148faffa9(local_408[0x20],local_228);
  }
  FUN_146273996(local_228,&local_2c8);
  local_3e8 = (wchar_t *)0x0;
  uStack_3e0 = 0;
  if (local_200 == 0) {
    uVar21 = 1;
    uVar26 = 0;
    iVar23 = 0;
    iVar11 = 0;
  }
  else {
    puVar16 = local_208;
    if (local_208 == (uint *)0x0) {
      puVar16 = local_218;
    }
    uVar22 = *puVar16;
    if (uVar22 == 0) {
      iVar11 = local_200 + 0x1e;
      if (-1 < local_200 + -1) {
        iVar11 = local_200 + -1;
      }
      uVar26 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar26;
      }
      iVar23 = 0;
      do {
        if (uVar21 == uVar26) goto LAB_1443a7d03;
        iVar23 = iVar23 + 0x20;
        uVar22 = puVar16[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar26 = 0;
      iVar23 = 0;
    }
    uVar21 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar21 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (local_200 <= iVar11) {
      iVar11 = local_200;
    }
  }
  if (iVar11 < local_200) {
    uVar22 = 0xffffffff;
    iVar13 = 0;
    do {
      lVar20 = (longlong)iVar11;
      puVar25 = &DAT_149dfb77a;
      if (*(int *)(local_228[0] + 0x18 + lVar20 * 0x28) != 0) {
        puVar25 = *(undefined2 **)(local_228[0] + 0x10 + lVar20 * 0x28);
      }
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(local_228[0] + 8 + lVar20 * 0x28) != 0) {
        puVar24 = *(undefined2 **)(local_228[0] + lVar20 * 0x28);
      }
      FUN_140002266(&local_1d0,L"%s:%s",puVar24,puVar25);
      iVar11 = (int)uStack_3e0 + -1;
      if ((int)uStack_3e0 == 0) {
        iVar11 = iVar13;
      }
      iVar14 = (int)local_1c8 + -1;
      if ((int)local_1c8 == 0) {
        iVar14 = iVar13;
      }
      if (iVar14 + iVar11 < 0x800) {
        puVar19 = &DAT_149e02088;
        if ((int)uStack_3e0 - 2U < 0x7fffffff) {
          puVar19 = &DAT_149eb5f2c;
        }
        FUN_1400b22c2(&local_3f8,puVar19);
        local_358 = (int)uStack_3f0;
        if ((int)uStack_3f0 < 2) {
          local_360 = (wchar_t *)0x0;
          local_358 = (int)local_1c8;
          lVar20 = (longlong)(int)local_1c8;
          local_408 = local_1d0;
          if (lVar20 == 0) {
            local_354 = 0;
          }
          else {
            FUN_1446dd670(&local_360,(ulonglong)local_1c8 & 0xffffffff,0);
            memcpy(local_360,local_408,lVar20 * 2);
          }
        }
        else {
          iVar11 = (int)local_1c8 + -1;
          if ((int)local_1c8 == 0) {
            iVar11 = iVar13;
          }
          local_360 = local_3f8;
          local_354 = uStack_3f0._4_4_;
          local_3f8 = (wchar_t *)0x0;
          uStack_3f0 = 0;
          if (iVar11 + local_358 < local_358) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar11);
          }
          if (local_354 < iVar11 + local_358) {
            FUN_1446f8c06(&local_360);
          }
          FUN_1400020e8(&local_360,local_1d0,iVar11);
        }
        iVar11 = local_358 + -1;
        if (local_358 == 0) {
          iVar11 = 0;
        }
        FUN_1400020e8(&local_3e8,local_360,iVar11);
        if (local_360 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_3f8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_1d0 != (wchar_t ***)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 & ~(uint)uVar21;
      puVar16 = local_208;
      if (local_208 == (uint *)0x0) {
        puVar16 = local_218;
      }
      iVar11 = (int)uVar26;
      lVar20 = (longlong)iVar11;
      uVar12 = puVar16[lVar20] & uVar22;
      if (uVar12 == 0) {
        iVar14 = local_200 + 0x1e;
        if (-1 < local_200 + -1) {
          iVar14 = local_200 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar11) {
          iVar15 = iVar11;
        }
        if (iVar14 <= iVar11) break;
        lVar28 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar12 = puVar16[lVar20 + lVar28 + 1];
          if (uVar12 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar15 - lVar20 == lVar28) goto LAB_1443a7d03;
        }
        uVar26 = (ulonglong)(iVar11 + (int)lVar28 + 1);
        uVar22 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar21 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar11 < local_200);
  }
LAB_1443a7d03:
  iVar11 = local_3c8 + -1;
  if (local_3c8 == 0) {
    iVar11 = 0;
  }
  if (iVar11 - 1U < 0x7f) {
    pwVar27 = local_3d0;
    if (local_3c8 == 0) {
      pwVar27 = L"";
    }
    local_150 = (wchar_t ****)0x0;
    if (pwVar27 == (wchar_t *)0x0) {
      local_148 = (wchar_t ****)0x0;
      local_140 = 0;
    }
    else {
      sVar9 = wcslen(pwVar27);
      local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
      uVar22 = local_140 + 1;
      ppppwVar17 = (wchar_t ****)0x0;
      if (0x80 < uVar22) {
        FUN_1446efa72(&local_150,0,uVar22,1);
        ppppwVar17 = (wchar_t ****)local_150;
      }
      local_148 = ppppwVar17;
      if (ppppwVar17 == (wchar_t ****)0x0) {
        local_148 = &local_1d0;
      }
      FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
    }
    (**(code **)(*local_410 + 0xa8))(local_410,local_148);
    if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
  }
  iVar11 = (int)uStack_3e0 + -1;
  if ((int)uStack_3e0 == 0) {
    iVar11 = 0;
  }
  if (iVar11 - 1U < 0x7ff) {
    pwVar27 = local_3e8;
    if ((int)uStack_3e0 == 0) {
      pwVar27 = L"";
    }
    local_150 = (wchar_t ****)0x0;
    if (pwVar27 == (wchar_t *)0x0) {
      local_148 = (wchar_t ****)0x0;
      local_140 = 0;
    }
    else {
      sVar9 = wcslen(pwVar27);
      local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
      uVar22 = local_140 + 1;
      ppppwVar17 = (wchar_t ****)0x0;
      if (0x80 < uVar22) {
        FUN_1446efa72(&local_150,0,uVar22,1);
        ppppwVar17 = (wchar_t ****)local_150;
      }
      local_148 = ppppwVar17;
      if (ppppwVar17 == (wchar_t ****)0x0) {
        local_148 = &local_1d0;
      }
      FUN_14475a98a(local_148,uVar22,pwVar27,(int)sVar9 + 1);
    }
    (**(code **)(*local_410 + 0xb0))(local_410,local_148);
    if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*local_410 + 0x98))();
  FUN_146273996(local_228,&local_278);
  if (local_200 == 0) {
    uVar21 = 1;
    uVar26 = 0;
    iVar23 = 0;
    iVar11 = 0;
  }
  else {
    puVar16 = local_208;
    if (local_208 == (uint *)0x0) {
      puVar16 = local_218;
    }
    uVar22 = *puVar16;
    if (uVar22 == 0) {
      iVar11 = local_200 + 0x1e;
      if (-1 < local_200 + -1) {
        iVar11 = local_200 + -1;
      }
      uVar26 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar26;
      }
      iVar23 = 0;
      do {
        if (uVar21 == uVar26) goto LAB_1443a8246;
        iVar23 = iVar23 + 0x20;
        uVar22 = puVar16[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar26 = 0;
      iVar23 = 0;
    }
    uVar21 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar21 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (local_200 <= iVar11) {
      iVar11 = local_200;
    }
  }
  if (iVar11 < local_200) {
    local_400 = (wchar_t ***)&local_150;
    local_408 = &local_2e0;
    uVar22 = 0xffffffff;
    do {
      lVar20 = (longlong)iVar11;
      if (*(int *)(local_228[0] + 0x18 + lVar20 * 0x28) == 0) {
        pwVar27 = L"";
LAB_1443a8007:
        local_150 = (wchar_t ****)0x0;
        sVar9 = wcslen(pwVar27);
        local_140 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
        uVar12 = local_140 + 1;
        ppppwVar17 = (wchar_t ****)0x0;
        if (0x80 < uVar12) {
          FUN_1446efa72(local_400,0,uVar12,1);
          ppppwVar17 = (wchar_t ****)local_150;
        }
        local_148 = ppppwVar17;
        if (ppppwVar17 == (wchar_t ****)0x0) {
          local_148 = &local_1d0;
        }
        FUN_14475a98a(local_148,uVar12,pwVar27,(int)sVar9 + 1);
      }
      else {
        pwVar27 = *(wchar_t **)(local_228[0] + 0x10 + lVar20 * 0x28);
        local_150 = (wchar_t ****)0x0;
        if (pwVar27 != (wchar_t *)0x0) goto LAB_1443a8007;
        local_148 = (wchar_t ****)0x0;
        local_140 = 0;
      }
      pppuVar6 = local_148;
      if (*(int *)(local_228[0] + 8 + lVar20 * 0x28) == 0) {
        pwVar27 = L"";
LAB_1443a80c0:
        local_2e0 = (wchar_t **)0x0;
        sVar9 = wcslen(pwVar27);
        local_2d0 = FUN_14475aa65(0,pwVar27,sVar9 & 0xffffffff);
        uVar12 = local_2d0 + 1;
        ppwVar18 = (wchar_t **)0x0;
        if (0x80 < uVar12) {
          FUN_1446efa72(local_408,0,uVar12,1);
          ppwVar18 = local_2e0;
        }
        local_2d8 = ppwVar18;
        if (ppwVar18 == (wchar_t **)0x0) {
          local_2d8 = &local_360;
        }
        FUN_14475a98a(local_2d8,uVar12,pwVar27,(int)sVar9 + 1);
      }
      else {
        pwVar27 = *(wchar_t **)(local_228[0] + lVar20 * 0x28);
        local_2e0 = (wchar_t **)0x0;
        if (pwVar27 != (wchar_t *)0x0) goto LAB_1443a80c0;
        local_2d8 = (wchar_t **)0x0;
        local_2d0 = 0;
      }
      (**(code **)(*local_410 + 0xa0))(local_410,local_2d8,pppuVar6);
      if (local_2e0 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if ((wchar_t ****)local_150 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      uVar22 = uVar22 & ~(uint)uVar21;
      puVar16 = local_208;
      if (local_208 == (uint *)0x0) {
        puVar16 = local_218;
      }
      iVar11 = (int)uVar26;
      lVar20 = (longlong)iVar11;
      uVar12 = puVar16[lVar20] & uVar22;
      if (uVar12 == 0) {
        iVar13 = local_200 + 0x1e;
        if (-1 < local_200 + -1) {
          iVar13 = local_200 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar28 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar12 = puVar16[lVar20 + lVar28 + 1];
          if (uVar12 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar14 - lVar20 == lVar28) goto LAB_1443a8246;
        }
        uVar26 = (ulonglong)(iVar11 + (int)lVar28 + 1);
        uVar22 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar21 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar11 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar11 < local_200);
  }
LAB_1443a8246:
  if (local_3e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_280 = 0;
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_2c8);
  local_230 = 0;
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_278);
  if (local_3d0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_1e0 = 0;
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_228);
  if (local_398 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_380 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_370 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14124f074(local_138);
  if ((local_60 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a8450 FUN_1443a8450 body=502 status=ok
// SIG undefined FUN_1443a8450(void)

BOOL FUN_1443a8450(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  BOOL BVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  float local_44;
  LARGE_INTEGER local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_40);
  LVar3 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_38 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar7 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
    if ((longlong *)LVar3.QuadPart != (longlong *)0x0) {
      plVar7 = (longlong *)*plVar7;
      lVar8 = (**(code **)(*(longlong *)LVar3 + 0x20))
                        (LVar3.QuadPart,*(undefined8 *)(param_1 + 0x2c));
      if ((plVar7 != (longlong *)0x0) && (lVar8 != 0)) {
        uVar2 = *(undefined1 *)(lVar8 + 0x3b);
        (**(code **)(*plVar7 + 0x18))(plVar7,"unrealtest");
        (**(code **)(*plVar7 + 8))(plVar7,"unrealdk");
        (**(code **)(*plVar7 + 0x10))(plVar7,"Unreal Test!");
        (**(code **)(*plVar7 + 0x20))
                  (plVar7,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff);
        cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
        if (cVar4 == '\0') {
          (**(code **)(*plVar7 + 0x30))(plVar7);
        }
        (**(code **)(*plVar7 + 0xc0))(plVar7,1);
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
  }
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(char *)(LVar3.QuadPart + 0x2c8) == '\x01')) {
    cVar4 = (**(code **)(**(longlong **)(LVar3.QuadPart + 0x2d0) + 0x28))();
    if ((cVar4 == '\0') || (*(char *)(LVar3.QuadPart + 0x2e0) != '\x01')) goto LAB_1443a8590;
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    BVar5 = 1;
  }
  else {
LAB_1443a8590:
    local_44 = 15.0;
    local_58 = &DAT_14c872ce8;
    FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystemSteam",L"OnlineAsyncTaskSteamCreateServerTimeout",
                  &local_44);
    BVar6 = QueryPerformanceCounter(&local_40);
    if (((double)local_40.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 8) <
        (double)local_44) goto LAB_1443a8603;
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    BVar5 = 0;
  }
  LOCK();
  BVar6 = *(BOOL *)(param_1 + 0x1c);
  *(BOOL *)(param_1 + 0x1c) = BVar5;
  UNLOCK();
LAB_1443a8603:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      BVar6 = (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        BVar6 = (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return BVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a8648 FUN_1443a8648 body=1699 status=ok
// SIG undefined FUN_1443a8648(void)

void FUN_1443a8648(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  char cVar15;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  void *local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_60);
  plVar14 = (longlong *)CONCAT44(uStack_5c,local_60);
  plVar5 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar11 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*plVar14 + 0x28))(plVar14,*(undefined8 *)(param_1 + 0x2c));
    goto LAB_1443a87c3;
  }
  lVar8 = (**(code **)(*plVar14 + 0x20))(plVar14);
  if (lVar8 == 0) goto LAB_1443a87c3;
  puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  lVar4 = plVar14[0x5a];
  *puVar9 = &PTR_FUN_14ba43820;
  *(undefined4 *)(puVar9 + 1) = 2;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  FUN_140df9946(lVar4,puVar9 + 6);
  *(undefined1 *)(puVar9 + 8) = 0;
  puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
  local_80 = (longlong *)*puVar10;
  local_70 = (void *)0x0;
  plVar11 = (longlong *)FUN_140272950();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  (**(code **)(*plVar11 + 0xd0))(plVar11,&local_60,&DAT_14c872ee0);
  plVar11 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar11 == (longlong *)0x0) {
    puVar9[4] = CONCAT44(uStack_5c,local_60);
    plVar12 = (longlong *)puVar9[5];
    if (plVar12 != (longlong *)0x0) {
      puVar9[5] = 0;
LAB_1443a8841:
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443a8834:
        if (iVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    puVar9[4] = CONCAT44(uStack_5c,local_60);
    plVar12 = (longlong *)puVar9[5];
    if (plVar11 == plVar12) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar12 = plVar11;
        goto joined_r0x0001443a8834;
      }
    }
    else {
      puVar9[5] = plVar11;
      if (plVar12 != (longlong *)0x0) goto LAB_1443a8841;
    }
  }
  plVar11 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  (**(code **)(*(longlong *)puVar9[4] + 0x28))
            ((longlong *)puVar9[4],*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xe0));
  FUN_1446f470e(&local_70,L"WINDOWS",1);
  plVar11 = (longlong *)FUN_140272950(&local_70);
  (**(code **)(*plVar11 + 0x90))(plVar11,&local_60);
  plVar11 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar11 == (longlong *)0x0) {
    puVar9[2] = CONCAT44(uStack_5c,local_60);
    plVar12 = (longlong *)puVar9[3];
    if (plVar12 != (longlong *)0x0) {
      puVar9[3] = 0;
LAB_1443a8930:
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443a8923:
        if (iVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    puVar9[2] = CONCAT44(uStack_5c,local_60);
    plVar12 = (longlong *)puVar9[3];
    if (plVar11 == plVar12) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar12 = plVar11;
        goto joined_r0x0001443a8923;
      }
    }
    else {
      puVar9[3] = plVar11;
      if (plVar12 != (longlong *)0x0) goto LAB_1443a8930;
    }
  }
  plVar11 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = (longlong *)puVar9[2];
  (**(code **)(*local_80 + 0x108))(local_80,&local_60);
  (**(code **)(*plVar11 + 0x18))(plVar11,local_60);
  plVar11 = (longlong *)puVar9[2];
  (**(code **)(*plVar11 + 0x28))(plVar11,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xe0));
  if (*(longlong *)(lVar8 + 8) == 0) {
    lVar4 = plVar14[0x5a];
    plVar11 = (longlong *)plVar14[0x5b];
    if (plVar11 == (longlong *)0x0) {
      *(longlong *)(lVar8 + 8) = lVar4;
      plVar12 = *(longlong **)(lVar8 + 0x10);
      if (plVar12 != (longlong *)0x0) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
LAB_1443a8a27:
        LOCK();
        plVar11 = plVar12 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443a8a1a:
          if (iVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *(longlong *)(lVar8 + 8) = lVar4;
      plVar12 = *(longlong **)(lVar8 + 0x10);
      if (plVar11 == plVar12) {
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar12 = plVar11;
          goto joined_r0x0001443a8a1a;
        }
      }
      else {
        *(longlong **)(lVar8 + 0x10) = plVar11;
        if (plVar12 != (longlong *)0x0) goto LAB_1443a8a27;
      }
    }
    FUN_1443a8cec(&local_60);
    if ((int)local_58 < 2) {
      (**(code **)(**(longlong **)(lVar8 + 8) + 0x30))(*(longlong **)(lVar8 + 8),&local_70);
    }
    else {
      local_70 = (void *)0x0;
      _Src = (void *)CONCAT44(uStack_5c,local_60);
      local_68 = local_58;
      FUN_1446dd670(&local_70,(ulonglong)local_58,0);
      memcpy(local_70,_Src,(ulonglong)local_58 * 2);
    }
    if ((void **)(lVar8 + 0x18) == &local_70) {
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar8 + 0x18) = local_70;
      local_70 = (void *)0x0;
      *(uint *)(lVar8 + 0x20) = local_68;
      *(undefined4 *)(lVar8 + 0x24) = uStack_64;
    }
    if (CONCAT44(uStack_5c,local_60) != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x230))(*(longlong **)(param_1 + 0x10),&local_70);
  if (local_70 == (void *)0x0) {
    cVar15 = '\0';
  }
  else {
    cVar15 = *(char *)((longlong)local_70 + 0xe0);
  }
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6 = local_80;
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba461f0;
  plVar12[2] = (longlong)puVar9;
  *(undefined8 **)(lVar8 + 0x100) = puVar9;
  plVar11 = *(longlong **)(lVar8 + 0x108);
  if (plVar12 == plVar11) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001443a8bc1:
        if (iVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    *(longlong **)(lVar8 + 0x108) = plVar12;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar12 = plVar11;
        goto joined_r0x0001443a8bc1;
      }
    }
  }
  uVar7 = (**(code **)(*plVar6 + 0x48))(plVar6);
  *(undefined1 *)(lVar8 + 0x41) = uVar7;
  *(undefined4 *)(lVar8 + 0x148) = 2;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),&local_78);
  uVar13 = FUN_145cbb6ba(local_78);
  FUN_1443a7085(uVar13,lVar8);
  FUN_148faf2ce(plVar14);
  plVar14 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  if (cVar15 == '\0' && *plVar14 != 0) {
    puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    plVar14 = (longlong *)*puVar9;
    uVar3 = *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xe0);
    (**(code **)(*plVar6 + 0x108))(plVar6,&local_60);
    (**(code **)(*plVar14 + 0xa0))(plVar14,2,local_60,uVar3);
  }
  plVar14 = (longlong *)CONCAT44(uStack_64,local_68);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar14 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_1443a87c3:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a8cec FUN_1443a8cec body=219 status=ok
// SIG undefined FUN_1443a8cec(void)

longlong * FUN_1443a8cec(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"-SteamServerName=",param_1,1,0);
  if (cVar1 == '\0') {
    FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemSteam",L"SteamServerName",param_1,&DAT_14c872ce8);
  }
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (0x3f < iVar3) {
    if (iVar2 - iVar3 != 0) {
      memmove((void *)(*param_1 + 0x7e),(void *)(*param_1 + (ulonglong)(iVar3 - 0x3fU) * 2 + 0x7e),
              (longlong)(iVar2 - iVar3) * 2);
      iVar2 = (int)param_1[1];
    }
    *(uint *)(param_1 + 1) = iVar2 - (iVar3 - 0x3fU);
    FUN_1449649ae(param_1);
  }
  return param_1;
}



// FUNCTION 1443a8dc8 FUN_1443a8dc8 body=409 status=ok
// SIG undefined FUN_1443a8dc8(void)

ulonglong FUN_1443a8dc8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_50);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  lVar10 = (**(code **)(*local_50 + 0x20))(local_50,*(undefined8 *)(param_1 + 0x28));
  if (lVar10 != 0) {
    uVar5 = *(undefined1 *)(lVar10 + 0x3e);
    *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_1 + 0x48);
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    uVar9 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar10 + 0x34) = uVar7;
    *(undefined4 *)(lVar10 + 0x38) = uVar8;
    *(undefined4 *)(lVar10 + 0x3c) = uVar9;
    puVar3 = (undefined8 *)(lVar10 + 0x48);
    if (puVar3 != (undefined8 *)(param_1 + 0x50)) {
      iVar6 = *(int *)(param_1 + 0x58);
      _Src = *(void **)(param_1 + 0x50);
      *(int *)(lVar10 + 0x50) = iVar6;
      if (iVar6 == 0 && *(int *)(lVar10 + 0x54) == 0) {
        *(undefined4 *)(lVar10 + 0x54) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar6);
        if (iVar6 != 0) {
          memcpy((void *)*puVar3,_Src,(longlong)iVar6 * 2);
        }
      }
    }
    *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(param_1 + 0x60);
    FUN_1412c5fc6(lVar10 + 0x60,param_1 + 0x68);
    FUN_1412c6060(lVar10 + 0xb0,param_1 + 0xb8);
    *(undefined1 *)(lVar10 + 0x3e) = uVar5;
    if (*(char *)(param_1 + 0x108) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_58);
      uVar12 = FUN_145cbb6ba(local_58);
      FUN_1443a7085(uVar12,lVar10);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 1;
    UNLOCK();
  }
  LOCK();
  uVar4 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = 1;
  uVar11 = (ulonglong)uVar4;
  UNLOCK();
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar11 = (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar11 = (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a8f62 FUN_1443a8f62 body=381 status=ok
// SIG undefined FUN_1443a8f62(void)

void FUN_1443a8f62(longlong param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_2b8 [40];
  longlong local_290 [2];
  longlong local_280 [2];
  longlong *local_270;
  longlong *local_268;
  undefined1 local_25c [4];
  undefined1 local_258 [256];
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140 [256];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  local_40 = 0;
  if (param_3 == (char *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = strlen(param_3);
    FUN_1446e6fe8(local_140,param_3,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_280,local_38);
  local_158 = 0;
  if (param_2 == (char *)0x0) {
    local_150 = 0;
    local_148 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_258,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_290,local_150);
  local_270 = local_290;
  local_268 = local_280;
  FUN_1411f1c38(param_1 + 0x38,local_25c,&local_270,0);
  if (local_290[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_280[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443a9120 FUN_1443a9120 body=4526 status=ok
// SIG undefined FUN_1443a9120(void)

void FUN_1443a9120(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  size_t sVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  undefined2 *puVar22;
  longlong lVar23;
  int iVar24;
  wchar_t *pwVar25;
  uint *puVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 auStack_1b8 [36];
  int local_194;
  longlong *local_190;
  int local_188;
  int local_184;
  uint *local_180;
  longlong *local_178;
  undefined4 local_16c;
  undefined8 *local_168;
  longlong *local_160;
  undefined8 *local_158;
  longlong local_150;
  longlong *local_148;
  wchar_t *local_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x40) = 0;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 0x20))();
  plVar7 = uStack_f0;
  lVar10 = local_f8;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
    UNLOCK();
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_f0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*uStack_f0)(uStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if (((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x2e8), lVar10 == 0)) ||
     (*(int *)(lVar10 + 0x18) != 1)) goto LAB_1443a91c9;
  puVar11 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *puVar11 = &PTR_FUN_14ba43820;
  *(undefined4 *)(puVar11 + 1) = 3;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  FUN_140df9946(uVar4,puVar11 + 6);
  *(undefined1 *)(puVar11 + 8) = 0;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba461f0;
  plVar12[2] = (longlong)puVar11;
  plVar13 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar13 = (longlong)&PTR_FUN_14ba46fd0;
  plVar14 = (longlong *)FUN_14600b90e();
  plVar13[1] = *plVar14;
  lVar10 = plVar14[1];
  plVar13[2] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar13 + 3) = 0;
  local_178 = plVar13;
  local_190 = (longlong *)FUN_14001cc68();
  local_190[1] = (longlong)&DAT_100000001;
  *local_190 = (longlong)&PTR_FUN_14ba470a0;
  local_190[2] = (longlong)plVar13;
  puVar26 = (uint *)(param_1 + 0x48);
  iVar24 = *(int *)(param_1 + 0x60);
  local_158 = puVar11;
  if (iVar24 == 0) {
    uVar29 = 1;
    uVar28 = 0;
    iVar27 = 0;
    iVar17 = 0;
  }
  else {
    puVar21 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar21 = puVar26;
    }
    uVar30 = *puVar21;
    if (uVar30 == 0) {
      iVar27 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar27 = iVar24 + -1;
      }
      uVar28 = 0;
      uVar29 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar29 = uVar28;
      }
      iVar27 = 0;
      do {
        if (uVar29 == uVar28) goto LAB_1443aa083;
        iVar27 = iVar27 + 0x20;
        uVar30 = puVar21[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar28 = 0;
      iVar27 = 0;
    }
    uVar29 = (ulonglong)(-uVar30 & uVar30);
    uVar2 = uVar29 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar17 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar24 <= iVar17) {
      iVar17 = iVar24;
    }
  }
  bVar6 = false;
  if (iVar17 < iVar24) {
    local_148 = local_178 + 1;
    local_150 = param_1 + 0xb0;
    local_168 = (undefined8 *)(param_1 + 0xa0);
    uVar30 = 0xffffffff;
    local_16c = (undefined4)CONCAT71((int7)((ulonglong)local_168 >> 8),1);
    local_188 = 0;
    local_184 = 0;
    local_180 = puVar26;
    local_160 = plVar12;
LAB_1443a942c:
    lVar10 = (longlong)iVar17;
    local_194 = iVar27;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
      local_78 = 0;
      if (pwVar25 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1443a94b4;
      }
    }
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a94b4:
    lVar23 = 0;
    do {
      bVar16 = *(byte *)(local_70 + lVar23);
      bVar3 = "SESSIONFLAGS"[lVar23];
      if (bVar16 == bVar3) {
        iVar24 = 0;
        if (bVar16 == 0) goto LAB_1443a9502;
      }
      else {
        if (0x7f < (bVar3 | bVar16)) {
          iVar24 = (uint)bVar16 - (uint)bVar3;
          goto LAB_1443a9502;
        }
        if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) goto LAB_1443a9500;
      }
      lVar23 = lVar23 + 1;
    } while( true );
  }
LAB_1443aa194:
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_190 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_190 + 0x10))();
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (bVar6) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    iVar24 = *(int *)(lVar10 + 0x10);
    *(uint *)(lVar10 + 0x10) = iVar24 + 1U;
    if (*(uint *)(lVar10 + 0x14) < iVar24 + 1U) {
      FUN_145fee31c((longlong *)(lVar10 + 8),iVar24);
    }
    lVar23 = *(longlong *)(lVar10 + 8);
    lVar10 = lVar23 + (longlong)iVar24 * 0x120;
    FUN_14589e2aa(lVar10);
    *(undefined4 *)(lVar23 + 0x118 + (longlong)iVar24 * 0x120) = *(undefined4 *)(param_1 + 0x1a0);
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    lVar23 = *(longlong *)(param_1 + 400);
    if (lVar23 != 0) {
      LOCK();
      *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
      UNLOCK();
    }
    plVar12 = *(longlong **)(lVar10 + 0x108);
    *(undefined8 *)(lVar10 + 0x100) = uVar4;
    *(longlong *)(lVar10 + 0x108) = lVar23;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (((*(longlong *)(lVar10 + 8) == 0) || (*(longlong **)(lVar10 + 0x100) == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)(lVar10 + 0x100) + 0x20))(), cVar8 == '\0')) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + 8;
      FUN_148fba96c(lVar10);
      FUN_148fba9e0(lVar10);
    }
  }
LAB_1443a91c9:
  lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
  if (0 < lVar10) {
    lVar23 = 0;
    do {
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + lVar23 * 8) + 0x18) ==
          *(longlong *)(param_1 + 0x18)) {
        FUN_148fb06d4();
        break;
      }
      lVar23 = lVar23 + 1;
    } while (lVar10 != lVar23);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1443a9500:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a9502:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
      local_78 = 0;
      if (pwVar25 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1443a9648;
      }
    }
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a9648:
    lVar23 = 0;
    do {
      bVar16 = *(byte *)(local_70 + lVar23);
      bVar3 = "OWNINGID"[lVar23];
      if (bVar16 == bVar3) {
        iVar24 = 0;
        if (bVar16 == 0) goto LAB_1443a9696;
      }
      else {
        if (0x7f < (bVar3 | bVar16)) {
          iVar24 = (uint)bVar16 - (uint)bVar3;
          goto LAB_1443a9696;
        }
        if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) goto LAB_1443a9694;
      }
      lVar23 = lVar23 + 1;
    } while( true );
  }
  pwVar25 = L"";
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar10 * 0x28) != 0) {
    pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar10 * 0x28);
  }
  uVar18 = _wtoi(pwVar25);
  bVar16 = (byte)uVar18;
  *(byte *)(param_1 + 0xc0) = bVar16 & 1;
  *(byte *)(param_1 + 0xc1) = bVar16 >> 1 & 1;
  *(byte *)(param_1 + 0xc2) = bVar16 >> 2 & 1;
  *(byte *)(param_1 + 0xc3) = bVar16 >> 3 & 1;
  *(byte *)(param_1 + 0xc4) = bVar16 >> 4 & 1;
  *(byte *)(param_1 + 0xc5) = bVar16 >> 5 & 1;
  *(byte *)(param_1 + 0xc6) = bVar16 >> 6 & 1;
  *(byte *)(param_1 + 199) = bVar16 >> 7;
  *(byte *)(param_1 + 200) = (byte)(uVar18 >> 8) & 1;
  *(byte *)(param_1 + 0xc9) = (byte)(uVar18 >> 9) & 1;
  goto LAB_1443a9602;
LAB_1443a9694:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a9696:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
      local_78 = 0;
      if (pwVar25 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1443a97bf;
      }
    }
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a97bf:
    lVar23 = 0;
    do {
      bVar16 = *(byte *)(local_70 + lVar23);
      bVar3 = "OWNINGNAME"[lVar23];
      if (bVar16 == bVar3) {
        iVar24 = 0;
        if (bVar16 == 0) goto LAB_1443a980d;
      }
      else {
        if (0x7f < (bVar3 | bVar16)) {
          iVar24 = (uint)bVar16 - (uint)bVar3;
          goto LAB_1443a980d;
        }
        if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) goto LAB_1443a980b;
      }
      lVar23 = lVar23 + 1;
    } while( true );
  }
  pwVar25 = L"";
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar10 * 0x28) != 0) {
    pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar10 * 0x28);
  }
  local_140 = (wchar_t *)_wtoi64(pwVar25);
  puVar26 = local_180;
  iVar27 = local_194;
  if (local_140 == (wchar_t *)0x0) goto LAB_1443a9e94;
  FUN_141904fbe(&local_f8,&local_140);
  plVar12 = uStack_f0;
  iVar27 = local_194;
  if (uStack_f0 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x90) = local_f8;
    plVar13 = *(longlong **)(param_1 + 0x98);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
LAB_1443a9b41:
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar24 = *piVar1;
        UNLOCK();
joined_r0x0001443a9cdd:
        if (iVar24 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x90) = local_f8;
    plVar13 = *(longlong **)(param_1 + 0x98);
    if (uStack_f0 == plVar13) {
      LOCK();
      plVar13 = uStack_f0 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*uStack_f0)(uStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar24 = *piVar1;
        UNLOCK();
        plVar13 = plVar12;
        goto joined_r0x0001443a9cdd;
      }
    }
    else {
      *(longlong **)(param_1 + 0x98) = uStack_f0;
      if (plVar13 != (longlong *)0x0) goto LAB_1443a9b41;
    }
  }
  plVar12 = uStack_f0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar13 = uStack_f0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  goto LAB_1443a9d12;
LAB_1443a980b:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a980d:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
      local_78 = 0;
      if (pwVar25 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1443a993a;
      }
    }
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a993a:
    lVar23 = 0;
    do {
      bVar16 = *(byte *)(local_70 + lVar23);
      bVar3 = "CONMETHOD"[lVar23];
      if (bVar16 == bVar3) {
        iVar24 = 0;
        if (bVar16 == 0) goto LAB_1443a9988;
      }
      else {
        if (0x7f < (bVar3 | bVar16)) {
          iVar24 = (uint)bVar16 - (uint)bVar3;
          goto LAB_1443a9988;
        }
        if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) goto LAB_1443a9986;
      }
      lVar23 = lVar23 + 1;
    } while( true );
  }
  lVar23 = *(longlong *)(param_1 + 0x38);
  iVar24 = *(int *)(lVar23 + 0x18 + lVar10 * 0x28);
  pwVar25 = L"";
  if ((longlong)iVar24 != 0) {
    pwVar25 = *(wchar_t **)(lVar23 + 0x10 + lVar10 * 0x28);
  }
  sVar15 = wcslen(pwVar25);
  iVar27 = local_194;
  puVar26 = local_180;
  if ((int)sVar15 < 1) goto LAB_1443a9e94;
  puVar11 = (undefined8 *)(lVar23 + lVar10 * 0x28 + 0x10);
  if (local_168 != puVar11) {
    pvVar5 = (void *)*puVar11;
    *(int *)(param_1 + 0xa8) = iVar24;
    if (*(int *)(param_1 + 0xac) == 0 && iVar24 == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      FUN_1446dd670(local_168,iVar24);
      if (iVar24 != 0) {
        memcpy((void *)*local_168,pvVar5,(longlong)iVar24 * 2);
      }
    }
  }
LAB_1443a9d12:
  local_188 = local_188 + 1;
  puVar26 = local_180;
  goto LAB_1443a9e94;
LAB_1443a9986:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a9988:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
      local_78 = 0;
      if (pwVar25 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1443a9a1e;
      }
    }
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a9a1e:
    lVar23 = 0;
    do {
      bVar16 = *(byte *)(local_70 + lVar23);
      bVar3 = (&DAT_14ba42dd9)[lVar23];
      if (bVar16 == bVar3) {
        iVar24 = 0;
        if (bVar16 == 0) goto LAB_1443a9a6c;
      }
      else {
        if (0x7f < (bVar3 | bVar16)) {
          iVar24 = (uint)bVar16 - (uint)bVar3;
          goto LAB_1443a9a6c;
        }
        if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) goto LAB_1443a9a6a;
      }
      lVar23 = lVar23 + 1;
    } while( true );
  }
  uVar9 = FUN_148faf00a(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28 + 0x10);
  *(undefined1 *)(local_158 + 8) = uVar9;
LAB_1443a9602:
  local_188 = local_188 + 1;
  iVar27 = local_194;
LAB_1443a9e94:
  puVar11 = local_158;
  plVar12 = local_160;
  uVar30 = uVar30 & ~(uint)uVar29;
  puVar21 = *(uint **)(param_1 + 0x58);
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    puVar21 = puVar26;
  }
  iVar24 = *(int *)(param_1 + 0x60);
  iVar17 = (int)uVar28;
  lVar10 = (longlong)iVar17;
  uVar18 = puVar21[lVar10] & uVar30;
  if (uVar18 == 0) {
    iVar19 = iVar24 + 0x1e;
    if (-1 < iVar24 + -1) {
      iVar19 = iVar24 + -1;
    }
    iVar19 = iVar19 >> 5;
    iVar20 = iVar19;
    if (iVar19 < iVar17) {
      iVar20 = iVar17;
    }
    if (iVar19 <= iVar17) goto LAB_1443a9fb4;
    lVar23 = 0;
    while( true ) {
      iVar27 = iVar27 + 0x20;
      uVar18 = puVar21[lVar10 + lVar23 + 1];
      if (uVar18 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar20 - lVar10 == lVar23) goto LAB_1443a9fb4;
    }
    uVar28 = (ulonglong)(iVar17 + (int)lVar23 + 1);
    uVar30 = 0xffffffff;
  }
  uVar29 = (ulonglong)(-uVar18 & uVar18);
  uVar2 = uVar29 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar17 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if (iVar24 <= iVar17) goto LAB_1443a9fb4;
  goto LAB_1443a942c;
LAB_1443a9a6a:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a9a6c:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 == 0) {
    local_140 = (wchar_t *)0x0;
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar10 * 0x28);
    pvVar5 = *(void **)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar10 * 0x28);
    local_138 = CONCAT44(local_138._4_4_,uVar18);
    if ((longlong)(int)uVar18 == 0) {
      local_138 = (ulonglong)uVar18;
    }
    else {
      FUN_1446dd670(&local_140,uVar18,0);
      memcpy(local_140,pvVar5,(longlong)(int)uVar18 * 2);
    }
    puVar26 = local_180;
    iVar27 = local_194;
    FUN_140c540b4(&local_140,L"steam.",6,1);
    pwVar25 = L"";
    if ((int)local_138 != 0) {
      pwVar25 = local_140;
    }
    local_100 = _wtoi64(pwVar25);
    if (local_100 != 0) {
      FUN_141904fbe(&local_118,&local_100);
      local_f8 = *local_148;
      plVar12 = (longlong *)local_148[1];
      *local_148 = local_118;
      local_148[1] = CONCAT44(uStack_10c,uStack_110);
      uStack_f0._0_4_ = SUB84(plVar12,0);
      uStack_f0._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
      uStack_110 = (undefined4)uStack_f0;
      uStack_10c = uStack_f0._4_4_;
      local_118 = local_f8;
      uStack_f0 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      local_184 = local_184 + 1;
    }
    if (local_140 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1443a9e94;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar10 * 0x28) == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + lVar10 * 0x28);
    local_78 = 0;
    if (pwVar25 == (wchar_t *)0x0) {
      local_70 = 0;
      local_68 = 0;
      goto LAB_1443a9b9f;
    }
  }
  local_78 = 0;
  sVar15 = wcslen(pwVar25);
  FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
LAB_1443a9b9f:
  lVar23 = 0;
  do {
    bVar16 = *(byte *)(local_70 + lVar23);
    bVar3 = (&DAT_14ba42de1)[lVar23];
    if (bVar16 == bVar3) {
      iVar24 = 0;
      if (bVar16 == 0) goto LAB_1443a9bed;
    }
    else {
      if (0x7f < (bVar3 | bVar16)) {
        iVar24 = (uint)bVar16 - (uint)bVar3;
        goto LAB_1443a9bed;
      }
      if ((&DAT_149e05da0)[bVar16] != (&DAT_149e05da0)[(uint)bVar3]) break;
    }
    lVar23 = lVar23 + 1;
  } while( true );
  iVar24 = (uint)(byte)(&DAT_149e05da0)[bVar16] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar3];
LAB_1443a9bed:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (iVar24 == 0) {
    pwVar25 = L"";
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar10 * 0x28) != 0) {
      pwVar25 = *(wchar_t **)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar10 * 0x28);
    }
    iVar24 = _wtoi(pwVar25);
    (**(code **)(*local_178 + 0x28))(local_178,iVar24);
    local_184 = local_184 + 1;
    iVar27 = local_194;
    goto LAB_1443a9e94;
  }
  local_118 = 0;
  local_140 = (wchar_t *)((ulonglong)local_140 & 0xffffffffffffff00);
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_11c = 0xffffffff;
  lVar23 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar23 + 0x18 + lVar10 * 0x28) == 0) {
    pwVar25 = L"";
LAB_1443a9d33:
    local_78 = 0;
    sVar15 = wcslen(pwVar25);
    FUN_1449b853c(&local_f8,pwVar25,sVar15 & 0xffffffff,1);
    lVar23 = *(longlong *)(param_1 + 0x38);
  }
  else {
    pwVar25 = *(wchar_t **)(lVar23 + 0x10 + lVar10 * 0x28);
    local_78 = 0;
    if (pwVar25 != (wchar_t *)0x0) goto LAB_1443a9d33;
    local_70 = 0;
    local_68 = 0;
  }
  puVar22 = &DAT_149dfb77a;
  if (*(int *)(lVar23 + 8 + lVar10 * 0x28) != 0) {
    puVar22 = *(undefined2 **)(lVar23 + lVar10 * 0x28);
  }
  cVar8 = FUN_1443a2c5b(puVar22,local_70,&local_118,&local_140);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  iVar27 = local_194;
  if (cVar8 == '\0') {
    local_16c = 0;
  }
  else {
    FUN_145b2079c(local_150,local_118,&local_140);
  }
  FUN_140c3a2ac(&local_140);
  goto LAB_1443a9e94;
LAB_1443a9fb4:
  if (((byte)local_16c & local_188 == 4) == 0) {
    bVar6 = false;
  }
  else if ((local_184 == 2) ||
          ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0 &&
           (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x98))(), cVar8 != '\0')))) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar10 = *(longlong *)(param_1 + 0x30);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)puVar11[3];
    puVar11[2] = uVar4;
    puVar11[3] = lVar10;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar13 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (local_190 == (longlong *)0x0) {
      puVar11[4] = local_178;
      plVar13 = (longlong *)puVar11[5];
      if (plVar13 != (longlong *)0x0) {
        puVar11[5] = 0;
LAB_1443aa0af:
        LOCK();
        plVar14 = plVar13 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar24 = *piVar1;
          UNLOCK();
joined_r0x0001443aa0eb:
          if (iVar24 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
      puVar11[4] = local_178;
      plVar13 = (longlong *)puVar11[5];
      if (local_190 == plVar13) {
        LOCK();
        plVar13 = local_190 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar24 = *piVar1;
          UNLOCK();
          plVar13 = local_190;
          goto joined_r0x0001443aa0eb;
        }
      }
      else {
        puVar11[5] = local_190;
        if (plVar13 != (longlong *)0x0) goto LAB_1443aa0af;
      }
    }
    if (plVar12 == (longlong *)0x0) {
      *(undefined8 **)(param_1 + 0x188) = puVar11;
      plVar13 = *(longlong **)(param_1 + 400);
      if (plVar13 == (longlong *)0x0) goto LAB_1443aa192;
      *(undefined8 *)(param_1 + 400) = 0;
LAB_1443aa145:
      LOCK();
      plVar14 = plVar13 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      bVar6 = true;
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar24 = *piVar1;
        UNLOCK();
joined_r0x0001443aa182:
        bVar6 = true;
        if (iVar24 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          goto LAB_1443aa192;
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      *(undefined8 **)(param_1 + 0x188) = puVar11;
      plVar13 = *(longlong **)(param_1 + 400);
      if (plVar12 == plVar13) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        bVar6 = true;
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar24 = *piVar1;
          UNLOCK();
          plVar13 = plVar12;
          goto joined_r0x0001443aa182;
        }
      }
      else {
        *(longlong **)(param_1 + 400) = plVar12;
        if (plVar13 != (longlong *)0x0) goto LAB_1443aa145;
LAB_1443aa192:
        bVar6 = true;
      }
    }
  }
  else {
LAB_1443aa083:
    bVar6 = false;
  }
  goto LAB_1443aa194;
}



// FUNCTION 1443aa2d0 FUN_1443aa2d0 body=1446 status=ok
// SIG undefined FUN_1443aa2d0(void)

void FUN_1443aa2d0(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  char *_Str;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  ulonglong uStack_190;
  longlong local_188 [2];
  longlong *local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1446f470e(&local_168,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_140272950(&local_168);
  (**(code **)(*plVar8 + 0x90))(plVar8,&local_178);
  (**(code **)(*local_178 + 0x18))(local_178,*(undefined4 *)(param_2 + 2));
  (**(code **)(*local_178 + 0x28))(local_178,*param_2);
  if (*(char *)(param_2 + 6) != '\x01') goto LAB_1443aa54b;
  uVar2 = param_2[1];
  local_68 = 0;
  sVar9 = strlen((char *)(param_2 + 0x76));
  FUN_1446e6fe8(&local_168,param_2 + 0x76,sVar9 & 0xffffffff,1);
  FUN_140056680(local_188,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  iVar6 = FUN_1414a827a();
  local_198 = (longlong *)0x0;
  uStack_190 = 0;
  FUN_1403de9f2(local_188,&local_198,&DAT_149e06196);
  plVar8 = local_198;
  if ((int)uStack_190 < 1) {
LAB_1443aa513:
    iVar7 = 0;
  }
  else {
    FUN_1400b22c2(&local_168,"BUILDID");
    uVar17 = 0;
    uVar13 = (ulonglong)((int)uStack_160 - 1);
    if ((int)uStack_160 == 0) {
      uVar13 = uVar17;
    }
    pwVar10 = local_168;
    if ((int)uStack_160 == 0) {
      pwVar10 = L"";
    }
    if (0 < (int)uVar13) {
      if ((int)plVar8[1] == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)*plVar8;
      }
      lVar15 = 0;
LAB_1443aa43e:
      uVar3 = *(ushort *)((longlong)puVar11 + lVar15);
      uVar4 = *(ushort *)((longlong)pwVar10 + lVar15);
      if (uVar3 == uVar4) {
        iVar7 = 0;
        if ((uVar3 == 0) || (uVar13 == 1)) goto LAB_1443aa490;
LAB_1443aa45b:
        uVar13 = uVar13 - 1;
        lVar15 = lVar15 + 2;
        goto LAB_1443aa43e;
      }
      if ((uVar4 | uVar3) < 0x80) {
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
          iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
          goto LAB_1443aa490;
        }
        if (uVar13 == 1) {
          iVar7 = 0;
          goto LAB_1443aa490;
        }
        goto LAB_1443aa45b;
      }
      iVar7 = (uint)uVar3 - (uint)uVar4;
LAB_1443aa490:
      uVar17 = (ulonglong)(iVar7 == 0);
    }
    if (local_168 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar17 == '\0') goto LAB_1443aa513;
    puVar11 = &DAT_149dfb77a;
    uVar14 = (int)local_198[1] - 1;
    if ((int)local_198[1] == 0) {
      uVar14 = 0;
    }
    else {
      puVar11 = (undefined2 *)*local_198;
    }
    uVar12 = 8;
    if ((int)uVar14 < 8) {
      uVar12 = uVar14;
    }
    uVar13 = (ulonglong)uVar12;
    if ((int)uVar12 < 1) {
      uVar13 = 0;
    }
    FUN_14006620a(&local_168,puVar11 + uVar13,uVar14 - (int)uVar13);
    pwVar10 = L"";
    if ((int)uStack_160 != 0) {
      pwVar10 = local_168;
    }
    iVar7 = _wtoi(pwVar10);
    if (local_168 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (iVar7 == iVar6) {
    lVar15 = FUN_14001cc68(0x1a8,0x10);
    FUN_148fb0db8(lVar15,param_1);
    plVar8 = (longlong *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar6 + 1U) {
      FUN_1456bd870(plVar8,iVar6);
    }
    *(longlong *)(*plVar8 + (longlong)iVar6 * 8) = lVar15;
    FUN_140dfab96(&local_1a8,param_2 + 0xb6);
    pwVar10 = *(wchar_t **)(lVar15 + 0x18);
    plVar5 = *(longlong **)(lVar15 + 0x20);
    *(ulonglong *)(lVar15 + 0x18) = CONCAT44(uStack_1a4,local_1a8);
    *(ulonglong *)(lVar15 + 0x20) = CONCAT44(uStack_19c,uStack_1a0);
    local_168._0_4_ = SUB84(pwVar10,0);
    local_168._4_4_ = (undefined4)((ulonglong)pwVar10 >> 0x20);
    uStack_160._0_4_ = (int)plVar5;
    uStack_160._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_1a8 = (undefined4)local_168;
    uStack_1a4 = local_168._4_4_;
    uStack_1a0 = (int)uStack_160;
    uStack_19c = uStack_160._4_4_;
    local_168 = pwVar10;
    uStack_160 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar5 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    plVar5 = local_170;
    if (local_170 == (longlong *)0x0) {
      *(longlong **)(lVar15 + 0x28) = local_178;
      plVar16 = *(longlong **)(lVar15 + 0x30);
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(lVar15 + 0x30) = 0;
LAB_1443aa6a0:
        LOCK();
        plVar5 = plVar16 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x0001443aa693:
          if (iVar6 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
      *(longlong **)(lVar15 + 0x28) = local_178;
      plVar16 = *(longlong **)(lVar15 + 0x30);
      if (local_170 == plVar16) {
        LOCK();
        plVar16 = local_170 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar16 = plVar5;
          goto joined_r0x0001443aa693;
        }
      }
      else {
        *(longlong **)(lVar15 + 0x30) = local_170;
        if (plVar16 != (longlong *)0x0) goto LAB_1443aa6a0;
      }
    }
    iVar6 = 9999;
    if (*(int *)(param_2 + 4) < 9999) {
      iVar6 = *(int *)(param_2 + 4);
    }
    iVar7 = 0;
    if (0 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar15 + 0x1a0) = iVar7;
    _Str = (char *)FUN_148fb0e76(param_2);
    local_68 = 0;
    if (_Str == (char *)0x0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      sVar9 = strlen(_Str);
      FUN_1446e6fe8(&local_168,_Str,sVar9 & 0xffffffff,1);
    }
    FUN_14020fad6(lVar15 + 0xa0,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    iVar6 = *(int *)(param_2 + 0x4c);
    *(int *)(lVar15 + 0x19c) = iVar6 - *(int *)(param_2 + 0x4a);
    *(undefined4 *)(lVar15 + 0x198) = 0;
    *(int *)(lVar15 + 0xb8) = iVar6;
    *(undefined4 *)(lVar15 + 0xbc) = 0;
    *(undefined1 *)(lVar15 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0xa1);
    local_68 = 0;
    sVar9 = strlen((char *)(param_2 + 0x17));
    FUN_1446e6fe8(&local_168,param_2 + 0x17,sVar9 & 0xffffffff,1);
    FUN_140056680(&local_1a8,local_60);
    FUN_1446f470e(&local_1b0,L"MAPNAME",1);
    FUN_145cba9f8(lVar15 + 0xb0,local_1b0,&local_1a8,2);
    if (CONCAT44(uStack_1a4,local_1a8) != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                      (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_2 + 2),uVar2,lVar15);
    *(int *)(lVar15 + 0x10) = iVar6;
    if (iVar6 == -1) {
      FUN_148fb06d4(plVar8,*(int *)(param_1 + 0x50) + -1);
    }
  }
  FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
LAB_1443aa54b:
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_170 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443aa878 FUN_1443aa878 body=598 status=ok
// SIG undefined FUN_1443aa878(void)

void FUN_1443aa878(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  SteamInternal_ContextInit(&PTR_FUN_14c764830);
  if ((char)param_1[6] == '\0') {
    plVar4 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c7648d0);
    param_1[7] = *plVar4;
    local_3c = 0;
    local_48 = 0;
    (**(code **)(*param_1 + 0x40))(param_1);
    if (*(char *)(param_1[0xb] + 0x78) == '\x01') {
      lVar6 = (**(code **)(*(longlong *)param_1[7] + 8))
                        ((longlong *)param_1[7],*(undefined4 *)(param_1[2] + 0xdc),param_1 + 5);
    }
    else {
      local_58 = param_1 + 5;
      lVar6 = (*(code *)**(undefined8 **)param_1[7])
                        ((undefined8 *)param_1[7],*(undefined4 *)(param_1[2] + 0xdc),&local_48,
                         local_3c);
    }
    param_1[0xd] = lVar6;
    if (lVar6 == 0) {
      LOCK();
      *(undefined4 *)(param_1 + 3) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      UNLOCK();
    }
    FUN_148fb0f0e(param_1 + 9,*(undefined4 *)(param_1[0xb] + 0x1c));
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + 0.0625;
  iVar3 = *(int *)(param_1[0xb] + 0x10);
  iVar1 = *(int *)(param_1[0xb] + 0x1c);
  local_48 = CONCAT44(local_48._4_4_,0x41700000);
  local_58 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystemSteam",L"OnlineAsyncTaskSteamFindServerBaseTimeout");
  if (*(char *)((longlong)param_1 + 0x31) == '\x01') {
    bVar7 = (int)param_1[10] == 0;
  }
  else {
    bVar7 = false;
  }
  if (((iVar1 <= iVar3) || ((float)local_48 <= *(float *)(param_1 + 8))) || (bVar7)) {
    LOCK();
    *(undefined4 *)(param_1 + 3) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
    UNLOCK();
  }
  if ((int)param_1[3] != 0) {
    if (param_1[0xd] != 0) {
      (**(code **)(*(longlong *)param_1[7] + 0x40))();
      (**(code **)(*(longlong *)param_1[7] + 0x30))((longlong *)param_1[7],param_1[0xd]);
      param_1[0xd] = 0;
    }
    plVar4 = param_1 + 9;
    iVar3 = (int)param_1[10];
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*plVar4 + lVar6 * 8);
        if (*(int *)(lVar2 + 0x10) != -1) {
          puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648d0);
          (**(code **)(*(longlong *)*puVar5 + 0x80))
                    ((longlong *)*puVar5,*(undefined4 *)(lVar2 + 0x10));
          *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
          iVar3 = (int)param_1[10];
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
    FUN_148fbac74(plVar4);
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0) {
      FUN_1447ab16c(plVar4,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443aaad0 FUN_1443aaad0 body=218 status=ok
// SIG undefined FUN_1443aaad0(void)

void FUN_1443aaad0(longlong param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = (undefined2 *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  if (puVar2 != (undefined2 *)0x0) {
    FUN_1446f470e(local_30,L"WINDOWS",1);
    plVar3 = (longlong *)FUN_140272950(local_30);
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_28);
    (**(code **)(*local_28 + 0x18))(local_28,*(undefined4 *)(puVar2 + 2));
    (**(code **)(*local_28 + 0x28))(local_28,*puVar2);
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    (**(code **)(*(longlong *)*puVar4 + 0x48))();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443aabb8 FUN_1443aabb8 body=1051 status=ok
// SIG undefined FUN_1443aabb8(void)

void FUN_1443aabb8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined1 auStack_8a8 [32];
  longlong local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 *local_870;
  longlong *local_868;
  undefined1 local_860 [8];
  longlong *local_858;
  longlong *local_850;
  longlong local_848;
  longlong *local_840;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_848);
  if (local_840 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_840 + 1) = (int)local_840[1] + 1;
    UNLOCK();
    if (local_840 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_840 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar1 = (int *)((longlong)local_840 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_840 + 0x10))(local_840);
        }
      }
    }
  }
  if ((local_848 == 0) || (*(longlong *)(local_848 + 0x2e8) != 0)) goto LAB_1443aac38;
  puVar7 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  *puVar7 = &PTR_FUN_14b4c3a80;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0x100000000;
  puVar7[4] = &PTR_FUN_14b4c3a98;
  puVar7[9] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
  puVar7[0xd] = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x7c) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x84) = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b4c3ac0;
  plVar8[2] = (longlong)puVar7;
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 **)(local_848 + 0x2e8) = puVar7;
    plVar10 = *(longlong **)(local_848 + 0x2f0);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(local_848 + 0x2f0) = 0;
LAB_1443aad74:
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001443aada1:
        if (iVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 **)(local_848 + 0x2e8) = puVar7;
    plVar10 = *(longlong **)(local_848 + 0x2f0);
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x0001443aada1;
      }
    }
    else {
      *(longlong **)(local_848 + 0x2f0) = plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_1443aad74;
    }
  }
  *(undefined4 *)(*(longlong *)(local_848 + 0x2e8) + 0x18) = 1;
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = *(undefined2 **)(param_1 + 0x28);
  }
  local_880 = 0;
  local_888 = CONCAT71(local_888._1_7_,1);
  cVar6 = FUN_140751ea8(puVar12,L"SteamConnectIP=",&local_848,0x400);
  if (cVar6 != '\0') {
    pwVar9 = wcschr((wchar_t *)&local_848,L':');
    if (pwVar9 != (wchar_t *)0x0) {
      _wtoi(pwVar9 + 1);
      *pwVar9 = L'\0';
    }
    FUN_1446f470e(local_860,L"WINDOWS",1);
    plVar10 = (longlong *)FUN_140272950(local_860);
    FUN_140056680(&local_870,&local_848);
    (**(code **)(*plVar10 + 0x58))(plVar10,&local_858,&local_870);
    if (local_870 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_858 != (longlong *)0x0) {
      lVar5 = *(longlong *)(local_848 + 0x2e8);
      (**(code **)(*local_858 + 0x80))(local_858,&local_870,0);
      FUN_1446f470e(&local_878,L"SteamHostIp",1);
      FUN_1489b8392(lVar5 + 0x20,local_878,&local_870,0);
      if (local_870 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      uVar11 = FUN_14001cc68(0x90,0x10);
      local_888 = local_848 + 0x1e8;
      uVar4 = *(undefined4 *)(param_1 + 0x38);
      local_870 = puVar7;
      local_868 = plVar8;
      if (plVar8 == (longlong *)0x0) {
        FUN_148fb1586(uVar11,*(undefined8 *)(param_1 + 0x10),&local_870,uVar4);
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        FUN_148fb1586(uVar11,*(undefined8 *)(param_1 + 0x10),&local_870,uVar4);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x210),uVar11);
    }
    if (local_850 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_850 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_850)(local_850);
        LOCK();
        piVar1 = (int *)((longlong)local_850 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_850 + 0x10))(local_850);
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1443aac38:
  if (local_840 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_840 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_840)(local_840);
      LOCK();
      piVar1 = (int *)((longlong)local_840 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_840 + 0x10))(local_840);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443aafd4 FUN_1443aafd4 body=257 status=ok
// SIG undefined FUN_1443aafd4(void)

undefined4 FUN_1443aafd4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x148) | 4) != 6)) {
    uVar5 = 0;
  }
  else {
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (*(char *)(lVar2 + 0x3a) == '\0') {
      *(undefined4 *)(lVar2 + 0x148) = 4;
      plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
      uVar5 = (undefined4)CONCAT71(uVar6,1);
      if ((*plVar3 != 0) && (0 < *(int *)(lVar2 + 0x140))) {
        lVar8 = 0;
        lVar7 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x138) + lVar8);
          puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
          (**(code **)(*(longlong *)*puVar4 + 0x100))
                    ((longlong *)*puVar4,*(undefined8 *)(lVar1 + 0x18));
          lVar7 = lVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar7 < *(int *)(lVar2 + 0x140));
      }
    }
    else {
      if (*(char *)(lVar2 + 0x39) == '\0') {
        (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
      }
      *(undefined4 *)(lVar2 + 0x148) = 4;
      uVar5 = (undefined4)CONCAT71(uVar6,1);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1,param_2,uVar5);
  return uVar5;
}



// FUNCTION 1443ab0d6 FUN_1443ab0d6 body=166 status=ok
// SIG undefined FUN_1443ab0d6(void)

ulonglong FUN_1443ab0d6(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulonglong uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x148) == 4) {
      uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (*(char *)(lVar3 + 0x3a) != '\x01') {
        FUN_148fb1cdc(param_1,lVar3);
        uVar4 = CONCAT71(uVar5,1);
        goto LAB_1443ab161;
      }
      uVar4 = CONCAT71(uVar5,1);
      if ((*(char *)(lVar3 + 0x38) == '\x01') && (*(longlong *)(param_1[0x50] + 0x20) == 0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x4f] + 0x128))();
        if (cVar1 != '\0') {
          iVar2 = FUN_148fb1866(param_1,lVar3);
          uVar4 = CONCAT71(uVar5,iVar2 == 0);
        }
      }
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar3 + 0x148) = 6;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_2,uVar4 & 0xffffffff);
LAB_1443ab161:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1443ab17c FUN_1443ab17c body=870 status=ok
// SIG undefined FUN_1443ab17c(void)

ulonglong FUN_1443ab17c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 0x20))();
  if (lVar4 == 0) {
    plVar5 = (longlong *)*param_3;
    if (plVar5 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,0);
    }
    lVar4 = *param_1;
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    if (*(int *)(lVar4 + 0x148) == 7) {
      uVar7 = 0;
      goto LAB_1443ab4ba;
    }
    uVar8 = (undefined7)((ulonglong)param_3 >> 8);
    if (*(char *)(lVar4 + 0x3a) == '\0') {
      if (*(int *)(lVar4 + 0x148) == 4) {
        FUN_148fb1cdc(param_1,lVar4);
      }
      if (*(char *)(lVar4 + 0x42) == '\x01') {
        FUN_14666ebea(param_1,lVar4,param_3);
      }
      else {
        *(undefined4 *)(lVar4 + 0x148) = 7;
        (**(code **)(*(longlong *)param_1[0x4f] + 0x230))((longlong *)param_1[0x4f],&local_58);
        plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
        if (*plVar5 != 0) {
          puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
          cVar3 = (**(code **)(*(longlong *)*puVar6 + 8))();
          if ((cVar3 != '\0') && ((local_58 == 0 || (*(char *)(local_58 + 0xe0) == '\0')))) {
            puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
            (**(code **)(*(longlong *)*puVar6 + 0xa0))((longlong *)*puVar6,0,0,0);
          }
        }
        if ((char)param_1[0x59] == '\x01') {
          cVar3 = (**(code **)(*(longlong *)param_1[0x5a] + 0x28))();
          if (cVar3 != '\0') {
            puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
            uVar9 = *(undefined8 *)(lVar4 + 0x118);
            lVar2 = param_1[0x4f];
            QueryPerformanceCounter(&local_48);
            puVar6[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
            *puVar6 = &PTR_LAB_14ba46e30;
            puVar6[2] = lVar2;
            *(undefined4 *)(puVar6 + 3) = 0;
            *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
            puVar6[4] = 0;
            *puVar6 = &PTR_FUN_14ba45640;
            *(undefined1 *)(puVar6 + 5) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x2c) = uVar9;
            FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),puVar6);
          }
        }
        puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar9 = *(undefined8 *)(lVar4 + 0x118);
        lVar4 = param_1[0x4f];
        QueryPerformanceCounter(&local_48);
        puVar6[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
        *puVar6 = &PTR_LAB_14ba46e30;
        puVar6[2] = lVar4;
        *(undefined4 *)(puVar6 + 3) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
        puVar6[4] = 0;
        *puVar6 = &PTR_FUN_14ba45570;
        puVar6[5] = uVar9;
        puVar6[6] = 0;
        *(undefined4 *)(puVar6 + 7) = 0;
        FUN_1413d6220(puVar6 + 6,param_3);
        FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),puVar6);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_50 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      uVar7 = CONCAT71(uVar8,1);
      goto LAB_1443ab4ba;
    }
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
      plVar5 = (longlong *)param_1[0x50];
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,1);
      }
      param_1[0x50] = 0;
    }
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined8 *)(lVar4 + 0x118));
    plVar5 = (longlong *)*param_3;
    if (plVar5 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,1);
    }
    lVar4 = *param_1;
    uVar7 = CONCAT71(uVar8,1);
    uVar9 = 1;
  }
  (**(code **)(lVar4 + 0x108))(param_1,param_2,uVar9);
LAB_1443ab4ba:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ab4e4 FUN_1443ab4e4 body=26 status=ok
// SIG undefined FUN_1443ab4e4(void)

undefined8 FUN_1443ab4e4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x140))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1443ab4fe FUN_1443ab4fe body=26 status=ok
// SIG undefined FUN_1443ab4fe(void)

undefined8 FUN_1443ab4fe(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1443ab518 FUN_1443ab518 body=26 status=ok
// SIG undefined FUN_1443ab518(void)

undefined8 FUN_1443ab518(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x170))(param_1,param_3,0);
  return 0;
}



// FUNCTION 1443ab532 FUN_1443ab532 body=352 status=ok
// SIG undefined FUN_1443ab532(void)

ulonglong FUN_1443ab532(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  cVar4 = (**(code **)(*(longlong *)param_1[0x4f] + 0x120))();
  if (cVar4 != '\0') {
    *(undefined4 *)(*param_3 + 0x18) = 3;
    uVar7 = 0;
    (**(code **)(*param_1 + 0x1a0))(param_1,0);
    goto LAB_1443ab59a;
  }
  iVar5 = 0x3e5;
  if ((param_1[0x5d] == 0) && (lVar2 = *param_3, *(int *)(lVar2 + 0x18) != 1)) {
    FUN_145fee2f2(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10));
    *(undefined4 *)(lVar2 + 0x10) = 0;
    if (*(int *)(lVar2 + 0x14) != 0) {
      FUN_148fa5a02(lVar2 + 8,0);
    }
    lVar2 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      param_1[0x5d] = lVar2;
      plVar6 = (longlong *)param_1[0x5e];
      if (plVar6 != (longlong *)0x0) {
        param_1[0x5e] = 0;
LAB_1443ab638:
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x0001443ab628:
          if (iVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      param_1[0x5d] = lVar2;
      plVar6 = (longlong *)param_1[0x5e];
      if (plVar3 == plVar6) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar6 = plVar3;
          goto joined_r0x0001443ab628;
        }
      }
      else {
        param_1[0x5e] = (longlong)plVar3;
        if (plVar6 != (longlong *)0x0) goto LAB_1443ab638;
      }
    }
    if (*(char *)(*param_3 + 0x78) == '\0') {
      FUN_148fb1e4c(param_1,param_3);
    }
    else {
      iVar5 = FUN_148fb201e(param_1);
      if (iVar5 != 0x3e5) goto LAB_1443ab589;
    }
    *(undefined4 *)(*param_3 + 0x18) = 1;
    iVar5 = 0x3e5;
  }
LAB_1443ab589:
  uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),iVar5 == 0x3e5 || iVar5 == 0);
LAB_1443ab59a:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1443ab692 FUN_1443ab692 body=524 status=ok
// SIG undefined FUN_1443ab692(void)

undefined4
FUN_1443ab692(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_188 [32];
  undefined *local_168;
  undefined **local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14666eda4(&local_160,param_3);
  plVar3 = local_158;
  local_168 = local_160[3];
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar4 = FUN_1458ed9e4(&local_168);
  if ((char)uVar4 == '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1,0);
    local_160 = &PTR_FUN_14b4c3b18;
    local_158 = (longlong *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = &PTR_FUN_14b4c3b20;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = FUN_1414a827a();
    local_e0 = 0;
    local_d8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 9999;
    plVar3 = (longlong *)*param_5;
    if (plVar3 != (longlong *)0x0 && (int)param_5[1] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,0,0,&local_160);
    }
    FUN_14124efea(&local_160);
  }
  else {
    uVar5 = FUN_14001cc68(0x80,0x10);
    FUN_145f8bda2(uVar5,param_1[0x4f],local_168,param_5);
    FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ab8a0 FUN_1443ab8a0 body=427 status=ok
// SIG undefined FUN_1443ab8a0(void)

void FUN_1443ab8a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = &PTR_FUN_14b4c3b20;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = FUN_1414a827a();
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x10);
    *(uint *)(lVar3 + 0x10) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x14) < iVar2 + 1U) {
      FUN_145fee31c((longlong *)(lVar3 + 8),iVar2);
    }
    lVar3 = *(longlong *)(lVar3 + 8);
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x120);
    *puVar1 = &PTR_FUN_14b4c3b18;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_145ad316c(puVar1 + 5);
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 9999;
    local_124 = 0;
    local_120 = 0;
    local_130 = param_2;
    local_128 = param_3;
    FUN_148fb2d06(&local_130,lVar3 + (longlong)iVar2 * 0x120);
  }
  FUN_14124f074(&local_118);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443aba4c FUN_1443aba4c body=548 status=ok
// SIG undefined FUN_1443aba4c(void)

void FUN_1443aba4c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x52);
  EnterCriticalSection(lpCriticalSection);
  iVar4 = (int)param_1[0x58];
  if (0 < iVar4) {
    lVar6 = 0x3a;
    lVar7 = 0;
    do {
      if ((*(char *)(param_1[0x57] + -2 + lVar6) == '\x01') &&
         (*(char *)(param_1[0x57] + lVar6) == '\x01')) {
        cVar3 = (**(code **)(*(longlong *)param_1[0x4f] + 0x128))();
        if (cVar3 != '\0') {
          LeaveCriticalSection(lpCriticalSection);
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_1446efa72(&local_38,0,3,0x10);
          local_30 = 3;
          *local_38 = &PTR_LAB_14ba3a100;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_38[2] = lVar7;
          *local_38 = &PTR_FUN_14ba46210;
          local_38[3] = param_1;
          local_38[4] = FUN_148fb1bc4;
          (**(code **)(*(longlong *)param_1[0x50] + 0x18))((longlong *)param_1[0x50],&local_38);
          if (local_30 != 0) {
            if (local_38 == (undefined8 *)0x0) goto LAB_1443abae3;
            (**(code **)*local_38)(local_38,0);
            FUN_1446efa72(&local_38,0,0,0x10);
            local_30 = 0;
          }
          if (local_38 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1443abae3;
        }
        iVar4 = (int)param_1[0x58];
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x150;
    } while (lVar7 < iVar4);
  }
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
LAB_1443abae3:
  plVar5 = (longlong *)param_1[0x5d];
  if (plVar5 != (longlong *)0x0) {
    if (0 < (int)plVar5[2]) {
      (**(code **)(*plVar5 + 8))();
      plVar5 = (longlong *)param_1[0x5d];
    }
    *(undefined4 *)(plVar5 + 3) = 2;
    param_1[0x5d] = 0;
    plVar5 = (longlong *)param_1[0x5e];
    if (plVar5 != (longlong *)0x0) {
      param_1[0x5e] = 0;
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x1a0))(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443abc72 FUN_1443abc72 body=167 status=ok
// SIG undefined FUN_1443abc72(void)

ulonglong FUN_1443abc72(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  
  lVar3 = param_1[0x5d];
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) != 1)) {
    uVar5 = 0;
  }
  else {
    uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(char *)(lVar3 + 0x78) == '\x01') {
      (**(code **)(*(longlong *)param_1[0x50] + 0x38))();
      *(undefined4 *)(param_1[0x5d] + 0x18) = 3;
      uVar5 = CONCAT71(uVar6,1);
    }
    else {
      *(undefined4 *)(lVar3 + 0x18) = 3;
      param_1[0x5d] = 0;
      plVar4 = (longlong *)param_1[0x5e];
      uVar5 = CONCAT71(uVar6,1);
      if (plVar4 != (longlong *)0x0) {
        param_1[0x5e] = 0;
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x1d8))(param_1,1);
  return uVar5 & 0xffffffff;
}



// FUNCTION 1443abd1a FUN_1443abd1a body=1033 status=ok
// SIG undefined FUN_1443abd1a(void)

undefined8 FUN_1443abd1a(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x5d] == 0) {
    local_58 = 0;
    local_48 = 0;
    puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
    cVar5 = (**(code **)(*(longlong *)*puVar6 + 0x40))
                      ((longlong *)*puVar6,*(undefined8 *)(param_3 + 0x18),&local_58);
    if ((cVar5 != '\0') && (((uint)local_58 & 0xffffff) == *(uint *)(param_1[0x4f] + 0xdc))) {
      plVar10 = param_1 + 0x5d;
      puVar6 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      *puVar6 = &PTR_FUN_14b4c3a80;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0x100000000;
      puVar6[4] = &PTR_FUN_14b4c3a98;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x54) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
      puVar6[0xd] = 0;
      *(undefined4 *)(puVar6 + 0xe) = 0;
      *(undefined1 *)(puVar6 + 0xf) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x84) = 0;
      plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b4c3ac0;
      plVar7[2] = (longlong)puVar6;
      if (plVar7 == (longlong *)0x0) {
        param_1[0x5d] = (longlong)puVar6;
        plVar9 = (longlong *)param_1[0x5e];
        if (plVar9 != (longlong *)0x0) {
          param_1[0x5e] = 0;
LAB_1443abf2d:
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
joined_r0x0001443abf1d:
            if (iVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        param_1[0x5d] = (longlong)puVar6;
        plVar9 = (longlong *)param_1[0x5e];
        if (plVar7 == plVar9) {
          LOCK();
          plVar9 = plVar7 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar9 = plVar7;
            goto joined_r0x0001443abf1d;
          }
        }
        else {
          param_1[0x5e] = (longlong)plVar7;
          if (plVar9 != (longlong *)0x0) goto LAB_1443abf2d;
        }
      }
      *(undefined4 *)(*plVar10 + 0x18) = 1;
      cVar5 = FUN_1458ed9e4(&local_48);
      if (cVar5 == '\0') {
        FUN_1446f470e(local_78,L"WINDOWS",1);
        plVar9 = (longlong *)FUN_140272950(local_78);
        (**(code **)(*plVar9 + 0x90))(plVar9,&local_68);
        (**(code **)(*local_68 + 0x18))(local_68,uStack_50 & 0xffffffff);
        (**(code **)(*local_68 + 0x28))(local_68,uStack_50._4_2_);
        lVar4 = *plVar10;
        (**(code **)(*local_68 + 0x80))(local_68,local_78,1);
        FUN_1446f470e(&local_80,L"SteamHostIp",1);
        FUN_1489b8392(lVar4 + 0x20,local_80,local_78,0);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        uVar8 = FUN_14001cc68(0x90,0x10);
        local_98 = param_1 + (longlong)param_2 * 3 + 0x31;
        FUN_148fb2468(uVar8,param_1[0x4f],plVar10,param_2);
        FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),uVar8);
        plVar10 = local_60;
      }
      else {
        FUN_140dfab96(&local_68,&local_48);
        uVar8 = FUN_14001cc68(0x78,0x10);
        local_90 = param_1 + (longlong)param_2 * 3 + 0x31;
        local_98 = (longlong *)CONCAT44(local_98._4_4_,param_2);
        FUN_148fb23da(uVar8,param_1[0x4f],local_68,plVar10);
        FUN_1410d2116(*(undefined8 *)(param_1[0x4f] + 0x210),uVar8);
        plVar10 = local_60;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      uVar8 = 1;
      goto LAB_1443abec7;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x308))(param_1,param_2,0,&local_58);
  FUN_145fee2f2(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_1443abec7:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ac124 FUN_1443ac124 body=102 status=ok
// SIG undefined FUN_1443ac124(void)

undefined8 FUN_1443ac124(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x308))(0,0,0,&local_28);
  FUN_145fee2f2(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ac18c FUN_1443ac18c body=601 status=ok
// SIG undefined FUN_1443ac18c(void)

byte FUN_1443ac18c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte bVar10;
  wchar_t *_Str;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  wchar_t *local_f0;
  int local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x100), lVar5 != 0)) {
    uVar9 = *(uint *)(lVar5 + 8);
    if (uVar9 == 1) {
      cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x28))();
      if (cVar3 != '\0') {
        if (0 < (int)param_4[1]) {
          lVar12 = 0;
          lVar11 = 0;
          bVar10 = 0;
          do {
            lVar1 = *(longlong *)(*param_4 + lVar12);
            puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
            bVar4 = (**(code **)(*(longlong *)*puVar6 + 0x80))
                              ((longlong *)*puVar6,
                               *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x18),
                               *(undefined8 *)(lVar1 + 0x18));
            bVar10 = bVar10 | bVar4;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 0x10;
          } while (lVar11 < (int)param_4[1]);
          goto LAB_1443ac253;
        }
        goto LAB_1443ac251;
      }
      uVar9 = *(uint *)(lVar5 + 8);
    }
    if ((uVar9 & 0xfffffffe) == 2) {
      FUN_148faeaca(param_1,&local_f0,param_3);
      if ((int)param_4[1] < 1) {
        bVar10 = 0;
      }
      else {
        lVar5 = 0;
        lVar11 = 0;
        bVar10 = 0;
        do {
          lVar12 = *(longlong *)(*param_4 + lVar5);
          puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
          _Str = L"";
          if (local_e8 != 0) {
            _Str = local_f0;
          }
          plVar2 = (longlong *)*puVar6;
          local_60 = (undefined1 *)0x0;
          if (_Str == (wchar_t *)0x0) {
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
          }
          else {
            local_f8 = lVar12;
            sVar7 = wcslen(_Str);
            local_50 = FUN_14475aa65(0,_Str,sVar7 & 0xffffffff);
            uVar9 = local_50 + 1;
            puVar8 = (undefined1 *)0x0;
            if (0x80 < uVar9) {
              FUN_1446efa72(&local_60,0,uVar9,1);
              puVar8 = local_60;
            }
            local_58 = puVar8;
            if (puVar8 == (undefined1 *)0x0) {
              local_58 = local_e0;
            }
            FUN_14475a98a(local_58,uVar9,_Str,(int)sVar7 + 1);
            lVar12 = local_f8;
          }
          bVar4 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(lVar12 + 0x18),local_58);
          if (local_60 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          bVar10 = bVar10 | bVar4;
          lVar11 = lVar11 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar11 < (int)param_4[1]);
      }
      if (local_f0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1443ac253;
    }
  }
LAB_1443ac251:
  bVar10 = 0;
LAB_1443ac253:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10 & 1;
}



// FUNCTION 1443ac3e6 FUN_1443ac3e6 body=240 status=ok
// SIG undefined FUN_1443ac3e6(void)

undefined4 FUN_1443ac3e6(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if (lVar6 == 0) {
    uVar4 = 0;
    goto LAB_1443ac4a6;
  }
  local_30 = *(undefined8 *)(lVar6 + 0x100);
  local_28 = *(longlong **)(lVar6 + 0x108);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892fc8 == param_4) {
    uVar5 = FUN_1489b8e3b(lVar6 + 0x28);
LAB_1443ac469:
    uVar4 = FUN_1443ac4d7(&local_30,param_3,uVar5);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (DAT_14c892fc4 == param_4) goto LAB_1443ac469;
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1443ac4a6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ac4d7 FUN_1443ac4d7 body=394 status=ok
// SIG undefined FUN_1443ac4d7(void)

undefined8 FUN_1443ac4d7(longlong *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_1443ac5b7:
    uVar5 = 0;
  }
  else {
    if (*(longlong **)(lVar4 + 0x20) == (longlong *)0x0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x98))();
      lVar4 = *param_1;
    }
    if (((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
        (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x98))(), cVar2 == '\0')) ||
       (*(char *)(*param_1 + 0x40) != '\x01')) {
      if (cVar1 == '\0') goto LAB_1443ac5b7;
      iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x38))();
      if (0 < param_3) {
        iVar3 = param_3;
      }
      (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x80))
                (*(longlong **)(*param_1 + 0x20),&local_48,0);
      puVar7 = local_48;
      if (local_40 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      pwVar6 = L"steam.%s:%d";
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x10) + 0x38))();
      if (0 < param_3) {
        iVar3 = param_3;
      }
      (**(code **)(**(longlong **)(*param_1 + 0x10) + 0x80))
                (*(longlong **)(*param_1 + 0x10),&local_48,0);
      puVar7 = local_48;
      if (local_40 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      pwVar6 = L"%s:%d";
    }
    FUN_140002266(&local_38,pwVar6,puVar7,iVar3);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1443ac662 FUN_1443ac662 body=234 status=ok
// SIG undefined FUN_1443ac662(void)

undefined4 FUN_1443ac662(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0x100);
  if (lVar3 == 0) {
    uVar5 = 0;
    goto LAB_1443ac71c;
  }
  local_28 = *(longlong **)(param_2 + 0x108);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_30 = lVar3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892fc8 == param_3) {
    uVar6 = FUN_1489b8e3b(param_2 + 0x28);
LAB_1443ac6df:
    uVar5 = FUN_1443ac4d7(&local_30,param_4,uVar6);
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    if (DAT_14c892fc4 == param_3) goto LAB_1443ac6df;
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1443ac71c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ac74e FUN_1443ac74e body=45 status=ok
// SIG undefined FUN_1443ac74e(void)

void FUN_1443ac74e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x280);
  if ((plVar1 != (longlong *)0x0) && (0 < (int)plVar1[5])) {
    (**(code **)(*plVar1 + 0x40))();
  }
  FUN_1443ac77c(param_1);
  return;
}



// FUNCTION 1443ac77c FUN_1443ac77c body=209 status=ok
// SIG undefined FUN_1443ac77c(void)

void FUN_1443ac77c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2f8);
  if ((iVar1 != 0) && ((longlong)*(int *)(param_1 + 0x1f0) != 0)) {
    lVar4 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x1e8) + 8 + lVar4) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar4) != 0)) {
        lVar4 = FUN_14001cc68(0x40,0x10);
        if (iVar1 == 1) {
          uVar2 = *(undefined8 *)(param_1 + 0x300);
          puVar3 = (undefined8 *)FUN_14600b90e();
          FUN_148fab388(lVar4,*(undefined8 *)(param_1 + 0x278),*puVar3,uVar2);
        }
        else {
          puVar3 = (undefined8 *)FUN_14600b90e();
          FUN_148fab222(lVar4,*(undefined8 *)(param_1 + 0x278),*puVar3,param_1 + 0x310);
        }
        if (lVar4 != 0) {
          FUN_143e6b0f2(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),lVar4);
        }
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        return;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1f0) * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 1443ac84e FUN_1443ac84e body=797 status=ok
// SIG undefined FUN_1443ac84e(void)

void FUN_1443ac84e(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145d1b8b4(param_2 + 0x38,0);
  uVar3 = FUN_1489b6cee(param_1,param_2 + 8);
  FUN_1489b6cee(uVar3,param_2 + 0xc);
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac8bb;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac8bb:
    *(undefined1 *)(param_1 + 2) = 1;
    cVar1 = '\0';
  }
  *(bool *)(param_2 + 0x10) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac8e4;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac8e4:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x12) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac90b;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac90b:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x13) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac932;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac932:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x14) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac959;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac959:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x11) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac980;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac980:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x15) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac9a7;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac9a7:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x16) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac9ce;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac9ce:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x1a) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443ac9f5;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443ac9f5:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x17) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443aca1c;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443aca1c:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x18) = cVar1 != '\0';
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if ((int)param_1[1] <= iVar2) goto LAB_1443aca43;
    *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
    cVar1 = *(char *)(*param_1 + (longlong)iVar2);
  }
  else {
LAB_1443aca43:
    *(undefined1 *)(param_1 + 2) = 1;
  }
  *(bool *)(param_2 + 0x19) = cVar1 != '\0';
  FUN_1489b6cee(param_1,param_2 + 0x30);
  if ((char)param_1[2] == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc) + 4;
    if ((int)param_1[1] < iVar2) goto LAB_1443acb31;
    uVar5 = *(uint *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc));
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    local_68 = 0;
    if ((int)uVar5 < 1) goto LAB_1443acb3f;
    do {
      if ((char)param_1[2] == '\x01') goto LAB_1443acb35;
      local_90[0] = 0;
      local_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_6c = 0xffffffff;
      FUN_148f9a68e(param_1,&local_68);
      FUN_1489bbadf(param_1,local_90);
      if ((char)param_1[2] == '\0') {
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        uVar4 = (ulonglong)iVar2;
        if (iVar2 < (int)param_1[1]) {
          *(int *)((longlong)param_1 + 0xc) = iVar2 + 1;
          uVar4 = (ulonglong)*(byte *)(*param_1 + uVar4);
        }
        else {
          *(undefined1 *)(param_1 + 2) = 1;
        }
        local_70 = (undefined1)uVar4;
      }
      FUN_145b2079c(param_2,local_68,local_90);
      FUN_140c3a2ac(local_90);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_1443acb3f;
  }
  else {
LAB_1443acb31:
    *(undefined1 *)(param_1 + 2) = 1;
  }
LAB_1443acb35:
  FUN_145d1b8b4(param_2 + 0x38,0);
LAB_1443acb3f:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443acb6c FUN_1443acb6c body=543 status=ok
// SIG undefined FUN_1443acb6c(void)

void FUN_1443acb6c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  iVar1 = *(int *)(param_1 + 0x360);
  uVar2 = *(undefined8 *)(param_1 + 0x358);
  local_70 = iVar1;
  if (iVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_148fbb180(&local_78,iVar1);
    FUN_148fbb1d8(local_78,uVar2,iVar1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (0 < *(int *)(param_1 + 0x2c0)) {
    lVar9 = 0x100;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + lVar9);
      if ((*(int *)(lVar3 + 8) == 1) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x28))(), cVar6 != '\0')) {
        FUN_148fb30fe(&local_78,lVar3 + 0x30);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x150;
    } while (lVar8 < *(int *)(param_1 + 0x2c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (0 < local_70) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(local_78 + lVar8);
      puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      FUN_1446f470e(&local_80,L"OUTOFSYNC",1);
      uVar5 = local_80;
      uVar4 = *(undefined8 *)(param_1 + 0x278);
      *puVar7 = &PTR_LAB_14ba46e70;
      QueryPerformanceCounter(&local_68);
      puVar7[1] = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
      *puVar7 = &PTR_LAB_14ba46e30;
      puVar7[2] = uVar4;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
      puVar7[4] = 0;
      *puVar7 = &PTR_FUN_14ba45530;
      puVar7[5] = uVar5;
      FUN_140df9946(uVar2,puVar7 + 6);
      FUN_1410d2116(*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x210),puVar7);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar9 < local_70);
  }
  FUN_145c3913e(local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443acd8c FUN_1443acd8c body=286 status=ok
// SIG undefined FUN_1443acd8c(void)

void FUN_1443acd8c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  local_48 = 0;
  iVar1 = *(int *)(param_1 + 0x360);
  uVar2 = *(undefined8 *)(param_1 + 0x358);
  local_40 = iVar1;
  if (iVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_148fbb180(&local_48,iVar1);
    FUN_148fbb1d8(local_48,uVar2,iVar1);
  }
  if (0 < *(int *)(param_1 + 0x2c0)) {
    lVar6 = 0x100;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + lVar6);
      if ((*(int *)(lVar3 + 8) == 1) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x28))(), cVar4 != '\0')) {
        FUN_148fb30fe(&local_48,lVar3 + 0x30);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x150;
    } while (lVar5 < *(int *)(param_1 + 0x2c0));
  }
  FUN_145c3913e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443aceb2 FUN_1443aceb2 body=247 status=ok
// SIG undefined FUN_1443aceb2(void)

void FUN_1443aceb2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  plVar4 = local_30;
  lVar3 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (lVar3 != 0) {
    FUN_141904fbe(&local_38,param_1 + 0x18);
    FUN_14666f6ba(lVar3,local_38);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443acfbe FUN_1443acfbe body=274 status=ok
// SIG undefined FUN_1443acfbe(void)

void FUN_1443acfbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  plVar3 = local_30;
  lVar4 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (lVar4 != 0) {
    FUN_141904fbe(&local_38,param_1 + 0x18);
    lVar4 = FUN_14666f6ba(lVar4,local_38);
    if (lVar4 != 0) {
      FUN_1443a3161(local_38,lVar4);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ad0d2 FUN_1443ad0d2 body=270 status=ok
// SIG undefined FUN_1443ad0d2(void)

void FUN_1443ad0d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if (((local_38 == 0) || (*(longlong *)(local_38 + 0x2e8) == 0)) ||
     (*(int *)(*(longlong *)(local_38 + 0x2e8) + 0x18) != 1)) {
    lVar4 = FUN_14666f6ba(local_38,*(undefined8 *)(param_1 + 0x18));
    if (lVar4 != 0) {
      cVar3 = FUN_1416bb482(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),lVar4,0)
      ;
      if (cVar3 != '\0') {
        FUN_1443a3161(*(undefined8 *)(param_1 + 0x18),lVar4);
      }
    }
  }
  else {
    FUN_148fb3a8e(local_38 + 800,param_1 + 0x18);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ad1e2 FUN_1443ad1e2 body=193 status=ok
// SIG undefined FUN_1443ad1e2(void)

void FUN_1443ad1e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_30 != 0) &&
     (*(undefined1 *)(local_30 + 0x2e0) = 1, *(char *)(local_30 + 0x2c8) == '\x01')) {
    (**(code **)(**(longlong **)(local_30 + 0x2d0) + 0x28))();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ad2a4 FUN_1443ad2a4 body=454 status=ok
// SIG undefined FUN_1443ad2a4(void)

void FUN_1443ad2a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  longlong *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x230))(*(longlong **)(param_1 + 0x10),&local_40);
  plVar3 = local_40;
  plVar7 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar8 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_1407c8a86(param_1 + 0x24,*(undefined4 *)(param_1 + 0x20));
    if ((int)plVar3[0xe] != *(int *)((longlong)plVar3 + 0x9c)) {
      uVar4 = *(uint *)(param_1 + 0x18);
      plVar8 = plVar3 + 0x14;
      if ((longlong *)plVar3[0x15] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar3[0x15];
      }
      iVar5 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar3[0x16] - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        lVar6 = plVar3[0xd];
        do {
          lVar9 = (longlong)iVar5 * 0x20;
          if (*(uint *)(lVar6 + lVar9) == uVar4) {
            plVar8 = *(longlong **)(lVar6 + 8 + lVar9);
            *(undefined8 *)(lVar6 + 8 + lVar9) = 0;
            iVar5 = *(int *)(lVar6 + 0x10 + lVar9);
            *(undefined4 *)(lVar6 + 0x10 + lVar9) = 0;
            local_40 = plVar8;
            local_38 = iVar5;
            FUN_148fb95c8(plVar3 + 0xd);
            if (plVar8 == (longlong *)0x0 || iVar5 == 0) {
              if (iVar5 != 0) {
                if (plVar8 != (longlong *)0x0) goto LAB_1443ad429;
                break;
              }
            }
            else {
              (**(code **)(*plVar8 + 0x60))(plVar8,uVar4,local_58);
LAB_1443ad429:
              (**(code **)*plVar8)(plVar8,0);
              FUN_1446efa72(&local_40,0,0,0x10);
              local_38 = 0;
              plVar8 = local_40;
            }
            if (plVar8 != (longlong *)0x0) {
              FUN_1400020a8(plVar8);
            }
            break;
          }
          iVar5 = *(int *)(lVar9 + lVar6 + 0x18);
        } while (iVar5 != -1);
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443ad46c FUN_1443ad46c body=414 status=ok
// SIG undefined FUN_1443ad46c(void)

void FUN_1443ad46c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x230))(*(longlong **)(param_1 + 0x10),&local_40);
  plVar5 = local_38;
  lVar4 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    FUN_140dfab96(&local_50,param_1 + 0x18);
    if (*(char *)(lVar4 + 0xe0) == '\x01') {
      cVar6 = (**(code **)(*local_50 + 0x28))(local_50);
      if (cVar6 != '\0') {
        FUN_14439fc56(lVar4,&local_40,local_50);
        if (local_40 != 0) {
          bVar7 = *(byte *)(local_40 + 0x10) & 0xfb;
          *(byte *)(local_40 + 0x10) = bVar7;
          *(undefined4 *)(local_40 + 8) = 0;
          if (*(int *)(local_40 + 0xc) != 0) {
            FUN_1446f8c06(local_40,0);
            bVar7 = *(byte *)(local_40 + 0x10);
          }
          *(byte *)(local_40 + 0x10) = 2U - (iVar3 == 0) | bVar7;
          FUN_148fab9d6(lVar4,local_50,iVar3 == 0,iVar3);
        }
        if (local_38 != (longlong *)0x0) {
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            piVar2 = (int *)((longlong)local_38 + 0xc);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ad60c FUN_1443ad60c body=71 status=ok
// SIG undefined FUN_1443ad60c(void)

void FUN_1443ad60c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0xda) == '\x01')) {
    lVar1 = FUN_140272950(&DAT_14cb8e468);
    if (lVar1 != 0) {
      FUN_1443b6c88(lVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}



// FUNCTION 1443ad653 FUN_1443ad653 body=59 status=ok
// SIG undefined FUN_1443ad653(void)

void FUN_1443ad653(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf4e30;
  if (DAT_14cbf4e30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4e30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443ad683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443ad6aa FUN_1443ad6aa body=1712 status=ok
// SIG undefined FUN_1443ad6aa(void)

void FUN_1443ad6aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  size_t sVar8;
  char *_Str;
  ulonglong *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1f8 [32];
  ulonglong **local_1d8;
  longlong *local_1d0;
  undefined4 local_1c4;
  wchar_t *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  void *local_1b0;
  int local_1a8;
  longlong local_1a0;
  ulonglong *local_198;
  int local_18c;
  ulonglong local_188;
  longlong *local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  ulonglong *local_108;
  ulonglong *local_100;
  int local_f8;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
  local_1d0 = (longlong *)*puVar7;
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (0 < *(int *)(lVar12 + 0x38)) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar10 = 0;
    lVar17 = 0;
    do {
      puVar7 = *(undefined8 **)(*(longlong *)(lVar12 + 0x30) + 0x10 + lVar10);
      cVar6 = (**(code **)*puVar7)(puVar7,uVar4);
      if (cVar6 != '\0') {
        lVar10 = lVar10 + *(longlong *)(lVar12 + 0x30);
        if (lVar10 != 0) goto LAB_1443ad742;
        break;
      }
      lVar17 = lVar17 + 1;
      lVar10 = lVar10 + 0x78;
    } while (lVar17 < *(int *)(lVar12 + 0x38));
  }
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  _Str = (char *)(**(code **)(*(longlong *)*puVar7 + 0x38))
                           ((longlong *)*puVar7,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18));
  local_88 = 0;
  if (_Str == (char *)0x0) {
    local_80 = 0;
    local_78 = 0;
  }
  else {
    sVar8 = strlen(_Str);
    FUN_1446e6fe8(&local_188,_Str,sVar8 & 0xffffffff,1);
  }
  FUN_140056680(&local_1a0,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar12 = *(longlong *)(param_1 + 0x40);
  iVar3 = *(int *)(lVar12 + 0x38);
  *(uint *)(lVar12 + 0x38) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0x3c) < iVar3 + 1U) {
    FUN_148fb5bce((longlong *)(lVar12 + 0x30),iVar3);
  }
  lVar10 = (longlong)iVar3 * 0x78 + *(longlong *)(lVar12 + 0x30);
  local_188 = *(ulonglong *)(param_1 + 0x30);
  local_180 = *(longlong **)(param_1 + 0x38);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  FUN_148fb5b34(lVar10,&local_1a0,&local_188);
  plVar11 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
LAB_1443ad742:
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x58) == 1) {
      puVar7 = *(undefined8 **)(param_1 + 0x40);
      if (0 < *(int *)(puVar7 + 5)) {
        local_1d8 = &local_108;
        plVar11 = (longlong *)(lVar10 + 0x28);
        lVar12 = 0;
        lVar10 = 0;
        do {
          lVar17 = puVar7[4];
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(lVar17 + 8 + lVar12) != 0) {
            puVar14 = *(undefined2 **)(lVar17 + lVar12);
          }
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(puVar7 + 1) != 0) {
            puVar13 = (undefined2 *)*puVar7;
          }
          FUN_140002266(&local_1b0,L"%s_%s",puVar13,puVar14);
          _Src = local_1b0;
          local_1c0 = (wchar_t *)0x0;
          lVar18 = (longlong)local_1a8;
          local_1b8 = local_1a8;
          if (lVar18 == 0) {
            local_1b4 = 0;
          }
          else {
            FUN_1446dd670(&local_1c0,local_1a8,0);
            memcpy(local_1c0,_Src,lVar18 * 2);
          }
          cVar6 = *(char *)(lVar17 + 0x10 + lVar12);
          if (cVar6 == '\a') {
            pwVar15 = L"";
            if (local_1b8 != 0) {
              pwVar15 = local_1c0;
            }
            local_108 = (ulonglong *)0x0;
            if (pwVar15 == (wchar_t *)0x0) {
              local_100 = (ulonglong *)0x0;
              local_f8 = 0;
            }
            else {
              sVar8 = wcslen(pwVar15);
              local_f8 = FUN_14475aa65(0,pwVar15,sVar8 & 0xffffffff);
              uVar16 = local_f8 + 1;
              puVar9 = (ulonglong *)0x0;
              if (0x80 < uVar16) {
                FUN_1446efa72(local_1d8,0,uVar16,1);
                puVar9 = local_108;
              }
              local_100 = puVar9;
              if (puVar9 == (ulonglong *)0x0) {
                local_100 = &local_188;
              }
              FUN_14475a98a(local_100,uVar16,pwVar15,(int)sVar8 + 1);
            }
            cVar6 = (**(code **)(*local_1d0 + 0x88))
                              (local_1d0,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),
                               local_100,&local_1c4);
            if (local_108 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            uVar5 = local_1c4;
            local_188 = local_188 & 0xffffffffffffff00;
            local_180 = (longlong *)0x0;
            uStack_178 = 0;
            local_170 = 0;
            FUN_140c3a2ac(&local_188);
            local_188 = CONCAT71(local_188._1_7_,7);
            local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar5);
LAB_1443ada86:
            local_1a0 = lVar17 + lVar12;
            local_198 = &local_188;
            FUN_140c3a6ca(plVar11,&local_18c,&local_1a0,0);
            lVar18 = (longlong)local_18c;
            lVar17 = *plVar11;
            FUN_140c3a2ac(&local_188);
            if (cVar6 == '\0') {
              lVar17 = lVar17 + lVar18 * 0x38;
              goto LAB_1443adacc;
            }
          }
          else {
            if (cVar6 == '\x01') {
              pwVar15 = L"";
              if (local_1b8 != 0) {
                pwVar15 = local_1c0;
              }
              local_108 = (ulonglong *)0x0;
              if (pwVar15 == (wchar_t *)0x0) {
                local_100 = (ulonglong *)0x0;
                local_f8 = 0;
              }
              else {
                sVar8 = wcslen(pwVar15);
                local_f8 = FUN_14475aa65(0,pwVar15,sVar8 & 0xffffffff);
                uVar16 = local_f8 + 1;
                puVar9 = (ulonglong *)0x0;
                if (0x80 < uVar16) {
                  FUN_1446efa72(local_1d8,0,uVar16,1);
                  puVar9 = local_108;
                }
                local_100 = puVar9;
                if (puVar9 == (ulonglong *)0x0) {
                  local_100 = &local_188;
                }
                FUN_14475a98a(local_100,uVar16,pwVar15,(int)sVar8 + 1);
              }
              cVar6 = (**(code **)(*local_1d0 + 0x90))
                                (local_1d0,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),
                                 local_100,&local_1c4);
              if (local_108 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              uVar5 = local_1c4;
              local_188 = local_188 & 0xffffffffffffff00;
              local_180 = (longlong *)0x0;
              uStack_178 = 0;
              local_170 = 0;
              FUN_140c3a2ac(&local_188);
              local_188 = CONCAT71(local_188._1_7_,1);
              local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar5);
              goto LAB_1443ada86;
            }
            local_188 = local_188 & 0xffffffffffffff00;
            local_180 = (longlong *)0x0;
            uStack_178 = 0;
            local_170 = 0;
            local_1a0 = lVar17 + lVar12;
            local_198 = &local_188;
            FUN_140c3a6ca(plVar11,&local_18c,&local_1a0,0);
            lVar17 = *plVar11 + (longlong)local_18c * 0x38;
            FUN_140c3a2ac(&local_188);
LAB_1443adacc:
            FUN_140c3a2ac(lVar17 + 0x10);
            LOCK();
            *(undefined4 *)(param_1 + 0x1c) = 0;
            UNLOCK();
          }
          if (local_1c0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_1b0 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar10 = lVar10 + 1;
          puVar7 = *(undefined8 **)(param_1 + 0x40);
          lVar12 = lVar12 + 0x18;
        } while (lVar10 < *(int *)(puVar7 + 5));
      }
    }
    else {
      local_188 = local_188 & 0xffffffffffffff00;
      local_180 = (longlong *)0x0;
      uStack_178 = 0;
      local_170 = 0;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (0 < *(int *)(lVar12 + 0x28)) {
        lVar17 = 0;
        lVar18 = 0;
        do {
          local_1a0 = *(longlong *)(lVar12 + 0x20) + lVar17;
          local_198 = &local_188;
          FUN_140dfa58e(lVar10 + 0x28,&local_1b0,&local_1a0,0);
          lVar18 = lVar18 + 1;
          lVar12 = *(longlong *)(param_1 + 0x40);
          lVar17 = lVar17 + 0x18;
        } while (lVar18 < *(int *)(lVar12 + 0x28));
      }
      FUN_140c3a2ac(&local_188);
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar16 = 3;
  }
  else {
    uVar16 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x40) == 3 | 2;
  }
  *(uint *)(*(longlong *)(param_1 + 0x40) + 0x40) = uVar16;
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443add5c FUN_1443add5c body=1307 status=ok
// SIG undefined FUN_1443add5c(void)

int FUN_1443add5c(longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  void *_Src;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  wchar_t *pwVar23;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  char *local_140;
  int local_12c;
  undefined1 **local_128;
  uint *local_120;
  longlong *local_118;
  wchar_t *local_110;
  int local_108;
  undefined4 local_104;
  char local_fa;
  char local_f9;
  undefined1 local_f8 [128];
  undefined1 *local_78;
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar17 = *(longlong *)(param_1 + 0x20);
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    lVar17 = (**(code **)(*(longlong *)*puVar7 + 0x80))
                       ((longlong *)*puVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18));
    *(longlong *)(param_1 + 0x20) = lVar17;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (lVar17 == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    UNLOCK();
    LOCK();
    iVar6 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = 1;
    UNLOCK();
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    plVar3 = (longlong *)*puVar7;
    local_f9 = '\0';
    bVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(param_1 + 0x20));
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar4;
    UNLOCK();
    iVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      local_140 = &local_fa;
      local_148 = 0x44d;
      cVar5 = (**(code **)(*plVar3 + 0x68))
                        (plVar3,*(undefined8 *)(param_1 + 0x20),param_1 + 0x90,0x18);
      uVar14 = 0;
      if (((cVar5 != '\0') && (local_f9 == '\0')) && (local_fa == '\0')) {
        uVar14 = (uint)(*(int *)(param_1 + 0x98) == 1);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar14;
      UNLOCK();
      iVar6 = 0;
      if (*(int *)(param_1 + 0x1c) != 0) {
        puVar7 = (undefined8 *)SteamInternal_ContextInit();
        local_118 = (longlong *)*puVar7;
        puVar15 = (uint *)(param_1 + 0x50);
        iVar6 = *(int *)(param_1 + 0x68);
        if (iVar6 == 0) {
          uVar16 = 1;
          uVar21 = 0;
          iVar18 = 0;
          iVar9 = 0;
        }
        else {
          puVar12 = *(uint **)(param_1 + 0x60);
          if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
            puVar12 = puVar15;
          }
          uVar14 = *puVar12;
          if (uVar14 == 0) {
            iVar18 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar18 = iVar6 + -1;
            }
            uVar21 = 0;
            uVar16 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar16 = uVar21;
            }
            iVar18 = 0;
            do {
              if (uVar16 == uVar21) goto LAB_1443ae237;
              iVar18 = iVar18 + 0x20;
              uVar14 = puVar12[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar21 = 0;
            iVar18 = 0;
          }
          uVar16 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar16 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar9 = (iVar18 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar9) {
            iVar9 = iVar6;
          }
        }
        if (iVar9 < iVar6) {
          local_128 = &local_78;
          uVar14 = 0xffffffff;
          local_120 = puVar15;
          do {
            lVar17 = *(longlong *)(param_1 + 0x40);
            lVar20 = (longlong)iVar9 * 0x38;
            local_110 = (wchar_t *)0x0;
            local_108 = *(int *)(lVar17 + 8 + lVar20);
            lVar22 = (longlong)local_108;
            _Src = *(void **)(lVar17 + lVar20);
            local_12c = iVar18;
            if (lVar22 == 0) {
              local_104 = 0;
            }
            else {
              FUN_1446dd670(&local_110,local_108,0);
              memcpy(local_110,_Src,lVar22 * 2);
              lVar17 = *(longlong *)(param_1 + 0x40);
            }
            cVar5 = *(char *)(lVar17 + 0x10 + lVar20);
            if (cVar5 == '\a') {
              pwVar23 = L"";
              if (local_108 != 0) {
                pwVar23 = local_110;
              }
              uVar2 = *(undefined4 *)(lVar17 + 0x18 + lVar20);
              local_78 = (undefined1 *)0x0;
              if (pwVar23 == (wchar_t *)0x0) {
                local_70 = (undefined1 *)0x0;
                local_68 = 0;
              }
              else {
                sVar8 = wcslen(pwVar23);
                local_68 = FUN_14475aa65(0,pwVar23,sVar8 & 0xffffffff);
                uVar19 = local_68 + 1;
                puVar13 = (undefined1 *)0x0;
                if (0x80 < uVar19) {
                  FUN_1446efa72(local_128,0,uVar19,1);
                  puVar13 = local_78;
                }
                local_70 = puVar13;
                if (puVar13 == (undefined1 *)0x0) {
                  local_70 = local_f8;
                }
                FUN_14475a98a(local_70,uVar19,pwVar23,(int)sVar8 + 1);
              }
              cVar5 = (**(code **)(*local_118 + 0x18))(local_118,local_70,uVar2);
LAB_1443ae122:
              if (local_78 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              puVar15 = local_120;
              if (cVar5 == '\0') goto LAB_1443ae140;
            }
            else {
              if (cVar5 == '\x01') {
                pwVar23 = L"";
                if (local_108 != 0) {
                  pwVar23 = local_110;
                }
                local_78 = (undefined1 *)0x0;
                if (pwVar23 == (wchar_t *)0x0) {
                  local_70 = (undefined1 *)0x0;
                  local_68 = 0;
                }
                else {
                  sVar8 = wcslen(pwVar23);
                  local_68 = FUN_14475aa65(0,pwVar23,sVar8 & 0xffffffff);
                  uVar19 = local_68 + 1;
                  puVar13 = (undefined1 *)0x0;
                  if (0x80 < uVar19) {
                    FUN_1446efa72(local_128,0,uVar19,1);
                    puVar13 = local_78;
                  }
                  local_70 = puVar13;
                  if (puVar13 == (undefined1 *)0x0) {
                    local_70 = local_f8;
                  }
                  FUN_14475a98a(local_70,uVar19,pwVar23,(int)sVar8 + 1);
                }
                cVar5 = (**(code **)(*local_118 + 0x20))(local_118,local_70);
                goto LAB_1443ae122;
              }
LAB_1443ae140:
              LOCK();
              *(undefined4 *)(param_1 + 0x1c) = 0;
              UNLOCK();
            }
            if (local_110 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 & ~(uint)uVar16;
            puVar12 = *(uint **)(param_1 + 0x60);
            if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
              puVar12 = puVar15;
            }
            iVar6 = *(int *)(param_1 + 0x68);
            iVar9 = (int)uVar21;
            lVar17 = (longlong)iVar9;
            uVar19 = puVar12[lVar17] & uVar14;
            iVar18 = local_12c;
            if (uVar19 == 0) {
              iVar10 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar10 = iVar6 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar11 = iVar10;
              if (iVar10 < iVar9) {
                iVar11 = iVar9;
              }
              if (iVar10 <= iVar9) break;
              lVar20 = 0;
              while( true ) {
                iVar18 = iVar18 + 0x20;
                uVar19 = puVar12[lVar17 + lVar20 + 1];
                if (uVar19 != 0) break;
                lVar20 = lVar20 + 1;
                if (iVar11 - lVar17 == lVar20) goto LAB_1443ae237;
              }
              uVar21 = (ulonglong)(iVar9 + (int)lVar20 + 1);
              uVar14 = 0xffffffff;
            }
            uVar16 = (ulonglong)(-uVar19 & uVar19);
            uVar1 = uVar16 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar9 = (iVar18 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          } while (iVar9 < iVar6);
        }
      }
    }
  }
LAB_1443ae237:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ae282 FUN_1443ae282 body=29 status=ok
// SIG undefined FUN_1443ae282(void)

undefined8 FUN_1443ae282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ae2a0 FUN_1443ae2a0 body=32 status=ok
// SIG undefined FUN_1443ae2a0(void)

undefined8 FUN_1443ae2a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"FOnlineAsyncTaskGenericCallable");
  return param_2;
}



// FUNCTION 1443ae2c0 FUN_1443ae2c0 body=542 status=ok
// SIG undefined FUN_1443ae2c0(void)

void FUN_1443ae2c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10),&local_38);
  plVar4 = local_38;
  if (local_38 == (longlong *)0x0) goto LAB_1443ae479;
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_14b4392c0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_48[2] = lVar6;
  *local_48 = (longlong)&PTR_FUN_14ba45910;
  local_48[3] = lVar3;
  FUN_140056680(&local_58,L"default");
  (**(code **)(*plVar4 + 0xe8))(plVar4,0,&local_58,&local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_40 == 0) {
LAB_1443ae3d6:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1443ae3d6;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(*(longlong **)(param_1 + 0x10),&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x110))(local_48,&local_58,0);
    if (local_58 != 0) {
      (**(code **)(*local_38 + 0x270))();
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1443ae479:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ae4e8 FUN_1443ae4e8 body=29 status=ok
// SIG undefined FUN_1443ae4e8(void)

undefined8 FUN_1443ae4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ae51a FUN_1443ae51a body=93 status=ok
// SIG undefined FUN_1443ae51a(void)

void FUN_1443ae51a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1443ae578 FUN_1443ae578 body=93 status=ok
// SIG undefined FUN_1443ae578(void)

void FUN_1443ae578(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4392c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1443ae5d6 FUN_1443ae5d6 body=126 status=ok
// SIG undefined FUN_1443ae5d6(void)

void FUN_1443ae5d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4392c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443ae645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443ae654 FUN_1443ae654 body=65 status=ok
// SIG undefined FUN_1443ae654(void)

void FUN_1443ae654(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1443ae6da(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ae696 FUN_1443ae696 body=67 status=ok
// SIG undefined FUN_1443ae696(void)

undefined8 FUN_1443ae696(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1443ae6da(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ae6da FUN_1443ae6da body=124 status=ok
// SIG undefined FUN_1443ae6da(void)

void FUN_1443ae6da(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *param_2;
  (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,uVar3);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443ae786 FUN_1443ae786 body=83 status=ok
// SIG undefined FUN_1443ae786(void)

undefined8 * FUN_1443ae786(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ba45a00;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ae7da FUN_1443ae7da body=163 status=ok
// SIG undefined FUN_1443ae7da(void)

undefined8 * FUN_1443ae7da(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba45a20;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443ae82b;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443ae82b:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443ae892 FUN_1443ae892 body=227 status=ok
// SIG undefined FUN_1443ae892(void)

void FUN_1443ae892(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba45a20;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443ae976 FUN_1443ae976 body=227 status=ok
// SIG undefined FUN_1443ae976(void)

void FUN_1443ae976(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba45a20;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443aea5a FUN_1443aea5a body=287 status=ok
// SIG undefined FUN_1443aea5a(void)

void FUN_1443aea5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba45a20;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_148fa2108(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443aeb63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443aeb84 FUN_1443aeb84 body=20 status=ok
// SIG undefined FUN_1443aeb84(void)

undefined1 FUN_1443aeb84(longlong param_1)

{
  FUN_1443aeb98(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443aeb98 FUN_1443aeb98 body=123 status=ok
// SIG undefined FUN_1443aeb98(void)

void FUN_1443aeb98(undefined4 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c8dbc0(local_58,0xe);
  plVar1 = *(longlong **)(param_1 + 10);
  if (plVar1 != (longlong *)0x0 && param_1[0xc] != 0) {
    local_68 = local_58;
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,*(undefined8 *)(param_1 + 2),param_1 + 6);
  }
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443aec14 FUN_1443aec14 body=163 status=ok
// SIG undefined FUN_1443aec14(void)

undefined8 * FUN_1443aec14(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba45a90;
  plVar4 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443aec65;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443aec65:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443aeccc FUN_1443aeccc body=227 status=ok
// SIG undefined FUN_1443aeccc(void)

void FUN_1443aeccc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba45a90;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443aedb0 FUN_1443aedb0 body=227 status=ok
// SIG undefined FUN_1443aedb0(void)

void FUN_1443aedb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ba45a90;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_148fa2108(puVar2 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1443aee94 FUN_1443aee94 body=287 status=ok
// SIG undefined FUN_1443aee94(void)

void FUN_1443aee94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ba45a90;
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var2->Flags = (int)lVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Blink = 0;
  FUN_148fa2108(&p_Var2[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443aef9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443aefbe FUN_1443aefbe body=20 status=ok
// SIG undefined FUN_1443aefbe(void)

undefined1 FUN_1443aefbe(longlong param_1)

{
  FUN_1443aefd2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443aefd2 FUN_1443aefd2 body=123 status=ok
// SIG undefined FUN_1443aefd2(void)

void FUN_1443aefd2(undefined4 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c8dbc0(local_58,0xe);
  plVar1 = *(longlong **)(param_1 + 10);
  if (plVar1 != (longlong *)0x0 && param_1[0xc] != 0) {
    local_68 = local_58;
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,*(undefined8 *)(param_1 + 2),param_1 + 6);
  }
  FUN_145c8db80(local_58);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443af04e FUN_1443af04e body=149 status=ok
// SIG undefined FUN_1443af04e(void)

undefined8 * FUN_1443af04e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba45b40;
  plVar4 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443af09f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443af09f:
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443af0f8 FUN_1443af0f8 body=140 status=ok
// SIG undefined FUN_1443af0f8(void)

void FUN_1443af0f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148dbc940(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af184 FUN_1443af184 body=140 status=ok
// SIG undefined FUN_1443af184(void)

void FUN_1443af184(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148dbc940(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af210 FUN_1443af210 body=179 status=ok
// SIG undefined FUN_1443af210(void)

void FUN_1443af210(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_148dbc940(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443af2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443af2ce FUN_1443af2ce body=20 status=ok
// SIG undefined FUN_1443af2ce(void)

undefined1 FUN_1443af2ce(longlong param_1)

{
  FUN_1443af2e2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443af2e2 FUN_1443af2e2 body=146 status=ok
// SIG undefined FUN_1443af2e2(void)

void FUN_1443af2e2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(local_68,L"RevokeAuthToken not implemented");
  FUN_1489b73bc(local_58,local_68);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 3) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,*param_1,local_58);
  }
  FUN_145c8db80(local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443af376 FUN_1443af376 body=111 status=ok
// SIG undefined FUN_1443af376(void)

undefined8 * FUN_1443af376(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45bb0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443af3c7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443af3c7:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443af3fa FUN_1443af3fa body=129 status=ok
// SIG undefined FUN_1443af3fa(void)

void FUN_1443af3fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148fb9bd4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af47c FUN_1443af47c body=129 status=ok
// SIG undefined FUN_1443af47c(void)

void FUN_1443af47c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edf20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148fb9bd4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af4fe FUN_1443af4fe body=163 status=ok
// SIG undefined FUN_1443af4fe(void)

void FUN_1443af4fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edf20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45bb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_148fb9bd4(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443af592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443af5a2 FUN_1443af5a2 body=65 status=ok
// SIG undefined FUN_1443af5a2(void)

void FUN_1443af5a2(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443af628(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443af5e4 FUN_1443af5e4 body=67 status=ok
// SIG undefined FUN_1443af5e4(void)

undefined8 FUN_1443af5e4(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1443af628(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443af628 FUN_1443af628 body=467 status=ok
// SIG undefined FUN_1443af628(void)

void FUN_1443af628(longlong *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  if (*param_2 != '\x01') goto LAB_1443af78c;
  (**(code **)(**(longlong **)(*param_1 + 0x198) + 0x228))
            (*(longlong **)(*param_1 + 0x198),&local_58);
  if (*(int *)(local_58 + 0x28) == 2) {
    plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    plVar5 = (longlong *)*plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1443af74a;
    local_24 = 0;
    (**(code **)(*plVar5 + 0xb0))(plVar5,0,0,&local_24);
    if (local_24 == 0) goto LAB_1443af74a;
    bVar7 = (int)uStack_40._4_4_ < 0;
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    if (bVar7) {
      FUN_144893a1c(&local_48,0);
    }
    if ((int)local_24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_24);
    }
    uVar2 = uStack_40._4_4_;
    if ((int)uStack_40._4_4_ < (int)local_24) {
      FUN_144893a1c(&local_48);
      uVar2 = uStack_40._4_4_;
    }
    iVar3 = (int)uStack_40 + local_24;
    if (uVar2 - (int)uStack_40 < local_24) {
      uVar6 = uStack_40 & 0xffffffff;
      uStack_40._0_4_ = (int)uStack_40 + local_24;
      FUN_1447403be(&local_48,uVar6);
      iVar3 = (int)uStack_40;
      uVar2 = uStack_40._4_4_;
    }
    uStack_40._0_4_ = iVar3;
    cVar4 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_48,uVar2,&local_24);
    if (cVar4 == '\0') goto LAB_1443af74a;
  }
  else {
LAB_1443af74a:
    uStack_40._0_4_ = 0;
    if ((int)uStack_40._4_4_ < 0) {
      FUN_144893a1c(&local_48,0);
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_1443af78c:
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0 && (int)param_1[3] != 0) {
    (**(code **)(*plVar5 + 0x60))(plVar5,(int)param_1[1],0 < (int)uStack_40);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443af7fe FUN_1443af7fe body=111 status=ok
// SIG undefined FUN_1443af7fe(void)

undefined8 * FUN_1443af7fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45c20;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443af84f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443af84f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443af882 FUN_1443af882 body=129 status=ok
// SIG undefined FUN_1443af882(void)

void FUN_1443af882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba45c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45c20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148fb9bd4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af904 FUN_1443af904 body=129 status=ok
// SIG undefined FUN_1443af904(void)

void FUN_1443af904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba45c90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45c20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148fb9bd4(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 1443af986 FUN_1443af986 body=163 status=ok
// SIG undefined FUN_1443af986(void)

void FUN_1443af986(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba45c90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45c20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_148fb9bd4(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443afa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443afa36 FUN_1443afa36 body=23 status=ok
// SIG undefined FUN_1443afa36(void)

undefined1 FUN_1443afa36(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1443afa4e(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 1443afa4e FUN_1443afa4e body=194 status=ok
// SIG undefined FUN_1443afa4e(void)

void FUN_1443afa4e(longlong param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (&local_38 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    uStack_30 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1446dd670(&local_38,uVar1,0);
      memcpy(local_38,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0 && *(int *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_1 + 8),1 < (int)uStack_30);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443afb12 FUN_1443afb12 body=111 status=ok
// SIG undefined FUN_1443afb12(void)

undefined8 * FUN_1443afb12(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45d40;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443afb63;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443afb63:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443afb96 FUN_1443afb96 body=115 status=ok
// SIG undefined FUN_1443afb96(void)

void FUN_1443afb96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45d40;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443afc0a FUN_1443afc0a body=115 status=ok
// SIG undefined FUN_1443afc0a(void)

void FUN_1443afc0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45d40;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443afc7e FUN_1443afc7e body=149 status=ok
// SIG undefined FUN_1443afc7e(void)

void FUN_1443afc7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45d40;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fba690(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443afd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443afd1e FUN_1443afd1e body=20 status=ok
// SIG undefined FUN_1443afd1e(void)

undefined1 FUN_1443afd1e(longlong param_1)

{
  FUN_1443afd32(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443afd32 FUN_1443afd32 body=251 status=ok
// SIG undefined FUN_1443afd32(void)

void FUN_1443afd32(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  undefined8 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = &PTR_FUN_14b438d60;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  local_28 = puVar4;
  local_20 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_20[1] = (longlong)&DAT_100000001;
  *local_20 = (longlong)&PTR_FUN_14ba45e30;
  local_20[2] = (longlong)puVar4;
  FUN_1489b7342(local_68,L"FOnlinePurchaseSteam::Checkout Error: is either empty or > 1.");
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,local_68,&local_28);
  }
  FUN_145c8db80(local_68);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443afe2e FUN_1443afe2e body=111 status=ok
// SIG undefined FUN_1443afe2e(void)

undefined8 * FUN_1443afe2e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45e50;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443afe7f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443afe7f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443afeb2 FUN_1443afeb2 body=115 status=ok
// SIG undefined FUN_1443afeb2(void)

void FUN_1443afeb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45e50;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443aff26 FUN_1443aff26 body=115 status=ok
// SIG undefined FUN_1443aff26(void)

void FUN_1443aff26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45e50;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443aff9a FUN_1443aff9a body=149 status=ok
// SIG undefined FUN_1443aff9a(void)

void FUN_1443aff9a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45e50;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fba690(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b0020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b003a FUN_1443b003a body=20 status=ok
// SIG undefined FUN_1443b003a(void)

undefined1 FUN_1443b003a(longlong param_1)

{
  FUN_1443b004e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443b004e FUN_1443b004e body=251 status=ok
// SIG undefined FUN_1443b004e(void)

void FUN_1443b004e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  undefined8 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = &PTR_FUN_14b438d60;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  local_28 = puVar4;
  local_20 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_20[1] = (longlong)&DAT_100000001;
  *local_20 = (longlong)&PTR_FUN_14ba45e30;
  local_20[2] = (longlong)puVar4;
  FUN_1489b7342(local_68,
                L"FOnlinePurchaseSteam::Checkout Error: Only supports a Purchase Offer quantity of 1"
               );
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,local_68,&local_28);
  }
  FUN_145c8db80(local_68);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b014a FUN_1443b014a body=111 status=ok
// SIG undefined FUN_1443b014a(void)

undefined8 * FUN_1443b014a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45f60;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b019b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b019b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b01ce FUN_1443b01ce body=115 status=ok
// SIG undefined FUN_1443b01ce(void)

void FUN_1443b01ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45f60;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0242 FUN_1443b0242 body=115 status=ok
// SIG undefined FUN_1443b0242(void)

void FUN_1443b0242(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45f60;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b02b6 FUN_1443b02b6 body=149 status=ok
// SIG undefined FUN_1443b02b6(void)

void FUN_1443b02b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45f60;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fba690(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b0356 FUN_1443b0356 body=20 status=ok
// SIG undefined FUN_1443b0356(void)

undefined1 FUN_1443b0356(longlong param_1)

{
  FUN_1443b036a(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443b036a FUN_1443b036a body=237 status=ok
// SIG undefined FUN_1443b036a(void)

void FUN_1443b036a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = &PTR_FUN_14b438d60;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  local_30 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba45e30;
  plVar4[2] = (longlong)puVar3;
  local_28 = plVar4;
  uVar5 = FUN_146564106();
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,uVar5,&local_30);
    plVar4 = local_28;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b0458 FUN_1443b0458 body=111 status=ok
// SIG undefined FUN_1443b0458(void)

undefined8 * FUN_1443b0458(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba45fd0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b04a9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b04a9:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b04dc FUN_1443b04dc body=123 status=ok
// SIG undefined FUN_1443b04dc(void)

void FUN_1443b04dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45fd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14666fadc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1443b0558 FUN_1443b0558 body=123 status=ok
// SIG undefined FUN_1443b0558(void)

void FUN_1443b0558(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba45fd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_14666fadc(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1443b05d4 FUN_1443b05d4 body=157 status=ok
// SIG undefined FUN_1443b05d4(void)

void FUN_1443b05d4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba45fd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_14666fadc(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b0662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b0694 FUN_1443b0694 body=40 status=ok
// SIG undefined FUN_1443b0694(void)

undefined8 FUN_1443b0694(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 1443b06bc FUN_1443b06bc body=111 status=ok
// SIG undefined FUN_1443b06bc(void)

undefined8 * FUN_1443b06bc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba46040;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b070d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b070d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b0740 FUN_1443b0740 body=115 status=ok
// SIG undefined FUN_1443b0740(void)

void FUN_1443b0740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46040;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b07b4 FUN_1443b07b4 body=115 status=ok
// SIG undefined FUN_1443b07b4(void)

void FUN_1443b07b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46040;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba690(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0828 FUN_1443b0828 body=149 status=ok
// SIG undefined FUN_1443b0828(void)

void FUN_1443b0828(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba46040;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fba690(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b08ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b08c8 FUN_1443b08c8 body=20 status=ok
// SIG undefined FUN_1443b08c8(void)

undefined1 FUN_1443b08c8(longlong param_1)

{
  FUN_1443b08dc(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443b08dc FUN_1443b08dc body=251 status=ok
// SIG undefined FUN_1443b08dc(void)

void FUN_1443b08dc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  undefined8 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = &PTR_FUN_14b438d60;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  local_28 = puVar4;
  local_20 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_20[1] = (longlong)&DAT_100000001;
  *local_20 = (longlong)&PTR_FUN_14ba45e30;
  local_20[2] = (longlong)puVar4;
  FUN_1489b7342(local_68,L"Not Implemented");
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,local_68,&local_28);
  }
  FUN_145c8db80(local_68);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b09d8 FUN_1443b09d8 body=111 status=ok
// SIG undefined FUN_1443b09d8(void)

undefined8 * FUN_1443b09d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba460d0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b0a29;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b0a29:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b0a5c FUN_1443b0a5c body=115 status=ok
// SIG undefined FUN_1443b0a5c(void)

void FUN_1443b0a5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba460d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0ad0 FUN_1443b0ad0 body=115 status=ok
// SIG undefined FUN_1443b0ad0(void)

void FUN_1443b0ad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba460d0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14666fadc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0b44 FUN_1443b0b44 body=149 status=ok
// SIG undefined FUN_1443b0b44(void)

void FUN_1443b0b44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba460d0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14666fadc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b0bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b0bda FUN_1443b0bda body=60 status=ok
// SIG undefined FUN_1443b0bda(void)

void FUN_1443b0bda(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146564106();
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0 || *(int *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001443b0c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,uVar2,*(code **)(*plVar1 + 0x60));
  return;
}



// FUNCTION 1443b0c16 FUN_1443b0c16 body=54 status=ok
// SIG undefined FUN_1443b0c16(void)

undefined1 FUN_1443b0c16(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_146564106();
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,uVar2);
  }
  return 1;
}



// FUNCTION 1443b0c4c FUN_1443b0c4c body=111 status=ok
// SIG undefined FUN_1443b0c4c(void)

undefined8 * FUN_1443b0c4c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba46140;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b0c9d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b0c9d:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b0cd0 FUN_1443b0cd0 body=115 status=ok
// SIG undefined FUN_1443b0cd0(void)

void FUN_1443b0cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46140;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba8e8(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0d44 FUN_1443b0d44 body=115 status=ok
// SIG undefined FUN_1443b0d44(void)

void FUN_1443b0d44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba46140;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fba8e8(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b0db8 FUN_1443b0db8 body=149 status=ok
// SIG undefined FUN_1443b0db8(void)

void FUN_1443b0db8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba46140;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fba8e8(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b0e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b0e58 FUN_1443b0e58 body=20 status=ok
// SIG undefined FUN_1443b0e58(void)

undefined1 FUN_1443b0e58(longlong param_1)

{
  FUN_1443b0e6c(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443b0e6c FUN_1443b0e6c body=143 status=ok
// SIG undefined FUN_1443b0e6c(void)

void FUN_1443b0e6c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1489b7342(local_68,L"Not Implemented");
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_68,local_28);
  }
  FUN_145c8db80(local_68);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b0efc FUN_1443b0efc body=1046 status=ok
// SIG undefined FUN_1443b0efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443b0efc(void)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&DAT_14cbf4b98,L"UNSET",1);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/OnlineSubsystemSteam",&PTR_FUN_14ba41e60,1,0);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/OnlineSubsystemSteam",&PTR_FUN_14ba41fe0,1,0);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/OnlineSubsystemSteam",&PTR_FUN_14ba42090,1,0);
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cbf4c00,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_14439dc9e);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cbf4c10,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_14439dcb2);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbf4c20,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_14439dcc6);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cbf4c30,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_14439dcda);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbf4c40,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_14439dcee);
  local_70 = (wchar_t *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_98 = CONCAT44(local_98._4_4_,1);
  FUN_140bd5914(&DAT_14cbf4c50,L"debug.steam.enablevirtualkeyboard",&local_70,&DAT_149dfb77a);
  atexit(FUN_1443a027d);
  _DAT_14cbf4c68 = 0;
  DAT_14cbf4c70 = 0;
  _DAT_14cbf4c80 = 0;
  DAT_14cbf4c88 = 0;
  _DAT_14cbf4c90 = 0;
  DAT_14cbf4c98 = 1;
  _DAT_14cbf4cc0 = 0;
  _DAT_14cbf4cc8 = 0;
  _DAT_14cbf4ca0 = 0;
  uRam000000014cbf4ca8 = 0;
  _DAT_14cbf4ccc = 0xffffffff00000080;
  _DAT_14cbf4cd4 = 0;
  DAT_14cbf4ce0 = 0;
  _DAT_14cbf4ce8 = 0;
  FUN_140dfac6a(&DAT_14cbf4c68);
  atexit(FUN_1443a0301);
  FUN_140056680(&DAT_14cbf4cf0,L"connect");
  atexit((_func_5014 *)&LAB_1443a14b1);
  FUN_140056680(&DAT_14cbf4d00,L"steam_display");
  atexit((_func_5014 *)&LAB_1443a14c2);
  FUN_1446f470e(&DAT_14cbf4d10,L"PRESENCESEARCH",1);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b1314 FUN_1443b1314 body=299 status=ok
// SIG undefined FUN_1443b1314(void)

ulonglong FUN_1443b1314(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  char local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  plVar1 = (longlong *)*puVar4;
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    if ((*plVar5 != 0) && (*(longlong *)(param_1 + 0x38) != -1)) {
      puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
      cVar2 = (**(code **)(*(longlong *)*puVar4 + 8))();
      if (cVar2 != '\0') {
        puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
        uVar6 = (**(code **)(*(longlong *)*puVar4 + 0xc0))
                          ((longlong *)*puVar4,*(undefined8 *)(param_1 + 0x38),0);
        *(undefined8 *)(param_1 + 0x20) = uVar6;
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x18) = 1;
    UNLOCK();
    LOCK();
    uVar8 = *(uint *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = 0;
    uVar7 = (ulonglong)uVar8;
    UNLOCK();
  }
  else {
    local_21 = '\0';
    bVar3 = (**(code **)(*plVar1 + 0x58))(plVar1);
    LOCK();
    *(uint *)(param_1 + 0x18) = (uint)bVar3;
    UNLOCK();
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      local_30 = &local_22;
      local_38 = 0x525;
      uVar7 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),(int *)(param_1 + 0x40),0x128);
      uVar8 = 0;
      if ((((char)uVar7 != '\0') && (local_21 == '\0')) && (local_22 == '\0')) {
        uVar8 = (uint)(*(int *)(param_1 + 0x40) == 1);
      }
      LOCK();
      *(uint *)(param_1 + 0x1c) = uVar8;
      UNLOCK();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b1440 FUN_1443b1440 body=1205 status=ok
// SIG undefined FUN_1443b1440(void)

bool FUN_1443b1440(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  LPCRITICAL_SECTION p_Var11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_138 [40];
  LPCRITICAL_SECTION local_110;
  longlong *local_108;
  undefined8 *local_100;
  size_t local_f8;
  wchar_t *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_3 + 1) - 2U < 0x7fffffff) && (0 < *(int *)(param_4 + 1))) {
    plVar4 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    if ((*plVar4 != 0) && (*(int *)(param_1 + 0x50) - 2U < 0x7fffffff)) {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = *plVar4;
      puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
      cVar2 = (**(code **)(*(longlong *)*puVar5 + 8))();
      if (cVar2 != '\0') {
        puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
        (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_e0);
        bVar13 = false;
        if ((local_e0 != lVar8) || (0x63fffff < *(uint *)(param_4 + 1))) goto LAB_1443b1672;
        puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
        if (*(int *)(param_3 + 1) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)*param_3;
        }
        local_60 = (longlong *)0x0;
        if (pwVar10 == (wchar_t *)0x0) {
          local_58 = (longlong *)0x0;
          local_50 = 0;
          puVar5 = (undefined8 *)*puVar5;
          plVar4 = (longlong *)*param_4;
          uVar3 = *(undefined4 *)(param_4 + 1);
        }
        else {
          local_110 = (LPCRITICAL_SECTION)CONCAT44(local_110._4_4_,*(undefined4 *)(param_4 + 1));
          local_108 = (longlong *)*param_4;
          local_100 = (undefined8 *)*puVar5;
          sVar6 = wcslen(pwVar10);
          local_50 = FUN_14475aa65(0,pwVar10,sVar6 & 0xffffffff);
          uVar12 = local_50 + 1;
          local_58 = (longlong *)0x0;
          if (0x80 < uVar12) {
            FUN_1446efa72(&local_60,0,uVar12,1);
            local_58 = local_60;
          }
          if (local_58 == (longlong *)0x0) {
            local_58 = &local_e0;
          }
          FUN_14475a98a(local_58,uVar12,pwVar10,(int)sVar6 + 1);
          puVar5 = local_100;
          plVar4 = local_108;
          uVar3 = local_110._0_4_;
        }
        cVar2 = (**(code **)*puVar5)(puVar5,local_58,plVar4,uVar3);
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (cVar2 != '\0') {
          p_Var11 = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x10) + 0x240);
          EnterCriticalSection(p_Var11);
          puVar5 = (undefined8 *)FUN_148fbd1ec(*(undefined8 *)(param_1 + 0x10),param_2);
          bVar13 = puVar5 != (undefined8 *)0x0;
          if (bVar13) {
            plVar4 = (longlong *)FUN_148fbdb6e(puVar5,param_3,1);
            puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
            if (*(int *)(param_3 + 1) == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)*param_3;
            }
            local_60 = (longlong *)0x0;
            local_110 = p_Var11;
            if (pwVar10 == (wchar_t *)0x0) {
              local_58 = (longlong *)0x0;
              local_50 = 0;
              plVar9 = (longlong *)*puVar7;
            }
            else {
              local_108 = plVar4;
              local_100 = puVar5;
              local_e8 = (longlong *)*puVar7;
              local_f8 = wcslen(pwVar10);
              local_f0 = pwVar10;
              local_50 = FUN_14475aa65(0,pwVar10,local_f8 & 0xffffffff);
              uVar12 = local_50 + 1;
              plVar4 = (longlong *)0x0;
              if (0x80 < uVar12) {
                FUN_1446efa72(&local_60,0,uVar12,1);
                plVar4 = local_60;
              }
              local_58 = plVar4;
              if (plVar4 == (longlong *)0x0) {
                local_58 = &local_e0;
              }
              FUN_14475a98a(local_58,uVar12,local_f0,(int)local_f8 + 1);
              plVar9 = local_e8;
              puVar5 = local_100;
              plVar4 = local_108;
            }
            uVar3 = (**(code **)(*plVar9 + 0x78))(plVar9,local_58);
            *(undefined4 *)(plVar4 + 7) = uVar3;
            if (local_60 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_e0,&DAT_149e25dfc);
            p_Var11 = local_110;
            if (plVar4 == &local_e0) {
              if (local_e0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*plVar4 != 0) {
                FUN_1400020a8();
              }
              *plVar4 = local_e0;
              local_e0 = 0;
              *(undefined4 *)(plVar4 + 1) = local_d8;
              *(undefined4 *)((longlong)plVar4 + 0xc) = local_d4;
            }
            lVar8 = FUN_148fbd9de(puVar5,param_3,1);
            puVar5 = (undefined8 *)(lVar8 + 0x20);
            if (puVar5 != param_4) {
              iVar1 = *(int *)(param_4 + 1);
              _Src = (void *)*param_4;
              *(int *)(lVar8 + 0x28) = iVar1;
              if (iVar1 == 0 && *(int *)(lVar8 + 0x2c) == 0) {
                *(undefined4 *)(lVar8 + 0x2c) = 0;
              }
              else {
                FUN_1447a127e(puVar5,iVar1);
                if (iVar1 != 0) {
                  memcpy((void *)*puVar5,_Src,(longlong)iVar1);
                }
              }
            }
          }
          if (p_Var11 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var11);
          }
          goto LAB_1443b1672;
        }
      }
    }
  }
  bVar13 = false;
LAB_1443b1672:
  p_Var11 = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x10) + 0x240);
  EnterCriticalSection(p_Var11);
  lVar8 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 0x10),param_2);
  if (lVar8 != 0) {
    lVar8 = FUN_148fbd9de(lVar8,param_3,1);
    *(uint *)(lVar8 + 0x18) = bVar13 ^ 3;
  }
  if (p_Var11 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var11);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return bVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b18f6 FUN_1443b18f6 body=1064 status=ok
// SIG undefined FUN_1443b18f6(void)

void FUN_1443b18f6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined4 local_160;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  int local_134;
  longlong *local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined1 local_10d;
  int local_10c;
  longlong local_108 [16];
  longlong *local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130 = param_2;
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
  plVar3 = (longlong *)*puVar6;
  iVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
  plVar11 = (longlong *)(param_1 + 0x48);
  iVar14 = *(int *)(param_1 + 0x54);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_1408be2c4(plVar11,0);
  }
  local_148 = (longlong *)(param_1 + 0x38);
  iVar14 = *(int *)(param_1 + 0x44);
  FUN_145c26966(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar14 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_148fc3ec4(local_148,0);
  }
  if (0 < iVar5) {
    iVar14 = 0;
    local_140 = plVar11;
    do {
      local_160 = 0x80;
      local_168 = local_108;
      cVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,iVar14,&local_10c,&local_10d);
      if (cVar4 != '\0') {
        iVar10 = 0x10;
        lVar7 = FUN_14001cc68(0xf0,0x10);
        FUN_148fbcba0(lVar7);
        local_150 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar11 = local_140;
        local_150[1] = (longlong)&DAT_100000001;
        *local_150 = (longlong)&PTR_FUN_14ba4c100;
        local_150[2] = lVar7;
        local_128 = 0;
        uStack_120 = 0;
        lVar9 = 0xf;
        lVar8 = 0x1000000000;
        local_134 = local_10c;
        iVar12 = local_10c;
        do {
          lVar8 = lVar8 + -0x100000000;
          *(undefined2 *)((longlong)local_88 + lVar9 * 2) =
               *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar12 % 10) * 2);
          uVar13 = iVar12 + 9;
          lVar9 = lVar9 + -1;
          iVar10 = iVar10 + -1;
          iVar12 = iVar12 / 10;
        } while (0x12 < uVar13);
        if (local_10c < 0) {
          iVar10 = (int)lVar9;
          lVar8 = (longlong)iVar10;
          *(undefined2 *)((longlong)local_88 + lVar8 * 2) = 0x2d;
        }
        else {
          lVar8 = lVar8 >> 0x20;
        }
        FUN_1400020e8(&local_128,(longlong)local_88 + lVar8 * 2,0x10 - iVar10);
        if (*(longlong *)(lVar7 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar7 + 8) = local_128;
        local_128 = 0;
        *(undefined4 *)(lVar7 + 0x10) = (undefined4)uStack_120;
        *(undefined4 *)(lVar7 + 0x14) = uStack_120._4_4_;
        FUN_1400b22c2(&local_128,local_108);
        FUN_140233b1a(local_88,&local_128);
        FUN_140008f88(lVar7 + 0x18,local_88);
        if (local_88[0] != (longlong *)0x0) {
          (**(code **)(*local_88[0] + 0x10))();
        }
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        iVar12 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar12 + 1U) {
          FUN_148fc3f5a(local_148,iVar12);
        }
        lVar8 = *local_148;
        *(longlong *)(lVar8 + (longlong)iVar12 * 0x10) = lVar7;
        *(longlong **)(lVar8 + 8 + (longlong)iVar12 * 0x10) = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        iVar12 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x54) < iVar12 + 1U) {
          FUN_1447a1bd6(plVar11,iVar12);
        }
        lVar8 = *plVar11;
        lVar9 = (longlong)iVar12 * 0x10;
        puVar6 = (undefined8 *)(lVar8 + lVar9);
        *(undefined8 *)(lVar8 + lVar9) = 0;
        iVar12 = *(int *)(lVar7 + 0x10);
        _Src = *(void **)(lVar7 + 8);
        *(int *)(lVar8 + 8 + lVar9) = iVar12;
        if ((longlong)iVar12 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar12,0);
          memcpy((void *)*puVar6,_Src,(longlong)iVar12 * 2);
        }
        plVar11 = local_140;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_150 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_150 + 0x10))();
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar5);
  }
  local_108[0] = 0;
  local_108[1] = 0;
  plVar3 = (longlong *)*local_130;
  if ((plVar3 != (longlong *)0x0 && (int)local_130[1] != 0) &&
     ((**(code **)(*plVar3 + 0x60))(plVar3,1,plVar11,local_108), local_108[0] != 0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443b1d1f FUN_1443b1d1f body=59 status=ok
// SIG undefined FUN_1443b1d1f(void)

void FUN_1443b1d1f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf4e50;
  if (DAT_14cbf4e50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf4e50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b1d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1443b1d5a FUN_1443b1d5a body=451 status=ok
// SIG undefined FUN_1443b1d5a(void)

void FUN_1443b1d5a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "SteamShared";
  local_20 = 0xb;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  lVar2 = FUN_1402c9134(&DAT_14c874628,uVar1,&local_28,1);
  if (*(longlong *)(lVar2 + 8) != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar3 = &PTR_FUN_14ba4a910;
    *(undefined8 **)(param_1 + 8) = puVar3;
    local_28 = "OnlineSubsystem";
    local_20 = 0xf;
    local_1c = 0;
    uVar1 = FUN_14001a6c0(&local_28,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar4 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar1);
    (**(code **)(*plVar4 + 0x78))(plVar4,DAT_14cb8e468,*(undefined8 *)(param_1 + 8));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b1f82 FUN_1443b1f82 body=69 status=ok
// SIG undefined FUN_1443b1f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443b1f82(void)

{
  _DAT_14cbf4ea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443b1fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4eb0,1);
  return;
}



// FUNCTION 1443b2094 FUN_1443b2094 body=132 status=ok
// SIG undefined FUN_1443b2094(void)

undefined4 FUN_1443b2094(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_140347020();
  if ((char)uVar2 != '\0') {
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_143e6b15c();
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1443ac74e(*(longlong *)(param_1 + 0x88),param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0xe8);
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xf8) == '\x01')) {
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
    }
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FUN_1443a0090(*(longlong *)(param_1 + 0x130),param_2);
    }
  }
  return uVar2;
}



// FUNCTION 1443b2118 FUN_1443b2118 body=46 status=ok
// SIG undefined FUN_1443b2118(void)

undefined8 FUN_1443b2118(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b2138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)*plVar1 + 0x110))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1443b2146 FUN_1443b2146 body=8832 status=ok
// SIG undefined FUN_1443b2146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1443b2146(longlong *param_1)

{
  undefined2 **ppuVar1;
  int *piVar2;
  byte bVar3;
  undefined2 **ppuVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined2 *puVar17;
  byte bVar18;
  undefined8 unaff_R12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  int local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  byte local_85;
  undefined1 local_84 [4];
  longlong *local_80;
  longlong *local_78;
  wchar_t *local_70;
  undefined2 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_85 = 0;
  local_d8 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bInitServerOnClient",&local_85);
  bVar5 = local_85;
  iVar14 = *DAT_14cbf4eb8;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  cVar6 = SteamAPI_RestartAppIfNecessary(0x139c46);
  if (cVar6 == '\0') {
    local_70 = L"SteamShared";
    local_68 = (undefined2 **)CONCAT35(local_68._5_3_,0xb);
    uVar7 = FUN_14001a6c0(&local_70,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    uVar8 = FUN_1402c9134(&DAT_14c874628,uVar7,&local_70,1);
    FUN_14439c5cc(uVar8,&local_70);
    ppuVar1 = local_68;
    if ((wchar_t **)(param_1 + 0x44) != &local_70) {
      param_1[0x44] = (longlong)local_70;
      local_70 = (wchar_t *)0x0;
      ppuVar4 = (undefined2 **)param_1[0x45];
      if (local_68 != ppuVar4) {
        local_68 = (undefined2 **)0x0;
        param_1[0x45] = (longlong)ppuVar1;
        if (ppuVar4 != (undefined2 **)0x0) {
          LOCK();
          ppuVar1 = ppuVar4 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*ppuVar4)(ppuVar4);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar4 + 8))(ppuVar4);
            }
          }
        }
      }
    }
    ppuVar1 = local_68;
    if (local_68 != (undefined2 **)0x0) {
      LOCK();
      ppuVar4 = local_68 + 1;
      *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
      UNLOCK();
      if (*(int *)ppuVar4 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppuVar1 + 8))(ppuVar1);
        }
      }
    }
    *(bool *)(param_1 + 0x1b) = param_1[0x44] != 0;
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c7648d0);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c7648f0);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
    if (*plVar9 == 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
LAB_1443b247f:
      local_70 = L"SteamRequired";
      local_68._0_4_ = 0xd;
      FUN_1446e940c(&local_a8,&local_70);
      local_70 = L"OnlineSubsystemSteam";
      local_68._0_4_ = 0x14;
      FUN_1446e940c(local_c8,&local_70);
      local_70 = 
      L"Steam must be running in order to launch this game. Please restart the game after starting the Steam client."
      ;
      local_68 = (undefined2 **)CONCAT44(local_68._4_4_,0x6c);
      FUN_140208c1e(&local_80,local_c8,&local_a8,&local_70);
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_80,&DAT_14c873210);
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
      goto LAB_1443b2525;
    }
    if ((*(byte *)(param_1 + 0x1b) & 1) == 0) goto LAB_1443b247f;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1[0x44] + 0xc);
    puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
    cVar6 = (*(code *)**(undefined8 **)*puVar10)();
    if (cVar6 == '\0') {
      *(undefined1 *)(param_1 + 0x1b) = 0;
      goto LAB_1443b2525;
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    if (*plVar9 != 0) {
      puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
      uVar7 = (**(code **)(*(longlong *)*puVar10 + 0x48))();
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar7;
      puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
      (**(code **)(*(longlong *)*puVar10 + 0x80))((longlong *)*puVar10,&DAT_1443b445f);
    }
  }
  else {
LAB_1443b2525:
    FUN_142797bc0(0,0);
  }
  bVar3 = *(byte *)(param_1 + 0x1b);
  bVar18 = 1;
  if (iVar14 != 0 || (bVar5 & 1) != 0) {
    local_70 = L"SteamShared";
    local_68 = (undefined2 **)CONCAT35(local_68._5_3_,0xb);
    uVar7 = FUN_14001a6c0(&local_70,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    uVar8 = FUN_1402c9134(&DAT_14c874628,uVar7,&local_70,1);
    FUN_148faa73a(uVar8,&local_70);
    ppuVar1 = local_68;
    if ((wchar_t **)(param_1 + 0x46) != &local_70) {
      param_1[0x46] = (longlong)local_70;
      local_70 = (wchar_t *)0x0;
      ppuVar4 = (undefined2 **)param_1[0x47];
      if (local_68 != ppuVar4) {
        local_68 = (undefined2 **)0x0;
        param_1[0x47] = (longlong)ppuVar1;
        if (ppuVar4 != (undefined2 **)0x0) {
          LOCK();
          ppuVar1 = ppuVar4 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*ppuVar4)(ppuVar4);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar4 + 8))(ppuVar4);
            }
          }
        }
      }
    }
    ppuVar1 = local_68;
    if (local_68 != (undefined2 **)0x0) {
      LOCK();
      ppuVar4 = local_68 + 1;
      *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
      UNLOCK();
      if (*(int *)ppuVar4 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppuVar1 + 8))(ppuVar1);
        }
      }
    }
    lVar11 = param_1[0x46];
    *(bool *)((longlong)param_1 + 0xd9) = lVar11 != 0;
    if (lVar11 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar11 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(lVar11 + 0x10);
      plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764810);
      if (*plVar9 == 0) {
        *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
      }
      plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764970);
      if (*plVar9 == 0) {
        *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
      }
      plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
      if (*plVar9 == 0) {
        *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
      }
      plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764990);
      if (*plVar9 == 0) {
        *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
      }
    }
    plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764990);
    if (*plVar9 != 0) {
      puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764990);
      uVar7 = (**(code **)(*(longlong *)*puVar10 + 0x48))();
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar7;
      puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764990);
      (**(code **)(*(longlong *)*puVar10 + 0x80))((longlong *)*puVar10,&DAT_1443b445f);
    }
    bVar18 = *(byte *)((longlong)param_1 + 0xd9);
  }
  if ((bVar18 & bVar3) != 1) {
    (**(code **)(*param_1 + 0x150))(param_1);
    goto LAB_1443b274b;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
    FUN_1413288e0(&DAT_14c926ca8);
    atexit(FUN_1427ac032);
    _Init_thread_footer(&DAT_14c926f30);
  }
  local_98 = L"SteamSockets";
  local_90 = 0xc;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,&local_80);
  if ((local_80 == (longlong *)0x0) || (cVar6 = (**(code **)(*local_80 + 0x48))(), cVar6 == '\0')) {
    FUN_14610b564(&local_70);
    *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  }
  lVar11 = FUN_14001cc68(0x590,0x10);
  FUN_145e21774(lVar11,param_1);
  param_1[0x42] = lVar11;
  FUN_1400021e4(param_1 + 0x12,&local_a8);
  puVar17 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar17 = local_a8;
  }
  FUN_140002266(&local_70,L"OnlineAsyncTaskThreadSteam %s",puVar17);
  pwVar13 = L"";
  if ((int)local_68 != 0) {
    pwVar13 = local_70;
  }
  local_d0 = 0;
  local_d8 = (undefined8 *)0xffffffffffffffff;
  lVar11 = FUN_1411b1052(param_1[0x42],pwVar13,0x20000,0);
  param_1[0x43] = lVar11;
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = FUN_14001cc68(0x368,0x10);
  FUN_14600b828(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c1d0;
  plVar12[2] = lVar11;
  param_1[0x1f] = lVar11;
  plVar9 = (longlong *)param_1[0x20];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b295e:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x20] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b295e;
      }
    }
  }
  FUN_14666f060(param_1[0x1f]);
  lVar11 = FUN_14001cc68(0x1a0,0x10);
  FUN_14666e488(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c1f0;
  plVar12[2] = lVar11;
  param_1[0x21] = lVar11;
  plVar9 = (longlong *)param_1[0x22];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2a09:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x22] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2a09;
      }
    }
  }
  lVar11 = FUN_14001cc68(0xe8,0x10);
  FUN_148faea10(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c210;
  plVar12[2] = lVar11;
  param_1[0x32] = lVar11;
  plVar9 = (longlong *)param_1[0x33];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2aa8:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x33] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2aa8;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c230;
  plVar12[2] = (longlong)puVar10;
  param_1[0x36] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x37];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2b4a:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x37] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2b4a;
      }
    }
  }
  lVar11 = FUN_14001cc68(0xe8,0x10);
  local_b8 = param_1[0x36];
  local_b0 = param_1[0x37];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  FUN_14439f9a0(lVar11,param_1,&local_b8);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c250;
  plVar12[2] = lVar11;
  param_1[0x34] = lVar11;
  plVar9 = (longlong *)param_1[0x35];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2c0f:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x35] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2c0f;
      }
    }
  }
  lVar11 = FUN_14001cc68(0x3f8,0x10);
  FUN_14666e13c(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c270;
  plVar12[2] = lVar11;
  param_1[0x23] = lVar11;
  plVar9 = (longlong *)param_1[0x24];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2cae:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x24] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2cae;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  FUN_1489ba310(puVar10);
  *puVar10 = &PTR_FUN_14ba479c0;
  puVar10[0x19] = param_1;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c290;
  plVar12[2] = (longlong)puVar10;
  param_1[0x27] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x28];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2d5b:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x28] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2d5b;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 2;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
  puVar10[6] = 2;
  *puVar10 = &PTR_FUN_14ba4b4f0;
  puVar10[7] = param_1;
  puVar10[8] = 0;
  puVar10[9] = 0;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c2b0;
  plVar12[2] = (longlong)puVar10;
  param_1[0x25] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x26];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2e23:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x26] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2e23;
      }
    }
  }
  lVar11 = FUN_14001cc68(0xb0,0x10);
  FUN_14666fd0a(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c2d0;
  plVar12[2] = lVar11;
  param_1[0x29] = lVar11;
  plVar9 = (longlong *)param_1[0x2a];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2ec2:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x2a] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2ec2;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 2;
  *puVar10 = &PTR_FUN_14b4cee50;
  puVar10[4] = param_1;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  FUN_14608756e(puVar10 + 0x13);
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  *puVar10 = &PTR_FUN_14ba4b710;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c2f0;
  plVar12[2] = (longlong)puVar10;
  param_1[0x2b] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x2c];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b2fad:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x2c] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b2fad;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 2;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x3c) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
  puVar10[9] = 2;
  *puVar10 = &PTR_FUN_14ba4b890;
  puVar10[10] = param_1;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar10[0xc] = 0;
  *(undefined4 *)(puVar10 + 0xd) = 0;
  puVar10[0xe] = 0;
  *(undefined4 *)(puVar10 + 0xf) = 0;
  puVar10[0x10] = 0;
  *(undefined4 *)(puVar10 + 0x11) = 0;
  puVar10[0x12] = 0;
  *(undefined4 *)(puVar10 + 0x13) = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c310;
  plVar12[2] = (longlong)puVar10;
  param_1[0x2e] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x2f];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b30bb:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x2f] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b30bb;
      }
    }
  }
  lVar11 = FUN_14001cc68(0xe8,0x10);
  FUN_145fd0a62(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c330;
  plVar12[2] = lVar11;
  param_1[0x30] = lVar11;
  plVar9 = (longlong *)param_1[0x31];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b315a:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x31] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b315a;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_14118b488(puVar10);
  *puVar10 = &PTR_FUN_14ba42240;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 2;
  puVar10[4] = param_1;
  *(undefined4 *)(puVar10 + 5) = 0;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c350;
  plVar12[2] = (longlong)puVar10;
  param_1[0x3a] = (longlong)puVar10;
  plVar9 = (longlong *)param_1[0x3b];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b321c:
        if (iVar14 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  else {
    param_1[0x3b] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar12 = plVar9;
        goto joined_r0x0001443b321c;
      }
    }
  }
  lVar11 = FUN_14001cc68(0xd0,0x10);
  FUN_148faec48(lVar11,param_1);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14ba4c370;
  plVar9[2] = lVar11;
  if ((lVar11 != 0) &&
     (((*(longlong *)(lVar11 + 0x68) == 0 || (*(longlong *)(lVar11 + 0x70) == 0)) ||
      (*(int *)(*(longlong *)(lVar11 + 0x70) + 8) < 1)))) {
    if (plVar9 == (longlong *)0x0) {
      *(longlong *)(lVar11 + 0x68) = lVar11;
      plVar12 = *(longlong **)(lVar11 + 0x70);
      if (plVar12 != (longlong *)0x0) {
LAB_1443b423b:
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        *(longlong **)(lVar11 + 0x70) = plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_1443b4254;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *(longlong *)(lVar11 + 0x68) = lVar11;
      if (*(longlong **)(lVar11 + 0x70) != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar12 = *(longlong **)(lVar11 + 0x70);
        if (plVar12 != (longlong *)0x0) goto LAB_1443b423b;
        *(longlong **)(lVar11 + 0x70) = plVar9;
      }
LAB_1443b4254:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  param_1[0x3c] = lVar11;
  plVar12 = (longlong *)param_1[0x3d];
  if (plVar9 == plVar12) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b32f8:
        if (iVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    param_1[0x3d] = (longlong)plVar9;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar9 = plVar12;
        goto joined_r0x0001443b32f8;
      }
    }
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 2;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
  *puVar10 = &PTR_FUN_14ba472d0;
  puVar10[6] = param_1;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14ba4c390;
  plVar9[2] = (longlong)puVar10;
  if (puVar10 == (undefined8 *)0x0) {
LAB_1443b336f:
    param_1[0x3e] = (longlong)puVar10;
    plVar12 = (longlong *)param_1[0x3f];
    if (plVar9 == plVar12) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar14 = *piVar2;
          UNLOCK();
joined_r0x0001443b33ef:
          if (iVar14 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      param_1[0x3f] = (longlong)plVar9;
      if (plVar12 != (longlong *)0x0) {
LAB_1443b33db:
        LOCK();
        plVar9 = plVar12 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar14 = *piVar2;
          UNLOCK();
          plVar9 = plVar12;
          goto joined_r0x0001443b33ef;
        }
      }
    }
  }
  else {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      puVar10[4] = puVar10;
      if ((longlong *)puVar10[5] != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)puVar10[5];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
        puVar10[5] = plVar9;
      }
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_1443b336f;
    }
    puVar10[4] = puVar10;
    param_1[0x3e] = (longlong)puVar10;
    plVar12 = (longlong *)param_1[0x3f];
    if (plVar12 != (longlong *)0x0) {
      param_1[0x3f] = 0;
      goto LAB_1443b33db;
    }
  }
  lVar11 = FUN_14001cc68(0xd0,0x10);
  FUN_148fbd02a(lVar11,param_1);
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba4c3b0;
  plVar12[2] = lVar11;
  param_1[0x40] = lVar11;
  plVar9 = (longlong *)param_1[0x41];
  if (plVar12 == plVar9) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar12 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
        plVar9 = plVar12;
        goto joined_r0x0001443b348e;
      }
    }
  }
  else {
    param_1[0x41] = (longlong)plVar12;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar14 = *piVar2;
        UNLOCK();
joined_r0x0001443b348e:
        if (iVar14 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648b0);
  (*(code *)**(undefined8 **)*puVar10)();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf4f10) && (FUN_144b3d300(&DAT_14cbf4f10), DAT_14cbf4f10 == -1)) {
    _DAT_14cbf4ee0 = 0;
    _DAT_14cbf4ee8 = 0;
    _DAT_14cbf4ec0 = 0;
    uRam000000014cbf4ec8 = 0;
    _DAT_14cbf4eec = 0xffffffff00000080;
    _DAT_14cbf4ef4 = 0;
    DAT_14cbf4f00 = 0;
    _DAT_14cbf4f08 = 0;
    atexit(FUN_1443b43c7);
    _Init_thread_footer(&DAT_14cbf4f10);
  }
  FUN_140056680(&local_a8,&DAT_14a355f30);
  FUN_140056680(local_c8,L"arabic");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47492);
  FUN_140056680(local_c8,L"bulgarian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14b507168);
  FUN_140056680(local_c8,L"schinese");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14b507180);
  FUN_140056680(local_c8,L"tchinese");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba474d0);
  FUN_140056680(local_c8,L"czech");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba474e2);
  FUN_140056680(local_c8,L"danish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba474f6);
  FUN_140056680(local_c8,L"dutch");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_149e19e7a);
  FUN_140056680(local_c8,L"english");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47518);
  FUN_140056680(local_c8,L"finnish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba4752e);
  FUN_140056680(local_c8,L"french");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47542);
  FUN_140056680(local_c8,L"german");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47556);
  FUN_140056680(local_c8,L"greek");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47568);
  FUN_140056680(local_c8,L"hungarian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_149f0f4f8);
  FUN_140056680(local_c8,L"indonesian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47598);
  FUN_140056680(local_c8,L"italian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14a355f36);
  FUN_140056680(local_c8,L"japanese");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14a3565c4);
  FUN_140056680(local_c8,L"koreana");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba475d0);
  FUN_140056680(local_c8,L"norwegian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba475ea);
  FUN_140056680(local_c8,L"polish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba475fe);
  FUN_140056680(local_c8,L"portuguese");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14b5071d0);
  FUN_140056680(local_c8,L"brazilian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14aa70278);
  FUN_140056680(local_c8,L"romanian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47640);
  FUN_140056680(local_c8,L"russian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_149e18b72);
  FUN_140056680(local_c8,L"spanish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14b507192);
  FUN_140056680(local_c8,L"latam");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47672);
  FUN_140056680(local_c8,L"swedish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14b4daf68);
  FUN_140056680(local_c8,L"thai");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba47692);
  FUN_140056680(local_c8,L"turkish");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba476a8);
  FUN_140056680(local_c8,L"ukrainian");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_a8,&DAT_14ba476c2);
  FUN_140056680(local_c8,L"vietnamese");
  local_70 = (wchar_t *)local_c8;
  local_68 = &local_a8;
  FUN_1411f1c38(&DAT_14cbf4ec0,local_84,&local_70,0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
  uVar16 = 0;
  if (*plVar9 != 0) {
    puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764870);
    (**(code **)(*(longlong *)*puVar10 + 0x20))();
  }
  FUN_1400b22c2(&local_70);
  iVar14 = (int)local_68 + -1;
  if ((int)local_68 == 0) {
    iVar14 = 0;
  }
  if (0 < iVar14) {
    pwVar13 = local_70;
    if ((int)local_68 == 0) {
      pwVar13 = L"";
    }
    lVar11 = 0;
    uVar16 = 0;
    do {
      uVar15 = ((uint)(0x19 < (ushort)pwVar13[lVar11] - 0x61) * 0x20 + (uint)(ushort)pwVar13[lVar11]
               ) - 0x20;
      uVar16 = uVar16 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar16 ^ uVar15) & 0xff) * 4);
      uVar16 = uVar16 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar16 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
      lVar11 = lVar11 + 1;
    } while (iVar14 != (int)lVar11);
  }
  iVar14 = FUN_1457511aa(&DAT_14cbf4ec0,uVar16,&local_70);
  lVar11 = 0;
  if (iVar14 != -1) {
    lVar11 = (longlong)iVar14 * 0x28 + _DAT_14cbf4ec0;
  }
  if (lVar11 == 0) {
    lVar11 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872af8);
    if (lVar11 != 0) {
      puVar17 = &DAT_149e19e7a;
      goto LAB_1443b41bf;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x18) == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = *(undefined2 **)(lVar11 + 0x10);
    }
    lVar11 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872af8);
    if (lVar11 != 0) {
LAB_1443b41bf:
      FUN_1410abc54(lVar11,L"Internationalization",L"Culture",puVar17);
    }
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_78 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
LAB_1443b274b:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_R12 >> 8),bVar18 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b43c7 FUN_1443b43c7 body=47 status=ok
// SIG undefined FUN_1443b43c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443b43c7(void)

{
  _DAT_14cbf4f08 = 0;
  if (DAT_14cbf4f00 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14cbf4ec0);
  return;
}



// FUNCTION 1443b43f6 FUN_1443b43f6 body=104 status=ok
// SIG undefined FUN_1443b43f6(void)

undefined8 FUN_1443b43f6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = CONCAT71((int7)(local_8 >> 8),1);
  if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    local_10 = *(longlong *)(param_1 + 0x90);
    if (local_10 == DAT_14cb8e370) {
      local_10 = 0;
    }
    uVar1 = FUN_14154b114(param_1 + 0x88);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b4460 FUN_1443b4460 body=102 status=ok
// SIG undefined FUN_1443b4460(void)

bool FUN_1443b4460(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  plVar1 = (longlong *)*plVar1;
  if (plVar1 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    bVar2 = local_20 == *(longlong *)(param_2 + 0x18);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b44c7 FUN_1443b44c7 body=41 status=ok
// SIG undefined FUN_1443b44c7(void)

void FUN_1443b44c7(void)

{
  DAT_14cbf4f68 = 0;
  if (DAT_14cbf4f60 != 0) {
    FUN_1400020a8();
  }
  FUN_145d71f8c();
  return;
}



// FUNCTION 1443b44f0 FUN_1443b44f0 body=288 status=ok
// SIG undefined FUN_1443b44f0(void)

void FUN_1443b44f0(char param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_30);
  (**(code **)(*local_30 + 0x30))(local_30,&DAT_14cbf4f18);
  FUN_148fc3288(local_30);
  if (param_1 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*local_30 + 0x48))(local_30,param_2,&local_48);
    if (0 < (int)uStack_40) {
      lVar4 = 0x28;
      lVar3 = 0;
      do {
        local_58 = 1;
        (**(code **)(*local_30 + 0xe8))(local_30,param_2,local_48 + lVar4,1);
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0xa8;
      } while (lVar3 < (int)uStack_40);
    }
    FUN_145e041f4(local_48);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b4612 FUN_1443b4612 body=717 status=ok
// SIG undefined FUN_1443b4612(void)

longlong * FUN_1443b4612(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char *_Str;
  size_t sVar7;
  longlong *extraout_RAX;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  undefined1 auStack_2e8 [44];
  int local_2bc;
  longlong local_2b8 [2];
  longlong local_2a8 [2];
  undefined4 local_294;
  undefined1 local_290 [256];
  longlong local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  longlong local_178 [32];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  UNLOCK();
  plVar5 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
  if (*plVar5 != 0) {
    puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    plVar5 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 8))();
    if ((char)plVar5 != '\0') {
      puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
      (**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,local_178);
      plVar5 = *(longlong **)(param_1 + 0x28);
      if (local_178[0] == plVar5[3]) {
        lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x10) + 0x240);
        EnterCriticalSection(lpCriticalSection);
        plVar5 = (longlong *)
                 FUN_148fbd1ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
        FUN_145e041f4(*plVar5,(int)plVar5[1]);
        *(undefined4 *)(plVar5 + 1) = 0;
        if (*(int *)((longlong)plVar5 + 0xc) != 0) {
          FUN_148fc3b7a(plVar5,0);
        }
        puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
        local_2bc = (**(code **)(*(longlong *)*puVar6 + 0x90))();
        if (0 < local_2bc) {
          iVar8 = 0;
          do {
            local_294 = 0;
            puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
            _Str = (char *)(**(code **)(*(longlong *)*puVar6 + 0x98))
                                     ((longlong *)*puVar6,iVar8,&local_294);
            iVar2 = (int)plVar5[1];
            *(uint *)(plVar5 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
              FUN_148fc34fa(plVar5,iVar2);
            }
            uVar4 = local_294;
            lVar3 = *plVar5;
            local_78 = 0;
            if (_Str == (char *)0x0) {
              local_70 = 0;
              local_68 = 0;
              local_2a8[0] = 0;
              local_2a8[1] = 0;
              local_180 = 0;
              local_190 = 0;
              uStack_188 = 0;
            }
            else {
              sVar7 = strlen(_Str);
              FUN_1446e6fe8(local_178,_Str,sVar7 & 0xffffffff,1);
              FUN_140056680(local_2a8,local_70);
              local_190 = 0;
              sVar7 = strlen(_Str);
              FUN_1446e6fe8(local_290,_Str,sVar7 & 0xffffffff,1);
            }
            FUN_140056680(local_2b8,uStack_188);
            FUN_148fbd7ba((longlong)iVar2 * 0xa8 + lVar3,local_2b8,local_2a8,uVar4);
            if (local_2b8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_190 != 0) {
              FUN_1400020a8();
            }
            if (local_2a8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            iVar8 = iVar8 + 1;
          } while (local_2bc != iVar8);
        }
        LOCK();
        uVar1 = *(uint *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x1c) = 1;
        plVar5 = (longlong *)(ulonglong)uVar1;
        UNLOCK();
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
          plVar5 = extraout_RAX;
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b48e0 FUN_1443b48e0 body=1088 status=ok
// SIG undefined FUN_1443b48e0(void)

void FUN_1443b48e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  LPCRITICAL_SECTION p_Var8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong **pplVar12;
  wchar_t *pwVar13;
  undefined1 auStack_128 [32];
  longlong **local_108;
  longlong **local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0 [16];
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  plVar2 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
  if ((*plVar2 == 0) || (0x7ffffffe < *(int *)(param_1 + 0x40) - 2U)) goto LAB_1443b4c59;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  cVar1 = (**(code **)(*(longlong *)*puVar3 + 8))();
  if (cVar1 == '\0') goto LAB_1443b4c59;
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,local_e0);
  if (local_e0[0] != *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18)) goto LAB_1443b4c59;
  plVar2 = (longlong *)(param_1 + 0x38);
  puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
  plVar6 = (longlong *)*puVar3;
  if (*(int *)(param_1 + 0x40) == 0) {
    pwVar13 = L"";
LAB_1443b49eb:
    local_60 = (longlong *)0x0;
    local_108 = &local_60;
    sVar4 = wcslen(pwVar13);
    local_50 = FUN_14475aa65(0,pwVar13,sVar4 & 0xffffffff);
    uVar9 = local_50 + 1;
    local_58 = (longlong *)0x0;
    if (0x80 < uVar9) {
      FUN_1446efa72(local_108,0,uVar9,1);
      local_58 = local_60;
    }
    if (local_58 == (longlong *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar9,pwVar13,(int)sVar4 + 1);
  }
  else {
    pwVar13 = (wchar_t *)*plVar2;
    local_60 = (longlong *)0x0;
    if (pwVar13 != (wchar_t *)0x0) goto LAB_1443b49eb;
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  uVar9 = (**(code **)(*plVar6 + 0x78))(plVar6,local_58);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (0x6400000 < uVar9) goto LAB_1443b4c59;
  p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x10) + 0x240);
  EnterCriticalSection(p_Var8);
  lVar5 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
  if (lVar5 != 0) {
    lVar5 = FUN_148fbd9de(lVar5,plVar2,1);
    pplVar12 = (longlong **)(lVar5 + 0x20);
    *(undefined4 *)(lVar5 + 0x28) = 0;
    iVar7 = 0;
    uVar10 = uVar9;
    if (*(uint *)(lVar5 + 0x2c) != uVar9) {
      FUN_144893a1c(pplVar12,uVar9);
      iVar7 = *(int *)(lVar5 + 0x28);
      uVar10 = *(uint *)(lVar5 + 0x2c);
    }
    *(uint *)(lVar5 + 0x28) = iVar7 + uVar9;
    if (uVar10 - iVar7 < uVar9) {
      FUN_1447403be(pplVar12);
    }
    puVar3 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    plVar6 = (longlong *)*puVar3;
    plVar11 = *pplVar12;
    if (*(int *)(param_1 + 0x40) == 0) {
      pwVar13 = L"";
LAB_1443b4b95:
      local_100 = &local_60;
      local_60 = (longlong *)0x0;
      local_108 = pplVar12;
      local_f8 = plVar6;
      local_f0 = plVar11;
      local_e8 = lVar5;
      sVar4 = wcslen(pwVar13);
      local_50 = FUN_14475aa65(0,pwVar13,sVar4 & 0xffffffff);
      uVar10 = local_50 + 1;
      plVar2 = (longlong *)0x0;
      if (0x80 < uVar10) {
        FUN_1446efa72(local_100,0,uVar10,1);
        plVar2 = local_60;
      }
      local_58 = local_e0;
      if (plVar2 != (longlong *)0x0) {
        local_58 = plVar2;
      }
      FUN_14475a98a(local_58,uVar10,pwVar13,(int)sVar4 + 1);
      plVar6 = local_f8;
      plVar11 = local_f0;
      pplVar12 = local_108;
      lVar5 = local_e8;
    }
    else {
      pwVar13 = (wchar_t *)*plVar2;
      local_60 = (longlong *)0x0;
      if (pwVar13 != (wchar_t *)0x0) goto LAB_1443b4b95;
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    uVar10 = (**(code **)(*plVar6 + 8))(plVar6,local_58,plVar11,uVar9);
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (uVar10 == uVar9) {
      LOCK();
      *(undefined4 *)(param_1 + 0x1c) = 1;
      UNLOCK();
    }
    else {
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (*(int *)(lVar5 + 0x2c) != 0) {
        FUN_144893a1c(pplVar12,0);
      }
    }
  }
  if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var8);
  }
LAB_1443b4c59:
  p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x10) + 0x240);
  EnterCriticalSection(p_Var8);
  lVar5 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28));
  if ((lVar5 != 0) && (lVar5 = FUN_148fbd9de(lVar5,param_1 + 0x38,0), lVar5 != 0)) {
    *(uint *)(lVar5 + 0x18) = (*(int *)(param_1 + 0x1c) == 0) + 2;
  }
  if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var8);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443b4d22 FUN_1443b4d22 body=81 status=ok
// SIG undefined FUN_1443b4d22(void)

void FUN_1443b4d22(void)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
  (**(code **)(*(longlong *)*puVar1 + 0xa0))((longlong *)*puVar1,local_10,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b4d74 FUN_1443b4d74 body=419 status=ok
// SIG undefined FUN_1443b4d74(void)

void FUN_1443b4d74(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  uint uVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_3 + 1) - 2U < 0x7fffffff) {
    lVar1 = *(longlong *)(param_1 + 200);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x240));
    uVar3 = FUN_148fbd1ec(*(undefined8 *)(param_1 + 200),param_2);
    FUN_148fbdb6e(uVar3,param_3,0);
    FUN_148fbd9de(uVar3,param_3,0);
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x240);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    if (*(int *)(param_3 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_3;
    }
    plVar2 = (longlong *)*puVar4;
    local_50 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      local_40 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
      uVar6 = local_40 + 1;
      local_48 = (undefined1 *)0x0;
      if (0x80 < uVar6) {
        FUN_1446efa72(&local_50,0,uVar6,1);
        local_48 = local_50;
      }
      if (local_48 == (undefined1 *)0x0) {
        local_48 = local_d0;
      }
      FUN_14475a98a(local_48,uVar6,_Str,(int)sVar5 + 1);
    }
    (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b4f18 FUN_1443b4f18 body=922 status=ok
// SIG undefined FUN_1443b4f18(void)

undefined4 FUN_1443b4f18(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  size_t sVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_128 [40];
  longlong **local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0 [16];
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  LOCK();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  UNLOCK();
  plVar7 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
  if ((*plVar7 == 0) || (0x7ffffffe < *(int *)(param_1 + 0x48) - 2U)) goto LAB_1443b512a;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  cVar4 = (**(code **)(*(longlong *)*puVar8 + 8))();
  if (cVar4 == '\0') goto LAB_1443b512a;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,local_e0);
  if (local_e0[0] != *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18)) goto LAB_1443b512a;
  plVar7 = (longlong *)(param_1 + 0x40);
  bVar6 = 1;
  bVar5 = 1;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
    plVar3 = (longlong *)*puVar8;
    if (*(int *)(param_1 + 0x48) == 0) {
      pwVar11 = L"";
LAB_1443b5031:
      local_100 = &local_60;
      local_60 = (longlong *)0x0;
      local_f8 = plVar7;
      sVar9 = wcslen(pwVar11);
      local_50 = FUN_14475aa65(0,pwVar11,sVar9 & 0xffffffff);
      uVar10 = local_50 + 1;
      local_58 = (longlong *)0x0;
      if (0x80 < uVar10) {
        FUN_1446efa72(local_100,0,uVar10,1);
        local_58 = local_60;
      }
      if (local_58 == (longlong *)0x0) {
        local_58 = local_e0;
      }
      FUN_14475a98a(local_58,uVar10,pwVar11,(int)sVar9 + 1);
      plVar7 = local_f8;
    }
    else {
      pwVar11 = (wchar_t *)*plVar7;
      local_60 = (longlong *)0x0;
      if (pwVar11 != (wchar_t *)0x0) goto LAB_1443b5031;
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    bVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,local_58);
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x29) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),&local_f0);
    cVar4 = (**(code **)(*local_f0 + 0x18))(local_f0,*(undefined8 *)(param_1 + 0x30),plVar7);
    if (cVar4 == '\0') {
      bVar6 = 0;
    }
    else {
      puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764950);
      plVar3 = (longlong *)*puVar8;
      if (*(int *)(param_1 + 0x48) == 0) {
        pwVar11 = L"";
LAB_1443b51da:
        local_100 = &local_60;
        local_60 = (longlong *)0x0;
        local_f8 = plVar7;
        sVar9 = wcslen(pwVar11);
        local_50 = FUN_14475aa65(0,pwVar11,sVar9 & 0xffffffff);
        uVar10 = local_50 + 1;
        plVar7 = (longlong *)0x0;
        if (0x80 < uVar10) {
          FUN_1446efa72(local_100,0,uVar10,1);
          plVar7 = local_60;
        }
        local_58 = local_e0;
        if (plVar7 != (longlong *)0x0) {
          local_58 = plVar7;
        }
        FUN_14475a98a(local_58,uVar10,pwVar11,(int)sVar9 + 1);
        plVar7 = local_f8;
      }
      else {
        pwVar11 = (wchar_t *)*plVar7;
        local_60 = (longlong *)0x0;
        if (pwVar11 != (wchar_t *)0x0) goto LAB_1443b51da;
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      bVar6 = (**(code **)(*plVar3 + 0x30))(plVar3,local_58);
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_148fbd2be(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30),plVar7);
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_e8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
  }
  LOCK();
  *(uint *)(param_1 + 0x1c) = (uint)(bVar5 & bVar6);
  UNLOCK();
LAB_1443b512a:
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1443b52b4 FUN_1443b52b4 body=316 status=ok
// SIG undefined FUN_1443b52b4(void)

ulonglong FUN_1443b52b4(longlong *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_2 < 4) {
    if (param_1[0x19] == 0) {
LAB_1443b5326:
      pwVar3 = L"User not logged on (%d)";
      goto LAB_1443b532d;
    }
    cVar1 = (**(code **)(*(longlong *)param_1[0x18] + 8))();
    if (cVar1 == '\0') goto LAB_1443b5326;
    if (0 < (int)param_3[1]) {
      uVar2 = FUN_14001cc68(0x58,0x10);
      local_68 = param_3;
      FUN_14666fdbc(uVar2,param_1[0x17],param_1,param_2);
      FUN_1410d2116(*(undefined8 *)(param_1[0x17] + 0x210),uVar2);
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_1443b5386;
    }
    FUN_140002266(&local_58,L"No players specified");
  }
  else {
    pwVar3 = L"Invalid user specified (%d)";
LAB_1443b532d:
    FUN_140002266(&local_58,pwVar3,param_2);
  }
  local_48 = local_58;
  uStack_40 = CONCAT44(local_4c,local_50);
  uVar4 = CONCAT71(uVar5,local_50 < 2);
  if (1 < local_50) {
    local_68 = &local_48;
    (**(code **)(*param_1 + 0x28))(param_1,param_2,0,param_3);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1443b5386:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b53f2 FUN_1443b53f2 body=178 status=ok
// SIG undefined FUN_1443b53f2(void)

ulonglong FUN_1443b53f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar5 = (longlong *)*puVar8;
    plVar11 = *(longlong **)(param_1 + 0x48);
    plVar3 = plVar11 + (longlong)*(int *)(param_1 + 0x50) * 3;
    do {
      lVar6 = *plVar11;
      plVar7 = (longlong *)plVar11[1];
      if (plVar7 == (longlong *)0x0) {
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        uVar10 = *(undefined8 *)(lVar6 + 0x18);
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      uVar9 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar10,0);
      *(char *)(plVar11 + 2) = (char)uVar9;
      if ((char)uVar9 != '\0') {
        return uVar9;
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar3);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x18) = 1;
  UNLOCK();
  LOCK();
  uVar4 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = 1;
  UNLOCK();
  return (ulonglong)uVar4;
}



// FUNCTION 1443b54a4 FUN_1443b54a4 body=120 status=ok
// SIG undefined FUN_1443b54a4(void)

undefined8
FUN_1443b54a4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
             longlong param_5)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (cVar1 = (**(code **)**(undefined8 **)(param_5 + 8))
                         (*(undefined8 **)(param_5 + 8),*(undefined8 *)(param_1 + 0x30)),
      cVar1 == '\0')) &&
     (cVar1 = (**(code **)**(undefined8 **)(param_1 + 0x48))
                        (*(undefined8 **)(param_1 + 0x48),
                         *(undefined8 *)(*(longlong *)(param_5 + 8) + 0x18),param_2,param_3,
                         *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_5 + 0x18)),
     cVar1 != '\0')) {
    *param_4 = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 1443b551c FUN_1443b551c body=349 status=ok
// SIG undefined FUN_1443b551c(void)

undefined8
FUN_1443b551c(longlong param_1,undefined8 param_2,int param_3,int *param_4,longlong param_5,
             int param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_54;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_6 == 0) {
    local_4c = 0;
    local_78 = &local_54;
    local_54 = 0;
    local_70 = *(undefined4 *)(param_1 + 0x40);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
                      (*(longlong **)(param_1 + 0x48),param_2,param_3);
    if (cVar4 == '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x180) = 7;
LAB_1443b5599:
      uVar5 = 0;
      iVar6 = 0;
    }
    else {
      FUN_140dfab96(&local_68,&local_54);
      uVar5 = *(undefined8 *)(param_5 + 8);
      plVar3 = *(longlong **)(param_5 + 0x10);
      *(ulonglong *)(param_5 + 8) = CONCAT44(uStack_64,local_68);
      *(ulonglong *)(param_5 + 0x10) = CONCAT44(uStack_5c,uStack_60);
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = SUB84(plVar3,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = (undefined4)uStack_40;
      uStack_5c = uStack_40._4_4_;
      local_48 = uVar5;
      uStack_40 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      cVar4 = FUN_148fbecd6(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                            *(undefined8 *)(param_5 + 8),*(undefined4 *)(param_1 + 0x40));
      if (cVar4 == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x180) = 0x34;
        goto LAB_1443b5599;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x180) = 0;
      uVar5 = 1;
      iVar6 = local_4c;
    }
    *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(param_1 + 0x40);
    *param_4 = iVar6;
    if (iVar6 <= param_3) goto LAB_1443b55ba;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x180) = 0xc;
  }
  uVar5 = 0;
LAB_1443b55ba:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b567a FUN_1443b567a body=1208 status=ok
// SIG undefined FUN_1443b567a(void)

void FUN_1443b567a(longlong param_1,undefined8 param_2,int param_3)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  int *piVar4;
  undefined8 *puVar5;
  double *pdVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_94;
  undefined8 local_90;
  double local_88;
  LARGE_INTEGER local_80;
  double *local_78;
  longlong *local_70;
  int local_68;
  LARGE_INTEGER local_60;
  double *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140df9946(param_2,&local_60);
  pdVar6 = local_58;
  if (local_58 == (double *)0x0) {
    local_78 = (double *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
    local_78 = local_58;
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  local_80 = local_60;
  uVar8 = (**(code **)(*(longlong *)local_60 + 0x40))();
  iVar9 = FUN_148fc554c((longlong *)(param_1 + 0xc0),uVar8,&local_80);
  pdVar1 = local_78;
  if (iVar9 == -1) {
    lVar16 = 0;
  }
  else {
    lVar16 = (longlong)iVar9 * 0x38 + *(longlong *)(param_1 + 0xc0);
  }
  if (local_78 != (double *)0x0) {
    LOCK();
    pdVar3 = local_78 + 1;
    *(int *)pdVar3 = *(int *)pdVar3 + -1;
    UNLOCK();
    if (*(int *)pdVar3 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar4 = (int *)((longlong)pdVar1 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)((longlong)*pdVar1 + 0x10))(pdVar1);
      }
    }
  }
  if (pdVar6 != (double *)0x0) {
    LOCK();
    pdVar1 = pdVar6 + 1;
    *(int *)pdVar1 = *(int *)pdVar1 + -1;
    UNLOCK();
    if (*(int *)pdVar1 == 0) {
      (**(code **)*pdVar6)(pdVar6);
      LOCK();
      piVar4 = (int *)((longlong)pdVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)((longlong)*pdVar6 + 0x10))(pdVar6);
      }
    }
  }
  pdVar6 = local_58;
  lVar17 = lVar16 + 0x10;
  if (lVar16 == 0) {
    lVar17 = 0;
  }
  if (local_58 != (double *)0x0) {
    LOCK();
    pdVar1 = local_58 + 1;
    *(int *)pdVar1 = *(int *)pdVar1 + -1;
    UNLOCK();
    if (*(int *)pdVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar4 = (int *)((longlong)pdVar6 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)((longlong)*pdVar6 + 0x10))(pdVar6);
      }
    }
  }
  if (lVar17 != 0) {
    cVar7 = FUN_148fbf804(param_1,param_2,param_3);
    if (cVar7 == '\0') {
      local_94 = param_3;
      local_90 = param_2;
      if (param_3 == -1) {
        iVar9 = *(int *)(param_1 + 0x138);
        if (iVar9 == 0) {
          uVar25 = 1;
          uVar20 = 0;
          iVar22 = 0;
          iVar15 = 0;
        }
        else {
          puVar13 = *(uint **)(param_1 + 0x130);
          if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0x120);
          }
          uVar19 = *puVar13;
          if (uVar19 == 0) {
            iVar22 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar22 = iVar9 + -1;
            }
            uVar20 = 0;
            uVar14 = (ulonglong)(uint)(iVar22 >> 5);
            if (iVar22 >> 5 < 1) {
              uVar14 = uVar20;
            }
            iVar22 = 0;
            do {
              if (uVar14 == uVar20) goto LAB_1443b5a6a;
              iVar22 = iVar22 + 0x20;
              uVar19 = puVar13[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar20 = 0;
            iVar22 = 0;
          }
          uVar25 = (ulonglong)(-uVar19 & uVar19);
          uVar14 = uVar25 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar15 = (iVar22 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar15) {
            iVar15 = iVar9;
          }
        }
        if (iVar15 < iVar9) {
          local_a0 = (longlong *)(param_1 + 0x110);
          uVar19 = 0xffffffff;
          do {
            puVar5 = *(undefined8 **)(*local_a0 + 8 + (longlong)iVar15 * 0x30);
            cVar7 = (**(code **)*puVar5)(puVar5,local_90);
            if (cVar7 != '\0') {
              FUN_148fc58ac(local_a0,iVar15);
            }
            uVar19 = uVar19 & ~(uint)uVar25;
            puVar13 = *(uint **)(param_1 + 0x130);
            if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
              puVar13 = (uint *)(param_1 + 0x120);
            }
            iVar9 = *(int *)(param_1 + 0x138);
            iVar15 = (int)uVar20;
            lVar16 = (longlong)iVar15;
            uVar10 = puVar13[lVar16] & uVar19;
            if (uVar10 == 0) {
              iVar11 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar11 = iVar9 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar23 = iVar11;
              if (iVar11 < iVar15) {
                iVar23 = iVar15;
              }
              if (iVar11 <= iVar15) break;
              lVar18 = 0;
              while( true ) {
                iVar22 = iVar22 + 0x20;
                uVar10 = puVar13[lVar16 + lVar18 + 1];
                if (uVar10 != 0) break;
                lVar18 = lVar18 + 1;
                if (iVar23 - lVar16 == lVar18) goto LAB_1443b5a6a;
              }
              uVar20 = (ulonglong)(iVar15 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
            }
            uVar25 = (ulonglong)(-uVar10 & uVar10);
            uVar14 = uVar25 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar15 = (iVar22 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          } while (iVar15 < iVar9);
        }
      }
LAB_1443b5a6a:
      local_80.QuadPart = (LONGLONG)&PTR_FUN_14ba46fd0;
      FUN_140df9946(local_90,&local_78);
      param_3 = local_94;
      local_68 = local_94;
      QueryPerformanceCounter(&local_60);
      local_88 = (double)local_60.QuadPart * DAT_14c83f420 + 16777216.0;
      local_58 = &local_88;
      local_60.QuadPart = (LONGLONG)&local_80;
      FUN_148fc59e4(param_1 + 0x110,local_4c,&local_60);
      local_80.QuadPart = (LONGLONG)&PTR_FUN_14ba46fd0;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar4 = (int *)((longlong)local_70 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
    }
    if (param_3 == -1) {
      *(undefined4 *)(lVar17 + 0x18) = 0;
      if (*(int *)(lVar17 + 0x1c) != 0) {
        FUN_14481578e(lVar17 + 0x10,0);
      }
    }
    else {
      iVar9 = *(int *)(lVar17 + 0x18);
      lVar16 = (longlong)iVar9;
      if (lVar16 != 0) {
        local_a0 = *(longlong **)(lVar17 + 0x10);
        iVar15 = 0;
        bVar21 = (int)*local_a0 == param_3;
        iVar22 = 0;
        do {
          lVar12 = (longlong)iVar22;
          iVar23 = iVar22;
          lVar18 = lVar12;
          iVar11 = iVar22 + 1;
          if (iVar22 + 1 < iVar9) {
            iVar11 = iVar9;
          }
          do {
            lVar18 = lVar18 + 1;
            iVar24 = iVar11;
            if (lVar16 <= lVar18) break;
            iVar24 = iVar23 + 1;
            iVar23 = iVar24;
          } while (bVar21 == (*(int *)((longlong)local_a0 + lVar18 * 4) == param_3));
          if (bVar21 == false) {
            if (iVar15 != iVar22) {
              memmove((int *)((longlong)local_a0 + (longlong)iVar15 * 4),
                      (int *)((longlong)local_a0 + lVar12 * 4),(longlong)(iVar24 - iVar22) << 2);
            }
            iVar15 = iVar15 + (iVar24 - iVar22);
          }
          bVar21 = (bool)(bVar21 ^ 1);
          iVar22 = iVar24;
        } while (lVar18 < lVar16);
        *(int *)(lVar17 + 0x18) = iVar15;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b5b34 FUN_1443b5b34 body=1036 status=ok
// SIG undefined FUN_1443b5b34(void)

void FUN_1443b5b34(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  double dVar4;
  longlong *plVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  longlong *local_88;
  LARGE_INTEGER local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  QueryPerformanceCounter(&local_80);
  dVar6 = (double)local_80.QuadPart * DAT_14c83f420;
  puVar18 = (uint *)(param_1 + 0x120);
  iVar8 = *(int *)(param_1 + 0x138);
  if (iVar8 == 0) {
    uVar16 = 1;
    uVar21 = 0;
    iVar14 = 0;
    iVar15 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x130);
    if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
      puVar12 = puVar18;
    }
    uVar20 = *puVar12;
    if (uVar20 == 0) {
      iVar15 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar15 = iVar8 + -1;
      }
      uVar21 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = uVar21;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar21) goto LAB_1443b5eff;
        iVar14 = iVar14 + 0x20;
        uVar20 = puVar12[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20);
    uVar3 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar15 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar15) {
      iVar15 = iVar8;
    }
  }
  if (iVar15 < iVar8) {
    local_98 = param_1 + 0x110;
    local_a0 = (longlong *)(param_1 + 0xc0);
    uVar20 = 0xffffffff;
    local_a9 = param_2;
    local_90 = puVar18;
    do {
      plVar5 = local_a0;
      dVar4 = *(double *)(param_1 + 0x178);
      if ((((dVar4 == 0.0) && (!NAN(dVar4))) ||
          (dVar4 <= (dVar6 + 16777216.0) -
                    *(double *)(*(longlong *)(param_1 + 0x110) + 0x20 + (longlong)iVar15 * 0x30)))
         || (param_2 != '\0')) {
        plVar19 = (longlong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar15 * 0x30);
        local_80 = *(LARGE_INTEGER *)(plVar19 + 1);
        local_88 = (longlong *)plVar19[2];
        if (local_88 == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
          local_78 = local_88;
        }
        uVar7 = (**(code **)(*(longlong *)local_80 + 0x40))();
        iVar8 = FUN_148fc554c(plVar5,uVar7,&local_80);
        plVar2 = local_78;
        if (iVar8 == -1) {
          lVar17 = 0;
        }
        else {
          lVar17 = (longlong)iVar8 * 0x38 + *plVar5;
        }
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_78 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            local_a8 = lVar17;
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar17 = local_a8;
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              lVar17 = local_a8;
            }
          }
        }
        plVar5 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_88 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            local_a8 = lVar17;
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar17 = local_a8;
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              lVar17 = local_a8;
            }
          }
        }
        param_2 = local_a9;
        if (lVar17 != 0) {
          iVar8 = (**(code **)(*plVar19 + 0x38))(plVar19);
          plVar5 = *(longlong **)(lVar17 + 0x10);
          if (iVar8 == -1) {
            (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined8 *)(plVar19[1] + 0x18));
          }
          else {
            (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined8 *)(plVar19[1] + 0x18),(int)plVar19[3])
            ;
            param_2 = local_a9;
            if (*(int *)(lVar17 + 0x28) != 0) goto LAB_1443b5ee3;
          }
          param_2 = local_a9;
          local_80 = *(LARGE_INTEGER *)(plVar19 + 1);
          plVar5 = (longlong *)plVar19[2];
          if (plVar5 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            FUN_148fc5d56(local_a0,&local_80);
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_78 = plVar5;
            FUN_148fc5d56(local_a0,&local_80);
            LOCK();
            plVar19 = plVar5 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
LAB_1443b5ee3:
        FUN_148fc58ac(local_98,iVar15);
        iVar8 = *(int *)(param_1 + 0x138);
        puVar18 = local_90;
      }
      uVar20 = uVar20 & ~(uint)uVar16;
      puVar12 = *(uint **)(param_1 + 0x130);
      if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
        puVar12 = puVar18;
      }
      iVar15 = (int)uVar21;
      lVar17 = (longlong)iVar15;
      uVar9 = puVar12[lVar17] & uVar20;
      if (uVar9 == 0) {
        iVar10 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar10 = iVar8 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar10 <= iVar15) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar9 = puVar12[lVar17 + lVar13 + 1];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar17 == lVar13) goto LAB_1443b5eff;
        }
        uVar21 = (ulonglong)(iVar15 + (int)lVar13 + 1);
        uVar20 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar9 & uVar9);
      uVar3 = uVar16 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar8);
  }
LAB_1443b5eff:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b5f42 FUN_1443b5f42 body=1421 status=ok
// SIG undefined FUN_1443b5f42(void)

undefined8 *
FUN_1443b5f42(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  size_t sVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *_Str;
  char **ppcVar17;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  char *local_60;
  longlong *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = "SteamClientSocket";
  local_40 = 0x11;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar7 = FUN_14001a6c0(&local_48,1);
  if (*param_2 == (ulonglong)uVar7) {
    plVar8 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    plVar8 = (longlong *)*plVar8;
    if (plVar8 == (longlong *)0x0) {
LAB_1443b5fae:
      puVar10 = (undefined8 *)0x0;
      goto LAB_1443b60ac;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_48);
    FUN_140adf1ea(&local_60,&local_48);
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    if ((longlong)DAT_14cbf4f78 < 0) {
      pcVar16 = (char *)(DAT_14cbf4f78 & 0x7fffffffffffffff);
      if (DAT_14cbf4f84 == '\x01') {
        ppcVar17 = &local_48;
        FUN_1446f470e(ppcVar17,pcVar16,1);
      }
      else {
        local_48 = pcVar16;
        if (pcVar16 == (char *)0x0) {
          local_40 = 0;
        }
        else {
          sVar14 = strlen(pcVar16);
          local_40 = (undefined4)sVar14;
        }
        ppcVar17 = &local_50;
        FUN_14001c09c(ppcVar17,&local_48,1);
      }
      uVar11 = (ulonglong)*(uint *)ppcVar17;
      uVar15 = (ulonglong)DAT_14cbf4f80 << 0x20;
      DAT_14cbf4f78 = uVar11;
    }
    else {
      uVar11 = (ulonglong)DAT_14cbf4f80 << 0x20;
      uVar15 = DAT_14cbf4f78 & 0xffffffff;
    }
    pcVar16 = local_60;
    local_50 = (char *)(uVar15 | uVar11);
    puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648f0);
    uVar13 = *puVar12;
    FUN_146282982(puVar10,1,param_3,&local_50);
    *puVar10 = &PTR_FUN_14ba4bed0;
    FUN_140df9946(pcVar16,puVar10 + 6);
    puVar10[8] = 0;
    puVar10[9] = uVar13;
    uVar13 = FUN_140272950(&DAT_14cb8e468);
    puVar10[5] = uVar13;
    if (puVar10 != (undefined8 *)0x0) {
      iVar3 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
        FUN_148fc39bc((longlong *)(param_1 + 0xa0),iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 8) = puVar10;
    }
    if (local_58 == (longlong *)0x0) goto LAB_1443b60ac;
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1443b60ac;
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_1443b60ac;
    lVar9 = *local_58;
    plVar8 = local_58;
  }
  else {
    local_48 = "SteamServerSocket";
    local_40 = 0x11;
    uStack_3c = uStack_3c & 0xffffff00;
    uVar7 = FUN_14001a6c0(&local_48,1);
    if (*param_2 != (ulonglong)uVar7) {
      FUN_1446f470e(&local_48,L"WINDOWS",1);
      plVar8 = (longlong *)FUN_140272950(&local_48);
      if (plVar8 != (longlong *)0x0) {
        puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x18))(plVar8,param_2,param_3,param_4);
        goto LAB_1443b60ac;
      }
      goto LAB_1443b5fae;
    }
    plVar8 = (longlong *)FUN_1401e3228(&DAT_14cb8e468);
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    pcVar16 = local_48;
    plVar8 = (longlong *)CONCAT44(uStack_3c,local_40);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar5 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    if (pcVar16 == (char *)0x0) {
LAB_1443b6043:
      puVar10 = (undefined8 *)0x0;
    }
    else {
      if (pcVar16[0x2c8] == '\x01') {
        cVar6 = (**(code **)(**(longlong **)(pcVar16 + 0x2d0) + 0x28))();
        if ((cVar6 == '\0') || (pcVar16[0x2e0] != '\x01')) goto LAB_1443b627d;
        puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        if ((longlong)DAT_14cbf4f78 < 0) {
          _Str = (char *)(DAT_14cbf4f78 & 0x7fffffffffffffff);
          if (DAT_14cbf4f84 == '\x01') {
            ppcVar17 = &local_48;
            FUN_1446f470e(ppcVar17,_Str,1);
          }
          else {
            local_48 = _Str;
            if (_Str == (char *)0x0) {
              local_40 = 0;
            }
            else {
              sVar14 = strlen(_Str);
              local_40 = (undefined4)sVar14;
            }
            ppcVar17 = &local_60;
            FUN_14001c09c(ppcVar17,&local_48,1);
          }
          uVar11 = (ulonglong)*(uint *)ppcVar17;
          uVar15 = (ulonglong)DAT_14cbf4f80 << 0x20;
          DAT_14cbf4f78 = uVar11;
        }
        else {
          uVar11 = (ulonglong)DAT_14cbf4f80 << 0x20;
          uVar15 = DAT_14cbf4f78 & 0xffffffff;
        }
        local_60 = (char *)(uVar15 | uVar11);
        uVar13 = *(undefined8 *)(pcVar16 + 0x2d0);
        puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
        local_68 = (ulonglong *)&local_60;
        FUN_148fbf072(puVar10,*puVar12,uVar13,param_3);
      }
      else {
LAB_1443b627d:
        puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        if ((longlong)DAT_14cbf4f78 < 0) {
          pcVar16 = (char *)(DAT_14cbf4f78 & 0x7fffffffffffffff);
          if (DAT_14cbf4f84 == '\x01') {
            ppcVar17 = &local_48;
            FUN_1446f470e(ppcVar17,pcVar16,1);
          }
          else {
            local_48 = pcVar16;
            if (pcVar16 == (char *)0x0) {
              local_40 = 0;
            }
            else {
              sVar14 = strlen(pcVar16);
              local_40 = (undefined4)sVar14;
            }
            ppcVar17 = &local_60;
            FUN_14001c09c(ppcVar17,&local_48,1);
          }
          uVar11 = (ulonglong)*(uint *)ppcVar17;
          uVar15 = (ulonglong)DAT_14cbf4f80 << 0x20;
          DAT_14cbf4f78 = uVar11;
        }
        else {
          uVar11 = (ulonglong)DAT_14cbf4f80 << 0x20;
          uVar15 = DAT_14cbf4f78 & 0xffffffff;
        }
        local_60 = (char *)(uVar15 | uVar11);
        puVar12 = (undefined8 *)FUN_14600b90e();
        uVar13 = *puVar12;
        puVar12 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
        uVar4 = *puVar12;
        FUN_146282982(puVar10,1,param_3,&local_60);
        *puVar10 = &PTR_FUN_14ba4bed0;
        FUN_140df9946(uVar13,puVar10 + 6);
        puVar10[8] = 0;
        puVar10[9] = uVar4;
        uVar13 = FUN_140272950(&DAT_14cb8e468);
        puVar10[5] = uVar13;
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_1443b6043;
      iVar3 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
        FUN_148fc39bc((longlong *)(param_1 + 0xa0),iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 8) = puVar10;
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1443b60ac;
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1443b60ac;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_1443b60ac;
    lVar9 = *plVar8;
  }
  (**(code **)(lVar9 + 0x10))(plVar8);
LAB_1443b60ac:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b64d0 FUN_1443b64d0 body=476 status=ok
// SIG undefined FUN_1443b64d0(void)

void FUN_1443b64d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar5 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar5 = uVar7;
      }
      uVar6 = (ulonglong)uVar5;
    }
  }
  iVar4 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
    FUN_1468c2c24((longlong *)(param_1 + 0xb0),iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar4 * 8) =
       (ulonglong)uVar8 | uVar6 << 0x20;
  lVar9 = param_2[0x3bd];
  if (lVar9 != 0) {
    (**(code **)(*param_2 + 800))(param_2,&local_50);
    plVar1 = local_48;
    if (local_50 != 0) {
      if (local_48 == (longlong *)0x0) {
        FUN_148fbecd6(param_1,*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(local_50 + 8),
                      *(undefined4 *)(local_50 + 0x18));
      }
      else {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        FUN_148fbecd6(param_1,*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(local_50 + 8),
                      *(undefined4 *)(local_50 + 0x18));
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443b66ae FUN_1443b66ae body=980 status=ok
// SIG undefined FUN_1443b66ae(void)

longlong FUN_1443b66ae(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined2 param_5,undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  wchar_t *pwVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  int local_80;
  longlong local_78;
  wchar_t *local_70;
  int local_68;
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  size_t sVar10;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(&local_70,param_3);
  FUN_140c540b4(&local_70,L"steam.",6,1);
  cVar5 = FUN_1405b43cc(&local_70);
  if (param_3 == 0 || cVar5 != '\x01') {
    FUN_1446f470e(&local_58,L"WINDOWS",1);
    plVar8 = (longlong *)FUN_140272950(&local_58);
    local_a8 = param_7;
    local_b0 = param_6;
    local_b8 = param_5;
    (**(code **)(*plVar8 + 0x40))(plVar8,param_2,param_3,param_4);
  }
  else {
    FUN_140056680(param_2,param_3);
    FUN_140056680(param_2 + 0x10,param_4);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x30) = 0x33;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    pwVar11 = local_70;
    if (local_68 == 0) {
      pwVar11 = L"";
    }
    local_78 = _wtoi64(pwVar11);
    if (local_78 == 0) {
      *(undefined4 *)(param_2 + 0x30) = 0x30;
    }
    else {
      FUN_140056680(&local_88,param_4);
      *(undefined4 *)(param_2 + 0x30) = 0;
      (**(code **)(*param_1 + 0x90))(param_1,&local_58);
      plVar4 = uStack_50;
      plVar8 = local_58;
      if (uStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
        UNLOCK();
        if (uStack_50 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_50 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*uStack_50)(uStack_50);
            LOCK();
            piVar1 = (int *)((longlong)uStack_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*uStack_50 + 0x10))(uStack_50);
            }
          }
        }
      }
      FUN_141904fbe(&local_98,&local_78);
      plVar12 = (longlong *)local_58[1];
      plVar3 = (longlong *)local_58[2];
      local_58[1] = CONCAT44(uStack_94,local_98);
      local_58[2] = CONCAT44(uStack_8c,uStack_90);
      local_58._0_4_ = (uint)plVar12;
      local_58._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
      uStack_50._0_4_ = SUB84(plVar3,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      local_98 = (uint)local_58;
      uStack_94 = local_58._4_4_;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
      local_58 = plVar12;
      uStack_50 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar3 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      cVar5 = FUN_1405b43cc(&local_88);
      if (cVar5 != '\0') {
        pwVar11 = local_88;
        if (local_80 == 0) {
          pwVar11 = L"";
        }
        iVar6 = _wtoi(pwVar11);
        (**(code **)(*plVar8 + 0x28))(plVar8,iVar6);
      }
      if ((longlong)DAT_14cbf4f78 < 0) {
        plVar12 = (longlong *)(DAT_14cbf4f78 & 0x7fffffffffffffff);
        if (DAT_14cbf4f84 == '\x01') {
          puVar14 = (uint *)&local_58;
          FUN_1446f470e(puVar14,plVar12,1);
        }
        else {
          local_58 = plVar12;
          if (plVar12 == (longlong *)0x0) {
            uVar7 = 0;
          }
          else {
            sVar10 = strlen((char *)plVar12);
            uVar7 = (undefined4)sVar10;
          }
          uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar7);
          puVar14 = &local_98;
          FUN_14001c09c(puVar14,&local_58,1);
        }
        uVar9 = (ulonglong)*puVar14;
        uVar13 = (ulonglong)DAT_14cbf4f80 << 0x20;
        DAT_14cbf4f78 = uVar9;
      }
      else {
        uVar9 = (ulonglong)DAT_14cbf4f80 << 0x20;
        uVar13 = DAT_14cbf4f78 & 0xffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar15 = (longlong)iVar6;
      *(uint *)(param_2 + 0x40) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x44) < iVar6 + 1U) {
        FUN_1417236ea((longlong *)(param_2 + 0x38),iVar6);
      }
      lVar2 = *(longlong *)(param_2 + 0x38);
      *(undefined1 *)(lVar2 + lVar15 * 0x28) = 0;
      *(undefined2 *)(lVar2 + 1 + lVar15 * 0x28) = local_5b;
      *(undefined1 *)(lVar2 + 3 + lVar15 * 0x28) = local_59;
      *(ulonglong *)(lVar2 + 4 + lVar15 * 0x28) = uVar13 | uVar9;
      *(undefined4 *)(lVar2 + 0xc + lVar15 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar15 * 0x28) = 0;
      *(longlong **)(lVar2 + 0x18 + lVar15 * 0x28) = plVar8;
      *(longlong **)(lVar2 + 0x20 + lVar15 * 0x28) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443b6a84 FUN_1443b6a84 body=514 status=ok
// SIG undefined FUN_1443b6a84(void)

longlong * FUN_1443b6a84(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (wchar_t *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_50;
  _Src = (void *)*param_3;
  if (lVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 * 2);
  }
  FUN_140c540b4(&local_58,L"steam.",6,1);
  cVar5 = FUN_1405b43cc(&local_58);
  if (cVar5 == '\0') {
    FUN_1446f470e(&local_48,L"WINDOWS",1);
    plVar6 = (longlong *)FUN_140272950(&local_48);
    (**(code **)(*plVar6 + 0x58))(plVar6,param_2,param_3);
  }
  else {
    _Str = local_58;
    if (local_50 == 0) {
      _Str = L"";
    }
    local_60 = _wtoi64(_Str);
    if (local_60 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1,&local_48);
      plVar6 = uStack_40;
      lVar7 = local_48;
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
        UNLOCK();
        if (uStack_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = uStack_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*uStack_40)(uStack_40);
            LOCK();
            piVar1 = (int *)((longlong)uStack_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*uStack_40 + 0x10))(uStack_40);
            }
          }
        }
      }
      FUN_141904fbe(&local_78,&local_60);
      lVar3 = *(longlong *)(local_48 + 8);
      plVar4 = *(longlong **)(local_48 + 0x10);
      *(ulonglong *)(local_48 + 8) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)(local_48 + 0x10) = CONCAT44(uStack_6c,uStack_70);
      local_48._0_4_ = (undefined4)lVar3;
      local_48._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_40._0_4_ = SUB84(plVar4,0);
      uStack_40._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_78 = (undefined4)local_48;
      uStack_74 = local_48._4_4_;
      uStack_70 = (undefined4)uStack_40;
      uStack_6c = uStack_40._4_4_;
      local_48 = lVar3;
      uStack_40 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      *param_2 = lVar7;
      param_2[1] = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443b6c88 FUN_1443b6c88 body=360 status=ok
// SIG undefined FUN_1443b6c88(void)

undefined8 FUN_1443b6c88(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  double local_50;
  longlong local_48;
  undefined8 uStack_40;
  LARGE_INTEGER local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    cVar4 = (**(code **)(*param_3 + 0x28))(param_3);
    if (cVar4 != '\0') {
      cVar4 = FUN_148fbf804(param_1,param_3,0xffffffff);
      if (cVar4 == '\0') {
        (**(code **)(*param_2 + 0x18))(param_2,param_3[3]);
        local_58 = param_2;
        QueryPerformanceCounter(&local_38);
        local_50 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
        local_48 = 0;
        uStack_40 = 0;
        FUN_140df9946(param_3,&local_78);
        local_68 = local_78;
        local_60 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_38.QuadPart = (LONGLONG)&local_68;
        local_30 = &local_58;
        FUN_148fc51d6(param_1 + 0xc0,local_24);
        plVar3 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        uVar5 = 1;
        goto LAB_1443b6cbe;
      }
    }
  }
  uVar5 = 0;
LAB_1443b6cbe:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b6df2 FUN_1443b6df2 body=784 status=ok
// SIG undefined FUN_1443b6df2(void)

undefined8 FUN_1443b6df2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_d8 [40];
  LARGE_INTEGER local_b0;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  QueryPerformanceCounter(&local_b0);
  dVar6 = (double)local_b0.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar7 = dVar6 - *(double *)(param_1 + 0xe8);
  dVar4 = *(double *)(param_1 + 0xf0);
  if (dVar4 <= dVar7) {
    *(double *)(param_1 + 0xe8) = dVar6;
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 == 0) {
    uVar19 = 1;
    uVar20 = 0;
    iVar21 = 0;
    iVar11 = 0;
  }
  else {
    puVar15 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar15 = (uint *)(param_1 + 0x50);
    }
    uVar18 = *puVar15;
    if (uVar18 == 0) {
      iVar11 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar11 = iVar5 + -1;
      }
      uVar20 = 0;
      uVar19 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar19 = uVar20;
      }
      iVar21 = 0;
      do {
        if (uVar19 == uVar20) goto LAB_1443b70ae;
        iVar21 = iVar21 + 0x20;
        uVar18 = puVar15[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar20 = 0;
      iVar21 = 0;
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18);
    uVar3 = uVar19 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar11 = (iVar21 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar11) {
      iVar11 = iVar5;
    }
  }
  if (iVar11 < iVar5) {
    uVar18 = 0xffffffff;
    do {
      lVar9 = *(longlong *)(param_1 + 0x40);
      lVar16 = (longlong)iVar11 * 0x38;
      lVar17 = *(longlong *)(lVar9 + lVar16);
      if ((((double)*(float *)(param_1 + 0xe4) <= dVar6 - *(double *)(lVar9 + 0x18 + lVar16)) ||
          (plVar10 = *(longlong **)(lVar9 + 0x10 + lVar16), plVar10 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar10 + 0x30))(plVar10,*(undefined8 *)(lVar17 + 0x18),&local_b0),
         cVar8 == '\0')) {
        FUN_1443b567a(param_1 + -0x80,lVar17,0xffffffff);
      }
      else if ((dVar4 <= dVar7) && (lVar9 = FUN_1401e3228(&DAT_14cb8e468), lVar9 != 0)) {
        FUN_1446f470e(local_98,L"WINDOWS",1);
        plVar10 = (longlong *)FUN_140272950(local_98);
        (**(code **)(*plVar10 + 0x90))(plVar10,&local_90);
        (**(code **)(*local_90 + 0x18))(local_90,local_a4);
        (**(code **)(*local_90 + 0x28))(local_90,local_a0);
        plVar10 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      uVar18 = uVar18 & ~(uint)uVar19;
      puVar15 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar15 = (uint *)(param_1 + 0x50);
      }
      iVar5 = *(int *)(param_1 + 0x68);
      iVar11 = (int)uVar20;
      lVar9 = (longlong)iVar11;
      uVar12 = puVar15[lVar9] & uVar18;
      if (uVar12 == 0) {
        iVar13 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar13 = iVar5 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar11) {
          iVar14 = iVar11;
        }
        if (iVar13 <= iVar11) break;
        lVar17 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar12 = puVar15[lVar9 + lVar17 + 1];
          if (uVar12 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar14 - lVar9 == lVar17) goto LAB_1443b70ae;
        }
        uVar20 = (ulonglong)(iVar11 + (int)lVar17 + 1);
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar12 & uVar12);
      uVar3 = uVar19 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar11 = (iVar21 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar5);
  }
LAB_1443b70ae:
  FUN_1443b5b34(param_1 + -0x80,0);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b7108 FUN_1443b7108 body=694 status=ok
// SIG undefined FUN_1443b7108(void)

undefined8
FUN_1443b7108(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,longlong *param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x134] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  local_50 = param_6;
  local_58 = CONCAT31(local_58._1_3_,param_5);
  cVar4 = FUN_143595812(param_1,param_2,param_3,param_4);
  if (cVar4 != '\0') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x3d0))(param_1);
    if (plVar6 == (longlong *)0x0) {
      FUN_14020fad6(param_6,L"Unable to find socket subsystem");
    }
    else {
      lVar7 = (**(code **)(*param_1 + 0x4b0))(param_1);
      if (lVar7 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        (**(code **)(*plVar6 + 0xd0))(plVar6,&local_48,&DAT_14c872ee0);
        plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
        if (plVar3 == (longlong *)0x0) {
          param_1[0xf8] = local_48;
          plVar9 = (longlong *)param_1[0xf9];
          if (plVar9 != (longlong *)0x0) {
            param_1[0xf9] = 0;
LAB_1443b72f9:
            LOCK();
            plVar3 = plVar9 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
joined_r0x0001443b72e9:
              if (iVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          param_1[0xf8] = local_48;
          plVar9 = (longlong *)param_1[0xf9];
          if (plVar3 == plVar9) {
            LOCK();
            plVar9 = plVar3 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar9 = plVar3;
              goto joined_r0x0001443b72e9;
            }
          }
          else {
            param_1[0xf9] = (longlong)plVar3;
            if (plVar9 != (longlong *)0x0) goto LAB_1443b72f9;
          }
        }
        plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        (**(code **)(*(longlong *)param_1[0xf8] + 0x28))
                  ((longlong *)param_1[0xf8],*(undefined4 *)(param_4 + 0x20));
        (**(code **)(*(longlong *)param_1[0xf8] + 0x38))();
        iVar2 = *(int *)((longlong)param_1 + 0x8f4);
        lVar7 = param_1[0xf8];
        uVar8 = (**(code **)(*param_1 + 0x4b0))(param_1);
        local_58 = 1;
        FUN_145cbc674(plVar6,uVar8,lVar7,iVar2 + 1);
        uVar8 = 1;
        goto LAB_1443b722a;
      }
      uVar5 = (**(code **)(*plVar6 + 0xb8))(plVar6);
      FUN_140002266(&local_48,L"SteamSockets: socket failed (%i)",uVar5);
      if (&local_48 == param_6) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_6 != 0) {
          FUN_1400020a8();
        }
        *param_6 = local_48;
        *(undefined4 *)(param_6 + 1) = local_40;
        *(undefined4 *)((longlong)param_6 + 0xc) = uStack_3c;
      }
    }
  }
  uVar8 = 0;
LAB_1443b722a:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b73dc FUN_1443b73dc body=144 status=ok
// SIG undefined FUN_1443b73dc(void)

void FUN_1443b73dc(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x128))();
  if (*plVar2 != 0) {
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x128))(param_1);
    cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x18))();
    if ((cVar1 != '\0') && (plVar2 = (longlong *)param_1[0x5d], plVar2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x5c] + 0x10))((longlong *)param_1[0x5c],&local_20);
      (**(code **)(*plVar2 + 0xd8))(plVar2,local_20,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b746e FUN_1443b746e body=101 status=ok
// SIG undefined FUN_1443b746e(void)

void FUN_1443b746e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x10))
              (*(longlong **)(param_1 + 0x2e0),&local_20);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b74d4 FUN_1443b74d4 body=350 status=ok
// SIG undefined FUN_1443b74d4(void)

longlong * FUN_1443b74d4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (DAT_14cbf4e48 != (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba4a920;
  plVar1 = plVar4 + 2;
  FUN_14666febe(plVar1,param_3);
  plVar5 = DAT_14cbf4e50;
  DAT_14cbf4e48 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_14cbf4e50 == (longlong *)0x0) goto LAB_1443b75df;
    DAT_14cbf4e50 = (longlong *)0x0;
LAB_1443b7581:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_1443b75df;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == DAT_14cbf4e50) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    else {
      bVar6 = DAT_14cbf4e50 != (longlong *)0x0;
      plVar5 = DAT_14cbf4e50;
      DAT_14cbf4e50 = plVar4;
      if (bVar6) goto LAB_1443b7581;
    }
  }
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1443b75df:
  cVar3 = (**(code **)(*DAT_14cbf4e48 + 8))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*DAT_14cbf4e48 + 0x140))(), cVar3 == '\0')) {
    FUN_1461f9ce4();
  }
  *param_2 = (longlong)DAT_14cbf4e48;
  plVar1 = DAT_14cbf4e50;
  param_2[1] = (longlong)DAT_14cbf4e50;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1443b7632 FUN_1443b7632 body=100 status=ok
// SIG undefined FUN_1443b7632(void)

longlong FUN_1443b7632(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  lVar1 = (longlong)*(int *)(param_1 + 0x2c0);
  if (lVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    do {
      lVar3 = lVar2;
      if (*(longlong *)(lVar2 + 0x118) == param_2) break;
      lVar2 = lVar2 + 0x150;
      lVar1 = lVar1 + -1;
      lVar3 = 0;
    } while (lVar1 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return lVar3;
}



// FUNCTION 1443b7696 FUN_1443b7696 body=43 status=ok
// SIG undefined FUN_1443b7696(void)

undefined8 FUN_1443b7696(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,0);
  }
  return 0;
}



// FUNCTION 1443b76c2 FUN_1443b76c2 body=44 status=ok
// SIG undefined FUN_1443b76c2(void)

undefined8 FUN_1443b76c2(void)

{
  longlong *plVar1;
  longlong *in_stack_00000028;
  
  plVar1 = (longlong *)*in_stack_00000028;
  if (plVar1 != (longlong *)0x0 && (int)in_stack_00000028[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  return 0;
}



// FUNCTION 1443b76ee FUN_1443b76ee body=111 status=ok
// SIG undefined FUN_1443b76ee(void)

undefined8 * FUN_1443b76ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba4c020;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443b773f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443b773f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443b7772 FUN_1443b7772 body=115 status=ok
// SIG undefined FUN_1443b7772(void)

void FUN_1443b7772(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4c020;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ca3f96(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b77e6 FUN_1443b77e6 body=115 status=ok
// SIG undefined FUN_1443b77e6(void)

void FUN_1443b77e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba4c020;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ca3f96(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443b785a FUN_1443b785a body=149 status=ok
// SIG undefined FUN_1443b785a(void)

void FUN_1443b785a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba4c020;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_147ca3f96(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443b78e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443b78fa FUN_1443b78fa body=20 status=ok
// SIG undefined FUN_1443b78fa(void)

undefined1 FUN_1443b78fa(longlong param_1)

{
  FUN_1443b790e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443b790e FUN_1443b790e body=116 status=ok
// SIG undefined FUN_1443b790e(void)

void FUN_1443b790e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_20,L"FOnlineStoreV2Steam::QueryCategories Not Implemented");
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b7983 FUN_1443b7983 body=949 status=ok
// SIG undefined FUN_1443b7983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443b7983(void)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cbf4e3c,L"UNSET",1);
  local_70 = (wchar_t *)0x800000014b524dc6;
  local_74 = 0x14;
  local_68 = FUN_14577453c();
  local_64 = 1;
  FUN_14666fc48(&local_70);
  DAT_14cbf4e48 = 0;
  DAT_14cbf4e50 = 0;
  atexit(FUN_1443b1d1f);
  local_70 = L"Online";
  local_68 = 6;
  FUN_1446e940c(&local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Online";
  local_68 = 6;
  FUN_140208c1e(&DAT_14cbf4e58,local_78,&local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443b1f1e);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_1446e940c(&local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Offline";
  local_68 = 7;
  FUN_140208c1e(&DAT_14cbf4e68,local_78,&local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443b1f32);
  local_70 = L"Away";
  local_68 = 4;
  FUN_1446e940c(&local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Away";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbf4e78,local_78,&local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443b1f46);
  local_70 = L"DoNotDisturb";
  local_68 = 0xc;
  FUN_1446e940c(&local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Do Not Disturb";
  local_68 = 0xe;
  FUN_140208c1e(&DAT_14cbf4e88,local_78,&local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443b1f5a);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_1446e940c(&local_74,&local_70);
  local_70 = L"OnlinePresence";
  local_68 = 0xe;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Chat";
  local_68 = 4;
  FUN_140208c1e(&DAT_14cbf4e98,local_78,&local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443b1f6e);
  DAT_14cbf4f78 = 0x8000000149ebf5d6;
  local_70._0_4_ = 5;
  DAT_14cbf4f80 = FUN_14577453c(L"Steam",&local_70);
  DAT_14cbf4f84 = 1;
  local_70 = (wchar_t *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 1;
  FUN_14078dbce(&DAT_14cbf4ea8,L"OSS.SteamInitServerOnClient",&local_70,
                L"Whether or not to initialize the Steam server interface on clients (default false)"
               );
  atexit(FUN_1443b1f82);
  _DAT_14cbf4f18 = 0;
  DAT_14cbf4f40 = 0;
  DAT_14cbf4f48 = 0;
  DAT_14cbf4f20 = 0;
  _DAT_14cbf4f28 = 0;
  _DAT_14cbf4f4c = 0xffffffff00000080;
  DAT_14cbf4f54 = 0;
  DAT_14cbf4f60 = 0;
  DAT_14cbf4f68 = 0;
  atexit(FUN_1443b44c7);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b7d3c FUN_1443b7d3c body=1144 status=ok
// SIG undefined FUN_1443b7d3c(void)

longlong FUN_1443b7d3c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_2 + 0xd4) & 1) == 0) {
    if (DAT_14cac9ca8 == 0) {
      local_d0 = &local_b8;
      local_b8 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = (code *)&LAB_1417b2375;
      local_e8 = L"Engine";
      uStack_f0 = 0x1000000000;
      local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
      local_100 = 8;
      local_108 = CONCAT44(local_108._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 != 0) goto LAB_1443b7d82;
LAB_1443b7d9d:
      lVar2 = DAT_14c951640;
      lVar3 = *(longlong *)(param_2 + 0xe0);
      if (DAT_14c927740 == 0) {
        local_d0 = &local_b8;
        local_b8 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_146856450;
        local_e0 = FUN_1427b121c;
        local_e8 = L"Engine";
        uStack_f0 = 0;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000021);
        local_100 = 8;
        local_108 = CONCAT44(local_108._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      if ((lVar3 != 0) && (lVar3 != DAT_14c927740)) goto LAB_1443b7dc5;
      if (DAT_14cad00c8 == 0) {
        local_d0 = &local_b8;
        local_b8 = FUN_144a7958c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1479b7a0c;
        local_e0 = (code *)&LAB_1463b464e;
        local_e8 = L"Engine";
        uStack_f0 = 0;
        local_f8 = CONCAT44(local_f8._4_4_,0x10000005);
        local_100 = 8;
        local_108 = CONCAT44(local_108._4_4_,0x110);
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        if (DAT_14cad00c8 != 0) goto LAB_1443b7e03;
      }
      else {
LAB_1443b7e03:
        if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(param_2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30)) {
          lVar3 = DAT_14cac9ca8;
          if (DAT_14cac9ca8 == 0) {
            local_d0 = &local_b8;
            local_b8 = FUN_141030f22;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_14081d0ea;
            local_d8 = &LAB_1478c0a72;
            local_e0 = (code *)&LAB_1417b2375;
            local_e8 = L"Engine";
            uStack_f0 = 0x1000000000;
            local_f8 = CONCAT44(local_f8._4_4_,0x10000004);
            local_100 = 8;
            local_108 = CONCAT44(local_108._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            lVar3 = DAT_14cac9ca8;
            if (DAT_14cac9ca8 == 0) goto LAB_1443b7e1e;
          }
LAB_1443b7dc5:
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
            lVar2 = FUN_1443b7d3c(param_1,lVar3,param_3);
          }
        }
      }
LAB_1443b7e1e:
      if (lVar2 == 0) goto LAB_1443b7ef4;
      local_f8 = 0;
      uStack_f0 = 0;
      local_100 = local_100 & 0xffffff00;
      local_108 = 0;
      lVar3 = FUN_140584627(lVar2,param_2,0,0);
    }
    else {
LAB_1443b7d82:
      if ((*(int *)(param_2 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
          DAT_14cac9ca8 + 0x30)) goto LAB_1443b7d9d;
      if ((*(byte *)(param_2 + 0xd5) & 2) != 0) goto LAB_1443b7ef4;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (code *)0x0;
      uStack_b0 = 0;
      local_78 = 0;
      local_68 = (longlong *)0x0;
      local_88 = 0x800020101;
      lVar3 = FUN_141037e38(param_1,param_2,&DAT_14c846480,&local_b8);
      if (local_78 != 0) {
        plVar4 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar4 = local_58;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    if (lVar3 != 0) {
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1447f76d2(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
      goto LAB_1443b7ef6;
    }
  }
LAB_1443b7ef4:
  lVar3 = 0;
LAB_1443b7ef6:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1443b81b5 FUN_1443b81b5 body=69 status=ok
// SIG undefined FUN_1443b81b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443b81b5(void)

{
  _DAT_14cbf4fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443b81f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4fc8,1);
  return;
}



// FUNCTION 1443b81fa FUN_1443b81fa body=1916 status=ok
// SIG undefined FUN_1443b81fa(void)

/* WARNING: Removing unreachable block (ram,0x0001443b8316) */
/* WARNING: Removing unreachable block (ram,0x0001443b83aa) */

void FUN_1443b81fa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  size_t sVar10;
  longlong lVar11;
  longlong *plVar12;
  code *pcVar13;
  bool bVar14;
  longlong lVar15;
  wchar_t *_Str;
  undefined2 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  undefined1 local_e9;
  longlong *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  code *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e9 = DAT_14c872b88;
  DAT_14c872b88 = 1;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_e0 = param_2;
  FUN_140056680(&local_90,L"UnrealEd");
  uStack_70._0_4_ = 1;
  FUN_1447a1bd6(&local_78,0);
  *local_78 = 0;
  *local_78 = local_90;
  local_90 = 0;
  *(int *)(local_78 + 1) = (int)local_88;
  *(undefined4 *)((longlong)local_78 + 0xc) = local_88._4_4_;
  FUN_140056680(&local_90,&DAT_14a50ca4a);
  iVar8 = (int)uStack_70;
  lVar15 = (longlong)(int)uStack_70;
  uVar7 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
  if (uStack_70._4_4_ < uVar7) {
    FUN_1447a1bd6(&local_78,iVar8);
  }
  local_78[lVar15 * 2] = 0;
  local_78[lVar15 * 2] = local_90;
  *(int *)(local_78 + lVar15 * 2 + 1) = (int)local_88;
  *(undefined4 *)((longlong)local_78 + lVar15 * 0x10 + 0xc) = local_88._4_4_;
  local_88 = 0;
  local_90 = 0;
  FUN_140056680(&local_90,L"OculusHMD");
  uVar17 = uStack_70;
  lVar15 = (longlong)(int)uStack_70;
  uVar7 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
  if (uStack_70._4_4_ < uVar7) {
    FUN_1447a1bd6(&local_78,uVar17 & 0xffffffff);
  }
  local_78[lVar15 * 2] = 0;
  local_78[lVar15 * 2] = local_90;
  *(int *)(local_78 + lVar15 * 2 + 1) = (int)local_88;
  *(undefined4 *)((longlong)local_78 + lVar15 * 0x10 + 0xc) = local_88._4_4_;
  local_88 = 0;
  local_90 = 0;
  FUN_1457a9e34(&local_90,0x10,1,0);
  uVar17 = (ulonglong)local_80;
  if (((int)local_80 < 0) || ((int)local_88 <= (int)local_80)) {
LAB_1443b8907:
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c872b88 = local_e9;
    if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1443b8405:
  plVar1 = *(longlong **)(local_90 + (uVar17 & 0xffffffff) * 8);
  plVar9 = plVar1;
  if ((*(byte *)((longlong)plVar1 + 0xd4) & 0x80) != 0) {
LAB_1443b841c:
    plVar12 = plVar9;
    plVar9 = plVar12;
    if ((longlong *)plVar12[4] != (longlong *)0x0) goto code_r0x0001443b842b;
    goto LAB_1443b843c;
  }
  goto LAB_1443b88be;
code_r0x0001443b842b:
  plVar9 = (longlong *)plVar12[4];
  if ((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0) goto LAB_1443b841c;
  plVar9 = (longlong *)FUN_142840154(plVar12);
LAB_1443b843c:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar12[4];
    goto LAB_1443b841c;
  }
  local_b8 = plVar9[3];
  FUN_1400021e4(&local_b8,local_a0);
  plVar9 = local_78;
  local_e8 = (longlong *)(longlong)(int)uStack_70;
  if (local_e8 != (longlong *)0x0) {
    local_e8 = (longlong *)((longlong)local_e8 << 4);
    plVar12 = (longlong *)0x0;
    do {
      _Str = L"";
      if (*(int *)((longlong)(plVar9 + 1) + (longlong)plVar12) != 0) {
        _Str = *(wchar_t **)((longlong)plVar9 + (longlong)plVar12);
      }
      if (_Str != (wchar_t *)0x0) {
        sVar10 = wcslen(_Str);
        local_140 = 0xffffffff;
        local_148 = 0;
        iVar8 = FUN_1447ee042(local_a0,_Str,sVar10 & 0xffffffff,1);
        if (iVar8 != -1) goto LAB_1443b88ac;
      }
      plVar12 = plVar12 + 2;
    } while (local_e8 != plVar12);
  }
  plVar9 = plVar1;
  if (plVar1 != (longlong *)0x0) {
LAB_1443b84f9:
    lVar15 = plVar9[9];
LAB_1443b84fd:
    if (lVar15 == 0) goto LAB_1443b8515;
    if ((*(byte *)(*(longlong *)(lVar15 + 0x10) + 0xda) & 8) == 0) goto code_r0x0001443b850f;
    bVar5 = 0;
    bVar6 = false;
LAB_1443b852f:
    bVar14 = bVar6;
    bVar4 = bVar5;
    bVar22 = (*(uint *)(lVar15 + 0xb0) & 0x14000000) != 0;
    bVar21 = (*(uint *)(lVar15 + 0xb0) >> 0xd & 1) == 0;
    plVar12 = (longlong *)(lVar15 + 0x28);
    do {
      for (lVar15 = *plVar12; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x28)) {
        bVar5 = bVar4 | bVar22;
        bVar6 = (bool)((bVar21 && bVar22) | bVar14);
        if ((*(byte *)(*(longlong *)(lVar15 + 0x10) + 0xda) & 8) != 0) goto LAB_1443b852f;
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))(plVar9);
      plVar12 = plVar9 + 9;
    } while (plVar9 != (longlong *)0x0);
    if ((bool)(bVar4 | bVar22)) {
      local_b8 = 0;
      uStack_b0 = 0;
      if (bVar21 && bVar22 || bVar14) {
        lVar15 = FUN_1443b7d3c(local_e0,plVar1,&local_b8);
        local_e8 = plVar1;
      }
      else {
        lVar15 = 0;
        local_e8 = plVar1;
      }
      do {
        for (lVar20 = local_e8[9]; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x28)) {
          if ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0xda) & 8) != 0) goto LAB_1443b871e;
        }
        local_e8 = (longlong *)(**(code **)(*local_e8 + 0x2b0))();
      } while (local_e8 != (longlong *)0x0);
      goto LAB_1443b860b;
    }
  }
LAB_1443b88ac:
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
LAB_1443b88be:
  uVar17 = (longlong)(int)local_80;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18 + 1;
    local_80 = (uint)uVar17;
    if ((longlong)(int)local_88 <= (longlong)uVar17) break;
  } while (*(longlong *)(local_90 + uVar17 * 8) == 0);
  if (((longlong)uVar18 < -1) || ((int)local_88 <= (int)local_80)) goto LAB_1443b8907;
  goto LAB_1443b8405;
LAB_1443b8515:
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))(plVar9);
  if (plVar9 == (longlong *)0x0) goto LAB_1443b88ac;
  goto LAB_1443b84f9;
code_r0x0001443b850f:
  lVar15 = *(longlong *)(lVar15 + 0x28);
  goto LAB_1443b84fd;
LAB_1443b871e:
  if ((*(uint *)(lVar20 + 0xb0) & 0x14000000) != 0) {
    lVar11 = lVar15;
    if ((*(uint *)(lVar20 + 0xb0) >> 0xd & 1) == 0) {
LAB_1443b8759:
      if (lVar11 == 0) goto LAB_1443b880f;
    }
    else {
      lVar11 = plVar1[0x22];
      if (lVar11 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar11 = plVar1[0x22];
        goto LAB_1443b8759;
      }
    }
    local_c8 = *(code **)(lVar20 + 0x18);
    FUN_1400021e4(&local_c8,&local_d8);
    puVar16 = &DAT_149dfb77a;
    if (local_d0 != 0) {
      puVar16 = local_d8;
    }
    FUN_140002266(&local_c8,&DAT_149e0625e,puVar16);
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    pcVar13 = (code *)&DAT_149dfb77a;
    if (local_c0 != 0) {
      pcVar13 = local_c8;
    }
    local_148 = CONCAT31(local_148._1_3_,1);
    FUN_1411c044a(lVar11,pcVar13,&DAT_14c872ee0,0);
    if (local_c8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1443b880f:
  plVar9 = (longlong *)(lVar20 + 0x28);
  do {
    for (lVar20 = *plVar9; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x28)) {
      if ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0xda) & 8) != 0) goto LAB_1443b871e;
    }
    local_e8 = (longlong *)(**(code **)(*local_e8 + 0x2b0))();
    plVar9 = local_e8 + 9;
  } while (local_e8 != (longlong *)0x0);
  local_e8 = (longlong *)0x0;
LAB_1443b860b:
  lVar15 = local_b8;
  lVar20 = (longlong)(int)uStack_b0;
  if (lVar20 != 0) {
    lVar19 = 0;
    lVar11 = DAT_14cac9ca8;
    do {
      lVar2 = *(longlong *)(lVar15 + lVar19);
      if (lVar11 == 0) {
        local_c8 = FUN_141030f22;
        local_100 = FUN_14081d0ea;
        local_108 = FUN_14081d0ea;
        local_118 = &LAB_1478c0a72;
        local_120 = &LAB_1417b2375;
        local_128 = L"Engine";
        local_130 = 0x1000000000;
        local_138 = 0x10000004;
        local_140 = 8;
        local_148 = 0x390;
        local_110 = &local_c8;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar11 = DAT_14cac9ca8;
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        FUN_1412f3774(local_e0,lVar2,0,1);
        lVar11 = DAT_14cac9ca8;
      }
      lVar19 = lVar19 + 8;
    } while (lVar20 * 8 != lVar19);
  }
  if (local_b8 != 0) {
    FUN_1400020a8(local_b8);
  }
  goto LAB_1443b88ac;
}



// FUNCTION 1443b8977 FUN_1443b8977 body=404 status=ok
// SIG undefined FUN_1443b8977(void)

void FUN_1443b8977(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_38;
  int local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/RuntimeTests",&PTR_FUN_14ba4d010,1,0);
  local_38 = (undefined8 *)0x800000014ba4d09e;
  local_24 = 0xc;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_146670554(&local_38);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a380e50;
  local_38[3] = FUN_1443b81fa;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cbf4fc0,L"Test.ScriptFuzzing",
                L"Fuzzes the script exposed API of engine classes",&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1443b8ac6;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1443b8ac6:
  atexit(FUN_1443b81b5);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b8b0c FUN_1443b8b0c body=55 status=ok
// SIG undefined FUN_1443b8b0c(void)

void FUN_1443b8b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf4ff8 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf4ff8 = FUN_14171c317(FUN_1466706e4,uVar1,L"EQosResponseType");
  }
  return;
}



// FUNCTION 1443b8b44 FUN_1443b8b44 body=119 status=ok
// SIG undefined FUN_1443b8b44(void)

void FUN_1443b8b44(longlong *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x698))(param_1,param_1 + 0x86);
  QueryPerformanceCounter(&local_20);
  param_1[0x85] = (longlong)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
  *(undefined1 *)(param_1 + 0x88) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b8bbc FUN_1443b8bbc body=920 status=ok
// SIG undefined FUN_1443b8bbc(void)

void FUN_1443b8bbc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [40];
  LARGE_INTEGER local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0[0] = 0;
  FUN_1447210f0();
  plVar3 = (longlong *)FUN_1401e3228(local_b0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_30);
    if (local_30 != (longlong *)0x0) {
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      cVar2 = (**(code **)(*local_30 + 0x370))(local_30,param_2,DAT_14c892fc8,&local_48);
      if (cVar2 != '\0') {
        puVar4 = local_48;
        if ((int)uStack_40 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_140245d8a(local_b0,0,puVar4,0);
        cVar2 = FUN_143ed4356(param_1,local_b0);
        if ((cVar2 != '\0') && (*(longlong *)(param_2 + 0x100) != 0)) {
          QueryPerformanceCounter(&local_c0);
          param_1[0x84] = (longlong)((double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0);
          plVar3 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x100) + 0x38))();
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_c0);
          if ((LARGE_INTEGER *)(param_1 + 0x86) == &local_c0) {
            if (local_c0.QuadPart != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_1[0x86] != 0) {
              FUN_1400020a8();
            }
            ((LARGE_INTEGER *)(param_1 + 0x86))->QuadPart = (LONGLONG)local_c0;
            local_c0.QuadPart = 0;
            *(undefined4 *)(param_1 + 0x87) = local_b8;
            *(undefined4 *)((longlong)param_1 + 0x43c) = local_b4;
          }
          *(undefined1 *)(param_1 + 0x88) = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          if (local_b0[0] != 0) {
            FUN_1400020a8();
          }
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_28 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar1 = (int *)((longlong)local_28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_28 + 0x10))(local_28);
              }
            }
          }
          goto LAB_1443b8e0d;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x650))(param_1);
LAB_1443b8e0d:
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443b8f56 FUN_1443b8f56 body=58 status=ok
// SIG undefined FUN_1443b8f56(void)

void FUN_1443b8f56(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  *(int *)(param_1 + 0x3c0) = *(int *)(param_1 + 0x3c0) + 1;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  cVar1 = FUN_148fc6348(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001443b8f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x6a0))(param_2,'\x02' - cVar1,*(code **)(*param_2 + 0x6a0));
  return;
}



// FUNCTION 1443b8f90 FUN_1443b8f90 body=135 status=ok
// SIG undefined FUN_1443b8f90(void)

void FUN_1443b8f90(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  if ((*(int *)(param_1 + 0x450) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x448), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))
              (plVar1,1,(longlong)
                        ((((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                         *(double *)(param_1 + 0x428)) * 1000.0));
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443b9018 FUN_1443b9018 body=3562 status=ok
// SIG undefined FUN_1443b9018(void)

void FUN_1443b9018(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_124;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  LARGE_INTEGER local_c8;
  int local_c0;
  undefined8 *local_b8;
  int local_b0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(int *)(param_1 + 0x88) < 1) || (*(char *)(param_1 + 0x78) != '\x01')) ||
     (FUN_140212f8e(&local_c8),
     3.0 < (double)(local_c8.QuadPart - *(longlong *)(param_1 + 0x68)) / 10000000.0)) {
    local_c8.QuadPart = 0;
    local_c0 = 0;
    FUN_14009d848(&local_c8,param_4);
    if (((local_c0 == 0) || ((longlong *)local_c8.QuadPart == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)local_c8 + 0x30))(), cVar6 == '\0')) {
      if (local_c0 == 0) goto LAB_1443b9216;
      if ((longlong *)local_c8.QuadPart != (longlong *)0x0) {
        (*(code *)**(undefined8 **)local_c8)(local_c8.QuadPart,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        goto LAB_1443b9203;
      }
    }
    else {
      plVar11 = (longlong *)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0xcc) < 1) {
        iVar8 = *(int *)(param_1 + 0xc0);
        iVar7 = *(int *)(param_1 + 200) + -1;
        *(int *)(param_1 + 200) = iVar7;
        if (iVar7 <= iVar8) {
          iVar7 = iVar8;
          if (0 < iVar8) {
            iVar12 = 0;
            do {
              if (((*(int *)(*plVar11 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar11 + (longlong)iVar12 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar11,iVar12);
                FUN_14005b248(plVar11);
              }
              else {
                iVar12 = iVar12 + 1;
              }
              iVar7 = *(int *)(param_1 + 0xc0);
            } while (iVar12 < iVar7);
          }
          iVar12 = 2;
          if (2 < iVar7 * 2) {
            iVar12 = iVar7 * 2;
          }
          *(int *)(param_1 + 200) = iVar12;
          if ((iVar12 < iVar8) && (*(int *)(param_1 + 0xc4) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_c0 != 0) && ((longlong *)local_c8.QuadPart != (longlong *)0x0)) {
        (**(code **)(*(longlong *)local_c8 + 0x38))(local_c8.QuadPart,&local_d8);
      }
      iVar8 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar8 + 1U) {
        FUN_1447a71f6(plVar11,iVar8);
      }
      lVar9 = *plVar11;
      lVar20 = (longlong)iVar8 * 0x10;
      *(undefined8 *)(lVar9 + lVar20) = 0;
      *(undefined4 *)(lVar9 + 8 + lVar20) = 0;
      ((LARGE_INTEGER *)(lVar9 + lVar20))->QuadPart = (LONGLONG)local_c8;
      local_c8.QuadPart = 0;
      *(int *)(lVar9 + 8 + lVar20) = local_c0;
LAB_1443b9203:
      local_c0 = 0;
LAB_1443b9216:
      if ((longlong *)local_c8.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0x70) != 0) goto LAB_1443b9bc0;
    lVar9 = FUN_148fc7471(DAT_14c951640);
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x70) = lVar9;
    uVar2 = *(uint *)(lVar9 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_1447f71cc(lVar9,0x40000000);
    lVar9 = *(longlong *)(param_1 + 0x70);
    if (param_2 == 0) {
      *(undefined4 *)(lVar9 + 0x28) = 0;
      iVar8 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xc);
      *(uint *)(lVar9 + 0x28) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar8 = *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar20 + 0x10);
        bVar22 = iVar8 == 0;
        if (bVar22) {
          *(int *)(lVar20 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar8 = iVar7;
        }
      }
    }
    *(int *)(lVar9 + 0x2c) = iVar8;
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    local_100 = *param_3;
    local_f8 = param_3[1];
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    FUN_148fc64dc(uVar5,&local_100);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    plVar11 = *(longlong **)(param_1 + 0x70);
    local_110 = (longlong *)0x0;
    local_108 = 0;
    FUN_1446efa72(&local_110,0,3);
    plVar4 = local_110;
    local_108 = 3;
    *local_110 = (longlong)&PTR_LAB_14ba50fc0;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_110[2] = lVar20;
    *local_110 = (longlong)&PTR_FUN_14ba50f50;
    local_110[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_110 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar22 = iVar8 == 0;
        if (bVar22) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar8 = iVar7;
        }
      }
    }
    *(int *)((longlong)plVar4 + 0x1c) = iVar8;
    plVar4[4] = (longlong)FUN_1443baae2;
    if ((char)plVar11[9] == '\0') {
      *(undefined1 *)(plVar11 + 9) = 1;
      local_124 = uVar3;
      QueryPerformanceCounter(&local_c8);
      plVar11[8] = (longlong)((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0);
      FUN_148fc6558(plVar11);
      local_130 = plVar11 + 10;
      local_120 = plVar11;
      FUN_148fc6644();
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x48);
        lVar20 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar9;
        local_118 = lVar20;
        do {
          if ((*(char *)(lVar9 + 0x20) == '\x01') && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
            lVar21 = *(longlong *)(param_1 + 0x58);
            lVar19 = (longlong)*(int *)(param_1 + 0x60) * 0x38 + lVar21;
            do {
              iVar8 = *(int *)(lVar21 + 0x18);
              if (iVar8 == *(int *)(lVar9 + 0x18)) {
                if (1 < iVar8) {
                  lVar16 = 0;
                  while( true ) {
                    uVar14 = *(ushort *)(*(longlong *)(lVar21 + 0x10) + lVar16);
                    uVar15 = (ulonglong)uVar14;
                    uVar17 = *(ushort *)(*(longlong *)(lVar9 + 0x10) + lVar16);
                    if (uVar14 != uVar17) break;
                    if (uVar14 == 0) goto LAB_1443b97e6;
LAB_1443b97b1:
                    lVar16 = lVar16 + 2;
                  }
                  if ((uVar17 | uVar14) < 0x80) {
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    uVar18 = (ulonglong)uVar17;
                    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar18]) goto LAB_1443b97b1;
                  }
                  if (uVar14 != uVar17) goto LAB_1443b97f9;
                }
LAB_1443b97e6:
                if (((*(char *)(lVar21 + 0x20) == '\x01') && (1 < iVar8)) &&
                   (1 < *(int *)(lVar21 + 8))) {
                  if (*(char *)(lVar9 + 0x21) == '\x01') {
                    uVar13 = *(undefined1 *)(lVar9 + 0x20);
                  }
                  else {
                    uVar13 = 0;
                  }
                  iVar8 = (int)local_120[0xb];
                  *(uint *)(local_120 + 0xb) = iVar8 + 1U;
                  if (*(uint *)((longlong)local_120 + 0x5c) < iVar8 + 1U) {
                    FUN_148fcad6c(local_130,iVar8);
                  }
                  lVar20 = *local_130;
                  lVar16 = (longlong)iVar8 * 0x68;
                  FUN_148fca59c(lVar20 + lVar16);
                  *(undefined1 *)(lVar20 + 0x38 + lVar16) = 0;
                  *(undefined4 *)(lVar20 + 0x3c + lVar16) = 9999;
                  *(undefined8 *)(lVar20 + 0x58 + lVar16) = 0;
                  puVar10 = (undefined8 *)(lVar20 + 0x40 + lVar16);
                  *puVar10 = 0;
                  puVar10[1] = 0;
                  *(undefined4 *)(lVar20 + 0x50 + lVar16) = 0;
                  *(undefined1 *)(lVar20 + 0x60 + lVar16) = uVar13;
                  lVar20 = local_118;
                }
              }
              else if (*(int *)(lVar9 + 0x18) + iVar8 == 1) goto LAB_1443b97e6;
LAB_1443b97f9:
              lVar21 = lVar21 + 0x38;
            } while (lVar21 != lVar19);
          }
          lVar9 = lVar9 + 0x38;
        } while (lVar9 != lVar20);
      }
      plVar11 = local_120;
      uVar3 = local_124;
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      if ((longlong)(int)local_120[0xb] == 0) {
LAB_1443b9907:
        if (local_110 != (longlong *)0x0 && local_108 != 0) {
          local_138 = 0;
          (**(code **)(*local_110 + 0x60))(local_110,2,local_130,0);
        }
      }
      else {
        lVar9 = local_120[10];
        lVar20 = (longlong)(int)local_120[0xb] * 0x68;
        do {
          if (((*(char *)(lVar9 + 0x20) == '\x01') && (1 < *(int *)(lVar9 + 8))) &&
             (1 < *(int *)(lVar9 + 0x18))) {
            FUN_148fc6b52(&local_d8,lVar9,uVar3);
          }
          lVar9 = lVar9 + 0x68;
          lVar20 = lVar20 + -0x68;
        } while (lVar20 != 0);
        if ((int)uStack_d0 == 0) goto LAB_1443b9907;
        lVar9 = plVar11[0xb];
        if ((longlong)(int)lVar9 != 0) {
          lVar20 = plVar11[10];
          lVar21 = 0;
          do {
            if (((*(char *)(lVar20 + 0x20 + lVar21) == '\x01') &&
                (1 < *(int *)(lVar20 + 8 + lVar21))) && (1 < *(int *)(lVar20 + 0x18 + lVar21))) {
              *(undefined1 *)(lVar20 + 0x38 + lVar21) = 0;
            }
            lVar21 = lVar21 + 0x68;
          } while ((longlong)(int)lVar9 * 0x68 - lVar21 != 0);
        }
        local_c8.QuadPart = (LONGLONG)plVar11;
        local_c0 = uVar3;
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        FUN_148fcadfc(&local_b8,&local_110);
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        FUN_1446efa72(&local_e8,0,4,0x10);
        plVar4 = local_e8;
        local_e0 = 4;
        *local_e8 = (longlong)&PTR_LAB_14a1577b0;
        LOCK();
        UNLOCK();
        lVar20 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar20 == 0) {
          LOCK();
          UNLOCK();
          lVar20 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_e8[2] = lVar20;
        *local_e8 = (longlong)&PTR_FUN_14ba50d00;
        local_e8[3] = 0;
        iVar8 = 0;
        if (plVar11 != (longlong *)0x0) {
          uVar2 = *(uint *)((longlong)plVar11 + 0xc);
          *(uint *)(local_e8 + 3) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar8 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar22 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar22) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar8 = *(int *)(lVar9 + 0x10);
            bVar22 = iVar8 == 0;
            if (bVar22) {
              *(int *)(lVar9 + 0x10) = iVar7;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar22) {
              iVar8 = iVar7;
            }
          }
        }
        *(int *)((longlong)plVar4 + 0x1c) = iVar8;
        ((LARGE_INTEGER *)(plVar4 + 4))->QuadPart = (LONGLONG)local_c8;
        *(int *)(plVar4 + 5) = local_c0;
        plVar4[6] = 0;
        *(undefined4 *)(plVar4 + 7) = 0;
        FUN_148fcadfc(plVar4 + 6,&local_b8);
        if (local_b0 == 0) {
LAB_1443b9ac6:
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_b8 != (undefined8 *)0x0) {
          (**(code **)*local_b8)(local_b8,0);
          FUN_1446efa72(&local_b8,0,0,0x10);
          local_b0 = 0;
          goto LAB_1443b9ac6;
        }
        local_c8.QuadPart = 0;
        local_c0 = 0;
        FUN_147069fc6(&local_c8,&local_e8);
        FUN_147066972(&local_d8,uVar1,&local_c8);
        if (local_e0 == 0) {
LAB_1443b9b47:
          if (local_e8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_e8 != (longlong *)0x0) {
          (**(code **)*local_e8)(local_e8,0);
          FUN_1446efa72(&local_e8,0,0,0x10);
          local_e0 = 0;
          goto LAB_1443b9b47;
        }
      }
      FUN_1470690ff(local_d8,uStack_d0 & 0xffffffff);
      plVar11 = local_d8;
LAB_1443b9b71:
      if (plVar11 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar9 = (**(code **)(*plVar11 + 0x180))(plVar11);
      if (*(longlong *)(lVar9 + 0x1f0) == 0) {
        puVar10 = (undefined8 *)(lVar9 + 0x458);
      }
      else {
        puVar10 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar10;
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      FUN_148fcadfc(&local_e8,&local_110);
      local_d8 = (longlong *)0x0;
      uStack_d0._0_4_ = 0;
      FUN_1446efa72(&local_d8,0,3,0x10);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
      *local_d8 = (longlong)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar20 == 0) {
        LOCK();
        UNLOCK();
        lVar20 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_d8[2] = lVar20;
      *local_d8 = (longlong)&PTR_FUN_14ba50c70;
      local_d8[3] = 0;
      *(undefined4 *)(local_d8 + 4) = 0;
      FUN_148fcadfc(local_d8 + 3,&local_e8);
      local_c8.QuadPart = 0;
      local_c0 = 0;
      FUN_14487d8d8(&local_c8,&local_d8);
      local_88 = 1;
      FUN_14016fdb0(uVar5,local_f0,&local_c8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
      if ((int)uStack_d0 == 0) {
LAB_1443b968e:
        if (local_d8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_d8 != (longlong *)0x0) {
        (**(code **)*local_d8)(local_d8,0);
        FUN_1446efa72(&local_d8,0,0,0x10);
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
        goto LAB_1443b968e;
      }
      plVar11 = local_e8;
      if (local_e0 == 0) goto LAB_1443b9b71;
      if (local_e8 != (longlong *)0x0) {
        (**(code **)*local_e8)(local_e8,0);
        FUN_1446efa72(&local_e8,0,0,0x10);
        local_e0 = 0;
        plVar11 = local_e8;
        goto LAB_1443b9b71;
      }
    }
    plVar11 = local_110;
    if (local_108 != 0) {
      if (local_110 == (longlong *)0x0) goto LAB_1443b9bc0;
      (**(code **)*local_110)(local_110,0);
      FUN_1446efa72(&local_110,0,0,0x10);
      local_108 = 0;
      plVar11 = local_110;
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(param_2 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x1f0) + 0xf0);
    }
    uVar5 = *puVar10;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    FUN_14009d848(&local_e8,param_4);
    local_d8 = (longlong *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    FUN_1446efa72(&local_d8,0,3,0x10);
    uStack_d0 = CONCAT44(uStack_d0._4_4_,3);
    *local_d8 = (longlong)&PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_d8[2] = lVar20;
    *local_d8 = (longlong)&PTR_FUN_14ba50ee0;
    local_d8[3] = 0;
    *(undefined4 *)(local_d8 + 4) = 0;
    FUN_14009d848(local_d8 + 3,&local_e8);
    local_c8.QuadPart = 0;
    local_c0 = 0;
    FUN_14487d8d8(&local_c8,&local_d8);
    local_88 = 1;
    FUN_14016fdb0(uVar5,&local_110,&local_c8);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
    if ((int)uStack_d0 == 0) {
LAB_1443b93ac:
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_d8 != (longlong *)0x0) {
      (**(code **)*local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      goto LAB_1443b93ac;
    }
    plVar11 = local_e8;
    if (local_e0 != 0) {
      if (local_e8 == (longlong *)0x0) goto LAB_1443b9bc0;
      (**(code **)*local_e8)(local_e8,0);
      FUN_1446efa72(&local_e8,0,0,0x10);
      local_e0 = 0;
      plVar11 = local_e8;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1443b9bc0:
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443b9e04 FUN_1443b9e04 body=162 status=ok
// SIG undefined FUN_1443b9e04(void)

undefined8 * FUN_1443b9e04(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Dst;
  void *_Src;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 < 2) {
    uVar3 = FUN_1443b9ea6();
    lVar4 = FUN_148fc7896(uVar3);
    if (lVar4 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = 0;
    iVar2 = *(int *)(lVar4 + 0x18);
    uVar5 = (ulonglong)iVar2;
    _Src = *(void **)(lVar4 + 0x10);
    *(int *)(param_2 + 1) = iVar2;
    if (uVar5 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_1446dd670(param_2,iVar2,0);
    _Dst = (void *)*param_2;
  }
  else {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x90);
    *(uint *)(param_2 + 1) = uVar1;
    FUN_1446dd670(param_2,uVar5,0);
    _Dst = (void *)*param_2;
  }
  memcpy(_Dst,_Src,uVar5 * 2);
  return param_2;
}



// FUNCTION 1443b9ea6 FUN_1443b9ea6 body=451 status=ok
// SIG undefined FUN_1443b9ea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1443b9ea6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x98) < 2) {
    puVar8 = (undefined8 *)(param_1 + 0x80);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf5180) && (FUN_144b3d300(&DAT_14cbf5180), DAT_14cbf5180 == -1)) {
      DAT_14cbf5170 = 0;
      _DAT_14cbf5178 = 0;
      atexit(FUN_1443bbc59);
      _Init_thread_footer(&DAT_14cbf5180);
    }
    FUN_145ca3d68(DAT_14cbf5170,_DAT_14cbf5178 & 0xffffffff);
    uVar3 = _DAT_14cbf5178 >> 0x20;
    _DAT_14cbf5178 = _DAT_14cbf5178 & 0xffffffff00000000;
    if ((int)uVar3 != 1) {
      FUN_148fcb53e(&DAT_14cbf5170,1);
    }
    if ((longlong)*(int *)(param_1 + 0x88) == 0) {
      puVar8 = &DAT_14cbf5170;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x80);
      lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x88) * 0x48;
      puVar8 = &DAT_14cbf5170;
      do {
        uVar3 = _DAT_14cbf5178;
        iVar2 = *(int *)(lVar7 + 0x18);
        if (iVar2 == *(int *)(param_1 + 0x98)) {
          if (1 < iVar2) {
            lVar9 = 0;
            while( true ) {
              uVar5 = *(ushort *)(*(longlong *)(lVar7 + 0x10) + lVar9);
              uVar6 = (ulonglong)uVar5;
              uVar10 = *(ushort *)(*(longlong *)(param_1 + 0x90) + lVar9);
              if (uVar5 != uVar10) break;
              if (uVar5 == 0) goto LAB_1443b9fba;
LAB_1443b9f86:
              lVar9 = lVar9 + 2;
            }
            if ((uVar10 | uVar5) < 0x80) {
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar11]) goto LAB_1443b9f86;
            }
            if (uVar5 != uVar10) goto LAB_1443b9ff5;
          }
LAB_1443b9fba:
          lVar9 = (longlong)DAT_14cbf5178;
          uVar4 = DAT_14cbf5178 + 1;
          _DAT_14cbf5178 = CONCAT44(DAT_14cbf517c,uVar4);
          if (DAT_14cbf517c < uVar4) {
            FUN_148fcb1ea(&DAT_14cbf5170,uVar3 & 0xffffffff);
          }
          FUN_148fcb18a(lVar9 * 0x48 + DAT_14cbf5170,lVar7);
        }
        else if (*(int *)(param_1 + 0x98) + iVar2 == 1) goto LAB_1443b9fba;
LAB_1443b9ff5:
        lVar7 = lVar7 + 0x48;
      } while (lVar7 != lVar1);
    }
  }
  return puVar8;
}



// FUNCTION 1443ba06a FUN_1443ba06a body=503 status=ok
// SIG undefined FUN_1443ba06a(void)

ulonglong FUN_1443ba06a(ulonglong param_1,undefined8 param_2,char param_3)

{
  void *_Src;
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 != '\0') || (*(char *)(param_1 + 0x78) == '\x01')) {
    FUN_1400d3e84(param_2,&local_50);
    plVar2 = (longlong *)FUN_1443b9ea6(param_1);
    bVar1 = true;
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = *plVar2;
      lVar8 = lVar3 + (longlong)(int)plVar2[1] * 0x48;
LAB_1443ba0da:
      if (*(int *)(lVar3 + 0x18) != (int)local_48) {
        if (*(int *)(lVar3 + 0x18) + (int)local_48 == 1) goto LAB_1443ba14a;
        goto LAB_1443ba13c;
      }
      if (1 < (int)local_48) {
        lVar7 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(lVar3 + 0x10) + lVar7);
          uVar6 = (ulonglong)uVar5;
          uVar4 = *(ushort *)(local_50 + lVar7);
          if (uVar5 == uVar4) {
            if (uVar5 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar5)) goto LAB_1443ba129;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_1443ba129;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
      goto LAB_1443ba14a;
    }
LAB_1443ba226:
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (!bVar1) goto LAB_1443ba236;
  }
  param_1 = 0;
LAB_1443ba236:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffff01;
LAB_1443ba129:
  if (uVar5 == uVar4) {
LAB_1443ba14a:
    if ((*(char *)(lVar3 + 0x21) == '\x01') && (*(char *)(lVar3 + 0x20) == '\x01')) {
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_1 + 0xb0);
      lVar8 = (longlong)local_58;
      _Src = *(void **)(param_1 + 0xa8);
      if (lVar8 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,_Src,lVar8 * 2);
      }
      if ((longlong *)(param_1 + 0xa8) != &local_50) {
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xa8) = local_50;
        local_50 = 0;
        *(int *)(param_1 + 0xb0) = (int)local_48;
        *(undefined4 *)(param_1 + 0xb4) = local_48._4_4_;
        local_48 = 0;
      }
      FUN_140b9d292(param_1 + 0xe0,&local_60,(longlong *)(param_1 + 0xa8));
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_1 = CONCAT71((int7)(param_1 + 0xe0 >> 8),1);
      bVar1 = false;
    }
    else {
      bVar1 = false;
      param_1 = 0;
    }
    goto LAB_1443ba226;
  }
LAB_1443ba13c:
  lVar3 = lVar3 + 0x48;
  if (lVar3 == lVar8) goto LAB_1443ba226;
  goto LAB_1443ba0da;
}



// FUNCTION 1443ba262 FUN_1443ba262 body=1107 status=ok
// SIG undefined FUN_1443ba262(void)

void FUN_1443ba262(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined1 local_15c [4];
  longlong *local_158;
  longlong **pplStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong **pplStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar14 = *(longlong **)(param_1 + 0x58);
    plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0x60) * 7;
    do {
      local_108 = plVar14 + 2;
      local_158 = plVar14;
      pplStack_100 = &local_158;
      FUN_148fcb9ea(&local_b8,&local_178,&local_108);
      plVar14 = plVar14 + 7;
    } while (plVar14 != plVar15);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (longlong *)0x0;
  pplStack_100 = (longlong **)0x0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x80);
    plVar14 = plVar15 + (longlong)*(int *)(param_1 + 0x88) * 9;
    do {
      local_158 = plVar15 + 2;
      local_178 = plVar15;
      pplStack_150 = &local_178;
      FUN_148fcbe20(&local_108,local_15c,&local_158);
      plVar15 = plVar15 + 9;
    } while (plVar15 != plVar14);
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x48);
    local_188 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar10;
    do {
      puVar1 = (undefined8 *)(lVar10 + 0x10);
      iVar5 = *(int *)(lVar10 + 0x18);
      iVar13 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar13 = 0;
      }
      uVar8 = 0;
      if (0 < iVar13) {
        puVar6 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar6 = (undefined2 *)*puVar1;
        }
        lVar11 = 0;
        uVar8 = 0;
        do {
          uVar9 = ((uint)(0x19 < (ushort)puVar6[lVar11] - 0x61) * 0x20 +
                  (uint)(ushort)puVar6[lVar11]) - 0x20;
          uVar12 = (uint)(uVar8 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar9) & 0xff) * 4);
          uVar8 = (ulonglong)
                  (uVar12 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
          lVar11 = lVar11 + 1;
        } while (iVar13 != (int)lVar11);
      }
      local_180 = lVar10;
      iVar5 = FUN_148fcc118(&local_108,uVar8,puVar1);
      plVar14 = local_108 + (longlong)iVar5 * 4;
      local_178 = (longlong *)0x0;
      uStack_170 = 0;
      FUN_148fc796a(&local_b8,puVar1,&local_178);
      local_138 = 0;
      local_130 = 0;
      local_158 = (longlong *)0x0;
      pplStack_150 = (longlong **)0x0;
      local_12c = 0xffffffff00000080;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      if (plVar14 != (longlong *)0x0 && iVar5 != -1) {
        lVar10 = plVar14[2];
        lVar11 = (longlong)*(int *)(lVar10 + 0x40);
        if (lVar11 != 0) {
          plVar14 = *(longlong **)(lVar10 + 0x38);
          plVar15 = plVar14 + lVar11 * 0xd;
          do {
            if ((longlong)(int)uStack_170 != 0) {
              iVar5 = (int)plVar14[1];
              plVar7 = local_178;
LAB_1443ba556:
              plVar4 = (longlong *)*plVar7;
              if ((int)plVar4[1] != iVar5) {
                if ((int)plVar4[1] + iVar5 == 1) goto LAB_1443ba5c9;
                goto LAB_1443ba5b9;
              }
              if (1 < iVar5) {
                lVar10 = 0;
                do {
                  uVar2 = *(ushort *)(*plVar4 + lVar10);
                  uVar3 = *(ushort *)(*plVar14 + lVar10);
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) {
                      iVar13 = (uint)uVar2 - (uint)uVar3;
                      goto LAB_1443ba5a9;
                    }
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                    goto code_r0x0001443ba5a6;
                  }
                  lVar10 = lVar10 + 2;
                } while( true );
              }
              goto LAB_1443ba5c9;
            }
LAB_1443ba5d7:
            plVar14 = plVar14 + 0xd;
          } while (plVar14 != plVar15);
          local_110 = 0;
          if (local_118 != 0) {
            FUN_1400020a8();
          }
        }
      }
      FUN_1408910a4(&local_158);
      if (local_178 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = local_180 + 0x38;
    } while (lVar10 != local_188);
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_148fca8b2(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_148fcaa20(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001443ba5a6:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1443ba5a9:
  if (iVar13 == 0) {
LAB_1443ba5c9:
    FUN_14482b35e(&local_158,local_15c,plVar4,0);
    goto LAB_1443ba5d7;
  }
LAB_1443ba5b9:
  plVar7 = plVar7 + 1;
  if (plVar7 == local_178 + (int)uStack_170) goto LAB_1443ba5d7;
  goto LAB_1443ba556;
}



// FUNCTION 1443ba6b6 FUN_1443ba6b6 body=55 status=ok
// SIG undefined FUN_1443ba6b6(void)

void FUN_1443ba6b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5080 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf5080 = FUN_14171c317(FUN_1466709e8,uVar1,L"EQosDatacenterResult");
  }
  return;
}



// FUNCTION 1443ba6ed FUN_1443ba6ed body=55 status=ok
// SIG undefined FUN_1443ba6ed(void)

void FUN_1443ba6ed(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf5098 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf5098 = FUN_14171c317(FUN_146670a17,uVar1,L"EQosCompletionResult");
  }
  return;
}



// FUNCTION 1443ba730 FUN_1443ba730 body=674 status=ok
// SIG undefined FUN_1443ba730(void)

void FUN_1443ba730(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined1 local_a8 [56];
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    local_b0 = (longlong *)(param_1 + 0x80);
    uVar4 = (ulonglong)*(int *)(param_1 + 0x88);
    if (0 < (longlong)uVar4) {
      do {
        uVar5 = uVar4 - 1;
        if ((longlong)*(int *)(param_1 + 0x50) == 0) {
LAB_1443ba854:
          FUN_148fc72f6(local_b0,uVar5 & 0xffffffff);
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x48);
          lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar2;
          lVar12 = *local_b0 + uVar5 * 0x48;
          iVar1 = *(int *)(lVar12 + 0x18);
          bVar6 = false;
          do {
            while (*(int *)(lVar2 + 0x18) == iVar1) {
              if (1 < iVar1) {
                lVar11 = 0;
                while( true ) {
                  uVar7 = *(ushort *)(*(longlong *)(lVar2 + 0x10) + lVar11);
                  uVar8 = *(ushort *)(*(longlong *)(lVar12 + 0x10) + lVar11);
                  if (uVar7 != uVar8) break;
                  if (uVar7 == 0) goto LAB_1443ba81b;
LAB_1443ba7f2:
                  lVar11 = lVar11 + 2;
                }
                if ((uVar8 | uVar7) < 0x80) {
                  if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[(uint)uVar8]) goto LAB_1443ba7f2;
                  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar7] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar8];
                }
                else {
                  iVar10 = (uint)uVar7 - (uint)uVar8;
                }
                if (iVar10 != 0) goto LAB_1443ba832;
              }
LAB_1443ba81b:
              lVar2 = lVar2 + 0x38;
              bVar6 = true;
              if (lVar2 == lVar3) goto LAB_1443ba848;
            }
            if (*(int *)(lVar2 + 0x18) + iVar1 == 1) goto LAB_1443ba81b;
LAB_1443ba832:
            lVar2 = lVar2 + 0x38;
          } while (lVar2 != lVar3);
          if (!bVar6) goto LAB_1443ba854;
        }
LAB_1443ba848:
        bVar6 = 1 < (longlong)uVar4;
        uVar4 = uVar5;
      } while (bVar6);
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      uVar4 = 0;
      do {
        lVar12 = uVar4 * 0x38 + *(longlong *)(param_1 + 0x48);
        if ((longlong)*(int *)(param_1 + 0x88) == 0) {
LAB_1443ba94a:
          FUN_148fca686(local_a8,lVar12);
          local_70 = 0;
          uStack_68 = 0;
          FUN_148fc73ae(local_b0,local_a8,uVar4 & 0xffffffff);
          FUN_148fc7426(local_a8);
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x80);
          lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x88) * 0x48;
          bVar6 = false;
          do {
            iVar1 = *(int *)(lVar12 + 0x18);
LAB_1443ba8aa:
            if (iVar1 == *(int *)(lVar3 + 0x18)) {
              if (1 < iVar1) {
                lVar11 = 0;
                do {
                  uVar7 = *(ushort *)(*(longlong *)(lVar12 + 0x10) + lVar11);
                  uVar5 = (ulonglong)uVar7;
                  uVar8 = *(ushort *)(*(longlong *)(lVar3 + 0x10) + lVar11);
                  if (uVar7 == uVar8) {
                    if (uVar7 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar8 | uVar7)) goto LAB_1443ba8fc;
                    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                    uVar9 = (ulonglong)uVar8;
                    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                    if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar9]) goto LAB_1443ba8fc;
                  }
                  lVar11 = lVar11 + 2;
                } while( true );
              }
            }
            else if (*(int *)(lVar3 + 0x18) + iVar1 != 1) goto LAB_1443ba90d;
LAB_1443ba918:
            FUN_148fc734e(lVar3,lVar12);
            lVar3 = lVar3 + 0x48;
            bVar6 = true;
          } while (lVar3 != lVar2);
        }
LAB_1443ba938:
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x50));
    }
    if ((*(int *)(param_1 + 0xd8) != 0) && (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x60))();
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      FUN_1443ba9d4(param_1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1443ba8fc:
  if (uVar7 == uVar8) goto LAB_1443ba918;
LAB_1443ba90d:
  lVar3 = lVar3 + 0x48;
  if (lVar3 == lVar2) {
    if (!bVar6) goto LAB_1443ba94a;
    goto LAB_1443ba938;
  }
  goto LAB_1443ba8aa;
}



// FUNCTION 1443ba9d4 FUN_1443ba9d4 body=269 status=ok
// SIG undefined FUN_1443ba9d4(void)

void FUN_1443ba9d4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  void *_Src;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x98);
  if ((int)uVar1 < 2) {
    if ((*(char *)(param_1 + 0x78) == '\0') || (uVar1 = *(uint *)(param_1 + 0xb0), (int)uVar1 < 2))
    {
      FUN_140056680(&local_38,&DAT_149e30aac);
      goto LAB_1443baa65;
    }
    _Src = *(void **)(param_1 + 0xa8);
  }
  else {
    _Src = *(void **)(param_1 + 0x90);
  }
  local_38 = (void *)0x0;
  local_30 = uVar1;
  FUN_1446dd670(&local_38,(ulonglong)uVar1,0);
  memcpy(local_38,_Src,(ulonglong)uVar1 * 2);
LAB_1443baa65:
  cVar2 = FUN_1443ba06a(param_1,&local_38,0);
  if (cVar2 == '\0') {
    FUN_1443b9e04(param_1,local_48);
    cVar2 = FUN_1443ba06a(param_1,local_48,0);
    if (cVar2 == '\0') {
      FUN_1443ba262(param_1);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443baae2 FUN_1443baae2 body=4470 status=ok
// SIG undefined FUN_1443baae2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1443baae2(longlong param_1,undefined1 param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint uVar30;
  ushort uVar31;
  ushort uVar32;
  ulonglong uVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_4a8 [47];
  char local_479;
  ulonglong *local_478;
  undefined *local_470;
  longlong local_468;
  longlong local_460;
  int local_454;
  longlong *local_450;
  longlong local_448;
  longlong local_440;
  undefined8 *local_438;
  undefined8 *local_430;
  longlong local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  longlong local_3d8;
  undefined4 local_3d0;
  ulonglong local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8 [188];
  undefined8 *local_c8;
  ulonglong uStack_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_440 = param_4;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar30 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xc);
    if ((int)uVar30 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    FUN_14482b126(lVar13,0x40000000);
    lVar13 = *(longlong *)(param_1 + 0x70);
    FUN_144757f48(lVar13,0x40000000);
    uVar30 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar30 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    do {
      uVar30 = *(uint *)(lVar13 + 8);
      if ((uVar30 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar35 = uVar30 == *(uint *)(lVar13 + 8);
      if (bVar35) {
        *(uint *)(lVar13 + 8) = uVar30 | 0x200000;
      }
      UNLOCK();
    } while (!bVar35);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x78) = param_2;
  local_450 = (longlong *)(param_1 + 0x80);
  FUN_148fc7506(local_450,*(undefined4 *)(param_1 + 0x50));
  local_3f8 = 0;
  local_3f0 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_3ec = 0xffffffff00000080;
  local_3e4 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  if ((longlong)(int)param_3[1] != 0) {
    lVar13 = *param_3;
    lVar34 = (longlong)(int)param_3[1] * 0x68;
    do {
      local_3c8 = lVar13 + 0x10;
      local_3c0 = lVar13;
      FUN_148fcb5ae(&local_418,&local_c8,&local_3c8);
      lVar13 = lVar13 + 0x68;
      lVar34 = lVar34 + -0x68;
    } while (lVar34 != 0);
  }
  local_3c8 = local_3c8 & 0xffffffffffffff00;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_140751e3e(&DAT_14c846b20,L"qossubspacebias=",&local_3c8);
  puVar26 = (ulonglong *)(param_1 + 0x30);
  if (cVar7 != '\0') {
    puVar26 = &local_3c8;
  }
  ppuVar10 = &PTR_DAT_14ba4ff88;
  if (1 < *(int *)(param_1 + 0x40)) {
    ppuVar10 = (undefined **)(param_1 + 0x38);
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    local_479 = (char)*puVar26;
    local_470 = *ppuVar10;
    lVar13 = *(longlong *)(param_1 + 0x48);
    lVar34 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar13;
    local_468 = lVar34;
    do {
      lVar29 = lVar13;
      if (*(char *)(lVar13 + 0x20) == '\x01') {
        local_460 = lVar13;
        iVar9 = FUN_148fc754c(&local_418);
        lVar34 = local_468;
        lVar29 = local_460;
        if (iVar9 != 0) {
          iVar9 = *(int *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = iVar9 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar9 + 1U) {
            FUN_148fcb1ea(local_450,iVar9);
          }
          lVar34 = *local_450;
          lVar3 = lVar34 + (longlong)iVar9 * 0x48;
          FUN_148fca686(lVar3,local_460);
          lVar34 = lVar34 + (longlong)iVar9 * 0x48;
          puVar26 = (ulonglong *)(lVar34 + 0x38);
          *puVar26 = 0;
          *(undefined8 *)(lVar34 + 0x40) = 0;
          FUN_148fc76b8(&local_418,lVar13 + 0x10,puVar26);
          lVar34 = local_468;
          lVar29 = local_460;
          if ((local_479 == '\0') || (*(char *)(local_460 + 0x23) != '\x01')) {
            iVar9 = *(int *)(lVar3 + 0x40);
            if (1 < (longlong)iVar9) {
              uVar12 = *puVar26;
              memset(local_3b8,0,0x2f0);
              local_3c0 = (longlong)iVar9 * 0x68 + uVar12 + -0x68;
              local_3c8 = uVar12;
              fVar36 = logf((float)iVar9);
              local_3b8[0] = (int)(longlong)(fVar36 + fVar36);
              puVar26 = &local_3c8;
              do {
                puVar14 = (undefined8 *)*puVar26;
                puVar17 = (undefined8 *)puVar26[1];
                iVar9 = (int)puVar26[2];
                iVar8 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar14) >> 3) * -0x3b13b13b
                ;
                uVar30 = iVar8 + 1;
                puVar16 = puVar17;
                puVar20 = puVar14;
                if (iVar9 != 0) {
LAB_1443bb487:
                  if (8 < (int)uVar30) {
                    puVar21 = puVar14 + (ulonglong)(uVar30 >> 1) * 0xd;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar21;
                      puVar21 = puVar21 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar21 = puVar14;
                    puVar11 = puVar14 + (ulonglong)(uVar30 >> 1) * 0xd;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar11 = *puVar21;
                      puVar21 = puVar21 + 1;
                      puVar11 = puVar11 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar21 = puVar14;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar21 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar21 = puVar21 + 1;
                    }
                    puVar21 = puVar16 + 0xd;
                    puVar11 = puVar14;
                    do {
                      puVar23 = puVar11 + 0xd;
                      puVar27 = puVar11 + 0xd;
                      do {
                        puVar11 = puVar27;
                        puVar18 = puVar23;
                        if (puVar16 < puVar11) break;
                        puVar23 = puVar18 + 0xd;
                        puVar27 = puVar11 + 0xd;
                      } while (*(int *)((longlong)puVar11 + 0x3c) <=
                               *(int *)((longlong)puVar14 + 0x3c));
                      puVar23 = puVar21 + -0x1a;
                      do {
                        puVar27 = puVar21;
                        puVar22 = puVar23;
                        puVar21 = puVar27 + -0xd;
                        if (puVar21 <= puVar14) break;
                        puVar23 = puVar22 + -0xd;
                      } while (*(int *)((longlong)puVar14 + 0x3c) <=
                               *(int *)((longlong)puVar27 + -0x2c));
                      lVar13 = 0xd;
                      if (puVar21 < puVar11) goto LAB_1443bb560;
                      puVar23 = puVar11;
                      ppuVar19 = &local_c8;
                      for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *ppuVar19 = (undefined8 *)*puVar23;
                        puVar23 = puVar23 + 1;
                        ppuVar19 = ppuVar19 + 1;
                      }
                      puVar23 = puVar21;
                      puVar27 = puVar11;
                      for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *puVar27 = *puVar23;
                        puVar23 = puVar23 + 1;
                        puVar27 = puVar27 + 1;
                      }
                      ppuVar19 = &local_c8;
                      puVar23 = puVar21;
                      for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *puVar23 = *ppuVar19;
                        ppuVar19 = ppuVar19 + 1;
                        puVar23 = puVar23 + 1;
                      }
                    } while( true );
                  }
                  while (puVar17 = puVar14, puVar20 = puVar14, puVar14 < puVar16) {
                    while (puVar21 = puVar17, puVar17 = puVar20 + 0xd, puVar17 <= puVar16) {
                      piVar1 = (int *)((longlong)puVar20 + 0xa4);
                      puVar20 = puVar17;
                      if (*piVar1 <= *(int *)((longlong)puVar21 + 0x3c)) {
                        puVar17 = puVar21;
                      }
                    }
                    puVar17 = puVar16 + -0xd;
                    puVar20 = puVar21;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar20;
                      puVar20 = puVar20 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar20 = puVar16;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar21 = *puVar20;
                      puVar20 = puVar20 + 1;
                      puVar21 = puVar21 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar20 = puVar16;
                    for (lVar13 = 0xd; puVar16 = puVar17, lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar20 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar20 = puVar20 + 1;
                    }
                  }
                  goto LAB_1443bb890;
                }
LAB_1443bb61d:
                if (uVar30 != 0) {
                  iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
                  iVar9 = iVar8;
joined_r0x0001443bb642:
                  do {
                    iVar25 = iVar9 * 2 + 1;
                    if (iVar25 < (int)uVar30) {
                      iVar24 = iVar9 * 2 + 2;
                      if ((iVar24 < (int)uVar30) &&
                         (*(int *)((longlong)puVar14 + (longlong)iVar25 * 0x68 + 0x3c) <=
                          *(int *)((longlong)puVar14 + (longlong)iVar24 * 0x68 + 0x3c))) {
                        iVar25 = iVar24;
                      }
                      if (*(int *)((longlong)puVar14 + (longlong)iVar9 * 0x68 + 0x3c) <
                          *(int *)((longlong)puVar14 + (longlong)iVar25 * 0x68 + 0x3c)) {
                        puVar17 = puVar14 + (longlong)iVar9 * 0xd;
                        ppuVar19 = &local_c8;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *ppuVar19 = (undefined8 *)*puVar17;
                          puVar17 = puVar17 + 1;
                          ppuVar19 = ppuVar19 + 1;
                        }
                        puVar17 = puVar14 + (longlong)iVar25 * 0xd;
                        puVar16 = puVar14 + (longlong)iVar9 * 0xd;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar16 = *puVar17;
                          puVar17 = puVar17 + 1;
                          puVar16 = puVar16 + 1;
                        }
                        ppuVar19 = &local_c8;
                        puVar17 = puVar14 + (longlong)iVar25 * 0xd;
                        for (lVar13 = 0xd; iVar9 = iVar25, lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar17 = *ppuVar19;
                          ppuVar19 = ppuVar19 + 1;
                          puVar17 = puVar17 + 1;
                        }
                        goto joined_r0x0001443bb642;
                      }
                    }
                    bVar35 = iVar8 != 0;
                    iVar8 = iVar8 + -1;
                    iVar9 = iVar8;
                  } while (bVar35);
                  if (1 < (int)uVar30) {
                    puVar17 = puVar14;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar17;
                      puVar17 = puVar17 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar17 = puVar14 + ((ulonglong)uVar30 - 1) * 0xd;
                    puVar16 = puVar14;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar16 = *puVar17;
                      puVar17 = puVar17 + 1;
                      puVar16 = puVar16 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar17 = puVar14 + ((ulonglong)uVar30 - 1) * 0xd;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar17 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar17 = puVar17 + 1;
                    }
                    uVar12 = (ulonglong)uVar30 - 1;
                    if (uVar30 != 2) {
                      do {
                        iVar9 = 0;
                        iVar25 = 1;
                        iVar8 = 0;
                        do {
                          iVar9 = iVar9 + 2;
                          iVar24 = iVar25;
                          if (((longlong)iVar9 < (longlong)uVar12) &&
                             (*(int *)((longlong)puVar14 + (longlong)iVar25 * 0x68 + 0x3c) <=
                              *(int *)((longlong)puVar14 + (longlong)iVar9 * 0x68 + 0x3c))) {
                            iVar24 = iVar9;
                          }
                          if (*(int *)((longlong)puVar14 + (longlong)iVar24 * 0x68 + 0x3c) <=
                              *(int *)((longlong)puVar14 + (longlong)iVar8 * 0x68 + 0x3c)) break;
                          puVar17 = puVar14 + (longlong)iVar8 * 0xd;
                          ppuVar19 = &local_c8;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *ppuVar19 = (undefined8 *)*puVar17;
                            puVar17 = puVar17 + 1;
                            ppuVar19 = ppuVar19 + 1;
                          }
                          puVar17 = puVar14 + (longlong)iVar24 * 0xd;
                          puVar16 = puVar14 + (longlong)iVar8 * 0xd;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *puVar16 = *puVar17;
                            puVar17 = puVar17 + 1;
                            puVar16 = puVar16 + 1;
                          }
                          ppuVar19 = &local_c8;
                          puVar17 = puVar14 + (longlong)iVar24 * 0xd;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *puVar17 = *ppuVar19;
                            ppuVar19 = ppuVar19 + 1;
                            puVar17 = puVar17 + 1;
                          }
                          iVar9 = iVar24 * 2;
                          iVar25 = iVar24 * 2 + 1;
                          iVar8 = iVar24;
                        } while ((longlong)iVar25 < (longlong)uVar12);
                        puVar17 = puVar14;
                        ppuVar19 = &local_c8;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *ppuVar19 = (undefined8 *)*puVar17;
                          puVar17 = puVar17 + 1;
                          ppuVar19 = ppuVar19 + 1;
                        }
                        puVar17 = puVar14 + (uVar12 - 1) * 0xd;
                        puVar16 = puVar14;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar16 = *puVar17;
                          puVar17 = puVar17 + 1;
                          puVar16 = puVar16 + 1;
                        }
                        ppuVar19 = &local_c8;
                        puVar17 = puVar14 + (uVar12 - 1) * 0xd;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar17 = *ppuVar19;
                          ppuVar19 = ppuVar19 + 1;
                          puVar17 = puVar17 + 1;
                        }
                        bVar35 = 2 < uVar12;
                        uVar12 = uVar12 - 1;
                      } while (bVar35);
                    }
                  }
                }
LAB_1443bb890:
                puVar26 = puVar26 + -3;
                lVar34 = local_468;
                lVar29 = local_460;
              } while (&local_3c8 <= puVar26);
            }
          }
          else {
            local_428 = *(longlong *)(local_460 + 0x24);
            uStack_420 = *(undefined8 *)(local_460 + 0x2c);
            iVar9 = *(int *)(lVar3 + 0x40);
            if (1 < (longlong)iVar9) {
              uVar12 = *puVar26;
              local_448 = param_1;
              memset(local_3b8,0,0x2f0);
              local_3c0 = (longlong)iVar9 * 0x68 + uVar12 + -0x68;
              local_3c8 = uVar12;
              fVar36 = logf((float)iVar9);
              local_3b8[0] = (int)(longlong)(fVar36 + fVar36);
              puVar26 = &local_3c8;
              do {
                puVar14 = (undefined8 *)*puVar26;
                puVar17 = (undefined8 *)puVar26[1];
                iVar9 = (int)puVar26[2];
                iVar8 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar14) >> 3) * -0x3b13b13b
                ;
                uVar30 = iVar8 + 1;
                puVar20 = puVar14;
                puVar16 = puVar14;
                puVar21 = puVar17;
                local_478 = puVar26;
                if (iVar9 != 0) {
LAB_1443baf14:
                  puVar26 = local_478;
                  if (8 < (int)uVar30) {
                    puVar20 = puVar16 + (ulonglong)(uVar30 >> 1) * 0xd;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar20;
                      puVar20 = puVar20 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar20 = puVar16;
                    puVar11 = puVar16 + (ulonglong)(uVar30 >> 1) * 0xd;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar11 = *puVar20;
                      puVar20 = puVar20 + 1;
                      puVar11 = puVar11 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar20 = puVar16;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar20 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    puVar11 = puVar17 + 0xd;
                    puVar20 = puVar16;
                    local_454 = iVar9;
                    local_438 = puVar14;
                    local_430 = puVar21;
                    do {
                      puVar6 = local_470;
                      puVar14 = puVar20 + 0xd;
                      puVar21 = puVar20 + 0xd;
                      do {
                        puVar20 = puVar21;
                        puVar23 = puVar14;
                        if (puVar17 < puVar20) break;
                        cVar7 = FUN_148fc70d6(puVar16,puVar20,&local_428,puVar6);
                        puVar14 = puVar23 + 0xd;
                        puVar21 = puVar20 + 0xd;
                      } while (cVar7 == '\0');
                      puVar14 = puVar11 + -0x1a;
                      do {
                        puVar27 = puVar11;
                        puVar21 = puVar14;
                        puVar11 = puVar27 + -0xd;
                        if (puVar11 <= puVar16) break;
                        cVar7 = FUN_148fc70d6(puVar11,puVar16,&local_428,puVar6);
                        puVar14 = puVar21 + -0xd;
                      } while (cVar7 == '\0');
                      lVar13 = 0xd;
                      puVar14 = puVar16;
                      puVar18 = puVar20;
                      ppuVar19 = &local_c8;
                      if (puVar11 < puVar20) goto code_r0x0001443bb022;
                      for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *ppuVar19 = (undefined8 *)*puVar18;
                        puVar18 = puVar18 + 1;
                        ppuVar19 = ppuVar19 + 1;
                      }
                      puVar14 = puVar11;
                      puVar21 = puVar20;
                      for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *puVar21 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar21 = puVar21 + 1;
                      }
                      ppuVar19 = &local_c8;
                      puVar14 = puVar11;
                      for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                        *puVar14 = *ppuVar19;
                        ppuVar19 = ppuVar19 + 1;
                        puVar14 = puVar14 + 1;
                      }
                    } while( true );
                  }
                  while (puVar20 = puVar16, puVar14 = puVar16, puVar16 < puVar17) {
                    while (puVar21 = puVar20, puVar14 = puVar14 + 0xd, puVar14 <= puVar17) {
                      cVar7 = FUN_148fc70d6(puVar21,puVar14,&local_428,local_470);
                      puVar20 = puVar14;
                      if (cVar7 == '\0') {
                        puVar20 = puVar21;
                      }
                    }
                    puVar14 = puVar17 + -0xd;
                    puVar20 = puVar21;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar20;
                      puVar20 = puVar20 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar20 = puVar17;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar21 = *puVar20;
                      puVar20 = puVar20 + 1;
                      puVar21 = puVar21 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar20 = puVar17;
                    for (lVar13 = 0xd; puVar17 = puVar14, lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar20 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar20 = puVar20 + 1;
                    }
                  }
                  goto LAB_1443bb3cf;
                }
LAB_1443bb0ed:
                puVar26 = local_478;
                if (uVar30 != 0) {
                  iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
                  iVar9 = iVar8;
joined_r0x0001443bb110:
                  do {
                    iVar25 = iVar9 * 2 + 1;
                    if (iVar25 < (int)uVar30) {
                      iVar24 = iVar9 * 2 + 2;
                      if ((iVar24 < (int)uVar30) &&
                         (cVar7 = FUN_148fc70d6(puVar20 + (longlong)iVar24 * 0xd,
                                                puVar20 + (longlong)iVar25 * 0xd,&local_428,
                                                local_470), cVar7 == '\0')) {
                        iVar25 = iVar24;
                      }
                      puVar17 = puVar20 + (longlong)iVar9 * 0xd;
                      puVar14 = puVar20 + (longlong)iVar25 * 0xd;
                      cVar7 = FUN_148fc70d6(puVar17,puVar14,&local_428,local_470);
                      if (cVar7 != '\0') {
                        puVar16 = puVar17;
                        ppuVar19 = &local_c8;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *ppuVar19 = (undefined8 *)*puVar16;
                          puVar16 = puVar16 + 1;
                          ppuVar19 = ppuVar19 + 1;
                        }
                        puVar16 = puVar14;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar17 = *puVar16;
                          puVar16 = puVar16 + 1;
                          puVar17 = puVar17 + 1;
                        }
                        ppuVar19 = &local_c8;
                        for (lVar13 = 0xd; iVar9 = iVar25, lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar14 = *ppuVar19;
                          ppuVar19 = ppuVar19 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        goto joined_r0x0001443bb110;
                      }
                    }
                    puVar26 = local_478;
                    bVar35 = iVar8 != 0;
                    iVar8 = iVar8 + -1;
                    iVar9 = iVar8;
                  } while (bVar35);
                  if (1 < (int)uVar30) {
                    uVar12 = (ulonglong)uVar30 - 1;
                    puVar14 = puVar20;
                    ppuVar19 = &local_c8;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *ppuVar19 = (undefined8 *)*puVar14;
                      puVar14 = puVar14 + 1;
                      ppuVar19 = ppuVar19 + 1;
                    }
                    puVar14 = puVar20 + uVar12 * 0xd;
                    puVar17 = puVar20;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar17 = *puVar14;
                      puVar14 = puVar14 + 1;
                      puVar17 = puVar17 + 1;
                    }
                    ppuVar19 = &local_c8;
                    puVar14 = puVar20 + uVar12 * 0xd;
                    for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar14 = *ppuVar19;
                      ppuVar19 = ppuVar19 + 1;
                      puVar14 = puVar14 + 1;
                    }
                    if (uVar30 != 2) {
                      do {
                        iVar9 = 0;
                        iVar25 = 1;
                        iVar8 = 0;
                        do {
                          iVar9 = iVar9 + 2;
                          iVar24 = iVar25;
                          if (((longlong)iVar9 < (longlong)uVar12) &&
                             (cVar7 = FUN_148fc70d6(puVar20 + (longlong)iVar9 * 0xd,
                                                    puVar20 + (longlong)iVar25 * 0xd,&local_428,
                                                    local_470), cVar7 == '\0')) {
                            iVar24 = iVar9;
                          }
                          puVar17 = puVar20 + (longlong)iVar8 * 0xd;
                          puVar14 = puVar20 + (longlong)iVar24 * 0xd;
                          cVar7 = FUN_148fc70d6(puVar17,puVar14,&local_428,local_470);
                          if (cVar7 == '\0') break;
                          puVar16 = puVar17;
                          ppuVar19 = &local_c8;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *ppuVar19 = (undefined8 *)*puVar16;
                            puVar16 = puVar16 + 1;
                            ppuVar19 = ppuVar19 + 1;
                          }
                          puVar16 = puVar14;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *puVar17 = *puVar16;
                            puVar16 = puVar16 + 1;
                            puVar17 = puVar17 + 1;
                          }
                          ppuVar19 = &local_c8;
                          for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                            *puVar14 = *ppuVar19;
                            ppuVar19 = ppuVar19 + 1;
                            puVar14 = puVar14 + 1;
                          }
                          iVar9 = iVar24 * 2;
                          iVar25 = iVar24 * 2 + 1;
                          iVar8 = iVar24;
                        } while ((longlong)iVar25 < (longlong)uVar12);
                        puVar14 = puVar20;
                        ppuVar19 = &local_c8;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *ppuVar19 = (undefined8 *)*puVar14;
                          puVar14 = puVar14 + 1;
                          ppuVar19 = ppuVar19 + 1;
                        }
                        puVar14 = puVar20 + (uVar12 - 1) * 0xd;
                        puVar17 = puVar20;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar17 = *puVar14;
                          puVar14 = puVar14 + 1;
                          puVar17 = puVar17 + 1;
                        }
                        ppuVar19 = &local_c8;
                        puVar14 = puVar20 + (uVar12 - 1) * 0xd;
                        for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                          *puVar14 = *ppuVar19;
                          ppuVar19 = ppuVar19 + 1;
                          puVar14 = puVar14 + 1;
                        }
                        bVar35 = 2 < uVar12;
                        uVar12 = uVar12 - 1;
                      } while (bVar35);
                    }
                  }
                }
LAB_1443bb3cf:
                puVar26 = puVar26 + -3;
                lVar34 = local_468;
                lVar29 = local_460;
                param_1 = local_448;
              } while (&local_3c8 <= puVar26);
            }
          }
        }
      }
      lVar13 = lVar29 + 0x38;
    } while (lVar13 != lVar34);
  }
  FUN_140212f8e(&local_3c8);
  *(ulonglong *)(param_1 + 0x68) = local_3c8;
  if (1 < *(int *)(param_1 + 0xb0)) {
    lVar13 = 0;
    while( true ) {
      uVar31 = *(ushort *)(*(longlong *)(param_1 + 0xa8) + lVar13);
      uVar12 = (ulonglong)uVar31;
      uVar32 = *(ushort *)((longlong)&DAT_149e30aac + lVar13);
      if (uVar31 != uVar32) break;
      if (uVar31 == 0) goto LAB_1443bad44;
LAB_1443bad15:
      lVar13 = lVar13 + 2;
    }
    if ((uVar32 | uVar31) < 0x80) {
      uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar33 = (ulonglong)uVar32;
      uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar33];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar33]) goto LAB_1443bad15;
    }
    if (uVar31 != uVar32) goto LAB_1443bb927;
LAB_1443bad44:
    if (*(char *)(param_1 + 0xa0) == '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
      FUN_1400d3e84((longlong *)(param_1 + 0xa8),&local_3c8);
      puVar26 = (ulonglong *)(param_1 + 0x90);
      if (puVar26 == &local_3c8) {
        if (local_3c8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0x90) = local_3c8;
        local_3c8 = 0;
        *(int *)(param_1 + 0x98) = (int)local_3c0;
        *(undefined4 *)(param_1 + 0x9c) = local_3c0._4_4_;
      }
      cVar7 = FUN_1443ba06a(param_1,puVar26,1);
      if ((cVar7 == '\0') && (*(undefined4 *)(param_1 + 0x98) = 0, *(int *)(param_1 + 0x9c) != 0)) {
        FUN_1446f8c06(puVar26,0);
      }
    }
  }
LAB_1443bb927:
  if (*(int *)(param_1 + 0x88) < 1) {
    *(undefined1 *)(param_1 + 0x78) = 2;
  }
  else if ((byte)(*(char *)(param_1 + 0x78) - 1U) < 2) {
    FUN_1443ba9d4(param_1);
  }
  FUN_1443b9e04(param_1,&local_3c8);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_148fc6f8a(param_1,&local_3c8);
  if (local_440 != 0) {
    iVar9 = (int)local_3c0 + -1;
    if ((int)local_3c0 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(local_440,local_3c8,iVar9);
  }
  if (param_5 != (longlong *)0x0) {
    if ((int)uStack_c0 == 0) {
      local_428 = 0;
      uStack_420 = 0;
    }
    else {
      if (*(int *)(local_c8 + 1) == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)*local_c8;
      }
      FUN_140056680(&local_428,puVar15);
    }
    if (&local_428 == param_5) {
      if (local_428 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_5 != 0) {
        FUN_1400020a8();
      }
      *param_5 = local_428;
      local_428 = 0;
      *(undefined4 *)(param_5 + 1) = (undefined4)uStack_420;
      *(undefined4 *)((longlong)param_5 + 0xc) = uStack_420._4_4_;
    }
  }
  plVar2 = (longlong *)(param_1 + 0xb8);
  iVar9 = *(int *)(param_1 + 0xcc);
  *(int *)(param_1 + 0xcc) = iVar9 + 1;
  uVar12 = (ulonglong)*(int *)(param_1 + 0xc0);
  if ((longlong)uVar12 < 1) {
    *(int *)(param_1 + 0xcc) = iVar9;
  }
  else {
    bVar35 = false;
    do {
      lVar13 = uVar12 * 0x10 + -8;
      uVar33 = uVar12;
      while (((*(int *)(*plVar2 + lVar13) != 0 &&
              (plVar4 = *(longlong **)(*plVar2 + -8 + lVar13), plVar4 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar4 + 0x60))(), cVar7 != '\0'))) {
        lVar13 = lVar13 + -0x10;
        bVar5 = uVar33 < 2;
        uVar33 = uVar33 - 1;
        if (bVar5) {
          iVar9 = *(int *)(param_1 + 0xcc) + -1;
          *(int *)(param_1 + 0xcc) = iVar9;
          if (bVar35) goto LAB_1443bbad1;
          goto LAB_1443bbb4a;
        }
      }
      uVar12 = uVar33 - 1;
      bVar35 = true;
    } while (1 < uVar33);
    iVar9 = *(int *)(param_1 + 0xcc) + -1;
    *(int *)(param_1 + 0xcc) = iVar9;
LAB_1443bbad1:
    if (iVar9 < 1) {
      iVar9 = *(int *)(param_1 + 0xc0);
      iVar8 = iVar9;
      if (0 < iVar9) {
        iVar25 = 0;
        do {
          if (((*(int *)(*plVar2 + 8 + (longlong)iVar25 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(*plVar2 + (longlong)iVar25 * 0x10), plVar4 == (longlong *)0x0
              )) || (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
            FUN_14005b288(plVar2,iVar25);
            FUN_14005b248(plVar2);
          }
          else {
            iVar25 = iVar25 + 1;
          }
          iVar8 = *(int *)(param_1 + 0xc0);
        } while (iVar25 < iVar8);
      }
      iVar25 = 2;
      if (2 < iVar8 * 2) {
        iVar25 = iVar8 * 2;
      }
      *(int *)(param_1 + 200) = iVar25;
      if ((iVar25 < iVar9) && (*(int *)(param_1 + 0xc4) != iVar8)) {
        FUN_14045812c(plVar2);
      }
    }
  }
LAB_1443bbb4a:
  FUN_1448a8284(plVar2);
  FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  local_3d0 = 0;
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  FUN_148fca70e(&local_418);
  if ((local_60 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1443bb560:
  puVar23 = puVar14;
  ppuVar19 = &local_c8;
  for (; lVar13 != 0; lVar13 = lVar13 + -1) {
    *ppuVar19 = (undefined8 *)*puVar23;
    puVar23 = puVar23 + 1;
    ppuVar19 = ppuVar19 + 1;
  }
  puVar23 = puVar21;
  puVar28 = puVar14;
  for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar28 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar28 = puVar28 + 1;
  }
  ppuVar19 = &local_c8;
  puVar23 = puVar21;
  for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar23 = *ppuVar19;
    ppuVar19 = ppuVar19 + 1;
    puVar23 = puVar23 + 1;
  }
  iVar9 = iVar9 + -1;
  puVar27 = puVar27 + -0x1a;
  if ((longlong)puVar22 - (longlong)puVar20 < (longlong)puVar17 - (longlong)puVar18) {
    if (puVar11 < puVar16) {
      *puVar26 = (ulonglong)puVar11;
      puVar26[1] = (ulonglong)puVar16;
      *(int *)(puVar26 + 2) = iVar9;
      puVar26 = puVar26 + 3;
    }
    puVar18 = puVar14;
    puVar17 = puVar22;
    if (puVar21 <= puVar14 + 0xd) goto LAB_1443bb890;
  }
  else {
    if (puVar14 + 0xd < puVar21) {
      *puVar26 = (ulonglong)puVar14;
      puVar26[1] = (ulonglong)puVar27;
      *(int *)(puVar26 + 2) = iVar9;
      puVar26 = puVar26 + 3;
    }
    puVar14 = puVar11;
    puVar27 = puVar16;
    puVar17 = puVar16;
    if (puVar16 <= puVar11) goto LAB_1443bb890;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar18) >> 3) * -0x3b13b13b;
  uVar30 = iVar8 + 1;
  puVar16 = puVar27;
  puVar20 = puVar18;
  if (iVar9 == 0) goto LAB_1443bb61d;
  goto LAB_1443bb487;
code_r0x0001443bb022:
  for (; lVar13 != 0; lVar13 = lVar13 + -1) {
    *ppuVar19 = (undefined8 *)*puVar14;
    puVar14 = puVar14 + 1;
    ppuVar19 = ppuVar19 + 1;
  }
  puVar14 = puVar11;
  puVar18 = puVar16;
  for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar18 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar18 = puVar18 + 1;
  }
  ppuVar19 = &local_c8;
  puVar14 = puVar11;
  for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar14 = *ppuVar19;
    ppuVar19 = ppuVar19 + 1;
    puVar14 = puVar14 + 1;
  }
  iVar9 = local_454 + -1;
  puVar27 = puVar27 + -0x1a;
  if ((longlong)puVar21 - (longlong)local_438 < (longlong)local_430 - (longlong)puVar23) {
    if (puVar20 < puVar17) {
      *local_478 = (ulonglong)puVar20;
      local_478[1] = (ulonglong)puVar17;
      *(int *)(local_478 + 2) = iVar9;
      local_478 = local_478 + 3;
    }
    puVar26 = local_478;
    puVar20 = puVar16;
    if (puVar11 <= puVar16 + 0xd) goto LAB_1443bb3cf;
  }
  else {
    puVar26 = local_478;
    if (puVar16 + 0xd < puVar11) {
      *local_478 = (ulonglong)puVar16;
      local_478[1] = (ulonglong)puVar27;
      *(int *)(local_478 + 2) = iVar9;
      puVar26 = local_478 + 3;
    }
    puVar16 = puVar23;
    puVar27 = puVar17;
    puVar21 = puVar17;
    if (puVar17 <= puVar20) goto LAB_1443bb3cf;
  }
  local_478 = puVar26;
  iVar8 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar16) >> 3) * -0x3b13b13b;
  uVar30 = iVar8 + 1;
  puVar14 = puVar16;
  puVar16 = puVar20;
  puVar17 = puVar27;
  if (iVar9 == 0) goto LAB_1443bb0ed;
  goto LAB_1443baf14;
}



// FUNCTION 1443bbc59 FUN_1443bbc59 body=49 status=ok
// SIG undefined FUN_1443bbc59(void)

void FUN_1443bbc59(void)

{
  FUN_145ca3d68(DAT_14cbf5170,DAT_14cbf5178);
  if (DAT_14cbf5170 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443bbe10 FUN_1443bbe10 body=111 status=ok
// SIG undefined FUN_1443bbe10(void)

undefined8 * FUN_1443bbe10(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba50c70;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443bbe61;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443bbe61:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443bbe94 FUN_1443bbe94 body=115 status=ok
// SIG undefined FUN_1443bbe94(void)

void FUN_1443bbe94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50c70;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fcadfc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443bbf08 FUN_1443bbf08 body=115 status=ok
// SIG undefined FUN_1443bbf08(void)

void FUN_1443bbf08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50c70;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_148fcadfc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1443bbf7c FUN_1443bbf7c body=149 status=ok
// SIG undefined FUN_1443bbf7c(void)

void FUN_1443bbf7c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50c70;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_148fcadfc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443bc002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443bc01c FUN_1443bc01c body=20 status=ok
// SIG undefined FUN_1443bc01c(void)

undefined1 FUN_1443bc01c(longlong param_1)

{
  FUN_1443bc030(param_1 + 0x18);
  return 1;
}



// FUNCTION 1443bc030 FUN_1443bc030 body=136 status=ok
// SIG undefined FUN_1443bc030(void)

void FUN_1443bc030(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0 || (int)param_1[1] == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = 0;
    (**(code **)(*plVar1 + 0x60))(plVar1,2,&local_28,0);
    uVar2 = uStack_20 & 0xffffffff;
  }
  FUN_145cb3ce0(local_28,uVar2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bc0ba FUN_1443bc0ba body=111 status=ok
// SIG undefined FUN_1443bc0ba(void)

undefined8 * FUN_1443bc0ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ba50d00;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1443bc10b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1443bc10b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443bc2a8 FUN_1443bc2a8 body=137 status=ok
// SIG undefined FUN_1443bc2a8(void)

void FUN_1443bc2a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1577b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_148fcadfc(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443bc332 FUN_1443bc332 body=137 status=ok
// SIG undefined FUN_1443bc332(void)

void FUN_1443bc332(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1577b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_148fcadfc(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 1443bc3bc FUN_1443bc3bc body=171 status=ok
// SIG undefined FUN_1443bc3bc(void)

void FUN_1443bc3bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1577b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba50d00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_148fcadfc(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443bc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443bc468 FUN_1443bc468 body=53 status=ok
// SIG undefined FUN_1443bc468(void)

void FUN_1443bc468(longlong param_1,longlong *param_2)

{
  FUN_1443bc5cc(param_1 + 0x20);
  FUN_147068807(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1443bc49e FUN_1443bc49e body=301 status=ok
// SIG undefined FUN_1443bc49e(void)

undefined8 FUN_1443bc49e(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443bc5c5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443bc5c5;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1443bc5c5:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443bc561;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443bc5cc(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1443bc561;
    }
  }
  uVar6 = 0;
LAB_1443bc561:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  FUN_147068807(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443bc5cc FUN_1443bc5cc body=1164 status=ok
// SIG undefined FUN_1443bc5cc(void)

void FUN_1443bc5cc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_cc;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  longlong local_a0;
  int local_98;
  char local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = *param_2;
  *param_2 = 0;
  local_b0 = (undefined4)param_2[1];
  local_ac = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_a8 = (undefined1)param_2[2];
  local_c8 = *param_1;
  local_cc = (int)param_1[1];
  local_c0 = param_1;
  FUN_147066648(&local_a0,&local_b8);
  if ((longlong)local_98 != 0) {
    lVar1 = local_c8 + 0x50;
    lVar9 = local_a0 + 0x30;
    lVar13 = (longlong)local_98 * 0x48;
    do {
      lVar6 = FUN_148fc675a(lVar1,lVar9);
      if (lVar6 != 0) {
        iVar5 = *(int *)(lVar9 + -0x30);
        iVar10 = 9999;
        if (iVar5 == 0) {
          iVar10 = (int)(*(float *)(lVar9 + -8) * 1000.0);
          *(int *)(lVar6 + 0x50) = *(int *)(lVar6 + 0x50) + 1;
        }
        iVar11 = *(int *)(lVar6 + 0x48);
        *(uint *)(lVar6 + 0x48) = iVar11 + 1U;
        if (*(uint *)(lVar6 + 0x4c) < iVar11 + 1U) {
          FUN_1446f48e2((longlong *)(lVar6 + 0x40),iVar11);
        }
        *(int *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar11 * 4) = iVar10;
        if (*(longlong *)(local_c8 + 0x70) != 0) {
          local_d8 = (longlong *)CONCAT71(local_d8._1_7_,iVar5 == 0);
          FUN_148fc6820(*(longlong *)(local_c8 + 0x70),lVar6,lVar9 + -0x28,iVar10);
        }
        if (*(int *)(lVar6 + 0x48) == local_cc) {
          FUN_140212f8e(&local_78);
          *(longlong *)(lVar6 + 0x58) = local_78;
          *(char *)(lVar6 + 0x38) = '\x02' - (*(int *)(lVar6 + 0x50) == local_cc);
        }
      }
      lVar9 = lVar9 + 0x48;
      lVar13 = lVar13 + -0x48;
    } while (lVar13 != 0);
  }
  lVar1 = local_c8;
  if (local_90 == '\x01') {
    if ((longlong)*(int *)(local_c8 + 0x58) != 0) {
      lVar13 = *(longlong *)(local_c8 + 0x50);
      lVar9 = lVar13 + (longlong)*(int *)(local_c8 + 0x58) * 0x68;
      do {
        iVar5 = 9999;
        if (0 < (longlong)*(int *)(lVar13 + 0x48)) {
          lVar6 = 0;
          iVar11 = 0;
          iVar10 = 0;
          do {
            iVar12 = *(int *)(*(longlong *)(lVar13 + 0x40) + lVar6 * 4);
            bVar14 = iVar12 != 9999;
            if (!bVar14) {
              iVar12 = 0;
            }
            iVar10 = iVar10 + iVar12;
            iVar11 = iVar11 + (uint)bVar14;
            lVar6 = lVar6 + 1;
          } while (*(int *)(lVar13 + 0x48) != lVar6);
          if (iVar11 != 0) {
            iVar5 = iVar10 / iVar11;
            if (iVar5 < 2) {
              iVar5 = 1;
            }
          }
        }
        *(int *)(lVar13 + 0x3c) = iVar5;
        if (*(longlong *)(lVar1 + 0x70) != 0) {
          FUN_148fc668a(*(longlong *)(lVar1 + 0x70),lVar13);
        }
        lVar13 = lVar13 + 0x68;
      } while (lVar13 != lVar9);
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    plVar7 = (longlong *)local_c0[2];
    if (plVar7 != (longlong *)0x0 && (int)local_c0[3] != 0) {
      local_d8 = &local_78;
      (**(code **)(*plVar7 + 0x60))
                (plVar7,CONCAT71((int7)((ulonglong)local_d8 >> 8),1),lVar1 + 0x50,&local_88);
    }
    lVar13 = *(longlong *)(lVar1 + 0x70);
    if (lVar13 != 0) {
      bVar4 = *(byte *)(lVar13 + 0x80);
      if ((bVar4 == 1) && ((longlong *)(lVar13 + 0x48) != &local_88)) {
        if (*(longlong *)(lVar13 + 0x48) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + 0x48) = local_88;
        local_88 = 0;
        *(undefined4 *)(lVar13 + 0x50) = (undefined4)uStack_80;
        *(undefined4 *)(lVar13 + 0x54) = uStack_80._4_4_;
        uStack_80 = 0;
        lVar13 = *(longlong *)(lVar1 + 0x70);
        bVar4 = *(byte *)(lVar13 + 0x80);
      }
      if (((bVar4 & 1) != 0) && ((longlong *)(lVar13 + 0x58) != &local_78)) {
        if (*(longlong *)(lVar13 + 0x58) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar13 + 0x58) = local_78;
        local_78 = 0;
        *(undefined4 *)(lVar13 + 0x60) = (undefined4)uStack_70;
        *(undefined4 *)(lVar13 + 100) = uStack_70._4_4_;
        uStack_70 = 0;
      }
    }
    FUN_148fc68ba(lVar1,1);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1443bc95d;
  }
  if (local_90 == '\x02') {
    FUN_148fc68ba(local_c8,2);
    plVar7 = (longlong *)local_c0[2];
    if (plVar7 == (longlong *)0x0 || (int)local_c0[3] == 0) goto LAB_1443bc95d;
    lVar13 = *plVar7;
    uVar8 = 2;
  }
  else {
    if (local_90 != '\x03') goto LAB_1443bc95d;
    if (*(longlong *)(local_c8 + 0x70) != 0) {
      *(undefined8 *)(local_c8 + 0x70) = 0;
      plVar7 = *(longlong **)(local_c8 + 0x78);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(local_c8 + 0x78) = 0;
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    plVar7 = (longlong *)local_c0[2];
    if (plVar7 == (longlong *)0x0 || (int)local_c0[3] == 0) goto LAB_1443bc95d;
    lVar13 = *plVar7;
    uVar8 = 3;
  }
  local_d8 = (longlong *)0x0;
  (**(code **)(lVar13 + 0x60))(plVar7,uVar8,lVar1 + 0x50,0);
LAB_1443bc95d:
  FUN_147068807(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  FUN_147068807(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443bca5a FUN_1443bca5a body=29 status=ok
// SIG undefined FUN_1443bca5a(void)

undefined8 FUN_1443bca5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443bca8c FUN_1443bca8c body=93 status=ok
// SIG undefined FUN_1443bca8c(void)

void FUN_1443bca8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba50e70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


