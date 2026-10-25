// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479d92ce FUN_1479d92ce body=79 status=ok
// SIG undefined FUN_1479d92ce(void)

void FUN_1479d92ce(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_2 + -0x10;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  *(undefined1 *)(lVar3 + 0x360) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = lVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1479d931e FUN_1479d931e body=72 status=ok
// SIG undefined FUN_1479d931e(void)

void FUN_1479d931e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1479d94f0(param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1479d9374 FUN_1479d9374 body=78 status=ok
// SIG undefined FUN_1479d9374(void)

void FUN_1479d9374(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_2 + -0x10;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = lVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1479d93c2 FUN_1479d93c2 body=38 status=ok
// SIG undefined FUN_1479d93c2(void)

undefined8 FUN_1479d93c2(undefined8 param_1,int param_2)

{
  FUN_1479d9452();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d93e8 FUN_1479d93e8 body=52 status=ok
// SIG undefined FUN_1479d93e8(void)

void FUN_1479d93e8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1479d941c FUN_1479d941c body=53 status=ok
// SIG undefined FUN_1479d941c(void)

void FUN_1479d941c(longlong param_1,int param_2)

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



// FUNCTION 1479d9452 FUN_1479d9452 body=157 status=ok
// SIG undefined FUN_1479d9452(void)

void FUN_1479d9452(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a83c820;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_1479d93e8(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_1479d94af;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_1479d94af:
    FUN_1400020a8();
  }
  FUN_1479d941c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_1479d94db;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_1479d94db:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1479d94f0 FUN_1479d94f0 body=157 status=ok
// SIG undefined FUN_1479d94f0(void)

void FUN_1479d94f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  plVar4 = *(longlong **)(param_1 + 0x3f8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3f8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001479d9581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479d958e FUN_1479d958e body=155 status=ok
// SIG undefined FUN_1479d958e(void)

undefined8 FUN_1479d958e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  lVar2 = **(longlong **)(param_2 + 8);
  if (lVar2 == 0) {
    _Dst = (void *)FUN_14001cc68(0x410);
    memset(_Dst,0,0x410);
    FUN_1479d962a(_Dst);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1479d991a(param_1,iVar1);
    }
    *(void **)(*param_1 + (longlong)iVar1 * 8) = _Dst;
    uVar4 = *(undefined8 *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar4;
}



// FUNCTION 1479d962a FUN_1479d962a body=751 status=ok
// SIG undefined FUN_1479d962a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1479d962a(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_14a83c8f0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2b] = DAT_14c8464f0;
  uVar10 = DAT_14c8464e8;
  param_1[0x29] = DAT_14c8464e0;
  param_1[0x2a] = uVar10;
  uVar10 = DAT_14c8464e8;
  param_1[0x2c] = DAT_14c8464e0;
  param_1[0x2d] = uVar10;
  param_1[0x2e] = DAT_14c8464f0;
  uVar10 = DAT_14c8463d8;
  param_1[0x30] = DAT_14c8463d0;
  param_1[0x31] = uVar10;
  uVar10 = DAT_14c8463e8;
  param_1[0x32] = DAT_14c8463e0;
  param_1[0x33] = uVar10;
  puVar12 = &DAT_14c846480;
  puVar13 = param_1 + 0x34;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  local_38 = 0;
  FUN_144a886e6(param_1 + 0x57,0,&local_29,0);
  *(undefined1 *)(param_1 + 0x67) = 0;
  uVar10 = _DAT_14cad0ed8;
  param_1[0x68] = _DAT_14cad0ed0;
  param_1[0x69] = uVar10;
  uVar10 = uRam000000014cad0ee8;
  param_1[0x6a] = _DAT_14cad0ee0;
  param_1[0x6b] = uVar10;
  lVar11 = 0x340;
  do {
    pcVar1 = (char *)((longlong)param_1 + lVar11);
    cVar2 = *pcVar1;
    cVar3 = pcVar1[1];
    cVar4 = pcVar1[2];
    cVar5 = pcVar1[3];
    cVar6 = pcVar1[4];
    cVar7 = pcVar1[5];
    cVar8 = pcVar1[6];
    cVar9 = pcVar1[7];
    if ((bool)(~(cVar2 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11) = 2;
    }
    if ((bool)(~(cVar3 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 1) = 2;
    }
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 2) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 3) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 4) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 5) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 6) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 7) = 2;
    }
    if ((bool)(~(cVar2 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 8) = 2;
    }
    if ((bool)(~(cVar3 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 9) = 2;
    }
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 10) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xb) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xc) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xd) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xe) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xf) = 2;
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x360);
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0x101;
  param_1[0x77] = 0;
  param_1[0x78] = 0x800000000;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0x400000000;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  *(undefined1 (*) [16])(param_1 + 0x6d) = (undefined1  [16])0x0;
  *(undefined2 *)((longlong)param_1 + 0x379) = 1;
  *(undefined1 *)((longlong)param_1 + 0x37b) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x1000000;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 (*) [16])(param_1 + 0x7d) = (undefined1  [16])0x0;
  param_1[0x7f] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d991a FUN_1479d991a body=132 status=ok
// SIG undefined FUN_1479d991a(void)

void FUN_1479d991a(longlong param_1,int param_2)

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



// FUNCTION 1479d99a0 FUN_1479d99a0 body=38 status=ok
// SIG undefined FUN_1479d99a0(void)

undefined8 FUN_1479d99a0(undefined8 param_1,int param_2)

{
  FUN_1479d99c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d99c6 FUN_1479d99c6 body=190 status=ok
// SIG undefined FUN_1479d99c6(void)

void FUN_1479d99c6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14a83c8f0;
  plVar3 = (longlong *)param_1[0x7f];
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
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x55];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x54];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d9a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1479d9a84 FUN_1479d9a84 body=156 status=ok
// SIG undefined FUN_1479d9a84(void)

void FUN_1479d9a84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479d9b22(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d9b22 FUN_1479d9b22 body=487 status=ok
// SIG undefined FUN_1479d9b22(void)

void FUN_1479d9b22(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c872a72 == '\0') {
    if ((((param_2 != (longlong *)0x0) &&
         (((char)param_2[0x2f] == '\x03' || (cVar1 = FUN_1479daede(param_1), cVar1 == '\0')))) &&
        ((*(longlong *)(param_1 + 0xa8) == 0 ||
         ((lVar2 = FUN_144a79cc8(), lVar2 == 0 || ((*(byte *)(lVar2 + 0x242) & 8) == 0)))))) &&
       (lVar2 = FUN_1447210f0(param_2), lVar2 != 0)) {
      if (DAT_14c950c28 == '\0') {
        lVar2 = param_2[2];
        local_40 = *(undefined2 **)(lVar2 + 0x18);
        FUN_1400021e4(&local_40,&local_50);
        puVar3 = local_50;
        if (local_48 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_40,L"DESTROYED_%s_CHILDACTOR",puVar3);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar3 = &DAT_149dfb77a;
        if (local_38 != 0) {
          puVar3 = local_40;
        }
        FUN_1446f470e(&local_60,puVar3,1);
        local_68 = 0;
        FUN_140af9fb2(local_58,param_2[4],lVar2,local_60);
        FUN_1400021e4(local_58,&local_50);
        puVar3 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar3 = local_50;
        }
        (**(code **)(*param_2 + 0x170))(param_2,puVar3,0,4);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_40 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        if (*(longlong *)(param_1 + 0x2d0) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x168) = 0;
        }
      }
    }
    if ((DAT_14c872b89 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x2b0) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479d9d20 FUN_1479d9d20 body=228 status=ok
// SIG undefined FUN_1479d9d20(void)

void FUN_1479d9d20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_28);
  }
  local_20 = lVar1;
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  FUN_143475f30(param_1,&local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d9e10 FUN_1479d9e10 body=104 status=ok
// SIG undefined FUN_1479d9e10(void)

void FUN_1479d9e10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1050) {
    FUN_144b3d300(&DAT_14cad1050);
    if (DAT_14cad1050 == -1) {
      FUN_1446f470e(&DAT_14cad1048,L"ChildActor",1);
      _Init_thread_footer(&DAT_14cad1050);
      return;
    }
  }
  return;
}



// FUNCTION 1479d9e78 FUN_1479d9e78 body=75 status=ok
// SIG undefined FUN_1479d9e78(void)

void FUN_1479d9e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1479d9ec4(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d9ec4 FUN_1479d9ec4 body=143 status=ok
// SIG undefined FUN_1479d9ec4(void)

void FUN_1479d9ec4(longlong param_1,longlong *param_2)

{
  FUN_14010df0a();
  if ((*(uint *)((longlong)param_2 + 0x34) >> 0x16 & 1) == 0) {
    if ((*(uint *)((longlong)param_2 + 0x34) >> 0xc & 1) == 0) {
      return;
    }
    if (((*(byte *)(param_2 + 5) & 1) == 0) &&
       (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001479d9f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x2b8,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001479d9f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x2b8);
  return;
}



// FUNCTION 1479d9f54 FUN_1479d9f54 body=542 status=ok
// SIG undefined FUN_1479d9f54(void)

void FUN_1479d9f54(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1401a0912();
  if (param_1[0x59] != 0) {
    if (param_1[0x59] != *(longlong *)(param_1[0x15] + 0x20)) {
      param_1[0x58] = 0;
    }
    param_1[0x59] = 0;
  }
  if (param_1[0x56] == 0) {
    lVar3 = param_1[0x55];
    if (lVar3 != 0) {
      lVar8 = FUN_144a6c4d8();
      if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) && (param_1[0x55] != 0)) {
        local_a8 = 0;
        local_98 = 0;
        (**(code **)(*param_1 + 0x5e0))(param_1);
      }
    }
    goto LAB_1479da0af;
  }
  lVar3 = *(longlong *)(param_1[0x56] + 0x10);
  lVar8 = param_1[0x55];
  if (lVar8 == 0) {
LAB_1479d9fee:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_144a6c4d8();
    if (((lVar5 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (param_2 = *(longlong *)(lVar8 + 0x30),
       *(longlong *)(param_2 + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30))
    goto LAB_1479d9fee;
    lVar5 = param_1[0x55];
  }
  if (lVar3 == lVar5) {
    lVar5 = *(longlong *)(param_1[0x56] + 0x18);
    bVar4 = *(byte *)(param_1 + 0x5b);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x5b) | 2;
    *(byte *)(param_1 + 0x5b) = bVar4;
    lVar5 = 0;
  }
  param_1[0x58] = lVar5;
  if ((bVar4 & 2) == 0) {
    uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1[0x56] + 99)) &
            0xffffffffffffff08;
    FUN_140b361ee(param_1,CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 3));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  *(byte *)(param_1 + 0x5b) = bVar4 & 0xfd;
  lVar6 = FUN_144b00ba4(param_1[0x56]);
  uVar1 = *(undefined1 *)(lVar6 + 0x28);
  lVar6 = FUN_144b00ba4(param_1);
  uVar2 = *(undefined1 *)(lVar6 + 0x28);
  FUN_147bd518a(&local_a9);
  FUN_143475ac2(param_1);
  local_68 = 0;
  local_58 = 0;
  (**(code **)(*param_1 + 0x5e0))(param_1);
  if ((param_1[0x56] != 0) && (param_1[0x58] == lVar5)) {
    uVar7 = FUN_144b00ba4();
    FUN_14116d61c(uVar7,CONCAT71((int7)((ulonglong)lVar3 >> 8),uVar1) & 0xffffff01);
    uVar7 = FUN_144b00ba4(param_1);
    FUN_14116d61c(uVar7,CONCAT71((int7)((ulonglong)lVar8 >> 8),uVar2) & 0xffffff01);
  }
  FUN_147bd519e(&local_a9);
LAB_1479da0af:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479da188 FUN_1479da188 body=103 status=ok
// SIG undefined FUN_1479da188(void)

void FUN_1479da188(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1479db08e(local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479da206 FUN_1479da206 body=247 status=ok
// SIG undefined FUN_1479da206(void)

longlong FUN_1479da206(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    if ((((lVar3 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x2a8);
    }
    if (lVar1 == lVar3) {
      plVar5 = (longlong *)(param_1 + 0x2b8);
      goto LAB_1479da296;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (((lVar1 == 0) || (lVar3 = FUN_144a6c4d8(), lVar3 == 0)) ||
     ((*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38) ||
      ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30 || (lVar1 = *(longlong *)(param_1 + 0x2a8), lVar1 == 0)))))) {
    return 0;
  }
  lVar3 = FUN_144a6c4d8();
  if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x2a8);
  }
  if (plVar4[0x22] != 0) {
    return plVar4[0x22];
  }
  plVar5 = plVar4 + 0x22;
  (**(code **)(*plVar4 + 1000))();
LAB_1479da296:
  return *plVar5;
}



// FUNCTION 1479da2fe FUN_1479da2fe body=140 status=ok
// SIG undefined FUN_1479da2fe(void)

void FUN_1479da2fe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aa84a();
  FUN_1446f470e(&local_38,L"ChildActor",1);
  uVar1 = FUN_140e1d66a();
  FUN_140e1d66a();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479da38c FUN_1479da38c body=123 status=ok
// SIG undefined FUN_1479da38c(void)

void FUN_1479da38c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_141549bcc();
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    uVar3 = 0;
  }
  else {
    FUN_14485c47a(*(longlong *)(param_1 + 0x2b0) + 0x1e8,param_1);
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
      lVar2 = *(longlong *)(param_1 + 0x2b0);
    }
    *(longlong *)(param_1 + 0x2a8) = lVar1;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  return;
}



// FUNCTION 1479da408 FUN_1479da408 body=26 status=ok
// SIG undefined FUN_1479da408(void)

void FUN_1479da408(undefined8 param_1)

{
  FUN_1400f96ca();
  FUN_143475ac2(param_1);
  return;
}



// FUNCTION 1479da422 FUN_1479da422 body=44 status=ok
// SIG undefined FUN_1479da422(void)

void FUN_1479da422(longlong param_1)

{
  FUN_1412a62ac();
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x20);
  FUN_143475ac2(param_1);
  return;
}



// FUNCTION 1479da44e FUN_1479da44e body=1289 status=ok
// SIG undefined FUN_1479da44e(void)

undefined8 * FUN_1479da44e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  undefined8 local_108 [4];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_147a04442();
  *param_1 = &PTR_FUN_14a83e390;
  lVar5 = param_2[0x55];
  param_1[0x2c] = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x2d] = param_2[0x58];
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_118 = (**(code **)(*param_2 + 0x5d8))(param_2);
  if (local_118 == 0) goto LAB_1479da7b9;
  if (param_1[0x2d] == 0) {
    param_1[0x2d] = *(undefined8 *)(local_118 + 0x18);
  }
  if (DAT_14cad1f88 != 0) {
    plVar6 = (longlong *)FUN_14001cc68(0x100,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a861450;
    FUN_1479b5b26(plVar6 + 2,local_118);
    if (plVar6 == (longlong *)0x0) {
      param_1[0x30] = 0x10;
      plVar9 = (longlong *)param_1[0x31];
      if (plVar9 != (longlong *)0x0) {
        param_1[0x31] = 0;
LAB_1479da59e:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_1479da5c0;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      param_1[0x30] = plVar6 + 2;
      plVar9 = (longlong *)param_1[0x31];
      if (plVar6 == plVar9) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      else {
        param_1[0x31] = plVar6;
        if (plVar9 != (longlong *)0x0) goto LAB_1479da59e;
      }
LAB_1479da5c0:
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (*(int *)(param_1[0x30] + 0x10) < 1) {
      param_1[0x30] = 0;
      plVar6 = (longlong *)param_1[0x31];
      if (plVar6 != (longlong *)0x0) {
        param_1[0x31] = 0;
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
  plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a861470;
  FUN_1479b6442(plVar6 + 2,local_118);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x32] = 0x10;
    plVar9 = (longlong *)param_1[0x33];
    if (plVar9 != (longlong *)0x0) {
      param_1[0x33] = 0;
LAB_1479da64f:
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_1479da671;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x32] = plVar6 + 2;
    plVar9 = (longlong *)param_1[0x33];
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[0x33] = plVar6;
      if (plVar9 != (longlong *)0x0) goto LAB_1479da64f;
    }
LAB_1479da671:
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (*(int *)(param_1[0x32] + 8) < 1) {
    param_1[0x32] = 0;
    plVar6 = (longlong *)param_1[0x33];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x33] = 0;
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  lVar5 = *(longlong *)(local_118 + 0x1c8);
  if ((lVar5 != 0) && (iVar3 = *(int *)(lVar5 + 0x140), (longlong)iVar3 != 0)) {
    local_110 = param_1 + 0x2e;
    lVar5 = *(longlong *)(lVar5 + 0x138);
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(lVar5 + lVar11);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xa8) != local_118)) {
        local_108[2] = 0;
        local_108[3] = 0;
        local_108[0] = 0;
        local_108[1] = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0x3ff00000;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_b8 = 0x3ff0000000000000;
        uStack_b0 = 0x3ff0000000000000;
        local_a8 = 0x3ff0000000000000;
        uStack_a0 = 0;
        FUN_14485c47a(local_108);
        local_108[1] = *(undefined8 *)(lVar7 + 0x128);
        FUN_14480333a(lVar7,local_108 + 2);
        iVar4 = *(int *)(param_1 + 0x2f);
        *(uint *)(param_1 + 0x2f) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0x17c) < iVar4 + 1U) {
          FUN_1479f628a(local_110,iVar4);
        }
        puVar8 = local_108;
        puVar10 = (undefined8 *)((longlong)iVar4 * 0x70 + *local_110);
        for (lVar7 = 0xe; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar3 * 8 != lVar11);
  }
