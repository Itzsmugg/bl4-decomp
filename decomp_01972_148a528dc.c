// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a528dc FUN_148a528dc body=418 status=ok
// SIG undefined FUN_148a528dc(void)

undefined8 FUN_148a528dc(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb96160) {
      FUN_144b3d300(&DAT_14cb96160);
      if (DAT_14cb96160 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb96158 =
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MuteAudioEngineOutput",1);
        _Init_thread_footer(&DAT_14cb96160);
      }
    }
    FUN_140635eb8(DAT_14cb96158,1,0x2000000,0);
  }
  uVar6 = FUN_14001cc68(0xd8,0x10);
  bVar4 = 1 < DAT_14c761e54;
  iVar5 = FUN_145cdd8ee();
  FUN_143ee8d78(uVar6,param_2,(float)iVar5,bVar4 + '\x01');
  iVar5 = *(int *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x2dc) < iVar5 + 1U) {
    FUN_148a56d0c(param_1 + 0x2d0,iVar5);
  }
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  *(undefined8 *)(lVar3 + (longlong)iVar5 * 8) = uVar6;
  FUN_147038e84(param_1 + 0x1a8,local_40,0x2000,0x3f800000);
  FUN_148a52a80(*(undefined8 *)(lVar3 + (longlong)iVar5 * 8),local_40);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a52a80 FUN_148a52a80 body=117 status=ok
// SIG undefined FUN_148a52a80(void)

void FUN_148a52a80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(longlong *)(param_1 + 0xa8) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148a52aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return;
}



// FUNCTION 148a52af6 FUN_148a52af6 body=245 status=ok
// SIG undefined FUN_148a52af6(void)

undefined8 FUN_148a52af6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_14001cc68(0xd8,0x10);
  iVar4 = FUN_145cdd8ee();
  FUN_143ee8d78(uVar5,param_2,(float)iVar4,1);
  iVar4 = *(int *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x2dc) < iVar4 + 1U) {
    FUN_148a56d0c(param_1 + 0x2d0,iVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = uVar5;
  FUN_147038a7c(*(longlong *)(param_1 + 0xa8) + 0x18,local_38,0x2000,0x3f800000);
  FUN_148a52a80(*(undefined8 *)(lVar3 + (longlong)iVar4 * 8),local_38);
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
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a52bec FUN_148a52bec body=228 status=ok
// SIG undefined FUN_148a52bec(void)

void FUN_148a52bec(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb96170) {
    FUN_144b3d300(&DAT_14cb96170);
    if (DAT_14cb96170 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb96168 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.MuteAudioEngineOutput",1);
      _Init_thread_footer(&DAT_14cb96170);
    }
  }
  FUN_140635eb8(DAT_14cb96168,0,0x2000000,0);
  iVar1 = *(int *)(param_1 + 0x2dc);
  FUN_148a55b55(*(undefined8 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d8));
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2dc) != 0)) {
    FUN_148a56d92(param_1 + 0x2d0);
    return;
  }
  return;
}



// FUNCTION 148a52cd6 FUN_148a52cd6 body=89 status=ok
// SIG undefined FUN_148a52cd6(void)

void FUN_148a52cd6(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_LAB_149e668b0;
    *(undefined2 *)(puVar1 + 1) = 0;
    FUN_1405bceb4(puVar1);
    *puVar1 = &PTR_FUN_14b4d0010;
    puVar1[2] = param_1;
    *(undefined8 **)(param_1 + 0x150) = puVar1;
  }
  return;
}



// FUNCTION 148a52d30 FUN_148a52d30 body=81 status=ok
// SIG undefined FUN_148a52d30(void)

undefined8 FUN_148a52d30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_145cbb6ba(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = 0;
    uVar2 = FUN_1401e3228();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a52d82 FUN_148a52d82 body=160 status=ok
// SIG undefined FUN_148a52d82(void)

void FUN_148a52d82(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4cee30;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0xa8))();
    (**(code **)(*(longlong *)param_1[5] + 0x98))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_147041ad4(param_1 + 0xb);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a52e22 FUN_148a52e22 body=312 status=ok
// SIG undefined FUN_148a52e22(void)

undefined8 FUN_148a52e22(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  iVar2 = *(int *)(param_2 + 1);
  uVar1 = (longlong)iVar2 / (longlong)*(int *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    iVar2 = FUN_147038124();
    iVar3 = (int)uVar1;
    uVar4 = *(int *)(param_1 + 0x10) * iVar3;
    if ((int)uVar4 <= iVar2) {
      if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0x10)) {
        FUN_14703803e(*(undefined8 *)(param_1 + 0xa0),*param_2,*(undefined4 *)(param_2 + 1),0);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x24);
        iVar5 = 0;
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          FUN_1470345fa(param_1 + 0x18);
          iVar5 = *(int *)(param_1 + 0x20);
          iVar2 = *(int *)(param_1 + 0x24);
          uVar4 = *(int *)(param_1 + 0x10) * iVar3;
        }
        *(uint *)(param_1 + 0x20) = iVar5 + uVar4;
        if ((uint)(iVar2 - iVar5) < uVar4) {
          FUN_145ca0cd4(param_1 + 0x18);
        }
        memset((void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x18)),0,
               (longlong)(int)uVar4 << 2);
        FUN_14703803e(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x18),
                      *(int *)(param_1 + 0x10) * iVar3,0);
        FUN_148a51295(*(undefined8 *)(param_1 + 0x18),*param_2,uVar1 & 0xffffffff,
                      *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78));
      }
      goto LAB_148a52e88;
    }
    iVar2 = *(int *)(param_2 + 1);
  }
  memset((void *)*param_2,0,(longlong)iVar2 << 2);
LAB_148a52e88:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return 1;
}



// FUNCTION 148a52f5c FUN_148a52f5c body=68 status=ok
// SIG undefined FUN_148a52f5c(void)

void FUN_148a52f5c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145eec44c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148a56e32(param_1,param_2);
  return;
}



// FUNCTION 148a52fa2 FUN_148a52fa2 body=124 status=ok
// SIG undefined FUN_148a52fa2(void)

void FUN_148a52fa2(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_148a56dc2(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_148a56ea2(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *param_2;
  }
  return;
}



// FUNCTION 148a53020 FUN_148a53020 body=190 status=ok
// SIG undefined FUN_148a53020(void)

void FUN_148a53020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_141359731(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_147daeb26(param_1 + 0xd8,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_148a56dc2(param_1 + 0x50,0);
  }
  FUN_145eec44c(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_148a56e32(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 148a530f0 FUN_148a530f0 body=125 status=ok
// SIG undefined FUN_148a530f0(void)

void FUN_148a530f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_148a557be(param_1,&local_20);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5316e FUN_148a5316e body=95 status=ok
// SIG undefined FUN_148a5316e(void)

longlong FUN_148a5316e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + lVar3);
      cVar2 = (**(code **)*puVar1)(puVar1,param_2);
      if (cVar2 != '\0') {
        return lVar3 + *(longlong *)(param_1 + 0x60);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x68));
  }
  return 0;
}



// FUNCTION 148a53228 FUN_148a53228 body=286 status=ok
// SIG undefined FUN_148a53228(void)

ulonglong FUN_148a53228(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = *(longlong **)(param_2 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_148a53264:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_148a53264;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  local_58 = 0;
  if (plVar7 != (longlong *)0x0) {
    local_58 = *(undefined8 *)(param_2 + 8);
  }
  local_60 = &PTR_FUN_14a184370;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_48 = 0;
  iVar6 = *(int *)(param_1 + 0x88);
  local_50 = plVar7;
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    uVar8 = 0;
    do {
      cVar5 = FUN_140ba41f1(uVar8 + lVar3,&local_60);
      if (cVar5 != '\0') {
        uVar8 = CONCAT71((int7)((ulonglong)&local_60 >> 8),(int)(~uVar8 >> 5) != 0);
        goto LAB_148a532d6;
      }
      uVar8 = uVar8 + 0x20;
    } while ((longlong)iVar6 * 0x20 != uVar8);
  }
  uVar8 = 0;
LAB_148a532d6:
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148a53348 FUN_148a53348 body=280 status=ok
// SIG undefined FUN_148a53348(void)

ulonglong FUN_148a53348(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = *(longlong **)(param_2 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_148a53384:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_148a53384;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  local_58 = 0;
  if (plVar7 != (longlong *)0x0) {
    local_58 = *(undefined8 *)(param_2 + 8);
  }
  local_60 = &PTR_FUN_14a184370;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_48 = 0;
  iVar6 = *(int *)(param_1 + 0x78);
  local_50 = plVar7;
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0;
    do {
      cVar5 = FUN_140ba41f1(uVar8 + lVar3,&local_60);
      if (cVar5 != '\0') {
        uVar8 = CONCAT71((int7)((ulonglong)&local_60 >> 8),(int)(~uVar8 >> 5) != 0);
        goto LAB_148a533f0;
      }
      uVar8 = uVar8 + 0x20;
    } while ((longlong)iVar6 * 0x20 != uVar8);
  }
  uVar8 = 0;
LAB_148a533f0:
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148a53462 FUN_148a53462 body=112 status=ok
// SIG undefined FUN_148a53462(void)

void FUN_148a53462(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 5;
    iVar2 = 0;
    do {
      cVar1 = FUN_140ba41f1(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 == 1) {
          return;
        }
        FUN_148a57104(param_1,-iVar2);
        FUN_148a57176(param_1);
        return;
      }
      lVar3 = lVar3 + 0x20;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 148a534d2 FUN_148a534d2 body=74 status=ok
// SIG undefined FUN_148a534d2(void)

void FUN_148a534d2(longlong *param_1)

{
  int iVar1;
  
  if ((param_1[7] != 0) && ((longlong *)param_1[5] != (longlong *)0x0)) {
    iVar1 = (**(code **)(*(longlong *)param_1[5] + 0x448))();
    if ((0 < iVar1) && (0 < (int)param_1[9])) {
      iVar1 = 0;
      do {
        (**(code **)(*param_1 + 0x150))(param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_1[9]);
    }
  }
  return;
}



// FUNCTION 148a5351c FUN_148a5351c body=104 status=ok
// SIG undefined FUN_148a5351c(void)

undefined8 * FUN_148a5351c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x2e0,0x10);
  FUN_148a5187a(uVar1,*(undefined8 *)(param_1 + 0x20));
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b4d02f0;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 148a53584 FUN_148a53584 body=782 status=ok
// SIG undefined FUN_148a53584(void)

void FUN_148a53584(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined **local_110;
  undefined1 local_108 [16];
  byte local_f8;
  undefined8 local_f0 [2];
  undefined **local_e0;
  undefined1 local_d8 [16];
  byte local_c8;
  undefined8 local_c0 [2];
  undefined **local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  byte local_98;
  undefined **local_90;
  undefined8 local_88;
  longlong lStack_80;
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_147d80884(DAT_14cb0d2b0);
  if (lVar6 != 0) {
    plVar11 = *(longlong **)(lVar6 + 0x30);
    if ((plVar11 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar11);
    }
    else if (plVar11 == (longlong *)0x0) goto LAB_148a53850;
    if (0 < *(int *)(param_1 + 0x68)) {
      lVar6 = 0;
      local_118 = plVar11;
      do {
        lVar10 = *(longlong *)(param_1 + 0x60);
        local_88 = *(undefined8 *)(lVar10 + lVar6 * 0x18);
        lStack_80 = *(longlong *)(lVar10 + 8 + lVar6 * 0x18);
        if (lStack_80 != 0) {
          LOCK();
          *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
          UNLOCK();
        }
        local_78 = 0;
        local_90 = &PTR_FUN_14a5af930;
        local_70 = 0;
        uStack_68 = 0;
        lVar10 = *(longlong *)(lVar10 + lVar6 * 0x18);
        plStack_a0 = *(longlong **)(lVar10 + 0x10);
        if (plStack_a0 == (longlong *)0x0) {
LAB_148a536b3:
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          bVar13 = true;
        }
        else {
          iVar5 = (int)plStack_a0[1];
          do {
            if (iVar5 == 0) goto LAB_148a536b3;
            LOCK();
            iVar9 = (int)plStack_a0[1];
            bVar13 = iVar5 == iVar9;
            if (bVar13) {
              *(int *)(plStack_a0 + 1) = iVar5 + 1;
              iVar9 = iVar5;
            }
            iVar5 = iVar9;
            UNLOCK();
          } while (!bVar13);
          local_a8 = *(undefined8 *)(lVar10 + 8);
          LOCK();
          *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
          UNLOCK();
          bVar13 = false;
        }
        plVar3 = plStack_a0;
        local_b0 = &PTR_FUN_14a184370;
        local_98 = 0;
        iVar5 = -1;
        if ((longlong)*(int *)(param_1 + 0x78) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x70);
          lVar12 = (longlong)*(int *)(param_1 + 0x78) << 5;
          iVar9 = 0;
          do {
            cVar4 = FUN_140ba41f1(lVar10,&local_b0);
            plVar11 = local_118;
            iVar5 = iVar9;
            if (cVar4 != '\0') break;
            lVar10 = lVar10 + 0x20;
            iVar9 = iVar9 + 1;
            lVar12 = lVar12 + -0x20;
            iVar5 = -1;
          } while (lVar12 != 0);
        }
        local_b0 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_98])(&local_a8);
        if (!bVar13) {
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
        if (iVar5 == -1) {
          local_e0 = &PTR_FUN_14a184370;
          local_c8 = local_78;
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_78])(local_d8,&local_88);
          local_e0 = &PTR_FUN_14a5af930;
          lVar10 = 0xc18;
          puVar7 = local_c0;
          pppuVar8 = &local_e0;
        }
        else {
          local_110 = &PTR_FUN_14a184370;
          local_f8 = local_78;
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_78])(local_108,&local_88);
          local_110 = &PTR_FUN_14a5af930;
          lVar10 = 0xc10;
          puVar7 = local_f0;
          pppuVar8 = &local_110;
        }
        *puVar7 = 0;
        puVar7[1] = 0;
        (**(code **)(*plVar11 + lVar10))(plVar11,pppuVar8);
        local_90 = &PTR_FUN_14a5af930;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        local_90 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])(&local_88);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x68));
    }
  }
