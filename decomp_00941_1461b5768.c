// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1461b5768 FUN_1461b5768 body=144 status=ok
// SIG undefined FUN_1461b5768(void)

bool FUN_1461b5768(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b57fa FUN_1461b57fa body=42 status=ok
// SIG undefined FUN_1461b57fa(void)

void FUN_1461b57fa(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) {
    FUN_1461b5824();
    FUN_1461f3be8(param_1);
    return;
  }
  return;
}



// FUNCTION 1461b5824 FUN_1461b5824 body=206 status=ok
// SIG undefined FUN_1461b5824(void)

void FUN_1461b5824(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x398) == 0) {
    return;
  }
  lVar1 = FUN_1402d20ea(param_1 + 0x3a8);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    return;
  }
  uVar2 = FUN_1402d20ea(param_1 + 0x3a8);
  lVar3 = FUN_1411403ca(param_1,uVar2,0,0);
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  if (lVar3 == 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1461b589d;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar1 == lVar3) goto LAB_1461b589d;
    if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
  }
  *(longlong *)(param_1 + 0x3f0) = lVar3;
  lVar1 = lVar3;
LAB_1461b589d:
  (**(code **)(**(longlong **)(param_1 + 0x398) + 0x638))(*(longlong **)(param_1 + 0x398),0,lVar1);
  FUN_1448215fa(*(undefined8 *)(param_1 + 0x398));
  return;
}



// FUNCTION 1461b58f2 FUN_1461b58f2 body=54 status=ok
// SIG undefined FUN_1461b58f2(void)

void FUN_1461b58f2(void)

{
  FUN_14162e84c();
  if (DAT_14cbdf590 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbdf570 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461b5928 FUN_1461b5928 body=56 status=ok
// SIG undefined FUN_1461b5928(void)

undefined8 * FUN_1461b5928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x98);
  FUN_14162ea22(puVar1);
  *puVar1 = &PTR_FUN_14ba34c50;
  puVar1[0x12] = 0;
  return puVar1;
}



// FUNCTION 1461b5960 FUN_1461b5960 body=152 status=ok
// SIG undefined FUN_1461b5960(void)

void FUN_1461b5960(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 400) == 0) {
    local_28 = "Windows";
    lVar2 = FUN_14001cc68(0xd0,0x10);
    FUN_1461b59fa(lVar2,&local_28);
    lVar1 = *(longlong *)(param_1 + 0x60);
    *(longlong *)(param_1 + 0x60) = lVar2 + 0x10;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    FUN_1461b5b34(param_1);
    *(undefined4 *)(param_1 + 400) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b59fa FUN_1461b59fa body=127 status=ok
// SIG undefined FUN_1461b59fa(void)

undefined8 * FUN_1461b59fa(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = FUN_145c16fa5;
  param_1[1] = 0;
  FUN_1400b22c2(local_30,*param_2);
  FUN_1461b5a7a(param_1 + 2,DAT_14c872ce0,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b5a7a FUN_1461b5a7a body=186 status=ok
// SIG undefined FUN_1461b5a7a(void)

longlong FUN_1461b5a7a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(param_1,puVar1,1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x40),4000);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_14162ebf6(param_1,param_2);
  return param_1;
}



// FUNCTION 1461b5b34 FUN_1461b5b34 body=550 status=ok
// SIG undefined FUN_1461b5b34(void)

void FUN_1461b5b34(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  longlong local_98 [3];
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  uStack_60 = 0;
  local_c8 = &DAT_14c872ce8;
  iVar2 = FUN_14105aa76(DAT_14c872ce0,L"Audio",L"AudioInfoModules");
  lVar1 = local_68;
  if (iVar2 != 0) {
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        uVar3 = FUN_144a52528();
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 8 + lVar7) != 0) {
          puVar6 = *(undefined2 **)(lVar1 + lVar7);
        }
        FUN_1446f470e(&local_70,puVar6,1);
        FUN_14493e38c(uVar3,local_70);
        lVar7 = lVar7 + 0x10;
      } while (lVar8 * 0x10 != lVar7);
    }
  }
  local_98[2] = 0;
  uStack_80 = 0;
  FUN_1406fa324(local_98 + 2,*(longlong *)(param_1 + 0x60) + 8);
  lVar1 = local_98[2];
  local_98[0] = 0;
  local_98[1] = 0;
  lVar8 = (longlong)(int)uStack_80;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar1 + lVar7);
      local_a0 = uVar3;
      plVar4 = (longlong *)FUN_1412feae2();
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
      if (lVar5 == 0) {
        FUN_1400021e4(&local_a0,&local_c0);
        puVar6 = local_c0;
        if (local_b8 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_b0,L"\'%s\' ",puVar6);
        iVar2 = local_a8 + -1;
        if (local_a8 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(local_98,local_b0,iVar2);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_98[2] != 0) {
    FUN_1400020a8(local_98[2]);
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b5d5c FUN_1461b5d5c body=44 status=ok
// SIG undefined FUN_1461b5d5c(void)

void FUN_1461b5d5c(longlong *param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_1 + 0x28))();
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
    return;
  }
  return;
}



// FUNCTION 1461b5d88 FUN_1461b5d88 body=215 status=ok
// SIG undefined FUN_1461b5d88(void)

void FUN_1461b5d88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_6e;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1 + -0xf8;
  if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_60 = FUN_145ada2bc();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  lVar1 = FUN_14009d2a0();
  local_70 = *(undefined2 *)(lVar1 + 0x126);
  local_6e = 0;
  local_78 = &PTR_FUN_14a4995a0;
  lVar1 = FUN_14009d2a0();
  FUN_1461b5e60(&local_78,local_58,*(undefined2 *)(lVar1 + 0xfa),&local_68);
  FUN_1461b5f4e(param_4,local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b5e60 FUN_1461b5e60 body=148 status=ok
// SIG undefined FUN_1461b5e60(void)

undefined8 *
FUN_1461b5e60(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined1 local_40 [16];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  FUN_1461b5ef6(local_40,param_4);
  local_30 = 1;
  uVar1 = *(undefined1 *)(param_1 + 10);
  *param_2 = &PTR_FUN_14a4c3420;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 2) = local_48;
  *(undefined1 *)(param_2 + 5) = 1;
  FUN_145c3329e(param_2 + 3,local_40);
  *(undefined1 *)(param_2 + 6) = uVar1;
  *param_2 = &PTR_FUN_14a4c7340;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b5ef6 FUN_1461b5ef6 body=88 status=ok
// SIG undefined FUN_1461b5ef6(void)

longlong * FUN_1461b5ef6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1461b5f4e FUN_1461b5f4e body=335 status=ok
// SIG undefined FUN_1461b5f4e(void)

void FUN_1461b5f4e(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined6 uStack_4e;
  undefined8 uStack_48;
  undefined8 local_40;
  char cStack_38;
  undefined7 uStack_37;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0xff;
  local_60 = &PTR_FUN_14a4c3420;
  uStack_58 = CONCAT22(uStack_58._2_2_,*(undefined2 *)(param_2 + 8));
  local_50 = *(undefined2 *)(param_2 + 0x10);
  cStack_38 = *(char *)(param_2 + 0x28);
  if (cStack_38 == '\x01') {
    FUN_145c3329e(&uStack_48,param_2 + 0x18);
  }
  local_30 = *(undefined1 *)(param_2 + 0x30);
  local_60 = &PTR_FUN_14a4c7340;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_20 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_20 & 2;
    *(ulonglong *)(puVar1 + 0xc) = CONCAT71(uStack_2f,local_30);
    *(undefined8 *)(puVar1 + 0xe) = uStack_28;
    *(undefined8 *)(puVar1 + 8) = local_40;
    *(ulonglong *)(puVar1 + 10) = CONCAT71(uStack_37,cStack_38);
    *(ulonglong *)(puVar1 + 4) = CONCAT62(uStack_4e,local_50);
    *(undefined8 *)(puVar1 + 6) = uStack_48;
    *puVar1 = (undefined4)local_60;
    puVar1[1] = local_60._4_4_;
    puVar1[2] = uStack_58;
    puVar1[3] = uStack_54;
    local_20 = local_20 & 0xfe;
  }
  if ((local_20 & 1) != 0) {
    ppuVar4 = local_60;
    if ((local_20 & 2) != 0) {
      ppuVar4 = (undefined **)&local_60;
    }
    local_20 = local_20 & 0xfe;
    (**(code **)*ppuVar4)(ppuVar4,0);
    if ((local_20 & 2) == 0) {
      FUN_1400020a8(local_60);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b609e FUN_1461b609e body=96 status=ok
// SIG undefined FUN_1461b609e(void)

ulonglong FUN_1461b609e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461b60e1:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1461b60e1;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1461b60fe FUN_1461b60fe body=154 status=ok
// SIG undefined FUN_1461b60fe(void)

void FUN_1461b60fe(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    FUN_140cc68fa(param_2);
    lVar4 = *(longlong *)(param_2 + 0x6a8);
    plVar3 = *(longlong **)(param_2 + 0x6b0);
    if (plVar3 == (longlong *)0x0) {
      lVar4 = FUN_14479d2ce(lVar4 + 0x60);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar4 = FUN_14479d2ce(lVar4 + 0x60);
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
    if (lVar4 == param_3) {
      FUN_1457a33b2(param_1);
      FUN_1461b6198(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1461b6198 FUN_1461b6198 body=266 status=ok
// SIG undefined FUN_1461b6198(void)

void FUN_1461b6198(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
      lVar5 = (longlong)*(int *)(param_1 + 0x98) << 3;
      do {
        cVar3 = FUN_14069eaf4(lVar4,param_2);
        if (cVar3 != '\0') {
          if (lVar4 != 0) goto LAB_1461b624d;
          break;
        }
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
      FUN_1461b6330(param_1 + 0x90,iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,param_2);
    FUN_1458242b0(local_38,param_1,FUN_1457a58b2);
    FUN_14490d954(param_2 + 0x2b8,local_40,local_38);
    FUN_1449db362(local_38);
    FUN_1461b62a4(param_1);
  }
LAB_1461b624d:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b62a4 FUN_1461b62a4 body=140 status=ok
// SIG undefined FUN_1461b62a4(void)

void FUN_1461b62a4(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(longlong *)(param_1 + 0xa8) == 0) ||
      (cVar2 = FUN_144729dda(param_1 + 0xa0), cVar2 == '\0')) &&
     ((longlong)*(int *)(param_1 + 0x98) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar5 = (longlong)*(int *)(param_1 + 0x98) << 3;
    do {
      lVar3 = FUN_14479d2ce(lVar4);
      if (lVar3 != 0) {
        uVar1 = FUN_140d80eca();
        lVar3 = FUN_144718840(lVar3,uVar1);
        if (lVar3 != 0) {
          FUN_140d7ffec(param_1,lVar3);
          return;
        }
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1461b6330 FUN_1461b6330 body=132 status=ok
// SIG undefined FUN_1461b6330(void)

void FUN_1461b6330(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461b63b4 FUN_1461b63b4 body=53 status=ok
// SIG undefined FUN_1461b63b4(void)

void FUN_1461b63b4(longlong *param_1)

{
  FUN_14162f032();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461b63ea FUN_1461b63ea body=1166 status=ok
// SIG undefined FUN_1461b63ea(void)

ulonglong FUN_1461b63ea(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *****pppppuVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 local_94;
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ****local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(*param_1 + 0x18))();
  uVar7 = 0;
  lVar4 = FUN_140149a73(param_2,0);
  if (lVar4 == 0) goto LAB_1461b6751;
  local_128._0_4_ = FUN_14574753c(lVar4);
  plVar5 = (longlong *)FUN_140d17acc(lVar4);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
    goto LAB_1461b6751;
  }
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b42e690;
  plVar9 = plVar6 + 2;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b42e6a8;
  plVar6[5] = (longlong)param_1;
  local_120 = SUB84(plVar6,0);
  uStack_11c = (undefined4)((ulonglong)plVar6 >> 0x20);
  local_128 = plVar9;
  FUN_1461b687a(&local_128,plVar9);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x2b] = 0x10;
    plVar9 = (longlong *)param_1[0x2c];
    if (plVar9 != (longlong *)0x0) {
      param_1[0x2c] = 0;
LAB_1461b67a4:
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001461b67e2:
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x2b] = (longlong)plVar9;
    plVar9 = (longlong *)param_1[0x2c];
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar9 = plVar6;
        goto joined_r0x0001461b67e2;
      }
    }
    else {
      param_1[0x2c] = (longlong)plVar6;
      if (plVar9 != (longlong *)0x0) goto LAB_1461b67a4;
    }
  }
  plVar9 = (longlong *)CONCAT44(uStack_11c,local_120);
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
  (**(code **)(*plVar5 + 0x70))(plVar5,param_1[0x2b],(longlong)param_1 + 0x131);
  local_128._0_4_ = (uint)local_128 & 0xffffff00;
  local_128._4_4_ = 0;
  local_120 = 0;
  uStack_11c = 0;
  local_118 = 0;
  local_114 = 0;
  uStack_10c = 0;
  local_104 = 0;
  local_f8 = 0xc69c4000;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_97 = 1;
  local_95 = 0;
  local_94 = 0;
  local_138 = param_1 + 0x2a;
  local_130 = &local_128;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 10,0,*(undefined1 *)((longlong)param_1 + 0x131));
  local_138 = (longlong *)((longlong)param_1 + 0x154);
  local_130 = &local_128;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x11,0,*(undefined1 *)((longlong)param_1 + 0x131));
  lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,(int)param_1[0x2a]);
  param_1[0x28] = lVar4;
  lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined4 *)((longlong)param_1 + 0x154));
  param_1[0x29] = lVar4;
  local_90[0] = 0;
  local_68 = 0;
  FUN_1456bb102(local_90,param_2);
  FUN_1447c3578(param_1 + 0x18,local_60,local_90);
  fVar10 = (float)FUN_144a7b41a(local_60);
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar10;
  }
  *(float *)(param_1 + 0x27) = fVar11;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppppuVar8 = local_60;
    if (0x18 < local_48) {
      pppppuVar8 = (undefined8 *****)local_60[0];
    }
    (*pcVar3)(pppppuVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  FUN_144a5ac3a(local_90);
  local_90[0] = 0;
  local_68 = 0;
  FUN_1456bb102(local_90,param_2);
  FUN_1447c3578(param_1 + 0x1f,local_60,local_90);
  fVar10 = (float)FUN_144a7b41a(local_60);
  fVar11 = 0.0;
  if (0.0 <= fVar10) {
    fVar11 = fVar10;
  }
  *(float *)((longlong)param_1 + 0x134) = fVar11;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppppuVar8 = local_60;
    if (0x18 < local_48) {
      pppppuVar8 = (undefined8 *****)local_60[0];
    }
    (*pcVar3)(pppppuVar8);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  FUN_144a5ac3a(local_90);
  FUN_1409838b8(&local_128);
  uVar7 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
LAB_1461b6751:
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b687a FUN_1461b687a body=162 status=ok
// SIG undefined FUN_1461b687a(void)

void FUN_1461b687a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461b68b9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461b68b9;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461b68b9:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b6918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461b691c FUN_1461b691c body=212 status=ok
// SIG undefined FUN_1461b691c(void)

void FUN_1461b691c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar3 = FUN_140149a73(param_2,0);
    if (lVar3 != 0) {
      local_1c = FUN_14574753c(lVar3);
      plVar4 = (longlong *)FUN_140d17acc(lVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 0x158));
      }
    }
    *(undefined1 *)(param_1 + 0x131) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x160);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b6a02 FUN_1461b6a02 body=23 status=ok
// SIG undefined FUN_1461b6a02(void)

void FUN_1461b6a02(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b6a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461b6a1a FUN_1461b6a1a body=226 status=ok
// SIG undefined FUN_1461b6a1a(void)

longlong * FUN_1461b6a1a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463008c8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b6b02 FUN_1461b6b02 body=132 status=ok
// SIG undefined FUN_1461b6b02(void)

undefined1 * FUN_1461b6b02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PosScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1461b6afe;
}



// FUNCTION 1461b6b86 FUN_1461b6b86 body=138 status=ok
// SIG undefined FUN_1461b6b86(void)

code * FUN_1461b6b86(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461b6b02;
}



// FUNCTION 1461b6c10 FUN_1461b6c10 body=144 status=ok
// SIG undefined FUN_1461b6c10(void)

bool FUN_1461b6c10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b6cac FUN_1461b6cac body=517 status=ok
// SIG undefined FUN_1461b6cac(void)

undefined8 * FUN_1461b6cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145887268();
  *param_1 = &PTR_FUN_14ac1f0c0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (*(int *)(param_1 + 10) != 3) {
      FUN_1446efa72(param_1 + 9,0,3,0x10);
      *(undefined4 *)(param_1 + 10) = 3;
    }
    puVar1 = (undefined8 *)param_1[9];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25b60;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f03248;
    if (*(int *)(param_1 + 0xc) != 3) {
      FUN_1446efa72(param_1 + 0xb,0,3,0x10);
      *(undefined4 *)(param_1 + 0xc) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25b60;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f0333a;
    if (*(int *)(param_1 + 0xe) != 3) {
      FUN_1446efa72(param_1 + 0xd,0,3,0x10);
      *(undefined4 *)(param_1 + 0xe) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xd];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25b60;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = &LAB_147f0343a;
  }
  return param_1;
}



// FUNCTION 1461b6ebc FUN_1461b6ebc body=517 status=ok
// SIG undefined FUN_1461b6ebc(void)

undefined8 * FUN_1461b6ebc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145887268();
  *param_1 = &PTR_FUN_14ac20dc0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (*(int *)(param_1 + 10) != 3) {
      FUN_1446efa72(param_1 + 9,0,3,0x10);
      *(undefined4 *)(param_1 + 10) = 3;
    }
    puVar1 = (undefined8 *)param_1[9];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25e10;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f05ef2;
    if (*(int *)(param_1 + 0xc) != 3) {
      FUN_1446efa72(param_1 + 0xb,0,3,0x10);
      *(undefined4 *)(param_1 + 0xc) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25e10;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f05fce;
    if (*(int *)(param_1 + 0xe) != 3) {
      FUN_1446efa72(param_1 + 0xd,0,3,0x10);
      *(undefined4 *)(param_1 + 0xe) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xd];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar1[2] = lVar3;
    *puVar1 = &PTR_FUN_14ac25e10;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = &LAB_147f060c0;
  }
  return param_1;
}



// FUNCTION 1461b70c2 FUN_1461b70c2 body=818 status=ok
// SIG undefined FUN_1461b70c2(void)

void FUN_1461b70c2(longlong param_1,undefined4 param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c872bf2 == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x7a8);
    if (lVar8 == 0) {
      uVar5 = FUN_141030812();
      lVar8 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x7a8) = lVar8;
    }
    plVar1 = (longlong *)(param_1 + 0x7a0);
    lVar9 = *(longlong *)(param_1 + 0x7b0);
    if (lVar9 == 0) {
      if ((lVar8 != 0) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0x7b0) = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar9 = FUN_144aff482(uVar5,plVar1);
          *(longlong *)(param_1 + 0x7b0) = lVar9;
          if (lVar9 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x7a8);
            goto LAB_1461b7219;
          }
        }
      }
    }
    else {
LAB_1461b7219:
      if (lVar8 == 0) {
        uVar5 = FUN_141030812();
        lVar8 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x7a8) = lVar8;
        lVar9 = *(longlong *)(param_1 + 0x7b0);
        if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar9 = FUN_144aff482(uVar5,plVar1);
          }
          *(longlong *)(param_1 + 0x7b0) = lVar9;
        }
      }
      puVar6 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(lVar9 + 8);
      }
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_1400b2348(puVar6,&local_58,1);
      puVar7 = local_58;
      if ((int)uStack_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      iVar4 = FUN_144a8a8b6(puVar7,"grasslands");
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar4 != 0) goto LAB_1461b71b9;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x7e0) == 0) {
    cVar3 = '\x01';
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x7d8);
    lVar9 = (longlong)*(int *)(param_1 + 0x7e0) * 0x10;
    do {
      lVar9 = lVar9 + -0x10;
      cVar3 = FUN_1461b7448(lVar8,param_2);
      if (cVar3 != '\0') break;
      lVar8 = lVar8 + 0x10;
    } while (lVar9 != 0);
  }
  if ((*(char *)(param_1 + 0x7e8) == cVar3 & (param_3 ^ 1)) == 0) {
    *(char *)(param_1 + 0x7e8) = cVar3;
    if (param_3 == 0) {
      uVar10 = 0;
      if (cVar3 != '\0') {
        uVar10 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x7f4);
      *(undefined4 *)(param_1 + 0x7f0) = uVar10;
      *(undefined2 *)(param_1 + 0x804) = 1;
      *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_1 + 2000);
      *(undefined8 *)(param_1 + 0x7fc) = 1;
      FUN_1407606b4(param_1 + 0x7ec,0);
      *(undefined1 *)(param_1 + 0x805) = 1;
    }
    else {
      if (cVar3 == '\0') {
        local_5c = 0;
      }
      else {
        local_5c = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x7ec) = local_5c;
      *(undefined4 *)(param_1 + 0x7f0) = local_5c;
      *(undefined4 *)(param_1 + 0x7f4) = local_5c;
      *(undefined8 *)(param_1 + 0x7f8) = 0;
      *(undefined8 *)(param_1 + 0x7fd) = 0;
      *(undefined1 *)(param_1 + 0x805) = 1;
      local_68 = &DAT_3f8000003f800000;
      local_60 = 0x3f800000;
      FUN_1461b73f6(param_1);
    }
  }
LAB_1461b71b9:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b73f6 FUN_1461b73f6 body=82 status=ok
// SIG undefined FUN_1461b73f6(void)