LAB_1479da7b9:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479da97e FUN_1479da97e body=42 status=ok
// SIG undefined FUN_1479da97e(void)

void FUN_1479da97e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14072b458();
  FUN_1479da9a8(param_2,param_1,param_3);
  return;
}



// FUNCTION 1479da9a8 FUN_1479da9a8 body=743 status=ok
// SIG undefined FUN_1479da9a8(void)

void FUN_1479da9a8(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = param_1[0x55];
  if ((((lVar7 == 0) || (lVar3 = FUN_144a6c4d8(), lVar3 == 0)) ||
      (*(int *)(lVar7 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1[0x55];
  }
  lVar3 = *(longlong *)(param_2 + 0x160);
  if (((lVar3 == 0) || (lVar4 = FUN_144a6c4d8(), lVar4 == 0)) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x160);
  }
  if (lVar7 == lVar3) {
    param_1[0x58] = *(longlong *)(param_2 + 0x168);
  }
  if (param_1[0x56] != 0) {
    lVar7 = *(longlong *)(param_1[0x56] + 0x10);
    lVar3 = param_1[0x55];
    if (((lVar3 == 0) || (lVar4 = FUN_144a6c4d8(), lVar4 == 0)) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1[0x55];
    }
    if (lVar7 == lVar3) goto LAB_1479daab2;
  }
  local_78 = 0;
  local_68 = 0;
  (**(code **)(*param_1 + 0x5e0))(param_1);
LAB_1479daab2:
  lVar7 = param_1[0x56];
  if (lVar7 != 0) {
    if ((param_1[0x58] != 0) && (*(longlong *)(lVar7 + 0x18) != param_1[0x58])) {
      FUN_1400021e4(param_1 + 0x58,&local_88);
      puVar6 = local_88;
      if (local_80 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      cVar2 = (**(code **)(*(longlong *)param_1[0x56] + 0x170))
                        ((longlong *)param_1[0x56],puVar6,0,2);
      if (cVar2 != '\0') {
        puVar6 = local_88;
        if (local_80 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)param_1[0x56] + 0x170))((longlong *)param_1[0x56],puVar6,0,4);
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = param_1[0x56];
    }
    if (*(longlong *)(param_2 + 0x180) != 0) {
      FUN_1479b5ca8(*(longlong *)(param_2 + 0x180),lVar7,param_3);
      lVar7 = param_1[0x56];
    }
    if (*(longlong *)(param_2 + 400) != 0) {
      FUN_1479b6970(*(longlong *)(param_2 + 400),lVar7,param_3);
      lVar7 = param_1[0x56];
    }
    lVar7 = *(longlong *)(lVar7 + 0x1c8);
    if ((lVar7 != 0) && ((longlong)*(int *)(param_2 + 0x178) != 0)) {
      lVar4 = (longlong)*(int *)(param_2 + 0x178) * 0x70;
      lVar3 = *(longlong *)(param_2 + 0x170) + 0x10;
      do {
        lVar5 = FUN_14479d2ce(lVar3 + -0x10);
        if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 0x1c8), plVar1 != (longlong *)0x0)) {
          FUN_1433b7f0e(lVar5,&DAT_14cadad9c);
          (**(code **)(*plVar1 + 0x490))(plVar1,lVar7,&DAT_14cadad90,*(undefined8 *)(lVar3 + -8));
          local_98 = 0;
          FUN_144927a08(plVar1,lVar3,0,0);
          FUN_1447a91cc(plVar1,0,0);
        }
        lVar3 = lVar3 + 0x70;
        lVar4 = lVar4 + -0x70;
      } while (lVar4 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479dac90 FUN_1479dac90 body=51 status=ok
// SIG undefined FUN_1479dac90(void)

void FUN_1479dac90(longlong param_1,undefined8 param_2)

{
  FUN_144a63cd0();
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1479b6db8(*(longlong *)(param_1 + 400),param_2);
    return;
  }
  return;
}



// FUNCTION 1479dacc4 FUN_1479dacc4 body=148 status=ok
// SIG undefined FUN_1479dacc4(void)

undefined8 * FUN_1479dacc4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    local_20 = param_1;
    FUN_1479dadea(param_2);
  }
  else {
    FUN_1479dad5a(param_2);
    puVar1 = *(undefined8 **)(param_1 + 0x2d0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dad5a FUN_1479dad5a body=143 status=ok
// SIG undefined FUN_1479dad5a(void)

void FUN_1479dad5a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cad1008 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cad1008 = FUN_140002ddd(FUN_1463b6991,uVar3,L"ChildActorComponentInstanceData");
    if (DAT_14cad1008 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad1008;
  FUN_14485c47a(param_1 + 8,DAT_14cad1008);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_1479f631a(uVar3,param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 1479dadea FUN_1479dadea body=143 status=ok
// SIG undefined FUN_1479dadea(void)

void FUN_1479dadea(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cad1008 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cad1008 = FUN_140002ddd(FUN_1463b6991,uVar3,L"ChildActorComponentInstanceData");
    if (DAT_14cad1008 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad1008;
  FUN_14485c47a(param_1 + 8,DAT_14cad1008);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_1479da44e(uVar3,*param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 1479dae7a FUN_1479dae7a body=99 status=ok
// SIG undefined FUN_1479dae7a(void)

undefined8 * FUN_1479dae7a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    param_2 = (longlong *)*param_1;
  }
  lVar1 = *param_3;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_3;
    }
  }
  *param_2 = lVar1;
  return param_1;
}



// FUNCTION 1479daede FUN_1479daede body=285 status=ok
// SIG undefined FUN_1479daede(void)

ulonglong FUN_1479daede(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  if ((((lVar4 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar4 = *(longlong *)(param_1 + 0x2a8), lVar4 == 0)))) {
LAB_1479daf17:
    bVar5 = 0;
    uVar8 = 0;
  }
  else {
    lVar2 = FUN_144a6c4d8();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x2a8);
    }
    lVar4 = plVar6[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar4 = plVar6[0x22];
      if (lVar4 == 0) goto LAB_1479daf17;
    }
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),*(undefined1 *)(lVar4 + 99)) &
            0xffffffffffffff08;
    uVar8 = (undefined7)(uVar7 >> 8);
    bVar5 = (byte)uVar7 >> 3;
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    if ((((lVar2 == 0) || (lVar3 = FUN_144a6c4d8(), lVar3 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x2a8);
    }
    if (lVar4 == lVar2) {
      bVar1 = (*(byte *)(*(longlong *)(param_1 + 0x2b8) + 99) & 8) >> 3;
      goto LAB_1479daf60;
    }
  }
  bVar1 = 0;
LAB_1479daf60:
  return CONCAT71(uVar8,bVar5 | bVar1) & 0xffffffff;
}



// FUNCTION 1479db08e FUN_1479db08e body=190 status=ok
// SIG undefined FUN_1479db08e(void)

undefined8 * FUN_1479db08e(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e18) {
    FUN_144b3d300(&DAT_14cad1e18);
    if (DAT_14cad1e18 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"royed",6);
      builtin_wcsncpy(local_48 + 8,L"ctorDest",8);
      builtin_wcsncpy(local_48,L"OnChildA",8);
      FUN_1446f470e(&DAT_14cad1e10,local_48,1);
      _Init_thread_footer(&DAT_14cad1e18);
    }
  }
  *param_1 = DAT_14cad1e10;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db14e FUN_1479db14e body=75 status=ok
// SIG undefined FUN_1479db14e(void)

void FUN_1479db14e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 0x18) != 0x10)) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                       *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 100)) & 0xffffffffffffff04;
      uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    }
    FUN_1405f107a(lVar1,uVar3);
    return;
  }
  return;
}



// FUNCTION 1479db1be FUN_1479db1be body=339 status=ok
// SIG undefined FUN_1479db1be(void)

void FUN_1479db1be(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x5d8))(param_1,local_24,local_30,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db3a6 FUN_1479db3a6 body=39 status=ok
// SIG undefined FUN_1479db3a6(void)

void FUN_1479db3a6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144b21312();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479db3d2 FUN_1479db3d2 body=37 status=ok
// SIG undefined FUN_1479db3d2(void)

void FUN_1479db3d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14084d440();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479db3f8 FUN_1479db3f8 body=170 status=ok
// SIG undefined FUN_1479db3f8(void)

void FUN_1479db3f8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x2e8) = *puVar4;
  *(undefined4 *)(param_1 + 0x2ec) = uVar1;
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  *(undefined4 *)(param_1 + 0x2f4) = uVar3;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db4a4 FUN_1479db4a4 body=232 status=ok
// SIG undefined FUN_1479db4a4(void)

void FUN_1479db4a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479db58e(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db58e FUN_1479db58e body=95 status=ok
// SIG undefined FUN_1479db58e(void)

void FUN_1479db58e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x2c4) = param_2;
  *(undefined4 *)(param_1 + 0x2c0) = param_3;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001479db5dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x138))(*(longlong **)(lVar1 + 0x218),param_1);
    return;
  }
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1479db5f4 FUN_1479db5f4 body=332 status=ok
// SIG undefined FUN_1479db5f4(void)

void FUN_1479db5f4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14084aab8(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db742 FUN_1479db742 body=164 status=ok
// SIG undefined FUN_1479db742(void)

void FUN_1479db742(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined4 *)(param_1 + 0x2b4) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db7ec FUN_1479db7ec body=198 status=ok
// SIG undefined FUN_1479db7ec(void)

void FUN_1479db7ec(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0x2c8) & 2) == 0) == (local_1c != 0)) {
    *(byte *)(param_1 + 0x2c8) = *(byte *)(param_1 + 0x2c8) & 0xfd | (local_1c != 0) * '\x02';
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db8b4 FUN_1479db8b4 body=160 status=ok
// SIG undefined FUN_1479db8b4(void)

void FUN_1479db8b4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined4 *)(param_1 + 0x2b0) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db968 FUN_1479db968 body=120 status=ok
// SIG undefined FUN_1479db968(void)

void FUN_1479db968(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_14010df0a(param_1,lVar1);
  if (*(int *)(lVar1 + 0x40) < 0x1e3) {
    *(undefined8 *)(param_1 + 0x2d0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x2d8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x2e0) = 0x3ff0000000000000;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479db9e2 FUN_1479db9e2 body=57 status=ok
// SIG undefined FUN_1479db9e2(void)

void FUN_1479db9e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x2a8);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1479dba1c FUN_1479dba1c body=155 status=ok
// SIG undefined FUN_1479dba1c(void)

void FUN_1479dba1c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479dbab8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbab8 FUN_1479dbab8 body=136 status=ok
// SIG undefined FUN_1479dbab8(void)

void FUN_1479dbab8(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((((*(float *)(param_1 + 0x470) != *param_2) ||
          (NAN(*(float *)(param_1 + 0x470)) || NAN(*param_2))) ||
         ((*(float *)(param_1 + 0x474) != param_2[1] ||
          ((NAN(*(float *)(param_1 + 0x474)) || NAN(param_2[1]) ||
           (*(float *)(param_1 + 0x478) != param_2[2])))))) ||
        (NAN(*(float *)(param_1 + 0x478)) || NAN(param_2[2]))) ||
       ((*(float *)(param_1 + 0x47c) != param_2[3] ||
        (NAN(*(float *)(param_1 + 0x47c)) || NAN(param_2[3]))))) {
      fVar1 = param_2[1];
      fVar2 = param_2[2];
      fVar3 = param_2[3];
      *(float *)(param_1 + 0x470) = *param_2;
      *(float *)(param_1 + 0x474) = fVar1;
      *(float *)(param_1 + 0x478) = fVar2;
      *(float *)(param_1 + 0x47c) = fVar3;
      if (*(longlong *)(param_1 + 0x398) != 0) {
        FUN_143478694(*(longlong *)(param_1 + 0x398),param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479dbb44 FUN_1479dbb44 body=158 status=ok
// SIG undefined FUN_1479dbb44(void)

void FUN_1479dbb44(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dbbe4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbbe4 FUN_1479dbbe4 body=74 status=ok
// SIG undefined FUN_1479dbbe4(void)

void FUN_1479dbbe4(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x468) & 2) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x468) = (*(uint *)(param_1 + 0x468) & 0xfffffffd) + (uint)param_2 * 2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dbc2e FUN_1479dbc2e body=154 status=ok
// SIG undefined FUN_1479dbc2e(void)

void FUN_1479dbc2e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dbcca(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbcca FUN_1479dbcca body=63 status=ok
// SIG undefined FUN_1479dbcca(void)

void FUN_1479dbcca(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x46c) != param_2)) {
    iVar1 = 0;
    if (0 < param_2) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x46c) = iVar1;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479dbd0a FUN_1479dbd0a body=179 status=ok
// SIG undefined FUN_1479dbd0a(void)

void FUN_1479dbd0a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x438) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x438)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x438) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbdbe FUN_1479dbdbe body=179 status=ok
// SIG undefined FUN_1479dbdbe(void)

void FUN_1479dbdbe(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x43c) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x43c)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x43c) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbe72 FUN_1479dbe72 body=168 status=ok
// SIG undefined FUN_1479dbe72(void)

void FUN_1479dbe72(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if (*(int *)(param_1 + 0x434) != local_1c) {
    *(int *)(param_1 + 0x434) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbf1c FUN_1479dbf1c body=179 status=ok
// SIG undefined FUN_1479dbf1c(void)

void FUN_1479dbf1c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x42c) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x42c)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x42c) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dbfd0 FUN_1479dbfd0 body=179 status=ok
// SIG undefined FUN_1479dbfd0(void)

void FUN_1479dbfd0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x430) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x430)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x430) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc088 FUN_1479dc088 body=158 status=ok
// SIG undefined FUN_1479dc088(void)

void FUN_1479dc088(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dc128(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc128 FUN_1479dc128 body=74 status=ok
// SIG undefined FUN_1479dc128(void)

void FUN_1479dc128(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x404) & 1) != param_2) {
      *(uint *)(param_1 + 0x404) = *(uint *)(param_1 + 0x404) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dc172 FUN_1479dc172 body=154 status=ok
// SIG undefined FUN_1479dc172(void)

void FUN_1479dc172(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc20e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc20e FUN_1479dc20e body=63 status=ok
// SIG undefined FUN_1479dc20e(void)

void FUN_1479dc20e(longlong param_1,int param_2)

{
  int iVar1;
  
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x454) != param_2)) {
    iVar1 = 0;
    if (0 < param_2) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x454) = iVar1;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479dc24e FUN_1479dc24e body=164 status=ok
// SIG undefined FUN_1479dc24e(void)