LAB_148a53850:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a53894 FUN_148a53894 body=569 status=ok
// SIG undefined FUN_148a53894(void)

undefined8 * FUN_148a53894(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  FUN_14608756e(plVar7);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b4d0310;
  plVar8[2] = (longlong)plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7,param_3);
  if (((*(byte *)(param_3 + 0x29) & 2) == 0) &&
     (sVar6 = (**(code **)(*plVar7 + 0x10))(plVar7), sVar6 != 0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))();
    if (cVar5 == '\0') {
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_78);
      local_68 = &PTR_FUN_14a184370;
      local_60 = local_78;
      local_58 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_50 = 0;
      iVar3 = *(int *)(param_1 + 0x88);
      bVar10 = true;
      if ((longlong)iVar3 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x80);
        uVar9 = 0;
        do {
          cVar5 = FUN_140ba41f1(uVar9 + lVar4,&local_68);
          if (cVar5 != '\0') {
            bVar10 = (int)(~uVar9 >> 5) == 0;
            goto LAB_148a53a3a;
          }
          uVar9 = uVar9 + 0x20;
        } while ((longlong)iVar3 * 0x20 != uVar9);
        bVar10 = true;
      }
LAB_148a53a3a:
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      if (bVar10) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar3 = *(int *)(param_1 + 0xe0);
        *(uint *)(param_1 + 0xe0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0xe4) < iVar3 + 1U) {
          FUN_147daec98((longlong *)(param_1 + 0xd8),iVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0xd8);
        *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar7;
        *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar8;
      }
    }
    *param_2 = plVar7;
    param_2[1] = plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_148a53970;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar8 == (longlong *)0x0) goto LAB_148a53970;
  }
  LOCK();
  plVar7 = plVar8 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_148a53970:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a53ace FUN_148a53ace body=141 status=ok
// SIG undefined FUN_148a53ace(void)

undefined8 * FUN_148a53ace(longlong param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 0) {
    sVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 0x10))(param_1 + 0x98);
    if (sVar1 != 0) {
      uVar2 = FUN_14001cc68(0x40,0x10);
      FUN_148a53b5c(uVar2,param_1 + 0x98);
      *param_2 = uVar2;
      puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar3[1] = &DAT_100000001;
      *puVar3 = &PTR_FUN_14b4d0310;
      puVar3[2] = uVar2;
      param_2[1] = puVar3;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148a53b5c FUN_148a53b5c body=228 status=ok
// SIG undefined FUN_148a53b5c(void)

undefined8 * FUN_148a53b5c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  *param_1 = &PTR_FUN_14b4cf1b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 == 0) {
    param_1[1] = uVar4;
    param_1[2] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_1[2];
    param_1[1] = uVar4;
    param_1[2] = lVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  uVar3 = *(ushort *)(param_2 + 0x28);
  uVar7 = (uint)uVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar8 = 0;
  if (*(uint *)((longlong)param_1 + 0x24) != (uint)uVar3) {
    FUN_144893a1c(param_1 + 3,(uint)uVar3);
    iVar8 = *(int *)(param_1 + 4);
    uVar7 = *(uint *)((longlong)param_1 + 0x24);
  }
  uVar3 = *(ushort *)(param_2 + 0x28);
  *(uint *)(param_1 + 4) = iVar8 + (uint)uVar3;
  if (uVar7 - iVar8 < (uint)uVar3) {
    FUN_1447403be(param_1 + 3);
  }
  memcpy((void *)param_1[3],*(void **)(param_2 + 0x18),(ulonglong)*(ushort *)(param_2 + 0x28));
  return param_1;
}



// FUNCTION 148a53c40 FUN_148a53c40 body=1412 status=ok
// SIG undefined FUN_148a53c40(void)

undefined8 FUN_148a53c40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  double dVar7;
  int iVar8;
  char cVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  undefined2 *local_a8;
  double local_a0;
  double local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(param_2,L"Voice state\n");
  plVar16 = (longlong *)param_1[7];
  if (plVar16 == (longlong *)0x0) {
    FUN_140056680(&local_70,L"No Voice Engine!");
  }
  else {
    (**(code **)(*plVar16 + 0xa8))(plVar16,&local_70);
  }
  iVar8 = (int)local_68 + -1;
  if ((int)local_68 == 0) {
    iVar8 = 0;
  }
  thunk_FUN_1400020e8(param_2,local_70,iVar8);
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  thunk_FUN_1400020e8(param_2,L"\nLocal Talkers:\n",0x10);
  local_88 = param_2;
  if ((int)param_1[0xb] < 1) {
    plVar16 = (longlong *)0x0;
  }
  else {
    lVar18 = 9;
    uVar13 = 0;
    plVar16 = (longlong *)0x0;
    do {
      (**(code **)(*(longlong *)param_1[6] + 0x110))
                ((longlong *)param_1[6],&local_70,uVar13 & 0xffffffff);
      plVar1 = local_68;
      plVar10 = local_70;
      local_70 = (longlong *)0x0;
      plVar12 = plVar16;
      if (local_68 == plVar16) {
LAB_148a53d5a:
        plVar16 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      else {
        local_68 = (longlong *)0x0;
        plVar12 = plVar1;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar16 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          goto LAB_148a53d5a;
        }
      }
      lVar6 = param_1[10];
      bVar4 = *(byte *)(lVar6 + lVar18);
      dVar7 = (double)*(float *)(lVar6 + -5 + lVar18);
      uVar14 = (uint)*(byte *)(lVar6 + -1 + lVar18);
      uVar17 = (uint)*(byte *)(lVar6 + -8 + lVar18);
      uVar11 = (uint)*(byte *)(lVar6 + -9 + lVar18);
      local_90 = plVar12;
      if (plVar10 == (longlong *)0x0) {
        local_a0 = (double)CONCAT44(local_a0._4_4_,uVar14);
        local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,(uint)bVar4);
        local_b8 = uVar11;
        local_b0 = uVar17;
        local_98 = dVar7;
        FUN_140002266(&local_70,
                      L"[%d]: %s\n Registered: %d\n Networked: %d\n Talking: %d\n WasTalking: %d\n Last:%0.2f\n"
                      ,uVar13 & 0xffffffff,L"NULL");
        param_2 = local_88;
        iVar8 = (int)local_68 + -1;
        if ((int)local_68 == 0) {
          iVar8 = 0;
        }
        thunk_FUN_1400020e8(local_88,local_70,iVar8);
        plVar10 = local_70;
      }
      else {
        (**(code **)(*plVar10 + 0x38))(plVar10,&local_80);
        plVar16 = (longlong *)&DAT_149dfb77a;
        if (local_78 != 0) {
          plVar16 = local_80;
        }
        local_a0 = (double)CONCAT44(local_a0._4_4_,uVar14);
        local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,(uint)bVar4);
        local_b8 = uVar11;
        local_b0 = uVar17;
        local_98 = dVar7;
        FUN_140002266(&local_70,
                      L"[%d]: %s\n Registered: %d\n Networked: %d\n Talking: %d\n WasTalking: %d\n Last:%0.2f\n"
                      ,uVar13 & 0xffffffff,plVar16);
        param_2 = local_88;
        iVar8 = (int)local_68 + -1;
        if ((int)local_68 == 0) {
          iVar8 = 0;
        }
        thunk_FUN_1400020e8(local_88,local_70,iVar8);
        plVar10 = local_80;
        if (local_70 != (longlong *)0x0) {
          FUN_1400020a8();
          plVar10 = local_80;
        }
      }
      plVar16 = local_90;
      if (plVar10 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 0xc;
    } while ((longlong)uVar13 < (longlong)(int)param_1[0xb]);
  }
  local_90 = plVar16;
  thunk_FUN_1400020e8(param_2,L"\nRemote Talkers:\n",0x11);
  if (0 < (int)param_1[0xd]) {
    lVar18 = 0x15;
    uVar13 = 0;
    do {
      lVar6 = param_1[0xc];
      fVar3 = *(float *)(lVar6 + -5 + lVar18);
      cVar9 = (**(code **)(*param_1 + 0x128))(param_1,*(undefined8 *)(lVar6 + -0x15 + lVar18));
      puVar15 = &DAT_149e25dfc;
      if (cVar9 != '\0') {
        puVar15 = &DAT_149e0209e;
      }
      bVar4 = *(byte *)(lVar6 + -1 + lVar18);
      bVar5 = *(byte *)(lVar6 + lVar18);
      plVar16 = *(longlong **)(lVar6 + -0x15 + lVar18);
      (**(code **)(*plVar16 + 0x38))(plVar16,&local_80);
      plVar16 = (longlong *)&DAT_149dfb77a;
      if (local_78 != 0) {
        plVar16 = local_80;
      }
      local_b0 = (uint)bVar4;
      local_b8 = (uint)bVar5;
      local_a8 = puVar15;
      local_a0 = (double)fVar3;
      FUN_140002266(&local_70,L"[%d]: %s\n Talking: %d\n WasTalking: %d\n Muted: %s\n Last:%0.2f\n",
                    uVar13 & 0xffffffff,plVar16);
      param_2 = local_88;
      iVar8 = (int)local_68 + -1;
      if ((int)local_68 == 0) {
        iVar8 = 0;
      }
      thunk_FUN_1400020e8(local_88,local_70,iVar8);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 0x18;
    } while ((longlong)uVar13 < (longlong)(int)param_1[0xd]);
  }
  thunk_FUN_1400020e8(param_2,L"\nRaw SystemMutelist:\n",0x15);
  if (0 < (int)param_1[0xf]) {
    lVar18 = 0;
    uVar13 = 0;
    do {
      FUN_1405e6804(param_1[0xe] + lVar18,&local_80);
      plVar16 = (longlong *)&DAT_149dfb77a;
      if (local_78 != 0) {
        plVar16 = local_80;
      }
      FUN_140002266(&local_70,L"[%d]=%s\n",uVar13 & 0xffffffff,plVar16);
      iVar8 = (int)local_68 + -1;
      if ((int)local_68 == 0) {
        iVar8 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_70,iVar8);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 0x20;
    } while ((longlong)uVar13 < (longlong)(int)param_1[0xf]);
  }
  thunk_FUN_1400020e8(param_2,L"\nRaw Mutelist:\n",0xf);
  if (0 < (int)param_1[0x11]) {
    lVar18 = 0;
    uVar13 = 0;
    do {
      FUN_1405e6804(param_1[0x10] + lVar18,&local_80);
      plVar16 = (longlong *)&DAT_149dfb77a;
      if (local_78 != 0) {
        plVar16 = local_80;
      }
      FUN_140002266(&local_70,L"[%d]=%s\n",uVar13 & 0xffffffff,plVar16);
      iVar8 = (int)local_68 + -1;
      if ((int)local_68 == 0) {
        iVar8 = 0;
      }
      thunk_FUN_1400020e8(param_2,local_70,iVar8);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 0x20;
    } while ((longlong)uVar13 < (longlong)(int)param_1[0x11]);
  }
  plVar16 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a541c6 FUN_148a541c6 body=46 status=ok