void FUN_1461b73f6(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*param_2 == *(float *)(param_1 + 0x6b8)) &&
        (!NAN(*param_2) && !NAN(*(float *)(param_1 + 0x6b8)))) &&
       (param_2[1] == *(float *)(param_1 + 0x6bc))) &&
      ((!NAN(param_2[1]) && !NAN(*(float *)(param_1 + 0x6bc)) &&
       (param_2[2] == *(float *)(param_1 + 0x6c0))))) &&
     (!NAN(param_2[2]) && !NAN(*(float *)(param_1 + 0x6c0)))) {
    if ((param_2[3] == *(float *)(param_1 + 0x6c4)) &&
       (!NAN(param_2[3]) && !NAN(*(float *)(param_1 + 0x6c4)))) {
      return;
    }
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x6b8) = *param_2;
  *(float *)(param_1 + 0x6bc) = fVar1;
  *(float *)(param_1 + 0x6c0) = fVar2;
  *(float *)(param_1 + 0x6c4) = fVar3;
  FUN_1407631e0();
  return;
}



// FUNCTION 1461b7448 FUN_1461b7448 body=155 status=ok
// SIG undefined FUN_1461b7448(void)

byte FUN_1461b7448(char *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  char local_10 [4];
  float local_c;
  char local_8 [4];
  float local_4;
  
  local_8[0] = '\x01';
  local_4 = param_2;
  cVar2 = *param_1;
  if (cVar2 != '\x02') {
    fVar1 = *(float *)(param_1 + 4);
    pcVar3 = param_1;
    if (param_2 <= fVar1) {
      if (fVar1 <= param_2) {
        pcVar3 = local_8;
        if (cVar2 == '\x01') {
          pcVar3 = param_1;
        }
      }
      else {
        pcVar3 = local_8;
      }
    }
    if (*pcVar3 != cVar2) {
      return 0;
    }
    if (*(float *)(pcVar3 + 4) != fVar1) {
      return 0;
    }
    if (NAN(*(float *)(pcVar3 + 4)) || NAN(fVar1)) {
      return 0;
    }
  }
  local_10[0] = '\x01';
  local_c = param_2;
  cVar2 = param_1[8];
  if (cVar2 == '\x02') {
    return 1;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  pcVar3 = param_1 + 8;
  if (((fVar1 <= param_2) && (pcVar3 = local_10, param_2 <= fVar1)) &&
     (pcVar3 = param_1 + 8, cVar2 != '\x01')) {
    pcVar3 = local_10;
  }
  if (*pcVar3 != cVar2) {
    return 0;
  }
  return -(fVar1 == *(float *)(pcVar3 + 4)) & 1;
}



// FUNCTION 1461b74e4 FUN_1461b74e4 body=21 status=ok
// SIG undefined FUN_1461b74e4(void)

undefined8 FUN_1461b74e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461b74fa FUN_1461b74fa body=141 status=ok
// SIG undefined FUN_1461b74fa(void)

void FUN_1461b74fa(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1461b7588();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x38);
    if (cVar2 != '\0') {
      uVar1 = FUN_14479d2ce(param_1 + 0x38);
      uVar1 = FUN_140d27a2a(uVar1);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(uVar1);
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_146071882(param_1,0);
  FUN_140c125e6(*(longlong *)(param_1 + 0x30) + 0xd98,&DAT_14cbd9480);
  FUN_145a08c52(param_1,0,0);
  FUN_145a08e78(param_1,0,0);
  return;
}



// FUNCTION 1461b7588 FUN_1461b7588 body=61 status=ok
// SIG undefined FUN_1461b7588(void)

void FUN_1461b7588(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x6c8))();
  if (cVar1 != '\0') {
    FUN_145a08c52(param_1,0,0);
    FUN_141191d9a(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1461b75c6 FUN_1461b75c6 body=172 status=ok
// SIG undefined FUN_1461b75c6(void)

void FUN_1461b75c6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [45];
  undefined1 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x38);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x38);
      lVar3 = FUN_140d27a2a(uVar2);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14480f766(lVar3 + 0x18);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar3 = FUN_146071a56(param_1);
  if (lVar3 != 0) {
    FUN_148e077c0(lVar3);
  }
  local_19 = 0;
  local_1b = 0;
  FUN_14572e6ac(*(undefined8 *)(param_1 + 0x30));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b767c FUN_1461b767c body=1158 status=ok
// SIG undefined FUN_1461b767c(void)

longlong * FUN_1461b767c(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14585467a();
  *param_1 = (longlong)&PTR_FUN_14ba1d010;
  param_1[5] = (longlong)&PTR_FUN_14ba1d3f0;
  param_1[0x13] = (longlong)&PTR_FUN_14ba1d410;
  param_1[0x24] = (longlong)&PTR_FUN_14ba1d440;
  param_1[0x25] = (longlong)&PTR_FUN_14ba1d460;
  param_1[0x26] = (longlong)&PTR_FUN_14ba1d480;
  *(undefined1 *)((longlong)param_1 + 0x139) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  memset(param_1 + 0x28,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_144a5dc74(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x5b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x5c] = lVar1;
  param_1[0x5d] = DAT_14c8464f0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x62] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[99] = lVar1;
  param_1[100] = DAT_14c8464f0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0x3ff0000000000000;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x69] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x6a] = lVar1;
  param_1[0x6b] = DAT_14c8464f0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x73] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0x3ff0000000000000;
  param_1[0x77] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x75] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x76] = lVar1;
  param_1[0x7a] = DAT_14c846520;
  lVar1 = DAT_14c846518;
  param_1[0x78] = DAT_14c846510;
  param_1[0x79] = lVar1;
  param_1[0x7d] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0x3ff0000000000000;
  param_1[0x81] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7f] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x80] = lVar1;
  lVar1 = DAT_14c846518;
  param_1[0x82] = DAT_14c846510;
  param_1[0x83] = lVar1;
  param_1[0x84] = DAT_14c846520;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x85] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x86] = lVar1;
  param_1[0x87] = DAT_14c8464f0;
  param_1[0x8a] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x92] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x90] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x91] = lVar1;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  param_1[0x9d] = -0x4010000000000000;
  param_1[0xa0] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x9e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x9f] = lVar1;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0x3ff0000000000000;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xa5) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = uVar2;
  *(undefined4 *)(param_1 + 0xa6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x534) = uVar4;
  param_1[0xa7] = DAT_14c8464f0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0x3ff0000000000000;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0x7fefffffffffffff;
  param_1[0xaf] = 0x7fefffffffffffff;
  param_1[0xb0] = 0x7fefffffffffffff;
  param_1[0xb1] = -0x10000000000001;
  param_1[0xb2] = -0x10000000000001;
  param_1[0xb3] = -0x10000000000001;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  FUN_1461b7b04(param_1 + 0xb7);
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8bc) = 0;
  param_1[0x118] = 0;
  param_1[0x11a] = 0;
  local_50 = L"EditMeshPolygonsToolName";
  local_48 = 0x18;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UEditMeshPolygonsTool";
  local_48 = 0x15;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"PolyGroup Edit");
  (**(code **)(*param_1 + 0x370))(param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b7b04 FUN_1461b7b04 body=419 status=ok
// SIG undefined FUN_1461b7b04(void)

void FUN_1461b7b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af17ce0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return;
}



// FUNCTION 1461b7ca8 FUN_1461b7ca8 body=147 status=ok
// SIG undefined FUN_1461b7ca8(void)