void FUN_1479dc24e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_1479dc2f4(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc2f4 FUN_1479dc2f4 body=133 status=ok
// SIG undefined FUN_1479dc2f4(void)

void FUN_1479dc2f4(longlong param_1,double *param_2)

{
  double dVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((((*(double *)(param_1 + 0x410) != *param_2) ||
         (NAN(*(double *)(param_1 + 0x410)) || NAN(*param_2))) ||
        ((*(double *)(param_1 + 0x418) != param_2[1] ||
         ((NAN(*(double *)(param_1 + 0x418)) || NAN(param_2[1]) ||
          (*(double *)(param_1 + 0x420) != param_2[2])))))) ||
       (NAN(*(double *)(param_1 + 0x420)) || NAN(param_2[2]))) {
      *(double *)(param_1 + 0x420) = param_2[2];
      dVar1 = param_2[1];
      *(double *)(param_1 + 0x410) = *param_2;
      *(double *)(param_1 + 0x418) = dVar1;
      if (*(longlong *)(param_1 + 0x398) != 0) {
        FUN_143478108(*(longlong *)(param_1 + 0x398),param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479dc37a FUN_1479dc37a body=156 status=ok
// SIG undefined FUN_1479dc37a(void)

void FUN_1479dc37a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1406fa87a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc418 FUN_1479dc418 body=156 status=ok
// SIG undefined FUN_1479dc418(void)

void FUN_1479dc418(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc4b6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc4b6 FUN_1479dc4b6 body=65 status=ok
// SIG undefined FUN_1479dc4b6(void)

void FUN_1479dc4b6(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x45c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x45c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x45c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dc4f8 FUN_1479dc4f8 body=156 status=ok
// SIG undefined FUN_1479dc4f8(void)

void FUN_1479dc4f8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc596(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc596 FUN_1479dc596 body=65 status=ok
// SIG undefined FUN_1479dc596(void)

void FUN_1479dc596(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x40c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x40c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x40c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dc5d8 FUN_1479dc5d8 body=156 status=ok
// SIG undefined FUN_1479dc5d8(void)

void FUN_1479dc5d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc676(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc676 FUN_1479dc676 body=65 status=ok
// SIG undefined FUN_1479dc676(void)

void FUN_1479dc676(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x408) != param_2) ||
       (NAN(*(float *)(param_1 + 0x408)) || NAN(param_2))) {
      *(float *)(param_1 + 0x408) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dc6b8 FUN_1479dc6b8 body=156 status=ok
// SIG undefined FUN_1479dc6b8(void)

void FUN_1479dc6b8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc756(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc756 FUN_1479dc756 body=65 status=ok
// SIG undefined FUN_1479dc756(void)

void FUN_1479dc756(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x4c8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x4c8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x4c8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dc798 FUN_1479dc798 body=179 status=ok
// SIG undefined FUN_1479dc798(void)

void FUN_1479dc798(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x400) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x400)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x400) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc84c FUN_1479dc84c body=179 status=ok
// SIG undefined FUN_1479dc84c(void)

void FUN_1479dc84c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if ((*(float *)(param_1 + 0x440) != local_1c) ||
     (NAN(*(float *)(param_1 + 0x440)) || NAN(local_1c))) {
    *(float *)(param_1 + 0x440) = local_1c;
    FUN_1448215fa(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc900 FUN_1479dc900 body=156 status=ok
// SIG undefined FUN_1479dc900(void)

void FUN_1479dc900(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479dc99e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dc99e FUN_1479dc99e body=65 status=ok
// SIG undefined FUN_1479dc99e(void)

void FUN_1479dc99e(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x460) != param_2) ||
       (NAN(*(float *)(param_1 + 0x460)) || NAN(param_2))) {
      *(float *)(param_1 + 0x460) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479dca2a FUN_1479dca2a body=75 status=ok
// SIG undefined FUN_1479dca2a(void)

void FUN_1479dca2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463b7284(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dca76 FUN_1479dca76 body=248 status=ok
// SIG undefined FUN_1479dca76(void)

undefined1 (*) [16] FUN_1479dca76(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar7 = dVar4 * 0.0 - dVar5 * 1.0;
  dVar8 = dVar5 * 0.0 - dVar6 * 0.0;
  dVar9 = dVar6 * 1.0 - dVar4 * 0.0;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar3 = (dVar6 * dVar8 - dVar4 * dVar7) + *(double *)(param_1 + 600) * dVar9 + 0.0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar7 * dVar5 - dVar9 * dVar6) + dVar1 * dVar8 + 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar7 * dVar1 + 0.0 + (dVar9 * dVar4 - dVar8 * dVar5);
  return param_2;
}



// FUNCTION 1479dcbb2 FUN_1479dcbb2 body=89 status=ok
// SIG undefined FUN_1479dcbb2(void)

void FUN_1479dcbb2(longlong *param_1)

{
  if ((*(char *)((longlong)param_1 + 0x1fb) != '\x02') && (param_1[0x15] != 0)) {
    FUN_140414380(param_1 + 0x74,0);
    (**(code **)(*param_1 + 0x5d8))(param_1);
    FUN_1448215fa(param_1);
    return;
  }
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  return;
}



// FUNCTION 1479dcc1c FUN_1479dcc1c body=153 status=ok
// SIG undefined FUN_1479dcc1c(void)

undefined8 * FUN_1479dcc1c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14a85fdc0;
  *(undefined1 *)(puVar1 + 0x53) = *(undefined1 *)(param_1 + 0x620);
  *(undefined4 *)((longlong)puVar1 + 0x29c) = *(undefined4 *)(param_1 + 0x624);
  *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x62c);
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x630);
  *(undefined4 *)((longlong)puVar1 + 0x2ac) = *(undefined4 *)(param_1 + 0x634);
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1479dccb6 FUN_1479dccb6 body=325 status=ok
// SIG undefined FUN_1479dccb6(void)

undefined1 (*) [16] FUN_1479dccb6(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar7 = (double)*(float *)(param_1 + 0x634);
  dVar9 = DAT_14c8464e0 * param_3[8];
  dVar10 = DAT_14c8464e8 * param_3[9];
  dVar8 = DAT_14c8464f0 * param_3[10];
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar1 = param_3[3];
  dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
  dVar12 = dVar8 * dVar5 - dVar10 * dVar6;
  dVar13 = dVar9 * dVar6 - dVar4 * dVar8;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar3 = (dVar6 * dVar12 - dVar4 * dVar11) + param_3[3] * dVar13 + dVar10 + param_3[5];
  dVar10 = param_3[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar1 * dVar12 + dVar9 + param_3[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar11 * dVar1 + dVar8 + (dVar13 * dVar4 - dVar12 * dVar5) + dVar10;
  *(double *)(param_2[1] + 8) = dVar7;
  *(double *)param_2[2] = dVar7;
  *(double *)(param_2[2] + 8) = dVar7;
  *(double *)param_2[3] = dVar7;
  return param_2;
}



// FUNCTION 1479dce00 FUN_1479dce00 body=258 status=ok
// SIG undefined FUN_1479dce00(void)

void FUN_1479dce00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  undefined ***pppuVar12;
  undefined1 auStack_108 [40];
  undefined **local_e0 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1458d7a8c(local_e0);
  local_e0[0] = &PTR_FUN_14a616350;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e0);
  }
  pppuVar12 = *(undefined ****)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x2b0) = *(byte *)(param_1 + 0x2b0) | 0x10;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar12 = local_e0;
  }
  uVar1 = *(undefined4 *)((longlong)pppuVar12 + 0xc);
  uVar2 = *(undefined4 *)(pppuVar12 + 2);
  uVar3 = *(undefined4 *)((longlong)pppuVar12 + 0x14);
  uVar4 = *(undefined4 *)(pppuVar12 + 3);
  uVar5 = *(undefined4 *)((longlong)pppuVar12 + 0x1c);
  uVar6 = *(undefined4 *)(pppuVar12 + 4);
  uVar7 = *(undefined4 *)((longlong)pppuVar12 + 0x24);
  uVar8 = *(undefined4 *)(pppuVar12 + 5);
  uVar9 = *(undefined4 *)((longlong)pppuVar12 + 0x2c);
  uVar10 = *(undefined4 *)(pppuVar12 + 6);
  uVar11 = *(undefined4 *)((longlong)pppuVar12 + 0x34);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(pppuVar12 + 1);
  *(undefined4 *)(param_1 + 0x2cc) = uVar1;
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  *(undefined4 *)(param_1 + 0x2d8) = uVar4;
  *(undefined4 *)(param_1 + 0x2dc) = uVar5;
  *(undefined4 *)(param_1 + 0x2e0) = uVar6;
  *(undefined4 *)(param_1 + 0x2e4) = uVar7;
  *(undefined4 *)(param_1 + 0x2e8) = uVar8;
  *(undefined4 *)(param_1 + 0x2ec) = uVar9;
  *(undefined4 *)(param_1 + 0x2f0) = uVar10;
  *(undefined4 *)(param_1 + 0x2f4) = uVar11;
  FUN_14115e0ba(param_1 + 0x2f8,pppuVar12 + 7);
  FUN_145821ae8(local_e0);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dcf0c FUN_1479dcf0c body=299 status=ok
// SIG undefined FUN_1479dcf0c(void)

void FUN_1479dcf0c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
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
  undefined1 uVar12;
  undefined ***pppuVar13;
  undefined1 auStack_108 [32];
  undefined **local_e8 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1458d7a8c(local_e8);
  local_e8[0] = &PTR_FUN_14a616350;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(byte *)(param_1 + 0x2b0) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      param_1 = *(longlong *)(param_1 + 0x2b8) + 0x28;
      goto LAB_1479dcfa4;
    }
  }
  else {
    param_1 = param_1 + 0x2c0;
LAB_1479dcfa4:
    if (param_1 != 0) {
      pppuVar13 = local_e8;
      if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
        pppuVar13 = *(undefined ****)(param_2 + 0x38);
      }
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar8 = *(undefined4 *)(param_1 + 0x24);
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      uVar11 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(pppuVar13 + 5) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)((longlong)pppuVar13 + 0x2c) = uVar9;
      *(undefined4 *)(pppuVar13 + 6) = uVar10;
      *(undefined4 *)((longlong)pppuVar13 + 0x34) = uVar11;
      *(undefined4 *)(pppuVar13 + 3) = uVar5;
      *(undefined4 *)((longlong)pppuVar13 + 0x1c) = uVar6;
      *(undefined4 *)(pppuVar13 + 4) = uVar7;
      *(undefined4 *)((longlong)pppuVar13 + 0x24) = uVar8;
      *(undefined4 *)(pppuVar13 + 1) = uVar1;
      *(undefined4 *)((longlong)pppuVar13 + 0xc) = uVar2;
      *(undefined4 *)(pppuVar13 + 2) = uVar3;
      *(undefined4 *)((longlong)pppuVar13 + 0x14) = uVar4;
      FUN_14115e0ba(pppuVar13 + 7,param_1 + 0x38);
      uVar12 = 1;
      goto LAB_1479dcfe1;
    }
  }
  uVar12 = 0;
LAB_1479dcfe1:
  *param_3 = uVar12;
  FUN_145821ae8(local_e8);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dd038 FUN_1479dd038 body=160 status=ok
// SIG undefined FUN_1479dd038(void)

void FUN_1479dd038(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x5d8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dd0da FUN_1479dd0da body=156 status=ok
// SIG undefined FUN_1479dd0da(void)

void FUN_1479dd0da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dd178(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dd178 FUN_1479dd178 body=138 status=ok
// SIG undefined FUN_1479dd178(void)

void FUN_1479dd178(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x9e);
  bVar2 = *(byte *)(param_1 + 0x56);
  *(byte *)(param_1 + 0x56) = bVar2 & 0xfe;
  (**(code **)(*param_1 + 0x5e0))();
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfe | bVar2 & 1;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x55] = param_2;
  if ((bVar1 & 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479dd1f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d8))(param_1,0);
  return;
}



// FUNCTION 1479dd202 FUN_1479dd202 body=156 status=ok
// SIG undefined FUN_1479dd202(void)

void FUN_1479dd202(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined4 *)(param_1 + 0x2b4) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dd2e6 FUN_1479dd2e6 body=147 status=ok
// SIG undefined FUN_1479dd2e6(void)

void FUN_1479dd2e6(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (0 < (int)DAT_14cad1370) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(DAT_14cad1368 + uVar3 * 8);
      if (plVar1[3] == param_1) {
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x30))(plVar1,1);
        }
        if (DAT_14cad1370 - 1 != (int)uVar3) {
          iVar2 = (DAT_14cad1370 - 1) - (int)uVar3;
          iVar4 = 1;
          if (iVar2 < 1) {
            iVar4 = iVar2;
          }
          memmove((void *)(DAT_14cad1368 + uVar3 * 8),
                  (void *)(DAT_14cad1368 + (longlong)(int)(DAT_14cad1370 - iVar4) * 8),
                  (longlong)iVar4 << 3);
        }
        DAT_14cad1370 = DAT_14cad1370 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (DAT_14cad1370 != uVar3);
  }
  return;
}



// FUNCTION 1479dd37a FUN_1479dd37a body=109 status=ok
// SIG undefined FUN_1479dd37a(void)

undefined8 * FUN_1479dd37a(undefined8 *param_1,longlong param_2)

{
  FUN_1409e1656();
  param_1[1] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 2) = 0;
  FUN_1405bceb4(param_1 + 1);
  *param_1 = &PTR_FUN_14a860000;
  param_1[1] = &PTR_FUN_14a860050;
  param_1[3] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1479dd3e8 FUN_1479dd3e8 body=215 status=ok
// SIG undefined FUN_1479dd3e8(void)

void FUN_1479dd3e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_1479dd4a7;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_1479dd4a7:
      FUN_1479f6c90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1479dd4c0 FUN_1479dd4c0 body=74 status=ok
// SIG undefined FUN_1479dd4c0(void)

void FUN_1479dd4c0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}



// FUNCTION 1479dd50a FUN_1479dd50a body=32 status=ok
// SIG undefined FUN_1479dd50a(void)

undefined8 FUN_1479dd50a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FForceFeedbackManager");
  return param_2;
}



// FUNCTION 1479dd530 FUN_1479dd530 body=318 status=ok
// SIG undefined FUN_1479dd530(void)

void FUN_1479dd530(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar7 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar7) {
    iVar8 = -iVar7;
    uVar6 = (longlong)iVar7;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      lVar2 = *(longlong *)(lVar1 + -8 + uVar6 * 8);
      if (lVar2 == 0) {
        uVar5 = *(uint *)(param_1 + 0x28);
        if (uVar6 != uVar5) {
          iVar7 = iVar8 + uVar5;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(lVar1 + uVar6 * 8 + -8),
                  (void *)(lVar1 + (longlong)(int)(uVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          uVar5 = *(uint *)(param_1 + 0x28);
        }
        *(uint *)(param_1 + 0x28) = uVar5 - 1;
      }
      else {
        cVar4 = FUN_1479dd68c(lVar2,param_2);
        if (cVar4 == '\0') {
          uVar5 = *(uint *)(param_1 + 0x28);
          if (uVar6 != uVar5) {
            iVar7 = iVar8 + uVar5;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x20) + uVar6 * 8 + -8),
                    (void *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)(uVar5 - iVar7) * 8),
                    (longlong)iVar7 << 3);
            uVar5 = *(uint *)(param_1 + 0x28);
          }
          *(uint *)(param_1 + 0x28) = uVar5 - 1;
          FUN_1479dd710(lVar2,0);
        }
      }
      iVar8 = iVar8 + 1;
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar3);
    iVar7 = *(int *)(param_1 + 0x28);
  }
  if (iVar7 == 0) {
    local_48 = param_1;
    FUN_1479dd7f0();
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dd68c FUN_1479dd68c body=132 status=ok
// SIG undefined FUN_1479dd68c(void)

undefined8 FUN_1479dd68c(longlong param_1,float param_2)

{
  float extraout_XMM0_Da;
  float fVar1;
  double dVar2;
  
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_147a99710();
    dVar2 = DAT_14c759090;
    if ((*(byte *)(param_1 + 0x2b0) & 8) == 0) {
      dVar2 = (double)param_2;
    }
    fVar1 = (float)((double)*(float *)(param_1 + 0x390) + dVar2);
    *(float *)(param_1 + 0x390) = fVar1;
    if ((fVar1 <= extraout_XMM0_Da) ||
       (extraout_XMM0_Da != 0.0 && (*(byte *)(param_1 + 0x2b0) & 4) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1479dd710 FUN_1479dd710 body=222 status=ok
// SIG undefined FUN_1479dd710(void)

void FUN_1479dd710(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (int)param_1[0x71]) {
    local_20 = param_1;
    FUN_1447cd2ec(param_1 + 0x70);
  }
  FUN_1402a37f2(param_1,0);
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_2 != '\0') {
    lVar2 = param_1[0x16];
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    if ((longlong)DAT_14cad1370 != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(DAT_14cad1368 + lVar3);
        if (*(longlong *)(lVar1 + 0x18) == lVar2) {
          if (lVar1 != 0) {
            local_20 = param_1;
            FUN_1479dd3e8(lVar1 + 0x20);
          }
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)DAT_14cad1370 * 8 != lVar3);
    }
  }
  if ((*(byte *)(param_1 + 0x56) & 1) != 0) {
    (**(code **)(*param_1 + 0x420))(param_1,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479dd7f0 FUN_1479dd7f0 body=203 status=ok
// SIG undefined FUN_1479dd7f0(void)

void FUN_1479dd7f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if (DAT_14cad1370 < 1) {
    return;
  }
  lVar7 = 0;
  bVar3 = false;
  lVar4 = DAT_14cad1368;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = lVar4 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_1) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)DAT_14cad1370 <= lVar2 + 1) {
        if (!bVar3) {
          return;
        }
        goto LAB_1479dd8ab;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + DAT_14cad1370 != iVar8) {
      iVar6 = (~uVar5 + DAT_14cad1370) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(lVar4 + (longlong)(DAT_14cad1370 - iVar6) * 8),
              (longlong)iVar6 << 3);
      lVar4 = DAT_14cad1368;
    }
    lVar7 = lVar7 + lVar9;
    DAT_14cad1370 = DAT_14cad1370 + -1;
    bVar3 = true;
  } while ((int)(uVar5 + iVar8) < DAT_14cad1370);
LAB_1479dd8ab:
  FUN_1479f6aa2();
  return;
}



// FUNCTION 1479dd8bc FUN_1479dd8bc body=155 status=ok
// SIG undefined FUN_1479dd8bc(void)