// SIG undefined FUN_148a541c6(void)

undefined8 * FUN_148a541c6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 148a541f4 FUN_148a541f4 body=46 status=ok
// SIG undefined FUN_148a541f4(void)

undefined8 * FUN_148a541f4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 148a54222 FUN_148a54222 body=242 status=ok
// SIG undefined FUN_148a54222(void)

undefined8 FUN_148a54222(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_2 + 0x10);
    if (plVar5 == (longlong *)0x0) {
LAB_148a5426a:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar5[1];
      do {
        if (iVar4 == 0) goto LAB_148a5426a;
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar6 = iVar4 == iVar3;
        if (bVar6) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar6);
    }
    local_58 = 0;
    if (plVar5 != (longlong *)0x0) {
      local_58 = *(undefined8 *)(param_2 + 8);
    }
    local_60 = &PTR_FUN_14a184370;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_48 = 0;
    local_50 = plVar5;
    uVar7 = (**(code **)(*plVar2 + 200))(plVar2,&local_60);
    local_60 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148a5435e FUN_148a5435e body=192 status=ok
// SIG undefined FUN_148a5435e(void)

undefined8 * FUN_148a5435e(undefined8 *param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[7] = puVar2;
  param_1[6] = puVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_148a5441e(param_1 + 4,param_2);
  if (0 < (int)param_2) {
    lVar3 = 0x20;
    uVar4 = 0;
    do {
      *(int *)(param_1[4] + lVar3) = (int)uVar4;
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = 0;
      *(int *)(puVar2 + 1) = (int)uVar4;
      if (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)param_1[6];
        param_1[6] = puVar2;
        *puVar1 = puVar2;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x30;
    } while (param_2 != uVar4);
  }
  return param_1;
}



// FUNCTION 148a5441e FUN_148a5441e body=66 status=ok
// SIG undefined FUN_148a5441e(void)

void FUN_148a5441e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_148a572a6(param_1,iVar1);
  }
  FUN_148a5727f((longlong)iVar1 * 0x30 + *param_1,param_2);
  return;
}



// FUNCTION 148a54460 FUN_148a54460 body=328 status=ok
// SIG undefined FUN_148a54460(void)

void * FUN_148a54460(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)*param_1;
    uVar6 = 0;
    do {
      if (plVar4 == (longlong *)0x0) {
        pvVar5 = memset((void *)(param_2 + (ulonglong)uVar6 * 4),0,(ulonglong)(param_3 - uVar6) << 2
                       );
        param_3 = param_3 + (int)param_1[2];
        *(uint *)(param_1 + 2) = param_3;
        if (param_3 <= *(uint *)(param_1 + 3)) {
          return pvVar5;
        }
        LOCK();
        uVar6 = *(uint *)((longlong)param_1 + 0x14);
        *(uint *)((longlong)param_1 + 0x14) = 1;
        UNLOCK();
        return (void *)(ulonglong)uVar6;
      }
      if ((ulonglong)param_1[1] < (ulonglong)plVar4[5]) {
        param_1[1] = plVar4[5];
      }
      else {
        iVar7 = param_3 - uVar6;
        if (iVar7 < *(int *)((longlong)plVar4 + 0x14)) {
          memcpy((void *)(param_2 + (ulonglong)uVar6 * 4),
                 (void *)(((longlong)(int)plVar4[2] - (longlong)*(int *)((longlong)plVar4 + 0x14)) *
                          4 + *plVar4),(longlong)iVar7 * 4);
          *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) - iVar7;
          param_1[1] = param_1[1] + (longlong)iVar7;
          *(undefined4 *)(param_1 + 2) = 0;
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          UNLOCK();
          break;
        }
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        UNLOCK();
        plVar4 = (longlong *)*param_1;
        uVar1 = *(uint *)((longlong)plVar4 + 0x14);
        memcpy((void *)(param_2 + (ulonglong)uVar6 * 4),
               (void *)((longlong)(int)((int)plVar4[2] - uVar1) * 4 + *plVar4),(ulonglong)uVar1 * 4)
        ;
        param_1[1] = param_1[1] + (ulonglong)uVar1;
        lVar8 = *param_1;
        puVar3 = (undefined8 *)FUN_14001cc68(0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar8 + 0x20);
        if (puVar3 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)param_1[6];
          param_1[6] = (longlong)puVar3;
          *puVar2 = puVar3;
          lVar8 = *param_1;
        }
        uVar6 = uVar6 + uVar1;
        plVar4 = *(longlong **)(lVar8 + 0x18);
        *param_1 = (longlong)plVar4;
      }
    } while (uVar6 < param_3);
  }
  param_3 = (int)param_1[2] - param_3;
  LOCK();
  *(uint *)(param_1 + 8) = (int)param_1[8] + param_3;
  UNLOCK();
  return (void *)(ulonglong)param_3;
}



// FUNCTION 148a545a8 FUN_148a545a8 body=182 status=ok
// SIG undefined FUN_148a545a8(void)

void FUN_148a545a8(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    lVar4 = *param_1;
    uVar7 = 0;
    do {
      if (lVar4 == 0) {
        return;
      }
      if ((ulonglong)param_1[1] < *(ulonglong *)(lVar4 + 0x28)) {
        param_1[1] = *(ulonglong *)(lVar4 + 0x28);
      }
      else {
        iVar5 = param_2 - uVar7;
        iVar6 = *(int *)(lVar4 + 0x14) - iVar5;
        if (iVar6 != 0 && iVar5 <= *(int *)(lVar4 + 0x14)) {
          *(int *)(lVar4 + 0x14) = iVar6;
          param_1[1] = param_1[1] + (longlong)iVar5;
          *(undefined4 *)(param_1 + 2) = 0;
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          UNLOCK();
          break;
        }
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        UNLOCK();
        lVar4 = *param_1;
        uVar1 = *(uint *)(lVar4 + 0x14);
        param_1[1] = param_1[1] + (ulonglong)uVar1;
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar4 + 0x20);
        if (puVar3 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)param_1[6];
          param_1[6] = (longlong)puVar3;
          *puVar2 = puVar3;
          lVar4 = *param_1;
        }
        uVar7 = uVar1 + uVar7;
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *param_1 = lVar4;
      }
    } while (uVar7 < param_2);
  }
  LOCK();
  *(uint *)(param_1 + 8) = (int)param_1[8] + ((int)param_1[2] - param_2);
  UNLOCK();
  return;
}



// FUNCTION 148a5465e FUN_148a5465e body=175 status=ok
// SIG undefined FUN_148a5465e(void)

void FUN_148a5465e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)param_1[7];
  while (lVar4 = *plVar2, lVar4 != 0) {
    lVar5 = param_1[7];
    param_1[7] = lVar4;
    *(undefined4 *)(lVar4 + 8) = 0;
    if (lVar5 != 0) {
      FUN_1400020a8();
    }
    plVar2 = (longlong *)param_1[7];
  }
  if (0 < *(int *)(param_1 + 5)) {
    lVar4 = 0x18;
    lVar5 = 0;
    do {
      *(undefined8 *)(param_1[4] + lVar4) = 0;
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar3 = 0;
      *(int *)(puVar3 + 1) = (int)lVar5;
      if (puVar3 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)param_1[6];
        param_1[6] = puVar3;
        *puVar1 = puVar3;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar5 < *(int *)(param_1 + 5));
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  param_1[1] = (longlong)param_2;
  return;
}



// FUNCTION 148a5470e FUN_148a5470e body=180 status=ok
// SIG undefined FUN_148a5470e(void)