void FUN_1461b7ca8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 == (longlong *)0x0) goto LAB_1461b7cd9;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB_1461b7d03:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461b7cd9;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x48) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1461b7cd9;
      goto LAB_1461b7d03;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461b7cd9;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1461b7cd9:
                    /* WARNING: Could not recover jumptable at 0x0001461b7ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  return;
}



// FUNCTION 1461b7d3c FUN_1461b7d3c body=95 status=ok
// SIG undefined FUN_1461b7d3c(void)

void FUN_1461b7d3c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      FUN_1461b7d9c(*(undefined8 *)(lVar2 + 0x10 + lVar3));
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  FUN_14123806c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001461b7d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1461b7d9c FUN_1461b7d9c body=49 status=ok
// SIG undefined FUN_1461b7d9c(void)

void FUN_1461b7d9c(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  FUN_14162f59a(param_1);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b7dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1461b7dce FUN_1461b7dce body=182 status=ok
// SIG undefined FUN_1461b7dce(void)

void FUN_1461b7dce(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461b7e86(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b7e86 FUN_1461b7e86 body=213 status=ok
// SIG undefined FUN_1461b7e86(void)

void FUN_1461b7e86(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148d2ee82(param_2,0);
  }
  iVar1 = *(int *)(param_1 + 0x7b8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x7b0);
    lVar5 = 0;
    do {
      local_48 = *(undefined8 *)(lVar3 + lVar5);
      lVar4 = FUN_14479d2ce(&local_48);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0xf48), lVar4 != 0)) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_148ccb356(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b7f5c FUN_1461b7f5c body=2271 status=ok
// SIG undefined FUN_1461b7f5c(void)

void FUN_1461b7f5c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined1 local_e8 [4];
  int local_e4;
  byte *local_e0;
  longlong *local_d8;
  longlong local_d0;
  byte *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong **local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar14 = *(longlong *)(param_1 + 0x168);
  if (lVar14 == 0) goto LAB_1461b860c;
  lVar13 = FUN_144a5dd5e();
  lVar14 = *(longlong *)(lVar14 + 0x10);
  iVar18 = *(int *)(lVar13 + 0x38);
  if ((*(int *)(lVar14 + 0x38) < iVar18) ||
     (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar18 * 8) != lVar13 + 0x30))
  goto LAB_1461b860c;
  FUN_14119e5ee(param_1,CONCAT71((int7)(int3)((uint)iVar18 >> 8),1));
  if (*(char *)(param_1 + 0xce9) == '\0') {
    FUN_14119eb2c(param_1,1);
  }
  cVar9 = *(char *)(param_1 + 0x178);
  FUN_145eef868(param_1,cVar9 == '\x03',1);
  *(undefined4 *)(param_1 + 0xce0) = 0;
  local_b0 = &local_70;
  local_b8 = FUN_140036a08;
  lVar14 = FUN_144a773aa(&local_b8,&DAT_14c7585d0);
  local_b8 = (code *)(lVar14 + 0x10);
  local_b0 = *(longlong ***)(lVar14 + 0x10);
  local_a8 = *(longlong *)(lVar14 + 0x20);
  local_a0 = '\0';
  local_98 = *(undefined8 *)(lVar14 + 0x28);
  *(code ***)(lVar14 + 0x28) = &local_b8;
  *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
  lVar14 = FUN_14011c349();
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd02f0);
    local_90 = DAT_14cbd02e8;
    FUN_1448075d0(&local_70);
    puVar15 = (undefined8 *)FUN_144a06846(param_2,&local_70);
    local_c8 = (byte *)*puVar15;
    local_c0 = (longlong *)puVar15[1];
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((local_c8 != (byte *)0x0) && ((~*local_c8 & 3) == 0)) {
      local_d0 = param_1;
      FUN_14119f9c2(param_1);
      uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd0398);
      local_90 = (byte *)DAT_14cbd0390;
      FUN_1448075d0(&local_70);
      puVar15 = (undefined8 *)FUN_144a06846(&local_c8,&local_70);
      pbVar6 = (byte *)*puVar15;
      plVar19 = (longlong *)puVar15[1];
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 3) == 2)) {
        lVar13 = (longlong)(int)(*(longlong **)(pbVar6 + 8))[2];
        if (lVar13 != 0) {
          lVar20 = **(longlong **)(pbVar6 + 8);
          lVar13 = lVar13 << 4;
          do {
            uVar10 = FUN_140e1edd4(lVar20,0);
            if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0xd08))) {
              lVar17 = *(longlong *)(param_1 + 0xd00);
              if (*(longlong *)(param_1 + 0xd00) == 0) {
                lVar17 = param_1 + 0xcf0;
              }
              bVar8 = (byte)uVar10 & 0x1f;
              puVar4 = (uint *)(lVar17 + (ulonglong)(uVar10 >> 5) * 4);
              *puVar4 = *puVar4 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
            }
            lVar20 = lVar20 + 0x10;
            lVar13 = lVar13 + -0x10;
          } while (lVar13 != 0);
        }
      }
      uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd0308);
      local_90 = (byte *)DAT_14cbd0300;
      FUN_1448075d0(&local_70);
      uVar16 = FUN_144a06846(&local_c8,&local_70);
      FUN_14158a13a(param_1,uVar16);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (cVar9 == '\x03') {
        local_70 = *(longlong **)(lVar14 + 0x48);
        lVar14 = FUN_140255092(param_1);
        if (lVar14 != 0) {
          uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd03b0);
          local_90 = DAT_14cbd03a8;
          FUN_1448075d0(&local_70);
          puVar15 = (undefined8 *)FUN_144a06846(&local_c8,&local_70);
          local_e0 = (byte *)*puVar15;
          local_d8 = (longlong *)puVar15[1];
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
            UNLOCK();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((local_e0 != (byte *)0x0) && ((~*local_e0 & 3) == 0)) {
            uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd03c8);
            local_90 = DAT_14cbd03c0;
            FUN_1448075d0(&local_70);
            puVar15 = (undefined8 *)FUN_144a06846(&local_e0,&local_70);
            pbVar6 = (byte *)*puVar15;
            plVar7 = (longlong *)puVar15[1];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            if ((pbVar6 != (byte *)0x0) && ((~*pbVar6 & 3) == 0)) {
              lVar13 = *(longlong *)(pbVar6 + 8);
              plVar1 = (longlong *)(lVar13 + 0x18);
              plVar2 = (longlong *)(lVar13 + 0x30);
              local_90 = &DAT_100000000;
              local_80 = 0xffffffff;
              uStack_78 = 0;
              uStack_88 = plVar2;
              if (*(int *)(lVar13 + 0x48) == 0) {
                iVar18 = 0;
              }
              else {
                FUN_1449c0562(&local_90);
                iVar18 = *(int *)(lVar13 + 0x48);
              }
              uStack_50 = CONCAT44(uStack_74,uStack_78);
              local_58 = local_80;
              lVar13 = local_58;
              local_68 = (undefined4)local_90;
              uStack_64 = local_90._4_4_;
              uStack_60 = (undefined4)uStack_88;
              uStack_5c = uStack_88._4_4_;
              local_58._4_4_ = (int)((ulonglong)local_80 >> 0x20);
              iVar11 = local_58._4_4_;
              local_f0 = plVar19;
              local_70 = plVar1;
              if ((local_58._4_4_ != iVar18) || (local_58 = lVar13, uStack_88 != plVar2)) {
                do {
                  local_58 = lVar13;
                  lVar13 = *local_70;
                  lVar20 = (longlong)iVar11 * 0x40;
                  local_90 = *(byte **)(lVar13 + 0x28 + lVar20);
                  uStack_88 = *(longlong **)(lVar13 + 0x30 + lVar20);
                  if (uStack_88 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(uStack_88 + 1) = (int)uStack_88[1] + 1;
                    UNLOCK();
                  }
                  FUN_1447325ac(lVar13 + lVar20,local_e8,1);
                  if (((0 < local_e4) && (local_90 != (byte *)0x0)) && ((*local_90 & 3) == 2)) {
                    FUN_14162fab2(&local_d0,&local_90,lVar14,local_e4 + -1);
                  }
                  plVar19 = uStack_88;
                  if (uStack_88 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = uStack_88 + 1;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)*plVar5 == 0) {
                      (**(code **)*uStack_88)(uStack_88);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar19 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar19 + 0x10))(plVar19);
                      }
                    }
                  }
                  local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
                  FUN_1449c0562(&local_68);
                  plVar19 = local_f0;
                  iVar11 = local_58._4_4_;
                  lVar13 = local_58;
                } while (local_70 != plVar1 ||
                         ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar2 ||
                         local_58._4_4_ != iVar18));
              }
            }
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
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
          plVar7 = local_d8;
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_d8)(local_d8);
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
      }
      uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cbd03e0);
      local_90 = (byte *)DAT_14cbd03d8;
      FUN_1448075d0(&local_70,&local_90);
      puVar15 = (undefined8 *)FUN_144a06846(&local_c8,&local_70);
      local_90 = (byte *)*puVar15;
      uStack_88 = (longlong *)puVar15[1];
      if (uStack_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_88 + 1) = (int)uStack_88[1] + 1;
        UNLOCK();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((local_90 != (byte *)0x0) && ((*local_90 & 3) != 0)) {
        if ((*local_90 & 3) == 3) {
          lVar14 = *(longlong *)(local_90 + 8);
          local_d8 = (longlong *)CONCAT44(local_d8._4_4_,DAT_14cbd03c8);
          local_e0 = DAT_14cbd03c0;
          FUN_1448075d0(&local_70);
          if (*(int *)(lVar14 + 0x28) != *(int *)(lVar14 + 0x54)) {
            lVar13 = lVar14 + 0x58;
            if (*(longlong *)(lVar14 + 0x60) != 0) {
              lVar13 = *(longlong *)(lVar14 + 0x60);
            }
            iVar18 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar14 + 0x68) - 1U & (uint)local_70) *
                                       4);
            if (iVar18 != -1) {
              do {
                lVar13 = *(longlong *)(lVar14 + 0x18) + (longlong)iVar18 * 0x40;
                if (*(uint *)(*(longlong *)(lVar14 + 0x18) + (longlong)iVar18 * 0x40) ==
                    (uint)local_70) goto LAB_1461b8763;
                iVar18 = *(int *)(lVar13 + 0x38);
              } while (iVar18 != -1);
            }
          }
          lVar13 = 0;
LAB_1461b8763:
          FUN_1446dcc2e(&local_90,lVar13 + 0x28);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (local_90 == (byte *)0x0) goto LAB_1461b8564;
        }
        if ((*local_90 & 3) != 0) {
          uVar12 = FUN_1459b76c0(0);
          uVar12 = FUN_140e1edd4(&local_90,uVar12);
          *(undefined4 *)(param_1 + 0xce0) = uVar12;
        }
      }
LAB_1461b8564:
      plVar7 = uStack_88;
      if (uStack_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_88)(uStack_88);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar19 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar3 = (int *)((longlong)plVar19 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    plVar19 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_c0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar3 = (int *)((longlong)plVar19 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0xcea) = 1;
  FUN_1447f69b6(param_1 + 0xd10);
  lVar14 = FUN_14129b2e6(param_1);
  if ((lVar14 != 0) && (cVar9 = FUN_14162faaa(lVar14), cVar9 != '\0')) {
    FUN_14036c744(&DAT_14cbd0ae8,param_1);
  }
  if (local_a0 == '\0') {
    local_a0 = '\x01';
    *(int *)(local_b8 + 0x20) = *(int *)(local_b8 + 0x20) + -1;
    if (local_a8 != *(longlong *)(local_b8 + 0x10)) {
      FUN_14004673c();
    }
    *(longlong ***)local_b8 = local_b0;
    *(undefined8 *)(local_b8 + 0x18) = local_98;
  }
LAB_1461b860c:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461b883c FUN_1461b883c body=93 status=ok
// SIG undefined FUN_1461b883c(void)

longlong FUN_1461b883c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1461b889a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1461b889a FUN_1461b889a body=436 status=ok
// SIG undefined FUN_1461b889a(void)

longlong * FUN_1461b889a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_14340d97a(*local_78 + (longlong)iVar6 * 0x40 + 8);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461b8a50 FUN_1461b8a50 body=40 status=ok
// SIG undefined FUN_1461b8a50(void)

undefined8 FUN_1461b8a50(undefined8 param_1,int param_2)

{
  FUN_14162fb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461b8a78 FUN_1461b8a78 body=132 status=ok
// SIG undefined FUN_1461b8a78(void)

void FUN_1461b8a78(longlong param_1,int param_2)

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



// FUNCTION 1461b8afc FUN_1461b8afc body=663 status=ok
// SIG undefined FUN_1461b8afc(void)

void FUN_1461b8afc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x288);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[7] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_2 + 10) = 1;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3f800000;
  *param_2 = &PTR_FUN_14ac71e00;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[0xc] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_2[0xf] = DAT_14c8464e0;
  param_2[0x10] = uVar1;
  param_2[0x11] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  uVar1 = DAT_14c846500;
  param_2[0x15] = DAT_14c8464f8;
  param_2[0x16] = uVar1;
  param_2[0x17] = DAT_14c846508;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  param_2[0x1d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x1b] = DAT_14c8464e0;
  param_2[0x1c] = uVar1;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  param_2[0x20] = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x1f] = &PTR_FUN_14a1a0a60;
  param_2[0x24] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x22] = DAT_14c8464e0;
  param_2[0x23] = uVar1;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0;
  *(undefined2 *)(param_2 + 0x27) = 0;
  uVar1 = DAT_14c846500;
  param_2[0x28] = DAT_14c8464f8;
  param_2[0x29] = uVar1;
  param_2[0x2a] = DAT_14c846508;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_2 + 0x15c) = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  param_2[0x30] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x2e] = DAT_14c8464e0;
  param_2[0x2f] = uVar1;
  *(undefined1 *)(param_2 + 0x31) = 0;
  param_2[0x33] = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  param_2[0x32] = &PTR_FUN_14a1a0270;
  param_2[0x37] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x35] = DAT_14c8464f8;
  param_2[0x36] = uVar1;
  *(undefined2 *)(param_2 + 0x38) = 0;
  param_2[0x3b] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x39] = DAT_14c8464f8;
  param_2[0x3a] = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e4) = 0;
  param_2[0x3f] = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  param_2[0x3e] = &PTR_FUN_14a1a0a60;
  param_2[0x43] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_2[0x41] = DAT_14c846510;
  param_2[0x42] = uVar1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)(param_2 + 0x46) = 0;
  uVar1 = DAT_14c846500;
  param_2[0x47] = DAT_14c8464f8;
  param_2[0x48] = uVar1;
  param_2[0x49] = DAT_14c846508;
  *(undefined4 *)(param_2 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  param_2[0x4f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x4d] = DAT_14c8464e0;
  param_2[0x4e] = uVar1;
  *(undefined1 *)(param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1461b8d94 FUN_1461b8d94 body=426 status=ok
// SIG undefined FUN_1461b8d94(void)

longlong FUN_1461b8d94(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined8 *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1461b8f46();
  lVar2 = FUN_1461b8f40(param_1);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
    FUN_148da7166(&local_58);
    *(ulonglong *)(param_1 + 0x58) = CONCAT71(uStack_57,local_58);
    lVar2 = FUN_1461b8f40(param_1);
    if ((longlong)*(int *)(lVar2 + 0x40) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
          if (*(longlong *)(lVar1 + 0x398) != 0) {
            lVar2 = FUN_140082f10();
            if ((((*(longlong *)(lVar1 + 0x398) != 0) && (lVar2 != 0)) &&
                (lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x398) + 0x10), lVar4 != 0)) &&
               ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                 == lVar2 + 0x30)))) {
              lVar2 = FUN_1403b0700();
              local_60 = *(undefined8 *)(lVar2 + 0x38);
              FUN_1400021e4(&local_60,&local_30);
              local_58 = 0;
              local_50 = 0;
              uStack_48 = 0;
              local_40 = 0;
              puVar3 = local_30;
              if ((int)local_28 == 0) {
                puVar3 = (undefined8 *)&DAT_149dfb77a;
              }
              FUN_140c3a228(&local_58,puVar3);
              local_38 = 2;
              local_34 = 0xffffffff;
              if (local_30 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              local_30 = &DAT_14cbcea00;
              local_28 = &local_58;
              FUN_145b208b6(param_2 + 0x38,&local_60,&local_30,0);
              FUN_140c3a2ac(&local_58);
            }
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461b8f40 FUN_1461b8f40 body=5 status=ok
// SIG undefined FUN_1461b8f40(void)

undefined8 FUN_1461b8f40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1461b8f46 FUN_1461b8f46 body=207 status=ok
// SIG undefined FUN_1461b8f46(void)

longlong FUN_1461b8f46(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ad316c(param_2);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  *(undefined1 *)(param_2 + 0x11) = 1;
  local_70[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_14156954a(local_70,1);
  local_50 = 0;
  local_4c = 0xffffffff;
  FUN_1446f470e(local_78,L"CUSTOMSEARCHINT1",1);
  local_48 = local_78;
  local_40 = local_70;
  FUN_1461b9016(param_2 + 0x38,local_34);
  FUN_140c3a2ac(local_70);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b9016 FUN_1461b9016 body=363 status=ok
// SIG undefined FUN_1461b9016(void)

undefined4 * FUN_1461b9016(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b20af2(param_1,local_40);
  lVar6 = param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  FUN_14162fd88(local_38 + 1,lVar6);
  local_38[5] = *(undefined8 *)(lVar6 + 0x20);
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_145b20a28(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145b20bd6(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b9182 FUN_1461b9182 body=175 status=ok
// SIG undefined FUN_1461b9182(void)

bool FUN_1461b9182(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b9240 FUN_1461b9240 body=76 status=ok
// SIG undefined FUN_1461b9240(void)

void FUN_1461b9240(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14[0] = param_2;
  local_10 = param_3;
  local_c = param_4;
  FUN_1447cd2ec(param_1 + 0xa0,local_14);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b928e FUN_1461b928e body=63 status=ok
// SIG undefined FUN_1461b928e(void)

void FUN_1461b928e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1461b92ce(param_1);
    FUN_141355cf6(param_1);
    return;
  }
  FUN_141355cf6(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140d4be48(param_1);
  return;
}



// FUNCTION 1461b92ce FUN_1461b92ce body=335 status=ok
// SIG undefined FUN_1461b92ce(void)

void FUN_1461b92ce(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1461b941e FUN_1461b941e body=62 status=ok
// SIG undefined FUN_1461b941e(void)

void FUN_1461b941e(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0xa9) = 1;
  FUN_1461b945c(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xf0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x0001461b9459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2f8))(plVar1,1);
  return;
}



// FUNCTION 1461b945c FUN_1461b945c body=203 status=ok
// SIG undefined FUN_1461b945c(void)

void FUN_1461b945c(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [44];
  undefined1 local_15c [11];
  undefined1 local_151;
  longlong local_150;
  ulonglong *local_148;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_150,lVar2,0);
    local_151 = 9;
    puVar1 = (undefined1 *)*local_148 + 1;
    if ((undefined1 *)local_148[1] < puVar1) {
      (**(code **)(local_150 + 0x170))(&local_150,&local_151,1);
    }
    else {
      local_151 = *(undefined1 *)*local_148;
      *local_148 = (ulonglong)puVar1;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_15c,&local_150,1);
    FUN_1449daebe(&local_150);
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b9528 FUN_1461b9528 body=478 status=ok
// SIG undefined FUN_1461b9528(void)

void FUN_1461b9528(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e5018;
  plVar3 = (longlong *)param_1[0x2e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1461b9706(param_1 + 0x23);
  plVar3 = (longlong *)param_1[0x21];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar3 = (longlong *)param_1[0x1f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x14);
  FUN_1449db362(param_1 + 0x12);
  FUN_1449db362(param_1 + 0x10);
  FUN_1449db362(param_1 + 0xe);
  FUN_1449db362(param_1 + 0xc);
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b9702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461b9706 FUN_1461b9706 body=54 status=ok
// SIG undefined FUN_1461b9706(void)

void FUN_1461b9706(longlong param_1)

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



// FUNCTION 1461b973c FUN_1461b973c body=237 status=ok
// SIG undefined FUN_1461b973c(void)

longlong * FUN_1461b973c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x2b0,0x10);
  FUN_1461b982a(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f01bf0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_1461b97c7;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_1461b97c7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_1461b97c7:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1461b982a FUN_1461b982a body=439 status=ok
// SIG undefined FUN_1461b982a(void)

undefined8 * FUN_1461b982a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x80;
  *(undefined4 *)(puVar3 + 6) = 0xffffffff;
  local_50 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f01bd0;
  plVar4[2] = (longlong)puVar3;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = plVar4;
  FUN_1461b99e2(param_1,&local_68,&local_50);
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
  *param_1 = &PTR_FUN_149f01b70;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 2;
  FUN_144a5dc74(param_1 + 0x43);
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b99e2 FUN_1461b99e2 body=1141 status=ok
// SIG undefined FUN_1461b99e2(void)

undefined8 * FUN_1461b99e2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f014e0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = *param_3;
  lVar6 = param_3[1];
  param_1[0xe] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x17] = *param_2;
  lVar6 = param_2[1];
  param_1[0x18] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar4 = param_1;
  param_1[0x1d] = puVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_149f04b50;
  puVar5[2] = puVar4;
  param_1[0x1e] = puVar5;
  *(uint *)(param_1 + 0x22) = 0;
  *(uint *)((longlong)param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0x23) = 0;
  *(uint *)((longlong)param_1 + 0x11c) = 0xffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  lVar6 = FUN_14001cc68(0xe8,0x10);
  FUN_1461b9e58(lVar6);
  param_1[0x2d] = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f04b70;
  plVar7[2] = lVar6;
  param_1[0x2e] = plVar7;
  if ((lVar6 != 0) &&
     (((*(longlong *)(lVar6 + 8) == 0 || (*(longlong *)(lVar6 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar6 + 0x10) + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      *(longlong *)(lVar6 + 8) = lVar6;
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) {
LAB_1461b9dce:
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        *(longlong **)(lVar6 + 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1461b9bcf;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong *)(lVar6 + 8) = lVar6;
      if (*(longlong **)(lVar6 + 0x10) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(lVar6 + 0x10);
        if (plVar8 != (longlong *)0x0) goto LAB_1461b9dce;
        *(longlong **)(lVar6 + 0x10) = plVar7;
      }
LAB_1461b9bcf:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 2;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = L"LocalWorkspaceRoot";
  local_68._0_4_ = 0x12;
  FUN_1446e940c(local_ac,&local_70);
  local_70 = L"TabManager";
  local_68 = (longlong *)CONCAT44(local_68._4_4_,10);
  FUN_1446e940c(local_b0,&local_70);
  FUN_140208bae(local_a8,local_b0,local_ac,L"Local Workspace Root");
  plVar7 = (longlong *)FUN_14001cc68(0x100,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f01ac0;
  pwVar1 = (wchar_t *)(plVar7 + 2);
  local_70 = (wchar_t *)0x0;
  local_b8 = 0;
  FUN_14162feac(pwVar1,&local_70,local_a8,&local_98);
  local_70 = pwVar1;
  local_68 = plVar7;
  FUN_1461b9ede(&local_70,pwVar1);
  if (plVar7 == (longlong *)0x0) {
    param_1[0x15] = 0x10;
    plVar8 = (longlong *)param_1[0x16];
    if (plVar8 == (longlong *)0x0) goto LAB_1461b9cfb;
    param_1[0x16] = 0;
LAB_1461b9d7c:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1461b9cfb;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar7 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    param_1[0x15] = pwVar1;
    plVar8 = (longlong *)param_1[0x16];
    if (plVar7 != plVar8) {
      param_1[0x16] = plVar7;
      if (plVar8 == (longlong *)0x0) goto LAB_1461b9cfb;
      goto LAB_1461b9d7c;
    }
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1461b9cfb;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1461b9cfb:
  plVar7 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461b9e58 FUN_1461b9e58 body=133 status=ok
// SIG undefined FUN_1461b9e58(void)

void FUN_1461b9e58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149efdd80;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1461b9ede FUN_1461b9ede body=162 status=ok
// SIG undefined FUN_1461b9ede(void)

void FUN_1461b9ede(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461b9f1d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461b9f1d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461b9f1d:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461b9f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461b9f80 FUN_1461b9f80 body=40 status=ok
// SIG undefined FUN_1461b9f80(void)

undefined8 FUN_1461b9f80(undefined8 param_1,int param_2)

{
  FUN_1461b9fa8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461b9fa8 FUN_1461b9fa8 body=493 status=ok
// SIG undefined FUN_1461b9fa8(void)

void FUN_1461b9fa8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b44d1e0;
  param_1[5] = &PTR_FUN_14b44d4f0;
  if (param_1[0x4d] != 0) {
    *(undefined8 *)(param_1[0x4d] + 0x18) = 0;
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 0x32);
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 1461ba196 FUN_1461ba196 body=38 status=ok
// SIG undefined FUN_1461ba196(void)

undefined8 FUN_1461ba196(undefined8 param_1,int param_2)

{
  FUN_1416301fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461ba1bc FUN_1461ba1bc body=54 status=ok
// SIG undefined FUN_1461ba1bc(void)

void FUN_1461ba1bc(void)

{
  FUN_1416303ee();
  if (DAT_14c950ce8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c950cc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461ba1f2 FUN_1461ba1f2 body=497 status=ok
// SIG undefined FUN_1461ba1f2(void)

void FUN_1461ba1f2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_40;
  int local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30 != 0;
  local_48 = local_2c;
  (**(code **)(*param_1 + 0xfc0))(param_1,&local_20,local_24,local_25);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ba3e4 FUN_1461ba3e4 body=266 status=ok
// SIG undefined FUN_1461ba3e4(void)

void FUN_1461ba3e4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  byte *param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined1 local_4c [33];
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = (&DAT_14c758c60)[param_5[2]];
  local_58 = (&DAT_14c758c60)[param_5[1]];
  local_54 = (&DAT_14c758c60)[*param_5];
  local_50 = (float)param_5[3] * 0.003921569;
  FUN_1461ba4f0(local_4c,param_3,param_4);
  local_2b = param_6;
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + 0x448);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
      FUN_140fa871e(lVar1,param_2,local_4c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ba4f0 FUN_1461ba4f0 body=36 status=ok
// SIG undefined FUN_1461ba4f0(void)

void FUN_1461ba4f0(undefined1 *param_1,undefined4 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[0x20] = 0;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x10) = *param_4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x21] = 0;
  return;
}



// FUNCTION 1461ba514 FUN_1461ba514 body=1137 status=ok
// SIG undefined FUN_1461ba514(void)

void FUN_1461ba514(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined1 local_89;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = FUN_145905bd0();
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x40) == 0)) {
    local_78 = *(undefined8 *)(lVar6 + 400);
    local_70 = *(undefined4 *)(lVar6 + 0x198);
    uStack_6c = *(undefined4 *)(lVar6 + 0x19c);
    lVar9 = *(longlong *)(lVar6 + 0x198);
    uStack_68 = *(undefined4 *)(lVar6 + 0x1a0);
    uStack_64 = *(undefined4 *)(lVar6 + 0x1a4);
    local_60 = (void *)0x0;
    local_58 = *(int *)(lVar6 + 0x1b0);
    lVar8 = (longlong)local_58;
    pvVar3 = *(void **)(lVar6 + 0x1a8);
    if (lVar8 != 0) {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,pvVar3,lVar8 * 2);
      lVar9 = CONCAT44(uStack_6c,local_70);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (lVar9 != 0) {
      lVar8 = FUN_14050fd64();
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar5 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_a0[2] = lVar7;
      *local_a0 = &PTR_FUN_14b5a4160;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      puVar5[4] = param_1;
      local_78 = *(undefined8 *)(lVar6 + 400);
      local_70 = *(undefined4 *)(lVar6 + 0x198);
      uStack_6c = *(undefined4 *)(lVar6 + 0x19c);
      uStack_68 = *(undefined4 *)(lVar6 + 0x1a0);
      uStack_64 = *(undefined4 *)(lVar6 + 0x1a4);
      local_60 = (void *)0x0;
      local_58 = *(int *)(lVar6 + 0x1b0);
      lVar9 = (longlong)local_58;
      pvVar3 = *(void **)(lVar6 + 0x1a8);
      if (lVar9 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar3,lVar9 * 2);
      }
      local_b0 = &local_89;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      FUN_140a1e0be(lVar8 + 0x1e8,&local_88,&local_70,&local_a0);
      plVar1 = local_80;
      if ((undefined8 *)(param_1 + 0x78) != &local_88) {
        *(undefined8 *)(param_1 + 0x78) = local_88;
        local_88 = 0;
        plVar4 = *(longlong **)(param_1 + 0x80);
        if (local_80 != plVar4) {
          local_80 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x80) = plVar1;
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
        }
      }
      plVar1 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1449db362(&local_a0);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (lVar9 == 0) goto LAB_1461ba676;
  lVar8 = FUN_1449db7f2();
  lVar9 = *(longlong *)(lVar9 + 0x10);
  if ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_1461ba676;
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (lVar9 == 0) {
LAB_1461ba71d:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1449db7f2();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_1461ba71d;
  }
  if ((*(longlong *)(lVar9 + 0x78) != 0) &&
     (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x78) + 0x80), lVar9 != 0)) {
    lVar8 = FUN_144a79464();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((lVar6 != 0 &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         == lVar8 + 0x30)))) {
      if (*(char *)(lVar6 + 0x1b8) == '\x01') {
        FUN_1461baa62(lVar9 + 0x2a8,&local_78,param_1,&LAB_148b65bea);
        *(undefined8 *)(param_1 + 0x68) = local_78;
      }
      else {
        FUN_1461baa62(lVar9 + 0x2c0,&local_78,param_1,&LAB_145cc8f18);
        *(undefined8 *)(param_1 + 0x60) = local_78;
      }
    }
  }
LAB_1461ba676:
  FUN_1461ba986(&local_78,param_1,&LAB_145b172ba);
  FUN_14126834e(&DAT_14cb10aa8,&local_88,&local_78);
  FUN_1401cb1ee(&local_78);
  *(undefined8 *)(param_1 + 0x50) = local_88;
  FUN_1461ba986(&local_78,param_1,&LAB_145b172c8);
  FUN_14126834e(&DAT_14cb10ae8,&local_88,&local_78);
  FUN_1401cb1ee(&local_78);
  *(undefined8 *)(param_1 + 0x58) = local_88;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ba986 FUN_1461ba986 body=220 status=ok
// SIG undefined FUN_1461ba986(void)

LPCRITICAL_SECTION FUN_1461ba986(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4240;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1461baa62 FUN_1461baa62 body=244 status=ok
// SIG undefined FUN_1461baa62(void)

undefined8
FUN_1461baa62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b5a41d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141285884(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bab58 FUN_1461bab58 body=241 status=ok
// SIG undefined FUN_1461bab58(void)

longlong * FUN_1461bab58(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b096300;
  plVar1 = plVar4 + 2;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b094a10;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1461bac4c(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bac4c FUN_1461bac4c body=157 status=ok
// SIG undefined FUN_1461bac4c(void)

void FUN_1461bac4c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461bac86;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461bac86;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461bac86:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461bace5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461bacea FUN_1461bacea body=95 status=ok
// SIG undefined FUN_1461bacea(void)

longlong FUN_1461bacea(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1461bad4a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1461bad4a FUN_1461bad4a body=439 status=ok
// SIG undefined FUN_1461bad4a(void)

longlong * FUN_1461bad4a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461baf02 FUN_1461baf02 body=242 status=ok
// SIG undefined FUN_1461baf02(void)

undefined8 FUN_1461baf02(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_2;
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == -1)) {
    local_28 = 0;
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) {
LAB_1461bafd5:
      plVar5 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar5[1];
      do {
        if (iVar4 == 0) goto LAB_1461bafd5;
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
    local_38 = 0;
    if (plVar5 != (longlong *)0x0) {
      local_38 = *param_1;
    }
    local_30 = plVar5;
    FUN_1461baff6(plVar2 + 4);
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
    local_48 = 8;
    FUN_14084a448(*param_2,&local_38,param_1[0x13],0);
    FUN_1409427a4(param_1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 1461baff6 FUN_1461baff6 body=292 status=ok
// SIG undefined FUN_1461baff6(void)

void FUN_1461baff6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14acb8d40;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14acb8cd0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_140b1ba30;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14acb8d40;
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
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14acb8cd0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_140b1ba30;
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
                    /* WARNING: Could not recover jumptable at 0x0001461bb105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461bb11a FUN_1461bb11a body=198 status=ok
// SIG undefined FUN_1461bb11a(void)

void FUN_1461bb11a(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x340))(param_1,&local_28);
  if (param_1 + 0x34 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x34] != 0) {
      FUN_1400020a8();
    }
    param_1[0x34] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0x35) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_1c;
  }
  iVar1 = (int)param_1[0x35] + -1;
  if ((int)param_1[0x35] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x36,param_1[0x34],iVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bb1e2 FUN_1461bb1e2 body=168 status=ok
// SIG undefined FUN_1461bb1e2(void)

undefined8 * FUN_1461bb1e2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_14030d4a0();
    lVar2 = *(longlong *)(param_1 + 0x58);
    if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      *param_2 = 0;
      iVar1 = *(int *)(lVar2 + 0x478);
      _Src = *(void **)(lVar2 + 0x470);
      *(int *)(param_2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return param_2;
      }
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      return param_2;
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1461bb28a FUN_1461bb28a body=168 status=ok
// SIG undefined FUN_1461bb28a(void)

undefined8 * FUN_1461bb28a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_14030d4a0();
    lVar2 = *(longlong *)(param_1 + 0x58);
    if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      *param_2 = 0;
      iVar1 = *(int *)(lVar2 + 0x468);
      _Src = *(void **)(lVar2 + 0x460);
      *(int *)(param_2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        return param_2;
      }
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      return param_2;
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1461bb332 FUN_1461bb332 body=365 status=ok
// SIG undefined FUN_1461bb332(void)

void FUN_1461bb332(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != iVar3) {
    FUN_1402191ca(param_1);
  }
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
    FUN_1402191ca(param_1,iVar3);
    iVar3 = *(int *)(param_2 + 1);
  }
  local_48 = (void *)0x0;
  pvVar1 = (void *)*param_2;
  local_40 = iVar3;
  if (iVar3 == 0) {
    local_3c = 0;
    iVar3 = 0;
  }
  else {
    FUN_1470eafd4(&local_48,iVar3,0);
    memcpy(local_48,pvVar1,(longlong)iVar3 * 0xc);
    iVar3 = local_40;
  }
  FUN_1461bb4a0(local_48,iVar3);
  pvVar1 = local_48;
  lVar2 = (longlong)local_40;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = *(undefined8 *)((longlong)pvVar1 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while (lVar2 * 0xc != lVar4);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461bb4a0 FUN_1461bb4a0 body=303 status=ok
// SIG undefined FUN_1461bb4a0(void)

void FUN_1461bb4a0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [36];
  uint local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2) {
    local_60 = (ulonglong)param_2;
    puVar9 = (undefined8 *)(param_1 + 0xc);
    lVar10 = 0;
    do {
      if (lVar10 + 1U < local_60) {
        puVar1 = (undefined8 *)((longlong)puVar9 + -0xc);
        fVar2 = *(float *)((longlong)puVar9 + -4);
        fVar3 = *(float *)(puVar9 + 1);
        if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
          if (fVar2 < fVar3) goto LAB_1461bb52e;
        }
        else {
          iVar7 = FUN_144a78538(puVar1,puVar9);
          if (iVar7 < 1) {
LAB_1461bb52e:
            local_50 = *(undefined4 *)((longlong)puVar9 + -4);
            local_58 = *puVar1;
            *(undefined4 *)((longlong)puVar9 + -4) = *(undefined4 *)(puVar9 + 1);
            *puVar1 = *puVar9;
            *(undefined4 *)(puVar9 + 1) = local_50;
            *puVar9 = local_58;
          }
        }
      }
      lVar10 = lVar10 + 2;
      puVar9 = puVar9 + 3;
    } while ((int)lVar10 < (int)param_2);
    if (2 < (int)param_2) {
      uVar8 = 2;
      do {
        uVar4 = uVar8 * 2;
        lVar11 = 0;
        lVar10 = param_1;
        uVar5 = param_2;
        local_64 = uVar4;
        do {
          uVar6 = uVar5;
          if ((int)uVar4 <= (int)uVar5) {
            uVar6 = uVar4;
          }
          FUN_1470eb047(lVar10,uVar8,uVar6);
          lVar11 = lVar11 + (int)uVar4;
          lVar10 = lVar10 + (longlong)(int)uVar4 * 0xc;
          uVar5 = uVar5 + uVar8 * -2;
        } while (lVar11 < (longlong)local_60);
        uVar8 = local_64;
      } while ((int)local_64 < (int)param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461bb5d0 FUN_1461bb5d0 body=1024 status=ok
// SIG undefined FUN_1461bb5d0(void)

ulonglong FUN_1461bb5d0(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  byte local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1461bb6ff;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      local_98 = *puVar13;
      uStack_94 = puVar13[1];
      uStack_90 = puVar13[2];
      uStack_8c = puVar13[3];
      FUN_1461bb9d2(local_88,puVar13 + 4);
      local_50 = *(byte *)(puVar13 + 0x12);
      FUN_1410d7556(param_1 + 0x18,&local_98);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50 + 0x30)])();
      FUN_1461bba4c(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar5 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar5);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x40) <= param_2)) {
        FUN_1475e53d8(param_1 + 0xa0);
      }
joined_r0x0001461bb9ad:
      if ((local_50 & 1) != 0) {
        FUN_1461bbac6(&local_98,local_88);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_68])();
      unaff_RBP = 0;
      goto LAB_1461bb6ff;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50) & 1) == 0)
    goto LAB_1461bb6ff;
    puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    if (0 < (int)uVar3) {
      uVar10 = 0;
      uVar11 = uVar3;
      do {
        uVar1 = (uVar11 >> 1) + uVar10;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x40) < param_2) {
          uVar10 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar10 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar10 * 0x40) <= param_2)) &&
       (lVar12 + (ulonglong)uVar10 * 0x40 != -8)) {
      FUN_1461bbac6((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar5 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x40) <= param_2)) {
        FUN_1475e53d8(param_1 + 0xa0);
      }
      goto LAB_1461bb6ff;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\0') {
      lVar12 = (longlong)param_2 * 0x50;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + lVar12);
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_98 = *puVar13;
        uStack_94 = puVar13[1];
        uStack_90 = puVar13[2];
        uStack_8c = puVar13[3];
        FUN_1461bb9d2(local_88,puVar13 + 4);
        local_50 = *(byte *)(puVar13 + 0x12);
        FUN_1410d7556(param_1 + 0x18,&local_98);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x30)])();
        FUN_1461bba4c(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar5 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar5);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x40) <= param_2)) {
          FUN_1475e53d8(param_1 + 0xa0);
        }
        goto joined_r0x0001461bb9ad;
      }
      if ((bVar2 & 1) == 0) goto LAB_1461bb6ff;
    }
    else {
      if (param_4 != '\x01') goto LAB_1461bb6ff;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar2 & 1) == 0) goto LAB_1461bb6ff;
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      *(byte *)(puVar13 + 0x12) = bVar2 | 2;
    }
  }
  FUN_1461bbac6(puVar13,puVar13 + 4);
LAB_1461bb6ff:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1461bb9d2 FUN_1461bb9d2 body=122 status=ok
// SIG undefined FUN_1461bb9d2(void)

longlong * FUN_1461bb9d2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = param_2[1];
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_1 + 4) = bVar1;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar1])(param_1 + 2,param_2 + 2);
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 6) = (char)param_2[6];
  return param_1;
}



// FUNCTION 1461bba4c FUN_1461bba4c body=122 status=ok
// SIG undefined FUN_1461bba4c(void)

void FUN_1461bba4c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1461bbac6 FUN_1461bbac6 body=338 status=ok
// SIG undefined FUN_1461bbac6(void)

void FUN_1461bbac6(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = *param_1;
  lVar7 = FUN_14479d2ce(&local_40);
  if (lVar7 != 0) {
    if (*(char *)(param_2 + 0x20) == '\x02') {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      local_60 = *(longlong *)(param_2 + 0x28);
      if ((local_60 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_58 = *(undefined1 *)(param_2 + 0x30);
      FUN_140f5db60(lVar7,&local_60,uVar3,param_2);
    }
    else if (*(char *)(param_2 + 0x20) == '\x01') {
      uVar2 = *(undefined2 *)(param_2 + 0x10);
      local_50 = *(longlong *)(param_2 + 0x28);
      if ((local_50 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_48 = *(undefined1 *)(param_2 + 0x30);
      FUN_1475e4af0(lVar7,&local_50,uVar2,param_2);
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x10);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
        uVar1 = *(undefined1 *)(param_2 + 0x30);
        pcVar6 = *(code **)(lVar4 + 0x20);
        local_40 = lVar5;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
        local_38 = uVar1;
        (*pcVar6)(lVar7,&local_40,param_2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bbc1a FUN_1461bbc1a body=176 status=ok
// SIG undefined FUN_1461bbc1a(void)

void FUN_1461bbc1a(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0xa0);
    if ((lVar4 == 0) && (lVar4 = *(longlong *)(lVar2 + 0x98), lVar4 == 0)) {
      lVar4 = *(longlong *)(lVar2 + 0x3c);
    }
  }
  lVar2 = FUN_14011c349();
  if (lVar4 == *(longlong *)(lVar2 + 0x78)) {
    iVar3 = (int)*(char *)(param_2 + 0x161);
    if ((iVar3 == -1) && (iVar3 = -1, param_3 == '\0')) {
      iVar3 = (int)*(char *)(param_2 + 0x160);
    }
    cVar1 = FUN_140ae5f1a(iVar3);
    if (cVar1 != '\0') {
      FUN_141020220(param_1,iVar3);
      cVar1 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar1 == '\0') {
        FUN_1461bbcca(param_1,iVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461bbcca FUN_1461bbcca body=91 status=ok
// SIG undefined FUN_1461bbcca(void)

void FUN_1461bbcca(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba7c90);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bbd30 FUN_1461bbd30 body=125 status=ok
// SIG undefined FUN_1461bbd30(void)

void FUN_1461bbd30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99e5f0;
  param_1[4] = &PTR_FUN_14b99e630;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99e640;
  param_1[4] = &PTR_LAB_14b99e680;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 1461bbdae FUN_1461bbdae body=246 status=ok
// SIG undefined FUN_1461bbdae(void)

undefined8 *
FUN_1461bbdae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_1461bbea6(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bbea6 FUN_1461bbea6 body=423 status=ok
// SIG undefined FUN_1461bbea6(void)

void FUN_1461bbea6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461bbf7c:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6060;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461bbf7c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6060;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001461bc035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461bc04e FUN_1461bc04e body=246 status=ok
// SIG undefined FUN_1461bc04e(void)

undefined8 *
FUN_1461bc04e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_1461bc146(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bc146 FUN_1461bc146 body=423 status=ok
// SIG undefined FUN_1461bc146(void)

void FUN_1461bc146(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461bc21c:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d2930;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461bc21c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d2930;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001461bc2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461bc304 FUN_1461bc304 body=169 status=ok
// SIG undefined FUN_1461bc304(void)

void FUN_1461bc304(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1447c510a(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 << 2);
  }
  FUN_1416305ce(param_1,param_2,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bc3ae FUN_1461bc3ae body=416 status=ok
// SIG undefined FUN_1461bc3ae(void)

void FUN_1461bc3ae(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0x44) == 0x1c) {
      FUN_14658150c(param_1,&local_30);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x110))(local_30,local_40,*(undefined4 *)(param_1 + 0x30));
        (**(code **)(*local_30 + 0x148))(local_30,&local_50,*(undefined4 *)(param_1 + 0x30));
        FUN_14614ca90(&local_60,&local_50,local_40);
        if (CONCAT44(uStack_4c,local_50) != 0) {
          FUN_1400020a8();
        }
        local_50 = local_60;
        uStack_4c = uStack_5c;
        uStack_48 = uStack_58;
        uStack_44 = uStack_54;
        FUN_140056680(&local_60,L"TitleSigningInProfileText");
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x338))
                  (*(longlong **)(param_1 + 0x38),&local_60,&local_50);
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_4c,local_50) != 0) {
          FUN_1400020a8();
        }
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
    }
    lVar4 = FUN_1414354ce(param_1);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x48), lVar4 != 0)) {
      lVar5 = FUN_140b7066c();
      iVar3 = *(int *)(lVar5 + 0x38);
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
          lVar5 + 0x30)) {
        FUN_1461bc550(lVar4,CONCAT71((int7)(int3)((uint)iVar3 >> 8),
                                     *(int *)(param_1 + 0x44) - 0x1bU < 2));
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bc550 FUN_1461bc550 body=121 status=ok
// SIG undefined FUN_1461bc550(void)

void FUN_1461bc550(longlong param_1,undefined1 param_2)

{
  if ((*(char *)(param_1 + 0x300) == '\x01') && (*(longlong *)(param_1 + 0x2f0) != 0)) {
    FUN_1400020a8();
  }
  *(undefined2 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined1 *)(param_1 + 0x300) = 1;
  FUN_14020fad6(param_1 + 0x2f0,L"XMPP");
  *(undefined1 *)(param_1 + 0x2e8) = param_2;
  *(undefined1 *)(param_1 + 0x2e9) = param_2;
  *(undefined1 *)(param_1 + 0x328) = param_2;
  *(undefined1 *)(param_1 + 0x329) = 1;
  return;
}



// FUNCTION 1461bc5ca FUN_1461bc5ca body=179 status=ok
// SIG undefined FUN_1461bc5ca(void)

bool FUN_1461bc5ca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bc684 FUN_1461bc684 body=54 status=ok
// SIG undefined FUN_1461bc684(void)

void FUN_1461bc684(void)

{
  FUN_141630dc8();
  if (DAT_14c99e3c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99e3a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bc6ba FUN_1461bc6ba body=54 status=ok
// SIG undefined FUN_1461bc6ba(void)

void FUN_1461bc6ba(void)

{
  FUN_141630fae();
  if (DAT_14cb3a258 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3a238 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bc6f0 FUN_1461bc6f0 body=254 status=ok
// SIG undefined FUN_1461bc6f0(void)

longlong *
FUN_1461bc6f0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1461bc7f2(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1461bc86a(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bc7f2 FUN_1461bc7f2 body=120 status=ok
// SIG undefined FUN_1461bc7f2(void)

undefined8 * FUN_1461bc7f2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99d790;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99d7b0;
  param_1[6] = &PTR_FUN_14b99d7f0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1461bc86a FUN_1461bc86a body=162 status=ok
// SIG undefined FUN_1461bc86a(void)

void FUN_1461bc86a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_1461bc8a9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_1461bc8a9;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461bc8a9:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461bc908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461bc90c FUN_1461bc90c body=254 status=ok
// SIG undefined FUN_1461bc90c(void)

longlong *
FUN_1461bc90c(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1461bca0e(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1461bca86(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bca0e FUN_1461bca0e body=120 status=ok
// SIG undefined FUN_1461bca0e(void)

undefined8 * FUN_1461bca0e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99e3a0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99e3c0;
  param_1[6] = &PTR_FUN_14b99e400;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1461bca86 FUN_1461bca86 body=162 status=ok
// SIG undefined FUN_1461bca86(void)

void FUN_1461bca86(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_1461bcac5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_1461bcac5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461bcac5:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461bcb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461bcb28 FUN_1461bcb28 body=415 status=ok
// SIG undefined FUN_1461bcb28(void)

longlong * FUN_1461bcb28(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) goto LAB_1461bcc18;
  if (((*(longlong *)(param_1 + 8) == 0) ||
      (plVar6 = *(longlong **)(param_1 + 0x10), plVar6 == (longlong *)0x0)) || ((int)plVar6[1] < 1))
  {
    lVar4 = 0;
    goto LAB_1461bcc18;
  }
  lVar4 = FUN_14494321d();
  iVar3 = (int)plVar6[1];
  local_40 = 0;
  do {
    if (iVar3 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_1461bcba2;
    }
    LOCK();
    iVar2 = (int)plVar6[1];
    bVar8 = iVar3 == iVar2;
    if (bVar8) {
      *(int *)(plVar6 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
  } while (!bVar8);
  local_40 = *(undefined8 *)(param_1 + 8);
LAB_1461bcba2:
  local_38 = plVar6;
  FUN_1461bccc8(lVar4);
  lVar7 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  plVar5 = (longlong *)FUN_14494321d(0x18);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ab3cc20;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 0x28) = lVar7;
  plVar6 = *(longlong **)(param_1 + 0x30);
  if (plVar5 == plVar6) {
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
        iVar3 = *piVar1;
        UNLOCK();
        plVar6 = plVar5;
        goto joined_r0x0001461bcc7a;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x30) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001461bcc7a:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
LAB_1461bcc18:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x30);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bccc8 FUN_1461bccc8 body=124 status=ok
// SIG undefined FUN_1461bccc8(void)

undefined8 * FUN_1461bccc8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_144a81de8();
  *param_1 = &PTR_FUN_14ab3c150;
  param_1[2] = &PTR_LAB_14ab3c1b0;
  param_1[3] = 0;
  param_1[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = *param_2;
  lVar1 = param_2[1];
  param_1[0xb] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1461bcd44 FUN_1461bcd44 body=84 status=ok
// SIG undefined FUN_1461bcd44(void)

void FUN_1461bcd44(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,1);
  FUN_1461bcd98(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001461bcd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 1461bcd98 FUN_1461bcd98 body=186 status=ok
// SIG undefined FUN_1461bcd98(void)

void FUN_1461bcd98(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x158))
                    (param_1,param_2,FUN_148ac59d5,FUN_148ac5a32,&LAB_148ac5a2d,&LAB_148ac59bf);
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar1 = *param_2;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_143f5df18(lVar1 + lVar4,param_1);
      (**(code **)(*param_1 + 0x48))(param_1,lVar1 + lVar4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 200;
    } while (iVar3 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001461bce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1);
  return;
}



// FUNCTION 1461bce52 FUN_1461bce52 body=216 status=ok
// SIG undefined FUN_1461bce52(void)

void FUN_1461bce52(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140eeb8c0(param_1 + -0x8c0);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x260) = param_2;
  FUN_141631194(param_2 + 0x4780,param_1 + -0x8c0);
  if (*(char *)(param_1 + -0x748) == '\x03') {
    if (*(longlong *)(param_1 + 0x250) != 0) {
      FUN_14615c894(param_1 + 0x18);
    }
    iVar1 = *(int *)(param_1 + 0x248);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x240);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x260));
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  FUN_14615c82e(param_1,*(undefined8 *)(param_1 + 0x260),param_3);
  *(undefined4 *)(param_1 + 0x268) = param_3;
  return;
}



// FUNCTION 1461bcf2a FUN_1461bcf2a body=171 status=ok
// SIG undefined FUN_1461bcf2a(void)

void FUN_1461bcf2a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1461bcfd6();
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14163179c(*(undefined8 *)(param_1 + 0x220));
  iVar4 = *(int *)(param_1 + 0x2a0);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x298) + lVar5 * 8);
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(lVar3 + 0x10);
        iVar4 = *(int *)(param_1 + 0x2a0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x2d0);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461bcf91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x10))(lVar5 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1461bcfd6 FUN_1461bcfd6 body=120 status=ok
// SIG undefined FUN_1461bcfd6(void)

void FUN_1461bcfd6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_1461bd04e(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + -8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1461bd04e FUN_1461bd04e body=105 status=ok
// SIG undefined FUN_1461bd04e(void)

void FUN_1461bd04e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1461bd0b8 FUN_1461bd0b8 body=63 status=ok
// SIG undefined FUN_1461bd0b8(void)

void FUN_1461bd0b8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145bfd294(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1406e9e9a(param_1);
    return;
  }
  FUN_147439878(param_1);
  FUN_145bfd294(param_1);
  return;
}



// FUNCTION 1461bd102 FUN_1461bd102 body=530 status=ok
// SIG undefined FUN_1461bd102(void)

undefined8 * FUN_1461bd102(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140553f2a();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *param_1 = &PTR_FUN_14a4ddb20;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  lVar2 = FUN_14009d2a0();
  *(undefined4 *)(param_1 + 7) = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_28 = FUN_1459e4118();
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
    local_38 = FUN_140926940();
    if (local_38 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_38);
    }
    local_40 = param_1[2];
    if ((local_40 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = FUN_1459906fe();
    if (local_48 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_48);
    }
    local_50 = param_1[2];
    if ((local_50 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_50,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bd316 FUN_1461bd316 body=54 status=ok
// SIG undefined FUN_1461bd316(void)

void FUN_1461bd316(void)

{
  FUN_141631e48();
  if (DAT_14caf5a48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf5a28 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bd34c FUN_1461bd34c body=257 status=ok
// SIG undefined FUN_1461bd34c(void)

bool FUN_1461bd34c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar7 = local_48;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    local_48 = *param_4;
    local_40 = param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    local_58 = param_5;
    (*pcVar3)(lVar6,param_2,param_3);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  plVar4 = (longlong *)param_4[1];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bd46a FUN_1461bd46a body=109 status=ok
// SIG undefined FUN_1461bd46a(void)

undefined4 FUN_1461bd46a(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"*.pak");
  uVar1 = FUN_141632030(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bd4d8 FUN_1461bd4d8 body=103 status=ok
// SIG undefined FUN_1461bd4d8(void)

ulonglong FUN_1461bd4d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461bd522:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461bd522;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461bd540 FUN_1461bd540 body=649 status=ok
// SIG undefined FUN_1461bd540(void)

void FUN_1461bd540(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 0x85;
  local_50 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_48 = plVar4;
  }
  uVar6 = (**(code **)(*local_50 + 0x40))();
  iVar7 = FUN_1461bd7ca(plVar5,uVar6,&local_50);
  plVar1 = local_48;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x30 + *plVar5;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if (lVar8 != 0) {
    local_60 = *(undefined8 *)(lVar8 + 0x10);
    local_58 = *(longlong **)(lVar8 + 0x18);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_50 = (longlong *)*param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      FUN_1461bd888(plVar5);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_48 = plVar4;
      FUN_1461bd888(plVar5);
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    (**(code **)(*param_1 + 0x80))(param_1,&local_60,param_3);
    if (((((int)param_1[0x86] == *(int *)((longlong)param_1 + 0x45c)) && (param_1[0x78] != 0)) &&
        (param_1[0x79] != 0)) && (0 < *(int *)(param_1[0x79] + 8))) {
      FUN_1401cb356();
      local_70 = param_1[0x78];
      local_68 = param_1[0x79];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 0xc) = *(int *)(local_68 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_70);
      plVar5 = (longlong *)param_1[0x79];
      param_1[0x78] = 0;
      param_1[0x79] = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
    }
    plVar5 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_58)(local_58);
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bd7ca FUN_1461bd7ca body=190 status=ok
// SIG undefined FUN_1461bd7ca(void)

int FUN_1461bd7ca(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x30;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x28 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1461bd888 FUN_1461bd888 body=273 status=ok
// SIG undefined FUN_1461bd888(void)

void FUN_1461bd888(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar9 = (longlong)iVar6 * 0x30;
        puVar4 = *(undefined8 **)(lVar3 + lVar9);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar9);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_1461bd99a(param_1,*puVar10);
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar9 + 0x28);
        puVar10 = (undefined4 *)(lVar3 + lVar9 + 0x28);
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001461bd995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461bd99a FUN_1461bd99a body=121 status=ok
// SIG undefined FUN_1461bd99a(void)

void FUN_1461bd99a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x2c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x30 + 0x28);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x28);
  FUN_145c7dde4(lVar2 + *param_1);
  FUN_1461bda14(param_1,param_2);
  return;
}



// FUNCTION 1461bda14 FUN_1461bda14 body=124 status=ok
// SIG undefined FUN_1461bda14(void)

void FUN_1461bda14(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1461bda90 FUN_1461bda90 body=54 status=ok
// SIG undefined FUN_1461bda90(void)

void FUN_1461bda90(void)

{
  FUN_141632a72();
  if (DAT_14cb8b4a0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8b480 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bdad2 FUN_1461bdad2 body=533 status=ok
// SIG undefined FUN_1461bdad2(void)

undefined8 * FUN_1461bdad2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14b44e720;
  param_1[5] = &PTR_FUN_14b44eba0;
  param_1[6] = &PTR_LAB_14b44ebe0;
  param_1[0x22] = &PTR_FUN_14b44ec30;
  param_1[0x23] = &PTR_FUN_14b44ec40;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x28;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  param_1[0x6f] = puVar2;
  param_1[0x6e] = puVar2;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  return param_1;
}



// FUNCTION 1461bdce8 FUN_1461bdce8 body=284 status=ok
// SIG undefined FUN_1461bdce8(void)

void FUN_1461bdce8(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)FUN_141535576(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x20);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x60))(plVar3);
  plVar2 = (longlong *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == (int)param_3[1]) {
    lVar5 = *plVar2;
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar7 = *(ushort *)(lVar5 + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(*param_3 + lVar6);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_1461bdded;
LAB_1461bddb7:
        lVar6 = lVar6 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1461bddb7;
      }
      if (uVar7 != uVar9) goto LAB_1461bdd50;
    }
  }
  else {
    if ((int)param_3[1] + iVar1 != 1) goto LAB_1461bdd50;
    lVar5 = *plVar2;
  }
LAB_1461bdded:
  if (lVar5 != 0) {
    FUN_1400020a8();
  }
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
LAB_1461bdd50:
  FUN_1461bde04(plVar4,param_2);
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2 + 0x18);
  FUN_141632c5c(param_1,param_3);
  return;
}



// FUNCTION 1461bde04 FUN_1461bde04 body=162 status=ok
// SIG undefined FUN_1461bde04(void)

void FUN_1461bde04(longlong param_1,longlong param_2)

{
  FUN_14163838c(param_2 + 0x18);
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_14480f766(param_1 + 0x50);
  }
  *(undefined8 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_14480f766(param_1 + 0x80);
  }
  *(undefined8 *)(param_2 + 0xa0) = 0;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_14480f766(param_1 + 0x68);
  }
  *(undefined8 *)(param_2 + 0xa8) = 0;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_14480f766(param_1 + 0x38);
  }
  *(undefined8 *)(param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1461bdea6 FUN_1461bdea6 body=866 status=ok
// SIG undefined FUN_1461bdea6(void)

void FUN_1461bdea6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  byte local_86;
  undefined1 local_85;
  undefined4 local_84;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1461be300();
  uVar5 = FUN_14479d2ce(param_1 + 1000);
  FUN_1407934de(&local_b8,uVar5);
  if (local_b8 != 0) {
    FUN_1461be20a(local_b8 + 0x78,local_c0,param_1);
  }
  plVar10 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) goto LAB_1461be0c0;
  lVar9 = param_1 + 0x988;
  lVar7 = FUN_14479d2ce(lVar9);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x990) == 0) goto LAB_1461be0c0;
    lVar7 = FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar7 == 0) || (cVar4 == '\0')) {
      FUN_14485c47a(lVar9,lVar7);
      if (lVar7 == 0) goto LAB_1461be0c0;
    }
    else {
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar9,lVar7);
      }
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_1461be0c0;
  }
  lVar8 = FUN_144a797b2();
  if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) || (lVar8 = FUN_144a6c4d8(), lVar8 == 0)) ||
     ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)))) goto LAB_1461be0c0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  local_88 = 0x100;
  local_86 = local_86 & 0xe0;
  local_85 = 0;
  local_84 = 8;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  lVar7 = FUN_14479d2ce(lVar9);
  if (lVar7 == 0) {
    if (*(longlong *)(param_1 + 0x990) != 0) {
      lVar7 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar7 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(lVar9,lVar7);
        if (lVar7 == 0) goto LAB_1461be202;
      }
      else {
        uVar3 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar9,lVar7);
        }
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1461be039;
    }
LAB_1461be202:
    lVar8 = 0;
  }
  else {
LAB_1461be039:
    lVar9 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) != lVar9 + 0x30)) || (lVar9 = FUN_144a6c4d8(), lVar9 == 0)) ||
       (*(int *)(lVar7 + 0x38) < *(int *)(lVar9 + 0x38))) goto LAB_1461be202;
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30) {
      lVar8 = lVar7;
    }
  }
  local_c8 = &local_b8;
  uVar5 = FUN_141137228(lVar6,lVar8,0,0);
  FUN_14485c47a(param_1 + 0x9b0,uVar5);
  if (local_78 != 0) {
    plVar10 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar10 = local_58;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_1461be0c0:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461be20a FUN_1461be20a body=244 status=ok
// SIG undefined FUN_1461be20a(void)

undefined8 FUN_1461be20a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b97a960;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_140f54630;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461be300 FUN_1461be300 body=519 status=ok
// SIG undefined FUN_1461be300(void)

void FUN_1461be300(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  int local_44;
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1447210f0();
  plVar3 = *(longlong **)(param_1 + 0x3c0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,0,1);
    FUN_14045627c(*(undefined8 *)(param_1 + 0x3c0),0,1);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x3c0) + 0x2aa);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined1 *)(*(longlong *)(param_1 + 0x3c0) + 0x310) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x3c0) + 0x2ab) = 1;
    lVar2 = param_1 + 1000;
    cVar4 = FUN_144729dda(lVar2);
    if (cVar4 == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x3c0);
      pwVar6 = L"";
    }
    else {
      uVar5 = FUN_14479d2ce(lVar2);
      cVar4 = FUN_141107632(uVar5);
      if (cVar4 == '\0') {
        local_44 = 0;
        uVar5 = FUN_14479d2ce(lVar2);
        FUN_14016169c(uVar5,&local_44);
        FUN_142787b30(local_40,local_44 + 1);
        local_70 = &local_20;
        local_78 = local_40;
        FUN_1407adb6e(&local_68);
        FUN_140230a2e(&local_58,L"ViewSceneCapture_P{0}",&local_68);
        lVar2 = *(longlong *)(param_1 + 0x3c0);
        if ((longlong *)(lVar2 + 0x358) == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar2 + 0x358) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar2 + 0x358) = local_58;
          local_58 = 0;
          *(undefined4 *)(lVar2 + 0x360) = (undefined4)local_50;
          *(undefined4 *)(lVar2 + 0x364) = local_50._4_4_;
          local_50 = 0;
        }
        FUN_1407adb3e(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1461be3b9;
      }
      lVar2 = *(longlong *)(param_1 + 0x3c0);
      pwVar6 = L"ViewSceneCapture_P1";
    }
    FUN_14020fad6(lVar2 + 0x358,pwVar6);
  }
LAB_1461be3b9:
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x3b8),0,2);
  }
  FUN_1405f1eac(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461be508 FUN_1461be508 body=194 status=ok
// SIG undefined FUN_1461be508(void)

bool FUN_1461be508(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_58 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461be5cc FUN_1461be5cc body=77 status=ok
// SIG undefined FUN_1461be5cc(void)

void FUN_1461be5cc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    lVar1 = FUN_1409e484c(param_1,param_5);
    lVar2 = FUN_140b1be20(param_1,param_5);
    *(undefined1 *)(lVar2 + 0x50) = *(undefined1 *)(lVar1 + 0x50);
    if (*(char *)(param_2 + 0x38) == '\x01') {
      *(bool *)(lVar1 + 0x50) = *(int *)(param_2 + 0x44) != 0;
    }
  }
  return;
}



// FUNCTION 1461be61a FUN_1461be61a body=371 status=ok
// SIG undefined FUN_1461be61a(void)

longlong * FUN_1461be61a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)FUN_14001cc68(0x200,0x10);
  FUN_1461be78e(plVar5);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar3 = *(longlong *)(param_3 + 0x18);
  plVar4 = *(longlong **)(param_3 + 0x20);
  if (plVar4 == (longlong *)0x0) {
    plVar5[0x3e] = lVar3;
    plVar6 = (longlong *)plVar5[0x3f];
    if (plVar6 == (longlong *)0x0) goto LAB_1461be69a;
    plVar5[0x3f] = 0;
LAB_1461be6e1:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1461be69a;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar5[0x3e] = lVar3;
    plVar6 = (longlong *)plVar5[0x3f];
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
      plVar5[0x3f] = (longlong)plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_1461be6e1;
    }
  }
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1461be69a:
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_2;
}



// FUNCTION 1461be78e FUN_1461be78e body=173 status=ok
// SIG undefined FUN_1461be78e(void)

undefined8 * FUN_1461be78e(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99bbf0;
  memset(param_1 + 2,0,0x1f0);
  FUN_145c42fa8(param_1 + 2);
  param_1[2] = &PTR_FUN_14b634dd0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return param_1;
}



// FUNCTION 1461be83c FUN_1461be83c body=592 status=ok
// SIG undefined FUN_1461be83c(void)

void FUN_1461be83c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  int local_110;
  longlong local_108;
  int local_100;
  undefined8 local_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar7 = *(longlong **)(param_1 + 0x78);
  if (plVar7 != (longlong *)0x0) {
    iVar3 = (int)plVar7[1];
    do {
      if (iVar3 == 0) goto LAB_1461be8b3;
      LOCK();
      iVar2 = (int)plVar7[1];
      bVar13 = iVar3 == iVar2;
      if (bVar13) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar13);
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (((lVar6 != 0) && (lVar5 = FUN_1461bea8e(lVar6), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x30) != 0)) {
      local_d8 = (longlong *)0x0;
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      local_fc = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_e8 = 0;
      uVar9 = FUN_141068cca(lVar6);
      uStack_f0 = (undefined4)uVar9;
      uStack_ec = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_141068c44(lVar6,&local_118);
      local_100 = local_110;
      local_108 = CONCAT44(uStack_114,local_118);
      FUN_1488f9a6e(&local_118,param_1);
      uVar9 = FUN_14479d2ce(param_1 + 0x58);
      local_128 = &local_118;
      FUN_1411cff2e(param_1 + 0x60,lVar5 + 0x28,uVar9,&local_108);
      FUN_1449db362(&local_118);
      uVar4 = FUN_140a262da(param_1 + 0x60);
      FUN_148844e0a(param_1,uVar4);
      if (local_a8 != 0) {
        plVar10 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar10 = local_88;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (local_e8 != 0) {
        plVar10 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar10 = local_c8;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_1461be8b3:
  FUN_1461beb14(param_1,&local_118);
  if (((char)uStack_114 == '\x01') && (lVar6 = FUN_148844dd4(param_1), lVar6 != 0)) {
    FUN_1461dc0e0(param_1,&local_108);
    lVar5 = local_108;
    lVar11 = (longlong)local_100;
    if (lVar11 != 0) {
      lVar12 = 0;
      do {
        uVar4 = *(undefined4 *)(lVar5 + lVar12);
        plVar7 = (longlong *)FUN_148844dd4(param_1);
        if ((plVar7 == (longlong *)0x0) ||
           (lVar8 = (**(code **)(*plVar7 + 0xb8))(plVar7,uVar4), lVar8 == 0)) {
          FUN_14883e220(lVar6,uVar4,local_118);
        }
        lVar12 = lVar12 + 4;
      } while (lVar11 * 4 != lVar12);
    }
    if (local_108 != 0) {
      FUN_1400020a8(local_108);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461bea8e FUN_1461bea8e body=78 status=ok
// SIG undefined FUN_1461bea8e(void)

longlong * FUN_1461bea8e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1461beadc();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1461beadc FUN_1461beadc body=55 status=ok
// SIG undefined FUN_1461beadc(void)

void FUN_1461beadc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55428 = FUN_140002ddd(FUN_1464b1faa,uVar1,L"BinderBehaviorMod_MissionPickup");
  }
  return;
}



// FUNCTION 1461beb14 FUN_1461beb14 body=128 status=ok
// SIG undefined FUN_1461beb14(void)

undefined4 * FUN_1461beb14(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461beb56;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if ((*(longlong *)(param_1 + 0x70) != 0) && (cVar5 = FUN_1461beb94(), cVar5 != '\0')) {
      lVar7 = FUN_140fcbb85();
      *param_2 = *(undefined4 *)(lVar7 + 0x5c);
      *(undefined1 *)(param_2 + 1) = 1;
      bVar8 = false;
    }
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
    if (!bVar8) {
      return param_2;
    }
  }
LAB_1461beb56:
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1461beb94 FUN_1461beb94 body=234 status=ok
// SIG undefined FUN_1461beb94(void)

undefined4 FUN_1461beb94(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1461bea8e();
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x38) == '\x01')) {
    lVar2 = FUN_14891f2c4(param_1);
    if ((lVar2 == 0) || (*(char *)(*(longlong *)(lVar2 + 0x40) + 0x3aa) == '\0')) {
      lVar2 = FUN_1410cfc16(param_1);
      if (lVar2 != 0) {
        lVar3 = FUN_140fcbb85();
        FUN_140100470(&local_40,*(longlong *)(lVar2 + 0xa0) + 0x4f0);
        uVar1 = FUN_144a8028a(lVar3 + 0x60,&local_40);
        local_40 = &DAT_14a171d50;
        local_28 = 0;
        if (local_24 != 0) {
          FUN_140115c12(&local_30,0);
        }
        local_38 = 0;
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1461bebbf;
      }
    }
  }
  uVar1 = 0;
LAB_1461bebbf:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bec8a FUN_1461bec8a body=533 status=ok
// SIG undefined FUN_1461bec8a(void)

undefined8 * FUN_1461bec8a(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b1ba0;
  param_1[0x1f] = &PTR_FUN_14a4b1f10;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  FUN_1406ed278(param_1 + 0x24);
  FUN_1406ed278(param_1 + 0x46);
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  FUN_145fcc6de(param_1 + 0x9a);
  param_1[0x20] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined1 **)((longlong)param_1 + 0x10c) = &DAT_ff7fffffff7fffff;
  *(undefined1 **)((longlong)param_1 + 0x114) = &DAT_ff7fffffff7fffff;
  *(undefined2 *)(param_1 + 0xbe) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5f2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  local_48 = 0x7b5ae74c;
  uStack_44 = 0xd2704c10;
  uStack_40 = 0xa9585798;
  uStack_3c = 0xb212a5a;
  iVar1 = FUN_1448a256a(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = '\x02' - (iVar1 < 6);
  *(undefined1 *)((longlong)param_1 + 0x19c) = 1;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 1;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461beea0 FUN_1461beea0 body=148 status=ok
// SIG undefined FUN_1461beea0(void)

bool FUN_1461beea0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bef36 FUN_1461bef36 body=398 status=ok
// SIG undefined FUN_1461bef36(void)

bool FUN_1461bef36(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14588f6d2(*(undefined8 *)(param_1 + 0x20),&local_50,param_3,0);
  plVar3 = local_48;
  if (local_50 != 0) {
    lVar2 = *param_2;
    iVar8 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar8 != 0) {
      plVar5 = *(longlong **)(param_1 + 0x48);
      lVar7 = (longlong)iVar8 * 0x18;
      do {
        if (*plVar5 == lVar2) {
          if (plVar5 != (longlong *)0x0) {
            if (plVar5[1] == local_50) goto LAB_1461befdc;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            plVar3 = (longlong *)plVar5[2];
            plVar5[1] = local_50;
            plVar5[2] = (longlong)local_48;
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
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            goto LAB_1461befc9;
          }
          break;
        }
        plVar5 = plVar5 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      iVar8 = *(int *)(param_1 + 0x50);
    }
    *(uint *)(param_1 + 0x50) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar8 + 1U) {
      FUN_1461bf0c6((longlong *)(param_1 + 0x48),iVar8);
    }
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar6 = (longlong)iVar8;
    *(longlong *)(lVar7 + lVar6 * 0x18) = lVar2;
    *(longlong *)(lVar7 + 8 + lVar6 * 0x18) = local_50;
    *(longlong **)(lVar7 + 0x10 + lVar6 * 0x18) = plVar3;
LAB_1461befc9:
    cVar4 = FUN_1402ca022(*param_2,L"AUDIO");
    if (cVar4 == '\0') {
      FUN_1447f69b6(param_1 + 8);
    }
  }
LAB_1461befdc:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_50 != 0;
}



// FUNCTION 1461bf0c6 FUN_1461bf0c6 body=147 status=ok
// SIG undefined FUN_1461bf0c6(void)

void FUN_1461bf0c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1461bf15a FUN_1461bf15a body=54 status=ok
// SIG undefined FUN_1461bf15a(void)

void FUN_1461bf15a(void)

{
  FUN_141632f5a();
  if (DAT_14cab2af0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2ad0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bf190 FUN_1461bf190 body=54 status=ok
// SIG undefined FUN_1461bf190(void)

void FUN_1461bf190(void)

{
  FUN_141633146();
  if (DAT_14cb3a308 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3a2e8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461bf1c6 FUN_1461bf1c6 body=147 status=ok
// SIG undefined FUN_1461bf1c6(void)

void FUN_1461bf1c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1461bf25a FUN_1461bf25a body=399 status=ok
// SIG undefined FUN_1461bf25a(void)

void FUN_1461bf25a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  lVar3 = *(longlong *)(param_1 + 0x130);
  iVar1 = *(int *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if ((longlong)iVar1 != 0) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      lVar8 = *(longlong *)(lVar4 + 0x50);
      if (lVar8 == 0) {
        uVar7 = FUN_145d84ce4();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(lVar4 + 0x50) = lVar8;
      }
      if (*(longlong *)(lVar4 + 0x58) == 0) {
        if ((lVar8 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) {
          plVar5 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
            *(undefined8 *)(lVar4 + 0x58) = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0x48));
            *(longlong *)(lVar4 + 0x58) = lVar8;
            if (lVar8 != 0) goto LAB_1461bf2b7;
          }
        }
        if (1 < *(int *)(lVar4 + 0x40)) goto LAB_1461bf2b7;
      }
      else {
LAB_1461bf2b7:
        uVar7 = FUN_1416334c4(param_1,lVar4);
        iVar2 = *(int *)(param_1 + 0x158);
        *(uint *)(param_1 + 0x158) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x15c) < iVar2 + 1U) {
          FUN_145723d82((longlong *)(param_1 + 0x150),iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar2 * 8) = uVar7;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  cVar6 = FUN_144729dda(param_1 + 200);
  if (cVar6 != '\0') {
    iVar1 = *(int *)(param_1 + 0x138);
    lVar9 = FUN_14479d2ce(param_1 + 200);
    FUN_14144f736(lVar9 + 0x200,&DAT_14cb92840,
                  CONCAT71((int7)((ulonglong)param_1 >> 8),iVar1 == 0) & 0xffffffff);
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 1461bf3ea FUN_1461bf3ea body=119 status=ok
// SIG undefined FUN_1461bf3ea(void)

void FUN_1461bf3ea(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &LAB_145c6a390;
  local_30 = 0;
  FUN_1461bf462(local_28,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3b8))
            (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),local_28);
  FUN_1449db362(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bf462 FUN_1461bf462 body=428 status=ok
// SIG undefined FUN_1461bf462(void)

longlong * FUN_1461bf462(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461bf542:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ec030;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461bf542;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ec030;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461bf60e FUN_1461bf60e body=141 status=ok
// SIG undefined FUN_1461bf60e(void)

undefined8 FUN_1461bf60e(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_stack_00000028;
  longlong *in_stack_00000030;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_30 = *in_stack_00000030;
  local_40 = &local_30;
  *in_stack_00000030 = 0;
  local_28 = (undefined4)in_stack_00000030[1];
  local_24 = *(undefined4 *)((longlong)in_stack_00000030 + 0xc);
  in_stack_00000030[1] = 0;
  local_48 = in_stack_00000028;
  (*pcVar2)(uVar1);
  if (*in_stack_00000030 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bf69c FUN_1461bf69c body=453 status=ok
// SIG undefined FUN_1461bf69c(void)

void FUN_1461bf69c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  FUN_141237e80();
  lVar3 = FUN_1408bb964(param_1 + 0x14);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (*(longlong *)(lVar3 + 0x1e0) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1e0) + 0x30), lVar3 != 0)) {
      if (*(longlong *)(param_1 + 0x90) == 0) {
        local_48 = (undefined8 *)&LAB_145afa3aa;
        local_40 = 0;
        FUN_1461bfa34(lVar3 + 0x40,&local_38,lVar1);
        *(undefined8 *)(param_1 + 0x90) = local_38;
      }
      if (*(longlong *)(param_1 + 0x98) == 0) {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,3,0x10);
        puVar2 = local_48;
        local_40 = 3;
        *local_48 = &PTR_LAB_14b4e11e0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_48[2] = lVar5;
        *local_48 = &PTR_FUN_14b9aefe0;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,lVar1);
        puVar2[4] = FUN_148e38afe;
        *(undefined4 *)(puVar2 + 5) = 0;
        FUN_1461bf862(lVar3,&local_38,&local_48);
        *(undefined8 *)(param_1 + 0x98) = local_38;
        FUN_1449db362(&local_48);
      }
    }
  }
  FUN_141633c48(lVar1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bf862 FUN_1461bf862 body=120 status=ok
// SIG undefined FUN_1461bf862(void)

undefined8 FUN_1461bf862(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_1461bf8dc(&local_30,param_3);
  FUN_1461bf95a(param_1 + 0x2b0,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bf8dc FUN_1461bf8dc body=124 status=ok
// SIG undefined FUN_1461bf8dc(void)

void FUN_1461bf8dc(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 1461bf95a FUN_1461bf95a body=216 status=ok
// SIG undefined FUN_1461bf95a(void)

undefined8 * FUN_1461bf95a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 1461bfa34 FUN_1461bfa34 body=254 status=ok
// SIG undefined FUN_1461bfa34(void)

undefined8
FUN_1461bfa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fdf50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aef70;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a0b054(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bfb34 FUN_1461bfb34 body=230 status=ok
// SIG undefined FUN_1461bfb34(void)

void FUN_1461bfb34(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461bfc1c(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461bfc1c FUN_1461bfc1c body=10 status=ok
// SIG undefined FUN_1461bfc1c(void)

void FUN_1461bfc1c(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (((*(longlong *)(param_1 + 0x3f70) == 0 ||
       (*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x8b8) != '\0')) ||
      (*(char *)(param_1 + 0x73eb) == '\0')))) {
    FUN_1461bfc5a(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 1461bfc26 FUN_1461bfc26 body=52 status=ok
// SIG undefined FUN_1461bfc26(void)

void FUN_1461bfc26(longlong param_1)

{
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (((*(longlong *)(param_1 + 0x3f70) == 0 ||
       (*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x8b8) != '\0')) ||
      (*(char *)(param_1 + 0x73eb) == '\0')))) {
    FUN_1461bfc5a(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 1461bfc5a FUN_1461bfc5a body=356 status=ok
// SIG undefined FUN_1461bfc5a(void)

void FUN_1461bfc5a(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  float fVar6;
  
  cVar4 = FUN_144729dda(param_1 + 0xf0);
  if ((cVar4 == '\0') || (lVar2 = FUN_14479d2ce(param_1 + 0xf0), *(char *)(lVar2 + 0x178) != '\x03')
     ) {
    return;
  }
  if (ABS(param_2) <= 1e-08) {
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
  else {
    lVar2 = param_1 + 0xf8;
    cVar4 = FUN_14486ea84(lVar2);
    if (cVar4 == '\0') {
      return;
    }
    if (*(float *)(param_1 + 0x138) <= 0.0001) {
      return;
    }
    *(undefined1 *)(param_1 + 0x131) = 0;
    uVar5 = thunk_FUN_14008e0ae(lVar2);
    lVar3 = FUN_14008e0a4(uVar5);
    fVar6 = *(float *)(lVar3 + 200);
    if (0.0001 < fVar6 - *(float *)(param_1 + 0x144)) {
      FUN_1461bfdbe(param_1);
    }
    fVar6 = fVar6 + param_2;
    uVar5 = thunk_FUN_14008e0ae(lVar2);
    lVar3 = FUN_14008e0a4(uVar5);
    fVar1 = *(float *)(lVar3 + 0x30);
    uVar5 = thunk_FUN_14008e0ae(lVar2);
    uVar5 = FUN_14008e0a4(uVar5);
    if (fVar1 < fVar6) {
      FUN_14008e202(uVar5,0x3f800000);
    }
    else {
      FUN_1409d461e(uVar5,fVar6,1);
    }
    uVar5 = thunk_FUN_14008e0ae(lVar2);
    lVar2 = FUN_14008e0a4(uVar5);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar2 + 200);
  }
  FUN_1461c006a(param_1);
  return;
}



// FUNCTION 1461bfdbe FUN_1461bfdbe body=436 status=ok
// SIG undefined FUN_1461bfdbe(void)

void FUN_1461bfdbe(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = param_1 + 0xf0;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar5);
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      lVar2 = FUN_14479d2ce(lVar5);
      FUN_1447f69b6(lVar2 + 0x5008);
    }
    plVar3 = (longlong *)FUN_14479d2ce(lVar5);
    cVar1 = (**(code **)(*plVar3 + 0x700))(plVar3);
    if (cVar1 == '\0') {
      lVar5 = FUN_14479d2ce(lVar5);
      if (lVar5 != 0) {
        lVar5 = FUN_1456e2bea(lVar5);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
        }
      }
    }
    else {
      uVar4 = FUN_14479d2ce(lVar5);
      local_d8 = (undefined1 **)0x0;
      FUN_140b32deb(local_58 + 2,uVar4,param_1 + 0x50,0);
      local_58[2] = 0;
      local_58[3] = 0xffffffffffffffff;
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (lVar2 != 0) {
        local_58[0] = 0;
        local_58[1] = 0;
        local_68 = &DAT_4030000000000000;
        local_60 = 0x4022000000000000;
        uVar4 = FUN_14479d2ce(lVar5);
        local_78 = 1;
        local_80 = 0;
        local_88 = 0;
        local_90 = 1;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b8 = 1;
        local_c0 = 1;
        local_b0 = 0;
        local_c8 = 4;
        local_d0 = 0x42c80000;
        local_d8 = &local_68;
        FUN_141530594(uVar4,lVar2,1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c006a FUN_1461c006a body=908 status=ok
// SIG undefined FUN_1461c006a(void)

void FUN_1461c006a(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = param_1 + 0xf0;
  cVar4 = FUN_144729dda(lVar9);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(lVar9);
    if (*(char *)(lVar5 + 0x178) == '\x03') {
      uVar6 = FUN_14479d2ce(lVar9);
      uVar6 = FUN_1401b4c98(uVar6);
      puVar1 = (undefined8 *)(param_1 + 0x118);
      local_b8 = *(undefined8 *)(param_1 + 0x118);
      lVar5 = FUN_144a61814(uVar6);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 1) != '\x02')) {
        uVar6 = FUN_14479d2ce(lVar9);
        uVar6 = FUN_1401b4c98(uVar6);
        lVar5 = FUN_144a61814(uVar6,puVar1);
        if (lVar5 != 0) {
          FUN_1405a424c(uVar6,*puVar1);
        }
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      local_d8 = puVar1;
      uVar6 = FUN_14479d2ce(lVar9);
      uVar6 = FUN_1401b4c98(uVar6);
      uVar2 = *(undefined4 *)(param_1 + 0x138);
      uVar7 = FUN_14479d2ce(lVar9);
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar1 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_d0[2] = lVar8;
      *local_d0 = &PTR_FUN_14b9674f0;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,uVar7);
      puVar1[4] = param_1;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      local_e8 = local_c0;
      FUN_1406f4044(uVar6,local_d8,&local_b8,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
      local_d8 = (undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = 0;
      uVar6 = FUN_14479d2ce(lVar9);
      uVar6 = FUN_1401b4c98(uVar6);
      fVar3 = *(float *)(param_1 + 0x138);
      uVar7 = FUN_14479d2ce(lVar9);
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar1 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_d0[2] = lVar8;
      *local_d0 = &PTR_FUN_14b967560;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,uVar7);
      puVar1[4] = param_1;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      local_e8 = local_c0;
      FUN_1406f4044(uVar6,local_d8,&local_b8,fVar3 * 0.7);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
      FUN_1461c03f7(param_1 + 0xe0,*(undefined4 *)(param_1 + 0x138));
      uVar6 = FUN_14479d2ce(lVar9);
      lVar9 = FUN_1456e2bea(uVar6);
      if (lVar9 != 0) {
        FUN_1461c0434(lVar9,*(undefined4 *)(param_1 + 0x138));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c03f7 FUN_1461c03f7 body=60 status=ok
// SIG undefined FUN_1461c03f7(void)

void FUN_1461c03f7(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c0434 FUN_1461c0434 body=302 status=ok
// SIG undefined FUN_1461c0434(void)

void FUN_1461c0434(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_2b8 [36];
  undefined4 local_294;
  undefined1 local_290 [312];
  longlong local_158;
  ulonglong *local_150;
  byte local_12e;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_294 = param_2;
  cVar2 = FUN_144729dda(param_1 + 0xd);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0xd);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
      FUN_1413dbc9a(&local_158);
      FUN_140f9916c(param_1,local_290,7);
      FUN_140f991ea(&local_158,local_290);
      FUN_1449daebe(local_290);
      puVar1 = (undefined4 *)*local_150 + 1;
      if ((undefined4 *)local_150[1] < puVar1) {
        if ((local_12e & 2) == 0) {
          (**(code **)(local_158 + 0x170))(&local_158,&local_294,4);
        }
        else {
          FUN_14572512c(&local_158,&local_294);
        }
      }
      else {
        local_294 = *(undefined4 *)*local_150;
        *local_150 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x308))(param_1,local_290,&local_158,0);
      FUN_1449daebe(&local_158);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c0564 FUN_1461c0564 body=381 status=ok
// SIG undefined FUN_1461c0564(void)

undefined4 FUN_1461c0564(undefined8 param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined1 local_98 [40];
  undefined8 local_70;
  int local_68;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_1405e677a(DAT_14cb0d2b0,param_3);
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_140245d8a(local_98,lVar4 + 0x160,puVar5,(uint)(param_4 ^ 1) * 2);
    local_a8 = local_70;
    uVar3 = 0;
    iVar2 = 0;
    local_a0 = local_68 + -1;
    if (local_68 == 0) {
      local_a0 = iVar2;
    }
    cVar1 = FUN_1449072f6(&local_a8,0);
    if (cVar1 != '\0') {
      FUN_140d2bdd2(&local_b8,&local_70);
      local_d8 = local_b8;
      local_d0 = local_b0 + -1;
      if (local_b0 == 0) {
        local_d0 = iVar2;
      }
      local_e8 = local_70;
      local_e0 = local_68 + -1;
      if (local_68 == 0) {
        local_e0 = iVar2;
      }
      FUN_1461c06e2(&local_c8);
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_30 = local_c8;
      local_28 = local_c0 + -1;
      if (local_c0 == 0) {
        local_28 = iVar2;
      }
      FUN_14475bf92(&local_108);
      uVar3 = FUN_1461c09bd(&local_108);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_141238aee(local_98);
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c06e2 FUN_1461c06e2 body=225 status=ok
// SIG undefined FUN_1461c06e2(void)

undefined8 * FUN_1461c06e2(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 *local_240;
  undefined1 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = &local_20;
  local_238 = local_240;
  FUN_1449668a2(&local_240,*param_2,*(undefined4 *)(param_2 + 1));
  local_268 = *param_3;
  uStack_264 = param_3[1];
  uStack_260 = param_3[2];
  uStack_25c = param_3[3];
  FUN_1461c07c4(&local_240);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_250,local_240,(ulonglong)((longlong)local_238 - (longlong)local_240) >> 1);
  if ((undefined8 *)&local_250 == param_1) {
    if (CONCAT44(uStack_24c,local_250) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_250;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_24c;
    *(undefined4 *)(param_1 + 1) = uStack_248;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_244;
  }
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c07c4 FUN_1461c07c4 body=471 status=ok
// SIG undefined FUN_1461c07c4(void)

void FUN_1461c07c4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *local_a0;
  undefined4 local_98;
  code *local_90;
  longlong **local_88;
  longlong local_80;
  int local_78;
  longlong **local_70;
  undefined4 local_68;
  int local_60 [2];
  longlong *local_58;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)*param_1;
  uVar4 = (uint)((ulonglong)(param_1[1] - (longlong)plVar1) >> 1);
  if (uVar4 == 0) {
LAB_1461c093e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  if (*(int *)(param_2 + 1) != 0) {
    if (*(short *)*param_2 == 0x2f) {
      param_1[1] = (longlong)plVar1;
      goto LAB_1461c093e;
    }
    local_50 = (int *)CONCAT44(local_50._4_4_,uVar4);
    local_58 = plVar1;
    uVar3 = FUN_144a98c79(&local_58,0x2f,0);
    if (uVar3 == 0xffffffff) {
      local_60[0] = 2;
    }
    else {
      uVar7 = ~uVar3 + uVar4;
      if ((int)uVar4 <= (int)(~uVar3 + uVar4)) {
        uVar7 = uVar4;
      }
      uVar9 = (ulonglong)uVar7;
      if ((int)uVar7 < 1) {
        uVar9 = 0;
      }
      lVar6 = (longlong)plVar1 + ((longlong)(int)uVar4 * 2 - (ulonglong)(uint)((int)uVar9 * 2));
      local_60[0] = 0;
      do {
        local_58 = (longlong *)CONCAT44(local_58._4_4_,0x3a002e);
        local_68 = 2;
        iVar8 = (int)uVar9;
        local_80 = lVar6;
        local_78 = iVar8;
        local_70 = &local_58;
        uVar4 = FUN_1461c0c01(&local_80,&local_70,0,0);
        if (uVar4 == 0xffffffff) break;
        uVar5 = (ulonglong)(~uVar4 + iVar8);
        if (iVar8 <= (int)(~uVar4 + iVar8)) {
          uVar5 = uVar9;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        lVar6 = (lVar6 + uVar9 * 2) - (ulonglong)(uint)((int)uVar5 * 2);
        iVar8 = local_60[0] + 1;
        bVar2 = local_60[0] < 1;
        uVar9 = uVar5;
        local_60[0] = iVar8;
      } while (bVar2);
    }
    local_50 = local_60;
    local_90 = FUN_1427b8c0e;
    local_a0 = local_60 + 1;
    local_60[1] = 0x2e003a;
    local_98 = 2;
    local_b8 = *(undefined4 *)param_2;
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_b0 = *(undefined4 *)(param_2 + 1);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
    local_88 = &local_58;
    local_58 = param_1;
    FUN_1461de5f2(&local_b8,&local_a0,&local_90,2);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c09bd FUN_1461c09bd body=579 status=ok
// SIG undefined FUN_1461c09bd(void)

ulonglong FUN_1461c09bd(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_1 == 0) {
    uVar6 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_140d57c82();
    if (((int)plVar4[1] != 0) && ((longlong *)*plVar4 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*(longlong *)*plVar4 + 0x30))();
      if (cVar2 != '\0') {
        if (param_1[1] == 0) {
          local_c0 = *param_1;
          FUN_140056680(local_a8,&DAT_149dfb77a);
          FUN_140902cb4(&local_b0,&local_c0);
          FUN_1403f0b60(&local_98,local_c0,local_b0,local_a8);
          *(undefined4 *)param_1 = (undefined4)local_98;
          *(undefined4 *)((longlong)param_1 + 4) = local_98._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
          if (&local_98 == param_1) {
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_1[2] != 0) {
              FUN_1400020a8();
            }
            param_1[2] = local_88;
            *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_80._4_4_;
          }
        }
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_68 = 0xffffffff;
        local_38 = 0;
        local_30 = 0x200000000;
        local_64 = 0;
        uStack_5c = 0;
        local_54 = 0;
        uStack_4c = 0;
        local_44 = 0;
        plVar4 = (longlong *)FUN_14050fd64();
        cVar2 = (**(code **)(*plVar4 + 0x428))(plVar4,param_1,&local_98);
        if (cVar2 != '\0') {
          FUN_14163426a(&local_98,&local_c0);
          lVar1 = local_c0;
          if ((longlong)local_b8 != 0) {
            lVar5 = (longlong)local_b8 * 4;
            lVar7 = 0;
            do {
              cVar2 = FUN_14163428b(*(undefined4 *)(lVar1 + lVar7));
              if (cVar2 != '\0') {
                uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
                goto LAB_1461c0b3b;
              }
              lVar7 = lVar7 + 4;
            } while (lVar5 != lVar7);
          }
        }
        uVar6 = 0;
LAB_1461c0b3b:
        FUN_14128b0c2(&local_98);
        goto LAB_1461c0b45;
      }
    }
    local_c0 = *param_1;
    if (local_c0 == 0) {
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_1400021e4(&local_c0,&local_98);
    }
    uVar3 = FUN_14166d522(&local_98,0,1);
    uVar6 = (ulonglong)uVar3;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1461c0b45:
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c0c01 FUN_1461c0c01 body=659 status=ok
// SIG undefined FUN_1461c0c01(void)

ulonglong FUN_1461c0c01(undefined8 *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ushort **ppuVar9;
  longlong lVar10;
  undefined1 auStack_d8 [39];
  byte local_b1;
  ulonglong local_b0;
  ushort **local_a8;
  ulonglong local_a0;
  ushort *local_98;
  int local_90;
  undefined4 local_8c;
  ushort **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar7 = 0xffffffff;
  if ((longlong)(int)uVar4 != 0) {
    puVar2 = (undefined2 *)*param_2;
    puVar3 = (ushort *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    if (uVar4 == 1) {
      local_8c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_98 = puVar3;
      local_90 = iVar1;
      uVar4 = FUN_144aff2e5(&local_98,*puVar2);
      uVar7 = (ulonglong)uVar4;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else if (param_3 == 0) {
      if (0 < iVar1) {
        puVar5 = puVar3;
        do {
          puVar8 = (undefined2 *)0x0;
          lVar6 = 0;
          do {
            if (puVar2[lVar6] == *puVar5) {
              if (puVar2 != puVar8) {
                if (param_4 != (undefined4 *)0x0) {
                  *param_4 = (int)lVar6;
                }
                uVar7 = (ulonglong)((longlong)puVar5 - (longlong)puVar3) >> 1 & 0xffffffff;
                goto LAB_1461c0c8f;
              }
              break;
            }
            lVar6 = lVar6 + 1;
            puVar8 = puVar8 + -1;
          } while ((longlong)(int)uVar4 * -2 - (longlong)puVar8 != 0);
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar3 + iVar1);
      }
    }
    else {
      local_b0 = (ulonglong)uVar4;
      local_58 = (ushort **)0x0;
      local_50 = 0x2000000000;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_b0);
      }
      if (0x20 < uVar4) {
        FUN_14682d868(&local_98);
      }
      local_b0 = local_b0 * 2;
      lVar6 = 0;
      local_a8 = &local_98;
      do {
        uVar7 = local_50;
        local_a0 = (ulonglong)*(ushort *)((longlong)puVar2 + lVar6);
        local_b1 = 0x19 < *(ushort *)((longlong)puVar2 + lVar6) - 0x61;
        lVar10 = (longlong)(int)local_50;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          FUN_14682d932(&local_98,uVar7 & 0xffffffff);
        }
        ppuVar9 = local_58;
        if (local_58 == (ushort **)0x0) {
          ppuVar9 = &local_98;
        }
        *(ushort *)((longlong)ppuVar9 + lVar10 * 2) =
             (short)local_a0 + (ushort)local_b1 * 0x20 + -0x20;
        lVar6 = lVar6 + 2;
      } while (local_b0 != lVar6);
      uVar7 = 0xffffffff;
      if (0 < iVar1) {
        if (local_58 != (ushort **)0x0) {
          local_a8 = local_58;
        }
        puVar5 = puVar3;
        do {
          if ((int)local_50 != 0) {
            ppuVar9 = (ushort **)0x0;
            lVar6 = 0;
            do {
              if (*(short *)((longlong)local_a8 + lVar6 * 2) ==
                  (ushort)((ushort)(0x19 < *puVar5 - 0x61) * 0x20 + *puVar5 + -0x20)) {
                if (local_a8 != ppuVar9) {
                  if (param_4 != (undefined4 *)0x0) {
                    *param_4 = (int)lVar6;
                  }
                  uVar7 = (ulonglong)((longlong)puVar5 - (longlong)puVar3) >> 1 & 0xffffffff;
                  goto LAB_1461c0e57;
                }
                break;
              }
              lVar6 = lVar6 + 1;
              ppuVar9 = (ushort **)((longlong)ppuVar9 + -2);
            } while (-(longlong)ppuVar9 != (longlong)(int)local_50 * 2);
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar3 + iVar1);
      }
LAB_1461c0e57:
      if (local_58 != (ushort **)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1461c0c8f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1461c0e96 FUN_1461c0e96 body=386 status=ok
// SIG undefined FUN_1461c0e96(void)

longlong *
FUN_1461c0e96(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x688,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ef1af0;
  plVar1 = plVar5 + 2;
  FUN_140764bf0(plVar1);
  local_40 = plVar1;
  local_38 = plVar5;
  FUN_1461c101a(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_1461c0f3f;
    param_1[1] = 0;
LAB_1461c0fb0:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461c0f3f;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (local_38 != plVar5) {
      param_1[1] = (longlong)local_38;
      if (plVar5 == (longlong *)0x0) goto LAB_1461c0f3f;
      goto LAB_1461c0fb0;
    }
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461c0f3f;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461c0f3f:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  lVar4 = *param_1;
  FUN_1446ddc76(&local_40,param_2,1);
  *(longlong **)(lVar4 + 0x1d8) = local_40;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c101a FUN_1461c101a body=162 status=ok
// SIG undefined FUN_1461c101a(void)

void FUN_1461c101a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461c1059;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461c1059;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461c1059:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c10b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461c10bc FUN_1461c10bc body=281 status=ok
// SIG undefined FUN_1461c10bc(void)

void FUN_1461c10bc(longlong param_1,uint param_2,longlong param_3,longlong param_4,char param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
    return;
  }
  if (-1 < (int)param_2) {
    if ((int)param_2 < *(int *)(param_1 + 0x40)) {
      FUN_140d9183c(param_1);
      FUN_140d919e2(param_1);
      lVar1 = (ulonglong)param_2 * 0x88;
      lVar2 = FUN_1409d448e(*(longlong *)(param_1 + 0x38) + lVar1 + 0x18);
      if ((lVar2 == param_3) &&
         (lVar2 = FUN_145e08e5c(*(longlong *)(param_1 + 0x38) + lVar1), lVar2 == param_4)) {
        if ((param_5 != '\0') && ((int)param_2 < *(int *)(param_1 + 0x40))) {
          FUN_145be4800(lVar1 + *(longlong *)(param_1 + 0x38),0x3f800000,0x3f800000,0);
        }
      }
      else {
        FUN_1461c11d6(*(longlong *)(param_1 + 0x38) + lVar1,param_3,param_4,
                      *(undefined8 *)(param_1 + 0x30));
        if ((param_5 != '\0') && ((int)param_2 < *(int *)(param_1 + 0x40))) {
          FUN_145be4800(lVar1 + *(longlong *)(param_1 + 0x38),0x3f800000,0x3f800000,0);
        }
        FUN_14036aa1c(param_1);
        FUN_1447f69b6(param_1 + 0x18);
        *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
        FUN_14036aa80(param_1);
      }
      FUN_14036abb0(param_1);
      FUN_14036b0fc(param_1);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 1461c11d6 FUN_1461c11d6 body=130 status=ok
// SIG undefined FUN_1461c11d6(void)

void FUN_1461c11d6(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a79b68(&local_30);
  if (*(longlong *)(param_1 + 0x18) != local_30) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(longlong *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 8) = param_3;
  *param_1 = 0;
  FUN_140609c6a(param_1 + 0x30);
  FUN_140ecf14c(param_1,param_4,*(undefined8 *)(param_1 + 0x10));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c125a FUN_1461c125a body=44 status=ok
// SIG undefined FUN_1461c125a(void)

void FUN_1461c125a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1461c1286(uVar1);
  DAT_14cad3738 = uVar1;
  return;
}



// FUNCTION 1461c1286 FUN_1461c1286 body=505 status=ok
// SIG undefined FUN_1461c1286(void)

undefined8 * FUN_1461c1286(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14a8994f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar4 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14a899590;
  local_50[3] = param_1;
  local_50[4] = FUN_1410d77ca;
  local_58 = 0x41200000;
  FUN_1405f67fc(uVar4,&local_40,&local_50,
                L"FTextRenderComponentMIDCache_PurgeUnreferencedMIDsTicker");
  if (param_1 + 7 != &local_40) {
    param_1[7] = local_40;
    local_40 = 0;
    plVar2 = (longlong *)param_1[8];
    param_1[8] = local_38;
    local_38 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c1480 FUN_1461c1480 body=465 status=ok
// SIG undefined FUN_1461c1480(void)

void FUN_1461c1480(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar2 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uVar1 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar1);
  local_58 = local_38;
  uVar2 = FUN_1461c1652(local_24,local_30,&local_68,uVar2);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c1652 FUN_1461c1652 body=220 status=ok
// SIG undefined FUN_1461c1652(void)

undefined8
FUN_1461c1652(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_3;
  uVar2 = FUN_14477b664(param_3[1]);
  local_68 = FUN_14477b664(uVar2);
  local_60 = param_3[2];
  local_78 = param_4;
  FUN_1461c1730(local_58,param_1,param_2,&local_70);
  uVar2 = FUN_14030a32e(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_58;
    if (0x18 < local_40) {
      pppuVar3 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c1730 FUN_1461c1730 body=689 status=ok
// SIG undefined FUN_1461c1730(void)

longlong FUN_1461c1730(longlong param_1,char param_2,longlong *param_3,longlong *param_4,
                      longlong param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == '\0') {
    if (param_3 != (longlong *)0x0) {
      lVar2 = FUN_144a82bde();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
         (plVar4 = param_3,
         *(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) {
LAB_1461c17a1:
        FUN_14108b31e(plVar4,local_70,param_5);
        local_a0[0] = 0;
        local_78 = 0;
        FUN_1456bb102(local_a0,param_3);
        FUN_1447c3578(local_70,param_1,local_a0);
        FUN_144a5ac3a(local_a0);
LAB_1461c17df:
        FUN_144a2da94(local_70);
        goto LAB_1461c17e4;
      }
    }
  }
  else if (param_2 == '\x01') {
    if (param_3 != (longlong *)0x0) {
      uVar3 = FUN_144a7c80a();
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_144a7c80a();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
          uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar2 = param_4[1];
          if (lVar2 == 0) {
            uVar6 = FUN_140feeb70();
            lVar2 = FUN_14477b664(uVar6);
            param_4[1] = lVar2;
          }
          lVar7 = param_4[2];
          if (((lVar7 == 0) && (lVar7 = 0, lVar2 != 0)) && (*param_4 != 0)) {
            plVar4 = *(longlong **)(lVar2 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
              lVar7 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar7 = FUN_144aff482(uVar6,param_4);
            }
            param_4[2] = lVar7;
          }
          plVar4 = (longlong *)FUN_144b39ca2(uVar3,lVar7,0);
          if (plVar4 != (longlong *)0x0) goto LAB_1461c17a1;
        }
      }
    }
  }
  else if ((param_2 == '\x02') && (param_3 != (longlong *)0x0)) {
    uVar3 = FUN_144a7c80a();
    plVar4 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_144a7c80a();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = (**(code **)(*(longlong *)(lVar2 + 0x1a8) + 0x38))(lVar2 + 0x1a8,param_5);
        lVar2 = lVar7 + 0x10;
        if (lVar7 == 0) {
          lVar2 = param_5 + 0x30;
        }
        FUN_14034cca6(local_70,lVar2);
        local_a0[0] = 0;
        local_78 = 0;
        FUN_1456bb102(local_a0,param_3);
        FUN_1447c3578(local_70,param_1,local_a0);
        FUN_144a5ac3a(local_a0);
        goto LAB_1461c17df;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_1461c17e4:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461c19e2 FUN_1461c19e2 body=54 status=ok
// SIG undefined FUN_1461c19e2(void)

void FUN_1461c19e2(void)

{
  FUN_1416342d8();
  if (DAT_14c9a3c88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3c68 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461c1a24 FUN_1461c1a24 body=1509 status=ok
// SIG undefined FUN_1461c1a24(void)

undefined8 * FUN_1461c1a24(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14b4d9550;
  param_1[7] = &PTR_FUN_14b4d9d98;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  param_1[9] = 0x407f400000000000;
  param_1[10] = 0x3f80000000000000;
  param_1[0xb] = 0x1441200000;
  *(undefined4 *)(param_1 + 0xc) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 100) = 0x101;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    plVar1 = param_1 + 0x17;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_1461c200a(plVar1,0);
    puVar3 = (undefined8 *)param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_240",1);
    *puVar3 = 0x4010ab020c49ba5e;
    puVar3[1] = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_180",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x40163d70a3d70a3d;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_120",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4020a8f5c28f5c29;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_90",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x40263851eb851eb8;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_60",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4030ab851eb851ec;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_55",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4032333333333333;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_50",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4034000000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_30",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4040aa3d70a3d70a;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_25",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4044000000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_20",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4049000000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_10",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x4059000000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = param_1[0x17];
    FUN_1446ddc76(&local_40,"fps_4",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x406f400000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
    iVar2 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc4) < iVar2 + 1U) {
      FUN_1461c200a(plVar1,iVar2);
    }
    lVar4 = *plVar1;
    FUN_1446ddc76(&local_40,"fps_2",1);
    *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = 0x407f400000000000;
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = local_40;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c200a FUN_1461c200a body=132 status=ok
// SIG undefined FUN_1461c200a(void)

void FUN_1461c200a(longlong param_1,int param_2)

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



// FUNCTION 1461c2090 FUN_1461c2090 body=404 status=ok
// SIG undefined FUN_1461c2090(void)

undefined4 * FUN_1461c2090(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461c2226(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  cVar7 = FUN_1461c230e(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1461c2402(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2226 FUN_1461c2226 body=231 status=ok
// SIG undefined FUN_1461c2226(void)

int * FUN_1461c2226(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1461c230e FUN_1461c230e body=242 status=ok
// SIG undefined FUN_1461c230e(void)

undefined8 FUN_1461c230e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_140b72608(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_140b72608(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_145a43212(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148a768e2(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_1461c237b;
    }
  }
  uVar13 = 0;
LAB_1461c237b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2402 FUN_1461c2402 body=501 status=ok
// SIG undefined FUN_1461c2402(void)

void FUN_1461c2402(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c25f8 FUN_1461c25f8 body=45 status=ok
// SIG undefined FUN_1461c25f8(void)

void FUN_1461c25f8(undefined8 param_1,longlong param_2)

{
  FUN_141001072();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_1461c2626(param_1);
    return;
  }
  return;
}



// FUNCTION 1461c2626 FUN_1461c2626 body=507 status=ok
// SIG undefined FUN_1461c2626(void)

void FUN_1461c2626(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  local_38 = 0x100000000;
  if (0 < *(int *)(param_1 + 0x560)) {
    lVar4 = param_1 + 0x100;
    lVar6 = 0;
    do {
      FUN_145b24cb6(&local_58,lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x118;
    } while (lVar6 < *(int *)(param_1 + 0x560));
  }
  lVar4 = local_40;
  local_60 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_60[1] = (longlong)&DAT_100000001;
  *local_60 = (longlong)&PTR_FUN_14a492060;
  local_68 = local_60 + 2;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 2;
  if (lVar4 == 0) {
    local_60[9] = local_48;
    *(undefined4 *)(local_60 + 7) = local_58;
    *(undefined4 *)((longlong)local_60 + 0x3c) = uStack_54;
    *(undefined4 *)(local_60 + 8) = uStack_50;
    *(undefined4 *)((longlong)local_60 + 0x44) = uStack_4c;
  }
  local_60[10] = lVar4;
  local_40 = 0;
  *(undefined4 *)(local_60 + 0xb) = (undefined4)local_38;
  *(undefined4 *)((longlong)local_60 + 0x5c) = local_38._4_4_;
  local_38 = 0x100000000;
  FUN_140aec6f8(&local_68);
  plVar1 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1461c2759;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1461c27bf:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461c2759;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_68;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_60 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_60;
      if (plVar5 == (longlong *)0x0) goto LAB_1461c2759;
      goto LAB_1461c27bf;
    }
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461c2759;
    (**(code **)*local_60)(local_60);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461c2759:
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c282e FUN_1461c282e body=542 status=ok
// SIG undefined FUN_1461c282e(void)

undefined8 * FUN_1461c282e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b5b2e50;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  memset(param_1 + 5,0,0x138);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  FUN_1413a517a(param_1 + 5,&DAT_14c965610);
  FUN_1413a517a(param_1 + 8,&DAT_14c965280);
  FUN_1413a517a(param_1 + 0xb,&DAT_14c965298);
  FUN_1413a517a(param_1 + 0xe,&DAT_14c965178);
  FUN_1413a517a(param_1 + 0x11,&DAT_14c965190);
  FUN_1413a517a(param_1 + 0x14,&DAT_14c9651a8);
  FUN_1413a517a(param_1 + 0x17,&DAT_14c9651c0);
  FUN_1413a517a(param_1 + 0x1a,&DAT_14c9651d8);
  FUN_1413a517a(param_1 + 0x1d,&DAT_14c9651f0);
  FUN_1413a517a(param_1 + 0x20,&DAT_14c965208);
  FUN_1413a517a(param_1 + 0x23,&DAT_14c965220);
  FUN_1413a517a(param_1 + 0x26,&DAT_14c965238);
  FUN_1413a517a(param_1 + 0x29,&DAT_14c965250);
  param_1[0x2c] = 0x4120000041200000;
  param_1[0x2d] = 0x4120000041200000;
  return param_1;
}



// FUNCTION 1461c2a4c FUN_1461c2a4c body=169 status=ok
// SIG undefined FUN_1461c2a4c(void)

void FUN_1461c2a4c(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14060e84c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1461c2af6(lVar1 + 0x3490,local_20,param_1);
      FUN_1461c2af6(lVar1 + 0x34a8,local_20,param_1);
      FUN_1461c2af6(lVar1 + 0x34c0,local_20,param_1);
    }
  }
  FUN_146129854(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2af6 FUN_1461c2af6 body=244 status=ok
// SIG undefined FUN_1461c2af6(void)

undefined8 FUN_1461c2af6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b968270;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b968200;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148d11826;
  FUN_14598db50(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2bec FUN_1461c2bec body=213 status=ok
// SIG undefined FUN_1461c2bec(void)

void FUN_1461c2bec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_1461c2cc2(param_2,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1461c2d60(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2cc2 FUN_1461c2cc2 body=157 status=ok
// SIG undefined FUN_1461c2cc2(void)

undefined8 * FUN_1461c2cc2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4e9dc0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = &local_48;
  FUN_1461c2e02(puVar1 + 2,param_1,param_2,param_3);
  FUN_1449db362(&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2d60 FUN_1461c2d60 body=162 status=ok
// SIG undefined FUN_1461c2d60(void)

void FUN_1461c2d60(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461c2d9f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461c2d9f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461c2d9f:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c2dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461c2e02 FUN_1461c2e02 body=297 status=ok
// SIG undefined FUN_1461c2e02(void)

undefined8 *
FUN_1461c2e02(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[4] = param_2;
  *param_1 = &PTR_FUN_14b4e9de0;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_3);
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = *param_5;
  *param_5 = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(longlong *)(param_1[4] + 0x40) != 0) {
    FUN_14119d664(*(longlong *)(param_1[4] + 0x40),&local_50);
    if (param_1 + 10 == &local_50) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[10] != 0) {
        FUN_1400020a8();
      }
      param_1[10] = local_50;
      *(undefined4 *)(param_1 + 0xb) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x5c) = local_44;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c2f32 FUN_1461c2f32 body=549 status=ok
// SIG undefined FUN_1461c2f32(void)

void FUN_1461c2f32(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = 0;
  if (*(int *)(param_1 + 0x790) != *(int *)(param_1 + 0x7bc)) {
    lVar5 = param_1 + 0x7c0;
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x7c8);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 2000) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x788);
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar5 + lVar6 * 0x18) == param_2) {
          lVar5 = *(longlong *)(lVar5 + 8 + lVar6 * 0x18);
          local_30[0] = lVar5;
          FUN_14581b41a();
          if ((lVar5 != 0) && (plVar4 = (longlong *)FUN_140a68038(1), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
            if (local_48 != (longlong *)0x0) {
              (**(code **)(*local_48 + 0x218))(local_48,local_30);
            }
            plVar4 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_40)(plStack_40);
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
          break;
        }
        iVar3 = *(int *)(lVar5 + lVar6 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if (*(int *)(param_1 + 0x740) != *(int *)(param_1 + 0x76c)) {
    lVar5 = param_1 + 0x770;
    if (*(longlong *)(param_1 + 0x778) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x778);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x780) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x738);
      do {
        lVar6 = (longlong)iVar3;
        if (*(uint *)(lVar5 + lVar6 * 0x18) == param_2) {
          lVar5 = *(longlong *)(lVar5 + 8 + lVar6 * 0x18);
          local_50 = lVar5;
          FUN_14581b41a();
          if (lVar5 != 0) {
            FUN_140b708a0(param_1);
            local_30[1] = 0;
            plVar4 = (longlong *)FUN_1401e3228();
            if (plVar4 == (longlong *)0x0) {
              local_48 = (longlong *)0x0;
              plStack_40 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
              if (local_48 != (longlong *)0x0) {
                (**(code **)(*local_48 + 0x218))(local_48,&local_50);
              }
            }
            plVar4 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_40)(plStack_40);
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
          break;
        }
        iVar3 = *(int *)(lVar5 + lVar6 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if ((local_30[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c3158 FUN_1461c3158 body=1156 status=ok
// SIG undefined FUN_1461c3158(void)

void FUN_1461c3158(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + -0x30;
  FUN_141237e80();
  lVar3 = FUN_1408bb964(param_1 + 0x14);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (lVar4 != 0) {
        lVar5 = FUN_140b6d0be();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          local_50 = (code *)&LAB_14602f060;
          local_48 = 0;
          FUN_1461c35de(lVar4 + 0x228,&local_60,lVar1,&local_50);
          *(code **)(param_1 + 0x80) = local_60;
          local_50 = (code *)&LAB_14602f06e;
          local_48 = 0;
          FUN_1461c35de(lVar4 + 0x240,&local_60,lVar1,&local_50);
          *(code **)(param_1 + 0x88) = local_60;
        }
      }
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar2 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4f5500;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      *(longlong *)(local_60 + 0x10) = lVar5;
      *(undefined ***)local_60 = &PTR_FUN_14b9a8980;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,lVar1);
      *(longlong *)(pcVar2 + 0x20) = lVar1;
      uVar6 = FUN_144a7af92(lVar3);
      uVar7 = FUN_14001cc68(0xd8,0x10);
      local_50 = local_60;
      local_60 = (code *)0x0;
      local_48 = local_58;
      local_58 = 0;
      FUN_14127c25a(uVar7,uVar6);
      lVar4 = *(longlong *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = uVar7;
      if (lVar4 != 0) {
        FUN_14127b218(lVar4);
        FUN_1400020a8(lVar4);
      }
      FUN_1449db362(&local_60);
      lVar3 = FUN_140b64196(lVar3);
      if (lVar3 != 0) {
        uVar6 = FUN_14586d25c(lVar3);
        local_50 = FUN_145cafe96;
        local_48 = 0;
        FUN_1461c36de(uVar6,&local_60,lVar1);
        *(code **)(param_1 + 0x90) = local_60;
      }
    }
  }
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar2 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14b982300;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14b9a8a60;
  *(undefined8 *)(local_50 + 0x18) = 0;
  FUN_14485c47a(local_50 + 0x18,lVar1);
  *(longlong *)(pcVar2 + 0x20) = lVar1;
  FUN_14112c702(&DAT_14cbd0b90,&local_60,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar2 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14b982300;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14b9a8ad0;
  *(undefined8 *)(local_50 + 0x18) = 0;
  FUN_14485c47a(local_50 + 0x18,lVar1);
  *(longlong *)(pcVar2 + 0x20) = lVar1;
  FUN_14112c702(&DAT_14cbd0b48,&local_60,&local_50);
  FUN_1449db362(&local_50);
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  pcVar2 = local_50;
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14b9a8b40;
  *(undefined8 *)(local_50 + 0x18) = 0;
  FUN_14485c47a(local_50 + 0x18,lVar1);
  *(longlong *)(pcVar2 + 0x20) = lVar1;
  FUN_141211c46(&DAT_14c9647a0,&local_60,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c35de FUN_1461c35de body=254 status=ok
// SIG undefined FUN_1461c35de(void)

undefined8
FUN_1461c35de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4f38d0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a8910;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a5cf80(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c36de FUN_1461c36de body=254 status=ok
// SIG undefined FUN_1461c36de(void)

undefined8
FUN_1461c36de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b978e50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a89f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586ec72(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c37de FUN_1461c37de body=315 status=ok
// SIG undefined FUN_1461c37de(void)

longlong FUN_1461c37de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1461c391a();
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  memset((void *)(param_1 + 0x18),0,0x290);
  *(undefined8 *)(param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = param_2;
  *(undefined4 *)(param_1 + 0x3e0) = param_4;
  *(undefined4 *)(param_1 + 0x3e4) = param_4;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  *(undefined1 *)(param_1 + 0x3f1) = DAT_14c75f3e4;
  *(undefined8 *)(param_1 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3fc) = 0xffffffff;
  return param_1;
}



// FUNCTION 1461c391a FUN_1461c391a body=94 status=ok
// SIG undefined FUN_1461c391a(void)

int * FUN_1461c391a(int *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)(param_2 + -1 + (uint)(param_2 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = iVar3;
  FUN_1461c3978(param_1 + 2);
  memset(*(void **)(param_1 + 2),0,(longlong)iVar3 * 0x18);
  *param_1 = param_1[4] + -1;
  return param_1;
}



// FUNCTION 1461c3978 FUN_1461c3978 body=147 status=ok
// SIG undefined FUN_1461c3978(void)

void FUN_1461c3978(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1461c3a0c FUN_1461c3a0c body=40 status=ok
// SIG undefined FUN_1461c3a0c(void)

void FUN_1461c3a0c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001461c3a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1461c3a34 FUN_1461c3a34 body=19 status=ok
// SIG undefined FUN_1461c3a34(void)

undefined8 FUN_1461c3a34(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1461c3a4c FUN_1461c3a4c body=62 status=ok
// SIG undefined FUN_1461c3a4c(void)

ulonglong * FUN_1461c3a4c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar3 & 1) != 0) {
    uVar3 = ((longlong)uVar3 >> 0x18) + param_1 + 0x20;
  }
  *param_2 = uVar3;
  *(int *)(param_2 + 1) = iVar2 / (int)((uint)bVar1 * 2 + 2);
  *(byte *)((longlong)param_2 + 0xc) = bVar1;
  return param_2;
}



// FUNCTION 1461c3a8a FUN_1461c3a8a body=38 status=ok
// SIG undefined FUN_1461c3a8a(void)

undefined8 FUN_1461c3a8a(undefined8 param_1,int param_2)

{
  FUN_1461c3ab0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461c3ab0 FUN_1461c3ab0 body=885 status=ok
// SIG undefined FUN_1461c3ab0(void)

void FUN_1461c3ab0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba4abc0;
  param_1[1] = &PTR_FUN_14ba4abf8;
  param_1[0xac] = &PTR_LAB_14ba4b030;
  if ((*(byte *)(param_1 + 0xad) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0xac);
  }
  param_1[0xa7] = &PTR_LAB_14ba4aed0;
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0xa7);
  }
  param_1[0xa2] = &PTR_LAB_14ba4b030;
  if ((*(byte *)(param_1 + 0xa3) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0xa2);
  }
  param_1[0x9d] = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 0x9e) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x9d);
  }
  param_1[0x98] = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 0x99) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x98);
  }
  param_1[0x93] = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x93);
  }
  param_1[0x8e] = &PTR_LAB_14ba4aed0;
  if ((*(byte *)(param_1 + 0x8f) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x8e);
  }
  param_1[0x89] = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 0x8a) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x89);
  }
  param_1[0x84] = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 0x85) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x84);
  }
  param_1[0x7f] = &PTR_LAB_14ba4af30;
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x7f);
  }
  param_1[0x7a] = &PTR_LAB_14ba46eb0;
  if ((*(byte *)(param_1 + 0x7b) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x7a);
  }
  param_1[0x75] = &PTR_LAB_14ba4aed0;
  if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x75);
  }
  param_1[0x70] = &PTR_LAB_14ba4ae90;
  if ((*(byte *)(param_1 + 0x71) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x70);
  }
  param_1[0x6b] = &PTR_LAB_14ba4ae30;
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x6b);
  }
  param_1[0x66] = &PTR_LAB_14ba4ae30;
  if ((*(byte *)(param_1 + 0x67) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x66);
  }
  param_1[0x61] = &PTR_LAB_14ba4adf0;
  if ((*(byte *)(param_1 + 0x62) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x61);
  }
  param_1[0x5c] = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 0x5d) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x5c);
  }
  param_1[0x57] = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x57);
  }
  param_1[0x52] = &PTR_LAB_14ba4ad30;
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x52);
  }
  param_1[0x4d] = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x4d);
  }
  param_1[0x48] = &PTR_LAB_14ba4ad30;
  if ((*(byte *)(param_1 + 0x49) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x48);
  }
  param_1[0x43] = &PTR_LAB_14ba4acf0;
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x43);
  }
  param_1[0x3e] = &PTR_LAB_14ba4ac70;
  if ((*(byte *)(param_1 + 0x3f) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x3e);
  }
  param_1[0x39] = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 0x3a) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x39);
  }
  param_1[0x34] = &PTR_LAB_14ba4ac70;
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x34);
  }
  param_1[0x2f] = &PTR_LAB_14ba4ac30;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    SteamAPI_UnregisterCallback(param_1 + 0x2f);
  }
  FUN_1461c3e26(param_1);
  return;
}



// FUNCTION 1461c3e26 FUN_1461c3e26 body=190 status=ok
// SIG undefined FUN_1461c3e26(void)

void FUN_1461c3e26(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b435f60;
  param_1[1] = &PTR_LAB_14b435f98;
  FUN_14018802a(param_1[0x2c]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (param_1[0x1e] == 0) goto LAB_1461c3e98;
  while( true ) {
    FUN_1400020a8();
LAB_1461c3e98:
    if ((undefined8 *)param_1[0x1d] == (undefined8 *)0x0) break;
    param_1[0x1d] = *(undefined8 *)param_1[0x1d];
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
                    /* WARNING: Could not recover jumptable at 0x0001461c3eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1461c3ef0 FUN_1461c3ef0 body=901 status=ok
// SIG undefined FUN_1461c3ef0(void)

undefined8 * FUN_1461c3ef0(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cf520;
  FUN_1461c4276(param_1 + 8);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  param_1[0x3a] = 0;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xf12);
  *(undefined1 *)((longlong)param_1 + 0x32) = 0xc;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_40,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xf2);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar1);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1413336e6();
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    local_60 = param_1[2];
    if ((local_60 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_68 = FUN_1412217cc();
    if ((local_68 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_68);
    }
    FUN_140909372(&local_68,&local_60);
    lVar4 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 0xbc + lVar4 * 2);
      local_70 = param_1[2];
      if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c();
      }
      FUN_14118c742(&local_70,uVar1);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 9);
    uVar1 = *(undefined2 *)(lVar3 + 0xf12);
    local_78 = param_1[2];
    if ((local_78 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_78,uVar1);
    local_80 = param_1[2];
    if ((local_80 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_88 = FUN_1459e4b3c();
    if ((local_88 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_88);
    }
    FUN_140909372(&local_88,&local_80);
    local_90 = param_1[2];
    if ((local_90 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_98 = FUN_14099c56c();
    if ((local_98 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_98);
    }
    FUN_140909372(&local_98,&local_90);
    local_a0 = FUN_145957a0a();
    if (local_a0 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_a0);
    }
    local_a8 = param_1[2];
    if ((local_a8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_a8,&local_a0);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4276 FUN_1461c4276 body=201 status=ok
// SIG undefined FUN_1461c4276(void)

void FUN_1461c4276(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x8000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}



// FUNCTION 1461c4340 FUN_1461c4340 body=300 status=ok
// SIG undefined FUN_1461c4340(void)

void FUN_1461c4340(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (param_2 == '\0') {
      local_40 = *(undefined8 **)(param_1 + 0x38);
      iVar2 = FUN_1411eec94();
      pcVar4 = FUN_14606db20;
    }
    else {
      iVar2 = FUN_1411eec94(param_1 + 0xdc);
      pcVar4 = FUN_148a7aef2;
    }
    local_29 = iVar2 == 1;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_40[2] = lVar3;
    *local_40 = &PTR_FUN_14b4e99c0;
    local_40[3] = param_1;
    local_40[4] = pcVar4;
    *(undefined4 *)(local_40 + 5) = 0;
    FUN_1461c446e(param_1,param_1,&local_29,&local_40);
    FUN_1449db362(&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c446e FUN_1461c446e body=213 status=ok
// SIG undefined FUN_1461c446e(void)

void FUN_1461c446e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_1461c4544(param_2,param_3,param_4);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_1461c45e4(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4544 FUN_1461c4544 body=159 status=ok
// SIG undefined FUN_1461c4544(void)

undefined8 * FUN_1461c4544(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14b4ea3a0;
  uVar1 = *param_2;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar3 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  puVar3[6] = param_1;
  puVar3[2] = &PTR_FUN_14b4ea3c0;
  *(undefined1 *)(puVar3 + 7) = uVar1;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  FUN_14114e6dc(puVar3 + 8,param_3);
  *(undefined1 *)(puVar3 + 10) = 0;
  return puVar3;
}



// FUNCTION 1461c45e4 FUN_1461c45e4 body=162 status=ok
// SIG undefined FUN_1461c45e4(void)

void FUN_1461c45e4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461c4623;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461c4623;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461c4623:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c4682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461c4686 FUN_1461c4686 body=499 status=ok
// SIG undefined FUN_1461c4686(void)

void FUN_1461c4686(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 **local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88 [3];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140056680(local_40,L"Zeppelin");
  FUN_140056680(local_50,&DAT_149e8e77a);
  FUN_140056680(local_60,L"/v2_0/qos_servers");
  FUN_140056680(local_70,L"Content-Type:application/json\r\n");
  local_88[0] = 0;
  local_88[1] = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_1461c487a(&local_a8,param_2);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  local_90 = 3;
  *local_98 = &PTR_LAB_14b4da920;
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
  local_98[2] = lVar2;
  *local_98 = &PTR_FUN_14b4da8b0;
  local_98[3] = local_a8;
  local_a8 = 0;
  *(undefined4 *)(local_98 + 4) = local_a0;
  local_a0 = 0;
  local_c0 = local_88;
  local_c8 = local_70;
  local_b8 = &local_98;
  FUN_1461c48f7(param_1,local_40,local_50,local_60);
  FUN_1449db362(&local_a8);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c487a FUN_1461c487a body=124 status=ok
// SIG undefined FUN_1461c487a(void)

void FUN_1461c487a(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 1461c48f7 FUN_1461c48f7 body=489 status=ok
// SIG undefined FUN_1461c48f7(void)

void FUN_1461c48f7(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  code *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1401e7e86(local_c8);
  FUN_1401e7e86(local_e8,param_3);
  FUN_1401e7e86(local_108,param_4);
  FUN_1401e7e86(local_128,param_5);
  FUN_1401e7e86(local_148,param_6);
  local_160 = 0;
  FUN_14485c47a(&local_160,param_1);
  local_a0 = *param_7;
  *param_7 = 0;
  local_98 = *(undefined4 *)(param_7 + 1);
  *(undefined4 *)(param_7 + 1) = 0;
  local_68 = FUN_143ef71ca;
  local_60 = &LAB_143ef72ea;
  local_58 = &LAB_143ef7310;
  local_50 = FUN_143ef7344;
  local_a8 = local_160;
  local_158 = 0;
  local_150 = 0;
  FUN_14482e566(local_148);
  FUN_14482e566(local_128);
  FUN_14482e566(local_108);
  FUN_14482e566(local_e8);
  FUN_14482e566(local_c8);
  local_170 = local_138;
  local_178 = local_118;
  local_168 = &local_a8;
  bifrost::experimental::issueHTTPRequest
            (*(undefined8 *)(param_1 + 0x2b8),local_b8,local_d8,local_f8);
  FUN_1449db362(&local_158);
  FUN_1401e7e48(local_148);
  FUN_1401e7e48(local_128);
  FUN_1401e7e48(local_108);
  FUN_1401e7e48(local_e8);
  FUN_1401e7e48(local_c8);
  FUN_1449db362(param_7);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4ae2 FUN_1461c4ae2 body=340 status=ok
// SIG undefined FUN_1461c4ae2(void)

void FUN_1461c4ae2(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = **(undefined2 **)(param_2 + 0x18);
  local_10e = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_1461c4c38(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_140e8e1f0;
  local_30 = 3;
  local_148 = param_2;
  FUN_1461c4d82(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4c38 FUN_1461c4c38 body=148 status=ok
// SIG undefined FUN_1461c4c38(void)

undefined8 * FUN_1461c4c38(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1461c4cce(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4cce FUN_1461c4cce body=178 status=ok
// SIG undefined FUN_1461c4cce(void)

void FUN_1461c4cce(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c4d82 FUN_1461c4d82 body=566 status=ok
// SIG undefined FUN_1461c4d82(void)

int * FUN_1461c4d82(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (cVar4 = FUN_1461c5012(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1461c4f16;
  }
  plVar5 = (longlong *)FUN_1461c50bc(param_1,param_7);
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_1461c4fba(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1461f34d0;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1461c4ee9;
    }
  }
  else {
LAB_1461c4ee9:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1461c4f16:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461c4fba FUN_1461c4fba body=87 status=ok
// SIG undefined FUN_1461c4fba(void)

void FUN_1461c4fba(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  return;
}



// FUNCTION 1461c5012 FUN_1461c5012 body=170 status=ok
// SIG undefined FUN_1461c5012(void)

undefined8 FUN_1461c5012(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 1461c50bc FUN_1461c50bc body=180 status=ok
// SIG undefined FUN_1461c50bc(void)

undefined8 * FUN_1461c50bc(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c1850;
  puVar4[2] = &PTR_FUN_14a4c1868;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c5172 FUN_1461c5172 body=91 status=ok
// SIG undefined FUN_1461c5172(void)

undefined4 * FUN_1461c5172(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  uVar4 = FUN_1461c51ce(param_1,uVar4,param_3);
  *param_2 = uVar4;
  plVar3 = (longlong *)param_3[1];
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
  return param_2;
}



// FUNCTION 1461c51ce FUN_1461c51ce body=188 status=ok
// SIG undefined FUN_1461c51ce(void)

int FUN_1461c51ce(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1461c5296 FUN_1461c5296 body=546 status=ok
// SIG undefined FUN_1461c5296(void)

undefined8 * FUN_1461c5296(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bb69b80;
  param_1[0x72] = &PTR_FUN_14bb6a200;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x7c;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xf8 | 4;
  FUN_1446f470e(&local_28,L"SceneComponent0",1);
  uVar1 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x73] = lVar3;
  FUN_1446f470e(&local_30,L"StaticMeshComponent0",1);
  uVar1 = FUN_144a7a726();
  local_40 = 0;
  local_48 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x74] = plVar2;
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x74] + 0x1fb) = 2;
  FUN_14127091c(param_1[0x74],0);
  *(byte *)(param_1[0x74] + 0x675) = *(byte *)(param_1[0x74] + 0x675) & 0xbf;
  lVar3 = param_1[0x73];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c(lVar3);
      lVar3 = param_1[0x73];
    }
  }
  param_1[0x39] = lVar3;
  FUN_140486fc4(param_1[0x74],lVar3,0);
  *(byte *)(param_1[0x74] + 0x2d6) = *(byte *)(param_1[0x74] + 0x2d6) & 0x7f;
  *(byte *)(param_1[0x74] + 0x2d6) = *(byte *)(param_1[0x74] + 0x2d6) & 0xbf;
  *(byte *)(param_1[0x74] + 0x2d5) = *(byte *)(param_1[0x74] + 0x2d5) | 0x20;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c54ba FUN_1461c54ba body=282 status=ok
// SIG undefined FUN_1461c54ba(void)

undefined8 FUN_1461c54ba(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 < '\0') {
    FUN_14688fe8a(local_40,param_1);
    uVar1 = (**(code **)(*param_1 + 0x308))(param_1);
    local_50[0] = param_1[3];
    FUN_1400021e4(local_50,&local_70);
    puVar2 = local_70;
    if (local_68 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(local_60,puVar2);
    FUN_1468f9fe9(local_50,local_60,0,uVar1);
    FUN_1401c7f3e(param_2,local_50,local_40);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_141635f04(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461c55da FUN_1461c55da body=232 status=ok
// SIG undefined FUN_1461c55da(void)

longlong * FUN_1461c55da(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_145d36864;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461c56c8 FUN_1461c56c8 body=219 status=ok
// SIG undefined FUN_1461c56c8(void)

void FUN_1461c56c8(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 4;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_1461c57a4(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c57a4 FUN_1461c57a4 body=60 status=ok
// SIG undefined FUN_1461c57a4(void)

void FUN_1461c57a4(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461c57cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 1461c57e0 FUN_1461c57e0 body=40 status=ok
// SIG undefined FUN_1461c57e0(void)

undefined8 FUN_1461c57e0(undefined8 param_1,int param_2)

{
  FUN_1461c5808();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461c5808 FUN_1461c5808 body=520 status=ok
// SIG undefined FUN_1461c5808(void)

void FUN_1461c5808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae62d60;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1461c5a10 FUN_1461c5a10 body=67 status=ok
// SIG undefined FUN_1461c5a10(void)

void FUN_1461c5a10(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(param_1 + 8))();
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x140))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001461c5a47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



// FUNCTION 1461c5a6a FUN_1461c5a6a body=398 status=ok
// SIG undefined FUN_1461c5a6a(void)

void FUN_1461c5a6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14011be0c(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_1461c5aba;
  }
  lVar5 = 0;
LAB_1461c5aba:
  cVar4 = FUN_14011bf50(lVar5);
  if (cVar4 != '\0') {
    FUN_1403adc5e(&local_40,lVar5);
    lVar5 = *(longlong *)((longlong)local_40 + 0x60);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
    *(int *)(lVar5 + 0xa8) = *(int *)(lVar5 + 0xa8) + 1;
    plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 != 0) {
      lVar7 = FUN_144a2f878();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        local_40 = (void *)0x0;
        local_38 = *(int *)(lVar6 + 0x7fc8);
        lVar7 = (longlong)local_38;
        _Src = *(void **)(lVar6 + 0x7fc0);
        if (lVar7 == 0) {
          uStack_34 = 0;
        }
        else {
          FUN_1446dd670(&local_40,local_38,0);
          memcpy(local_40,_Src,lVar7 * 2);
        }
        FUN_140775538(lVar5 + 0x70,&local_40);
        if (local_40 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c5bfa FUN_1461c5bfa body=179 status=ok
// SIG undefined FUN_1461c5bfa(void)

bool FUN_1461c5bfa(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c5cae FUN_1461c5cae body=239 status=ok
// SIG undefined FUN_1461c5cae(void)

void FUN_1461c5cae(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = (**(code **)(*param_1 + 0x498))();
  if (bVar1 < 5) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    FUN_140245d8a(local_88,0,puVar4,0);
    cVar2 = FUN_147d8a6b2(local_88);
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x531) = 1;
    }
    FUN_141238aee(local_88);
  }
  if (*(char *)((longlong)param_1 + 0x544) == '\x01') {
    bVar1 = 1;
    if (param_4 != '\0') {
      if (param_1[6] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1[6] + 0x360);
      }
      FUN_148d1c467((int)param_1[0xa8],uVar3);
      bVar1 = *(byte *)((longlong)param_1 + 0x544);
    }
    if (bVar1 != 0) {
      if ((bVar1 & 1) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x544) = 0;
      }
      FUN_1447f69b6(param_1 + 0x98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c5d9e FUN_1461c5d9e body=293 status=ok
// SIG undefined FUN_1461c5d9e(void)

undefined8 FUN_1461c5d9e(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_178 [32];
  longlong local_158;
  ulonglong uStack_150;
  undefined1 local_140 [256];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = 0;
  uVar3 = *(int *)(param_1 + 1) - 1;
  if (*(int *)(param_1 + 1) == 0) {
    uVar3 = 0;
  }
  uVar1 = (uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc;
  uVar3 = uVar3 % 5;
  if (uVar3 == 3) {
    uVar1 = uVar1 | 2;
  }
  else if (uVar3 == 4) {
    uVar1 = uVar1 | 3;
  }
  else if (uVar3 - 1 < 2) {
    uVar1 = uVar1 | 1;
  }
  uStack_150 = (ulonglong)(uVar1 + 1);
  iVar2 = 0;
  FUN_144761492(&local_158,0);
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  iVar2 = FUN_1416360ea(puVar4,iVar2,local_158);
  *(undefined1 *)(local_158 + iVar2) = 0;
  FUN_144a81018(local_140,local_158);
  FUN_14020fad6(param_2,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1461c5ec4 FUN_1461c5ec4 body=54 status=ok
// SIG undefined FUN_1461c5ec4(void)

void FUN_1461c5ec4(void)

{
  FUN_1416361f6();
  if (DAT_14cb46448 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb46428 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461c5efa FUN_1461c5efa body=137 status=ok
// SIG undefined FUN_1461c5efa(void)

longlong FUN_1461c5efa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1461c5f83();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14920bd26(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1461c5f83 FUN_1461c5f83 body=705 status=ok
// SIG undefined FUN_1461c5f83(void)

longlong * FUN_1461c5f83(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x78,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x78);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    local_68 = param_2 + 2;
    local_70 = &DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_80 = local_58;
    local_7c = local_54;
    local_88 = local_60;
    uVar7 = local_88;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar5 = *local_a0;
        FUN_140f872f2(lVar5 + (longlong)iVar8 * 0x78,param_1);
        FUN_1491dff32(lVar5 + (longlong)iVar8 * 0x78 + 0x10,param_1);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined1 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_145d5ef9e(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_14920ba20(param_2,&local_a0);
        *local_98 = 0;
        *(undefined8 *)(local_98 + 4) = 0;
        puVar3 = local_98 + 0x10;
        *(undefined8 *)(local_98 + 0x30) = 0;
        *(undefined8 *)(local_98 + 0x38) = 0;
        *(undefined8 *)(local_98 + 0x40) = 0;
        *(undefined8 *)(local_98 + 0x48) = 0;
        *(undefined8 *)(local_98 + 0x10) = 0;
        *(undefined8 *)(local_98 + 0x18) = 0;
        *(undefined8 *)(local_98 + 0x20) = 0;
        *(undefined8 *)(local_98 + 0x28) = 0;
        *(undefined8 *)(local_98 + 0x50) = 0;
        *(undefined8 *)(local_98 + 0x58) = 0;
        *(undefined4 *)(local_98 + 0x3c) = 0x80;
        *(undefined4 *)(local_98 + 0x40) = 0xffffffff;
        *(undefined8 *)(local_98 + 0x60) = 0;
        *(undefined8 *)(local_98 + 0x68) = 0;
        *(undefined4 *)(local_98 + 0x70) = 0xffffffff;
        FUN_140f872f2(local_98,param_1);
        FUN_1491dff32(puVar3,param_1);
        iVar8 = iVar8 + 1;
        uVar7 = local_88;
      } while (iVar8 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461c6246 FUN_1461c6246 body=647 status=ok
// SIG undefined FUN_1461c6246(void)

void FUN_1461c6246(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1414d706e();
  uVar3 = DAT_14cbcab30;
  uVar1 = FUN_1408d77e6();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1411157a2();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&DAT_14cbcab38);
    if (lVar4 != 0) {
      FUN_14054d68c(lVar4 + 0x80,param_1 + 0x1a0);
      *(undefined1 *)(lVar4 + 0x331) = 0;
    }
    uVar3 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcab40,0);
    if (lVar5 != 0) {
      local_70 = 0;
      uVar3 = FUN_140c48226();
      lVar6 = FUN_140c47e50(lVar5,uVar3,&local_70);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x19c) = 1;
        local_88 = 0;
        if (lVar4 == 0) {
          local_78 = 0;
          local_80 = 0;
        }
        else {
          FUN_14111569e(lVar4,&local_70);
          local_78 = local_68;
          local_80 = local_70;
        }
        FUN_141115702(&local_70);
        FUN_1403719a4(lVar6 + 0x1e8,&local_70);
        FUN_144a2da94(&local_70);
      }
      local_70 = 0;
      uVar3 = FUN_140c4800c();
      lVar5 = FUN_140c47e50(lVar5,uVar3,&local_70);
      if (lVar5 != 0) {
        FUN_141584160(lVar5,3);
        local_a0 = 0;
        if (lVar4 == 0) {
          local_68 = 0;
          local_98 = 0;
        }
        else {
          FUN_14111569e(lVar4,&local_70);
          local_98 = local_70;
        }
        local_90 = local_68;
        FUN_141115702(&local_70);
        FUN_1403719a4(lVar5 + 0x80,&local_70);
        FUN_144a2da94(&local_70);
      }
    }
    uVar3 = FUN_140a48832();
    lVar2 = FUN_140c483dc(lVar2,uVar3,&DAT_14cbcab58,0);
    if (lVar2 != 0) {
      local_70 = 0;
      uVar3 = FUN_1461c64ce();
      lVar2 = FUN_140c47e50(lVar2,uVar3,&local_70);
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x198);
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *(longlong *)(param_1 + 0x198);
          }
        }
        *(longlong *)(lVar2 + 0x80) = lVar4;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c64ce FUN_1461c64ce body=55 status=ok
// SIG undefined FUN_1461c64ce(void)

void FUN_1461c64ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d28 = FUN_140002ddd(FUN_1465ac319,uVar1,L"GbxBrainAspectSettings_Land");
  }
  return;
}



// FUNCTION 1461c650e FUN_1461c650e body=103 status=ok
// SIG undefined FUN_1461c650e(void)

ulonglong FUN_1461c650e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461c6558:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461c6558;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461c6576 FUN_1461c6576 body=468 status=ok
// SIG undefined FUN_1461c6576(void)

void FUN_1461c6576(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      FUN_1400021e4(param_2 + 8,&local_200);
      local_1e8 = (int)uStack_1f8;
      uVar5 = (int)uStack_1f8 - 1;
      if ((int)uStack_1f8 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_200 + uVar6 * 2);
          *(ushort *)(local_200 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_1f0 = local_200;
      local_1e4 = uStack_1f8._4_4_;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1e0 = local_1c0;
      local_1c8 = '\0';
      local_1d0 = local_c0;
      local_1d8 = local_1e0;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"DiscreteValueUpdate",&local_1e0);
      local_40 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_38 = 0;
        local_30 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar4 & 0xffffffff,1);
      }
      FUN_1461c6c1a(uVar3,local_38,&local_1f0,param_2 + 0x10);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 == '\x01') {
        FUN_1400020a8(local_1e0);
      }
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_200 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