void FUN_1479dd8bc(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        local_48 = *(undefined8 *)(param_2 + 4);
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        FUN_1479dd958(lVar3,&local_58,param_3,param_4);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479dd958 FUN_1479dd958 body=322 status=ok
// SIG undefined FUN_1479dd958(void)

void FUN_1479dd958(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auStack_b8 [32];
  float local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x2a8) == 0) goto LAB_1479dda5e;
  fVar3 = (float)FUN_147a99710();
  fVar6 = *(float *)(param_1 + 0x2b4);
  fVar1 = *(float *)(param_1 + 0x390);
  if (0.0 < fVar6) {
    if ((*(byte *)(param_1 + 0x2b0) & 0x10) == 0) {
      if (*(longlong *)(param_1 + 0x2b8) == 0) goto LAB_1479dda20;
      lVar2 = *(longlong *)(param_1 + 0x2b8) + 0x28;
    }
    else {
      lVar2 = param_1 + 0x2c0;
    }
    if (lVar2 != 0) {
      local_78 = param_2[2];
      local_88 = *param_2;
      uStack_80 = param_2[1];
      fVar4 = (float)FUN_14795a16e(lVar2,param_1 + 0x240,&local_88,0x3f800000);
      fVar6 = fVar6 * fVar4;
    }
  }
LAB_1479dda20:
  if (0.0 < fVar6) {
    fVar4 = fVar1 / fVar3;
    auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),1);
    local_98 = fVar6;
    FUN_147a99912(*(undefined8 *)(param_1 + 0x2a8),fVar1 - auVar5._0_4_ * fVar3,param_3,param_4);
  }
LAB_1479dda5e:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ddab8 FUN_1479ddab8 body=56 status=ok
// SIG undefined FUN_1479ddab8(void)

void FUN_1479ddab8(longlong *param_1)

{
  FUN_1412a62ac();
  if ((param_1[0x15] != 0) && ((*(byte *)(param_1 + 0x56) & 2) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479ddae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5e0))(param_1);
  return;
}



// FUNCTION 1479ddaf0 FUN_1479ddaf0 body=62 status=ok
// SIG undefined FUN_1479ddaf0(void)

void FUN_1479ddaf0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if (cVar1 == '\0') goto LAB_1479ddb1e;
  }
  (**(code **)(*param_1 + 0x5d8))(param_1,0);
LAB_1479ddb1e:
  FUN_1408453d0(param_1,param_2);
  return;
}



// FUNCTION 1479ddb2e FUN_1479ddb2e body=68 status=ok
// SIG undefined FUN_1479ddb2e(void)

void FUN_1479ddb2e(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2f0))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x5e0))(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
      FUN_1479ddb72((longlong)param_1 + 0xbb,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1479ddb72 FUN_1479ddb72 body=121 status=ok
// SIG undefined FUN_1479ddb72(void)

void FUN_1479ddb72(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402b62fa(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1479b6f8e(local_28,param_2);
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



// FUNCTION 1479ddbec FUN_1479ddbec body=209 status=ok
// SIG undefined FUN_1479ddbec(void)

void FUN_1479ddbec(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1[0x16];
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) {
    bVar1 = *(byte *)(param_1 + 0x56);
    *(byte *)(param_1 + 0x56) = bVar1 & 0xfe;
    (**(code **)(*param_1 + 0x5e0))(param_1);
    *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfe | bVar1 & 1;
  }
  if ((lVar2 != 0) && (param_1[0x55] != 0)) {
    FUN_1402a37f2(param_1,1);
    *(undefined4 *)(param_1 + 0x72) = param_2;
    lVar2 = FUN_143478b70(lVar2,1);
    local_38 = param_1;
    FUN_1479f6b4c(lVar2 + 0x20);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ddcd0 FUN_1479ddcd0 body=68 status=ok
// SIG undefined FUN_1479ddcd0(void)

void FUN_1479ddcd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x288))(*(longlong **)(lVar1 + 0x218),param_1);
  FUN_14032563e(param_1);
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 1479ddd14 FUN_1479ddd14 body=29 status=ok
// SIG undefined FUN_1479ddd14(void)

void FUN_1479ddd14(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x2a8) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x2a8)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x2a8) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddd32 FUN_1479ddd32 body=29 status=ok
// SIG undefined FUN_1479ddd32(void)

void FUN_1479ddd32(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x2b8) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x2b8)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x2b8) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddd50 FUN_1479ddd50 body=82 status=ok
// SIG undefined FUN_1479ddd50(void)

void FUN_1479ddd50(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*(float *)(param_1 + 0x2d4) == *param_2) &&
        (!NAN(*(float *)(param_1 + 0x2d4)) && !NAN(*param_2))) &&
       (*(float *)(param_1 + 0x2d8) == param_2[1])) &&
      ((!NAN(*(float *)(param_1 + 0x2d8)) && !NAN(param_2[1]) &&
       (*(float *)(param_1 + 0x2dc) == param_2[2])))) &&
     ((!NAN(*(float *)(param_1 + 0x2dc)) && !NAN(param_2[2]) &&
      ((*(float *)(param_1 + 0x2e0) == param_2[3] &&
       (!NAN(*(float *)(param_1 + 0x2e0)) && !NAN(param_2[3]))))))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x2d4) = *param_2;
  *(float *)(param_1 + 0x2d8) = fVar1;
  *(float *)(param_1 + 0x2dc) = fVar2;
  *(float *)(param_1 + 0x2e0) = fVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddda2 FUN_1479ddda2 body=74 status=ok
// SIG undefined FUN_1479ddda2(void)

void FUN_1479ddda2(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2f8) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2f8) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479dddec FUN_1479dddec body=29 status=ok
// SIG undefined FUN_1479dddec(void)

void FUN_1479dddec(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x300) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x300)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x300) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479dde0a FUN_1479dde0a body=29 status=ok
// SIG undefined FUN_1479dde0a(void)

void FUN_1479dde0a(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x314) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x314)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x314) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479dde28 FUN_1479dde28 body=29 status=ok
// SIG undefined FUN_1479dde28(void)

void FUN_1479dde28(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x318) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x318)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x318) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479dde46 FUN_1479dde46 body=82 status=ok
// SIG undefined FUN_1479dde46(void)

void FUN_1479dde46(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*(float *)(param_1 + 0x304) == *param_2) &&
        (!NAN(*(float *)(param_1 + 0x304)) && !NAN(*param_2))) &&
       (*(float *)(param_1 + 0x308) == param_2[1])) &&
      ((!NAN(*(float *)(param_1 + 0x308)) && !NAN(param_2[1]) &&
       (*(float *)(param_1 + 0x30c) == param_2[2])))) &&
     ((!NAN(*(float *)(param_1 + 0x30c)) && !NAN(param_2[2]) &&
      ((*(float *)(param_1 + 0x310) == param_2[3] &&
       (!NAN(*(float *)(param_1 + 0x310)) && !NAN(param_2[3]))))))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x304) = *param_2;
  *(float *)(param_1 + 0x308) = fVar1;
  *(float *)(param_1 + 0x30c) = fVar2;
  *(float *)(param_1 + 0x310) = fVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479dde98 FUN_1479dde98 body=29 status=ok
// SIG undefined FUN_1479dde98(void)

void FUN_1479dde98(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x31c) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x31c)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x31c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddeb6 FUN_1479ddeb6 body=29 status=ok
// SIG undefined FUN_1479ddeb6(void)

void FUN_1479ddeb6(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 800) == param_2) && (!NAN(*(float *)(param_1 + 800)) && !NAN(param_2)))
  {
    return;
  }
  *(float *)(param_1 + 800) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479dded4 FUN_1479dded4 body=82 status=ok
// SIG undefined FUN_1479dded4(void)

void FUN_1479dded4(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*(float *)(param_1 + 0x334) == *param_2) &&
        (!NAN(*(float *)(param_1 + 0x334)) && !NAN(*param_2))) &&
       (*(float *)(param_1 + 0x338) == param_2[1])) &&
      ((!NAN(*(float *)(param_1 + 0x338)) && !NAN(param_2[1]) &&
       (*(float *)(param_1 + 0x33c) == param_2[2])))) &&
     ((!NAN(*(float *)(param_1 + 0x33c)) && !NAN(param_2[2]) &&
      ((*(float *)(param_1 + 0x340) == param_2[3] &&
       (!NAN(*(float *)(param_1 + 0x340)) && !NAN(param_2[3]))))))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x334) = *param_2;
  *(float *)(param_1 + 0x338) = fVar1;
  *(float *)(param_1 + 0x33c) = fVar2;
  *(float *)(param_1 + 0x340) = fVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddf26 FUN_1479ddf26 body=29 status=ok
// SIG undefined FUN_1479ddf26(void)

void FUN_1479ddf26(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x2c0) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x2c0)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x2c0) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddf44 FUN_1479ddf44 body=29 status=ok
// SIG undefined FUN_1479ddf44(void)

void FUN_1479ddf44(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x2b4) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x2b4)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x2b4) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddf62 FUN_1479ddf62 body=29 status=ok
// SIG undefined FUN_1479ddf62(void)

void FUN_1479ddf62(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 700) == param_2) && (!NAN(*(float *)(param_1 + 700)) && !NAN(param_2)))
  {
    return;
  }
  *(float *)(param_1 + 700) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddf80 FUN_1479ddf80 body=29 status=ok
// SIG undefined FUN_1479ddf80(void)

void FUN_1479ddf80(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x344) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x344)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x344) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddf9e FUN_1479ddf9e body=29 status=ok
// SIG undefined FUN_1479ddf9e(void)

void FUN_1479ddf9e(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x348) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x348)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x348) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddfbc FUN_1479ddfbc body=29 status=ok
// SIG undefined FUN_1479ddfbc(void)

void FUN_1479ddfbc(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x34c) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x34c)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x34c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddfda FUN_1479ddfda body=29 status=ok
// SIG undefined FUN_1479ddfda(void)

void FUN_1479ddfda(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x350) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x350)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x350) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479ddff8 FUN_1479ddff8 body=20 status=ok
// SIG undefined FUN_1479ddff8(void)

void FUN_1479ddff8(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x354) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x354) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de00c FUN_1479de00c body=29 status=ok
// SIG undefined FUN_1479de00c(void)

void FUN_1479de00c(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x358) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x358)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x358) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de02a FUN_1479de02a body=29 status=ok
// SIG undefined FUN_1479de02a(void)

void FUN_1479de02a(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x370) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x370)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x370) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de048 FUN_1479de048 body=20 status=ok
// SIG undefined FUN_1479de048(void)

void FUN_1479de048(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x35c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x35c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de05c FUN_1479de05c body=82 status=ok
// SIG undefined FUN_1479de05c(void)

void FUN_1479de05c(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((*(float *)(param_1 + 0x360) == *param_2) &&
        (!NAN(*(float *)(param_1 + 0x360)) && !NAN(*param_2))) &&
       (*(float *)(param_1 + 0x364) == param_2[1])) &&
      ((!NAN(*(float *)(param_1 + 0x364)) && !NAN(param_2[1]) &&
       (*(float *)(param_1 + 0x368) == param_2[2])))) &&
     ((!NAN(*(float *)(param_1 + 0x368)) && !NAN(param_2[2]) &&
      ((*(float *)(param_1 + 0x36c) == param_2[3] &&
       (!NAN(*(float *)(param_1 + 0x36c)) && !NAN(param_2[3]))))))) {
    return;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x360) = *param_2;
  *(float *)(param_1 + 0x364) = fVar1;
  *(float *)(param_1 + 0x368) = fVar2;
  *(float *)(param_1 + 0x36c) = fVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de0ae FUN_1479de0ae body=29 status=ok
// SIG undefined FUN_1479de0ae(void)

void FUN_1479de0ae(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x374) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x374)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x374) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de0cc FUN_1479de0cc body=29 status=ok
// SIG undefined FUN_1479de0cc(void)

void FUN_1479de0cc(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x378) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x378)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x378) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de0ea FUN_1479de0ea body=29 status=ok
// SIG undefined FUN_1479de0ea(void)

void FUN_1479de0ea(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x37c) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x37c)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x37c) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de108 FUN_1479de108 body=74 status=ok
// SIG undefined FUN_1479de108(void)

void FUN_1479de108(longlong param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x2b8) == *param_2) &&
     (!NAN(*(float *)(param_1 + 0x2b8)) && !NAN(*param_2))) {
    if ((*(float *)(param_1 + 0x2c0) == param_2[2]) &&
       (!NAN(*(float *)(param_1 + 0x2c0)) && !NAN(param_2[2]))) {
      if ((*(float *)(param_1 + 700) == param_2[1]) &&
         (!NAN(*(float *)(param_1 + 700)) && !NAN(param_2[1]))) {
        return;
      }
    }
  }
  *(float *)(param_1 + 0x2c0) = param_2[2];
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de152 FUN_1479de152 body=34 status=ok
// SIG undefined FUN_1479de152(void)

void FUN_1479de152(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x385) & 1) != param_2) {
    *(byte *)(param_1 + 0x385) = *(byte *)(param_1 + 0x385) & 0xfe | param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479de174 FUN_1479de174 body=35 status=ok
// SIG undefined FUN_1479de174(void)

void FUN_1479de174(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x385) & 2) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x385) = *(byte *)(param_1 + 0x385) & 0xfd | param_2 * '\x02';
  FUN_1448215fa();
  return;
}



// FUNCTION 1479de198 FUN_1479de198 body=55 status=ok
// SIG undefined FUN_1479de198(void)

void FUN_1479de198(longlong param_1)

{
  FUN_141348dd0();
  *(uint *)(param_1 + 0x398) =
       *(uint *)(param_1 + 0x398) & 0xfffffffe |
       *(uint *)(*(longlong *)(param_1 + 0x390) + 0x1f8) >> 5 & 1;
  return;
}



// FUNCTION 1479de1d0 FUN_1479de1d0 body=140 status=ok
// SIG undefined FUN_1479de1d0(void)

void FUN_1479de1d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"bEnabled",1);
  uVar1 = FUN_145a6b756();
  FUN_145a6b756();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de2cc FUN_1479de2cc body=156 status=ok
// SIG undefined FUN_1479de2cc(void)

void FUN_1479de2cc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de36a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de36a FUN_1479de36a body=65 status=ok
// SIG undefined FUN_1479de36a(void)