void FUN_148a5470e(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = param_4;
  local_30 = param_3 >> 1;
  *(uint *)(param_1 + 2) = local_30;
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = 0;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14482f6fa(param_1,0);
    iVar2 = *(int *)(param_1 + 1);
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    local_30 = *(uint *)(param_1 + 2);
  }
  *(uint *)(param_1 + 1) = local_30 + iVar2;
  if ((uint)(iVar1 - iVar2) < local_30) {
    FUN_14475e4ac(param_1);
    local_30 = *(uint *)(param_1 + 2);
  }
  local_28 = *param_1;
  *(uint *)((longlong)param_1 + 0x14) = local_30;
  local_38 = param_2;
  local_20 = local_30;
  FUN_142af422d();
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a547c4 FUN_148a547c4 body=31 status=ok
// SIG undefined FUN_148a547c4(void)

int FUN_148a547c4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return (int)CONCAT62((int6)((ulonglong)uVar1 >> 0x10),(short)uVar1 + *(short *)(param_1 + 0x28)) +
         2;
}



// FUNCTION 148a54806 FUN_148a54806 body=1077 status=ok
// SIG undefined FUN_148a54806(void)

void FUN_148a54806(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  longlong *plVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ushort uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),local_48);
    FUN_14021219d(param_2,local_48);
    puVar3 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x38),2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x38) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar3 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x28),2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x28) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar4 = *(undefined8 **)param_2[1];
    if ((undefined8 *)((longlong *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x30),8);
      }
      else {
        thunk_FUN_146821949(param_2);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
    (**(code **)(*param_2 + 0x170))
              (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x28));
  }
  else {
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_14021219d(param_2);
    puVar3 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x38),2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x38) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    local_58 = (longlong *)0x0;
    plVar10 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar10 + 0x80))(plVar10,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x120))(local_58,&local_68,local_48);
      plVar10 = local_60;
      if ((undefined8 *)(param_1 + 8) != &local_68) {
        *(undefined8 *)(param_1 + 8) = local_68;
        local_68 = 0;
        plVar6 = *(longlong **)(param_1 + 0x10);
        if (local_60 != plVar6) {
          local_60 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x10) = plVar10;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar6 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
        }
      }
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_60)(local_60);
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
    puVar1 = (ushort *)(param_1 + 0x28);
    puVar5 = *(ushort **)param_2[1];
    if ((ushort *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar1,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,puVar1);
      }
    }
    else {
      *puVar1 = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar4 = *(undefined8 **)param_2[1];
    if ((undefined8 *)((longlong *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x30),8);
      }
      else {
        thunk_FUN_146821949(param_2);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
    uVar11 = *puVar1;
    iVar8 = FUN_145cdd8ee();
    if (iVar8 == 24000) {
      uVar7 = 0x3800;
      if (1 < DAT_14c761e54) {
        uVar7 = 0x7000;
      }
    }
    else {
      uVar7 = (ushort)(1 < DAT_14c761e54) * 0x2000 + 0x2000;
    }
    if (uVar7 < uVar11) {
      *puVar1 = 0;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x18);
      uVar11 = *(ushort *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x20) = 0;
      iVar8 = 0;
      if (*(uint *)(param_1 + 0x24) == (uint)uVar11) {
        uVar9 = (uint)uVar11;
      }
      else {
        FUN_144893a1c(puVar4,(uint)uVar11);
        uVar11 = *(ushort *)(param_1 + 0x28);
        iVar8 = *(int *)(param_1 + 0x20);
        uVar9 = *(uint *)(param_1 + 0x24);
      }
      *(uint *)(param_1 + 0x20) = iVar8 + (uint)uVar11;
      if (uVar9 - iVar8 < (uint)uVar11) {
        FUN_1447403be(puVar4);
        uVar11 = *puVar1;
      }
      (**(code **)(*param_2 + 0x170))(param_2,*puVar4,uVar11);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a54c7c FUN_148a54c7c body=60 status=ok
// SIG undefined FUN_148a54c7c(void)

undefined8 FUN_148a54c7c(longlong param_1,int *param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x8c8) = (1 < DAT_14c761e54) + 1;
  iVar1 = FUN_145cdd8ee();
  *param_2 = iVar1;
  *(float *)(param_1 + 0x958) = (float)iVar1;
  return 1;
}



// FUNCTION 148a54cb8 FUN_148a54cb8 body=182 status=ok
// SIG undefined FUN_148a54cb8(void)

int FUN_148a54cb8(longlong param_1,void *param_2,int param_3)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x95c) < 1) {
    if (*(longlong *)(param_1 + 0x928) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x930));
      if (DAT_14c763afc != 0) {
        FUN_148a54d6e(param_1);
      }
      FUN_148a54460(*(undefined8 *)(param_1 + 0x928),param_2,param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x930));
    }
  }
  else {
    *(int *)(param_1 + 0x95c) = *(int *)(param_1 + 0x95c) - param_3;
  }
  cVar1 = FUN_147038528(param_1 + 0x910);
  if (cVar1 != '\0') {
    FUN_14703849e(param_1 + 0x910,param_2,param_3);
  }
  if (DAT_14cb961d8 != 0) {
    memset(param_2,0,(longlong)param_3 << 2);
  }
  return param_3;
}



// FUNCTION 148a54d6e FUN_148a54d6e body=116 status=ok
// SIG undefined FUN_148a54d6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a54d6e(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x8c8) * *(float *)(param_1 + 0x960) *
          *(float *)(param_1 + 0x958);
  fVar2 = (float)*(int *)(param_1 + 0x8c8) * _DAT_14c763b00 * *(float *)(param_1 + 0x958);
  if (*(int *)(*(longlong *)(param_1 + 0x928) + 0x40) - ((int)ROUND(fVar1 + fVar1 + -0.5) >> 1) <=
      (int)ROUND(fVar2 + fVar2 + -0.5) >> 1) {
    return;
  }
  FUN_148a545a8(*(undefined8 *)(param_1 + 0x928));
  return;
}



// FUNCTION 148a54de2 FUN_148a54de2 body=38 status=ok
// SIG undefined FUN_148a54de2(void)

undefined8 FUN_148a54de2(undefined8 param_1,int param_2)

{
  FUN_148a51c0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a54e22 FUN_148a54e22 body=26 status=ok
// SIG undefined FUN_148a54e22(void)

bool FUN_148a54e22(longlong *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return (uVar1 & param_2 * 2) != 0;
}



// FUNCTION 148a54e3c FUN_148a54e3c body=280 status=ok
// SIG undefined FUN_148a54e3c(void)

ulonglong FUN_148a54e3c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(param_2 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_148a54e66:
    plVar5 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_148a54e66;
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar8 = iVar4 == iVar2;
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar8);
  }
  plVar6 = (longlong *)(param_1 + 0xf0);
  local_48 = 0;
  if (plVar5 != (longlong *)0x0) {
    local_48 = *(undefined8 *)(param_2 + 8);
  }
  local_50 = &PTR_FUN_14a184370;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_40 = plVar5;
  uVar3 = FUN_140ba40f9(&local_50);
  iVar4 = FUN_148a55ae0(plVar6,uVar3,&local_50);
  if (iVar4 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar4 * 0x120 + *plVar6 != 0);
  }
  local_50 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a54f5a FUN_148a54f5a body=25 status=ok
// SIG undefined FUN_148a54f5a(void)

void FUN_148a54f5a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x78))();
  return;
}



// FUNCTION 148a54fdc FUN_148a54fdc body=45 status=ok
// SIG undefined FUN_148a54fdc(void)

longlong FUN_148a54fdc(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_148a51c0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5501a FUN_148a5501a body=38 status=ok
// SIG undefined FUN_148a5501a(void)

undefined8 FUN_148a5501a(undefined8 param_1,int param_2)

{
  FUN_148a52d82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a55040 FUN_148a55040 body=38 status=ok
// SIG undefined FUN_148a55040(void)

undefined8 FUN_148a55040(undefined8 param_1,int param_2)

{
  FUN_145eec29e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a55066 FUN_148a55066 body=165 status=ok
// SIG undefined FUN_148a55066(void)

undefined8 * FUN_148a55066(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_148a57496(&local_38,param_3);
  FUN_148a573ae(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5510c FUN_148a5510c body=38 status=ok
// SIG undefined FUN_148a5510c(void)

void FUN_148a5510c(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 8);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 148a5513c FUN_148a5513c body=129 status=ok
// SIG undefined FUN_148a5513c(void)

void FUN_148a5513c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_148a530f0(param_1 + 8,&local_20);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a551c2 FUN_148a551c2 body=38 status=ok
// SIG undefined FUN_148a551c2(void)

undefined8 FUN_148a551c2(undefined8 param_1,int param_2)

{
  FUN_145eec4cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a551f2 FUN_148a551f2 body=45 status=ok
// SIG undefined FUN_148a551f2(void)

longlong FUN_148a551f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145be8f6c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a55230 FUN_148a55230 body=56 status=ok
// SIG undefined FUN_148a55230(void)

void FUN_148a55230(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14127b0d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x000148a55265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1,uVar1,param_3,param_4);
  return;
}



// FUNCTION 148a552a0 FUN_148a552a0 body=52 status=ok
// SIG undefined FUN_148a552a0(void)

void FUN_148a552a0(longlong *param_1)

{
  FUN_148a552d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a552d4 FUN_148a552d4 body=339 status=ok
// SIG undefined FUN_148a552d4(void)

void FUN_148a552d4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      puVar2 = (undefined8 *)(*local_78 + (longlong)iStack_5c * 0x38);
      *puVar2 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar2 + 3)])();
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a55428 FUN_148a55428 body=52 status=ok
// SIG undefined FUN_148a55428(void)

void FUN_148a55428(longlong *param_1)

{
  FUN_148a5545c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a5545c FUN_148a5545c body=376 status=ok
// SIG undefined FUN_148a5545c(void)

void FUN_148a5545c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74;
      lVar4 = lVar3 * 0x120 + 0x20 + lVar2;
      FUN_148a516ae(lVar4);
      *(undefined ***)(lVar4 + -0x20) = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(lVar3 * 0x120 + lVar2 + 0x18)]
      )();
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e8b234(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a555d6 FUN_148a555d6 body=48 status=ok
// SIG undefined FUN_148a555d6(void)

undefined8 * FUN_148a555d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a55606 FUN_148a55606 body=358 status=ok
// SIG undefined FUN_148a55606(void)

void FUN_148a55606(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(lVar2 + 0xf0);
  local_38 = lVar2 + 0x100;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(lVar2 + 0x118) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = plVar1;
  local_58 = plVar1;
  local_50 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar3 = *local_80 + (longlong)iStack_64 * 0x120 + 0x3c;
      lVar2 = FUN_1409ca440(lVar3);
      if (lVar2 != 0) {
        FUN_140bcc8a6(param_2,lVar3,0,0);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_148a558d8(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5576e FUN_148a5576e body=32 status=ok
// SIG undefined FUN_148a5576e(void)

undefined8 FUN_148a5576e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FVoiceEngineImpl::FVoiceSerializeHelper");
  return param_2;
}



// FUNCTION 148a557be FUN_148a557be body=281 status=ok
// SIG undefined FUN_148a557be(void)

void FUN_148a557be(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar10), plVar4 != (longlong *)0x0))) {
        local_50 = *param_2;
        local_48 = param_2[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_50,param_3);
        if (cVar6 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar5 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_148a5587d;
          goto LAB_148a5588c;
        }
      }
      uVar7 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a5587d:
    FUN_14474d06a(param_1,0);
  }
LAB_148a5588c:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a558d8 FUN_148a558d8 body=68 status=ok
// SIG undefined FUN_148a558d8(void)

void FUN_148a558d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_148a5591c(param_1);
  return;
}