void FUN_1479de36a(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x6cc) != param_2) ||
       (NAN(*(float *)(param_1 + 0x6cc)) || NAN(param_2))) {
      *(float *)(param_1 + 0x6cc) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de3ac FUN_1479de3ac body=156 status=ok
// SIG undefined FUN_1479de3ac(void)

void FUN_1479de3ac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de44a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de44a FUN_1479de44a body=65 status=ok
// SIG undefined FUN_1479de44a(void)

void FUN_1479de44a(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x6c0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x6c0)) || NAN(param_2))) {
      *(float *)(param_1 + 0x6c0) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de48c FUN_1479de48c body=156 status=ok
// SIG undefined FUN_1479de48c(void)

void FUN_1479de48c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de52a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de52a FUN_1479de52a body=65 status=ok
// SIG undefined FUN_1479de52a(void)

void FUN_1479de52a(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x6c4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x6c4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x6c4) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de570 FUN_1479de570 body=158 status=ok
// SIG undefined FUN_1479de570(void)

void FUN_1479de570(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de610(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de610 FUN_1479de610 body=74 status=ok
// SIG undefined FUN_1479de610(void)

void FUN_1479de610(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x6d0) & 2) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x6d0) = (*(uint *)(param_1 + 0x6d0) & 0xfffffffd) + (uint)param_2 * 2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de65e FUN_1479de65e body=158 status=ok
// SIG undefined FUN_1479de65e(void)

void FUN_1479de65e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de6fe(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de6fe FUN_1479de6fe body=74 status=ok
// SIG undefined FUN_1479de6fe(void)

void FUN_1479de6fe(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x6d0) & 1) != param_2) {
      *(uint *)(param_1 + 0x6d0) = *(uint *)(param_1 + 0x6d0) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de748 FUN_1479de748 body=156 status=ok
// SIG undefined FUN_1479de748(void)

void FUN_1479de748(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de7e6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de7e6 FUN_1479de7e6 body=65 status=ok
// SIG undefined FUN_1479de7e6(void)

void FUN_1479de7e6(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x6c8) != param_2) ||
       (NAN(*(float *)(param_1 + 0x6c8)) || NAN(param_2))) {
      *(float *)(param_1 + 0x6c8) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de828 FUN_1479de828 body=154 status=ok
// SIG undefined FUN_1479de828(void)

void FUN_1479de828(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de8c4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de8c4 FUN_1479de8c4 body=69 status=ok
// SIG undefined FUN_1479de8c4(void)

void FUN_1479de8c4(longlong param_1,int param_2)

{
  float fVar1;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    fVar1 = (float)param_2;
    if ((*(float *)(param_1 + 0x6d4) != fVar1) || (NAN(*(float *)(param_1 + 0x6d4)) || NAN(fVar1)))
    {
      *(float *)(param_1 + 0x6d4) = fVar1;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479de90a FUN_1479de90a body=162 status=ok
// SIG undefined FUN_1479de90a(void)

void FUN_1479de90a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  FUN_1479de9ae(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479de9ae FUN_1479de9ae body=95 status=ok
// SIG undefined FUN_1479de9ae(void)

void FUN_1479de9ae(longlong param_1,int *param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (((*(int *)(param_1 + 0x650) != *param_2 || (*(int *)(param_1 + 0x654) != param_2[1])) ||
      (*(int *)(param_1 + 0x658) != param_2[2])))) {
    *(int *)(param_1 + 0x658) = param_2[2];
    *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479dea34 FUN_1479dea34 body=39 status=ok
// SIG undefined FUN_1479dea34(void)

void FUN_1479dea34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x6b0,0x10);
  FUN_143478cbc(uVar1,param_1);
  return;
}



// FUNCTION 1479dea5c FUN_1479dea5c body=2041 status=ok
// SIG undefined FUN_1479dea5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1479dea5c(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_328 [32];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_c0;
  double dVar3;
  
  auVar39 = _DAT_149934d80;
  local_c0 = (double)(DAT_14c707940 ^ (ulonglong)auStack_328);
  local_280 = (double)*(int *)(param_1 + 0x658) * 0.5;
  local_288 = (double)*(int *)(param_1 + 0x654) * 0.5;
  local_290 = (double)*(int *)(param_1 + 0x650) * 0.5;
  dVar29 = local_c0;
  local_2a8 = local_290;
  dStack_2a0 = local_288;
  local_298 = local_280;
  if ((*(byte *)(param_1 + 0x6d8) & 2) != 0) {
    local_298 = DAT_14c8464f0;
    local_2a8 = DAT_14c8464e0;
    dStack_2a0 = DAT_14c8464e8;
    dVar29 = DAT_14c8464f0;
  }
  local_278 = SQRT(local_280 * local_280 + local_290 * local_290 + local_288 * local_288);
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2e8 = ZEXT816(0);
  auVar30 = *(undefined1 (*) [16])(param_3 + 8);
  dVar6 = auVar30._0_8_;
  dVar10 = auVar30._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_3 + 10);
  dVar7 = auVar4._0_8_;
  auVar31 = *(undefined1 (*) [16])(param_1 + 0x6a0);
  dVar8 = auVar31._0_8_;
  dVar11 = auVar31._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x6b0);
  dVar9 = auVar5._0_8_;
  auVar30 = minpd(auVar31,auVar30);
  auVar35 = minpd(auVar5,auVar4);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar25 = movmskpd(SUB84(dVar29,0),auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
  uVar26 = movmskpd((int)param_2,auVar30);
  if ((uVar26 & 0x3fffffff) == 0 && iVar25 == 0) {
    dVar17 = *(double *)(param_1 + 0x660);
    dVar18 = *(double *)(param_1 + 0x668);
    dVar19 = *(double *)(param_1 + 0x670);
    dVar20 = *(double *)(param_1 + 0x678);
    dVar21 = *param_3;
    dVar22 = param_3[1];
    dVar23 = param_3[2];
    dVar24 = param_3[3];
    dVar34 = param_3[3];
    dVar29 = param_3[3];
    dVar1 = param_3[1];
    dVar12 = param_3[1];
    dVar2 = param_3[2];
    dVar3 = param_3[2];
    local_308 = dVar18 * dVar2 * -1.0 + dVar19 * dVar1 + dVar20 * *param_3 * 1.0 + dVar17 * dVar34;
    dStack_300 = dVar17 * dVar3 * 1.0 + dVar20 * dVar12 + dVar19 * *param_3 * -1.0 + dVar18 * dVar29
    ;
    dVar13 = *(double *)(param_1 + 0x680) * dVar6;
    dVar38 = *(double *)(param_1 + 0x688) * dVar10;
    dVar14 = *(double *)(param_1 + 0x690) * dVar7;
    dVar15 = *(double *)(param_1 + 0x698) * auVar4._8_8_;
    dVar33 = dVar38 * dVar21 - dVar22 * dVar13;
    dVar36 = dVar14 * dVar22 - dVar23 * dVar38;
    dVar37 = dVar13 * dVar23 - dVar21 * dVar14;
    dVar16 = dVar15 * dVar24 - dVar24 * dVar15;
    dVar36 = dVar36 + dVar36;
    dVar37 = dVar37 + dVar37;
    dVar33 = dVar33 + dVar33;
    dVar16 = dVar16 + dVar16;
    dVar38 = (dVar36 * dVar23 - dVar33 * dVar21) + dVar29 * dVar37 + dVar38 + param_3[5];
    local_2d8 = (dVar37 * dVar21 - dVar22 * dVar36) + dVar34 * dVar33 + dVar14 + param_3[6];
    dStack_2d0 = (dVar16 * dVar24 - dVar16 * dVar24) + dVar29 * dVar16 + dVar15 + param_3[7];
    local_2f8._8_8_ =
         dVar19 * dVar3 * -1.0 + ((*param_3 * dVar17 * -1.0 + dVar20 * dVar29) - dVar18 * dVar12);
    local_2f8._0_8_ =
         dVar20 * dVar2 * 1.0 + ((*param_3 * dVar18 * 1.0 + dVar19 * dVar34) - dVar17 * dVar1);
    local_2e8._8_4_ = SUB84(dVar38,0);
    local_2e8._0_8_ = (dVar33 * dVar22 - dVar23 * dVar37) + dVar34 * dVar36 + dVar13 + param_3[4];
    local_2e8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  }
  else {
    dVar1 = *param_3;
    dVar3 = param_3[1];
    dVar2 = param_3[2];
    dVar33 = dVar3 + dVar3;
    dVar36 = dVar2 + dVar2;
    dVar34 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar34 + dVar3 * dVar33)) * dVar7;
    dVar29 = param_3[3];
    dVar37 = dVar36 * dVar29;
    dVar38 = (dVar1 + dVar1) * param_3[3];
    dVar29 = dVar33 * dVar29;
    local_188 = (dVar29 + *param_3 * dVar36) * dVar7;
    dVar34 = (DAT_149934d80._8_8_ - (dVar2 * dVar36 + dVar34)) * dVar10;
    dVar12 = (dVar33 * dVar1 + dVar37) * dVar6;
    local_198 = (dVar36 * dVar3 + dVar38) * dVar10;
    dStack_180 = (dVar36 * dVar3 - dVar38) * dVar7;
    local_1b8 = (*param_3 * dVar36 - dVar29) * dVar6;
    local_1c8._8_4_ = SUB84(dVar12,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar2 * dVar36 + dVar3 * dVar33)) * dVar6;
    local_1c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar34,0);
    local_1a8._0_8_ = (dVar33 * dVar1 - dVar37) * dVar10;
    local_1a8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_3[4];
    dStack_160 = param_3[5];
    local_158 = param_3[6];
    uStack_150 = 0x3ff0000000000000;
    dVar1 = *(double *)(param_1 + 0x660);
    dVar3 = *(double *)(param_1 + 0x668);
    dVar2 = *(double *)(param_1 + 0x670);
    dVar33 = dVar3 + dVar3;
    dVar36 = dVar2 + dVar2;
    dVar34 = dVar1 * (dVar1 + dVar1);
    local_1f8 = (1.0 - (dVar34 + dVar3 * dVar33)) * dVar9;
    dVar12 = *(double *)(param_1 + 0x660) * dVar36;
    dVar29 = *(double *)(param_1 + 0x678);
    dVar37 = dVar36 * dVar29;
    dVar38 = (dVar1 + dVar1) * *(double *)(param_1 + 0x678);
    dVar29 = dVar33 * dVar29;
    local_208 = (dVar29 + dVar12) * dVar9;
    dStack_200 = (dVar36 * dVar3 - dVar38) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar36 + dVar3 * dVar33)) * dVar8;
    dVar34 = (DAT_149934d80._8_8_ - (dVar2 * dVar36 + dVar34)) * dVar11;
    dStack_240 = (dVar33 * dVar1 + dVar37) * dVar8;
    local_218 = (dVar36 * dVar3 + dVar38) * dVar11;
    local_238 = (dVar12 - dVar29) * dVar8;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar34,0);
    local_228._0_8_ = (dVar33 * dVar1 - dVar37) * dVar11;
    local_228._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = *(undefined8 *)(param_1 + 0x680);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x688);
    local_1d8 = *(undefined8 *)(param_1 + 0x690);
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar35._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
    auVar35._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
    auVar30 = blendvpd(_DAT_149936790,auVar39,auVar35);
    uVar27 = -(ulonglong)(0.0 <= dVar7 * dVar9);
    dVar29 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
    dVar34 = auVar30._0_8_;
    local_138 = local_138 * dVar34;
    local_140 = local_140 * dVar34;
    local_148 = local_148 * dVar34;
    dVar34 = auVar30._8_8_;
    local_118 = local_118 * dVar34;
    local_120 = local_120 * dVar34;
    local_128 = dVar34 * local_128;
    local_f8 = local_f8 * dVar29;
    local_100 = local_100 * dVar29;
    local_108 = dVar29 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar29 = local_258 * local_258 + local_268 * local_268;
    dVar34 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar32._0_8_ = dVar29 + dVar34;
    auVar32._8_8_ = dVar29 + dVar34;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar30 = sqrtpd(auVar32,auVar32);
    auVar39 = divpd(auVar39,auVar30);
    auVar40._0_8_ = auVar39._0_8_ * local_258;
    auVar40._8_8_ = auVar39._8_8_ * dStack_250;
    local_308 = (double)((ulonglong)(local_268 * auVar39._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    dStack_300 = (double)((ulonglong)(dStack_260 * auVar39._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar28);
    local_2e8._8_8_ = uStack_e0;
    local_2e8._0_8_ = local_e8;
    local_2d8 = local_d8;
    dStack_2d0 = 0.0;
  }
  dVar29 = auVar4._8_8_ * auVar5._8_8_;
  local_2c8._8_4_ = SUB84(dVar10 * dVar11,0);
  local_2c8._0_8_ = dVar6 * dVar8;
  local_2c8._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
  local_2b8._8_4_ = SUB84(dVar29,0);
  local_2b8._0_8_ = dVar7 * dVar9;
  local_2b8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  FUN_144a80a4c(&local_2a8,param_2);
  if (((ulonglong)local_c0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479df256 FUN_1479df256 body=141 status=ok
// SIG undefined FUN_1479df256(void)

void FUN_1479df256(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_144842962();
  param_1[0xde] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      (**(code **)(*plVar1 + 0x338))(plVar1,0x14);
      lVar2 = FUN_1479df2e4(plVar1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      param_1[0xde] = lVar2;
    }
  }
  return;
}



// FUNCTION 1479df2e4 FUN_1479df2e4 body=101 status=ok
// SIG undefined FUN_1479df2e4(void)

longlong FUN_1479df2e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a772c4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      param_1 = 0;
    }
    return param_1;
  }
  lVar1 = FUN_14090ceee(param_1,0,0);
  return lVar1;
}



// FUNCTION 1479df34a FUN_1479df34a body=141 status=ok
// SIG undefined FUN_1479df34a(void)

void FUN_1479df34a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_11();
  param_1[0xde] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      (**(code **)(*plVar1 + 0x338))(plVar1,0x14);
      lVar2 = FUN_1479df2e4(plVar1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      param_1[0xde] = lVar2;
    }
  }
  return;
}



// FUNCTION 1479df3d8 FUN_1479df3d8 body=372 status=ok
// SIG undefined FUN_1479df3d8(void)

longlong FUN_1479df3d8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  if (param_1 == 0) {
    local_28 = 0;
    goto LAB_1479df4bb;
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_147bbe75e(0,&local_38);
  if (0 < (int)uStack_30) {
    local_5c = (undefined4)*local_38;
    local_58 = 0;
    local_54 = (undefined4)((ulonglong)*local_38 >> 0x20);
    local_50 = *(undefined4 *)((longlong)local_38 + 0xc);
    local_4c = *(undefined1 *)(local_38 + 1);
    FUN_147bbe5ea(param_1,&local_5c,&local_28,0);
    lVar2 = local_28;
    if (local_28 != 0) {
      lVar1 = FUN_14588a60a();
      lVar3 = local_28;
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        if (local_28 == 0) {
LAB_1479df516:
          lVar3 = 0;
        }
        else {
          lVar2 = FUN_14588a60a();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1479df516;
        }
        lVar2 = *(longlong *)(lVar3 + 0x20);
        if (lVar2 != 0) {
          lVar3 = FUN_1411c531a();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (local_28 = lVar2,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_1479df483;
        }
        local_28 = 0;
      }
LAB_1479df483:
      if ((param_2 != (undefined8 *)0x0) && (local_28 != 0)) {
        *param_2 = *local_38;
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1479df4bb:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_28;
}



// FUNCTION 1479df54e FUN_1479df54e body=244 status=ok
// SIG undefined FUN_1479df54e(void)

void FUN_1479df54e(longlong param_1,longlong *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x6f8) != param_2) {
    if (param_2 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x650) = 0x8000000080;
      *(undefined4 *)(param_1 + 0x658) = 0x80;
      *(undefined4 *)(param_1 + 0x6c0) = 0;
      *(undefined4 *)(param_1 + 0x6c8) = 0;
      fVar2 = 0.0;
    }
    else {
      (**(code **)(*param_2 + 0x2d0))(param_2,&local_2c);
      *(undefined4 *)(param_1 + 0x658) = local_24;
      *(undefined8 *)(param_1 + 0x650) = local_2c;
      *(undefined4 *)(param_1 + 0x6c8) = 0;
      iVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
      fVar2 = (float)(iVar1 + -1);
      fVar3 = *(float *)(param_1 + 0x6c0);
      if (fVar2 <= *(float *)(param_1 + 0x6c0)) {
        fVar3 = fVar2;
      }
      if (fVar3 <= *(float *)(param_1 + 0x6c8)) {
        fVar3 = *(float *)(param_1 + 0x6c8);
      }
      *(float *)(param_1 + 0x6c0) = fVar3;
    }
    *(float *)(param_1 + 0x6cc) = fVar2;
    *(longlong **)(param_1 + 0x6f8) = param_2;
    FUN_1448215fa(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479df644 FUN_1479df644 body=73 status=ok
// SIG undefined FUN_1479df644(void)

void FUN_1479df644(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14062ac50(param_1,param_2,0);
  lVar2 = *(longlong *)(param_1 + 0x6f0);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1479df68e FUN_1479df68e body=23 status=ok
// SIG undefined FUN_1479df68e(void)

bool FUN_1479df68e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  return -1 < iVar1;
}



// FUNCTION 1479df6a6 FUN_1479df6a6 body=159 status=ok
// SIG undefined FUN_1479df6a6(void)

ulonglong FUN_1479df6a6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  uVar4 = 0;
  (**(code **)(*param_1 + 0x790))(0,&local_38,0);
  uVar2 = (ulonglong)(int)uStack_30;
  if ((longlong)uVar2 < 1) {
LAB_1479df716:
    uVar4 = 0xffffffff;
  }
  else if (*(longlong *)(*local_38 + 0x18) != param_2) {
    uVar3 = 0;
    do {
      if (uVar2 - 1 == uVar3) goto LAB_1479df716;
      lVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while (*(longlong *)(local_38[lVar1] + 0x18) != param_2);
    uVar4 = 0xffffffff;
    if (uVar3 < uVar2) {
      uVar4 = uVar3 & 0xffffffff;
    }
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1479df746 FUN_1479df746 body=191 status=ok
// SIG undefined FUN_1479df746(void)

void FUN_1479df746(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1406552bc();
  if (param_2 != 0 || param_3 == 0) {
    return;
  }
  param_1[0xde] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      (**(code **)(*plVar1 + 0x338))(plVar1,0x14);
      lVar2 = FUN_1479df2e4(plVar1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      param_1[0xde] = lVar2;
      goto LAB_1479df7e9;
    }
  }
  plVar1 = (longlong *)0x0;
LAB_1479df7e9:
  uVar3 = FUN_1479df3d8(plVar1,0);
  FUN_1479df54e(param_1,uVar3);
  return;
}



// FUNCTION 1479df806 FUN_1479df806 body=1131 status=ok
// SIG undefined FUN_1479df806(void)

void FUN_1479df806(longlong *param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  double *pdVar18;
  byte bVar19;
  uint uVar20;
  double *pdVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  byte local_f0;
  byte local_e8;
  double local_d8 [4];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144a7e84a();
  if ((((param_1[0xde] == 0) &&
       (plVar14 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0), plVar14 != (longlong *)0x0
       )) && (lVar15 = (**(code **)(*plVar14 + 0x2b8))(plVar14), lVar15 != 0)) &&
     (*(char *)(lVar15 + 0x128) == '\x03')) {
    (**(code **)(*plVar14 + 0x338))(plVar14,0x14);
    lVar15 = FUN_1479df2e4(plVar14);
    if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar15);
    }
    param_1[0xde] = lVar15;
  }
  cVar11 = FUN_140041326(param_1);
  if ((cVar11 == '\0') || (param_1[0xde] == 0)) goto LAB_1479df86f;
  local_68 = 0;
  plVar14 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0);
  if ((plVar14 == (longlong *)0x0) ||
     ((lVar15 = (**(code **)(*plVar14 + 0x2b8))(plVar14), lVar15 == 0 ||
      (*(char *)(lVar15 + 0x128) != '\x03')))) {
    plVar14 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar14 + 0x338))(plVar14,0x14);
  }
  plVar14 = (longlong *)FUN_1479df3d8(plVar14,&local_68);
  if (plVar14 == (longlong *)0x0) goto LAB_1479df86f;
  (**(code **)(*plVar14 + 0x2b8))(plVar14);
  uVar20 = *(uint *)(param_1 + 0xda) & 1;
  bVar19 = (byte)uVar20;
  if (uVar20 != 0) {
    *(float *)(param_1 + 0xd8) =
         param_2 * *(float *)((longlong)param_1 + 0x6c4) + *(float *)(param_1 + 0xd8);
  }
  fVar23 = *(float *)(param_1 + 0xd9);
  fVar1 = *(float *)((longlong)param_1 + 0x6cc);
  if ((*(uint *)(param_1 + 0xda) & 2) == 0) {
    fVar22 = *(float *)(param_1 + 0xd8);
    if (fVar1 <= *(float *)(param_1 + 0xd8)) {
      fVar22 = fVar1;
    }
    if (fVar22 <= fVar23) {
      fVar22 = fVar23;
    }
    *(float *)(param_1 + 0xd8) = fVar22;
  }
  else {
    fVar23 = (float)FUN_1447c7e44(*(float *)(param_1 + 0xd8) - fVar23,(fVar1 - fVar23) + 1.0);
    *(float *)(param_1 + 0xd8) = fVar23 + *(float *)(param_1 + 0xd9);
    bVar19 = (byte)(int)param_1[0xda] & 1;
  }
  bVar2 = *(byte *)(param_1 + 0xdb);
  local_f8 = FUN_147d421f4(plVar14,param_1 + 0x2c,*(undefined4 *)((longlong)param_1 + 0x6d4));
  uVar20 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
  local_f0 = bVar2 & 1;
  local_e8 = bVar19;
  plVar14 = (longlong *)
            FUN_147d42496(plVar14,uVar20 >> 0x10 ^ uVar20,*(undefined4 *)((longlong)param_1 + 0x6c4)
                          ,(int)param_1[0xd8]);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x2d0))(plVar14,&local_74);
    if ((((int)param_1[0xca] != local_74) || (*(int *)((longlong)param_1 + 0x654) != local_70)) ||
       ((int)param_1[0xcb] != local_6c)) {
      FUN_1448c69c8(param_1);
    }
    plVar17 = plVar14;
    uVar12 = (**(code **)(*plVar14 + 0x2c8))(plVar14,local_d8);
    auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_b0 - (double)param_1[0xd1]));
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_b8 - (double)param_1[0xd0]));
    iVar13 = movmskpd(uVar12,auVar7);
    lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_a0 - (double)param_1[0xd3]));
    auVar5._8_4_ = (int)lVar15;
    auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_a8 - (double)param_1[0xd2]));
    auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar20 = movmskpd((int)plVar17,auVar5);
    if ((uVar20 & 0x3fffffff) == 0 && iVar13 == 0) {
      lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8[1] - (double)param_1[0xcd]));
      auVar10._8_4_ = (int)lVar15;
      auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8[0] - (double)param_1[0xcc]))
      ;
      auVar10._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar20 = movmskpd(iVar13,auVar10);
      lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8[3] - (double)param_1[0xcf]));
      auVar9._8_4_ = (int)lVar15;
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8[2] - (double)param_1[0xce]));
      auVar9._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar13 = movmskpd(0,auVar9);
      uVar16 = iVar13 << 2 | uVar20;
      if (uVar16 != 0) {
        auVar8._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(local_d8[1] + (double)param_1[0xcd]));
        auVar8._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(local_d8[0] + (double)param_1[0xcc]));
        uVar20 = movmskpd(uVar20,auVar8);
        lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8[3] + (double)param_1[0xcf]));
        auVar6._8_4_ = (int)lVar15;
        auVar6._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(local_d8[2] + (double)param_1[0xce]));
        auVar6._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
        uVar16 = movmskpd(uVar16,auVar6);
        if ((uVar16 & 0x3fffffff) != 0 || uVar20 != 0) goto LAB_1479dfb50;
      }
      lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_90 - (double)param_1[0xd5]));
      auVar4._8_4_ = (int)lVar15;
      auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_98 - (double)param_1[0xd4]));
      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      iVar13 = movmskpd(uVar20,auVar4);
      lVar15 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_80 - (double)param_1[0xd7]));
      auVar3._8_4_ = (int)lVar15;
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_88 - (double)param_1[0xd6]));
      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar20 = movmskpd(0,auVar3);
      if ((uVar20 & 0x3fffffff) == 0 && iVar13 == 0) goto LAB_1479dfb6c;
    }
LAB_1479dfb50:
    pdVar18 = local_d8;
    pdVar21 = (double *)(param_1 + 0xcc);
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar21 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar21 = pdVar21 + 1;
    }
    FUN_1448215fa(param_1);
  }
LAB_1479dfb6c:
  FUN_147bbd696(param_1[0xde],local_68,plVar14);
LAB_1479df86f:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479dfc72 FUN_1479dfc72 body=279 status=ok
// SIG undefined FUN_1479dfc72(void)

/* WARNING: Removing unreachable block (ram,0x0001479dfcc3) */
/* WARNING: Removing unreachable block (ram,0x0001479dfcc9) */
/* WARNING: Removing unreachable block (ram,0x0001479dfcd7) */

void FUN_1479dfc72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  plStack_28 = (longlong *)param_2[2];
  if (plStack_28 == (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FUN_14479d2ce(param_1);
  uVar4 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar3 + 0x248))(plVar3,uVar4,&local_38);
  plVar3 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[2];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479dfd8a FUN_1479dfd8a body=117 status=ok
// SIG undefined FUN_1479dfd8a(void)

void FUN_1479dfd8a(longlong param_1,undefined1 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_40[0] = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dfe00 FUN_1479dfe00 body=103 status=ok
// SIG undefined FUN_1479dfe00(void)

void FUN_1479dfe00(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dfe68 FUN_1479dfe68 body=113 status=ok
// SIG undefined FUN_1479dfe68(void)

void FUN_1479dfe68(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dfeda FUN_1479dfeda body=103 status=ok
// SIG undefined FUN_1479dfeda(void)

void FUN_1479dfeda(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479dff42 FUN_1479dff42 body=250 status=ok
// SIG undefined FUN_1479dff42(void)

void FUN_1479dff42(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
    plVar3 = local_28;
    *param_3 = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e003e FUN_1479e003e body=304 status=ok
// SIG undefined FUN_1479e003e(void)

void FUN_1479e003e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e0170 FUN_1479e0170 body=250 status=ok
// SIG undefined FUN_1479e0170(void)

void FUN_1479e0170(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
    plVar3 = local_28;
    *param_3 = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e026c FUN_1479e026c body=216 status=ok
// SIG undefined FUN_1479e026c(void)

void FUN_1479e026c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e0346 FUN_1479e0346 body=294 status=ok
// SIG undefined FUN_1479e0346(void)

void FUN_1479e0346(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
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
    plVar3 = local_28;
    param_3[2] = local_48;
    *(undefined4 *)param_3 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
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
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e0474 FUN_1479e0474 body=382 status=ok
// SIG undefined FUN_1479e0474(void)

void FUN_1479e0474(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e05fa FUN_1479e05fa body=244 status=ok
// SIG undefined FUN_1479e05fa(void)

void FUN_1479e05fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
    plVar3 = local_28;
    *param_3 = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e06f6 FUN_1479e06f6 body=244 status=ok
// SIG undefined FUN_1479e06f6(void)

void FUN_1479e06f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
    plVar3 = local_28;
    *param_3 = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e07f2 FUN_1479e07f2 body=244 status=ok
// SIG undefined FUN_1479e07f2(void)

void FUN_1479e07f2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    *param_3 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
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
    plVar3 = local_28;
    *param_3 = 0;
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
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e08ea FUN_1479e08ea body=16 status=ok
// SIG undefined FUN_1479e08ea(void)

byte FUN_1479e08ea(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1479e08fa FUN_1479e08fa body=607 status=ok
// SIG undefined FUN_1479e08fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1479e08fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  plVar9 = (longlong *)FUN_1479f766a(param_2);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)(param_1 + 0x170);
  iVar5 = *(int *)(param_1 + 0x178);
  *(uint *)(param_1 + 0x178) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x17c) < iVar5 + 1U) {
    FUN_1479f7564(plVar3,iVar5);
  }
  lVar6 = *plVar3;
  *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar9 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  lVar6 = *(longlong *)
           (*(longlong *)(param_1 + 0x170) + (longlong)(*(int *)(param_1 + 0x178) + -1) * 0x10);
  iVar5 = DAT_14c761400 + 1;
  *(int *)(lVar6 + 0xc) = DAT_14c761400;
  DAT_14c761400 = iVar5;
  bVar4 = *(byte *)(lVar6 + 2);
  if ((bVar4 < 2) && (1 < *(int *)(param_1 + 0x178))) {
    uVar10 = (ulonglong)(*(int *)(param_1 + 0x178) - 2);
    lVar11 = uVar10 << 4;
    lVar13 = uVar10 + 1;
    do {
      lVar14 = *(longlong *)(*plVar3 + lVar11);
      if (*(longlong *)(lVar14 + 4) == *(longlong *)(lVar6 + 4)) {
        if ((*(byte *)(lVar14 + 1) & 1) != 0) {
          *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 1;
          break;
        }
        if ((*(byte *)(lVar14 + 2) ^ bVar4) == 1) {
          *(byte *)(lVar14 + 1) = *(byte *)(lVar14 + 1) | 1;
          *(byte *)(lVar6 + 1) = *(byte *)(lVar6 + 1) | 1;
        }
      }
      lVar11 = lVar11 + -0x10;
      lVar14 = lVar13 + -1;
      bVar7 = 0 < lVar13;
      lVar13 = lVar14;
    } while (lVar14 != 0 && bVar7);
  }
  auVar8 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar10 = (longlong)*(int *)(param_1 + 0x188) * 0x70 - 0x70U >> 4;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar10;
    auVar16._8_4_ = SUB164(auVar17 * ZEXT816(0x2492492492492493),8);
    auVar16._0_8_ = uVar10 / 7;
    auVar16._12_4_ = (int)(uVar10 / 0x700000000);
    puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x158);
    uVar15 = 0;
    auVar17 = pmovsxbq(in_XMM1,0x302);
    auVar18 = pmovsxbq(in_XMM2,0x100);
    auVar16 = auVar16 | _DAT_149931e80;
    lVar13 = auVar16._0_8_;
    do {
      lVar11 = auVar16._8_8_;
      if ((bool)(~(lVar13 < (longlong)(uVar15 ^ auVar8._0_8_)) & 1)) {
        puVar12[-0x54] = 0;
      }
      auVar19._8_4_ = (int)uVar15;
      auVar19._0_8_ = uVar15;
      auVar19._12_4_ = (int)(uVar15 >> 0x20);
      if ((longlong)((auVar19._8_8_ | auVar18._8_8_) ^ auVar8._8_8_) <= lVar11) {
        puVar12[-0x38] = 0;
      }
      auVar19 = (auVar19 | auVar17) ^ auVar8;
      if (auVar19._0_8_ <= lVar13) {
        puVar12[-0x1c] = 0;
      }
      if (auVar19._8_8_ <= lVar11) {
        *puVar12 = 0;
      }
      uVar15 = uVar15 + 4;
      puVar12 = puVar12 + 0x70;
    } while ((uVar10 / 7 + 4 & 0xfffffffffffffffc) != uVar15);
  }
  FUN_14128edda(param_2 + 0x10);
  return lVar6;
}



// FUNCTION 1479e0b5a FUN_1479e0b5a body=378 status=ok
// SIG undefined FUN_1479e0b5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479e0b5a(longlong param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar2 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar3 = (longlong)*(int *)(param_1 + 0x188) * 0x70 - 0x70U >> 4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar3;
    auVar7._8_4_ = SUB164(auVar9 * ZEXT816(0x2492492492492493),8);
    auVar7._0_8_ = uVar3 / 7;
    auVar7._12_4_ = (int)(uVar3 / 0x700000000);
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x158);
    uVar5 = 0;
    auVar9 = pmovsxbq(in_XMM1,0x302);
    auVar10 = pmovsxbq(in_XMM2,0x100);
    auVar7 = auVar7 | _DAT_149931e80;
    do {
      lVar6 = auVar7._0_8_;
      lVar8 = auVar7._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar5 ^ auVar2._0_8_)) & 1)) {
        puVar4[-0x54] = 0;
      }
      auVar11._8_4_ = (int)uVar5;
      auVar11._0_8_ = uVar5;
      auVar11._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar11._8_8_ | auVar10._8_8_) ^ auVar2._8_8_) <= lVar8) {
        puVar4[-0x38] = 0;
      }
      auVar11 = (auVar11 | auVar9) ^ auVar2;
      if (auVar11._0_8_ <= lVar6) {
        puVar4[-0x1c] = 0;
      }
      if (auVar11._8_8_ <= lVar8) {
        *puVar4 = 0;
      }
      uVar5 = uVar5 + 4;
      puVar4 = puVar4 + 0x70;
    } while ((uVar3 / 7 + 4 & 0xfffffffffffffffc) != uVar5);
  }
  iVar1 = *(int *)(param_1 + 0x17c);
  FUN_140ffc319(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x178) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x17c) != 0)) {
    FUN_1479f6f24(param_1 + 0x170,0);
    return;
  }
  return;
}



// FUNCTION 1479e0cd4 FUN_1479e0cd4 body=39 status=ok
// SIG undefined FUN_1479e0cd4(void)

void FUN_1479e0cd4(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x178))) {
    FUN_1479e0cfc(param_1,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x170) + (ulonglong)param_2 * 0x10));
    return;
  }
  return;
}



// FUNCTION 1479e0cfc FUN_1479e0cfc body=646 status=ok
// SIG undefined FUN_1479e0cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479e0cfc(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    local_78 = (undefined1  [16])0x0;
    iVar6 = *(int *)(param_1 + 0x178);
    if (0 < iVar6) {
      cVar2 = *(char *)(param_2 + 2);
      uVar7 = 0;
      do {
        if ((uVar7 != param_3) &&
           (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x170) + uVar7 * 0x10),
           *(longlong *)(lVar10 + 4) == *(longlong *)(param_2 + 4))) {
          cVar3 = *(char *)(lVar10 + 2);
          if (cVar3 == *(char *)(param_2 + 2)) {
            local_78._8_4_ = 0;
            if (local_78._12_4_ == 0) goto LAB_1479e0f48;
            FUN_14481578e(local_78,0);
            break;
          }
          if ((bool)cVar3 == (cVar2 == '\0')) {
            uVar5 = local_78._8_4_;
            lVar10 = (longlong)(int)local_78._8_4_;
            local_78._8_4_ = local_78._8_4_ + 1;
            if ((uint)local_78._12_4_ < (uint)local_78._8_4_) {
              FUN_1446f48e2(local_78,uVar5);
            }
            *(int *)(local_78._0_8_ + lVar10 * 4) = (int)uVar7;
            iVar6 = *(int *)(param_1 + 0x178);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar6);
    }
    if (0 < (int)local_78._8_4_) {
      lVar10 = 0;
      do {
        pbVar1 = (byte *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x170) +
                           (longlong)*(int *)(local_78._0_8_ + lVar10 * 4) * 0x10) + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)local_78._8_4_);
    }