// FUNCTION 148a5591c FUN_148a5591c body=451 status=ok
// SIG undefined FUN_148a5591c(void)

void FUN_148a5591c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x120;
        iVar6 = FUN_140ba40f9(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x11c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x118 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a55ae0 FUN_148a55ae0 body=117 status=ok
// SIG undefined FUN_148a55ae0(void)

int FUN_148a55ae0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_140ba41f1(lVar4 + (longlong)iVar1 * 0x120,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x118 + (longlong)iVar1 * 0x120);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148a55b55 FUN_148a55b55 body=53 status=ok
// SIG undefined FUN_148a55b55(void)

void FUN_148a55b55(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 148a55b8a FUN_148a55b8a body=29 status=ok
// SIG undefined FUN_148a55b8a(void)

undefined8 FUN_148a55b8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a55bc4 FUN_148a55bc4 body=68 status=ok
// SIG undefined FUN_148a55bc4(void)

void FUN_148a55bc4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a1e1a40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4d01a0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148a55c08 FUN_148a55c08 body=68 status=ok
// SIG undefined FUN_148a55c08(void)

void FUN_148a55c08(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a1e1a40;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4d01a0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148a55c4c FUN_148a55c4c body=108 status=ok
// SIG undefined FUN_148a55c4c(void)

void FUN_148a55c4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a1e1a40;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b4d01a0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a55ca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a55cca FUN_148a55cca body=25 status=ok
// SIG undefined FUN_148a55cca(void)

undefined8 FUN_148a55cca(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a55ce4 FUN_148a55ce4 body=186 status=ok
// SIG undefined FUN_148a55ce4(void)

void FUN_148a55ce4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_140ba40f9(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x120 + *param_1;
      cVar1 = FUN_140ba41f1(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x118);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x120 + *param_1;
          cVar1 = FUN_140ba41f1(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x118);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_148a55d9e(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 148a55d9e FUN_148a55d9e body=106 status=ok
// SIG undefined FUN_148a55d9e(void)

void FUN_148a55d9e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x11c + (longlong)param_2 * 0x120);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x118 + lVar5 * 0x120);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x120 + 0x118);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x120 + 0x118);
  FUN_148a55e08();
  return;
}



// FUNCTION 148a55e08 FUN_148a55e08 body=98 status=ok
// SIG undefined FUN_148a55e08(void)

void FUN_148a55e08(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)(lVar2 + (longlong)param_2 * 0x120);
  FUN_148a516ae(puVar1 + 4);
  *puVar1 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)
            [*(byte *)(lVar2 + (longlong)param_2 * 0x120 + 0x18)])();
  FUN_148a55e6a(param_1,param_2);
  return;
}



// FUNCTION 148a55e6a FUN_148a55e6a body=122 status=ok
// SIG undefined FUN_148a55e6a(void)

void FUN_148a55e6a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x120) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120 + 4) = uVar4;
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



// FUNCTION 148a55ee4 FUN_148a55ee4 body=172 status=ok
// SIG undefined FUN_148a55ee4(void)

void FUN_148a55ee4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_140ba40f9(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x38 + *param_1;
      cVar1 = FUN_140ba41f1(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x30);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x38 + *param_1;
          cVar1 = FUN_140ba41f1(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x30);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_148a55f90(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 148a55f90 FUN_148a55f90 body=140 status=ok
// SIG undefined FUN_148a55f90(void)

void FUN_148a55f90(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x30 + lVar6 * 0x38);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x38 + 0x30);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x30);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar2) = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)
            [*(byte *)((undefined8 *)(lVar1 + lVar2) + 3)])();
  FUN_148a5601c(param_1,param_2);
  return;
}



// FUNCTION 148a5601c FUN_148a5601c body=116 status=ok
// SIG undefined FUN_148a5601c(void)

void FUN_148a5601c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148a56090 FUN_148a56090 body=141 status=ok
// SIG undefined FUN_148a56090(void)

longlong FUN_148a56090(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148a55ae0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x120;
    if (lVar3 + lVar2 != 0) goto LAB_148a560cd;
  }
  local_30 = param_3;
  FUN_148a5611e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x120;
LAB_148a560cd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5611e FUN_148a5611e body=281 status=ok
// SIG undefined FUN_148a5611e(void)

undefined4 * FUN_148a5611e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a56238(param_1,local_48);
  FUN_148a563d2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x118) = 0xffffffff;
  cVar1 = FUN_148a56328(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x11c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x118) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_148a5591c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a56238 FUN_148a56238 body=240 status=ok
// SIG undefined FUN_148a56238(void)

int * FUN_148a56238(longlong *param_1,int *param_2)

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
      FUN_147249674(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x120);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x120) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x120 + *param_1;
  return param_2;
}



// FUNCTION 148a56328 FUN_148a56328 body=169 status=ok
// SIG undefined FUN_148a56328(void)