LAB_1479e0f48:
    if (local_78._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1479f7722(param_1 + 0x170,param_3);
  auVar4 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar7 = (longlong)*(int *)(param_1 + 0x188) * 0x70 - 0x70U >> 4;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar7;
    auVar11._8_4_ = SUB164(auVar13 * ZEXT816(0x2492492492492493),8);
    auVar11._0_8_ = uVar7 / 7;
    auVar11._12_4_ = (int)(uVar7 / 0x700000000);
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x158);
    uVar9 = 0;
    auVar13 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    auVar11 = auVar11 | _DAT_149931e80;
    lVar10 = auVar11._0_8_;
    do {
      lVar12 = auVar11._8_8_;
      if ((bool)(~(lVar10 < (longlong)(uVar9 ^ auVar4._0_8_)) & 1)) {
        puVar8[-0x54] = 0;
      }
      auVar15._8_4_ = (int)uVar9;
      auVar15._0_8_ = uVar9;
      auVar15._12_4_ = (int)(uVar9 >> 0x20);
      if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar4._8_8_) <= lVar12) {
        puVar8[-0x38] = 0;
      }
      auVar15 = (auVar15 | auVar13) ^ auVar4;
      if (auVar15._0_8_ <= lVar10) {
        puVar8[-0x1c] = 0;
      }
      if (auVar15._8_8_ <= lVar12) {
        *puVar8 = 0;
      }
      uVar9 = uVar9 + 4;
      puVar8 = puVar8 + 0x70;
    } while ((uVar7 / 7 + 4 & 0xfffffffffffffffc) != uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e0f90 FUN_1479e0f90 body=261 status=ok
// SIG undefined FUN_1479e0f90(void)

void FUN_1479e0f90(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  (**(code **)(*param_1 + 0x588))(param_1,&local_58,local_34 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e10ac FUN_1479e10ac body=553 status=ok
// SIG undefined FUN_1479e10ac(void)

void FUN_1479e10ac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_d4;
  undefined4 local_a8;
  undefined1 local_70 [24];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  longlong *plVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = param_1[0x22];
  if ((lVar2 != 0) && ((char)param_1[0x45] == '\0')) {
    lVar9 = *(longlong *)(lVar2 + 0x268);
    lVar1 = *(longlong *)(lVar2 + 0x270);
    param_1[0x42] = *(longlong *)(lVar2 + 0x260);
    param_1[0x43] = lVar9;
    param_1[0x44] = lVar1;
    *(float *)((longlong)param_1 + 0x1fc) = 1.0 / *(float *)(param_1 + 0x2f);
    if ((int)param_1[0x3e] != 0) {
      (**(code **)(*param_1 + 0x598))(param_1,1);
      plVar15 = param_1;
      dVar11 = (double)(**(code **)(*param_1 + 0x590))(param_1,local_70,0);
      uVar13 = SUB84(plVar15,0);
      lVar2 = param_1[0x22];
      dVar5 = *(double *)(lVar2 + 0x240);
      dVar6 = *(double *)(lVar2 + 0x248);
      dVar7 = *(double *)(lVar2 + 0x250);
      dVar8 = *(double *)(lVar2 + 600);
      pdVar12 = *(double **)(lVar2 + 0x228);
      local_178 = dVar5;
      uStack_170 = dVar6;
      local_168 = dVar7;
      uStack_160 = dVar8;
      if (pdVar12 == (double *)0x0) {
        uVar13 = 0x40;
        pdVar12 = (double *)FUN_14001cc68();
        dVar11 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar11;
        dVar11 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar11;
        dVar11 = DAT_14c846500;
        pdVar12[4] = DAT_14c8464f8;
        pdVar12[5] = dVar11;
        dVar11 = DAT_14c846508;
        pdVar12[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar12;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[1]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar12);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar11,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar12[3]);
      auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar12[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar12[3]) >> 0x20);
      uVar14 = movmskpd(uVar13,auVar4);
      if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar12 + 2) = (undefined4)local_168;
        *(undefined4 *)((longlong)pdVar12 + 0x14) = local_168._4_4_;
        *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_160._4_4_;
        *(undefined4 *)pdVar12 = (undefined4)local_178;
        *(undefined4 *)((longlong)pdVar12 + 4) = local_178._4_4_;
        *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_170;
        *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_170._4_4_;
        FUN_1448052ee();
        pdVar12[6] = local_48;
        pdVar12[4] = local_58;
        pdVar12[5] = dStack_50;
      }
      local_48 = pdVar12[6];
      local_58 = pdVar12[4];
      dStack_50 = pdVar12[5];
      memset(&local_178,0,0x100);
      local_a8 = 0xffffffff;
      local_d4 = 0xffffffff;
      local_178 = (double)CONCAT44(0x3f800000,(undefined4)local_178);
      local_188 = 0;
      local_190 = 0;
      local_198 = &local_178;
      FUN_1407fd932(param_1[0x22],local_70,&local_58,0);
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e12d6 FUN_1479e12d6 body=77 status=ok
// SIG undefined FUN_1479e12d6(void)

void FUN_1479e12d6(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x205) = 1;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_1479f782c(param_1 + 0x1e8);
  }
  *(undefined1 *)(param_1 + 0x228) = 0;
  return;
}



// FUNCTION 1479e1324 FUN_1479e1324 body=175 status=ok
// SIG undefined FUN_1479e1324(void)

void FUN_1479e1324(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined4 *)(param_1 + 0x200) = local_1c;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined2 *)(param_1 + 0x204) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e13d4 FUN_1479e13d4 body=330 status=ok
// SIG undefined FUN_1479e13d4(void)

void FUN_1479e13d4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *_Src;
  undefined1 auStack_258 [32];
  undefined1 local_238 [4];
  undefined4 local_234;
  undefined4 local_194;
  undefined4 local_168;
  undefined1 local_138 [256];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_258;
  memset(local_238,0,0x100);
  local_168 = 0xffffffff;
  local_234 = 0x3f800000;
  local_194 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_238);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_238);
  }
  _Src = local_238;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    _Src = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4b0))(param_1,0);
  param_1[0x27] = DAT_14c8464f0;
  lVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = lVar1;
  lVar1 = param_1[0x3f];
  memcpy(local_138,_Src,0x100);
  local_38 = (int)lVar1;
  FUN_1447cd2ec(param_1 + 0x33,local_138);
  if ((local_30 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e1542 FUN_1479e1542 body=267 status=ok
// SIG undefined FUN_1479e1542(void)

void FUN_1479e1542(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [156];
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  memset(local_120,0,0x9c);
  local_51 = 0;
  local_53 = 0;
  local_28 = (undefined4)param_1[0x3f];
  local_128 = 0x3f80000000000000;
  local_84 = 0xffffffff;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1447cd2ec(param_1 + 0x33,&local_128);
  param_1[0x27] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  (**(code **)(*param_1 + 0x4d0))(param_1);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e1674 FUN_1479e1674 body=651 status=ok
// SIG undefined FUN_1479e1674(void)

undefined8
FUN_1479e1674(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,
             undefined1 *param_5,float *param_6)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [156];
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong local_20;
  
  uVar2 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar1 = (float)param_2;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_6 = 0.0;
  *param_5 = 0;
  if (*(char *)(param_1 + 0x204) != '\0') goto LAB_1479e16b8;
  fVar1 = (float)param_3 * *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x200) + fVar1;
  if (1.0 <= fVar1) {
    *param_6 = fVar1 + -1.0;
    if (*(char *)(param_1 + 0x182) != '\x02') {
      if (*(char *)(param_1 + 0x182) == '\0') {
        *param_5 = 1;
        memcpy(&local_128,param_4,0x100);
        uStack_28 = 0x3f800000;
        FUN_1447cd2ec(param_1 + 0x198,&local_128);
      }
      else {
        local_128 = 0x3f80000000000000;
        memset(local_120,0,0x9c);
        local_84 = 0xffffffff;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_58 = 0xffffffff;
        local_54 = 0;
        uStack_4c = 0;
        local_44 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        local_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0x3f800000;
        FUN_1447cd2ec(param_1 + 0x188,&local_128);
        *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) ^ 0x80000000;
      }
      fVar1 = 1.0;
      uVar3 = 0;
      goto LAB_1479e16b8;
    }
    param_1 = param_1 + 0x1c8;
LAB_1479e1791:
    memcpy(&local_128,param_4,0x100);
    uStack_28 = 0;
    FUN_1447cd2ec(param_1,&local_128);
  }
  else {
    uVar3 = uVar2;
    if (0.0 <= fVar1) goto LAB_1479e16b8;
    *param_6 = -fVar1;
    if (*(char *)(param_1 + 0x182) != '\x03') {
      if (*(char *)(param_1 + 0x182) != '\x01') goto LAB_1479e16b8;
      *param_5 = 1;
      param_1 = param_1 + 0x198;
      goto LAB_1479e1791;
    }
    local_128 = 0x3f80000000000000;
    memset(local_120,0,0x9c);
    local_84 = 0xffffffff;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    FUN_1447cd2ec(param_1 + 0x188,&local_128);
    *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) ^ 0x80000000;
  }
  fVar1 = 0.0;
  uVar3 = 0;
LAB_1479e16b8:
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 1479e1900 FUN_1479e1900 body=146 status=ok
// SIG undefined FUN_1479e1900(void)

ulonglong FUN_1479e1900(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar4;
  undefined7 uVar3;
  
  if (param_1[0x22] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1[0x22] + 0xa8);
  }
  cVar1 = (**(code **)(*param_1 + 0x578))(param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (((cVar1 != '\0') && (lVar4 != 0)) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
    (**(code **)(*param_1 + 0x4c8))(param_1,param_2,param_3,param_4);
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      uVar2 = CONCAT71(uVar3,param_1[0x22] == 0);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1479e1992 FUN_1479e1992 body=931 status=ok
// SIG undefined FUN_1479e1992(void)

double * FUN_1479e1992(ulonglong param_1,double *param_2,float param_3)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  pfVar12 = DAT_14c8464f0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_2[2] = (double)DAT_14c8464f0;
  dVar19 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar19;
  uVar15 = *(uint *)(param_1 + 0x1f0);
  dVar19 = DAT_14c8464e8;
  dVar20 = DAT_14c8464e0;
  pfVar10 = DAT_14c8464f0;
  if (1.0 <= param_3) {
    iVar18 = uVar15 - 1;
    uVar17 = param_1;
LAB_1479e1a50:
    uVar14 = (undefined4)uVar17;
    if (iVar18 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x110);
      dVar19 = *(double *)(lVar6 + 0x240);
      dVar20 = *(double *)(lVar6 + 0x248);
      dVar3 = *(double *)(lVar6 + 0x250);
      dVar4 = *(double *)(lVar6 + 600);
      pdVar13 = *(double **)(lVar6 + 0x228);
      local_b8 = dVar19;
      uStack_b0 = dVar20;
      local_a8 = dVar3;
      dStack_a0 = dVar4;
      if (pdVar13 == (double *)0x0) {
        uVar14 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar5 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar5;
        dVar5 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar5;
        dVar5 = DAT_14c846500;
        pdVar13[4] = DAT_14c8464f8;
        pdVar13[5] = dVar5;
        pfVar12 = DAT_14c846508;
        pdVar13[6] = (double)DAT_14c846508;
        *(double **)(lVar6 + 0x228) = pdVar13;
      }
      auVar7._8_4_ = (int)-(ulonglong)(dVar20 != pdVar13[1]);
      auVar7._0_8_ = -(ulonglong)(dVar19 != *pdVar13);
      auVar7._12_4_ = (int)(-(ulonglong)(dVar20 != pdVar13[1]) >> 0x20);
      iVar11 = movmskpd((int)pfVar12,auVar7);
      auVar8._8_4_ = (int)-(ulonglong)(dVar4 != pdVar13[3]);
      auVar8._0_8_ = -(ulonglong)(dVar3 != pdVar13[2]);
      auVar8._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar13[3]) >> 0x20);
      uVar15 = movmskpd(uVar14,auVar8);
      if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
        pdVar13[2] = local_a8;
        pdVar13[3] = dStack_a0;
        *(undefined4 *)pdVar13 = (undefined4)local_b8;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_b8._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_b0._4_4_;
        FUN_1448052ee(&local_b8,&local_98);
        pdVar13[6] = local_88;
        pdVar13[4] = local_98;
        pdVar13[5] = dStack_90;
      }
      local_88 = pdVar13[6];
      local_98 = pdVar13[4];
      dStack_90 = pdVar13[5];
      lVar6 = *(longlong *)(param_1 + 0x1e8);
      lVar9 = (longlong)iVar18 * 0x28;
      fVar21 = *(float *)(lVar6 + 0x1c + lVar9);
      fVar2 = *(float *)(lVar6 + 0x24 + lVar9);
      local_a8 = *(double *)(lVar6 + 0x10 + lVar9);
      local_b8 = *(double *)(lVar6 + lVar9);
      uStack_b0 = (double)((undefined8 *)(lVar6 + lVar9))[1];
      FUN_1401c9a0e(&local_98,&local_d8,&local_b8);
      lVar6 = *(longlong *)(param_1 + 0x1e8);
      pdVar13 = &DAT_14c8464e0;
      if (*(char *)(lVar6 + 0x18 + lVar9) != '\0') {
        pdVar13 = (double *)(param_1 + 0x210);
      }
      local_a8 = local_c8 + pdVar13[2];
      uStack_b0 = (double)CONCAT44(uStack_cc,uStack_d0) + pdVar13[1];
      local_b8 = (double)CONCAT44(uStack_d4,local_d8) + *pdVar13;
      uVar16 = *(int *)(param_1 + 0x1f0) - 1;
      uVar15 = iVar18 + 1U;
      if ((int)uVar16 <= (int)(iVar18 + 1U)) {
        uVar15 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar15) {
        uVar16 = uVar15;
      }
      lVar9 = (ulonglong)uVar16 * 0x28;
      local_c8 = *(double *)(lVar6 + 0x10 + lVar9);
      puVar1 = (undefined4 *)(lVar6 + lVar9);
      local_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      FUN_1401c9a0e(&local_98,&local_f0,&local_d8);
      pdVar13 = &DAT_14c8464e0;
      if (*(char *)(*(longlong *)(param_1 + 0x1e8) + 0x18 + lVar9) != '\0') {
        pdVar13 = (double *)(param_1 + 0x210);
      }
      dVar3 = (double)((param_3 - fVar21) / fVar2);
      dVar19 = ((local_e8 + pdVar13[1]) - uStack_b0) * dVar3 + uStack_b0;
      dVar20 = ((local_f0 + *pdVar13) - local_b8) * dVar3 + local_b8;
      pfVar10 = (float *)(((local_e0 + pdVar13[2]) - local_a8) * dVar3 + local_a8);
    }
  }
  else if (0 < (int)uVar15) {
    pfVar12 = (float *)(*(longlong *)(param_1 + 0x1e8) + 0x24);
    fVar21 = 0.0;
    uVar17 = 0;
    do {
      fVar21 = fVar21 + *pfVar12;
      if (param_3 < fVar21) {
        iVar18 = (int)uVar17;
        goto LAB_1479e1a50;
      }
      uVar17 = uVar17 + 1;
      pfVar12 = pfVar12 + 10;
    } while (uVar15 != uVar17);
  }
  lVar6 = *(longlong *)(param_1 + 0x110);
  dVar3 = *(double *)(lVar6 + 0x270);
  dVar4 = *(double *)(lVar6 + 0x260);
  dVar5 = *(double *)(lVar6 + 0x268);
  if ((dVar4 == dVar20) && (!NAN(dVar4) && !NAN(dVar20))) {
    if ((dVar5 == dVar19) && (!NAN(dVar5) && !NAN(dVar19))) {
      if ((dVar3 == (double)pfVar10) && (!NAN(dVar3) && !NAN((double)pfVar10))) goto LAB_1479e1c99;
    }
  }
  *param_2 = dVar20 - dVar4;
  param_2[1] = dVar19 - dVar5;
  param_2[2] = (double)pfVar10 - dVar3;
LAB_1479e1c99:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479e1d36 FUN_1479e1d36 body=513 status=ok
// SIG undefined FUN_1479e1d36(void)

void FUN_1479e1d36(longlong *param_1,void *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(byte *)((longlong)param_1 + 0x17c) & 1) != 0) {
    if (*(char *)((longlong)param_1 + 0x204) == '\0') {
      memcpy(local_148,param_2,0x100);
      local_48 = param_3;
      FUN_1447cd2ec(param_1 + 0x35,local_148);
      *(undefined1 *)((longlong)param_1 + 0x204) = 1;
    }
    goto LAB_1479e1ed5;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x182);
  if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x3f) = 0;
    plVar3 = param_1 + 0x39;
    memcpy(local_148,param_2,0x100);
    local_48 = 0;
LAB_1479e1ed0:
    FUN_1447cd2ec(plVar3,local_148);
  }
  else {
    if (cVar1 == '\x01') {
      if ((*(float *)(param_1 + 0x40) == -1.0) && (!NAN(*(float *)(param_1 + 0x40))))
      goto LAB_1479e1e42;
    }
    else if (cVar1 == '\0') {
LAB_1479e1e42:
      plVar3 = param_1 + 0x33;
      memcpy(local_148,param_2,0x100);
      local_48 = param_3;
      FUN_1447cd2ec(plVar3,local_148);
      *(undefined1 *)((longlong)param_1 + 0x205) = 1;
      (**(code **)(*param_1 + 0x4b0))(param_1,0);
      param_1[0x27] = DAT_14c8464f0;
      lVar2 = DAT_14c8464e8;
      param_1[0x25] = DAT_14c8464e0;
      param_1[0x26] = lVar2;
      lVar2 = param_1[0x3f];
      memcpy(local_148,param_2,0x100);
      local_48 = (int)lVar2;
      goto LAB_1479e1ed0;
    }
    memcpy(local_148,param_2,0x100);
    local_48 = param_3;
    FUN_1447cd2ec(param_1 + 0x31,local_148);
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ 0x80000000;
  }