undefined8 FUN_148a56328(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_148a55ae0(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x120;
    FUN_148a516ae((undefined8 *)(lVar1 + lVar3) + 4);
    *(undefined8 *)(lVar1 + lVar3) = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(lVar1 + lVar3 + 0x18)])();
    memmove((void *)(lVar1 + lVar3),param_3,0x118);
    FUN_148a55e6a(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 148a563d2 FUN_148a563d2 body=148 status=ok
// SIG undefined FUN_148a563d2(void)

undefined8 * FUN_148a563d2(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148a51352(local_118);
  lVar2 = *param_1;
  *param_2 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar2 + 0x18);
  *(byte *)(param_2 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_2 + 1,lVar2 + 8);
  FUN_148a51532(param_2 + 4,local_118);
  FUN_148a516ae(local_118);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a56468 FUN_148a56468 body=230 status=ok
// SIG undefined FUN_148a56468(void)

undefined8 * FUN_148a56468(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a56550 FUN_148a56550 body=29 status=ok
// SIG undefined FUN_148a56550(void)

undefined8 FUN_148a56550(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a56588 FUN_148a56588 body=29 status=ok
// SIG undefined FUN_148a56588(void)

bool FUN_148a56588(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a565a6 FUN_148a565a6 body=26 status=ok
// SIG undefined FUN_148a565a6(void)

bool FUN_148a565a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a565c0 FUN_148a565c0 body=24 status=ok
// SIG undefined FUN_148a565c0(void)

bool FUN_148a565c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a565e4 FUN_148a565e4 body=68 status=ok
// SIG undefined FUN_148a565e4(void)

void FUN_148a565e4(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14b4d0280;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4d0210;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148a56628 FUN_148a56628 body=68 status=ok
// SIG undefined FUN_148a56628(void)

void FUN_148a56628(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14b4d0280;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4d0210;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 148a5666c FUN_148a5666c body=108 status=ok
// SIG undefined FUN_148a5666c(void)

void FUN_148a5666c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14b4d0280;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14b4d0210;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a566c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a566d8 FUN_148a566d8 body=60 status=ok
// SIG undefined FUN_148a566d8(void)

void FUN_148a566d8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a56711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148a56714 FUN_148a56714 body=160 status=ok
// SIG undefined FUN_148a56714(void)

bool FUN_148a56714(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a567b8 FUN_148a567b8 body=110 status=ok
// SIG undefined FUN_148a567b8(void)

int FUN_148a567b8(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_140ba41f1(lVar4 + (longlong)iVar1 * 0x38,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x30 + (longlong)iVar1 * 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148a56826 FUN_148a56826 body=133 status=ok
// SIG undefined FUN_148a56826(void)

longlong FUN_148a56826(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148a567b8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_148a5685f;
  }
  local_30 = param_3;
  FUN_148a568ac(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_148a5685f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a568ac FUN_148a568ac body=307 status=ok
// SIG undefined FUN_148a568ac(void)

undefined4 * FUN_148a568ac(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a569e0(param_1,local_48);
  lVar6 = *param_4;
  *local_40 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar6 + 0x18);
  *(byte *)(local_40 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_40 + 1,lVar6 + 8);
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_148a56ac2(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148a56b52(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a569e0 FUN_148a569e0 body=226 status=ok
// SIG undefined FUN_148a569e0(void)

int * FUN_148a569e0(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148a56ac2 FUN_148a56ac2 body=144 status=ok
// SIG undefined FUN_148a56ac2(void)

undefined8 FUN_148a56ac2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_148a567b8(), iVar13 != -1)) {
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar13 * 0x38);
    *puVar1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])(puVar1 + 1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[9];
    uVar11 = param_3[10];
    uVar12 = param_3[0xb];
    *(undefined4 *)(puVar1 + 4) = param_3[8];
    *(undefined4 *)((longlong)puVar1 + 0x24) = uVar10;
    *(undefined4 *)(puVar1 + 5) = uVar11;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar12;
    *(undefined4 *)(puVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar7;
    *(undefined4 *)(puVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar9;
    *(undefined4 *)puVar1 = uVar2;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
    *(undefined4 *)(puVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
    FUN_148a5601c(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 148a56b52 FUN_148a56b52 body=441 status=ok
// SIG undefined FUN_148a56b52(void)

void FUN_148a56b52(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_140ba40f9(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a56d0c FUN_148a56d0c body=132 status=ok
// SIG undefined FUN_148a56d0c(void)

void FUN_148a56d0c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a56d92 FUN_148a56d92 body=48 status=ok
// SIG undefined FUN_148a56d92(void)

void FUN_148a56d92(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148a56dc2 FUN_148a56dc2 body=112 status=ok
// SIG undefined FUN_148a56dc2(void)

void FUN_148a56dc2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 148a56e32 FUN_148a56e32 body=112 status=ok
// SIG undefined FUN_148a56e32(void)

void FUN_148a56e32(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 148a56ea2 FUN_148a56ea2 body=147 status=ok
// SIG undefined FUN_148a56ea2(void)

void FUN_148a56ea2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a56f36 FUN_148a56f36 body=147 status=ok
// SIG undefined FUN_148a56f36(void)

void FUN_148a56f36(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a56fca FUN_148a56fca body=139 status=ok
// SIG undefined FUN_148a56fca(void)

void FUN_148a56fca(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148a57056 FUN_148a57056 body=62 status=ok
// SIG undefined FUN_148a57056(void)

void FUN_148a57056(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a57094(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148a57094 FUN_148a57094 body=112 status=ok
// SIG undefined FUN_148a57094(void)

ulonglong FUN_148a57094(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a570ce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148a570ce:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a57104 FUN_148a57104 body=113 status=ok
// SIG undefined FUN_148a57104(void)

void FUN_148a57104(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x20 + lVar1);
  FUN_14127bbf3(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x20),(longlong)iVar3 << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148a57176 FUN_148a57176 body=62 status=ok
// SIG undefined FUN_148a57176(void)

void FUN_148a57176(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a571b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148a571b4 FUN_148a571b4 body=93 status=ok
// SIG undefined FUN_148a571b4(void)

ulonglong FUN_148a571b4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 148a5722c FUN_148a5722c body=29 status=ok
// SIG undefined FUN_148a5722c(void)

undefined8 FUN_148a5722c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5724a FUN_148a5724a body=24 status=ok
// SIG undefined FUN_148a5724a(void)

void FUN_148a5724a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5725e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a57262 FUN_148a57262 body=29 status=ok
// SIG undefined FUN_148a57262(void)

undefined8 FUN_148a57262(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5727f FUN_148a5727f body=38 status=ok
// SIG undefined FUN_148a5727f(void)

void FUN_148a5727f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    param_1[5] = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 148a572a6 FUN_148a572a6 body=147 status=ok
// SIG undefined FUN_148a572a6(void)

void FUN_148a572a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a5733a FUN_148a5733a body=73 status=ok
// SIG undefined FUN_148a5733a(void)

void FUN_148a5733a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    FUN_1400020a8();
    puVar1 = *(undefined8 **)(param_1 + 0x38);
  }
  FUN_148a57383(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a57383 FUN_148a57383 body=43 status=ok
// SIG undefined FUN_148a57383(void)

void FUN_148a57383(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 148a573ae FUN_148a573ae body=230 status=ok
// SIG undefined FUN_148a573ae(void)

undefined8 * FUN_148a573ae(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a57496 FUN_148a57496 body=130 status=ok
// SIG undefined FUN_148a57496(void)

void FUN_148a57496(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5757a FUN_148a5757a body=113 status=ok
// SIG undefined FUN_148a5757a(void)

void FUN_148a5757a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5f434(local_98);
  FUN_145d3e79e(param_3,local_98);
  FUN_14597c824(local_98);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a575f4 FUN_148a575f4 body=387 status=ok
// SIG undefined FUN_148a575f4(void)

void FUN_148a575f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_a8 = &PTR_FUN_14b4d9d98;
  local_a0 = 0;
  local_9e = 0;
  local_98 = 0x407f400000000000;
  local_90 = 0x3f80000000000000;
  uStack_88 = 0x1441200000;
  local_80 = 0x41a00000;
  local_7c = 0x101;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar2 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a5f496(local_28,pppuVar2);
  *param_3 = uVar1;
  FUN_14597c824(&local_a8);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a57778 FUN_148a57778 body=267 status=ok
// SIG undefined FUN_148a57778(void)

void FUN_148a57778(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5f596(local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a578b0 FUN_148a578b0 body=225 status=ok
// SIG undefined FUN_148a578b0(void)

void FUN_148a578b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5fa34(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a579be FUN_148a579be body=231 status=ok
// SIG undefined FUN_148a579be(void)

void FUN_148a579be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5f716(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a57aa6 FUN_148a57aa6 body=225 status=ok
// SIG undefined FUN_148a57aa6(void)

void FUN_148a57aa6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5f5ae(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a57b88 FUN_148a57b88 body=253 status=ok
// SIG undefined FUN_148a57b88(void)

void FUN_148a57b88(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a5f888(local_28[2],local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a57caa FUN_148a57caa body=114 status=ok
// SIG undefined FUN_148a57caa(void)

undefined8 FUN_148a57caa(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 1) - (int)*param_2;
  iVar1 = FUN_144a9ffb2(0,*param_2,iVar3);
  lVar2 = FUN_14001cc68((longlong)iVar1 * 2 + 2,0);
  FUN_1446e71a3(lVar2,iVar1,*param_2,iVar3);
  *(undefined2 *)(lVar2 + (longlong)iVar1 * 2) = 0;
  FUN_140056680(param_1,lVar2);
  FUN_1400020a8(lVar2);
  return param_1;
}



// FUNCTION 148a57d1c FUN_148a57d1c body=125 status=ok
// SIG undefined FUN_148a57d1c(void)

longlong * FUN_148a57d1c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  param_1[2] = param_2[2];
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  return param_1;
}



// FUNCTION 148a57d9a FUN_148a57d9a body=82 status=ok
// SIG undefined FUN_148a57d9a(void)

undefined8 * FUN_148a57d9a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148a57dec FUN_148a57dec body=5 status=ok
// SIG undefined FUN_148a57dec(void)

void FUN_148a57dec(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 148a57df2 FUN_148a57df2 body=32 status=ok
// SIG undefined FUN_148a57df2(void)

undefined8 FUN_148a57df2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPerfTelemetry");
  return param_2;
}



// FUNCTION 148a57e12 FUN_148a57e12 body=110 status=ok
// SIG undefined FUN_148a57e12(void)

void FUN_148a57e12(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4d6690;
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 148a57e80 FUN_148a57e80 body=96 status=ok
// SIG undefined FUN_148a57e80(void)

void FUN_148a57e80(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x70) < 0) {
      if (*(float *)(param_1 + 0x74) != 0.0) {
        return;
      }
      if (NAN(*(float *)(param_1 + 0x74))) {
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    FUN_1407f4802(*(longlong *)(param_1 + 0x48) + 0xd0,0);
    if (*(int *)(param_1 + 0x70) < 0) {
      fVar1 = -1.0;
    }
    else {
      fVar1 = (float)*(int *)(param_1 + 0x70);
    }
    *(float *)(param_1 + 0x74) = fVar1;
  }
  return;
}



// FUNCTION 148a57ee0 FUN_148a57ee0 body=54 status=ok
// SIG undefined FUN_148a57ee0(void)

void FUN_148a57ee0(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_148a5f2a8();
    if (*(int *)(param_1 + 0x50) < 0) {
      fVar1 = -1.0;
    }
    else {
      fVar1 = (float)*(int *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x54) = fVar1;
  }
  return;
}



// FUNCTION 148a57f16 FUN_148a57f16 body=54 status=ok
// SIG undefined FUN_148a57f16(void)

void FUN_148a57f16(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_148a5f17e();
    if (*(int *)(param_1 + 0x50) < 0) {
      fVar1 = -1.0;
    }
    else {
      fVar1 = (float)*(int *)(param_1 + 0x50);
    }
    *(float *)(param_1 + 0x54) = fVar1;
  }
  return;
}



// FUNCTION 148a57f4c FUN_148a57f4c body=4 status=ok
// SIG undefined FUN_148a57f4c(void)

void FUN_148a57f4c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 148a57f52 FUN_148a57f52 body=38 status=ok
// SIG undefined FUN_148a57f52(void)

undefined8 FUN_148a57f52(undefined8 param_1,int param_2)

{
  FUN_148a57e12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a57f78 FUN_148a57f78 body=90 status=ok
// SIG undefined FUN_148a57f78(void)

void FUN_148a57f78(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 0x40) = 0xff7fffff7f7fffff;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  FUN_140212f8e((longlong)param_2 + 0x80);
  return;
}



// FUNCTION 148a57fd2 FUN_148a57fd2 body=84 status=ok
// SIG undefined FUN_148a57fd2(void)

void FUN_148a57fd2(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0xff7fffff7f7fffff;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  FUN_140212f8e(param_2 + 0x10);
  return;
}



// FUNCTION 148a58044 FUN_148a58044 body=63 status=ok
// SIG undefined FUN_148a58044(void)

undefined1 FUN_148a58044(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5816e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148a580ac FUN_148a580ac body=59 status=ok
// SIG undefined FUN_148a580ac(void)

undefined8 FUN_148a580ac(longlong *param_1)

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



// FUNCTION 148a580f8 FUN_148a580f8 body=40 status=ok
// SIG undefined FUN_148a580f8(void)

void FUN_148a580f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_145be9ab4(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148a5816e FUN_148a5816e body=209 status=ok
// SIG undefined FUN_148a5816e(void)

undefined8 * FUN_148a5816e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[2];
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[3];
  param_1[2] = uVar2;
  param_1[3] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[4];
  lVar3 = param_2[5];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[5];
  param_1[4] = uVar2;
  param_1[5] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar11 = *(undefined4 *)(param_2 + 9);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar14 = *(undefined4 *)(param_2 + 0xb);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0xb) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar15;
  *(undefined4 *)(param_1 + 8) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 9) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  return param_1;
}



// FUNCTION 148a5828c FUN_148a5828c body=54 status=ok
// SIG undefined FUN_148a5828c(void)

undefined1 FUN_148a5828c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a583a4(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148a582ea FUN_148a582ea body=59 status=ok
// SIG undefined FUN_148a582ea(void)

undefined8 FUN_148a582ea(longlong *param_1)

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



// FUNCTION 148a58330 FUN_148a58330 body=38 status=ok
// SIG undefined FUN_148a58330(void)

void FUN_148a58330(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a583a4 FUN_148a583a4 body=84 status=ok
// SIG undefined FUN_148a583a4(void)

undefined8 * FUN_148a583a4(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  param_1[1] = lVar1;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 148a58412 FUN_148a58412 body=47 status=ok
// SIG undefined FUN_148a58412(void)

void FUN_148a58412(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a58458 FUN_148a58458 body=67 status=ok
// SIG undefined FUN_148a58458(void)

undefined1 FUN_148a58458(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148a584c4 FUN_148a584c4 body=59 status=ok
// SIG undefined FUN_148a584c4(void)

undefined8 FUN_148a584c4(longlong *param_1)

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



// FUNCTION 148a58562 FUN_148a58562 body=51 status=ok
// SIG undefined FUN_148a58562(void)

void FUN_148a58562(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148a585e4 FUN_148a585e4 body=117 status=ok
// SIG undefined FUN_148a585e4(void)

undefined8 FUN_148a585e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144a787a6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a58682 FUN_148a58682 body=59 status=ok
// SIG undefined FUN_148a58682(void)

undefined8 FUN_148a58682(longlong *param_1)

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



// FUNCTION 148a586c8 FUN_148a586c8 body=34 status=ok
// SIG undefined FUN_148a586c8(void)

void FUN_148a586c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14581c278(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148a58794 FUN_148a58794 body=54 status=ok
// SIG undefined FUN_148a58794(void)

undefined1 FUN_148a58794(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a588a8(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148a587f2 FUN_148a587f2 body=59 status=ok
// SIG undefined FUN_148a587f2(void)

undefined8 FUN_148a587f2(longlong *param_1)

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



// FUNCTION 148a58838 FUN_148a58838 body=34 status=ok
// SIG undefined FUN_148a58838(void)

void FUN_148a58838(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14581c2b6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148a588a8 FUN_148a588a8 body=85 status=ok
// SIG undefined FUN_148a588a8(void)

longlong FUN_148a588a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148a58954 FUN_148a58954 body=54 status=ok
// SIG undefined FUN_148a58954(void)

undefined1 FUN_148a58954(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a58ab4(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148a589b2 FUN_148a589b2 body=59 status=ok
// SIG undefined FUN_148a589b2(void)

undefined8 FUN_148a589b2(longlong *param_1)

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



// FUNCTION 148a589f8 FUN_148a589f8 body=34 status=ok
// SIG undefined FUN_148a589f8(void)

void FUN_148a589f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148a58a68(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148a58a68 FUN_148a58a68 body=76 status=ok
// SIG undefined FUN_148a58a68(void)

void FUN_148a58a68(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a58ab4 FUN_148a58ab4 body=83 status=ok
// SIG undefined FUN_148a58ab4(void)

undefined8 * FUN_148a58ab4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 148a58b46 FUN_148a58b46 body=80 status=ok
// SIG undefined FUN_148a58b46(void)

undefined1 FUN_148a58b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148a58bbe FUN_148a58bbe body=59 status=ok
// SIG undefined FUN_148a58bbe(void)

undefined8 FUN_148a58bbe(longlong *param_1)

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



// FUNCTION 148a58c04 FUN_148a58c04 body=34 status=ok
// SIG undefined FUN_148a58c04(void)

void FUN_148a58c04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148a58c74(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148a58c74 FUN_148a58c74 body=61 status=ok
// SIG undefined FUN_148a58c74(void)

void FUN_148a58c74(longlong *param_1)

{
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



// FUNCTION 148a58d06 FUN_148a58d06 body=59 status=ok
// SIG undefined FUN_148a58d06(void)

undefined8 FUN_148a58d06(longlong *param_1)

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



// FUNCTION 148a58ddc FUN_148a58ddc body=39 status=ok
// SIG undefined FUN_148a58ddc(void)

void FUN_148a58ddc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_148a58c74(param_2 + 8);
  return;
}



// FUNCTION 148a58e1a FUN_148a58e1a body=54 status=ok
// SIG undefined FUN_148a58e1a(void)

undefined1 FUN_148a58e1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a58f3e(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148a58e78 FUN_148a58e78 body=59 status=ok
// SIG undefined FUN_148a58e78(void)

undefined8 FUN_148a58e78(longlong *param_1)

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



// FUNCTION 148a58ebe FUN_148a58ebe body=49 status=ok
// SIG undefined FUN_148a58ebe(void)

void FUN_148a58ebe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    FUN_148a58c74(param_2 + 8);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148a58f3e FUN_148a58f3e body=92 status=ok
// SIG undefined FUN_148a58f3e(void)

undefined1 * FUN_148a58f3e(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 148a58ff2 FUN_148a58ff2 body=54 status=ok
// SIG undefined FUN_148a58ff2(void)

undefined1 FUN_148a58ff2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5916e(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148a59050 FUN_148a59050 body=59 status=ok
// SIG undefined FUN_148a59050(void)

undefined8 FUN_148a59050(longlong *param_1)

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



// FUNCTION 148a59096 FUN_148a59096 body=34 status=ok
// SIG undefined FUN_148a59096(void)

void FUN_148a59096(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148a59106(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148a59106 FUN_148a59106 body=103 status=ok
// SIG undefined FUN_148a59106(void)

void FUN_148a59106(longlong *param_1)

{
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



// FUNCTION 148a5916e FUN_148a5916e body=95 status=ok
// SIG undefined FUN_148a5916e(void)

longlong FUN_148a5916e(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148a591de FUN_148a591de body=125 status=ok
// SIG undefined FUN_148a591de(void)

void FUN_148a591de(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  memset(param_2 + 8,0,0x89);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  return;
}



// FUNCTION 148a5927a FUN_148a5927a body=63 status=ok
// SIG undefined FUN_148a5927a(void)

undefined1 FUN_148a5927a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a59566(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 148a592e2 FUN_148a592e2 body=59 status=ok
// SIG undefined FUN_148a592e2(void)

undefined8 FUN_148a592e2(longlong *param_1)

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



// FUNCTION 148a5932e FUN_148a5932e body=40 status=ok
// SIG undefined FUN_148a5932e(void)

void FUN_148a5932e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_148a593a4(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 148a593a4 FUN_148a593a4 body=224 status=ok
// SIG undefined FUN_148a593a4(void)

void FUN_148a593a4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  FUN_148a59484(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_148a58c74(param_1 + 0x98);
  FUN_148a59106(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a59484 FUN_148a59484 body=38 status=ok
// SIG undefined FUN_148a59484(void)

void FUN_148a59484(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a594aa(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 148a594aa FUN_148a594aa body=87 status=ok
// SIG undefined FUN_148a594aa(void)

void FUN_148a594aa(longlong *param_1)

{
  FUN_148a59501(param_1[6],(int)param_1[7]);
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



// FUNCTION 148a59501 FUN_148a59501 body=38 status=ok
// SIG undefined FUN_148a59501(void)

void FUN_148a59501(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a59528(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 148a59528 FUN_148a59528 body=61 status=ok
// SIG undefined FUN_148a59528(void)

void FUN_148a59528(longlong *param_1)

{
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



// FUNCTION 148a59566 FUN_148a59566 body=223 status=ok
// SIG undefined FUN_148a59566(void)

undefined1 * FUN_148a59566(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_148a5916e(param_1 + 0x30,param_2 + 0x30);
  FUN_148a58f3e(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  FUN_140bee9ec(param_1 + 0x138,param_2 + 0x138);
  FUN_148a59646(param_1 + 0x148,param_2 + 0x148);
  FUN_144a787a6(param_1 + 0x158,param_2 + 0x158);
  return param_1;
}



// FUNCTION 148a59646 FUN_148a59646 body=95 status=ok
// SIG undefined FUN_148a59646(void)

undefined8 * FUN_148a59646(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148a59484(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a596a6(param_1,iVar1);
      FUN_148a59708(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a596a6 FUN_148a596a6 body=98 status=ok
// SIG undefined FUN_148a596a6(void)

void FUN_148a596a6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a59708 FUN_148a59708 body=52 status=ok
// SIG undefined FUN_148a59708(void)

void FUN_148a59708(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a5973c(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148a5973c FUN_148a5973c body=300 status=ok
// SIG undefined FUN_148a5973c(void)

undefined8 * FUN_148a5973c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar3 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_148a59868(param_1 + 6,iVar1,0);
    FUN_148a598ca(param_1[6],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148a59868 FUN_148a59868 body=98 status=ok
// SIG undefined FUN_148a59868(void)

void FUN_148a59868(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a598ca FUN_148a598ca body=52 status=ok
// SIG undefined FUN_148a598ca(void)

void FUN_148a598ca(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a598fe(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148a598fe FUN_148a598fe body=242 status=ok
// SIG undefined FUN_148a598fe(void)

undefined8 * FUN_148a598fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 148a59a5e FUN_148a59a5e body=59 status=ok
// SIG undefined FUN_148a59a5e(void)

undefined8 FUN_148a59a5e(longlong *param_1)

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



// FUNCTION 148a59bfc FUN_148a59bfc body=63 status=ok
// SIG undefined FUN_148a59bfc(void)

undefined1 FUN_148a59bfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145d3e79e(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148a59c64 FUN_148a59c64 body=59 status=ok
// SIG undefined FUN_148a59c64(void)

undefined8 FUN_148a59c64(longlong *param_1)

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



// FUNCTION 148a59cb0 FUN_148a59cb0 body=40 status=ok
// SIG undefined FUN_148a59cb0(void)

void FUN_148a59cb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14597c824(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148a59d5e FUN_148a59d5e body=52 status=ok
// SIG undefined FUN_148a59d5e(void)

void FUN_148a59d5e(undefined8 param_1,longlong param_2)

{
  (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(param_2 + 0x48)])(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a59da8 FUN_148a59da8 body=54 status=ok
// SIG undefined FUN_148a59da8(void)

undefined1 FUN_148a59da8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a59ed2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148a59e06 FUN_148a59e06 body=59 status=ok
// SIG undefined FUN_148a59e06(void)

undefined8 FUN_148a59e06(longlong *param_1)

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



// FUNCTION 148a59e4c FUN_148a59e4c body=56 status=ok
// SIG undefined FUN_148a59e4c(void)

void FUN_148a59e4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(param_2 + 0x48)])(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148a59ed2 FUN_148a59ed2 body=214 status=ok
// SIG undefined FUN_148a59ed2(void)

undefined8 * FUN_148a59ed2(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (param_2 != param_1) {
    local_58 = CONCAT71(local_58._1_7_,*(byte *)(param_2 + 9));
    (*(code *)(&switchD_148a5f16c::switchdataD_14b4d9da0)[*(byte *)(param_2 + 9)])
              (&local_78,param_2 + 5);
    local_28 = local_58;
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uVar1 = param_1[9];
    uVar2 = *(undefined4 *)(param_1 + 5);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 6);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x34);
    uVar6 = *(undefined4 *)(param_1 + 7);
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x3c);
    uVar8 = *(undefined4 *)(param_1 + 8);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x44);
    param_1[9] = local_58;
    *(undefined4 *)(param_1 + 7) = local_68;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_64;
    *(undefined4 *)(param_1 + 8) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x44) = uStack_5c;
    *(undefined4 *)(param_1 + 5) = local_78;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_74;
    *(undefined4 *)(param_1 + 6) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_6c;
    local_78 = uVar2;
    uStack_74 = uVar3;
    uStack_70 = uVar4;
    uStack_6c = uVar5;
    local_68 = uVar6;
    uStack_64 = uVar7;
    uStack_60 = uVar8;
    uStack_5c = uVar9;
    local_58 = uVar1;
    (*(code *)(&PTR_LAB_14b4d9d70)[uVar1 & 0xff])(&local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a59faa FUN_148a59faa body=38 status=ok
// SIG undefined FUN_148a59faa(void)

undefined8 FUN_148a59faa(undefined8 param_1,int param_2)

{
  FUN_14597c824();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5a024 FUN_148a5a024 body=139 status=ok
// SIG undefined FUN_148a5a024(void)

undefined8 FUN_148a5a024(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144a787a6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined2 *)(param_2 + lVar1 + 0x38) = *(undefined2 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a5a0d8 FUN_148a5a0d8 body=59 status=ok
// SIG undefined FUN_148a5a0d8(void)

undefined8 FUN_148a5a0d8(longlong *param_1)

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



// FUNCTION 148a5a11e FUN_148a5a11e body=32 status=ok
// SIG undefined FUN_148a5a11e(void)

void FUN_148a5a11e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1418bf7c0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a5a1b4 FUN_148a5a1b4 body=48 status=ok
// SIG undefined FUN_148a5a1b4(void)

void FUN_148a5a1b4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a5a1fa FUN_148a5a1fa body=94 status=ok
// SIG undefined FUN_148a5a1fa(void)

undefined8 FUN_148a5a1fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a5a280 FUN_148a5a280 body=59 status=ok
// SIG undefined FUN_148a5a280(void)

undefined8 FUN_148a5a280(longlong *param_1)

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



// FUNCTION 148a5a31e FUN_148a5a31e body=52 status=ok
// SIG undefined FUN_148a5a31e(void)

void FUN_148a5a31e(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148a5a398 FUN_148a5a398 body=88 status=ok
// SIG undefined FUN_148a5a398(void)

undefined1 FUN_148a5a398(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 148a5a418 FUN_148a5a418 body=59 status=ok
// SIG undefined FUN_148a5a418(void)

undefined8 FUN_148a5a418(longlong *param_1)

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



// FUNCTION 148a5a45e FUN_148a5a45e body=34 status=ok
// SIG undefined FUN_148a5a45e(void)

void FUN_148a5a45e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148a59528(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a5a516 FUN_148a5a516 body=54 status=ok
// SIG undefined FUN_148a5a516(void)

undefined1 FUN_148a5a516(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5a62a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148a5a574 FUN_148a5a574 body=59 status=ok
// SIG undefined FUN_148a5a574(void)

undefined8 FUN_148a5a574(longlong *param_1)

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



// FUNCTION 148a5a5ba FUN_148a5a5ba body=34 status=ok
// SIG undefined FUN_148a5a5ba(void)

void FUN_148a5a5ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148a594aa(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a5a62a FUN_148a5a62a body=69 status=ok
// SIG undefined FUN_148a5a62a(void)

longlong FUN_148a5a62a(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_148a5a670(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148a5a670 FUN_148a5a670 body=95 status=ok
// SIG undefined FUN_148a5a670(void)

undefined8 * FUN_148a5a670(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148a59501(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a59868(param_1,iVar1);
      FUN_148a598ca(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a5a726 FUN_148a5a726 body=54 status=ok
// SIG undefined FUN_148a5a726(void)

undefined1 FUN_148a5a726(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5a83a(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148a5a784 FUN_148a5a784 body=59 status=ok
// SIG undefined FUN_148a5a784(void)

undefined8 FUN_148a5a784(longlong *param_1)

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



// FUNCTION 148a5a7ca FUN_148a5a7ca body=34 status=ok
// SIG undefined FUN_148a5a7ca(void)

void FUN_148a5a7ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145be9a34(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148a5a83a FUN_148a5a83a body=83 status=ok
// SIG undefined FUN_148a5a83a(void)

undefined8 * FUN_148a5a83a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  FUN_140bee9ec(param_1 + 7,param_2 + 7);
  return param_1;
}



// FUNCTION 148a5a8f8 FUN_148a5a8f8 body=59 status=ok
// SIG undefined FUN_148a5a8f8(void)

undefined8 FUN_148a5a8f8(longlong *param_1)

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



// FUNCTION 148a5aa12 FUN_148a5aa12 body=59 status=ok
// SIG undefined FUN_148a5aa12(void)

undefined8 FUN_148a5aa12(longlong *param_1)

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



// FUNCTION 148a5ab3c FUN_148a5ab3c body=54 status=ok
// SIG undefined FUN_148a5ab3c(void)

undefined1 FUN_148a5ab3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5ac4e(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148a5ab9a FUN_148a5ab9a body=59 status=ok
// SIG undefined FUN_148a5ab9a(void)

undefined8 FUN_148a5ab9a(longlong *param_1)

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



// FUNCTION 148a5abe0 FUN_148a5abe0 body=32 status=ok
// SIG undefined FUN_148a5abe0(void)

void FUN_148a5abe0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14111b87a(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148a5ac4e FUN_148a5ac4e body=102 status=ok
// SIG undefined FUN_148a5ac4e(void)

undefined4 * FUN_148a5ac4e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 148a5acce FUN_148a5acce body=47 status=ok
// SIG undefined FUN_148a5acce(void)

void FUN_148a5acce(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a5ad14 FUN_148a5ad14 body=67 status=ok
// SIG undefined FUN_148a5ad14(void)

undefined1 FUN_148a5ad14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148a5ad80 FUN_148a5ad80 body=59 status=ok
// SIG undefined FUN_148a5ad80(void)

undefined8 FUN_148a5ad80(longlong *param_1)

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



// FUNCTION 148a5ae1e FUN_148a5ae1e body=51 status=ok
// SIG undefined FUN_148a5ae1e(void)

void FUN_148a5ae1e(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148a5aea0 FUN_148a5aea0 body=54 status=ok
// SIG undefined FUN_148a5aea0(void)

undefined1 FUN_148a5aea0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a5b056(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148a5aefe FUN_148a5aefe body=59 status=ok
// SIG undefined FUN_148a5aefe(void)

undefined8 FUN_148a5aefe(longlong *param_1)

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



// FUNCTION 148a5af44 FUN_148a5af44 body=34 status=ok
// SIG undefined FUN_148a5af44(void)

void FUN_148a5af44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148a5afb4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148a5afb4 FUN_148a5afb4 body=101 status=ok
// SIG undefined FUN_148a5afb4(void)

void FUN_148a5afb4(longlong *param_1)

{
  FUN_148a5b019(param_1[8],(int)param_1[9]);
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



// FUNCTION 148a5b019 FUN_148a5b019 body=61 status=ok
// SIG undefined FUN_148a5b019(void)

void FUN_148a5b019(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148a5b056 FUN_148a5b056 body=82 status=ok
// SIG undefined FUN_148a5b056(void)

longlong FUN_148a5b056(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_148a5b0a8(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 148a5b0a8 FUN_148a5b0a8 body=95 status=ok
// SIG undefined FUN_148a5b0a8(void)

undefined8 * FUN_148a5b0a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148a5b019(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a5b108(param_1,iVar1);
      FUN_148a5b16a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a5b108 FUN_148a5b108 body=98 status=ok
// SIG undefined FUN_148a5b108(void)

void FUN_148a5b108(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a5b16a FUN_148a5b16a body=52 status=ok
// SIG undefined FUN_148a5b16a(void)

void FUN_148a5b16a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a5b19e(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148a5b19e FUN_148a5b19e body=156 status=ok
// SIG undefined FUN_148a5b19e(void)

undefined8 * FUN_148a5b19e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a5b23c FUN_148a5b23c body=53 status=ok
// SIG undefined FUN_148a5b23c(void)

void FUN_148a5b23c(void)

{
  FUN_148a5b272();
  if (DAT_14cb96680 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb96660 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a5b272 FUN_148a5b272 body=376 status=ok
// SIG undefined FUN_148a5b272(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a5b272(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb96670;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb96688 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb96660;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_148a5b3ec(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb96668 = 0;
  if (DAT_14cb9666c != 0) {
    FUN_1448fc38a(&DAT_14cb96660,0);
  }
  _DAT_14cb96690 = 0xffffffff;
  DAT_14cb96688 = 0;
  if (0x80 < DAT_14cb9668c) {
    DAT_14cb9668c = 0x80;
    FUN_1446efbd8(&DAT_14cb96670,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5b3ec FUN_148a5b3ec body=52 status=ok
// SIG undefined FUN_148a5b3ec(void)

void FUN_148a5b3ec(longlong *param_1)

{
  FUN_148a5b420();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a5b420 FUN_148a5b420 body=314 status=ok
// SIG undefined FUN_148a5b420(void)

void FUN_148a5b420(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1401e7e48(*local_68 + (longlong)iStack_4c * 0x30 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5b55c FUN_148a5b55c body=203 status=ok
// SIG undefined FUN_148a5b55c(void)

longlong FUN_148a5b55c(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb96668 != DAT_14cb96694) {
    puVar3 = &DAT_14cb96698;
    if (DAT_14cb966a0 != (undefined *)0x0) {
      puVar3 = DAT_14cb966a0;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cb966a8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14cb96660 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(DAT_14cb96660 + (longlong)iVar1 * 0x60) == *param_2) {
          if (lVar2 != 0) goto LAB_148a5b60b;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_148a5b628(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x60 + DAT_14cb96660;
LAB_148a5b60b:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 148a5b628 FUN_148a5b628 body=239 status=ok
// SIG undefined FUN_148a5b628(void)

undefined4 * FUN_148a5b628(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a5b718(local_48);
  FUN_148a5b8ee(param_3,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar2 = FUN_148a5b82e(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb96668 - DAT_14cb96694;
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= DAT_14cb966a8)) {
      param_2 = DAT_14cb966a8 - 1U & param_2;
      *(uint *)(local_40 + 0x5c) = param_2;
      puVar6 = &DAT_14cb96698;
      if (DAT_14cb966a0 != (undefined *)0x0) {
        puVar6 = DAT_14cb966a0;
      }
      *(undefined4 *)(local_40 + 0x58) = *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4);
      *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4) = local_48[0];
    }
    else {
      DAT_14cb966a8 = iVar5;
      FUN_148a5bc10();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5b718 FUN_148a5b718 body=278 status=ok
// SIG undefined FUN_148a5b718(void)

int * FUN_148a5b718(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb96690;
  iVar4 = DAT_14cb96668;
  if (DAT_14cb96694 == 0) {
    iVar2 = DAT_14cb96668 + 1;
    bVar7 = DAT_14cb9666c == DAT_14cb96668;
    DAT_14cb96668 = iVar2;
    if (bVar7) {
      FUN_14488f93c(&DAT_14cb96660,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb96670,1);
    puVar3 = DAT_14cb96680;
    if (DAT_14cb96680 == (undefined *)0x0) {
      puVar3 = &DAT_14cb96670;
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
    lVar6 = (longlong)DAT_14cb96690;
    DAT_14cb96690 = *(int *)(DAT_14cb96660 + 4 + lVar6 * 0x60);
    DAT_14cb96694 = DAT_14cb96694 + -1;
    iVar4 = iVar2;
    if (DAT_14cb96694 != 0) {
      *(undefined4 *)(DAT_14cb96660 + (longlong)DAT_14cb96690 * 0x60) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb96670;
  if (DAT_14cb96680 != (undefined *)0x0) {
    puVar3 = DAT_14cb96680;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x60 + DAT_14cb96660;
  return param_1;
}



// FUNCTION 148a5b82e FUN_148a5b82e body=191 status=ok
// SIG undefined FUN_148a5b82e(void)

undefined8 FUN_148a5b82e(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14cb96668 - DAT_14cb96694 != 1) && (DAT_14cb96668 != DAT_14cb96694)) {
    puVar1 = &DAT_14cb96698;
    if (DAT_14cb966a0 != (undefined *)0x0) {
      puVar1 = DAT_14cb966a0;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14cb966a8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14cb96660 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(DAT_14cb96660 + (longlong)iVar2 * 0x60) == *param_2) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_148a5b3ec((longlong)_Dst + 8);
          memmove(_Dst,param_2,0x58);
          FUN_148a5bb88(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a5b8ee FUN_148a5b8ee body=149 status=ok
// SIG undefined FUN_148a5b8ee(void)

undefined8 * FUN_148a5b8ee(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_148a5b984(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148a5b3ec(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