LAB_1479e1ed5:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e1f42 FUN_1479e1f42 body=26 status=ok
// SIG undefined FUN_1479e1f42(void)

void FUN_1479e1f42(undefined8 param_1)

{
  FUN_1401c3ca6();
  FUN_1479e10ac(param_1);
  return;
}



// FUNCTION 1479e2000 FUN_1479e2000 body=95 status=ok
// SIG undefined FUN_1479e2000(void)

void FUN_1479e2000(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (*(char *)((longlong)param_1 + 0x205) == '\x01') {
    if ((char)param_2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x2f0))(param_1);
      if (cVar2 == '\0') goto LAB_1479e204e;
    }
    lVar1 = param_1[0x22];
    FUN_1408453d0(param_1,param_2);
    if (lVar1 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x205) = 0;
    }
    return;
  }
LAB_1479e204e:
  FUN_1408453d0(param_1,param_2);
  return;
}



// FUNCTION 1479e2060 FUN_1479e2060 body=511 status=ok
// SIG undefined FUN_1479e2060(void)

void FUN_1479e2060(longlong param_1,char param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar9 = *(longlong *)(param_1 + 0x110);
  if (lVar9 != 0 && param_2 == '\x01') {
    dVar7 = *(double *)(lVar9 + 0x260);
    dVar8 = *(double *)(lVar9 + 0x268);
    dVar2 = *(double *)(lVar9 + 0x270);
    *(undefined4 *)(param_1 + 0x208) = 0;
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x1f0);
    if (0 < (int)*(uint *)(param_1 + 0x1f0)) {
      pdVar6 = *(double **)(param_1 + 0x1e8);
      dVar15 = pdVar6[2];
      bVar13 = *(char *)(pdVar6 + 3) != '\0';
      if (bVar13) {
        dVar15 = dVar15 + dVar2;
      }
      dVar16 = pdVar6[1];
      if (bVar13) {
        dVar16 = dVar16 + dVar8;
      }
      dVar17 = *pdVar6;
      if (bVar13) {
        dVar17 = dVar17 + dVar7;
      }
      lVar9 = 0;
      lVar10 = 0;
      do {
        lVar10 = lVar10 + 1;
        lVar11 = *(longlong *)(param_1 + 0x1e8);
        if (lVar10 < (int)uVar12) {
          dVar3 = *(double *)(lVar11 + 0x28 + lVar9);
          dVar4 = *(double *)(lVar11 + 0x30 + lVar9);
          dVar5 = *(double *)(lVar11 + 0x38 + lVar9);
          if (*(char *)(lVar11 + 0x40 + lVar9) != '\0') {
            dVar3 = dVar3 + dVar7;
            dVar4 = dVar4 + dVar8;
            dVar5 = dVar5 + dVar2;
          }
          *(float *)(lVar11 + 0x20 + lVar9) =
               (float)SQRT((dVar5 - dVar15) * (dVar5 - dVar15) +
                           (dVar3 - dVar17) * (dVar3 - dVar17) + (dVar4 - dVar16) * (dVar4 - dVar16)
                          );
          *(float *)(param_1 + 0x208) =
               *(float *)(*(longlong *)(param_1 + 0x1e8) + 0x20 + lVar9) +
               *(float *)(param_1 + 0x208);
          dVar15 = dVar5;
          dVar16 = dVar4;
          dVar17 = dVar3;
        }
        else {
          *(undefined4 *)(lVar11 + 0x20 + lVar9) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0x24 + lVar9) = 0x3f800000;
          *(undefined4 *)(*(longlong *)(param_1 + 0x1e8) + 0x1c + lVar9) = 0x3f800000;
        }
        uVar12 = (ulonglong)*(int *)(param_1 + 0x1f0);
        lVar9 = lVar9 + 0x28;
      } while (lVar10 < (longlong)uVar12);
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar9 = *(longlong *)(param_1 + 0x1e8);
        lVar10 = 0;
        lVar11 = 0;
        fVar14 = 0.0;
        do {
          *(float *)(lVar9 + 0x1c + lVar10) = fVar14;
          lVar9 = *(longlong *)(param_1 + 0x1e8);
          fVar1 = *(float *)(lVar9 + 0x20 + lVar10);
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            *(float *)(lVar9 + 0x24 + lVar10) = fVar1 / *(float *)(param_1 + 0x208);
            lVar9 = *(longlong *)(param_1 + 0x1e8);
            fVar14 = fVar14 + *(float *)(lVar9 + 0x24 + lVar10);
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x28;
        } while (lVar11 < *(int *)(param_1 + 0x1f0));
      }
    }
  }
  return;
}



// FUNCTION 1479e2264 FUN_1479e2264 body=158 status=ok
// SIG undefined FUN_1479e2264(void)

void FUN_1479e2264(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e2304(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2304 FUN_1479e2304 body=76 status=ok
// SIG undefined FUN_1479e2304(void)

void FUN_1479e2304(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2d4) & 0x10) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffffffef | (uint)param_2 << 4;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2350 FUN_1479e2350 body=156 status=ok
// SIG undefined FUN_1479e2350(void)

void FUN_1479e2350(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e23ee(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e23ee FUN_1479e23ee body=65 status=ok
// SIG undefined FUN_1479e23ee(void)

void FUN_1479e23ee(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 900) != param_2) || (NAN(*(float *)(param_1 + 900)) || NAN(param_2)))
    {
      *(float *)(param_1 + 900) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2430 FUN_1479e2430 body=156 status=ok
// SIG undefined FUN_1479e2430(void)

void FUN_1479e2430(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e24ce(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e24ce FUN_1479e24ce body=65 status=ok
// SIG undefined FUN_1479e24ce(void)

void FUN_1479e24ce(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x37c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x37c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x37c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2510 FUN_1479e2510 body=156 status=ok
// SIG undefined FUN_1479e2510(void)

void FUN_1479e2510(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e25ae(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e25ae FUN_1479e25ae body=65 status=ok
// SIG undefined FUN_1479e25ae(void)

void FUN_1479e25ae(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x380) != param_2) ||
       (NAN(*(float *)(param_1 + 0x380)) || NAN(param_2))) {
      *(float *)(param_1 + 0x380) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e25f0 FUN_1479e25f0 body=146 status=ok
// SIG undefined FUN_1479e25f0(void)

void FUN_1479e25f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e2684(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2684 FUN_1479e2684 body=56 status=ok
// SIG undefined FUN_1479e2684(void)

void FUN_1479e2684(longlong param_1,int param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(int *)(param_1 + 0x388) != param_2)) {
    *(int *)(param_1 + 0x388) = param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479e26bc FUN_1479e26bc body=156 status=ok
// SIG undefined FUN_1479e26bc(void)

void FUN_1479e26bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e275a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e275a FUN_1479e275a body=80 status=ok
// SIG undefined FUN_1479e275a(void)

void FUN_1479e275a(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if ((*(float *)(param_1 + 0x310) != param_2) ||
       (NAN(*(float *)(param_1 + 0x310)) || NAN(param_2))) {
      *(float *)(param_1 + 0x310) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e27ae FUN_1479e27ae body=158 status=ok
// SIG undefined FUN_1479e27ae(void)

void FUN_1479e27ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e284e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e284e FUN_1479e284e body=74 status=ok
// SIG undefined FUN_1479e284e(void)

void FUN_1479e284e(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x378) & 1) != param_2) {
      *(uint *)(param_1 + 0x378) = *(uint *)(param_1 + 0x378) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e289c FUN_1479e289c body=158 status=ok
// SIG undefined FUN_1479e289c(void)

void FUN_1479e289c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e293c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e293c FUN_1479e293c body=74 status=ok
// SIG undefined FUN_1479e293c(void)

void FUN_1479e293c(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x334) & 8) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x334) = (*(uint *)(param_1 + 0x334) & 0xfffffff7) + (uint)param_2 * 8;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2986 FUN_1479e2986 body=156 status=ok
// SIG undefined FUN_1479e2986(void)

void FUN_1479e2986(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e2a24(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2a24 FUN_1479e2a24 body=65 status=ok
// SIG undefined FUN_1479e2a24(void)

void FUN_1479e2a24(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x36c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x36c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x36c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2a66 FUN_1479e2a66 body=156 status=ok
// SIG undefined FUN_1479e2a66(void)

void FUN_1479e2a66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e2b04(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2b04 FUN_1479e2b04 body=110 status=ok
// SIG undefined FUN_1479e2b04(void)

void FUN_1479e2b04(longlong param_1,longlong param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x360) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x360) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e2b72 FUN_1479e2b72 body=156 status=ok
// SIG undefined FUN_1479e2b72(void)

void FUN_1479e2b72(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e2c10(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2c10 FUN_1479e2c10 body=145 status=ok
// SIG undefined FUN_1479e2c10(void)

void FUN_1479e2c10(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2e4) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2e4)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2e4) = param_2;
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
         (plVar1 = *(longlong **)(lVar2 + 0x218), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x248))(plVar1,param_1);
      }
      FUN_1406f9ba4(&DAT_14cad1680,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1479e2ca2 FUN_1479e2ca2 body=156 status=ok
// SIG undefined FUN_1479e2ca2(void)

void FUN_1479e2ca2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1406f9290(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2d46 FUN_1479e2d46 body=248 status=ok
// SIG undefined FUN_1479e2d46(void)

void FUN_1479e2d46(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_140802a50(param_1,&local_48,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2e40 FUN_1479e2e40 body=146 status=ok
// SIG undefined FUN_1479e2e40(void)

void FUN_1479e2e40(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140802bb4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2ed4 FUN_1479e2ed4 body=156 status=ok
// SIG undefined FUN_1479e2ed4(void)

void FUN_1479e2ed4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e2f72(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e2f72 FUN_1479e2f72 body=65 status=ok
// SIG undefined FUN_1479e2f72(void)

void FUN_1479e2f72(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x374) != param_2) ||
       (NAN(*(float *)(param_1 + 0x374)) || NAN(param_2))) {
      *(float *)(param_1 + 0x374) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e2fb4 FUN_1479e2fb4 body=156 status=ok
// SIG undefined FUN_1479e2fb4(void)

void FUN_1479e2fb4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e3052(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3052 FUN_1479e3052 body=65 status=ok
// SIG undefined FUN_1479e3052(void)

void FUN_1479e3052(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x370) != param_2) ||
       (NAN(*(float *)(param_1 + 0x370)) || NAN(param_2))) {
      *(float *)(param_1 + 0x370) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3094 FUN_1479e3094 body=156 status=ok
// SIG undefined FUN_1479e3094(void)

void FUN_1479e3094(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e3132(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3132 FUN_1479e3132 body=110 status=ok
// SIG undefined FUN_1479e3132(void)

void FUN_1479e3132(longlong param_1,longlong param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x340) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x340) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e31a0 FUN_1479e31a0 body=164 status=ok
// SIG undefined FUN_1479e31a0(void)

void FUN_1479e31a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_1479e3246(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3246 FUN_1479e3246 body=113 status=ok
// SIG undefined FUN_1479e3246(void)

void FUN_1479e3246(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((((*param_2 != *(double *)(param_1 + 0x348)) ||
         (NAN(*param_2) || NAN(*(double *)(param_1 + 0x348)))) ||
        ((param_2[1] != *(double *)(param_1 + 0x350) ||
         ((NAN(param_2[1]) || NAN(*(double *)(param_1 + 0x350)) ||
          (param_2[2] != *(double *)(param_1 + 0x358))))))) ||
       (NAN(param_2[2]) || NAN(*(double *)(param_1 + 0x358)))) {
      *(double *)(param_1 + 0x358) = param_2[2];
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 0x34c) = uVar1;
      *(undefined4 *)(param_1 + 0x350) = uVar2;
      *(undefined4 *)(param_1 + 0x354) = uVar3;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e32c8 FUN_1479e32c8 body=322 status=ok
// SIG undefined FUN_1479e32c8(void)

void FUN_1479e32c8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e340c(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e340c FUN_1479e340c body=71 status=ok
// SIG undefined FUN_1479e340c(void)

void FUN_1479e340c(longlong param_1,byte param_2,char param_3,char param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x339);
  if (((((bVar1 ^ param_2) & 1) == 0) && (((bVar1 & 2) == 0) != (bool)param_3)) &&
     (((bVar1 & 4) == 0) != (bool)param_4)) {
    return;
  }
  *(byte *)(param_1 + 0x339) = param_3 * '\x02' | param_2 | param_4 << 2 | bVar1 & 0xf8;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479e3454 FUN_1479e3454 body=156 status=ok
// SIG undefined FUN_1479e3454(void)

void FUN_1479e3454(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e34f2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e34f2 FUN_1479e34f2 body=65 status=ok
// SIG undefined FUN_1479e34f2(void)

void FUN_1479e34f2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x318) != param_2) ||
       (NAN(*(float *)(param_1 + 0x318)) || NAN(param_2))) {
      *(float *)(param_1 + 0x318) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3534 FUN_1479e3534 body=156 status=ok
// SIG undefined FUN_1479e3534(void)

void FUN_1479e3534(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e35d2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e35d2 FUN_1479e35d2 body=65 status=ok
// SIG undefined FUN_1479e35d2(void)

void FUN_1479e35d2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x31c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x31c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x31c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3614 FUN_1479e3614 body=156 status=ok
// SIG undefined FUN_1479e3614(void)

void FUN_1479e3614(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e36b2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e36b2 FUN_1479e36b2 body=80 status=ok
// SIG undefined FUN_1479e36b2(void)

void FUN_1479e36b2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if ((*(float *)(param_1 + 0x30c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x30c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x30c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3702 FUN_1479e3702 body=156 status=ok
// SIG undefined FUN_1479e3702(void)

void FUN_1479e3702(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479e37a0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e37a0 FUN_1479e37a0 body=145 status=ok
// SIG undefined FUN_1479e37a0(void)

void FUN_1479e37a0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x2f0) != param_2) ||
       (NAN(*(float *)(param_1 + 0x2f0)) || NAN(param_2))) {
      *(float *)(param_1 + 0x2f0) = param_2;
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
         (plVar1 = *(longlong **)(lVar2 + 0x218), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x248))(plVar1,param_1);
      }
      FUN_1406f9ba4(&DAT_14cad1680,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1479e3836 FUN_1479e3836 body=158 status=ok
// SIG undefined FUN_1479e3836(void)

void FUN_1479e3836(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e38d6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e38d6 FUN_1479e38d6 body=76 status=ok
// SIG undefined FUN_1479e38d6(void)

void FUN_1479e38d6(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((*(uint *)(param_1 + 0x2d4) & 0x20) == 0) == (bool)param_2) {
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffffffdf | (uint)param_2 << 5;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3926 FUN_1479e3926 body=158 status=ok
// SIG undefined FUN_1479e3926(void)

void FUN_1479e3926(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e39c6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e39c6 FUN_1479e39c6 body=56 status=ok
// SIG undefined FUN_1479e39c6(void)

void FUN_1479e39c6(longlong param_1,char param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(char *)(param_1 + 0x38c) != param_2)) {
    *(char *)(param_1 + 0x38c) = param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479e3a02 FUN_1479e3a02 body=158 status=ok
// SIG undefined FUN_1479e3a02(void)

void FUN_1479e3a02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e3aa2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3aa2 FUN_1479e3aa2 body=74 status=ok
// SIG undefined FUN_1479e3aa2(void)

void FUN_1479e3aa2(longlong param_1,byte param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if (((byte)*(uint *)(param_1 + 0x368) & 1) != param_2) {
      *(uint *)(param_1 + 0x368) = *(uint *)(param_1 + 0x368) & 0xfffffffe | (uint)param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479e3af0 FUN_1479e3af0 body=158 status=ok
// SIG undefined FUN_1479e3af0(void)

void FUN_1479e3af0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e3b90(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479e3b90 FUN_1479e3b90 body=111 status=ok
// SIG undefined FUN_1479e3b90(void)

void FUN_1479e3b90(longlong param_1,char param_2)

{
  char cVar1;
  
  if (((param_2 == '\0') || ((~*(uint *)(param_1 + 0x2d4) & 10) != 0)) ||
     (*(char *)(param_1 + 0x1fb) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_14498f84a();
  }
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      (((*(byte *)(param_1 + 0x9c) & 1) == 0 || (*(char *)(param_1 + 0x1fb) != '\0')))) &&
     (cVar1 != *(char *)(param_1 + 0x38c))) {
    *(char *)(param_1 + 0x38c) = cVar1;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479e3c04 FUN_1479e3c04 body=158 status=ok
// SIG undefined FUN_1479e3c04(void)

void FUN_1479e3c04(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479e3ca4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


