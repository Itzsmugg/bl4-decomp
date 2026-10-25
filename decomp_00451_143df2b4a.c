// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143df2b4a FUN_143df2b4a body=177 status=ok
// SIG undefined FUN_143df2b4a(void)

longlong * FUN_143df2b4a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14011750a(param_2,param_1);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 143df2bfb FUN_143df2bfb body=238 status=ok
// SIG undefined FUN_143df2bfb(void)

longlong * FUN_143df2bfb(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011750a(param_2,param_1);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x10) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x10) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df2cf0 FUN_143df2cf0 body=1288 status=ok
// SIG undefined FUN_143df2cf0(void)

void FUN_143df2cf0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_58 [34];
  bool local_36;
  bool local_35;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143df207e();
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x40),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x44);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x4c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar8 = (longlong *)param_2[1];
  if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
    plVar8 = param_2;
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x50),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)*plVar8;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_34 = 0xbf800000;
  uVar6 = CONCAT71((int7)((ulonglong)plVar8 >> 8),(char)param_2[5]) & 0xffffffffffffff04;
  uVar7 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2);
  FUN_1401fdf7f(uVar7,param_2,param_1 + 0x54,&local_34);
  local_34 = 0;
  uVar6 = CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)param_2[5]) & 0xffffffffffffff04;
  FUN_1401fdf7f(CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2),param_2,param_1 + 0x58,&local_34);
  local_35 = false;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_35 = 0 < *(int *)(param_1 + 0xa8);
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_35,1);
  local_36 = false;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_36 = 0 < *(int *)(param_1 + 0x98);
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_36,1);
  if (local_35 == true) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0xa8) * 0x14,
               (longlong)*(int *)(param_1 + 0xac) * 0x14);
    local_34 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_34 = *(uint *)(param_1 + 0xa8);
    }
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    plVar8 = (longlong *)(param_1 + 0xa0);
    if (local_34 == 0) {
      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0xa8) = 0, *(int *)(param_1 + 0xac) != 0)) {
        FUN_143df3b68(plVar8,0);
      }
    }
    else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0xccccc < local_34 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_1 + 0xa8) = local_34;
      lVar9 = 0;
      lVar11 = 0;
      do {
        FUN_143df2bfb(param_2,*(longlong *)(param_1 + 0xa0) + lVar9);
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 0x14;
      } while (lVar11 < *(int *)(param_1 + 0xa8));
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      if ((*(uint *)(param_1 + 0xac) == local_34) || (FUN_143df3b68(plVar8), 0 < (int)local_34)) {
        iVar10 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0xa8);
          *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
            FUN_143df3cc0(plVar8,iVar2);
          }
          lVar9 = (longlong)iVar2 * 0x14 + *plVar8;
          FUN_143df3cb5(lVar9);
          FUN_143df2bfb(param_2,lVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_34);
      }
    }
  }
  if (local_36 == true) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x98) * 0x14,
               (longlong)*(int *)(param_1 + 0x9c) * 0x14);
    local_34 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_34 = *(uint *)(param_1 + 0x98);
    }
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    plVar8 = (longlong *)(param_1 + 0x90);
    if (local_34 == 0) {
      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
         (*(undefined4 *)(param_1 + 0x98) = 0, *(int *)(param_1 + 0x9c) != 0)) {
        FUN_143df3e2c(plVar8,0);
      }
    }
    else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0xccccc < local_34 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_1 + 0x98) = local_34;
      lVar9 = 0;
      lVar11 = 0;
      do {
        FUN_143df2b4a(param_2,*(longlong *)(param_1 + 0x90) + lVar9);
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 0x14;
      } while (lVar11 < *(int *)(param_1 + 0x98));
    }
    else {
      *(undefined4 *)(param_1 + 0x98) = 0;
      if ((*(uint *)(param_1 + 0x9c) == local_34) || (FUN_143df3e2c(plVar8), 0 < (int)local_34)) {
        iVar10 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x98);
          *(uint *)(param_1 + 0x98) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
            FUN_143df3f88(plVar8,iVar2);
          }
          lVar9 = (longlong)iVar2 * 0x14 + *plVar8;
          FUN_143df3f79(lVar9);
          FUN_143df2b4a(param_2,lVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_34);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df31fa FUN_143df31fa body=251 status=ok
// SIG undefined FUN_143df31fa(void)

undefined8 FUN_143df31fa(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar6;
  double dVar5;
  float fVar7;
  float fVar8;
  
  fVar4 = *(float *)(param_1 + 0x54);
  uVar6 = 0;
  fVar8 = 0.0;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
    uVar6 = 0;
    if (((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar2 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x34))))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
        ((*plVar2 != 0 && (plVar2 = *(longlong **)(*plVar2 + 0x178), plVar2 != (longlong *)0x0))))))
    {
      dVar5 = (double)(**(code **)(*plVar2 + 0x640))();
      uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
      fVar4 = ((float)dVar5 - *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x58);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    fVar8 = 0.0;
    lVar3 = 0;
    do {
      fVar8 = fVar8 + (float)*(int *)(*(longlong *)(param_1 + 0x90) + 0x10 + lVar3) *
                      *(float *)(*(longlong *)(param_1 + 0x90) + 0xc + lVar3);
      lVar3 = lVar3 + 0x14;
    } while ((longlong)*(int *)(param_1 + 0x98) * 0x14 != lVar3);
  }
  fVar4 = fVar4 + fVar8;
  if (param_2 == '\0') {
    fVar8 = 0.0;
    if (0.0 <= fVar4) {
      fVar8 = fVar4;
    }
    uVar6 = 0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c);
    fVar8 = fVar4;
    if (fVar7 <= fVar4) {
      fVar8 = fVar7;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
  }
  return CONCAT44(uVar6,fVar8);
}



// FUNCTION 143df32f6 FUN_143df32f6 body=123 status=ok
// SIG undefined FUN_143df32f6(void)

undefined8 FUN_143df32f6(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar5;
  double dVar4;
  
  fVar3 = 0.0;
  uVar5 = 0;
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
        ((*plVar2 != 0 && (plVar2 = *(longlong **)(*plVar2 + 0x178), plVar2 != (longlong *)0x0))))))
    {
      dVar4 = (double)(**(code **)(*plVar2 + 0x640))(0);
      uVar5 = (undefined4)((ulonglong)dVar4 >> 0x20);
      fVar3 = ((float)dVar4 - *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x58);
    }
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 143df3393 FUN_143df3393 body=91 status=ok
// SIG undefined FUN_143df3393(void)

void FUN_143df3393(void)

{
  if (DAT_14cb86b90 != 0) {
    if (DAT_14cb86b88 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb86b88)(DAT_14cb86b88,0);
    FUN_1446efa72(&DAT_14cb86b88,0,0,0x10);
    DAT_14cb86b90 = 0;
  }
  if (DAT_14cb86b88 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143df33ee FUN_143df33ee body=160 status=ok
// SIG undefined FUN_143df33ee(void)

void FUN_143df33ee(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011750a(param_1 + 8);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x14);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x14) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x14) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df349c FUN_143df349c body=40 status=ok
// SIG undefined FUN_143df349c(void)

void FUN_143df349c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14878bca6(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 143df3506 FUN_143df3506 body=12 status=ok
// SIG undefined FUN_143df3506(void)

void FUN_143df3506(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df350f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143df3512 FUN_143df3512 body=29 status=ok
// SIG undefined FUN_143df3512(void)

undefined8 FUN_143df3512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df3572 FUN_143df3572 body=12 status=ok
// SIG undefined FUN_143df3572(void)

void FUN_143df3572(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df357b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143df357e FUN_143df357e body=29 status=ok
// SIG undefined FUN_143df357e(void)

undefined8 FUN_143df357e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df35de FUN_143df35de body=12 status=ok
// SIG undefined FUN_143df35de(void)

void FUN_143df35de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df35e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143df35ea FUN_143df35ea body=29 status=ok
// SIG undefined FUN_143df35ea(void)

undefined8 FUN_143df35ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df364a FUN_143df364a body=12 status=ok
// SIG undefined FUN_143df364a(void)

void FUN_143df364a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df3653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143df3656 FUN_143df3656 body=29 status=ok
// SIG undefined FUN_143df3656(void)

undefined8 FUN_143df3656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df3674 FUN_143df3674 body=68 status=ok
// SIG undefined FUN_143df3674(void)

undefined8 * FUN_143df3674(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41aa70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df36f4 FUN_143df36f4 body=29 status=ok
// SIG undefined FUN_143df36f4(void)

undefined8 FUN_143df36f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df3726 FUN_143df3726 body=93 status=ok
// SIG undefined FUN_143df3726(void)

void FUN_143df3726(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143df3784 FUN_143df3784 body=93 status=ok
// SIG undefined FUN_143df3784(void)

void FUN_143df3784(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143df37e2 FUN_143df37e2 body=126 status=ok
// SIG undefined FUN_143df37e2(void)

void FUN_143df37e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ac90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143df3851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143df3860 FUN_143df3860 body=74 status=ok
// SIG undefined FUN_143df3860(void)

void FUN_143df3860(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_140d7fa32(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df38ac FUN_143df38ac body=76 status=ok
// SIG undefined FUN_143df38ac(void)

undefined8 FUN_143df38ac(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_140d7fa32(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df3916 FUN_143df3916 body=68 status=ok
// SIG undefined FUN_143df3916(void)

undefined8 * FUN_143df3916(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41b1a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df3992 FUN_143df3992 body=56 status=ok
// SIG undefined FUN_143df3992(void)

void FUN_143df3992(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143df39ca FUN_143df39ca body=77 status=ok
// SIG undefined FUN_143df39ca(void)

void FUN_143df39ca(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143df3a18 FUN_143df3a18 body=31 status=ok
// SIG undefined FUN_143df3a18(void)

undefined8 FUN_143df3a18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df3a38 FUN_143df3a38 body=299 status=ok
// SIG undefined FUN_143df3a38(void)

ulonglong FUN_143df3a38(ulonglong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  
  param_2 = (longlong *)*param_2;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 == (longlong *)0x0) goto LAB_143df3a4b;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  lVar4 = FUN_146531b62();
  if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_143df3a4b;
  if ((char)param_2[1] == '\0') {
    bVar6 = *(byte *)((longlong)param_2 + 9);
    uVar2 = (uint)CONCAT71((int7)((ulonglong)(lVar4 + 0x30) >> 8),1);
    if (bVar6 != 0) goto LAB_143df3ab7;
  }
  else {
    cVar1 = FUN_140d1d704(param_1 + 0x598,param_2 + 0xc,(char)param_2[0x10]);
    if (cVar1 != '\0') {
      bVar6 = *(byte *)((longlong)param_2 + 9);
LAB_143df3ab7:
      if (((bVar6 & 1) == 0) ||
         (cVar1 = FUN_140d1d704(param_2 + 0x11,param_1 + 0x598,(char)param_2[0x15]), cVar1 == '\0'))
      goto LAB_143df3a4b;
    }
    uVar2 = 0;
  }
  uVar8 = (ulonglong)uVar2;
  if ((int)param_2[3] != *(int *)((longlong)param_2 + 0x44)) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = param_2 + 9;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[10];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_2[0xb] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar7 == -1) {
      uVar8 = 0;
    }
    else {
      do {
        bVar9 = *(ulonglong *)(param_2[2] + (longlong)iVar7 * 0x10) == param_1;
        uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar9);
        if (bVar9) break;
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + param_2[2] + 8);
      } while (iVar7 != -1);
    }
  }
LAB_143df3a4b:
  return uVar8 & 0xffffffff;
}



// FUNCTION 143df3b68 FUN_143df3b68 body=333 status=ok
// SIG undefined FUN_143df3b68(void)

void FUN_143df3b68(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143df3bd1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_143df3bd1:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 143df3cb5 FUN_143df3cb5 body=11 status=ok
// SIG undefined FUN_143df3cb5(void)

void FUN_143df3cb5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 143df3cc0 FUN_143df3cc0 body=363 status=ok
// SIG undefined FUN_143df3cc0(void)

void FUN_143df3cc0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143df3d56;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143df3d56:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 143df3e2c FUN_143df3e2c body=333 status=ok
// SIG undefined FUN_143df3e2c(void)

void FUN_143df3e2c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143df3e95;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_143df3e95:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 143df3f79 FUN_143df3f79 body=14 status=ok
// SIG undefined FUN_143df3f79(void)

void FUN_143df3f79(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 143df3f88 FUN_143df3f88 body=363 status=ok
// SIG undefined FUN_143df3f88(void)

void FUN_143df3f88(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143df401e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143df401e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 143df40f4 FUN_143df40f4 body=85 status=ok
// SIG undefined FUN_143df40f4(void)

void FUN_143df40f4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b366800;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b366820;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143df413e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143df414a FUN_143df414a body=29 status=ok
// SIG undefined FUN_143df414a(void)

undefined8 FUN_143df414a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143df4168 FUN_143df4168 body=156 status=ok
// SIG undefined FUN_143df4168(void)

void FUN_143df4168(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_143df41d8;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_143df41d8;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_143df41d8:
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
                    /* WARNING: Could not recover jumptable at 0x000143df41f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143df4204 FUN_143df4204 body=4469 status=ok
// SIG undefined FUN_143df4204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df4204(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  char **local_c8;
  undefined1 *local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  ram0x00014cb86294 = 0;
  FUN_14052b5e0(&DAT_14cb86290,"__Scratch",0);
  _DAT_14cb862a0 = "__Scratch";
  local_b8 = "AssetRegistry";
  uStack_b0 = CONCAT35(uStack_b0._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb862a8 = (ulonglong)uVar2;
  ram0x00014cb862b4 = 0;
  FUN_14052b5e0(&DAT_14cb862b0,"default_map",0);
  _DAT_14cb862c0 = "default_map";
  ram0x00014cb862cc = 0;
  FUN_14052b5e0(&DAT_14cb862c8,"developmentmap",0);
  _DAT_14cb862d8 = "developmentmap";
  ram0x00014cb862e4 = 0;
  FUN_14052b5e0(&DAT_14cb862e0,"bsupportsownership",0);
  _DAT_14cb862f0 = "bsupportsownership";
  ram0x00014cb862fc = 0;
  FUN_14052b5e0(&DAT_14cb862f8,&DAT_149e377fe,0);
  _DAT_14cb86308 = &DAT_149e377fe;
  DAT_14cb86314 = 0;
  FUN_14052b5e0(&DAT_14cb86310,"UX_Display",0);
  _DAT_14cb86320 = "UX_Display";
  local_98 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  uStack_90 = 0x8000000000;
  local_88 = 0xffffffff;
  local_c0 = local_68;
  local_c8 = &local_b8;
  FUN_1458c9d7a();
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1405b6d62(&local_b8);
  atexit(FUN_143defe97);
  DAT_14cb86b78 = 0;
  DAT_14cb86b80 = 0;
  atexit(FUN_143defec8);
  ram0x00014cb863d4 = 0;
  FUN_14052b5e0(&DAT_14cb863d0,"actoralias",0);
  _DAT_14cb863e0 = "actoralias";
  ram0x00014cb863ec = 0;
  FUN_14052b5e0(&DAT_14cb863e8,"condition",0);
  _DAT_14cb863f8 = "condition";
  ram0x00014cb86404 = 0;
  FUN_14052b5e0(&DAT_14cb86400,"itempickupdef",0);
  _DAT_14cb86410 = "itempickupdef";
  ram0x00014cb8641c = 0;
  FUN_14052b5e0(&DAT_14cb86418,"waypoint",0);
  _DAT_14cb86428 = "waypoint";
  ram0x00014cb86434 = 0;
  FUN_14052b5e0(&DAT_14cb86430,"missiongivertype",0);
  _DAT_14cb86440 = "missiongivertype";
  local_b8 = "enemydroppickup";
  uStack_b0 = CONCAT35(uStack_b0._5_3_,0xf);
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86448 = (ulonglong)uVar2;
  ram0x00014cb86454 = 0;
  FUN_14052b5e0(&DAT_14cb86450,"rewards",0);
  _DAT_14cb86460 = "rewards";
  ram0x00014cb8646c = 0;
  FUN_14052b5e0(&DAT_14cb86468,"rewarddata",0);
  _DAT_14cb86478 = "rewarddata";
  ram0x00014cb86484 = 0;
  FUN_14052b5e0(&DAT_14cb86480,"itempool",0);
  _DAT_14cb86490 = "itempool";
  ram0x00014cb8649c = 0;
  FUN_14052b5e0(&DAT_14cb86498,"currencytype",0);
  _DAT_14cb864a8 = "currencytype";
  ram0x00014cb864b4 = 0;
  FUN_14052b5e0(&DAT_14cb864b0,"currencyamount",0);
  _DAT_14cb864c0 = "currencyamount";
  ram0x00014cb864cc = 0;
  FUN_14052b5e0(&DAT_14cb864c8,"exit_point",0);
  _DAT_14cb864d8 = "exit_point";
  ram0x00014cb864e4 = 0;
  FUN_14052b5e0(&DAT_14cb864e0,"actordef",0);
  _DAT_14cb864f0 = "actordef";
  _DAT_14cb864fc = 0;
  FUN_14052b5e0(&DAT_14cb864f8,"alias",0);
  _DAT_14cb86508 = "alias";
  FUN_1400b22c2(&local_b8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_b8,&DAT_14cb86510);
  if (cVar1 == '\0') {
    _DAT_14cb86510 = 0;
    uRam000000014cb86518 = 0;
  }
  if (local_b8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb86520 = 0x47efffffe0000000;
  _DAT_14cb86528 = 0x47efffffe0000000;
  _DAT_14cb86530 = 0x47efffffe0000000;
  _DAT_14cb86538 = 0x47efffffe0000000;
  _DAT_14cb86540 = 0x47efffffe0000000;
  _DAT_14cb86548 = 0x47efffffe0000000;
  _DAT_14cb86550 = 0x47efffffe0000000;
  _DAT_14cb86558 = 0x47efffffe0000000;
  _DAT_14cb86560 = 0xffffffff;
  _DAT_14cb86564 = 0;
  local_b8 = "IsMissionGiver";
  uStack_b0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86568 = (ulonglong)uVar2;
  local_b8 = "mission_giver";
  uStack_b0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86570 = (ulonglong)uVar2;
  DAT_14cb86578 = 0;
  atexit((_func_5014 *)&LAB_143df0045);
  local_b8 = "Custom";
  uStack_b0._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86b60 = (ulonglong)uVar2;
  local_b8 = "Spawner";
  uStack_b0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86640 = (ulonglong)uVar2;
  local_b8 = "MyMissionFact";
  uStack_b0._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86648 = (ulonglong)uVar2;
  local_b8 = "PrimaryMissionFact";
  uStack_b0._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86650 = (ulonglong)uVar2;
  local_b8 = "Fact";
  uStack_b0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86328 = (ulonglong)uVar2;
  local_b8 = "DynamicTask";
  uStack_b0._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86658 = (ulonglong)uVar2;
  local_b8 = "StaticTask";
  uStack_b0._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86660 = (ulonglong)uVar2;
  local_b8 = "DisplayText";
  uStack_b0._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86b70 = (ulonglong)uVar2;
  local_b8 = "Int";
  uStack_b0._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86668 = (ulonglong)uVar2;
  local_b8 = "Float";
  uStack_b0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86670 = (ulonglong)uVar2;
  local_b8 = "Name";
  uStack_b0._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86678 = (ulonglong)uVar2;
  local_b8 = "DialogEnumValue";
  uStack_b0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86680 = (ulonglong)uVar2;
  local_b8 = "Mission";
  uStack_b0._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86688 = (ulonglong)uVar2;
  local_b8 = "TaskInstance";
  uStack_b0._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86690 = (ulonglong)uVar2;
  ram0x00014cb8669c = 0;
  FUN_14052b5e0(&DAT_14cb86698,"AliasData",0);
  _DAT_14cb866a8 = "AliasData";
  _DAT_14cb866d0 = 0;
  _DAT_14cb866d8 = 0;
  DAT_14cb866b0 = 0;
  _DAT_14cb866b8 = 0;
  _DAT_14cb866dc = 0xffffffff00000080;
  DAT_14cb866e4 = 0;
  DAT_14cb866f0 = 0;
  DAT_14cb866f8 = 0;
  atexit(FUN_143df005d);
  _DAT_14cb86700 = 0;
  local_b8 = "activity_system";
  uStack_b0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86b68 = (ulonglong)uVar2;
  local_b8 = "mission_source";
  uStack_b0._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86708 = (ulonglong)uVar2;
  local_b8 = "blueprint";
  uStack_b0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86b30 = (ulonglong)uVar2;
  local_b8 = "console_command";
  uStack_b0._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86710 = (ulonglong)uVar2;
  local_b8 = "explicit";
  uStack_b0._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86b40 = (ulonglong)uVar2;
  local_b8 = "automatic";
  uStack_b0._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86b38 = (ulonglong)uVar2;
  local_b8 = "mission_lifecycle";
  uStack_b0._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86718 = (ulonglong)uVar2;
  local_b8 = "nexus";
  uStack_b0._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  _DAT_14cb86720 = (ulonglong)uVar2;
  ram0x00014cb863ac = 0;
  FUN_14052b5e0(&DAT_14cb863a8,"graph_data");
  _DAT_14cb863b8 = "graph_data";
  _DAT_14cb8672c = 0;
  FUN_14052b5e0(&DAT_14cb86728,"missionset");
  _DAT_14cb86738 = "missionset";
  _DAT_14cb86744 = 0;
  FUN_14052b5e0(&DAT_14cb86740,"mission");
  _DAT_14cb86750 = "mission";
  _DAT_14cb8675c = 0;
  FUN_14052b5e0(&DAT_14cb86758,"order");
  _DAT_14cb86768 = "order";
  _DAT_14cb86774 = 0;
  FUN_14052b5e0(&DAT_14cb86770,"rewards");
  _DAT_14cb86780 = "rewards";
  ram0x00014cb86364 = 0;
  FUN_14052b5e0(&DAT_14cb86360,"alias_nodes");
  _DAT_14cb86370 = "alias_nodes";
  _DAT_14cb8678c = 0;
  FUN_14052b5e0(&DAT_14cb86788,"aliases");
  _DAT_14cb86798 = "aliases";
  _DAT_14cb867a4 = 0;
  FUN_14052b5e0(&DAT_14cb867a0,"waypoint_aliases");
  _DAT_14cb867b0 = "waypoint_aliases";
  ram0x00014cb86394 = 0;
  FUN_14052b5e0(&DAT_14cb86390,"choices");
  _DAT_14cb863a0 = "choices";
  ram0x00014cb8637c = 0;
  FUN_14052b5e0(&DAT_14cb86378,"objective_sets");
  _DAT_14cb86388 = "objective_sets";
  _DAT_14cb867bc = 0;
  FUN_14052b5e0(&DAT_14cb867b8,"entry_point");
  _DAT_14cb867c8 = "entry_point";
  ram0x00014cb8634c = 0;
  FUN_14052b5e0(&DAT_14cb86348,"entry_points");
  _DAT_14cb86358 = "entry_points";
  _DAT_14cb867d4 = 0;
  FUN_14052b5e0(&DAT_14cb867d0,"exit_point");
  _DAT_14cb867e0 = "exit_point";
  ram0x00014cb86334 = 0;
  FUN_14052b5e0(&DAT_14cb86330,"exit_points");
  _DAT_14cb86340 = "exit_points";
  _DAT_14cb867ec = 0;
  FUN_14052b5e0(&DAT_14cb867e8,"order");
  _DAT_14cb867f8 = "order";
  DAT_14cb86804 = 0;
  FUN_14052b5e0(&DAT_14cb86800,"setup");
  _DAT_14cb86810 = "setup";
  DAT_14cb8681c = 0;
  FUN_14052b5e0(&DAT_14cb86818,"reset");
  _DAT_14cb86828 = "reset";
  DAT_14cb86834 = 0;
  FUN_14052b5e0(&DAT_14cb86830,"prekickoff");
  _DAT_14cb86840 = "prekickoff";
  DAT_14cb8684c = 0;
  FUN_14052b5e0(&DAT_14cb86848,"kickoff");
  _DAT_14cb86858 = "kickoff";
  DAT_14cb86864 = 0;
  FUN_14052b5e0(&DAT_14cb86860,"start");
  _DAT_14cb86870 = "start";
  _DAT_14cb8687c = 0;
  FUN_14052b5e0(&DAT_14cb86878,"updated");
  _DAT_14cb86888 = "updated";
  DAT_14cb86894 = 0;
  FUN_14052b5e0(&DAT_14cb86890,"success");
  _DAT_14cb868a0 = "success";
  DAT_14cb868ac = 0;
  FUN_14052b5e0(&DAT_14cb868a8,"deactivate");
  _DAT_14cb868b8 = "deactivate";
  DAT_14cb868c4 = 0;
  FUN_14052b5e0(&DAT_14cb868c0,"failure");
  _DAT_14cb868d0 = "failure";
  DAT_14cb868dc = 0;
  FUN_14052b5e0(&DAT_14cb868d8,"finish",0);
  _DAT_14cb868e8 = "finish";
  DAT_14cb868f4 = 0;
  FUN_14052b5e0(&DAT_14cb868f0,"postfinish",0);
  _DAT_14cb86900 = "postfinish";
  DAT_14cb8690c = 0;
  FUN_14052b5e0(&DAT_14cb86908,"dormant",0);
  _DAT_14cb86918 = "dormant";
  DAT_14cb86924 = 0;
  FUN_14052b5e0(&DAT_14cb86920,"undormant",0);
  _DAT_14cb86930 = "undormant";
  DAT_14cb8693c = 0;
  FUN_14052b5e0(&DAT_14cb86938,"missioncompleted",0);
  _DAT_14cb86948 = "missioncompleted";
  ram0x00014cb86954 = 0;
  FUN_14052b5e0(&DAT_14cb86950,"order",0);
  _DAT_14cb86960 = "order";
  ram0x00014cb8696c = 0;
  FUN_14052b5e0(&DAT_14cb86968,"order_start",0);
  _DAT_14cb86978 = "order_start";
  DAT_14cb86980._4_4_ = 0;
  DAT_14cb86988 = 0;
  FUN_14052b5e0(&DAT_14cb86980,"order_end",0);
  _DAT_14cb86990 = "order_end";
  DAT_14cb86998._4_4_ = 0;
  DAT_14cb869a0 = 0;
  FUN_14052b5e0(&DAT_14cb86998,"graph_data",0);
  _DAT_14cb869a8 = "graph_data";
  DAT_14cb869b0._4_4_ = 0;
  DAT_14cb869b8 = 0;
  FUN_14052b5e0(&DAT_14cb869b0,"gameplay",0);
  _DAT_14cb869c0 = "gameplay";
  _DAT_14cb869cc = 0;
  _DAT_14cb869d0 = 0;
  FUN_14052b5e0(&DAT_14cb869c8,"updated",0);
  _DAT_14cb869d8 = "updated";
  DAT_14cb86b48._4_4_ = 0;
  DAT_14cb86b50 = 0;
  FUN_14052b5e0(&DAT_14cb86b48,&DAT_149e377fe,0);
  _DAT_14cb86b58 = &DAT_149e377fe;
  DAT_14cb86a50._4_4_ = 0;
  DAT_14cb86a58 = 0;
  FUN_14052b5e0(&DAT_14cb86a50,"__Scratch",0);
  _DAT_14cb86a60 = "__Scratch";
  DAT_14cb86a68._4_4_ = 0;
  DAT_14cb86a70 = 0;
  FUN_14052b5e0(&DAT_14cb86a68,"HUDOrder",0);
  _DAT_14cb86a78 = "HUDOrder";
  DAT_14cb86a80._4_4_ = 0;
  DAT_14cb86a88 = 0;
  FUN_14052b5e0(&DAT_14cb86a80,"Sort_Order",0);
  _DAT_14cb86a90 = "Sort_Order";
  DAT_14cb86a98._4_4_ = 0;
  DAT_14cb86aa0 = 0;
  FUN_14052b5e0(&DAT_14cb86a98,"DisableWaypointAtCursorPositions",0);
  _DAT_14cb86aa8 = "DisableWaypointAtCursorPositions";
  DAT_14cb86ab4._0_4_ = 0;
  DAT_14cb86ab4._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cb86ab0,"UX_Display",0);
  _DAT_14cb86ac0 = "UX_Display";
  local_b8 = "p";
  uStack_b0._0_5_ = 1;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86ac8 = (ulonglong)uVar2;
  local_b8 = "pg";
  uStack_b0._0_5_ = 2;
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86ad0 = (ulonglong)uVar2;
  local_b8 = "missions";
  uStack_b0 = CONCAT35(uStack_b0._5_3_,8);
  uVar2 = FUN_14001a6c0(&local_b8,1);
  DAT_14cb86ad8 = (ulonglong)uVar2;
  _DAT_14cb86ae0 = 0;
  uRam000000014cb86ae8 = 0;
  _DAT_14cb86af0 = 0;
  DAT_14cb86af8 = 0;
  uRam000000014cb86b00 = 0;
  FUN_1446ddda2(&DAT_14cb86ae0,"missions",0);
  atexit((_func_5014 *)&LAB_143df3371);
  _DAT_14cb86b08 = 0;
  uRam000000014cb86b10 = 0;
  _DAT_14cb86b18 = 0;
  DAT_14cb86b20 = 0;
  uRam000000014cb86b28 = 0;
  FUN_1446ddda2(&DAT_14cb86b08,"engine.missions",0);
  atexit((_func_5014 *)&LAB_143df3382);
  DAT_14cb86b88 = 0;
  DAT_14cb86b90 = 0;
  atexit(FUN_143df3393);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df537c FUN_143df537c body=64 status=ok
// SIG undefined FUN_143df537c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df537c(void)

{
  if (DAT_14cb86c08 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb86c00 = 0;
  if (DAT_14cb86bf8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb86bb8);
  return;
}



// FUNCTION 143df53bc FUN_143df53bc body=179 status=ok
// SIG undefined FUN_143df53bc(void)

void FUN_143df53bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
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
      (**(code **)(*plVar3 + 8))(plVar3,1);
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
  }
  do {
    cVar6 = FUN_140d8564a(param_1,1);
  } while (cVar6 != '\0');
  return;
}



// FUNCTION 143df5470 FUN_143df5470 body=224 status=ok
// SIG undefined FUN_143df5470(void)

void FUN_143df5470(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((int)param_1[4] != -1) && (lVar5 = (**(code **)(*param_1 + 8))(), lVar5 != 0)) {
    uVar4 = *(uint *)(lVar5 + 0x10);
    if ((int)*(uint *)(param_1 + 4) < (int)*(uint *)(lVar5 + 0x10)) {
      uVar4 = *(uint *)(param_1 + 4);
    }
    if (0 < (int)uVar4) {
      lVar6 = 0;
      do {
        local_68 = 0;
        uStack_60 = 0;
        FUN_143df5552(param_1[3],local_78,*(longlong *)(lVar5 + 8) + lVar6,&local_68);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)uVar4 * 0x18 != lVar6);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df5552 FUN_143df5552 body=275 status=ok
// SIG undefined FUN_143df5552(void)

undefined8 *
FUN_143df5552(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    if (cVar3 != '\0') {
      if (*(char *)(*param_3 + 0x18) != '\x01') {
        local_38 = *param_4;
        local_30 = (longlong *)param_4[1];
        local_40 = param_1;
        if (local_30 == (longlong *)0x0) {
          local_30 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,param_2,&local_40);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
        if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
      lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
      if (lVar4 != 0) {
        FUN_14890e002(lVar4,param_3,*(undefined4 *)(*param_3 + 0x1c));
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 143df5666 FUN_143df5666 body=63 status=ok
// SIG undefined FUN_143df5666(void)

undefined8 * FUN_143df5666(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x70))();
  if (lVar1 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x98);
    *param_2 = *(undefined8 *)(lVar1 + 0x90);
  }
  return param_2;
}



// FUNCTION 143df56a6 FUN_143df56a6 body=34 status=ok
// SIG undefined FUN_143df56a6(void)

undefined8 FUN_143df56a6(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x70))();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_14890f1ba(lVar1);
  return uVar2;
}



// FUNCTION 143df56c8 FUN_143df56c8 body=531 status=ok
// SIG undefined FUN_143df56c8(void)

void FUN_143df56c8(longlong *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_1 + 0x68))();
  if ((lVar4 == 0) || (cVar2 = FUN_148910a66(lVar4), cVar2 == '\0')) goto LAB_143df56f1;
  if ((char)param_2 == '\x01') {
    uVar7 = 10;
LAB_143df5755:
    FUN_140dcc746(lVar4,uVar7);
    lVar5 = lVar4;
  }
  else {
    if ((param_2 & 0xff) == 3) {
      uVar7 = 6;
      goto LAB_143df5755;
    }
    lVar5 = lVar4;
    if ((param_2 & 0xff) == 2) {
      FUN_140dcc746(lVar4,0xe);
      cVar2 = FUN_148910a8c(lVar4);
      if (cVar2 == '\0') goto LAB_143df56f1;
    }
  }
  do {
    lVar9 = lVar5;
    lVar5 = *(longlong *)(lVar9 + 0xb8);
  } while (*(longlong *)(lVar9 + 0xb8) != 0);
  if ((*(longlong *)(lVar9 + 0x98) != 0) || (*(longlong *)(lVar9 + 0xa0) != 0)) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_14189d100(lVar4,&local_48);
    lVar5 = local_48;
    lVar9 = (longlong)(int)uStack_40;
    if (lVar9 != 0) {
      lVar8 = 0;
      do {
        uVar7 = *(undefined8 *)(lVar5 + lVar8);
        bVar3 = FUN_14890eb82(uVar7);
        if (bVar3 < 4) {
          FUN_143df0722();
        }
        else {
          FUN_143df56c8(uVar7,param_2);
        }
        lVar8 = lVar8 + 8;
      } while (lVar9 * 8 != lVar8);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  lVar5 = FUN_1406b1df4(*(undefined8 *)(lVar4 + 0x40));
  if ((lVar5 != 0) && (iVar1 = *(int *)(lVar4 + 0xb0), (longlong)iVar1 != 0)) {
    lVar5 = *(longlong *)(lVar4 + 0xa8);
    lVar9 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar5 + lVar9);
      cVar2 = FUN_148910a66(uVar7);
      if (cVar2 != '\0') {
        lVar8 = FUN_1406b1df4(*(undefined8 *)(lVar4 + 0x40));
        uVar6 = param_2;
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x7d) == '\x01')) {
          lVar8 = FUN_1406b1df4(*(undefined8 *)(lVar4 + 0x40),param_2);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x7e) != '\0')) {
            lVar8 = FUN_1406b1df4(*(undefined8 *)(lVar4 + 0x40),param_2);
            if (lVar8 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (uint)*(byte *)(lVar8 + 0x7e);
            }
          }
        }
        FUN_143df56c8(uVar7,uVar6);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  if ((((char)param_2 == '\x01') && (*(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x400) != 0)) &&
     (iVar1 = *(int *)(lVar4 + 200), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0xc0);
    lVar5 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar4 + lVar5);
      cVar2 = FUN_148910a66(uVar7);
      if (cVar2 != '\0') {
        FUN_143df56c8(uVar7,3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
LAB_143df56f1:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df58dc FUN_143df58dc body=172 status=ok
// SIG undefined FUN_143df58dc(void)

undefined8 * FUN_143df58dc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if (lVar3 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(undefined **)(lVar3 + 0x60) == &DAT_14cb88728) {
    *(undefined4 *)(param_2 + 1) = DAT_14cb88800;
    uVar5 = DAT_14cb887f8;
  }
  else {
    piVar2 = *(int **)(*(undefined **)(lVar3 + 0x60) + 8);
    piVar4 = &DAT_14c9485f0;
    if (piVar2 != (int *)0x0) {
      piVar4 = piVar2;
    }
    if (((*piVar4 != 0) && (iVar1 = piVar4[1], iVar1 != 0)) && (*piVar4 != DAT_14c948000)) {
      if ((iVar1 < 2) && (piVar4[9] < 1)) {
        piVar4 = piVar4 + 2;
      }
      else {
        piVar4 = *(int **)(piVar4 + 6);
      }
      if (0 < iVar1) {
        *(int *)(param_2 + 1) = piVar4[2];
        uVar5 = *(undefined8 *)piVar4;
        goto LAB_143df5964;
      }
    }
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar5 = DAT_14c948618;
  }
LAB_143df5964:
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 143df59fe FUN_143df59fe body=8 status=ok
// SIG undefined FUN_143df59fe(void)

undefined8 FUN_143df59fe(void)

{
  return DAT_14cb86da8;
}



// FUNCTION 143df5a06 FUN_143df5a06 body=186 status=ok
// SIG undefined FUN_143df5a06(void)

longlong FUN_143df5a06(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar3);
      piVar4 = *(int **)(lVar2 + 8);
      if (piVar4 == (int *)0x0) {
        piVar4 = &DAT_14c9485f0;
      }
      piVar5 = (int *)&DAT_14c948618;
      if (*piVar4 != 0) {
        iVar1 = piVar4[1];
        piVar5 = (int *)&DAT_14c948618;
        if ((iVar1 != 0) && (piVar5 = (int *)&DAT_14c948618, *piVar4 != DAT_14c948000)) {
          if ((iVar1 < 2) && (piVar4[9] < 1)) {
            piVar4 = piVar4 + 2;
          }
          else {
            piVar4 = *(int **)(piVar4 + 6);
          }
          piVar5 = (int *)&DAT_14c948618;
          if (0 < iVar1) {
            piVar5 = piVar4;
          }
        }
      }
      if ((*piVar5 == *param_2) && (piVar5[2] == param_2[2])) {
        return lVar2 + 0x600;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x68) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 143df5acc FUN_143df5acc body=127 status=ok
// SIG undefined FUN_143df5acc(void)

void FUN_143df5acc(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140ce25ba();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_140c59946(*(longlong *)(param_1 + 8) + 0x150);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140bc47b4(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df5be6 FUN_143df5be6 body=99 status=ok
// SIG undefined FUN_143df5be6(void)

void FUN_143df5be6(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140526f64(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    lVar2 = FUN_140e1935a(param_1);
    if (lVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_140e192e0(lVar2);
    }
    if (cVar1 != (char)param_2) {
      lVar2 = FUN_140e1935a(param_1);
      if (lVar2 != 0) {
        FUN_14188339e(lVar2,param_2);
        FUN_14891a530(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143df5c4a FUN_143df5c4a body=253 status=ok
// SIG undefined FUN_143df5c4a(void)

void FUN_143df5c4a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if ((longlong)*(int *)(lVar2 + 0x68) != 0) {
    lVar8 = 0;
    do {
      if (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + lVar8) + 0x750) == '\0') {
        if (*(char *)(lVar2 + 0x70) != '\0') {
          return;
        }
        iVar1 = *(int *)(param_1 + 0x58);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x50);
          bVar6 = 1;
          lVar8 = 0;
          bVar7 = false;
          bVar9 = 0;
          do {
            lVar3 = *(longlong *)(lVar2 + lVar8);
            if (*(int *)(lVar3 + 0x98) < 1) {
              lVar5 = FUN_140f42f34(lVar3);
              if (lVar5 == 0) {
                cVar4 = '\0';
              }
              else {
                cVar4 = FUN_1405f61f4(lVar5);
              }
              bVar6 = bVar6 & cVar4 == '\x06';
              if (*(char *)(*(longlong *)(lVar3 + 0xa0) + 0x5b8) == '\0') {
                bVar9 = bVar9 | *(byte *)(*(longlong *)(lVar3 + 0xa0) + 0x79c);
              }
              else {
                bVar7 = true;
              }
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar1 * 8 != lVar8);
          if (bVar7 || (bVar9 & 1) != 0) {
            return;
          }
          if ((bool)(bVar6 ^ 1)) {
            return;
          }
        }
        FUN_143df5be6(param_1,2);
        return;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x68) * 8 != lVar8);
  }
  return;
}



// FUNCTION 143df5d48 FUN_143df5d48 body=1 status=ok
// SIG undefined FUN_143df5d48(void)

void FUN_143df5d48(void)

{
  return;
}



// FUNCTION 143df5d4a FUN_143df5d4a body=1 status=ok
// SIG undefined FUN_143df5d4a(void)

void FUN_143df5d4a(void)

{
  return;
}



// FUNCTION 143df5d4c FUN_143df5d4c body=85 status=ok
// SIG undefined FUN_143df5d4c(void)

void FUN_143df5d4c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar3 = FUN_140bc47b4(*(undefined8 *)(param_1 + 8));
    FUN_140d8346e(param_1 + 0x28,uVar3);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      FUN_140ee4754(*(undefined8 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143df5da2 FUN_143df5da2 body=83 status=ok
// SIG undefined FUN_143df5da2(void)

void FUN_143df5da2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140e1935a();
  if (lVar2 != 0) {
    cVar1 = FUN_140e192e0(lVar2);
    if (cVar1 == '\x01') {
      FUN_143df5c4a(param_1);
      goto LAB_143df5de8;
    }
    if (cVar1 != '\0') goto LAB_143df5de8;
  }
  cVar1 = FUN_140f71cda(param_1 + 0x28);
  if (cVar1 != '\0') {
    FUN_143df5be6(param_1,1);
  }
LAB_143df5de8:
  FUN_140e192a8(param_1);
  return;
}



// FUNCTION 143df5df6 FUN_143df5df6 body=652 status=ok
// SIG undefined FUN_143df5df6(void)

void FUN_143df5df6(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  int local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x40))();
  FUN_14891ae96(param_1);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    FUN_1446dda88(param_1 + 0x24,0);
  }
  if ((((((int)param_1[0x16] != 0) && (uVar1 = *(uint *)((longlong)param_1 + 0xac), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == (int)param_1[0x16])))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar9;
    }
    else {
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + 0x4c) == 3) goto LAB_143df5fe3;
  }
  lVar5 = param_1[0x19];
  if (lVar5 == 0) {
    if ((int)DAT_14c948618 == 0) goto LAB_143df5fe3;
    local_58 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
    local_50 = DAT_14c948620;
  }
  else {
    if (*(int *)(lVar5 + 8) == 0) goto LAB_143df5fe3;
    local_58 = *(longlong *)(lVar5 + 8);
    local_50 = *(undefined4 *)(lVar5 + 0x10);
  }
  FUN_1448075d0(&local_48,&local_58);
  plVar9 = (longlong *)FUN_14060eaf6(&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((plVar9 != (longlong *)0x0) && (*(char *)((longlong)plVar9 + 0x799) == '\x01')) {
    puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9);
    lVar5 = puVar4[2];
    if (lVar5 == 0) {
      local_48 = *puVar4;
      lVar5 = FUN_14050aea0();
      puVar4[2] = lVar5;
      if (lVar5 == 0) goto LAB_143df5fe3;
    }
    lVar5 = *(longlong *)(lVar5 + 0x1b0);
    if (lVar5 != 0) {
      uVar6 = FUN_140c05e56(param_1);
      FUN_140fda471(&local_48,uVar6);
      piVar7 = *(int **)(lVar5 + 8);
      piVar8 = &DAT_14c9485f0;
      if (piVar7 != (int *)0x0) {
        piVar8 = piVar7;
      }
      piVar7 = (int *)&DAT_14c948618;
      if (*piVar8 != 0) {
        iVar2 = piVar8[1];
        if ((iVar2 != 0) && (*piVar8 != DAT_14c948000)) {
          if ((iVar2 < 2) && (piVar8[9] < 1)) {
            piVar8 = piVar8 + 2;
          }
          else {
            piVar8 = *(int **)(piVar8 + 6);
          }
          if (0 < iVar2) {
            piVar7 = piVar8;
          }
        }
      }
      if (((int)local_48 != *piVar7) || (local_40 != piVar7[2])) {
        FUN_14612d3a2(param_1);
      }
    }
  }
LAB_143df5fe3:
  if ((char)param_1[0x14] == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_14612d3a2(param_1);
  }
  if (*(char *)((longlong)param_1 + 0xdc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  }
  FUN_141636f9c(param_1);
  lVar5 = param_1[0x1c];
  if (lVar5 != 0) {
    cVar3 = FUN_140526f64(lVar5);
    if (cVar3 != '\0') {
      FUN_140526f12(lVar5);
    }
  }
  if (param_1[0x1d] != 0) {
    FUN_145a50288(param_1[0x1d],1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df6084 FUN_143df6084 body=219 status=ok
// SIG undefined FUN_143df6084(void)

void FUN_143df6084(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140c05e56();
  if (lVar1 != 0) {
    *(float *)(param_1 + 0xd8) = (float)*(double *)(lVar1 + 0x6d0);
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 == 0) {
    local_50 = DAT_14c948620;
    local_58 = DAT_14c948618;
  }
  else {
    local_50 = *(undefined4 *)(lVar1 + 0x10);
    local_58 = *(undefined8 *)(lVar1 + 8);
  }
  FUN_1448075d0(local_48,&local_58);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x79a) != '\x01')) || (*(char *)(lVar1 + 0x79b) == '\x01')
     ) {
    FUN_143df6160(param_1,1,0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df6160 FUN_143df6160 body=269 status=ok
// SIG undefined FUN_143df6160(void)

void FUN_143df6160(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar3 = (int *)&DAT_14c948618;
  if (*(longlong *)(param_1 + 200) != 0) {
    piVar3 = (int *)(*(longlong *)(param_1 + 200) + 8);
  }
  if (*piVar3 == 0) {
    if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14612d492(&local_50);
  plVar2 = local_48;
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 == (longlong *)0x0) {
    FUN_1415e0a78(param_1,&local_40);
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    FUN_1415e0a78(param_1);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)local_48 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 143df628a FUN_143df628a body=142 status=ok
// SIG undefined FUN_143df628a(void)

void FUN_143df628a(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_140c05e56();
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x178) != 0) {
    lVar3 = FUN_14041aabe();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      uVar4 = 0;
      if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_143df62e7;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x488) != 0)))) {
        uVar4 = FUN_1401b2ade();
        goto LAB_143df62e7;
      }
    }
  }
  uVar4 = 0;
LAB_143df62e7:
  FUN_143df6160(param_1,0,uVar4,1);
  return;
}



// FUNCTION 143df6318 FUN_143df6318 body=1124 status=ok
// SIG undefined FUN_143df6318(void)

void FUN_143df6318(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_80;
  int local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((((int)param_1[0x16] != 0) && (uVar2 = *(uint *)((longlong)param_1 + 0xac), -1 < (int)uVar2)
        ) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == (int)param_1[0x16])))) &&
     ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar10;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + 0x4c) == 3) goto LAB_143df63f1;
  }
  local_78 = *(int *)(*param_2 + 0x10);
  local_80 = *(undefined8 *)(*param_2 + 8);
  local_70 = local_80;
  local_68 = local_78;
  FUN_1448075d0(&local_60);
  plVar10 = (longlong *)FUN_14060eaf6(&local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((plVar10 == (longlong *)0x0) || (param_1[0x17] != 0)) goto LAB_143df63f1;
  piVar9 = (int *)(param_1[0x19] + 8);
  if (param_1[0x19] == 0) {
    piVar9 = (int *)&DAT_14c948618;
  }
  if (*piVar9 != 0) {
    if (*(char *)((longlong)plVar10 + 0x79a) != '\x01') goto LAB_143df63f1;
    *(undefined1 *)(*param_2 + 0x14) = 1;
  }
  lVar6 = FUN_140c05e56(param_1);
  if (lVar6 == 0) goto LAB_143df63f1;
  lVar7 = param_1[0x19];
  piVar9 = (int *)(lVar7 + 8);
  piVar1 = (int *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    piVar9 = (int *)&DAT_14c948618;
    piVar1 = &DAT_14c948620;
  }
  if ((((*piVar9 == (int)local_70) && (*piVar1 == local_68)) &&
      (*(char *)((longlong)plVar10 + 0x79a) != '\x01')) || (*(longlong *)(lVar6 + 0x170) == 0))
  goto LAB_143df63f1;
  lVar7 = FUN_1411531be();
  plVar11 = *(longlong **)(lVar6 + 0x170);
  if ((((plVar11 == (longlong *)0x0) || (lVar7 == 0)) ||
      ((lVar4 = plVar11[2], lVar4 == 0 ||
       ((*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)))))) ||
     ((cVar5 = (**(code **)(*plVar11 + 0x960))(), cVar5 == '\0' ||
      (cVar5 = (**(code **)(*plVar10 + 0x40))(plVar10,lVar6), cVar5 == '\0')))) goto LAB_143df63f1;
  if ((int)param_1[0x16] == 0) {
LAB_143df6596:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_1 + 0xac);
    plVar11 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar11 == (longlong *)0x0) ||
          ((((int)plVar11[2] != (int)param_1[0x16] || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))
           || ((longlong *)*plVar11 == (longlong *)0x0)))) ||
         (lVar6 = (**(code **)(*(longlong *)*plVar11 + 0x2b0))(), lVar6 == 0)) goto LAB_143df6596;
      plVar11 = (longlong *)FUN_1412d7224(lVar6);
    }
  }
  lVar6 = FUN_14050cbd4(plVar10);
  if (lVar6 == 0 || plVar11 == (longlong *)0x0) goto LAB_143df63f1;
  cVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if ((cVar5 != '\0') && (*(char *)((longlong)plVar10 + 0x79a) == '\0')) {
    piVar9 = &DAT_14c9485f0;
    if (*(int **)(lVar6 + 8) != (int *)0x0) {
      piVar9 = *(int **)(lVar6 + 8);
    }
    if (((*piVar9 == 0) || (iVar3 = piVar9[1], iVar3 == 0)) || (*piVar9 == DAT_14c948000)) {
LAB_143df675b:
      local_58 = DAT_14c948620;
      local_60 = DAT_14c948618;
    }
    else {
      if ((iVar3 < 2) && (piVar9[9] < 1)) {
        plVar8 = (longlong *)(piVar9 + 2);
      }
      else {
        plVar8 = *(longlong **)(piVar9 + 6);
      }
      if (iVar3 < 1) goto LAB_143df675b;
      local_58 = (int)plVar8[1];
      local_60 = *plVar8;
    }
    local_b0 = &DAT_14cb88978;
    local_b8 = &DAT_14c947fe8;
    local_a8 = 0;
    (**(code **)(*plVar11 + 0x40))(plVar11,&local_98,&local_60,&local_70);
    if (local_98 != DAT_14cb88920) goto LAB_143df63f1;
  }
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
  local_60 = *plVar10;
  local_58 = (int)plVar10[1];
  local_50 = 0;
  if (local_58 - 1U < 0xfffffffe && local_60 != 0) {
    local_98 = *param_2;
    plVar10 = (longlong *)param_2[1];
    plStack_90 = plVar10;
    if (plVar10 == (longlong *)0x0) {
      FUN_1415e0a78(param_1,&local_98);
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      FUN_1415e0a78(param_1);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar9 = (int *)((longlong)plVar10 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    cVar5 = (**(code **)(*param_1 + 0x58))(param_1,&local_60,param_3,0);
    if (cVar5 == '\0') {
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      FUN_1415e0a78(param_1);
    }
  }
LAB_143df63f1:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df678c FUN_143df678c body=206 status=ok
// SIG undefined FUN_143df678c(void)

void FUN_143df678c(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [28];
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    lVar3 = FUN_140c05ec4();
    if (lVar3 != 0) {
      FUN_1488441c6(lVar3,param_1 + 0x24);
    }
  }
  else {
    cVar1 = FUN_140c05d9a();
    if (cVar1 != '\0') {
      uVar2 = FUN_140c05e56(param_1);
      FUN_140fda471(local_2c,uVar2);
      (**(code **)(*param_1 + 0xa0))(param_1,local_48);
      cVar1 = (**(code **)(*param_1 + 0x50))(param_1,local_48,local_2c);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x23) = 1;
      }
      goto LAB_143df683c;
    }
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
LAB_143df683c:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df686c FUN_143df686c body=12 status=ok
// SIG undefined FUN_143df686c(void)

void FUN_143df686c(longlong param_1)

{
  FUN_140bdf372(param_1 + 0x120);
  return;
}



// FUNCTION 143df6878 FUN_143df6878 body=64 status=ok
// SIG undefined FUN_143df6878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df6878(void)

{
  if (DAT_14cb86c90 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb86c88 = 0;
  if (DAT_14cb86c80 != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(&DAT_14cb86c40);
  return;
}



// FUNCTION 143df68b8 FUN_143df68b8 body=117 status=ok
// SIG undefined FUN_143df68b8(void)

bool FUN_143df68b8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != (int)DAT_14cb889e0) || (param_1[2] != DAT_14cb889e8)) &&
     ((iVar1 != (int)DAT_14cb889f8 || (param_1[2] != DAT_14cb88a00)))) {
    if ((iVar1 == (int)DAT_14cb88978) && (param_1[2] == DAT_14cb88980)) {
      return true;
    }
    if ((iVar1 != (int)DAT_14cb889c8) || (param_1[2] != DAT_14cb889d0)) {
      if (iVar1 != (int)DAT_14cb88880) {
        return false;
      }
      return param_1[2] == DAT_14cb88888;
    }
  }
  return true;
}



// FUNCTION 143df6946 FUN_143df6946 body=116 status=ok
// SIG undefined FUN_143df6946(void)

void FUN_143df6946(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x90);
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
    if (lVar4 != 0) {
      FUN_143df6a16(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143df69ba FUN_143df69ba body=92 status=ok
// SIG undefined FUN_143df69ba(void)

undefined8 FUN_143df69ba(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar3[2] != *(int *)(param_1 + 0x7c)) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
  }
  return uVar2;
}



// FUNCTION 143df6a16 FUN_143df6a16 body=253 status=ok
// SIG undefined FUN_143df6a16(void)

void FUN_143df6a16(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      local_88 = *(undefined4 *)(lVar1 + 8 + lVar5);
      local_90 = *(undefined8 *)(lVar1 + lVar5);
      local_80 = local_90;
      local_78 = local_88;
      FUN_1448075d0(local_70,&local_90);
      plVar4 = (longlong *)FUN_14060eaf6(local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((plVar4 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar4 + 0x50))(plVar4), cVar3 == '\0')) {
        local_98 = local_78;
        local_a0 = local_80;
        FUN_1410aecd0(param_1,&local_a0,0);
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df6baa FUN_143df6baa body=379 status=ok
// SIG undefined FUN_143df6baa(void)

void FUN_143df6baa(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 8))(param_2);
    lVar5 = FUN_140b79a36();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      *(undefined1 *)(param_2 + 0xb) = 0;
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)param_2[1];
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_38,puVar7,1);
      cVar3 = FUN_141449a57(local_38);
      if (((cVar3 != '\0') && ((byte *)*param_3 != (byte *)0x0)) && ((~*(byte *)*param_3 & 3) == 0))
      {
        *(undefined1 *)(param_2 + 0xb) = 1;
        uVar6 = (**(code **)(*param_2 + 8))(param_2);
        FUN_1446e7478(param_3,param_2,uVar6,1);
        plVar1 = param_2 + 0xf;
        iVar2 = *(int *)((longlong)param_2 + 0x84);
        FUN_1403d9938(param_2[0xf],(int)param_2[0x10]);
        *(undefined4 *)(param_2 + 0x10) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_2 + 0x84) != 0)) {
          FUN_148922d54(plVar1);
        }
        FUN_140fe5cee(plVar1,param_2 + 0x11);
        FUN_140fe5cee(plVar1,param_2 + 0x13);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df6d3a FUN_143df6d3a body=1208 status=ok
// SIG undefined FUN_143df6d3a(void)

void FUN_143df6d3a(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1447f69b6(param_1 + 0x18);
  lVar7 = FUN_14891c4e4(param_1);
  if (lVar7 == 0) goto LAB_143df6e38;
  puVar1 = (undefined8 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x78) = 0xb;
  FUN_140c25b54(puVar1);
  local_90 = *(undefined4 *)(lVar7 + 0x10);
  local_98 = *(undefined8 *)(lVar7 + 8);
  FUN_144928d62(param_1 + 0x88,0);
  uVar8 = FUN_140672052(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))();
  if (lVar9 == 0) {
    local_88 = (longlong *)0x0;
    uStack_80 = (longlong *)((ulonglong)uStack_80._4_4_ << 0x20);
  }
  else {
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar9 + 0x98));
    local_88 = *(longlong **)(lVar9 + 0x90);
  }
  FUN_140d84843(puVar1,&local_88,&DAT_14c948618,uVar8);
  cVar5 = FUN_1401144ce(puVar1);
  if (cVar5 == '\0') goto LAB_143df6e38;
  uVar8 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  plVar10 = (longlong *)FUN_140ec3c65(uVar8);
  if (plVar10 == (longlong *)0x0) goto LAB_143df6e38;
  FUN_14891c532(&local_88,param_1);
  (**(code **)(*plVar10 + 0x70))(plVar10,&local_a0,puVar1,&local_88);
  *(undefined8 *)(param_1 + 0xb0) = local_a0;
  if ((int)uStack_80 == 0) {
LAB_143df6ed4:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
    goto LAB_143df6ed4;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) goto LAB_143df6e38;
  lVar9 = (**(code **)(*plVar10 + 0x60))(plVar10,puVar1);
  if (lVar9 != 0) {
    local_b0 = *(longlong *)(lVar9 + 0x10);
    if (*(longlong *)(lVar9 + 0x10) == 0) {
      local_b0 = lVar9;
    }
    local_a8 = *(undefined4 *)(lVar9 + 0x18);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (longlong *)0x0;
    uStack_80 = (longlong *)0x0;
    local_48 = 0;
    FUN_14891c6b0(param_1,&local_88);
    if (lStack_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (((*(char *)(lVar7 + 0x14) != '\x01') ||
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28), lVar7 == 0)) ||
     (cVar5 = (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x50))(), cVar5 != '\0'))
  goto LAB_143df6e38;
  plVar11 = (longlong *)FUN_148923fcc();
  plVar10 = plVar11 + 2;
  local_88 = plVar10;
  uStack_80 = plVar11;
  FUN_1489240ae(&local_88,plVar10);
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0x10;
    plVar10 = *(longlong **)(param_1 + 0xc0);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
LAB_143df7024:
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
joined_r0x000143df7014:
        if (iVar6 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xb8) = plVar10;
    plVar10 = *(longlong **)(param_1 + 0xc0);
    if (plVar11 == plVar10) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        plVar10 = plVar11;
        goto joined_r0x000143df7014;
      }
    }
    else {
      *(longlong **)(param_1 + 0xc0) = plVar11;
      if (plVar10 != (longlong *)0x0) goto LAB_143df7024;
    }
  }
  plVar10 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_80 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xb8);
  *(undefined4 *)(lVar7 + 0x58) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(lVar7 + 0x50) = *puVar1;
  FUN_1447715ec(lVar7 + 0x60,param_1 + 0x88);
  lVar7 = *(longlong *)(param_1 + 0xb8);
  lVar9 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  if (lVar9 == 0) {
    *(undefined4 *)(lVar7 + 0x30) = 0;
    iVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar9 + 0xc);
    *(uint *)(lVar7 + 0x30) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar12;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar12;
      }
    }
  }
  *(int *)(lVar7 + 0x34) = iVar6;
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  local_88 = *(longlong **)(param_1 + 0xb8);
  plVar10 = *(longlong **)(param_1 + 0xc0);
  if (plVar10 == (longlong *)0x0) {
    uStack_80 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    uStack_80 = plVar10;
  }
  FUN_148911072(uVar8,&local_88);
  plVar11 = uStack_80;
  if (uStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_80)(uStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
LAB_143df6e38:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df71f4 FUN_143df71f4 body=2598 status=ok
// SIG undefined FUN_143df71f4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143df71f4(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  float *pfVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  bool bVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auStack_428 [32];
  longlong *local_408;
  longlong local_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  ushort local_3b8;
  byte local_3b0;
  ulonglong local_3a8;
  longlong local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 local_380 [182];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar9 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  lVar10 = FUN_14891e42e(param_1);
  if (lVar9 != 0 && lVar10 != 0) {
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_400 = param_1;
    if ((longlong)*(int *)(lVar10 + 0x78) != 0) {
      lVar29 = (longlong)*(int *)(lVar10 + 0x78) * 0x88;
      lVar28 = *(longlong *)(lVar10 + 0x70) + 0x10;
      do {
        local_3a8 = local_3a8 & 0xffffffffffffff00;
        local_380[0] = 0;
        FUN_1456bb102(&local_3a8,lVar9);
        FUN_1448729ea(lVar28,&local_3d0,&local_3a8);
        if (local_3b0 == 3) {
          uVar33 = local_3d0;
          bVar7 = 3;
        }
        else {
          FUN_1400b56fe(&local_a8,&local_3d0,3);
          uVar33 = 0;
          if (local_88 != 0) {
            uVar33 = (undefined4)local_a8;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar13 = &local_a8;
            if (0x18 < local_90) {
              puVar13 = local_a8;
            }
            (*pcVar4)(puVar13);
            param_1 = local_400;
          }
          bVar7 = local_3b0;
          if (0x18 < local_90) {
            FUN_1400020a8(local_a8);
            bVar7 = local_3b0;
          }
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar12 = &local_3d0;
          if (0x18 < local_3b8) {
            puVar12 = (undefined4 *)CONCAT44(uStack_3cc,local_3d0);
          }
          (*pcVar4)(puVar12);
        }
        if (0x18 < local_3b8) {
          FUN_1400020a8(CONCAT44(uStack_3cc,local_3d0));
        }
        FUN_1448173f8(local_380);
        if (((char)local_3a8 == '\x03') &&
           (plVar21 = (longlong *)CONCAT44(uStack_394,local_398), plVar21 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))();
          }
        }
        uVar20 = uStack_3e0;
        lVar18 = (longlong)(int)uStack_3e0;
        uVar8 = (int)uStack_3e0 + 1;
        uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar8);
        if (uStack_3e0._4_4_ < uVar8) {
          FUN_143dfc7f6(&local_3e8,uVar20 & 0xffffffff);
        }
        puVar13 = (undefined8 *)(local_3e8 + lVar18 * 0x18);
        *puVar13 = 0;
        puVar13[1] = 0;
        *(undefined8 *)(local_3e8 + 0x10 + lVar18 * 0x18) = 0;
        *(undefined8 *)(local_3e8 + lVar18 * 0x18) = *(undefined8 *)(lVar28 + -0x10);
        *(undefined4 *)(local_3e8 + 8 + lVar18 * 0x18) = *(undefined4 *)(lVar28 + -8);
        *(undefined4 *)(local_3e8 + 0xc + lVar18 * 0x18) = uVar33;
        lVar28 = lVar28 + 0x88;
        lVar29 = lVar29 + -0x88;
      } while (lVar29 != 0);
    }
    iVar23 = *(int *)(param_1 + 0x98);
    if (1 < (longlong)iVar23) {
      uVar20 = *(ulonglong *)(param_1 + 0x90);
      memset(&local_398,0,0x2f0);
      local_3a0 = uVar20 + (longlong)iVar23 * 0x18 + -0x18;
      local_3a8 = uVar20;
      fVar32 = logf((float)iVar23);
      local_398 = (int)(longlong)(fVar32 + fVar32);
      puVar11 = &local_3a8;
      do {
        plVar15 = (longlong *)*puVar11;
        plVar19 = (longlong *)puVar11[1];
        iVar23 = (int)puVar11[2];
        iVar16 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar15) >> 3) * -0x55555555;
        uVar8 = iVar16 + 1;
        plVar21 = plVar19;
        plVar30 = plVar15;
        if (iVar23 != 0) {
LAB_143df74f5:
          if (8 < (int)uVar8) {
            uVar20 = (ulonglong)(uVar8 >> 1);
            lVar29 = plVar15[uVar20 * 3 + 2];
            lVar28 = plVar15[uVar20 * 3];
            lVar18 = (plVar15 + uVar20 * 3)[1];
            plVar15[uVar20 * 3 + 2] = plVar15[2];
            lVar5 = plVar15[1];
            plVar15[uVar20 * 3] = *plVar15;
            (plVar15 + uVar20 * 3)[1] = lVar5;
            plVar15[2] = lVar29;
            *plVar15 = lVar28;
            plVar15[1] = lVar18;
            plVar25 = plVar21 + 3;
            plVar14 = plVar15;
            do {
              plVar6 = plVar14 + 3;
              plVar22 = plVar14 + 3;
              do {
                plVar14 = plVar22;
                plVar26 = plVar6;
                if (plVar21 < plVar14) break;
                plVar6 = plVar26 + 3;
                plVar22 = plVar14 + 3;
              } while (*(float *)((longlong)plVar14 + 0xc) < *(float *)((longlong)plVar15 + 0xc) ||
                       *(float *)((longlong)plVar14 + 0xc) == *(float *)((longlong)plVar15 + 0xc));
              plVar6 = plVar25 + -6;
              do {
                plVar22 = plVar25;
                plVar27 = plVar6;
                plVar25 = plVar22 + -3;
                if (plVar25 <= plVar15) break;
                plVar6 = plVar27 + -3;
              } while (*(float *)((longlong)plVar15 + 0xc) < *(float *)((longlong)plVar22 + -0xc) ||
                       *(float *)((longlong)plVar15 + 0xc) == *(float *)((longlong)plVar22 + -0xc));
              if (plVar25 < plVar14) goto LAB_143df75ee;
              lVar29 = plVar14[2];
              lVar28 = *plVar14;
              lVar18 = plVar14[1];
              plVar14[2] = plVar22[-1];
              lVar5 = plVar22[-2];
              *plVar14 = *plVar25;
              plVar14[1] = lVar5;
              plVar22[-1] = lVar29;
              *plVar25 = lVar28;
              plVar22[-2] = lVar18;
            } while( true );
          }
          for (; plVar19 = plVar15, plVar30 = plVar15, plVar15 < plVar21; plVar21 = plVar21 + -3) {
            while (plVar25 = plVar19, plVar19 = plVar30 + 3, plVar19 <= plVar21) {
              pfVar3 = (float *)((longlong)plVar30 + 0x24);
              plVar30 = plVar19;
              if (*pfVar3 < *(float *)((longlong)plVar25 + 0xc) ||
                  *pfVar3 == *(float *)((longlong)plVar25 + 0xc)) {
                plVar19 = plVar25;
              }
            }
            local_98 = plVar25[2];
            local_a8 = (undefined8 *)*plVar25;
            uStack_a0 = plVar25[1];
            puVar13 = local_a8;
            lVar28 = uStack_a0;
            plVar25[2] = plVar21[2];
            lVar29 = plVar21[1];
            *plVar25 = *plVar21;
            plVar25[1] = lVar29;
            plVar21[2] = local_98;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            *(undefined4 *)plVar21 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar21 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_a0._4_4_;
            local_a8 = puVar13;
            uStack_a0 = lVar28;
          }
          goto LAB_143df7995;
        }
LAB_143df76bf:
        if (uVar8 != 0) {
          iVar23 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
          iVar16 = iVar23;
joined_r0x000143df76e6:
          do {
            iVar24 = iVar23 * 2 + 1;
            if (iVar24 < (int)uVar8) {
              iVar17 = iVar23 * 2 + 2;
              if ((iVar17 < (int)uVar8) &&
                 (fVar32 = *(float *)((longlong)plVar15 + (longlong)iVar24 * 0x18 + 0xc),
                 pfVar3 = (float *)((longlong)plVar15 + (longlong)iVar17 * 0x18 + 0xc),
                 fVar32 < *pfVar3 || fVar32 == *pfVar3)) {
                iVar24 = iVar17;
              }
              fVar32 = *(float *)((longlong)plVar15 + (longlong)iVar24 * 0x18 + 0xc);
              pfVar3 = (float *)((longlong)plVar15 + (longlong)iVar23 * 0x18 + 0xc);
              if (*pfVar3 <= fVar32 && fVar32 != *pfVar3) {
                plVar21 = plVar15 + (longlong)iVar23 * 3;
                plVar19 = plVar15 + (longlong)iVar24 * 3;
                local_98 = plVar21[2];
                local_a8 = (undefined8 *)*plVar21;
                uStack_a0 = plVar21[1];
                puVar13 = local_a8;
                lVar28 = uStack_a0;
                plVar21[2] = plVar19[2];
                lVar29 = plVar19[1];
                *plVar21 = *plVar19;
                plVar21[1] = lVar29;
                plVar19[2] = local_98;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                *(undefined4 *)plVar19 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar19 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar19 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar19 + 0xc) = uStack_a0._4_4_;
                iVar23 = iVar24;
                local_a8 = puVar13;
                uStack_a0 = lVar28;
                goto joined_r0x000143df76e6;
              }
            }
            bVar31 = iVar16 != 0;
            iVar23 = iVar16 + -1;
            iVar16 = iVar23;
          } while (bVar31);
          if (1 < (int)uVar8) {
            uVar20 = (ulonglong)uVar8 - 1;
            local_98 = plVar15[2];
            local_a8 = (undefined8 *)*plVar15;
            uStack_a0 = plVar15[1];
            puVar13 = local_a8;
            lVar28 = uStack_a0;
            plVar15[2] = plVar15[uVar20 * 3 + 2];
            lVar29 = (plVar15 + uVar20 * 3)[1];
            *plVar15 = plVar15[uVar20 * 3];
            plVar15[1] = lVar29;
            plVar15[uVar20 * 3 + 2] = local_98;
            local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
            uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
            plVar21 = plVar15 + uVar20 * 3;
            *(undefined4 *)plVar21 = (undefined4)local_a8;
            *(undefined4 *)((longlong)plVar21 + 4) = local_a8._4_4_;
            *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_a0._4_4_;
            local_a8 = puVar13;
            uStack_a0 = lVar28;
            if (uVar8 != 2) {
              do {
                iVar23 = 0;
                iVar24 = 1;
                iVar16 = 0;
                do {
                  iVar23 = iVar23 + 2;
                  iVar17 = iVar24;
                  if (((longlong)iVar23 < (longlong)uVar20) &&
                     (fVar32 = *(float *)((longlong)plVar15 + (longlong)iVar24 * 0x18 + 0xc),
                     pfVar3 = (float *)((longlong)plVar15 + (longlong)iVar23 * 0x18 + 0xc),
                     fVar32 < *pfVar3 || fVar32 == *pfVar3)) {
                    iVar17 = iVar23;
                  }
                  fVar32 = *(float *)((longlong)plVar15 + (longlong)iVar17 * 0x18 + 0xc);
                  pfVar3 = (float *)((longlong)plVar15 + (longlong)iVar16 * 0x18 + 0xc);
                  if (fVar32 < *pfVar3 || fVar32 == *pfVar3) break;
                  plVar21 = plVar15 + (longlong)iVar16 * 3;
                  plVar19 = plVar15 + (longlong)iVar17 * 3;
                  lVar29 = plVar21[2];
                  lVar28 = *plVar21;
                  lVar18 = plVar21[1];
                  plVar21[2] = plVar19[2];
                  lVar5 = plVar19[1];
                  *plVar21 = *plVar19;
                  plVar21[1] = lVar5;
                  plVar19[2] = lVar29;
                  *plVar19 = lVar28;
                  plVar19[1] = lVar18;
                  iVar23 = iVar17 * 2;
                  iVar24 = iVar17 * 2 + 1;
                  iVar16 = iVar17;
                } while ((longlong)iVar24 < (longlong)uVar20);
                uVar1 = uVar20 - 1;
                local_98 = plVar15[2];
                local_a8 = (undefined8 *)*plVar15;
                uStack_a0 = plVar15[1];
                puVar13 = local_a8;
                lVar28 = uStack_a0;
                plVar15[2] = plVar15[uVar1 * 3 + 2];
                lVar29 = (plVar15 + uVar1 * 3)[1];
                *plVar15 = plVar15[uVar1 * 3];
                plVar15[1] = lVar29;
                plVar15[uVar1 * 3 + 2] = local_98;
                local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
                uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
                plVar21 = plVar15 + uVar1 * 3;
                *(undefined4 *)plVar21 = (undefined4)local_a8;
                *(undefined4 *)((longlong)plVar21 + 4) = local_a8._4_4_;
                *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_a0._4_4_;
                bVar31 = 2 < uVar20;
                uVar20 = uVar1;
                local_a8 = puVar13;
                uStack_a0 = lVar28;
              } while (bVar31);
            }
          }
        }
LAB_143df7995:
        puVar11 = puVar11 + -3;
      } while (&local_3a8 <= puVar11);
    }
    local_3f8 = 0;
    uStack_3f0 = 0;
    if ((longlong)*(int *)(lVar10 + 0x88) != 0) {
      lVar29 = (longlong)*(int *)(lVar10 + 0x88) * 0x60;
      lVar10 = *(longlong *)(lVar10 + 0x80) + 0x10;
      do {
        local_3a8 = local_3a8 & 0xffffffffffffff00;
        local_380[0] = 0;
        FUN_1456bb102(&local_3a8,lVar9);
        FUN_1448729ea(lVar10,&local_3d0,&local_3a8);
        if (local_3b0 == 3) {
          uVar33 = local_3d0;
          bVar7 = 3;
        }
        else {
          FUN_1400b56fe(&local_a8,&local_3d0,3);
          uVar33 = 0;
          if (local_88 != 0) {
            uVar33 = (undefined4)local_a8;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar4 != (code *)0x0) {
            puVar13 = &local_a8;
            if (0x18 < local_90) {
              puVar13 = local_a8;
            }
            (*pcVar4)(puVar13);
          }
          bVar7 = local_3b0;
          if (0x18 < local_90) {
            FUN_1400020a8(local_a8);
            bVar7 = local_3b0;
          }
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar12 = &local_3d0;
          if (0x18 < local_3b8) {
            puVar12 = (undefined4 *)CONCAT44(uStack_3cc,local_3d0);
          }
          (*pcVar4)(puVar12);
        }
        if (0x18 < local_3b8) {
          FUN_1400020a8(CONCAT44(uStack_3cc,local_3d0));
        }
        FUN_1448173f8(local_380);
        if (((char)local_3a8 == '\x03') &&
           (plVar21 = (longlong *)CONCAT44(uStack_394,local_398), plVar21 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))();
          }
        }
        uVar20 = uStack_3f0;
        lVar28 = (longlong)(int)uStack_3f0;
        uVar8 = (int)uStack_3f0 + 1;
        uStack_3f0 = CONCAT44(uStack_3f0._4_4_,uVar8);
        if (uStack_3f0._4_4_ < uVar8) {
          FUN_143dfc962(&local_3f8,uVar20 & 0xffffffff);
        }
        *(undefined4 *)(local_3f8 + 8 + lVar28 * 0x14) = *(undefined4 *)(lVar10 + -8);
        *(undefined8 *)(local_3f8 + lVar28 * 0x14) = *(undefined8 *)(lVar10 + -0x10);
        *(undefined4 *)(local_3f8 + 0xc + lVar28 * 0x14) = uVar33;
        *(undefined4 *)(local_3f8 + 0x10 + lVar28 * 0x14) = 0;
        *(undefined4 *)(local_3f8 + 8 + lVar28 * 0x14) = *(undefined4 *)(lVar10 + -8);
        *(undefined8 *)(local_3f8 + lVar28 * 0x14) = *(undefined8 *)(lVar10 + -0x10);
        lVar10 = lVar10 + 0x60;
        lVar29 = lVar29 + -0x60;
      } while (lVar29 != 0);
    }
    local_408 = &local_3f8;
    FUN_143df983c(local_400,param_2,(float)*(double *)(lVar9 + 0x6d0),&local_3e8);
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143df75ee:
  local_98 = plVar15[2];
  local_a8 = (undefined8 *)*plVar15;
  uStack_a0 = plVar15[1];
  puVar13 = local_a8;
  lVar28 = uStack_a0;
  plVar15[2] = plVar22[-1];
  lVar29 = plVar22[-2];
  *plVar15 = *plVar25;
  plVar15[1] = lVar29;
  plVar22[-1] = local_98;
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  *(undefined4 *)plVar25 = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar22 + -0x14) = local_a8._4_4_;
  *(undefined4 *)(plVar22 + -2) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar22 + -0xc) = uStack_a0._4_4_;
  iVar23 = iVar23 + -1;
  plVar22 = plVar22 + -6;
  local_a8 = puVar13;
  uStack_a0 = lVar28;
  if ((longlong)plVar27 - (longlong)plVar30 < (longlong)plVar19 - (longlong)plVar26) {
    if (plVar14 < plVar21) {
      *puVar11 = (ulonglong)plVar14;
      puVar11[1] = (ulonglong)plVar21;
      *(int *)(puVar11 + 2) = iVar23;
      puVar11 = puVar11 + 3;
    }
    plVar26 = plVar15;
    plVar19 = plVar27;
    if (plVar25 <= plVar15 + 3) goto LAB_143df7995;
  }
  else {
    if (plVar15 + 3 < plVar25) {
      *puVar11 = (ulonglong)plVar15;
      puVar11[1] = (ulonglong)plVar22;
      *(int *)(puVar11 + 2) = iVar23;
      puVar11 = puVar11 + 3;
    }
    plVar15 = plVar14;
    plVar22 = plVar21;
    plVar19 = plVar21;
    if (plVar21 <= plVar14) goto LAB_143df7995;
  }
  iVar16 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar26) >> 3) * -0x55555555;
  uVar8 = iVar16 + 1;
  plVar21 = plVar22;
  plVar30 = plVar26;
  if (iVar23 == 0) goto LAB_143df76bf;
  goto LAB_143df74f5;
}



// FUNCTION 143df7c1b FUN_143df7c1b body=538 status=ok
// SIG undefined FUN_143df7c1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df7c1b(void)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  DAT_14cb86e60 = 0;
  if (DAT_14cb86e58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb86e40 == 0) {
    uVar8 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar2 = 0;
  }
  else {
    puVar6 = &DAT_14cb86e28;
    if (DAT_14cb86e38 != (uint *)0x0) {
      puVar6 = DAT_14cb86e38;
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar2 = DAT_14cb86e40 + 0x1e;
      if (-1 < DAT_14cb86e40 + -1) {
        iVar2 = DAT_14cb86e40 + -1;
      }
      uVar8 = 0;
      uVar12 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar12 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar8) goto LAB_143df7d99;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar6[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (DAT_14cb86e40 <= iVar2) {
      iVar2 = DAT_14cb86e40;
    }
  }
  if (iVar2 < DAT_14cb86e40) {
    uVar11 = 0xffffffff;
    do {
      FUN_143dfc788(*(undefined8 *)(DAT_14cb86e18 + 0x28 + (longlong)iVar2 * 0x38));
      uVar11 = ~(uint)uVar12 & uVar11;
      puVar6 = DAT_14cb86e38;
      if (DAT_14cb86e38 == (uint *)0x0) {
        puVar6 = &DAT_14cb86e28;
      }
      iVar2 = (int)uVar8;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar11;
      if (uVar3 == 0) {
        iVar4 = DAT_14cb86e40 + 0x1e;
        if (-1 < DAT_14cb86e40 + -1) {
          iVar4 = DAT_14cb86e40 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar10 == lVar7) goto LAB_143df7d99;
        }
        uVar8 = (ulonglong)(iVar2 + (int)lVar7 + 1);
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < DAT_14cb86e40);
  }
LAB_143df7d99:
  DAT_14cb86e20 = 0;
  if (DAT_14cb86e24 != 0) {
    FUN_144748838(&DAT_14cb86e18,0);
  }
  _DAT_14cb86e48 = 0xffffffff;
  DAT_14cb86e40 = 0;
  if (0x80 < DAT_14cb86e44) {
    DAT_14cb86e44 = 0x80;
    FUN_1446efbd8(&DAT_14cb86e28,0);
  }
  if (DAT_14cb86e38 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb86e18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143df7e35 FUN_143df7e35 body=166 status=ok
// SIG undefined FUN_143df7e35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df7e35(void)

{
  DAT_14cb86eb0 = 0;
  if (DAT_14cb86ea8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb86e70 = 0;
  if (DAT_14cb86e74 != 0) {
    FUN_144727cd0(&DAT_14cb86e68,0);
  }
  _DAT_14cb86e98 = 0xffffffff;
  DAT_14cb86e90 = 0;
  if (0x80 < DAT_14cb86e94) {
    DAT_14cb86e94 = 0x80;
    FUN_1446efbd8(&DAT_14cb86e78,0);
  }
  if (DAT_14cb86e88 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb86e68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143df7edc FUN_143df7edc body=1322 status=ok
// SIG undefined FUN_143df7edc(void)

void FUN_143df7edc(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  uint local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 ***local_c4;
  undefined4 local_bc;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined8 ***local_88;
  undefined4 local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1447f69b6(param_1 + 0x18);
  lVar8 = FUN_14891e42e(param_1);
  lVar9 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  if ((lVar8 == 0) || (lVar9 == 0)) goto LAB_143df81f0;
  if (*(char *)(lVar8 + 0x59) == '\0') {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 8);
    FUN_143dfc1f4(&local_e0,param_1,FUN_143df8408);
    FUN_1448b6402(lVar12 + 0x38,&local_88,&local_e0);
    if ((int)local_d8 == 0) {
LAB_143df7fba:
      if (CONCAT44(iStack_dc,local_e0) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar3 = (undefined8 *)CONCAT44(iStack_dc,local_e0);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(&local_e0,0,0,0x10);
        local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
        goto LAB_143df7fba;
      }
    }
    piVar1 = *(int **)((*(longlong **)(param_1 + 0x58))[8] + 8);
    piVar10 = &DAT_14c9485f0;
    if (piVar1 != (int *)0x0) {
      piVar10 = piVar1;
    }
    if (((*piVar10 == 0) || (iVar6 = piVar10[1], iVar6 == 0)) || (*piVar10 == DAT_14c948000)) {
LAB_143df8360:
      local_80 = DAT_14c948620;
      local_88 = DAT_14c948618;
    }
    else {
      if ((iVar6 < 2) && (piVar10[9] < 1)) {
        plVar11 = (longlong *)(piVar10 + 2);
      }
      else {
        plVar11 = *(longlong **)(piVar10 + 6);
      }
      if (iVar6 < 1) goto LAB_143df8360;
      local_80 = (undefined4)plVar11[1];
      local_88 = (undefined8 ****)*plVar11;
    }
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))();
    if (lVar12 == 0) {
      uVar18 = 0;
      uVar16 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar12 + 0x90);
      uVar16 = *(undefined4 *)(lVar12 + 0x94);
      uVar18 = *(undefined4 *)(lVar12 + 0x98);
    }
    lVar12 = FUN_140672052(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
    iStack_dc = 0;
    if (lVar12 == 0) {
      local_e0 = 0;
      iVar6 = 0;
    }
    else {
      local_e0 = *(uint *)(lVar12 + 0xc);
      if ((int)local_e0 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((local_e0 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e0 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar21 = iVar6 == 0;
        if (bVar21) {
          *(int *)(lVar12 + 0x10) = iVar14;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar6 = iVar14;
        }
      }
    }
    local_c4 = local_88;
    local_bc = local_80;
    iStack_dc = iVar6;
    local_d8 = lVar8;
    local_d0 = uVar5;
    uStack_cc = uVar16;
    local_c8 = uVar18;
    uVar5 = FUN_143dfbd36(&local_e0);
    iVar6 = FUN_143dfc6c0(uVar5,&local_e0);
    if ((iVar6 != -1) && (lVar12 = (longlong)iVar6 * 0x38 + DAT_14cb86e18, lVar12 != 0)) {
      puVar13 = *(undefined4 **)(lVar12 + 0x28);
      *(undefined8 *)(lVar12 + 0x28) = 0;
      if (DAT_14cb86e20 != DAT_14cb86e4c) {
        iVar6 = FUN_143dfbd36(&local_e0);
        puVar17 = &DAT_14cb86e50;
        if (DAT_14cb86e58 != (undefined *)0x0) {
          puVar17 = DAT_14cb86e58;
        }
        uVar19 = (longlong)iVar6 & (longlong)DAT_14cb86e60 - 1U;
        if ((longlong)*(int *)(puVar17 + uVar19 * 4) != -1) {
          lVar8 = (longlong)*(int *)(puVar17 + uVar19 * 4) * 0x38 + DAT_14cb86e18;
          cVar4 = FUN_143dfc73c(lVar8,&local_e0);
          if (cVar4 == '\0') {
            do {
              lVar9 = lVar8;
              lVar8 = (longlong)*(int *)(lVar9 + 0x30);
              if (lVar8 == -1) goto LAB_143df81ca;
              lVar8 = lVar8 * 0x38 + DAT_14cb86e18;
              cVar4 = FUN_143dfc73c(lVar8,&local_e0);
            } while (cVar4 == '\0');
            puVar20 = (undefined4 *)(lVar9 + 0x30);
          }
          else {
            puVar20 = (undefined4 *)(puVar17 + uVar19 * 4);
          }
          FUN_143dfbc3a(*puVar20);
        }
      }
LAB_143df81ca:
      local_e8 = puVar13 + 6;
      FUN_143df983c(param_1,puVar13[1],*puVar13,puVar13 + 2);
      FUN_143dfc788(puVar13);
      goto LAB_143df81f0;
    }
  }
  local_e0 = local_e0 & 0xffffff00;
  local_b8[0] = 0;
  FUN_1456bb102(&local_e0,lVar9);
  puVar13 = &local_b0;
  FUN_1448729ea(lVar8 + 8,puVar13,&local_e0);
  if (local_90 == 3) {
    uVar7 = 3;
    uVar5 = local_b0;
  }
  else {
    FUN_1400b56fe(&local_88,&local_b0,3);
    uVar5 = 0;
    if (local_68 != 0) {
      uVar5 = local_88._0_4_;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar15 = &local_88;
      if (0x18 < local_70) {
        ppppuVar15 = (undefined8 ****)local_88;
      }
      (*pcVar2)(ppppuVar15);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
    uVar7 = (uint)local_90;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar13 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(puVar13);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if (((char)local_e0 == '\x03') &&
     (plVar11 = (longlong *)CONCAT44(uStack_cc,local_d0), plVar11 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  FUN_143df71f4(param_1,uVar5);
LAB_143df81f0:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143df8408 FUN_143df8408 body=5171 status=ok
// SIG undefined FUN_143df8408(void)

void FUN_143df8408(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined *puVar35;
  int *piVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined1 auStack_b8 [40];
  uint local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong *)(param_1 + 0x80) == 0) || (lVar20 = FUN_14891e42e(), lVar20 == 0)) ||
     (*(char *)(lVar20 + 0x59) != '\0')) goto LAB_143df8431;
  puVar21 = (undefined4 *)FUN_14001cc68(0x28,0x10);
  *(undefined8 *)(puVar21 + 2) = 0;
  *(undefined8 *)(puVar21 + 4) = 0;
  *(undefined8 *)(puVar21 + 6) = 0;
  *(undefined8 *)(puVar21 + 8) = 0;
  *puVar21 = *(undefined4 *)(param_1 + 0x88);
  puVar21[1] = *(undefined4 *)(param_1 + 0x8c);
  FUN_143c883e4(puVar21 + 2,param_1 + 0x90);
  FUN_143c8843e(puVar21 + 6,param_1 + 0xa0);
  piVar36 = *(int **)((*(longlong **)(param_1 + 0x58))[8] + 8);
  piVar22 = &DAT_14c9485f0;
  if (piVar36 != (int *)0x0) {
    piVar22 = piVar36;
  }
  if (((*piVar22 == 0) || (iVar27 = piVar22[1], iVar27 == 0)) || (*piVar22 == DAT_14c948000)) {
LAB_143df90b7:
    local_58 = DAT_14c948620;
    local_60 = DAT_14c948618;
  }
  else {
    if ((iVar27 < 2) && (piVar22[9] < 1)) {
      piVar22 = piVar22 + 2;
    }
    else {
      piVar22 = *(int **)(piVar22 + 6);
    }
    if (iVar27 < 1) goto LAB_143df90b7;
    local_58 = piVar22[2];
    local_60 = *(undefined8 **)piVar22;
  }
  lVar23 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x70))();
  if (lVar23 == 0) {
    uVar40 = 0;
    uVar39 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar23 + 0x90);
    uVar39 = *(undefined4 *)(lVar23 + 0x94);
    uVar40 = *(undefined4 *)(lVar23 + 0x98);
  }
  lVar23 = FUN_140672052(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  uStack_8c = 0;
  if (lVar23 == 0) {
    local_90 = 0;
    uVar16 = 0;
  }
  else {
    local_90 = *(uint *)(lVar23 + 0xc);
    if ((int)local_90 < DAT_14c9647dc) {
      lVar23 = (ulonglong)((local_90 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_90 >> 0x10) * 8);
    }
    else {
      lVar23 = 0;
    }
    uVar16 = *(uint *)(lVar23 + 0x10);
    if (*(uint *)(lVar23 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar16 = *(uint *)(lVar23 + 0x10);
      bVar42 = uVar16 == 0;
      if (bVar42) {
        *(uint *)(lVar23 + 0x10) = uVar17;
        uVar16 = 0;
      }
      UNLOCK();
      if (bVar42) {
        uVar16 = uVar17;
      }
    }
  }
  uStack_74 = SUB84(local_60,0);
  uStack_70 = (undefined4)((ulonglong)local_60 >> 0x20);
  iStack_6c = local_58;
  uStack_8c = uVar16;
  uStack_88 = lVar20;
  local_80 = uVar14;
  uStack_7c = uVar39;
  uStack_78 = uVar40;
  uVar14 = FUN_143dfbd36(&local_90);
  iVar15 = FUN_143dfc6c0(uVar14,&local_90);
  iVar31 = DAT_14cb86e48;
  iVar27 = DAT_14cb86e20;
  if (iVar15 == -1) {
    if (DAT_14cb86e4c == 0) {
      iVar31 = DAT_14cb86e20 + 1;
      bVar42 = DAT_14cb86e24 == DAT_14cb86e20;
      DAT_14cb86e20 = iVar31;
      if (bVar42) {
        FUN_1447030e2(&DAT_14cb86e18,iVar27);
      }
      iVar31 = DAT_14cb86e40;
      if (DAT_14cb86e40 == 0) {
        iVar15 = -1;
      }
      else {
        iVar15 = DAT_14cb86e40 + 0x1e;
        if (-1 < DAT_14cb86e40 + -1) {
          iVar15 = DAT_14cb86e40 + -1;
        }
        iVar15 = iVar15 >> 5;
      }
      iVar28 = DAT_14cb86e40 + 1;
      iVar32 = DAT_14cb86e40 + 0x1f;
      if (-1 < DAT_14cb86e40) {
        iVar32 = DAT_14cb86e40;
      }
      if (iVar32 >> 5 != iVar15) {
        if (DAT_14cb86e44 <= DAT_14cb86e40) {
          if (DAT_14cb86e40 + 0x20U < 0xa0) {
            DAT_14cb86e44 = 0x80;
          }
          else {
            uVar16 = DAT_14cb86e40 + 0x20U >> 5;
            if (DAT_14cb86e44 + 0x1fU < 0xa0) {
              uVar17 = 4;
              if (4 < uVar16) {
                uVar17 = uVar16;
              }
            }
            else {
              uVar17 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
            }
            uVar34 = (ulonglong)(uVar17 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar33 = (uint)(uVar34 + 0xf);
                if (uVar17 < 0x1ffd) {
                  uVar34 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar33 >> 4]];
                }
                else {
                  uVar37 = uVar34 + 0xf & 0xfffffffffffffff0;
                  if (uVar37 < 0x7ff1) {
                    bVar26 = (&DAT_14c841e00)[uVar33 >> 4];
                    uVar25 = 0x32;
                    if (0x32 < bVar26) {
                      uVar25 = (ulonglong)bVar26;
                    }
                    uVar38 = 0x32 - (ulonglong)bVar26;
                    do {
                      uVar34 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar38 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar38 & 0xffffffff] & 0xf) == 0) goto LAB_143df94dd;
                      lVar20 = uVar25 + 1 + uVar38;
                      uVar38 = uVar38 - 1;
                    } while (lVar20 != 0x33);
                  }
                  uVar34 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar34 = (ulonglong)DAT_14c841df8;
                  }
                  uVar34 = -uVar34 & (uVar37 + uVar34) - 1;
                }
              }
              else {
                uVar34 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar34,0);
              }
            }
LAB_143df94dd:
            iVar15 = (int)(uVar34 >> 2);
            DAT_14cb86e44 = -0x20;
            if ((int)uVar16 <= iVar15) {
              DAT_14cb86e44 = iVar15 << 5;
            }
          }
          FUN_1446efbd8(&DAT_14cb86e28,DAT_14cb86e40);
          iVar28 = DAT_14cb86e40 + 1;
        }
        iVar15 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar15 = iVar28;
        }
        if (iVar28 % 0x20 != 0) {
          puVar29 = &DAT_14cb86e28;
          if (DAT_14cb86e38 != (uint *)0x0) {
            puVar29 = DAT_14cb86e38;
          }
          bVar26 = -(char)(iVar28 % 0x20);
          DAT_14cb86e40 = iVar28;
          puVar29[iVar15 >> 5] = (puVar29[iVar15 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
          iVar28 = DAT_14cb86e40;
        }
      }
      DAT_14cb86e40 = iVar28;
      lVar20 = (longlong)iVar27;
      puVar29 = &DAT_14cb86e28;
      if (DAT_14cb86e38 != (uint *)0x0) {
        puVar29 = DAT_14cb86e38;
      }
      bVar26 = (byte)iVar31 & 0x1f;
      puVar29[iVar32 >> 5] = puVar29[iVar32 >> 5] & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
    }
    else {
      lVar20 = (longlong)DAT_14cb86e48;
      DAT_14cb86e48 = *(int *)(DAT_14cb86e18 + 4 + lVar20 * 0x38);
      DAT_14cb86e4c = DAT_14cb86e4c + -1;
      iVar27 = iVar31;
      if (DAT_14cb86e4c != 0) {
        *(undefined4 *)(DAT_14cb86e18 + (longlong)DAT_14cb86e48 * 0x38) = 0xffffffff;
      }
    }
    puVar29 = DAT_14cb86e38;
    if (DAT_14cb86e38 == (uint *)0x0) {
      puVar29 = &DAT_14cb86e28;
    }
    iVar31 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar31 = iVar27;
    }
    puVar29[iVar31 >> 5] = puVar29[iVar31 >> 5] | 1 << ((byte)iVar27 & 0x1f);
    lVar23 = DAT_14cb86e18;
    uVar17 = 1;
    lVar20 = lVar20 * 0x38;
    puVar1 = (undefined4 *)(DAT_14cb86e18 + lVar20);
    *(ulonglong *)(DAT_14cb86e18 + 0x20 + lVar20) = CONCAT44(iStack_6c,uStack_70);
    puVar3 = (undefined4 *)(lVar23 + 0x10 + lVar20);
    *puVar3 = local_80;
    puVar3[1] = uStack_7c;
    puVar3[2] = uStack_78;
    puVar3[3] = uStack_74;
    puVar29 = (uint *)(lVar23 + lVar20);
    *puVar29 = local_90;
    puVar29[1] = uStack_8c;
    puVar29[2] = (uint)uStack_88;
    puVar29[3] = uStack_88._4_4_;
    *(undefined4 **)(lVar23 + 0x28 + lVar20) = puVar21;
    *(undefined4 *)(lVar23 + 0x30 + lVar20) = 0xffffffff;
    uVar16 = FUN_143dfbd36(puVar1);
    if (DAT_14cb86e20 - DAT_14cb86e4c == 1) {
      uVar33 = 1;
LAB_143df8776:
      if (((int)uVar33 < 1) || ((int)uVar17 <= (int)DAT_14cb86e60)) {
        uVar16 = DAT_14cb86e60 - 1 & uVar16;
        puVar1[0xd] = uVar16;
        puVar35 = DAT_14cb86e58;
        if (DAT_14cb86e58 == (undefined *)0x0) {
          puVar35 = &DAT_14cb86e50;
        }
        puVar1[0xc] = *(undefined4 *)
                       (puVar35 + ((longlong)(int)DAT_14cb86e60 - 1U & (longlong)(int)uVar16) * 4);
        puVar35 = DAT_14cb86e58;
        if (DAT_14cb86e58 == (undefined *)0x0) {
          puVar35 = &DAT_14cb86e50;
        }
        *(int *)(puVar35 + ((longlong)(int)DAT_14cb86e60 - 1U & (longlong)(int)uVar16) * 4) = iVar27
        ;
      }
      else {
        DAT_14cb86e60 = uVar17;
        if (DAT_14cb86e58 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cb86e58,0,0,4);
        }
        uVar16 = DAT_14cb86e60;
        if (DAT_14cb86e60 != 0) {
          if (DAT_14cb86e60 == 1) {
            if (DAT_14cb86e58 != (undefined *)0x0) {
              FUN_1446efa72(&DAT_14cb86e58,0,0,4);
            }
LAB_143df87d8:
            uVar17 = 0;
            do {
              puVar35 = DAT_14cb86e58;
              if (DAT_14cb86e58 == (undefined *)0x0) {
                puVar35 = &DAT_14cb86e50;
              }
              *(undefined4 *)(puVar35 + (ulonglong)(DAT_14cb86e60 + 0x7fffffff & uVar17) * 4) =
                   0xffffffff;
              uVar17 = uVar17 + 1;
            } while (uVar16 != uVar17);
          }
          else {
            FUN_1446efa72(&DAT_14cb86e58,0,DAT_14cb86e60,4);
            if (0 < (int)uVar16) goto LAB_143df87d8;
          }
          if (DAT_14cb86e40 == 0) {
            uVar34 = 0;
            uVar37 = 1;
            iVar31 = 0;
            iVar27 = 0;
          }
          else {
            puVar29 = DAT_14cb86e38;
            if (DAT_14cb86e38 == (uint *)0x0) {
              puVar29 = &DAT_14cb86e28;
            }
            uVar16 = *puVar29;
            if (uVar16 == 0) {
              iVar27 = DAT_14cb86e40 + 0x1e;
              if (-1 < DAT_14cb86e40 + -1) {
                iVar27 = DAT_14cb86e40 + -1;
              }
              uVar34 = 0;
              uVar37 = (ulonglong)(uint)(iVar27 >> 5);
              if (iVar27 >> 5 < 1) {
                uVar37 = uVar34;
              }
              iVar31 = 0;
              do {
                if (uVar37 == uVar34) goto LAB_143df893f;
                iVar31 = iVar31 + 0x20;
                uVar16 = puVar29[uVar34 + 1];
                uVar34 = uVar34 + 1;
              } while (uVar16 == 0);
            }
            else {
              uVar34 = 0;
              iVar31 = 0;
            }
            uVar37 = (ulonglong)(-uVar16 & uVar16);
            uVar25 = uVar37 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar27 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (DAT_14cb86e40 <= iVar27) {
              iVar27 = DAT_14cb86e40;
            }
          }
          if (iVar27 < DAT_14cb86e40) {
            uVar16 = 0xffffffff;
            do {
              lVar20 = DAT_14cb86e18;
              lVar23 = (longlong)iVar27 * 0x38;
              iVar15 = FUN_143dfbd36(DAT_14cb86e18 + lVar23);
              uVar25 = (longlong)iVar15 & (longlong)(int)DAT_14cb86e60 - 1U;
              iVar15 = (int)uVar25;
              *(int *)(lVar20 + 0x34 + lVar23) = iVar15;
              puVar35 = DAT_14cb86e58;
              if (DAT_14cb86e58 == (undefined *)0x0) {
                puVar35 = &DAT_14cb86e50;
              }
              *(undefined4 *)(lVar20 + 0x30 + lVar23) =
                   *(undefined4 *)(puVar35 + ((longlong)(int)DAT_14cb86e60 - 1U & uVar25) * 4);
              puVar35 = DAT_14cb86e58;
              if (DAT_14cb86e58 == (undefined *)0x0) {
                puVar35 = &DAT_14cb86e50;
              }
              *(int *)(puVar35 + ((longlong)iVar15 & (longlong)(int)DAT_14cb86e60 - 1U) * 4) =
                   iVar27;
              uVar16 = ~(uint)uVar37 & uVar16;
              puVar29 = DAT_14cb86e38;
              if (DAT_14cb86e38 == (uint *)0x0) {
                puVar29 = &DAT_14cb86e28;
              }
              iVar27 = (int)uVar34;
              lVar20 = (longlong)iVar27;
              uVar17 = puVar29[lVar20] & uVar16;
              if (uVar17 == 0) {
                iVar15 = DAT_14cb86e40 + 0x1e;
                if (-1 < DAT_14cb86e40 + -1) {
                  iVar15 = DAT_14cb86e40 + -1;
                }
                iVar15 = iVar15 >> 5;
                iVar28 = iVar15;
                if (iVar15 < iVar27) {
                  iVar28 = iVar27;
                }
                if (iVar15 <= iVar27) break;
                lVar23 = 0;
                while( true ) {
                  iVar31 = iVar31 + 0x20;
                  uVar17 = puVar29[lVar20 + lVar23 + 1];
                  if (uVar17 != 0) break;
                  lVar23 = lVar23 + 1;
                  if (iVar28 - lVar20 == lVar23) goto LAB_143df893f;
                }
                uVar34 = (ulonglong)(iVar27 + (int)lVar23 + 1);
                uVar16 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar17 & uVar17);
              uVar25 = uVar37 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar27 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            } while (iVar27 < DAT_14cb86e40);
          }
        }
      }
    }
    else {
      iVar31 = FUN_143dfc6c0(uVar16,puVar1);
      lVar20 = DAT_14cb86e18;
      if (iVar31 == -1) {
        uVar33 = DAT_14cb86e20 - DAT_14cb86e4c;
        if (3 < uVar33) {
          uVar34 = (ulonglong)(uVar33 & 0xfffffffe) + 0xf;
          lVar20 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar17 = 1 << ((byte)lVar20 & 0x1f);
        }
        goto LAB_143df8776;
      }
      lVar23 = (longlong)iVar31 * 0x38;
      FUN_143dfc788(*(undefined8 *)(DAT_14cb86e18 + 0x28 + lVar23));
      uVar14 = *puVar1;
      uVar39 = puVar1[1];
      uVar40 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      puVar21 = (undefined4 *)(lVar20 + 0x20 + lVar23);
      *puVar21 = puVar1[8];
      puVar21[1] = uVar10;
      puVar21[2] = uVar11;
      puVar21[3] = uVar12;
      puVar21 = (undefined4 *)(lVar20 + 0x10 + lVar23);
      *puVar21 = uVar6;
      puVar21[1] = uVar7;
      puVar21[2] = uVar8;
      puVar21[3] = uVar9;
      puVar21 = (undefined4 *)(lVar20 + lVar23);
      *puVar21 = uVar14;
      puVar21[1] = uVar39;
      puVar21[2] = uVar40;
      puVar21[3] = uVar5;
      FUN_143dfbcb6(iVar27);
    }
LAB_143df893f:
    plVar24 = (longlong *)FUN_140672052();
    if (plVar24 == (longlong *)0x0) {
      uVar17 = 0;
      uVar16 = 0;
    }
    else {
      uVar17 = *(uint *)((longlong)plVar24 + 0xc);
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      uVar16 = *(uint *)(lVar20 + 0x10);
      if (*(uint *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar27 = DAT_14c964868 + 1;
        UNLOCK();
        uVar33 = DAT_14c964868 + 1;
        bVar42 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar27;
        if (bVar42) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar33);
        }
        LOCK();
        uVar16 = *(uint *)(lVar20 + 0x10);
        bVar42 = uVar16 == 0;
        if (bVar42) {
          *(uint *)(lVar20 + 0x10) = uVar33;
          uVar16 = 0;
        }
        UNLOCK();
        if (bVar42) {
          uVar16 = uVar33;
        }
      }
    }
    local_60 = (undefined8 *)CONCAT44(uVar16,uVar17);
    iVar27 = FUN_143dfb936(uVar16 ^ uVar17);
    puVar21 = (undefined4 *)0x0;
    if ((plVar24 != (longlong *)0x0) && (iVar27 == -1)) {
      lVar20 = (**(code **)(*plVar24 + 0x2b8))(plVar24);
      if ((lVar20 != 0) &&
         ((*(longlong **)(lVar20 + 0xe0) != (longlong *)0x0 &&
          (lVar20 = (**(code **)(**(longlong **)(lVar20 + 0xe0) + 0xc0))(), lVar20 != 0)))) {
        uVar16 = *(uint *)((longlong)plVar24 + 0xc);
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar23 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar23 = 0;
        }
        iVar27 = *(int *)(lVar23 + 0x10);
        if (*(int *)(lVar23 + 0x10) == 0) {
          LOCK();
          iVar27 = DAT_14c964868 + 1;
          UNLOCK();
          iVar31 = DAT_14c964868 + 1;
          bVar42 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar27;
          if (bVar42) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar31);
          }
          LOCK();
          iVar27 = *(int *)(lVar23 + 0x10);
          bVar42 = iVar27 == 0;
          if (bVar42) {
            *(int *)(lVar23 + 0x10) = iVar31;
            iVar27 = 0;
          }
          UNLOCK();
          if (bVar42) {
            iVar27 = iVar31;
          }
        }
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,2,0x10);
        local_58 = 2;
        *local_60 = &PTR_LAB_14b41cba0;
        local_60[1] = CONCAT44(iVar27,uVar16);
        LOCK();
        UNLOCK();
        lVar30 = DAT_14c758608 + 1;
        lVar23 = DAT_14c758608 + 1;
        if (lVar30 == 0) {
          LOCK();
          UNLOCK();
          lVar30 = DAT_14c758608 + 2;
          lVar23 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar23;
        local_60[2] = lVar30;
        *local_60 = &PTR_FUN_14b41cb30;
        local_60[3] = FUN_143dfb739;
        FUN_1448b6402(lVar20 + 0x20,&local_68,&local_60);
        if (local_58 == 0) {
LAB_143df8b00:
          if (local_60 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_60 != (undefined8 *)0x0) {
          (**(code **)*local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          local_58 = 0;
          goto LAB_143df8b00;
        }
        uVar16 = *(uint *)((longlong)plVar24 + 0xc);
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        uVar17 = *(uint *)(lVar20 + 0x10);
        if (*(uint *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar27 = DAT_14c964868 + 1;
          UNLOCK();
          uVar33 = DAT_14c964868 + 1;
          bVar42 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar27;
          if (bVar42) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar33);
          }
          LOCK();
          uVar17 = *(uint *)(lVar20 + 0x10);
          bVar42 = uVar17 == 0;
          if (bVar42) {
            *(uint *)(lVar20 + 0x10) = uVar33;
            uVar17 = 0;
          }
          UNLOCK();
          if (bVar42) {
            uVar17 = uVar33;
          }
        }
        iVar31 = DAT_14cb86e98;
        iVar27 = DAT_14cb86e70;
        if (DAT_14cb86e9c == 0) {
          iVar31 = DAT_14cb86e70 + 1;
          bVar42 = DAT_14cb86e74 == DAT_14cb86e70;
          DAT_14cb86e70 = iVar31;
          if (bVar42) {
            FUN_14482b872(&DAT_14cb86e68,iVar27);
          }
          iVar31 = DAT_14cb86e90;
          if (DAT_14cb86e90 == 0) {
            iVar15 = -1;
          }
          else {
            iVar15 = DAT_14cb86e90 + 0x1e;
            if (-1 < DAT_14cb86e90 + -1) {
              iVar15 = DAT_14cb86e90 + -1;
            }
            iVar15 = iVar15 >> 5;
          }
          iVar28 = DAT_14cb86e90 + 1;
          iVar32 = DAT_14cb86e90 + 0x1f;
          if (-1 < DAT_14cb86e90) {
            iVar32 = DAT_14cb86e90;
          }
          if (iVar32 >> 5 != iVar15) {
            if (DAT_14cb86e94 <= DAT_14cb86e90) {
              if (DAT_14cb86e90 + 0x20U < 0xa0) {
                DAT_14cb86e94 = 0x80;
              }
              else {
                uVar33 = DAT_14cb86e90 + 0x20U >> 5;
                if (DAT_14cb86e94 + 0x1fU < 0xa0) {
                  uVar18 = 4;
                  if (4 < uVar33) {
                    uVar18 = uVar33;
                  }
                }
                else {
                  uVar18 = uVar33 + (uVar33 * 3 >> 3) + 0x10;
                }
                uVar34 = (ulonglong)(uVar18 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar19 = (uint)(uVar34 + 0xf);
                    if (uVar18 < 0x1ffd) {
                      uVar34 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
                    }
                    else {
                      uVar37 = uVar34 + 0xf & 0xfffffffffffffff0;
                      if (uVar37 < 0x7ff1) {
                        bVar26 = (&DAT_14c841e00)[uVar19 >> 4];
                        uVar25 = 0x32;
                        if (0x32 < bVar26) {
                          uVar25 = (ulonglong)bVar26;
                        }
                        uVar38 = 0x32 - (ulonglong)bVar26;
                        do {
                          uVar34 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar38 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar38 & 0xffffffff] & 0xf) == 0)
                          goto LAB_143df95c3;
                          lVar20 = uVar25 + 1 + uVar38;
                          uVar38 = uVar38 - 1;
                        } while (lVar20 != 0x33);
                      }
                      uVar34 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar34 = (ulonglong)DAT_14c841df8;
                      }
                      uVar34 = -uVar34 & (uVar37 + uVar34) - 1;
                    }
                  }
                  else {
                    uVar34 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar34,0);
                  }
                }
LAB_143df95c3:
                iVar15 = (int)(uVar34 >> 2);
                DAT_14cb86e94 = -0x20;
                if ((int)uVar33 <= iVar15) {
                  DAT_14cb86e94 = iVar15 << 5;
                }
              }
              FUN_1446efbd8(&DAT_14cb86e78,DAT_14cb86e90);
              iVar28 = DAT_14cb86e90 + 1;
            }
            iVar15 = iVar28 + 0x1f;
            if (-1 < iVar28) {
              iVar15 = iVar28;
            }
            if (iVar28 % 0x20 != 0) {
              puVar29 = &DAT_14cb86e78;
              if (DAT_14cb86e88 != (uint *)0x0) {
                puVar29 = DAT_14cb86e88;
              }
              bVar26 = -(char)(iVar28 % 0x20);
              DAT_14cb86e90 = iVar28;
              puVar29[iVar15 >> 5] = (puVar29[iVar15 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
              iVar28 = DAT_14cb86e90;
            }
          }
          DAT_14cb86e90 = iVar28;
          lVar20 = (longlong)iVar27;
          puVar29 = &DAT_14cb86e78;
          if (DAT_14cb86e88 != (uint *)0x0) {
            puVar29 = DAT_14cb86e88;
          }
          bVar26 = (byte)iVar31 & 0x1f;
          puVar29[iVar32 >> 5] =
               puVar29[iVar32 >> 5] & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
        }
        else {
          lVar20 = (longlong)DAT_14cb86e98;
          DAT_14cb86e98 = *(int *)(DAT_14cb86e68 + 4 + lVar20 * 0x18);
          DAT_14cb86e9c = DAT_14cb86e9c + -1;
          iVar27 = iVar31;
          if (DAT_14cb86e9c != 0) {
            *(undefined4 *)(DAT_14cb86e68 + (longlong)DAT_14cb86e98 * 0x18) = 0xffffffff;
          }
        }
        puVar29 = DAT_14cb86e88;
        if (DAT_14cb86e88 == (uint *)0x0) {
          puVar29 = &DAT_14cb86e78;
        }
        iVar31 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar31 = iVar27;
        }
        puVar29[iVar31 >> 5] = puVar29[iVar31 >> 5] | 1 << ((byte)iVar27 & 0x1f);
        uVar33 = 1;
        puVar2 = (undefined8 *)(DAT_14cb86e68 + lVar20 * 0x18);
        *puVar2 = (undefined8 *)CONCAT44(uVar17,uVar16);
        puVar2[1] = local_68;
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        if (DAT_14cb86e70 - DAT_14cb86e9c == 1) {
          uVar18 = 1;
LAB_143df8d2f:
          if (((int)uVar18 < 1) || ((int)uVar33 <= (int)DAT_14cb86eb0)) {
            uVar16 = DAT_14cb86eb0 - 1 & (uVar16 ^ uVar17);
            *(uint *)((longlong)puVar2 + 0x14) = uVar16;
            piVar36 = DAT_14cb86ea8;
            if (DAT_14cb86ea8 == (int *)0x0) {
              piVar36 = &DAT_14cb86ea0;
            }
            *(int *)(puVar2 + 2) =
                 piVar36[(longlong)(int)DAT_14cb86eb0 - 1U & (longlong)(int)uVar16];
            piVar36 = DAT_14cb86ea8;
            if (DAT_14cb86ea8 == (int *)0x0) {
              piVar36 = &DAT_14cb86ea0;
            }
            piVar36[(longlong)(int)DAT_14cb86eb0 - 1U & (longlong)(int)uVar16] = iVar27;
          }
          else {
            DAT_14cb86eb0 = uVar33;
            if (DAT_14cb86ea8 != (int *)0x0) {
              FUN_1446efa72(&DAT_14cb86ea8,0,0,4);
            }
            uVar16 = DAT_14cb86eb0;
            if (DAT_14cb86eb0 != 0) {
              if (DAT_14cb86eb0 == 1) {
                if (DAT_14cb86ea8 != (int *)0x0) {
                  FUN_1446efa72(&DAT_14cb86ea8,0,0,4);
                }
LAB_143df8d91:
                uVar17 = 0;
                do {
                  piVar36 = DAT_14cb86ea8;
                  if (DAT_14cb86ea8 == (int *)0x0) {
                    piVar36 = &DAT_14cb86ea0;
                  }
                  piVar36[DAT_14cb86eb0 + 0x7fffffff & uVar17] = -1;
                  uVar17 = uVar17 + 1;
                } while (uVar16 != uVar17);
              }
              else {
                FUN_1446efa72(&DAT_14cb86ea8,0,DAT_14cb86eb0,4);
                if (0 < (int)uVar16) goto LAB_143df8d91;
              }
              if (DAT_14cb86e90 == 0) {
                uVar34 = 0;
                uVar37 = 1;
                iVar31 = 0;
                iVar27 = 0;
              }
              else {
                puVar29 = DAT_14cb86e88;
                if (DAT_14cb86e88 == (uint *)0x0) {
                  puVar29 = &DAT_14cb86e78;
                }
                uVar16 = *puVar29;
                if (uVar16 == 0) {
                  iVar27 = DAT_14cb86e90 + 0x1e;
                  if (-1 < DAT_14cb86e90 + -1) {
                    iVar27 = DAT_14cb86e90 + -1;
                  }
                  uVar34 = 0;
                  uVar37 = (ulonglong)(uint)(iVar27 >> 5);
                  if (iVar27 >> 5 < 1) {
                    uVar37 = uVar34;
                  }
                  iVar31 = 0;
                  do {
                    if (uVar37 == uVar34) goto LAB_143df8ee7;
                    iVar31 = iVar31 + 0x20;
                    uVar16 = puVar29[uVar34 + 1];
                    uVar34 = uVar34 + 1;
                  } while (uVar16 == 0);
                }
                else {
                  uVar34 = 0;
                  iVar31 = 0;
                }
                uVar37 = (ulonglong)(-uVar16 & uVar16);
                uVar25 = uVar37 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar27 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if (DAT_14cb86e90 <= iVar27) {
                  iVar27 = DAT_14cb86e90;
                }
              }
              if (iVar27 < DAT_14cb86e90) {
                uVar16 = 0xffffffff;
                do {
                  lVar20 = DAT_14cb86e68;
                  lVar23 = (longlong)iVar27;
                  uVar4 = *(undefined8 *)(DAT_14cb86e68 + lVar23 * 0x18);
                  uVar25 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                           (longlong)(int)DAT_14cb86eb0 - 1U;
                  iVar15 = (int)uVar25;
                  *(int *)(DAT_14cb86e68 + 0x14 + lVar23 * 0x18) = iVar15;
                  piVar36 = DAT_14cb86ea8;
                  if (DAT_14cb86ea8 == (int *)0x0) {
                    piVar36 = &DAT_14cb86ea0;
                  }
                  *(int *)(lVar20 + 0x10 + lVar23 * 0x18) =
                       piVar36[(longlong)(int)DAT_14cb86eb0 - 1U & uVar25];
                  piVar36 = DAT_14cb86ea8;
                  if (DAT_14cb86ea8 == (int *)0x0) {
                    piVar36 = &DAT_14cb86ea0;
                  }
                  piVar36[(longlong)iVar15 & (longlong)(int)DAT_14cb86eb0 - 1U] = iVar27;
                  uVar16 = ~(uint)uVar37 & uVar16;
                  puVar29 = DAT_14cb86e88;
                  if (DAT_14cb86e88 == (uint *)0x0) {
                    puVar29 = &DAT_14cb86e78;
                  }
                  iVar27 = (int)uVar34;
                  lVar20 = (longlong)iVar27;
                  uVar17 = puVar29[lVar20] & uVar16;
                  if (uVar17 == 0) {
                    iVar15 = DAT_14cb86e90 + 0x1e;
                    if (-1 < DAT_14cb86e90 + -1) {
                      iVar15 = DAT_14cb86e90 + -1;
                    }
                    iVar15 = iVar15 >> 5;
                    iVar28 = iVar15;
                    if (iVar15 < iVar27) {
                      iVar28 = iVar27;
                    }
                    if (iVar15 <= iVar27) break;
                    lVar23 = 0;
                    while( true ) {
                      iVar31 = iVar31 + 0x20;
                      uVar17 = puVar29[lVar20 + lVar23 + 1];
                      if (uVar17 != 0) break;
                      lVar23 = lVar23 + 1;
                      if (iVar28 - lVar20 == lVar23) goto LAB_143df8ee7;
                    }
                    uVar34 = (ulonglong)(iVar27 + (int)lVar23 + 1);
                    uVar16 = 0xffffffff;
                  }
                  uVar37 = (ulonglong)(-uVar17 & uVar17);
                  uVar25 = uVar37 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar25 != 0) {
                    for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar27 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                } while (iVar27 < DAT_14cb86e90);
              }
            }
          }
        }
        else {
          local_60 = (undefined8 *)CONCAT44(uVar17,uVar16);
          iVar31 = FUN_143dfb936(uVar16 ^ uVar17);
          if (iVar31 == -1) {
            uVar18 = DAT_14cb86e70 - DAT_14cb86e9c;
            if (3 < uVar18) {
              uVar34 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
              lVar20 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar33 = 1 << ((byte)lVar20 & 0x1f);
            }
            goto LAB_143df8d2f;
          }
          uVar14 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar39 = *(undefined4 *)(puVar2 + 1);
          uVar40 = *(undefined4 *)((longlong)puVar2 + 0xc);
          puVar21 = (undefined4 *)(DAT_14cb86e68 + (longlong)iVar31 * 0x18);
          *puVar21 = *(undefined4 *)puVar2;
          puVar21[1] = uVar14;
          puVar21[2] = uVar39;
          puVar21[3] = uVar40;
          FUN_143dfbedc(iVar27);
        }
LAB_143df8ee7:
        lVar20 = DAT_14cb86e68;
        if (DAT_14cb86e70 != DAT_14cb86e9c) {
          piVar36 = DAT_14cb86ea8;
          if (DAT_14cb86ea8 == (int *)0x0) {
            piVar36 = &DAT_14cb86ea0;
          }
          lVar23 = (longlong)*piVar36;
          if (lVar23 != -1) {
            local_60 = *(undefined8 **)(DAT_14cb86e68 + lVar23 * 0x18);
            local_50 = 0;
            cVar13 = FUN_148852ed2();
            if (cVar13 == '\0') {
              puVar2 = (undefined8 *)(lVar20 + lVar23 * 0x18);
              do {
                puVar41 = puVar2;
                lVar20 = (longlong)*(int *)(puVar41 + 2);
                if (lVar20 == -1) goto LAB_143df8f17;
                puVar2 = (undefined8 *)(DAT_14cb86e68 + lVar20 * 0x18);
                local_60 = (undefined8 *)*puVar2;
                local_50 = 0;
                cVar13 = FUN_148852ed2(&local_60,&local_50);
              } while (cVar13 == '\0');
              piVar36 = (int *)(puVar41 + 2);
            }
            iVar27 = *piVar36;
            piVar36 = &DAT_14cb86ea0;
            if (DAT_14cb86ea8 != (int *)0x0) {
              piVar36 = DAT_14cb86ea8;
            }
            lVar20 = DAT_14cb86e68 + (longlong)iVar27 * 0x18;
            iVar31 = *(int *)(lVar20 + 0x14);
            iVar15 = piVar36[iVar31];
            if (iVar15 == iVar27) {
              piVar36 = piVar36 + iVar31;
            }
            else {
              do {
                lVar23 = (longlong)iVar15;
                iVar15 = *(int *)(DAT_14cb86e68 + 0x10 + lVar23 * 0x18);
              } while (iVar15 != iVar27);
              piVar36 = (int *)(DAT_14cb86e68 + lVar23 * 0x18 + 0x10);
            }
            *piVar36 = *(int *)(lVar20 + 0x10);
            FUN_143dfbedc();
          }
        }
      }
LAB_143df8f17:
      puVar21 = (undefined4 *)0x0;
    }
  }
  FUN_143dfc788(puVar21);
LAB_143df8431:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143df983c FUN_143df983c body=2624 status=ok
// SIG undefined FUN_143df983c(void)

void FUN_143df983c(longlong param_1,float param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  longlong *local_d8;
  longlong *plStack_d0;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar10 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  lVar11 = FUN_14891e42e(param_1);
  if (lVar10 == 0 || lVar11 == 0) goto LAB_143df98b2;
  FUN_143dfa576(param_1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  plVar17 = *(longlong **)(param_1 + 0x10);
  local_100 = param_1;
  local_f8 = lVar11;
  if (plVar17 == (longlong *)0x0) {
LAB_143df991e:
    local_d8 = (longlong *)0x0;
    plStack_d0 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar17[1];
    do {
      if (iVar9 == 0) goto LAB_143df991e;
      LOCK();
      iVar14 = (int)plVar17[1];
      bVar18 = iVar9 == iVar14;
      if (bVar18) {
        *(int *)(plVar17 + 1) = iVar9 + 1;
        iVar14 = iVar9;
      }
      iVar9 = iVar14;
      UNLOCK();
    } while (!bVar18);
    local_d8 = *(longlong **)(param_1 + 8);
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar17 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    plStack_d0 = plVar17;
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  FUN_148910db4(uVar6,&local_d8);
  plVar17 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  lVar11 = local_100;
  fVar20 = 1.1754944e-38;
  if (1.1754944e-38 <= param_2) {
    fVar20 = param_2;
  }
  *(float *)(local_100 + 0x8c) = fVar20;
  *(undefined4 *)(local_100 + 0x88) = param_3;
  FUN_143c8843e(local_100 + 0xa0,param_5);
  FUN_143c883e4(lVar11 + 0x90,param_4);
  if ((longlong)*(int *)(lVar11 + 0x98) != 0) {
    puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x90) + 0x10);
    lVar16 = (longlong)*(int *)(lVar11 + 0x98) * 0x18;
    do {
      *puVar12 = 0;
      fVar20 = *(float *)((longlong)puVar12 + -4);
      fVar19 = (float)FUN_143dfa97e(lVar11);
      fVar20 = fVar20 - fVar19;
      if (0.0 < fVar20) {
        puVar15 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
        if (*(longlong *)(lVar10 + 0x1f0) == 0) {
          puVar15 = (undefined8 *)(lVar10 + 0x458);
        }
        uVar6 = *puVar15;
        FUN_143dfa9f8(&local_f0,lVar11,puVar12 + -2);
        local_d8 = (longlong *)0x0;
        plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
        FUN_14487d8d8(&local_d8,&local_f0);
        local_98 = 1;
        local_e0[0] = 0;
        local_dc = 0xbf800000;
        local_108 = local_e0;
        FUN_1406f4044(uVar6,puVar12,&local_d8,fVar20);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
        if (local_e8 != 0) {
          lVar11 = local_100;
          if (local_f0 == (undefined8 *)0x0) goto LAB_143df9d9d;
          (**(code **)*local_f0)(local_f0,0);
          FUN_1446efa72(&local_f0,0,0,0x10);
          local_e8 = 0;
        }
        lVar11 = local_100;
        if (local_f0 != (undefined8 *)0x0) {
          FUN_1400020a8();
          lVar11 = local_100;
        }
      }
LAB_143df9d9d:
      puVar12 = puVar12 + 3;
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != 0);
  }
  fVar20 = *(float *)(lVar11 + 0x8c);
  fVar19 = (float)FUN_143dfa97e(lVar11);
  fVar20 = fVar20 - fVar19;
  fVar19 = 1.1754944e-38;
  if (1.1754944e-38 <= fVar20) {
    fVar19 = fVar20;
  }
  if (*(longlong *)(lVar10 + 0x1f0) == 0) {
    puVar12 = (undefined8 *)(lVar10 + 0x458);
  }
  else {
    puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x1f0) + 0xf0);
  }
  uVar6 = *puVar12;
  FUN_14891e484(&local_f0,lVar11);
  local_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_108 = local_e0;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  FUN_1406f4044(uVar6,lVar11 + 0x80,&local_d8,fVar19);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 == 0) {
LAB_143df9a99:
    if (local_f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
    goto LAB_143df9a99;
  }
  lVar16 = local_100;
  lVar11 = *(longlong *)(*(longlong *)(local_100 + 0x58) + 0x28);
  if (((lVar11 != 0) &&
      (cVar8 = (**(code **)(**(longlong **)(lVar11 + 0xa0) + 0x50))(), cVar8 == '\0')) &&
     (*(char *)(local_f8 + 0x5a) != '\0')) {
    plVar13 = (longlong *)FUN_14001cc68(0xc0,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14b41dab0;
    plVar17 = plVar13 + 2;
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    plVar13[0xc] = 0;
    plVar13[0xd] = 0;
    plVar13[3] = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 0;
    *(undefined4 *)(plVar13 + 7) = 2;
    *(undefined8 *)((longlong)plVar13 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar13 + 0x44) = 0;
    plVar13[2] = (longlong)&PTR_FUN_14b366b90;
    *(undefined1 *)(plVar13 + 10) = 1;
    *(undefined8 *)((longlong)plVar13 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar13 + 0x5c) = 0;
    *(undefined4 *)((longlong)plVar13 + 100) = 0xbf800000;
    plVar13[0xe] = 0;
    plVar13[0xf] = 0;
    *(undefined4 *)(plVar13 + 0x10) = 2;
    *(undefined8 *)((longlong)plVar13 + 0x84) = 0;
    *(undefined8 *)((longlong)plVar13 + 0x8c) = 0;
    *(undefined4 *)((longlong)plVar13 + 0x94) = 0;
    *(undefined4 *)(plVar13 + 0x13) = 2;
    *(undefined4 *)((longlong)plVar13 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar13 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar13 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar13 + 0x9c) = 0;
    *(undefined8 *)((longlong)plVar13 + 0xa4) = 0;
    local_d8 = plVar17;
    plStack_d0 = plVar13;
    FUN_14892696a(&local_d8,plVar17);
    if (plVar13 == (longlong *)0x0) {
      *(undefined8 *)(lVar16 + 0x70) = 0x10;
      plVar17 = *(longlong **)(lVar16 + 0x78);
      if (plVar17 != (longlong *)0x0) {
        *(undefined8 *)(lVar16 + 0x78) = 0;
LAB_143df9f94:
        LOCK();
        plVar13 = plVar17 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
joined_r0x000143df9ee0:
          if (iVar9 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(longlong **)(lVar16 + 0x70) = plVar17;
      plVar17 = *(longlong **)(lVar16 + 0x78);
      if (plVar13 == plVar17) {
        LOCK();
        plVar17 = plVar13 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          plVar17 = plVar13;
          goto joined_r0x000143df9ee0;
        }
      }
      else {
        *(longlong **)(lVar16 + 0x78) = plVar13;
        if (plVar17 != (longlong *)0x0) goto LAB_143df9f94;
      }
    }
    plVar17 = plStack_d0;
    plVar13 = (longlong *)(lVar16 + 0x70);
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_d0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    lVar11 = *plVar13;
    uVar5 = *(uint *)(lVar10 + 0xc);
    *(uint *)(lVar11 + 0x30) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(lVar10 + 0x10) = iVar14;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar9 = iVar14;
      }
    }
    *(int *)(lVar11 + 0x34) = iVar9;
    *(undefined8 *)(*(longlong *)(local_100 + 0x70) + 0x44) = *(undefined8 *)(local_f8 + 0x5c);
    *(undefined4 *)(*(longlong *)(local_100 + 0x70) + 0x4c) = *(undefined4 *)(local_100 + 0x88);
    *(float *)(*(longlong *)(local_100 + 0x70) + 0x50) =
         *(float *)(*(longlong *)(local_100 + 0x70) + 0x4c) + *(float *)(local_100 + 0x8c);
    if ((longlong)*(int *)(local_100 + 0x98) != 0) {
      puVar15 = *(undefined8 **)(local_100 + 0x90);
      puVar12 = puVar15 + (longlong)*(int *)(local_100 + 0x98) * 3;
      do {
        lVar10 = *plVar13;
        iVar9 = *(int *)(lVar10 + 0xa8);
        lVar11 = (longlong)iVar9;
        *(uint *)(lVar10 + 0xa8) = iVar9 + 1U;
        if (*(uint *)(lVar10 + 0xac) < iVar9 + 1U) {
          FUN_143df3cc0((longlong *)(lVar10 + 0xa0),iVar9);
        }
        lVar10 = *(longlong *)(lVar10 + 0xa0);
        puVar4 = (undefined8 *)(lVar10 + lVar11 * 0x14);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(lVar10 + 0x10 + lVar11 * 0x14) = 0;
        *(undefined8 *)(lVar10 + lVar11 * 0x14) = *puVar15;
        *(undefined4 *)(lVar10 + 8 + lVar11 * 0x14) = *(undefined4 *)(puVar15 + 1);
        *(undefined4 *)(lVar10 + 0xc + lVar11 * 0x14) = *(undefined4 *)((longlong)puVar15 + 0xc);
        puVar15 = puVar15 + 3;
      } while (puVar15 != puVar12);
    }
    if ((longlong)*(int *)(local_100 + 0xa8) != 0) {
      puVar15 = *(undefined8 **)(local_100 + 0xa0);
      puVar12 = (undefined8 *)((longlong)puVar15 + (longlong)*(int *)(local_100 + 0xa8) * 0x14);
      do {
        lVar10 = *plVar13;
        iVar9 = *(int *)(lVar10 + 0x98);
        lVar11 = (longlong)iVar9;
        *(uint *)(lVar10 + 0x98) = iVar9 + 1U;
        if (*(uint *)(lVar10 + 0x9c) < iVar9 + 1U) {
          FUN_143df3f88((longlong *)(lVar10 + 0x90),iVar9);
        }
        lVar10 = *(longlong *)(lVar10 + 0x90);
        puVar4 = (undefined8 *)(lVar10 + lVar11 * 0x14);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(lVar10 + 0x10 + lVar11 * 0x14) = 0;
        *(undefined8 *)(lVar10 + lVar11 * 0x14) = *puVar15;
        *(undefined4 *)(lVar10 + 8 + lVar11 * 0x14) = *(undefined4 *)(puVar15 + 1);
        *(undefined4 *)(lVar10 + 0xc + lVar11 * 0x14) = *(undefined4 *)((longlong)puVar15 + 0xc);
        *(undefined4 *)(lVar10 + 0x10 + lVar11 * 0x14) = *(undefined4 *)(puVar15 + 2);
        puVar15 = (undefined8 *)((longlong)puVar15 + 0x14);
      } while (puVar15 != puVar12);
    }
    lVar16 = local_100;
    uVar6 = *(undefined8 *)(local_100 + 0x58);
    local_d8 = *(longlong **)(local_100 + 0x70);
    plVar17 = *(longlong **)(local_100 + 0x78);
    if (plVar17 == (longlong *)0x0) {
      plStack_d0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      plStack_d0 = plVar17;
    }
    FUN_148911072(uVar6,&local_d8);
    plVar13 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_d0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar17 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (((*(longlong *)(lVar16 + 0xb8) != 0) || (lVar10 = FUN_14891e42e(lVar16), lVar10 == 0)) ||
     (plVar17 = *(longlong **)(lVar10 + 0x98), plVar17 == (longlong *)0x0)) goto LAB_143df98b2;
  pplVar3 = (longlong **)(lVar16 + 0xb8);
  (**(code **)(*plVar17 + 0x10))(plVar17,&local_d8);
  plVar17 = plStack_d0;
  if (pplVar3 != &local_d8) {
    *(longlong **)(lVar16 + 0xb8) = local_d8;
    local_d8 = (longlong *)0x0;
    plVar13 = *(longlong **)(lVar16 + 0xc0);
    if (plStack_d0 != plVar13) {
      plStack_d0 = (longlong *)0x0;
      *(longlong **)(lVar16 + 0xc0) = plVar17;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar13 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
    }
  }
  plVar17 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  plVar17 = *pplVar3;
  if (plVar17 == (longlong *)0x0) goto LAB_143df98b2;
  plVar13 = *(longlong **)(lVar10 + 0x98);
  plVar7 = *(longlong **)(lVar10 + 0xa0);
  if (plVar7 == (longlong *)0x0) {
    plStack_d0 = (longlong *)0x0;
    local_d8 = plVar13;
    FUN_14113df4c(plVar17,*(undefined8 *)(lVar16 + 0x58));
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    local_d8 = plVar13;
    plStack_d0 = plVar7;
    FUN_14113df4c(plVar17,*(undefined8 *)(lVar16 + 0x58));
    LOCK();
    plVar17 = plVar7 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  lVar10 = *(longlong *)(lVar16 + 0xb8);
  FUN_143dfc1f4(&local_d8,lVar16,FUN_143dfab52);
  FUN_1448b6402(lVar10 + 0x18,&local_f0,&local_d8);
  if ((int)plStack_d0 == 0) {
LAB_143df9f6f:
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
    goto LAB_143df9f6f;
  }
  (**(code **)(**pplVar3 + 0x10))();
LAB_143df98b2:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfa27e FUN_143dfa27e body=285 status=ok
// SIG undefined FUN_143dfa27e(void)

void FUN_143dfa27e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_14891e42e();
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (lVar4 == 0) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar4 + 0x90));
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x90) + 0x10;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar4) != 0) {
        lVar1 = lVar8 + lVar4;
        local_68 = *(undefined4 *)(lVar1 + -8);
        local_70 = *(undefined8 *)(lVar1 + -0x10);
        FUN_143dfa39c(param_1,&local_70);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar4);
  }
  FUN_143dfa576(param_1,uVar5 & 0xffffffff);
  puVar7 = &local_60;
  local_48 = 4;
  local_60 = 1;
  local_40 = 1;
  FUN_14113e5d4(param_1,puVar7);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_48) {
      puVar7 = (undefined4 *)CONCAT44(uStack_5c,local_60);
    }
    (*pcVar3)(puVar7);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(CONCAT44(uStack_5c,local_60));
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfa39c FUN_143dfa39c body=473 status=ok
// SIG undefined FUN_143dfa39c(void)

void FUN_143dfa39c(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    piVar4 = *(int **)(param_1 + 0x90);
    lVar1 = (longlong)*(int *)(param_1 + 0x98) * 0x18;
    do {
      if ((*piVar4 == *param_2) && (piVar4[2] == param_2[2])) {
        if (piVar4 != (int *)0x0) {
          lVar1 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
          if (lVar1 != 0) {
            if (*(longlong *)(lVar1 + 0x1f0) == 0) {
              plVar2 = (longlong *)(lVar1 + 0x458);
            }
            else {
              plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
            }
            lVar1 = *(longlong *)(piVar4 + 4);
            if (lVar1 != 0) {
              lVar6 = *plVar2;
              uVar3 = (uint)lVar1;
              if ((int)(uVar3 & 0xffffff) < *(int *)(lVar6 + 0x10)) {
                lVar5 = lVar6 + 0x18;
                if (*(longlong *)(lVar6 + 0x28) != 0) {
                  lVar5 = *(longlong *)(lVar6 + 0x28);
                }
                if ((*(uint *)(lVar5 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) &
                    1) != 0) {
                  lVar6 = *(longlong *)(lVar6 + 8);
                  lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
                  if (((lVar6 + lVar5 != 0) && (*(longlong *)(lVar6 + 0x60 + lVar5) == lVar1)) &&
                     (*(char *)(lVar6 + 1 + lVar5) != '\x04')) {
                    FUN_1405a424c();
                  }
                }
              }
            }
            piVar4[4] = 0;
            piVar4[5] = 0;
          }
          if (*(longlong *)(param_1 + 0x70) != 0) {
            local_28 = param_2[2];
            local_30 = *(undefined8 *)param_2;
            FUN_143df2506();
          }
          piVar4[4] = 0;
          piVar4[5] = 0;
          lVar1 = FUN_14891e42e(param_1);
          if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x78) != 0)) {
            lVar6 = *(longlong *)(lVar1 + 0x70) + 0x60;
            lVar1 = (longlong)*(int *)(lVar1 + 0x78) * 0x88;
            goto LAB_143dfa501;
          }
        }
        break;
      }
      piVar4 = piVar4 + 6;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  goto LAB_143dfa3f2;
  while( true ) {
    lVar6 = lVar6 + 0x88;
    lVar1 = lVar1 + -0x88;
    if (lVar1 == 0) break;
LAB_143dfa501:
    if ((*(int *)(lVar6 + -0x60) == *param_2) && (*(int *)(lVar6 + -0x58) == param_2[2])) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28);
      if ((lVar1 != 0) && (FUN_140d853aa(lVar1,local_40,lVar6,0), local_38 != (longlong *)0x0)) {
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
      break;
    }
  }
LAB_143dfa3f2:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dfa576 FUN_143dfa576 body=1030 status=ok
// SIG undefined FUN_143dfa576(void)

void FUN_143dfa576(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_143dfa78c:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_143dfa78c;
        LOCK();
        iVar6 = (int)plVar9[1];
        bVar14 = iVar7 == iVar6;
        if (bVar14) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar14);
      local_48 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_40 = plVar9;
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
    FUN_148910e28(uVar5,&local_48);
    plVar9 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x70);
    if (lVar8 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      plVar9 = *(longlong **)(param_1 + 0x78);
      if (plVar9 == (longlong *)0x0) {
        plStack_40 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        plStack_40 = plVar9;
      }
      local_48 = lVar8;
      FUN_14891109c(uVar5,&local_48);
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
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
      *(undefined8 *)(param_1 + 0x70) = 0;
      plVar9 = *(longlong **)(param_1 + 0x78);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x78) = 0;
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
    }
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      *(undefined8 *)(param_1 + 0xb8) = 0;
      plVar9 = *(longlong **)(param_1 + 0xc0);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
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
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_140457ffc(*(longlong *)(*(longlong *)(param_1 + 0x58) + 8) + 0x38,param_1);
    lVar8 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
    if (lVar8 != 0) {
      if (*(longlong *)(lVar8 + 0x1f0) == 0) {
        plVar9 = (longlong *)(lVar8 + 0x458);
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
      }
      lVar8 = *(longlong *)(param_1 + 0x80);
      if (lVar8 != 0) {
        lVar13 = *plVar9;
        uVar10 = (uint)lVar8;
        if ((int)(uVar10 & 0xffffff) < *(int *)(lVar13 + 0x10)) {
          lVar11 = lVar13 + 0x18;
          if (*(longlong *)(lVar13 + 0x28) != 0) {
            lVar11 = *(longlong *)(lVar13 + 0x28);
          }
          if ((*(uint *)(lVar11 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >> (uVar10 & 0x1f) & 1)
              != 0) {
            lVar13 = *(longlong *)(lVar13 + 8);
            lVar11 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
            if (((lVar13 + lVar11 != 0) && (*(longlong *)(lVar13 + 0x60 + lVar11) == lVar8)) &&
               (*(char *)(lVar13 + 1 + lVar11) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
  }
  iVar7 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar7 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x90);
    lVar13 = 0;
    do {
      lVar11 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
      if (lVar11 != 0) {
        if (*(longlong *)(lVar11 + 0x1f0) == 0) {
          plVar9 = (longlong *)(lVar11 + 0x458);
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
        }
        lVar11 = *(longlong *)(lVar8 + 0x10 + lVar13);
        if (lVar11 != 0) {
          lVar4 = *plVar9;
          uVar10 = (uint)lVar11;
          if ((int)(uVar10 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
            lVar12 = lVar4 + 0x18;
            if (*(longlong *)(lVar4 + 0x28) != 0) {
              lVar12 = *(longlong *)(lVar4 + 0x28);
            }
            if ((*(uint *)(lVar12 + (ulonglong)((uVar10 & 0xffffff) >> 5) * 4) >> (uVar10 & 0x1f) &
                1) != 0) {
              lVar4 = *(longlong *)(lVar4 + 8);
              lVar12 = (ulonglong)(uVar10 & 0xffffff) * 0x70;
              if (((lVar4 + lVar12 != 0) && (*(longlong *)(lVar4 + 0x60 + lVar12) == lVar11)) &&
                 (*(char *)(lVar4 + 1 + lVar12) != '\x04')) {
                FUN_1405a424c();
              }
            }
          }
        }
        *(undefined8 *)(lVar8 + 0x10 + lVar13) = 0;
      }
      lVar13 = lVar13 + 0x18;
    } while ((longlong)iVar7 * 0x18 != lVar13);
  }
  if ((param_2 == '\0') && (*(undefined4 *)(param_1 + 0x98) = 0, *(int *)(param_1 + 0x9c) != 0)) {
    FUN_143dfc7c6(param_1 + 0x90);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfa97e FUN_143dfa97e body=122 status=ok
// SIG undefined FUN_143dfa97e(void)

undefined8 FUN_143dfa97e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  float fVar4;
  
  lVar1 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  if (lVar1 == 0) {
    fVar4 = 0.0;
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 0.0;
      lVar2 = 0;
      do {
        fVar4 = fVar4 + (float)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x10 + lVar2) *
                        *(float *)(*(longlong *)(param_1 + 0xa0) + 0xc + lVar2);
        lVar2 = lVar2 + 0x14;
      } while ((longlong)*(int *)(param_1 + 0xa8) * 0x14 != lVar2);
    }
    fVar4 = ((float)*(double *)(lVar1 + 0x6d0) - *(float *)(param_1 + 0x88)) + fVar4;
    uVar3 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar3,fVar4);
}



// FUNCTION 143dfa9f8 FUN_143dfa9f8 body=345 status=ok
// SIG undefined FUN_143dfa9f8(void)

longlong * FUN_143dfa9f8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar3 = (undefined8 *)*param_1;
  plVar8 = *(longlong **)(param_2 + 0x10);
  bVar7 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_143dfaa6b:
    uVar10 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_143dfaa6b;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  *puVar3 = &PTR_LAB_14b41d9d0;
  puVar3[1] = *param_3;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_3 + 1);
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[3] = lVar9;
  *puVar3 = &PTR_FUN_14b41d960;
  puVar3[4] = uVar10;
  puVar3[5] = plVar8;
  if (bVar7) {
    puVar3[6] = FUN_143dfa39c;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar3[6] = FUN_143dfa39c;
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
  return param_1;
}



// FUNCTION 143dfab52 FUN_143dfab52 body=546 status=ok
// SIG undefined FUN_143dfab52(void)

void FUN_143dfab52(longlong param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  int local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    bVar11 = false;
  }
  else {
    piVar9 = &local_88;
    FUN_140f3dc14(*(longlong *)(param_1 + 0xb8),piVar9);
    if (local_68 == 1) {
      bVar11 = local_88 != 0;
      uVar5 = 1;
    }
    else {
      piVar8 = &local_60;
      FUN_1400b56fe(piVar8,&local_88,1);
      bVar11 = local_60 != 0;
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_48) {
          piVar8 = (int *)CONCAT44(uStack_5c,local_60);
        }
        (*pcVar3)(piVar8);
      }
      if (0x18 < local_48) {
        FUN_1400020a8(CONCAT44(uStack_5c,local_60));
      }
      bVar11 = local_40 != 0 && bVar11;
      uVar5 = (uint)local_68;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar9 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(piVar9);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  if ((bool)*(char *)(param_1 + 0xb0) != bVar11) {
    *(bool *)(param_1 + 0xb0) = bVar11;
    lVar6 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar7;
      iVar2 = *(int *)(param_1 + 0x98);
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x90);
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar6 + 0x10 + lVar10) != 0) {
            if (*(char *)(param_1 + 0xb0) == '\x01') {
              FUN_147d74288(uVar4);
            }
            else {
              FUN_147d7457e(uVar4);
            }
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar10);
      }
      if (*(char *)(param_1 + 0xb0) == '\0') {
        FUN_147d7457e(uVar4,*(undefined8 *)(param_1 + 0x80));
      }
      else {
        FUN_147d74288(uVar4);
      }
      lVar6 = *(longlong *)(param_1 + 0x70);
      if (lVar6 != 0) {
        cVar1 = *(char *)(param_1 + 0xb0);
        uVar12 = FUN_143df32f6(lVar6);
        if (cVar1 == '\x01') {
          FUN_143df273c();
        }
        else {
          FUN_143df2938(lVar6,uVar12);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dfad76 FUN_143dfad76 body=1263 status=ok
// SIG undefined FUN_143dfad76(void)

void FUN_143dfad76(longlong param_1,int *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined8 *local_120;
  int local_118;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  int local_f8;
  undefined2 local_f0 [2];
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  byte local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  if (((lVar7 != 0) && (*(char *)(param_1 + 0xb0) == '\0')) &&
     ((longlong)*(int *)(param_1 + 0xa8) != 0)) {
    piVar8 = *(int **)(param_1 + 0xa0);
    lVar11 = (longlong)*(int *)(param_1 + 0xa8) * 0x14;
    do {
      if ((*piVar8 == *param_2) && (piVar8[2] == param_2[2])) {
        if (piVar8 != (int *)0x0) {
          piVar8[4] = piVar8[4] + 1;
          fVar1 = (float)piVar8[3];
          if (*(longlong *)(param_1 + 0x70) != 0) {
            local_f8 = param_2[2];
            local_100 = *(undefined8 *)param_2;
            FUN_143df22ce();
          }
          if ((longlong)*(int *)(param_1 + 0x98) == 0) goto LAB_143dfb04c;
          plVar14 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
          lVar11 = (longlong)*(int *)(param_1 + 0x98) * 0x18;
          goto LAB_143dfae98;
        }
        break;
      }
      piVar8 = piVar8 + 5;
      lVar11 = lVar11 + -0x14;
    } while (lVar11 != 0);
  }
  goto LAB_143dfb10b;
LAB_143dfae98:
  do {
    lVar3 = *plVar14;
    if (lVar3 != 0) {
      plVar12 = (longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        plVar12 = (longlong *)(lVar7 + 0x458);
      }
      lVar4 = *plVar12;
      uVar6 = (uint)lVar3;
      fVar16 = -1.0;
      if ((int)(uVar6 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
        lVar13 = lVar4 + 0x18;
        if (*(longlong *)(lVar4 + 0x28) != 0) {
          lVar13 = *(longlong *)(lVar4 + 0x28);
        }
        fVar16 = -1.0;
        if ((*(uint *)(lVar13 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) !=
            0) {
          lVar13 = *(longlong *)(lVar4 + 8);
          lVar15 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
          fVar16 = -1.0;
          lVar10 = lVar13 + lVar15;
          if ((lVar10 != 0) && (fVar16 = -1.0, *(longlong *)(lVar13 + 0x60 + lVar15) == lVar3)) {
            cVar2 = *(char *)(lVar13 + 1 + lVar15);
            fVar16 = -1.0;
            if (cVar2 != '\x04') {
              if (cVar2 == '\x01') {
                fVar16 = (float)(*(double *)(lVar10 + 8) - *(double *)(lVar4 + 0x140));
              }
              else if (cVar2 == '\x03') {
                fVar16 = 0.0;
              }
              else {
                fVar16 = (float)*(double *)(lVar10 + 8);
              }
            }
          }
        }
      }
      fVar16 = fVar16 - fVar1;
      if (fVar16 <= 0.0) {
        local_108 = (undefined4)plVar14[-1];
        local_110 = plVar14[-2];
        FUN_143dfa39c(param_1,&local_110);
      }
      else {
        FUN_143dfa9f8(&local_120,param_1);
        local_e8 = 0;
        local_e0 = 0;
        FUN_14487d8d8(&local_e8,&local_120);
        local_a8 = 1;
        local_f0[0] = 0;
        local_ec = 0xbf800000;
        local_128 = local_f0;
        FUN_1406f4044(lVar4,plVar14,&local_e8,fVar16);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
        if (local_118 != 0) {
          if (local_120 == (undefined8 *)0x0) goto LAB_143dfb022;
          (**(code **)*local_120)(local_120,0);
          FUN_1446efa72(&local_120,0,0,0x10);
          local_118 = 0;
        }
        if (local_120 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_143dfb022:
    plVar14 = plVar14 + 3;
    lVar11 = lVar11 + -0x18;
  } while (lVar11 != 0);
LAB_143dfb04c:
  lVar11 = *(longlong *)(param_1 + 0x80);
  if (lVar11 != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x1f0);
    if (lVar3 == 0) {
      plVar14 = (longlong *)(lVar7 + 0x458);
    }
    else {
      plVar14 = (longlong *)(lVar3 + 0xf0);
    }
    lVar4 = *plVar14;
    uVar6 = (uint)lVar11;
    fVar16 = -1.0;
    if ((int)(uVar6 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
      lVar13 = lVar4 + 0x18;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        lVar13 = *(longlong *)(lVar4 + 0x28);
      }
      if ((*(uint *)(lVar13 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
      {
        lVar13 = *(longlong *)(lVar4 + 8);
        lVar15 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
        lVar10 = lVar13 + lVar15;
        if (((lVar10 != 0) && (*(longlong *)(lVar13 + 0x60 + lVar15) == lVar11)) &&
           (cVar2 = *(char *)(lVar13 + 1 + lVar15), cVar2 != '\x04')) {
          if (cVar2 == '\x01') {
            fVar16 = (float)(*(double *)(lVar10 + 8) - *(double *)(lVar4 + 0x140));
          }
          else if (cVar2 == '\x03') {
            fVar16 = 0.0;
          }
          else {
            fVar16 = (float)*(double *)(lVar10 + 8);
          }
        }
      }
    }
    fVar16 = fVar16 - fVar1;
    if (0.0 < fVar16) {
      if (lVar3 == 0) {
        puVar9 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar9 = (undefined8 *)(lVar3 + 0xf0);
      }
      uVar5 = *puVar9;
      FUN_14891e484(&local_120,param_1);
      local_e8 = 0;
      local_e0 = 0;
      FUN_14487d8d8(&local_e8,&local_120);
      local_a8 = 1;
      local_128 = local_f0;
      local_f0[0] = 0;
      local_ec = 0xbf800000;
      FUN_1406f4044(uVar5,param_1 + 0x80,&local_e8,fVar16);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_a8])(&local_e8);
      if (local_118 != 0) {
        if (local_120 == (undefined8 *)0x0) goto LAB_143dfb10b;
        (**(code **)*local_120)(local_120,0);
        FUN_1446efa72(&local_120,0,0,0x10);
        local_118 = 0;
      }
      if (local_120 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_143dfa27e(param_1);
    }
  }
LAB_143dfb10b:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dfb272 FUN_143dfb272 body=66 status=ok
// SIG undefined FUN_143dfb272(void)

longlong FUN_143dfb272(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 == 0) || (lVar3 = (longlong)*(int *)(lVar1 + 0x10), lVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3 * 5;
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(*(longlong *)(lVar1 + 8) + lVar4) == *param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar5);
      if (bVar5) {
        return lVar2;
      }
      bVar5 = lVar3 * 0x28 + -0x28 != lVar4;
      lVar4 = lVar4 + 0x28;
    } while (bVar5);
  }
  return lVar2;
}



// FUNCTION 143dfb2b4 FUN_143dfb2b4 body=47 status=ok
// SIG undefined FUN_143dfb2b4(void)

void FUN_143dfb2b4(void)

{
  DAT_14cb87a90 = 0;
  if (DAT_14cb87a88 != 0) {
    FUN_1400020a8();
  }
  FUN_145983486(&DAT_14cb87a48);
  return;
}



// FUNCTION 143dfb2e3 FUN_143dfb2e3 body=41 status=ok
// SIG undefined FUN_143dfb2e3(void)

void FUN_143dfb2e3(void)

{
  DAT_14cb886e0 = 0;
  if (DAT_14cb886d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6734e();
  return;
}



// FUNCTION 143dfb30c FUN_143dfb30c body=560 status=ok
// SIG undefined FUN_143dfb30c(void)

void FUN_143dfb30c(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_58 [38];
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    local_32 = FUN_143d3578e(uVar5);
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_32,1);
    }
    else {
      local_32 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
  }
  else {
    local_31 = 0;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_31,1);
    }
    else {
      local_31 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    plVar6 = (longlong *)FUN_143d356d2(local_31);
    if (plVar6 == (longlong *)0x0) goto LAB_143dfb51a;
    lVar7 = FUN_14001cc68((longlong)
                          (int)(-*(int *)((longlong)plVar6 + 0x5c) &
                               ((int)plVar6[0xb] + *(int *)((longlong)plVar6 + 0x5c)) - 1U),0);
    (**(code **)(*plVar6 + 0x2e8))(plVar6,lVar7,1);
    plVar8 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar8[2] = (longlong)plVar6;
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b41de80;
    plVar8[3] = lVar7;
    if (((*(longlong *)(lVar7 + 8) == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) ||
       (*(int *)(*(longlong *)(lVar7 + 0x10) + 8) < 1)) {
      if (plVar8 == (longlong *)0x0) {
        *(longlong *)(lVar7 + 8) = lVar7;
        plVar6 = *(longlong **)(lVar7 + 0x10);
        if (plVar6 != (longlong *)0x0) {
LAB_143dfb489:
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
          *(longlong **)(lVar7 + 0x10) = plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_143dfb49d;
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(longlong *)(lVar7 + 8) = lVar7;
        if (*(longlong **)(lVar7 + 0x10) != plVar8) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(lVar7 + 0x10);
          if (plVar6 != (longlong *)0x0) goto LAB_143dfb489;
          *(longlong **)(lVar7 + 0x10) = plVar8;
        }
LAB_143dfb49d:
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    *(longlong *)(param_1 + 0x10) = lVar7;
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar8 == plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar6 = plVar8;
          goto joined_r0x000143dfb502;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x18) = plVar8;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000143dfb502:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),param_2);
LAB_143dfb51a:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfb53e FUN_143dfb53e body=146 status=ok
// SIG undefined FUN_143dfb53e(void)

void FUN_143dfb53e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x18);
    local_20 = lVar3;
    local_18 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_143d36286(param_3,&local_20);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_143d36286(param_3);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfb5d2 FUN_143dfb5d2 body=50 status=ok
// SIG undefined FUN_143dfb5d2(void)

undefined8 FUN_143dfb5d2(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  FUN_140002266(param_2,L"Id=%d",uVar1);
  return param_2;
}



// FUNCTION 143dfb612 FUN_143dfb612 body=248 status=ok
// SIG undefined FUN_143dfb612(void)

void FUN_143dfb612(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143dfb70a FUN_143dfb70a body=47 status=ok
// SIG undefined FUN_143dfb70a(void)

void FUN_143dfb70a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143dfb739 FUN_143dfb739 body=507 status=ok
// SIG undefined FUN_143dfb739(void)

void FUN_143dfb739(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  if (DAT_14cb86e40 == 0) {
    uVar13 = 1;
    uVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = &DAT_14cb86e28;
    if (DAT_14cb86e38 != (uint *)0x0) {
      puVar6 = DAT_14cb86e38;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar10 = DAT_14cb86e40 + 0x1e;
      if (-1 < DAT_14cb86e40 + -1) {
        iVar10 = DAT_14cb86e40 + -1;
      }
      uVar8 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar8) goto LAB_143dfb906;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (DAT_14cb86e40 <= iVar10) {
      iVar10 = DAT_14cb86e40;
    }
  }
  if (iVar10 < DAT_14cb86e40) {
    uVar12 = 0xffffffff;
    do {
      iVar4 = *(int *)(DAT_14cb86e18 + 4 + (longlong)iVar10 * 0x38);
      if (iVar4 == 0) {
LAB_143dfb865:
        FUN_143dfbc3a(iVar10);
      }
      else {
        puVar6 = (uint *)(DAT_14cb86e18 + (longlong)iVar10 * 0x38);
        uVar3 = *puVar6;
        if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
            (lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 == 0))
           || (((*(int *)(lVar11 + 0x10) != iVar4 || ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) ||
               (cVar2 = FUN_143dfbb9a(puVar6,&local_48), cVar2 != '\0')))) goto LAB_143dfb865;
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      puVar6 = DAT_14cb86e38;
      if (DAT_14cb86e38 == (uint *)0x0) {
        puVar6 = &DAT_14cb86e28;
      }
      iVar10 = (int)uVar8;
      lVar11 = (longlong)iVar10;
      uVar3 = puVar6[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = DAT_14cb86e40 + 0x1e;
        if (-1 < DAT_14cb86e40 + -1) {
          iVar4 = DAT_14cb86e40 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar4 <= iVar10) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar11 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar11 == lVar7) goto LAB_143dfb906;
        }
        uVar8 = (ulonglong)(iVar10 + (int)lVar7 + 1);
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < DAT_14cb86e40);
  }
LAB_143dfb906:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfb936 FUN_143dfb936 body=196 status=ok
// SIG undefined FUN_143dfb936(void)

int FUN_143dfb936(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb86e70 != DAT_14cb86e9c) {
    puVar2 = &DAT_14cb86ea0;
    if (DAT_14cb86ea8 != (undefined4 *)0x0) {
      puVar2 = DAT_14cb86ea8;
    }
    iVar3 = puVar2[DAT_14cb86eb0 - 1U & param_1];
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb86e68 + (longlong)iVar3 * 0x18);
        cVar1 = FUN_148852ed2(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_143dfb9d6;
        iVar3 = *(int *)(DAT_14cb86e68 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_143dfb9d6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfb9fc FUN_143dfb9fc body=29 status=ok
// SIG undefined FUN_143dfb9fc(void)

undefined8 FUN_143dfb9fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfba3c FUN_143dfba3c body=93 status=ok
// SIG undefined FUN_143dfba3c(void)

void FUN_143dfba3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41cba0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b41cb30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dfba9a FUN_143dfba9a body=93 status=ok
// SIG undefined FUN_143dfba9a(void)

void FUN_143dfba9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41cba0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b41cb30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143dfbaf8 FUN_143dfbaf8 body=126 status=ok
// SIG undefined FUN_143dfbaf8(void)

void FUN_143dfbaf8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41cba0;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14b41cb30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dfbb67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dfbb82 FUN_143dfbb82 body=21 status=ok
// SIG undefined FUN_143dfbb82(void)

undefined8 FUN_143dfbb82(longlong param_1)

{
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 143dfbb9a FUN_143dfbb9a body=159 status=ok
// SIG undefined FUN_143dfbb9a(void)

bool FUN_143dfbb9a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 != 0) &&
       ((((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
        ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
      return false;
    }
    if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
         (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
      return (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
    }
  }
  return true;
}



// FUNCTION 143dfbc3a FUN_143dfbc3a body=124 status=ok
// SIG undefined FUN_143dfbc3a(void)

void FUN_143dfbc3a(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  lVar1 = (longlong)param_1 * 0x38;
  puVar4 = &DAT_14cb86e50;
  if (DAT_14cb86e58 != (undefined *)0x0) {
    puVar4 = DAT_14cb86e58;
  }
  lVar5 = (longlong)*(int *)(DAT_14cb86e18 + 0x34 + lVar1);
  iVar3 = *(int *)(puVar4 + lVar5 * 4);
  if (iVar3 == param_1) {
    puVar2 = (undefined4 *)(puVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(DAT_14cb86e18 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_1);
    puVar2 = (undefined4 *)(DAT_14cb86e18 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(DAT_14cb86e18 + lVar1 + 0x30);
  FUN_143dfc788(*(undefined8 *)(DAT_14cb86e18 + 0x28 + lVar1));
  FUN_143dfbcb6(param_1);
  return;
}



// FUNCTION 143dfbcb6 FUN_143dfbcb6 body=128 status=ok
// SIG undefined FUN_143dfbcb6(void)

void FUN_143dfbcb6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb86e18;
  if (DAT_14cb86e4c != 0) {
    *(int *)(DAT_14cb86e18 + (longlong)DAT_14cb86e48 * 0x38) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x38) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb86e4c) {
    iVar4 = DAT_14cb86e48;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x38) = iVar4;
  DAT_14cb86e4c = DAT_14cb86e4c + 1;
  puVar3 = &DAT_14cb86e28;
  if (DAT_14cb86e38 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb86e38;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb86e48 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143dfbd36 FUN_143dfbd36 body=421 status=ok
// SIG undefined FUN_143dfbd36(void)

uint FUN_143dfbd36(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1[6];
  uVar1 = param_1[4];
  if (uVar2 != 0) {
    uVar1 = uVar2 >> 0xd ^ uVar1 - uVar2;
    uVar3 = uVar1 << 8 ^ (-0x61c88647 - uVar2) - uVar1;
    uVar4 = uVar3 >> 0xd ^ (uVar2 - uVar1) - uVar3;
    uVar1 = uVar4 >> 0xc ^ (uVar1 - uVar3) - uVar4;
    uVar2 = uVar1 << 0x10 ^ (uVar3 - uVar4) - uVar1;
    uVar3 = uVar2 >> 5 ^ (uVar4 - uVar1) - uVar2;
    uVar1 = uVar3 >> 3 ^ (uVar1 - uVar2) - uVar3;
    uVar2 = uVar1 << 10 ^ (uVar2 - uVar3) - uVar1;
    uVar1 = uVar2 >> 0xf ^ uVar3 - (uVar1 + uVar2);
  }
  uVar2 = param_1[7];
  uVar3 = param_1[9];
  if (uVar3 != 0) {
    uVar4 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar2 = uVar4 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
    uVar3 = uVar2 >> 0xd ^ (uVar3 - uVar4) - uVar2;
    uVar5 = uVar3 >> 0xc ^ (uVar4 - uVar2) - uVar3;
    uVar2 = uVar5 << 0x10 ^ (uVar2 - uVar3) - uVar5;
    uVar4 = uVar2 >> 5 ^ (uVar3 - uVar5) - uVar2;
    uVar3 = uVar4 >> 3 ^ (uVar5 - uVar2) - uVar4;
    uVar2 = uVar3 << 10 ^ (uVar2 - uVar4) - uVar3;
    uVar2 = uVar2 >> 0xf ^ uVar4 - (uVar3 + uVar2);
  }
  uVar3 = ((uint)(*(ulonglong *)(param_1 + 2) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_1 + 2) >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar4 = param_1[1] ^ *param_1;
  uVar4 = (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 + (uVar3 >> 0x10 ^ uVar3) ^ uVar4;
  uVar4 = uVar1 + 0x9e3779b9 + (uVar4 >> 2) + uVar4 * 0x40 ^ uVar4;
  return uVar2 + 0x9e3779b9 + (uVar4 >> 2) + uVar4 * 0x40 ^ uVar4;
}



// FUNCTION 143dfbedc FUN_143dfbedc body=128 status=ok
// SIG undefined FUN_143dfbedc(void)

void FUN_143dfbedc(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb86e68;
  if (DAT_14cb86e9c != 0) {
    *(int *)(DAT_14cb86e68 + (longlong)DAT_14cb86e98 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb86e9c) {
    iVar4 = DAT_14cb86e98;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb86e9c = DAT_14cb86e9c + 1;
  puVar3 = &DAT_14cb86e78;
  if (DAT_14cb86e88 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb86e88;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb86e98 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 143dfbf5c FUN_143dfbf5c body=31 status=ok
// SIG undefined FUN_143dfbf5c(void)

undefined8 FUN_143dfbf5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfbf7c FUN_143dfbf7c body=70 status=ok
// SIG undefined FUN_143dfbf7c(void)

undefined8 FUN_143dfbf7c(longlong *param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  FUN_1410a03dc(*(undefined8 *)(*param_1 + 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfbfe2 FUN_143dfbfe2 body=12 status=ok
// SIG undefined FUN_143dfbfe2(void)

void FUN_143dfbfe2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143dfbfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143dfbfee FUN_143dfbfee body=29 status=ok
// SIG undefined FUN_143dfbfee(void)

undefined8 FUN_143dfbfee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfc042 FUN_143dfc042 body=148 status=ok
// SIG undefined FUN_143dfc042(void)

void FUN_143dfc042(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(char *)(param_2 + 0x58) == '\x01') {
    piVar2 = &DAT_14c9485f0;
    if (*(int **)(param_2 + 8) != (int *)0x0) {
      piVar2 = *(int **)(param_2 + 8);
    }
    piVar3 = (int *)&DAT_14c948618;
    if (((*piVar2 != 0) && (iVar1 = piVar2[1], iVar1 != 0)) && (*piVar2 != DAT_14c948000)) {
      if ((iVar1 < 2) && (piVar2[9] < 1)) {
        piVar2 = piVar2 + 2;
      }
      else {
        piVar2 = *(int **)(piVar2 + 6);
      }
      piVar3 = (int *)&DAT_14c948618;
      if (0 < iVar1) {
        piVar3 = piVar2;
      }
    }
    if (*piVar3 != 0) {
      param_1 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1406b7634(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143dfc0d6 FUN_143dfc0d6 body=61 status=ok
// SIG undefined FUN_143dfc0d6(void)

void FUN_143dfc0d6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*(char *)(lVar2 + 0x58) == '\x01') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146558c74(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 143dfc114 FUN_143dfc114 body=59 status=ok
// SIG undefined FUN_143dfc114(void)

void FUN_143dfc114(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x58) == '\x01') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14189fa44(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 143dfc150 FUN_143dfc150 body=68 status=ok
// SIG undefined FUN_143dfc150(void)

undefined8 * FUN_143dfc150(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d330;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfc1b0 FUN_143dfc1b0 body=68 status=ok
// SIG undefined FUN_143dfc1b0(void)

undefined8 * FUN_143dfc1b0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d790;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfc1f4 FUN_143dfc1f4 body=374 status=ok
// SIG undefined FUN_143dfc1f4(void)

longlong * FUN_143dfc1f4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_143dfc2fd:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41d8f0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_143dfc2fd;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41d8f0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 143dfc36a FUN_143dfc36a body=64 status=ok
// SIG undefined FUN_143dfc36a(void)

undefined8 * FUN_143dfc36a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d8f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfc3ae FUN_143dfc3ae body=81 status=ok
// SIG undefined FUN_143dfc3ae(void)

undefined8 FUN_143dfc3ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143dfc406 FUN_143dfc406 body=89 status=ok
// SIG undefined FUN_143dfc406(void)

bool FUN_143dfc406(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143dfc451;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143dfc451:
  return lVar6 == param_2;
}



// FUNCTION 143dfc47c FUN_143dfc47c body=118 status=ok
// SIG undefined FUN_143dfc47c(void)

void FUN_143dfc47c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41d8f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143dfc4f2 FUN_143dfc4f2 body=118 status=ok
// SIG undefined FUN_143dfc4f2(void)

void FUN_143dfc4f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41d8f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143dfc568 FUN_143dfc568 body=156 status=ok
// SIG undefined FUN_143dfc568(void)

void FUN_143dfc568(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d8f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dfc5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dfc604 FUN_143dfc604 body=94 status=ok
// SIG undefined FUN_143dfc604(void)

void FUN_143dfc604(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000143dfc64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143dfc657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 143dfc662 FUN_143dfc662 body=93 status=ok
// SIG undefined FUN_143dfc662(void)

ulonglong FUN_143dfc662(longlong param_1)

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
LAB_143dfc6b4:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143dfc6b4;
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



// FUNCTION 143dfc6c0 FUN_143dfc6c0 body=123 status=ok
// SIG undefined FUN_143dfc6c0(void)

int FUN_143dfc6c0(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (DAT_14cb86e20 != DAT_14cb86e4c) {
    puVar3 = &DAT_14cb86e50;
    if (DAT_14cb86e58 != (undefined *)0x0) {
      puVar3 = DAT_14cb86e58;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14cb86e60 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14cb86e18 + 0x30 + (longlong)iVar1 * 0x38)) {
      cVar2 = FUN_143dfc73c(DAT_14cb86e18 + (longlong)iVar1 * 0x38,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 143dfc73c FUN_143dfc73c body=75 status=ok
// SIG undefined FUN_143dfc73c(void)

undefined4 FUN_143dfc73c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143dfbb9a();
  if ((((cVar1 == '\0') || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) ||
      (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) ||
     ((*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18) ||
      (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x24) >> 8),
                     *(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24));
  }
  return uVar2;
}



// FUNCTION 143dfc788 FUN_143dfc788 body=61 status=ok
// SIG undefined FUN_143dfc788(void)

void FUN_143dfc788(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 143dfc7c6 FUN_143dfc7c6 body=48 status=ok
// SIG undefined FUN_143dfc7c6(void)

void FUN_143dfc7c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 143dfc7f6 FUN_143dfc7f6 body=363 status=ok
// SIG undefined FUN_143dfc7f6(void)

void FUN_143dfc7f6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143dfc88c;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_143dfc88c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 143dfc962 FUN_143dfc962 body=363 status=ok
// SIG undefined FUN_143dfc962(void)

void FUN_143dfc962(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143dfc9f8;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143dfc9f8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 143dfcace FUN_143dfcace body=64 status=ok
// SIG undefined FUN_143dfcace(void)

undefined8 * FUN_143dfcace(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41d960;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfcb12 FUN_143dfcb12 body=81 status=ok
// SIG undefined FUN_143dfcb12(void)

undefined8 FUN_143dfcb12(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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
  return uVar6;
}



// FUNCTION 143dfcb6a FUN_143dfcb6a body=89 status=ok
// SIG undefined FUN_143dfcb6a(void)

bool FUN_143dfcb6a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143dfcbb5;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_143dfcbb5:
  return lVar6 == param_2;
}



// FUNCTION 143dfcbec FUN_143dfcbec body=126 status=ok
// SIG undefined FUN_143dfcbec(void)

void FUN_143dfcbec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d9d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b41d960;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143dfcc6a FUN_143dfcc6a body=126 status=ok
// SIG undefined FUN_143dfcc6a(void)

void FUN_143dfcc6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d9d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b41d960;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 143dfcce8 FUN_143dfcce8 body=164 status=ok
// SIG undefined FUN_143dfcce8(void)

void FUN_143dfcce8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41d9d0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41d960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dfcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143dfcd8c FUN_143dfcd8c body=167 status=ok
// SIG undefined FUN_143dfcd8c(void)

void FUN_143dfcd8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_143dfcdfb:
    local_18 = *(undefined4 *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x30))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_143dfcdfb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_18 = *(undefined4 *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dfce34 FUN_143dfce34 body=154 status=ok
// SIG undefined FUN_143dfce34(void)

ulonglong FUN_143dfce34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_143dfcead:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_143dfcead;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(param_1 + 0x10);
      local_28 = *(undefined8 *)(param_1 + 8);
      (**(code **)(param_1 + 0x30))(lVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143dfced2 FUN_143dfced2 body=622 status=ok
// SIG undefined FUN_143dfced2(void)

void FUN_143dfced2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  code *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_143dfcf26;
  if (DAT_14cb56270 == 0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148630fef;
    local_70 = FUN_1464b6a91;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar1 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
  if (plVar1 == (longlong *)0x0) goto LAB_143dfcf26;
  lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  if (lVar2 == 0) goto LAB_143dfcf26;
  local_48 = &LAB_148926d0a;
  local_40 = 0;
  FUN_148926d64(&local_38,param_1);
  FUN_1403524de(lVar2 + 0xf8,&local_48,&local_38);
  if (local_30 == 0) {
LAB_143dfcfce:
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_143dfcfce;
  }
  lVar3 = FUN_148926d10(param_1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x18) == '\x01')) {
    local_48 = &LAB_148926d5e;
    local_40 = 0;
    FUN_148926d64(&local_38,param_1);
    FUN_1403524de(lVar2 + 0x1d0,&local_48,&local_38);
    if (local_30 != 0) {
      if (local_38 == (code *)0x0) goto LAB_143dfcf26;
      (*(code *)**(undefined8 **)local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143dfcf26:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfd142 FUN_143dfd142 body=311 status=ok
// SIG undefined FUN_143dfd142(void)

void FUN_143dfd142(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      if (lVar2 != 0) {
        FUN_140457ffc(lVar2 + 0xf8,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfd28e FUN_143dfd28e body=1 status=ok
// SIG undefined FUN_143dfd28e(void)

void FUN_143dfd28e(void)

{
  return;
}



// FUNCTION 143dfd290 FUN_143dfd290 body=68 status=ok
// SIG undefined FUN_143dfd290(void)

undefined8 * FUN_143dfd290(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41ddf0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfd2f0 FUN_143dfd2f0 body=48 status=ok
// SIG undefined FUN_143dfd2f0(void)

void FUN_143dfd2f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2f0))(*(longlong **)(param_1 + 0x10),uVar1,1);
  FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 143dfd320 FUN_143dfd320 body=29 status=ok
// SIG undefined FUN_143dfd320(void)

undefined8 FUN_143dfd320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfd33e FUN_143dfd33e body=48 status=ok
// SIG undefined FUN_143dfd33e(void)

void FUN_143dfd33e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2f0))(*(longlong **)(param_1 + 0x10),uVar1,1);
  FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 143dfd36e FUN_143dfd36e body=29 status=ok
// SIG undefined FUN_143dfd36e(void)

undefined8 FUN_143dfd36e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143dfd38b FUN_143dfd38b body=5447 status=ok
// SIG undefined FUN_143dfd38b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dfd38b(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [40];
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86b98 = (ulonglong)uVar2;
  ram0x00014cb86ba4 = 0;
  FUN_14052b5e0(&DAT_14cb86ba0,&DAT_149e377fe,0);
  _DAT_14cb86bb0 = &DAT_149e377fe;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cb86c2c);
  if (cVar1 == '\0') {
    _DAT_14cb86c2c = 0;
    uRam000000014cb86c34 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb88730 = 0;
  DAT_14cb88738 = 0;
  _DAT_14cb88740 = 0;
  uRam000000014cb88748 = 0;
  _DAT_14cb88750 = 0;
  uRam000000014cb88758 = 0;
  _DAT_14cb88760 = 0;
  uRam000000014cb88768 = 0;
  _DAT_14cb88770 = 0;
  uRam000000014cb88778 = 0;
  _DAT_14cb88728 = &PTR_FUN_14b366840;
  DAT_14cb88780 = 1;
  _DAT_14cb88784 = 0;
  uRam000000014cb8878c = 0;
  _DAT_14cb88791 = 0;
  uRam000000014cb88794 = 0;
  _DAT_14cb887a0 = 0;
  uRam000000014cb887a8 = 0;
  _DAT_14cb887b0 = 0;
  uRam000000014cb887b8 = 0;
  _DAT_14cb887c0 = 0;
  uRam000000014cb887c8 = 0;
  DAT_14cb887d0 = 0;
  _DAT_14cb887d8 = &DAT_14a171d50;
  _DAT_14cb887e8 = 0;
  uRam000000014cb887f0 = 0;
  _DAT_14cb887e0 = DAT_14cb86da8 + 0x480;
  atexit((_func_5014 *)&LAB_143df5ac0);
  DAT_14cb88904 = 0;
  FUN_14052b5e0(&DAT_14cb88900,"GeneratedMission_RequestOwner",0);
  _DAT_14cb88910 = "GeneratedMission_RequestOwner";
  DAT_14cb88814 = 0;
  FUN_14052b5e0(&DAT_14cb88810,"_MissionOwner",0);
  _DAT_14cb88820 = "_MissionOwner";
  ram0x00014cb889e4 = 0;
  FUN_14052b5e0(&DAT_14cb889e0,"updatecount",0);
  DAT_14cb889f0 = "updatecount";
  ram0x00014cb889fc = 0;
  FUN_14052b5e0(&DAT_14cb889f8,"updatecountmax",0);
  _DAT_14cb88a08 = "updatecountmax";
  ram0x00014cb8897c = 0;
  FUN_14052b5e0(&DAT_14cb88978,"status",0);
  _DAT_14cb88988 = "status";
  ram0x00014cb889cc = 0;
  FUN_14052b5e0(&DAT_14cb889c8,"cursorposition",0);
  DAT_14cb889d8 = "cursorposition";
  ram0x00014cb88884 = 0;
  FUN_14052b5e0(&DAT_14cb88880,&DAT_14b419a98,0);
  _DAT_14cb88890 = &DAT_14b419a98;
  DAT_14cb8889c = 0;
  FUN_14052b5e0(&DAT_14cb88898,"precompleted",0);
  _DAT_14cb888a8 = "precompleted";
  DAT_14cb88854 = 0;
  FUN_14052b5e0(&DAT_14cb88850,"entrypoint",0);
  _DAT_14cb88860 = "entrypoint";
  DAT_14cb8882c = 0;
  FUN_14052b5e0(&DAT_14cb88828,"owner",0);
  _DAT_14cb88838 = "owner";
  DAT_14cb889b4 = 0;
  FUN_14052b5e0(&DAT_14cb889b0,"failedcount",0);
  _DAT_14cb889c0 = "failedcount";
  DAT_14cb8886c = 0;
  FUN_14052b5e0(&DAT_14cb88868,"startingobjective",0);
  _DAT_14cb88878 = "startingobjective";
  local_70 = "resolved";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cb8 = (ulonglong)uVar2;
  local_70 = "notstarted";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cc0 = (ulonglong)uVar2;
  local_70 = "notcompleted";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cc8 = (ulonglong)uVar2;
  local_70 = "notactive";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cd0 = (ulonglong)uVar2;
  local_70 = "active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cd8 = (ulonglong)uVar2;
  local_70 = "completed";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86ce0 = (ulonglong)uVar2;
  local_70 = "failed";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86ce8 = (ulonglong)uVar2;
  local_70 = "deactivated";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86cf0 = (ulonglong)uVar2;
  local_70 = "Locked";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88708 = (ulonglong)uVar2;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88710 = (ulonglong)uVar2;
  local_70 = "Completed";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88718 = (ulonglong)uVar2;
  local_70 = "WaitingOnMissionSet";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888b0 = (ulonglong)uVar2;
  local_70 = "Locked";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888b8 = (ulonglong)uVar2;
  local_70 = "Available";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888c0 = (ulonglong)uVar2;
  local_70 = "Kickoffing";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888c8 = (ulonglong)uVar2;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88928 = (ulonglong)uVar2;
  local_70 = "Completed";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88920 = (ulonglong)uVar2;
  local_70 = "Failed";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888d0 = (ulonglong)uVar2;
  local_70 = "Abandoned";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88720 = (ulonglong)uVar2;
  local_70 = "WaitingOnMission";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888d8 = (ulonglong)uVar2;
  local_70 = "WaitingOnDependencies";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888e0 = (ulonglong)uVar2;
  local_70 = "Kickoffing";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888e8 = (ulonglong)uVar2;
  local_70 = "Starting";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888f0 = (ulonglong)uVar2;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88930 = (ulonglong)uVar2;
  local_70 = "Dormant";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb888f8 = (ulonglong)uVar2;
  local_70 = "Deactivated_InProgress";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88990 = (ulonglong)uVar2;
  local_70 = "Deactivated_Finishing";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88998 = (ulonglong)uVar2;
  local_70 = "Deactivated_PostFinishing";
  local_68 = 0x19;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb889a0 = (ulonglong)uVar2;
  local_70 = "Deactivated_PostFinished";
  local_68 = 0x18;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb889a8 = (ulonglong)uVar2;
  local_70 = "Completed_InProgress";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88958 = (ulonglong)uVar2;
  local_70 = "Completed_Finishing";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88968 = (ulonglong)uVar2;
  local_70 = "Completed_PostFinishing";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88960 = (ulonglong)uVar2;
  local_70 = "Completed_PostFinished";
  local_68 = 0x16;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88970 = (ulonglong)uVar2;
  local_70 = "Failed_InProgress";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88938 = (ulonglong)uVar2;
  local_70 = "Failed_Finishing";
  local_68 = 0x10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88940 = (ulonglong)uVar2;
  local_70 = "Failed_PostFinishing";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88948 = (ulonglong)uVar2;
  local_70 = "Failed_PostFinished";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88950 = (ulonglong)uVar2;
  local_70 = "Completed";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88918 = (ulonglong)uVar2;
  local_70 = "Failed";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88840 = (ulonglong)uVar2;
  local_70 = "Deactivated";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb88848 = (ulonglong)uVar2;
  DAT_14cb887f8._4_4_ = 0;
  DAT_14cb88800 = 0;
  FUN_14052b5e0(&DAT_14cb887f8,"generated",0);
  _DAT_14cb88808 = "generated";
  _DAT_14cb86cf8 = L"GbxGame.EMissionUIStateFlag";
  _DAT_14cb86d00 = &DAT_14c872af8;
  _DAT_14cb86d08 = L"MissionUIStateFlagNames";
  _DAT_14cb86d10 = 0;
  uRam000000014cb86d18 = 0;
  _DAT_14cb86d20 = 0;
  uRam000000014cb86d28 = 0;
  _DAT_14cb86d29 = 0;
  uRam000000014cb86d30 = 0;
  uRam000000014cb86d31 = 0;
  atexit((_func_5014 *)&LAB_143df692d);
  _DAT_14cb86d40 = L"GbxGame.EMissionGiverUIStateFlag";
  _DAT_14cb86d48 = &DAT_14c872af8;
  _DAT_14cb86d50 = L"MissionGiverUIStateFlagNames";
  _DAT_14cb86d58 = 0;
  uRam000000014cb86d60 = 0;
  _DAT_14cb86d68 = 0;
  uRam000000014cb86d70 = 0;
  _DAT_14cb86d71 = 0;
  uRam000000014cb86d78 = 0;
  uRam000000014cb86d79 = 0;
  atexit((_func_5014 *)&LAB_143df6939);
  local_70 = "nexus";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86d88 = (ulonglong)uVar2;
  _DAT_14cb86d98 = &LAB_143df6b14;
  _DAT_14cb86da0 = 0x44408000;
  DAT_14cb86da4 = 1;
  DAT_14cb86d90 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb86d90;
  atexit((_func_5014 *)&LAB_143df6b19);
  _DAT_14cb86db0 = 0;
  uRam000000014cb86db8 = 0;
  _DAT_14cb86dc0 = 0;
  DAT_14cb86dc8 = 0;
  uRam000000014cb86dd0 = 0;
  FUN_1446ddda2(&DAT_14cb86db0,"parent");
  atexit((_func_5014 *)&LAB_143df6b4d);
  local_70 = "default_map";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb86dd8 = (ulonglong)uVar2;
  _DAT_14cb86de8 = &LAB_143df6b71;
  _DAT_14cb86df0 = 0x44404000;
  DAT_14cb86df4 = 1;
  DAT_14cb86de0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb86de0;
  atexit((_func_5014 *)&LAB_143df6b76);
  DAT_14cb86e00._4_4_ = 0;
  DAT_14cb86e08 = 0;
  FUN_14052b5e0(&DAT_14cb86e00,"ModifierType",0);
  _DAT_14cb86e10 = "ModifierType";
  DAT_14cb86e38 = 0;
  DAT_14cb86e40 = 0;
  DAT_14cb86e18 = 0;
  _DAT_14cb86e20 = 0;
  DAT_14cb86e44 = 0x80;
  DAT_14cb86e48 = 0xffffffff;
  DAT_14cb86e4c = 0;
  DAT_14cb86e58 = 0;
  DAT_14cb86e60 = 0;
  atexit(FUN_143df7c1b);
  DAT_14cb86e88 = 0;
  DAT_14cb86e90 = 0;
  DAT_14cb86e68 = 0;
  _DAT_14cb86e70 = 0;
  DAT_14cb86e94 = 0x80;
  DAT_14cb86e98 = 0xffffffff;
  DAT_14cb86e9c = 0;
  DAT_14cb86ea8 = 0;
  DAT_14cb86eb0 = 0;
  atexit(FUN_143df7e35);
  _DAT_14cb86ebc = 0;
  _DAT_14cb86ec0 = 0;
  FUN_14052b5e0(&DAT_14cb86eb8,"should_succeed",0);
  _DAT_14cb86ec8 = "should_succeed";
  _DAT_14cb86ed4 = 0;
  _DAT_14cb86ed8 = 0;
  FUN_14052b5e0(&DAT_14cb86ed0,"should_fail",0);
  _DAT_14cb86ee0 = "should_fail";
  _DAT_14cb86eec = 0;
  _DAT_14cb86ef0 = 0;
  FUN_14052b5e0(&DAT_14cb86ee8,"should_deactivate",0);
  _DAT_14cb86ef8 = "should_deactivate";
  DAT_14cb86f00._4_4_ = 0;
  DAT_14cb86f08 = 0;
  FUN_14052b5e0(&DAT_14cb86f00,&DAT_149e54500,0);
  _DAT_14cb86f10 = &DAT_149e54500;
  DAT_14cb86f18._4_4_ = 0;
  DAT_14cb86f20 = 0;
  FUN_14052b5e0(&DAT_14cb86f18,"FactExpression",0);
  _DAT_14cb86f28 = "FactExpression";
  DAT_14cb86f30._4_4_ = 0;
  _DAT_14cb86f38 = 0;
  FUN_14052b5e0(&DAT_14cb86f30,"CustomEvaluator",0);
  _DAT_14cb86f40 = "CustomEvaluator";
  DAT_14cb86f48._4_4_ = 0;
  DAT_14cb86f50 = 0;
  FUN_14052b5e0(&DAT_14cb86f48,"TaskAlias",0);
  _DAT_14cb86f58 = "TaskAlias";
  DAT_14cb86f64._0_4_ = 0;
  DAT_14cb86f64._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cb86f60,"TaskFinished",0);
  _DAT_14cb86f70 = "TaskFinished";
  DAT_14cb86f78._4_4_ = 0;
  DAT_14cb86f80 = 0;
  FUN_14052b5e0(&DAT_14cb86f78,"failwhen",0);
  _DAT_14cb86f88 = "failwhen";
  DAT_14cb86f90._4_4_ = 0;
  DAT_14cb86f98 = 0;
  FUN_14052b5e0(&DAT_14cb86f90,"deactivatewhen",0);
  _DAT_14cb86fa0 = "deactivatewhen";
  DAT_14cb86fa8._4_4_ = 0;
  DAT_14cb86fb0 = 0;
  FUN_14052b5e0(&DAT_14cb86fa8,"timetosucceed",0);
  _DAT_14cb86fb8 = "timetosucceed";
  DAT_14cb86fc0._4_4_ = 0;
  DAT_14cb86fc8 = 0;
  FUN_14052b5e0(&DAT_14cb86fc0,"busefailtimer",0);
  _DAT_14cb86fd0 = "busefailtimer";
  DAT_14cb86fd8._4_4_ = 0;
  DAT_14cb86fe0 = 0;
  FUN_14052b5e0(&DAT_14cb86fd8,"failureboundary",0);
  _DAT_14cb86fe8 = "failureboundary";
  DAT_14cb86ff0._4_4_ = 0;
  DAT_14cb86ff8 = 0;
  FUN_14052b5e0(&DAT_14cb86ff0,"bfailureboundaryfailsobjective",0);
  _DAT_14cb87000 = "bfailureboundaryfailsobjective";
  DAT_14cb87008._4_4_ = 0;
  DAT_14cb87010 = 0;
  FUN_14052b5e0(&DAT_14cb87008,"AutoResolution",0);
  _DAT_14cb87018 = "AutoResolution";
  DAT_14cb87020._4_4_ = 0;
  DAT_14cb87028 = 0;
  FUN_14052b5e0(&DAT_14cb87020,"AutoResolutionTimer",0);
  _DAT_14cb87030 = "AutoResolutionTimer";
  DAT_14cb87038._4_4_ = 0;
  DAT_14cb87040 = 0;
  FUN_14052b5e0(&DAT_14cb87038,"bTreatAutoResolutionTimerAsExpiredOnLoad",0);
  _DAT_14cb87048 = "bTreatAutoResolutionTimerAsExpiredOnLoad";
  DAT_14cb87050._4_4_ = 0;
  DAT_14cb87058 = 0;
  FUN_14052b5e0(&DAT_14cb87050,"ObjectiveBoundary",0);
  _DAT_14cb87060 = "ObjectiveBoundary";
  DAT_14cb87068._4_4_ = 0;
  DAT_14cb87070 = 0;
  FUN_14052b5e0(&DAT_14cb87068,"LeaveObjectiveBoundaryResolution",0);
  _DAT_14cb87078 = "LeaveObjectiveBoundaryResolution";
  DAT_14cb87080._4_4_ = 0;
  DAT_14cb87088 = 0;
  FUN_14052b5e0(&DAT_14cb87080,"Binders",0);
  _DAT_14cb87090 = "Binders";
  _DAT_14cb8709c = 0;
  _DAT_14cb870a0 = 0;
  FUN_14052b5e0(&DAT_14cb87098,"WaypointActor",0);
  _DAT_14cb870a8 = "WaypointActor";
  DAT_14cb870b0._4_4_ = 0;
  DAT_14cb870b8 = 0;
  FUN_14052b5e0(&DAT_14cb870b0,"WaypointOption",0);
  _DAT_14cb870c0 = "WaypointOption";
  DAT_14cb870c8._4_4_ = 0;
  DAT_14cb870d0 = 0;
  FUN_14052b5e0(&DAT_14cb870c8,"bPassWaypointToSpawnedActors",0);
  _DAT_14cb870d8 = "bPassWaypointToSpawnedActors";
  DAT_14cb870e0._4_4_ = 0;
  DAT_14cb870e8 = 0;
  FUN_14052b5e0(&DAT_14cb870e0,"WaypointRadius",0);
  _DAT_14cb870f0 = "WaypointRadius";
  DAT_14cb870f8._4_4_ = 0;
  DAT_14cb87100 = 0;
  FUN_14052b5e0(&DAT_14cb870f8,"PrimaryWaypointRuntimeActor",0);
  _DAT_14cb87108 = "PrimaryWaypointRuntimeActor";
  DAT_14cb87110._4_4_ = 0;
  DAT_14cb87118 = 0;
  FUN_14052b5e0(&DAT_14cb87110,"PrimaryWaypointStaticActor",0);
  _DAT_14cb87120 = "PrimaryWaypointStaticActor";
  DAT_14cb87128._4_4_ = 0;
  DAT_14cb87130 = 0;
  FUN_14052b5e0(&DAT_14cb87128,"PrimaryWaypointOption",0);
  _DAT_14cb87138 = "PrimaryWaypointOption";
  DAT_14cb87140._4_4_ = 0;
  DAT_14cb87148 = 0;
  FUN_14052b5e0(&DAT_14cb87140,"PrimaryWaypointSettings",0);
  _DAT_14cb87150 = "PrimaryWaypointSettings";
  local_70 = "Custom";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb87158 = (ulonglong)uVar2;
  local_70 = "Default";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb87160 = (ulonglong)uVar2;
  local_70 = "subobjectivestype";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb87168 = (ulonglong)uVar2;
  local_70 = "bCompletingOneSubObjectiveCompletesAll";
  local_68 = 0x26;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb87170 = (ulonglong)uVar2;
  DAT_14cb87178._4_4_ = 0;
  DAT_14cb87180 = 0;
  FUN_14052b5e0(&DAT_14cb87178,"UpdateCount",0);
  _DAT_14cb87188 = "UpdateCount";
  DAT_14cb87190._4_4_ = 0;
  DAT_14cb87198 = 0;
  FUN_14052b5e0(&DAT_14cb87190,"UpdateValue",0);
  _DAT_14cb871a0 = "UpdateValue";
  DAT_14cb871a8._4_4_ = 0;
  DAT_14cb871b0 = 0;
  FUN_14052b5e0(&DAT_14cb871a8,"SucceedWhen",0);
  _DAT_14cb871b8 = "SucceedWhen";
  local_70 = "damaged";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb871c0 = (ulonglong)uVar2;
  DAT_14cb871c8._4_4_ = 0;
  DAT_14cb871d0 = 0;
  FUN_14052b5e0(&DAT_14cb871c8,"subtype",0);
  _DAT_14cb871d8 = "subtype";
  local_70 = "GenericUse";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cb871e0 = (ulonglong)uVar2;
  DAT_14cb871e8._4_4_ = 0;
  DAT_14cb871f0 = 0;
  FUN_14052b5e0(&DAT_14cb871e8,"bPickupSpawnsEarly",0);
  _DAT_14cb871f8 = "bPickupSpawnsEarly";
  DAT_14cb87200._4_4_ = 0;
  DAT_14cb87208 = 0;
  FUN_14052b5e0(&DAT_14cb87200,"SubType",0);
  _DAT_14cb87210 = "SubType";
  DAT_14cb87218._4_4_ = 0;
  DAT_14cb87220 = 0;
  FUN_14052b5e0(&DAT_14cb87218,"PickupSpawner",0);
  _DAT_14cb87228 = "PickupSpawner";
  _DAT_14cb87234 = 0;
  _DAT_14cb87238 = 0;
  FUN_14052b5e0(&DAT_14cb87230,"SpawnTiming",0);
  _DAT_14cb87240 = "SpawnTiming";
  memset(&DAT_14cb87250,0,0x7f8);
  _DAT_14cb87a68 = 0;
  _DAT_14cb87a70 = 0;
  DAT_14cb87a48 = 0;
  _DAT_14cb87a50 = 0;
  _DAT_14cb87a74 = 0x80;
  _DAT_14cb87a78 = 0xffffffff;
  DAT_14cb87a7c = 0;
  DAT_14cb87a88 = 0;
  DAT_14cb87a90 = 0;
  atexit(FUN_143dfb2b4);
  memset(&DAT_14cb87aa0,0,0xbf4);
  DAT_14cb886b8 = 0;
  DAT_14cb886c0 = 0;
  DAT_14cb88698 = 0;
  _DAT_14cb886a0 = 0;
  DAT_14cb886c4 = 0x80;
  DAT_14cb886c8 = 0xffffffff;
  DAT_14cb886cc = 0;
  DAT_14cb886d8 = 0;
  DAT_14cb886e0 = 0;
  atexit(FUN_143dfb2e3);
  DAT_14cb886e8._4_4_ = 0;
  DAT_14cb886f0 = 0;
  FUN_14052b5e0(&DAT_14cb886e8,"structtype",0);
  _DAT_14cb886f8 = "structtype";
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143dfe8d4 FUN_143dfe8d4 body=1604 status=ok
// SIG undefined FUN_143dfe8d4(void)

void FUN_143dfe8d4(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined1 local_280;
  undefined8 local_270;
  uint local_268;
  uint uStack_264;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  longlong local_238;
  undefined4 local_230;
  undefined **local_208;
  longlong local_200;
  undefined4 local_1f8;
  int local_1f4;
  undefined1 local_1f0 [16];
  longlong local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  longlong local_198;
  undefined8 local_168;
  longlong lStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined **local_140;
  longlong local_138;
  undefined4 local_130;
  int local_12c;
  undefined1 local_128 [16];
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong local_d0;
  longlong local_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_14654fa7c();
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar2 == '\0') goto LAB_143dfea6b;
  uStack_264 = 0;
  if (param_3 == 0) {
    local_268 = 0;
    uVar3 = 0;
  }
  else {
    local_268 = *(uint *)(param_3 + 0xc);
    if ((int)local_268 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_268 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_268 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar3 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar3 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar8;
      }
    }
  }
  plVar5 = param_1 + 0x1f;
  plVar6 = (longlong *)param_1[0x2f];
  if ((longlong *)param_1[0x2f] == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  uStack_264 = uVar3;
  uStack_260 = param_4;
  if ((longlong)(int)param_1[0x30] == 0) {
    iVar9 = 0;
  }
  else {
    lVar10 = (longlong)(int)param_1[0x30] << 4;
    do {
      if ((plVar6[1] == uStack_260) && (cVar2 = FUN_14038330a(plVar6,&local_268), cVar2 != '\0'))
      goto LAB_143dfea6b;
      plVar6 = plVar6 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    iVar9 = (int)param_1[0x30];
  }
  *(uint *)(param_1 + 0x30) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x184) < iVar9 + 1U) {
    FUN_14892e2ca(plVar5,iVar9);
  }
  if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0x2f];
  }
  puVar1 = (uint *)(plVar5 + (longlong)iVar9 * 2);
  *puVar1 = local_268;
  puVar1[1] = uStack_264;
  puVar1[2] = (uint)uStack_260;
  puVar1[3] = uStack_260._4_4_;
  lVar10 = param_1[9];
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_140501a92();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140501a92();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        (**(code **)(*plVar6 + 0x18))(plVar6,1,lVar10 + 0xd8);
      }
    }
  }
  if ((param_3 == 0) || (param_2[0x39] != param_3)) goto LAB_143dfea6b;
  FUN_14571e546(&local_238,param_2,lVar10);
  plVar5 = (longlong *)FUN_140bede9a(param_2);
  if (plVar5 == (longlong *)0x0) {
    FUN_146558d54(&local_270,param_3,param_4);
    plVar5 = (longlong *)FUN_146558ef0(param_2,local_270);
    if (plVar5 != (longlong *)0x0) {
      FUN_14127095a(plVar5,lVar10 + 0xa0,1);
      local_168 = *(undefined8 *)(lVar10 + 0x40);
      lStack_160 = *(undefined8 *)(lVar10 + 0x48);
      local_158 = *(undefined8 *)(lVar10 + 0x50);
      uStack_150 = *(undefined8 *)(lVar10 + 0x58);
      local_258 = *(undefined8 *)(lVar10 + 0x60);
      uStack_250 = *(undefined8 *)(lVar10 + 0x68);
      local_248 = *(undefined8 *)(lVar10 + 0x70);
      local_280 = 0;
      local_288 = 0;
      FUN_144927ad4(plVar5,&local_258,&local_168,0);
      local_168 = *(undefined8 *)(lVar10 + 0x80);
      lStack_160 = *(longlong *)(lVar10 + 0x88);
      local_158 = *(ulonglong *)(lVar10 + 0x90);
      if (*(code **)(*plVar5 + 0x478) == FUN_14028a216) {
        FUN_14028a216(plVar5);
      }
      else {
        (**(code **)(*plVar5 + 0x478))(plVar5,&local_168);
      }
      FUN_14010ee68(param_2,plVar5);
      FUN_140486fc4(plVar5,param_3,0);
      if (((*(uint *)(param_2 + 1) & 0x20) == 0) && (lVar7 = FUN_1447210f0(param_2), lVar7 != 0))
      goto LAB_143dfebf1;
      goto LAB_143dfebf9;
    }
  }
  else {
    FUN_144757f48(plVar5,0x40);
    if ((*(byte *)((longlong)plVar5 + 0x9c) & 1) == 0) {
LAB_143dfebf1:
      FUN_140b506a4(plVar5);
    }
LAB_143dfebf9:
    FUN_145c8f351(&local_168,lVar10 + 0xd8,&local_238);
    FUN_145ae65e2(plVar5 + 0xd0,&local_168);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_140 = (undefined **)&DAT_14a176f00;
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    local_140 = &PTR_FUN_14a177080;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    local_130 = 0;
    if (local_12c != 0) {
      FUN_14472eb64(&local_138,0);
    }
    local_108 = 0xffffffff;
    local_110 = 0;
    if (0x80 < local_10c) {
      local_10c = 0x80;
      FUN_1446efbd8(local_128,0);
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1407778c7(lStack_160,local_158 & 0xffffffff);
    if (lStack_160 != 0) {
      FUN_1400020a8();
    }
    *(byte *)((longlong)plVar5 + 0x9c) = *(byte *)((longlong)plVar5 + 0x9c) | 0x20;
  }
  local_208 = (undefined **)&DAT_14a176f00;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  local_208 = &PTR_FUN_14a177080;
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  local_1b8 = 0;
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  local_1f8 = 0;
  if (local_1f4 != 0) {
    FUN_14472eb64(&local_200,0);
  }
  local_1d0 = 0xffffffff;
  local_1d8 = 0;
  if (0x80 < local_1d4) {
    local_1d4 = 0x80;
    FUN_1446efbd8(local_1f0,0);
  }
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  FUN_1407778c7(local_238,local_230);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
LAB_143dfea6b:
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dfef1a FUN_143dfef1a body=66 status=ok
// SIG undefined FUN_143dfef1a(void)

void FUN_143dfef1a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_2 + 0x9c) & 1) == 0) && (*(longlong *)(param_2 + 0xa8) == *param_1)) &&
     ((*(uint *)(*param_1 + 8) & 0x20) == 0)) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      FUN_140b506a4(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143dfef68 FUN_143dfef68 body=594 status=ok
// SIG undefined FUN_143dfef68(void)

void FUN_143dfef68(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    cVar2 = FUN_14069eaf4(param_1 + 0x73,0);
    if (cVar2 != '\0') {
      lVar7 = 0;
      cVar2 = FUN_14079e1ea(param_1 + 0x74,0);
      if (cVar2 == '\0') {
        return;
      }
      goto LAB_143dff0d0;
    }
LAB_143dff051:
    *(undefined4 *)(param_1 + 0x73) = 0;
    iVar3 = 0;
LAB_143dff059:
    *(int *)((longlong)param_1 + 0x39c) = iVar3;
    (**(code **)(*param_1 + 0x638))(param_1);
    cVar2 = FUN_14079e1ea(param_1 + 0x74,0);
    if (cVar2 == '\0') {
      return;
    }
    if (param_2 != 0) goto LAB_143dff082;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0xa8);
    cVar2 = FUN_14069eaf4(param_1 + 0x73,lVar7);
    if (cVar2 == '\0') {
      if (lVar7 == 0) goto LAB_143dff051;
      uVar1 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 0x73) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar5;
        }
      }
      goto LAB_143dff059;
    }
    cVar2 = FUN_14079e1ea(param_1 + 0x74,0);
    if (cVar2 == '\0') {
      return;
    }
LAB_143dff082:
    if (*(int *)(param_2 + 0x7ac) != 0) {
      uVar1 = *(uint *)(param_2 + 0x7a8);
      lVar7 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143dff0d0;
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         (((int)plVar4[2] == *(int *)(param_2 + 0x7ac) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
        lVar7 = *plVar4;
        goto LAB_143dff0d0;
      }
    }
  }
  lVar7 = 0;
LAB_143dff0d0:
  puVar6 = (uint *)(param_1 + 0x74);
  cVar2 = FUN_14069eaf4(puVar6,lVar7);
  if (cVar2 != '\0') {
    return;
  }
  if (lVar7 == 0) {
    *puVar6 = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    *puVar6 = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x3a4) = iVar3;
  param_1[0x75] = 0;
                    /* WARNING: Could not recover jumptable at 0x000143dff13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 143dff222 FUN_143dff222 body=126 status=ok
// SIG undefined FUN_143dff222(void)

void FUN_143dff222(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((((*(byte *)(param_1 + 0x9f) & 0x20) == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) != '\x03')) {
    return;
  }
  if (*(int *)(param_1 + 0x7a4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7a0);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x7a4))) {
        FUN_146196d7e();
        return;
      }
    }
  }
  cVar2 = FUN_144729dda(param_1 + 0x7a0);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x7a0);
    FUN_141607fe6(uVar3,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 143dff2a0 FUN_143dff2a0 body=1034 status=ok
// SIG undefined FUN_143dff2a0(void)

void FUN_143dff2a0(longlong param_1,longlong param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (((((*(byte *)(param_1 + 0x9f) & 0x20) == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) ||
      (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) != '\x03')) ||
     ((((*(int *)(param_1 + 0x7a4) == 0 || (uVar1 = *(uint *)(param_1 + 0x7a0), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        ((puVar7 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar7 == (undefined8 *)0x0 || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x7a4))))))) ||
      ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
    return;
  }
  if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
    plVar6 = (longlong *)*puVar7;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(int *)((longlong)plVar6 + 0x39c) == 0) {
LAB_143dff3c0:
    puVar4 = (uint *)(plVar6 + 0x72);
  }
  else {
    puVar4 = (uint *)(plVar6 + 0x73);
    uVar1 = *puVar4;
    if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
        (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 == 0)) ||
       ((*(int *)(lVar8 + 0x10) != *(int *)((longlong)plVar6 + 0x39c) ||
        ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_143dff3c0;
  }
  if (puVar4[1] == 0) {
LAB_143dff412:
    lVar8 = 0;
  }
  else {
    uVar1 = *puVar4;
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((*(uint *)(plVar3 + 2) != puVar4[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) ||
          (*plVar3 == 0)))) goto LAB_143dff412;
      lVar8 = FUN_140bede9a();
    }
  }
  if (*(int *)((longlong)plVar6 + 0x3a4) == 0) {
LAB_143dff604:
    lVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(plVar6 + 0x74);
    lVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)((longlong)plVar6 + 0x3a4) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_143dff604;
      lVar9 = *plVar3;
    }
  }
  if (lVar9 == param_2) goto LAB_143dff599;
  if (param_2 == 0) {
    plVar6[0x74] = 0;
    if (lVar8 != 0) goto LAB_143dff5f6;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(plVar6 + 0x74) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar2 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar2 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar2 = iVar5;
      }
    }
    *(int *)((longlong)plVar6 + 0x3a4) = iVar2;
    iVar5 = DAT_14c9647dc;
    lVar9 = DAT_14c9647c8;
    if (lVar8 != 0) {
      if ((((iVar2 == 0) || (uVar1 = *(uint *)(plVar6 + 0x74), (int)uVar1 < 0)) ||
          (DAT_14c9647dc <= (int)uVar1)) ||
         (((plVar3 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar3 == (longlong *)0x0 || ((int)plVar3[2] != iVar2)) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) {
LAB_143dff5f6:
        *(undefined4 *)(lVar8 + 0x7a8) = 0;
        iVar2 = 0;
      }
      else {
        if (*plVar3 == 0) goto LAB_143dff5f6;
        uVar1 = *(uint *)(*plVar3 + 0xc);
        *(uint *)(lVar8 + 0x7a8) = uVar1;
        if ((int)uVar1 < iVar5) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar2 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar2 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar2 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar5;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar2 = iVar5;
          }
        }
      }
      *(int *)(lVar8 + 0x7ac) = iVar2;
      if (*(longlong **)(lVar8 + 0xa8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar8 + 0xa8) + 0x578))();
      }
    }
  }
  plVar6[0x75] = 0;
  (**(code **)(*plVar6 + 0x640))(plVar6);
LAB_143dff599:
  if (lVar8 != 0) {
    (**(code **)(*plVar6 + 0x670))(plVar6,lVar8);
  }
  FUN_143e00b0a(plVar6,ABS(param_3),0xffffffff,param_3 < 0.0);
  return;
}



// FUNCTION 143dff6aa FUN_143dff6aa body=365 status=ok
// SIG undefined FUN_143dff6aa(void)

void FUN_143dff6aa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    plVar1 = (longlong *)(param_1 + 0x7b0);
    local_50 = *param_2;
    local_48 = param_2[1];
    FUN_1403350f6(plVar1,&local_50);
    iVar4 = *(int *)(param_1 + 0x7b8);
    if (0 < iVar4) {
      lVar5 = 0;
      bVar6 = false;
      do {
        while( true ) {
          lVar3 = *plVar1;
          _Dst = (uint *)(lVar3 + lVar5 * 0x10);
          if (((((*(longlong *)(lVar3 + 8 + lVar5 * 0x10) != 0) && (_Dst[1] != 0)) &&
               (uVar2 = *_Dst, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (plVar8 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0)))) &&
             ((*(uint *)(plVar8 + 2) == _Dst[1] &&
              (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 && (*plVar8 != 0)))))) break;
          iVar7 = iVar4 + ~(uint)lVar5;
          if (iVar7 != 0) {
            if (0 < iVar7) {
              iVar7 = 1;
            }
            memmove(_Dst,(void *)(lVar3 + (longlong)(iVar4 - iVar7) * 0x10),(longlong)iVar7 << 4);
            iVar4 = *(int *)(param_1 + 0x7b8);
          }
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x7b8) = iVar4;
          bVar6 = true;
          if (iVar4 <= lVar5) goto LAB_143dff80e;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
      if (bVar6) {
LAB_143dff80e:
        FUN_1400bbcfc(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143dff818 FUN_143dff818 body=3171 status=ok
// SIG undefined FUN_143dff818(void)

void FUN_143dff818(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint3 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined1 local_160;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined2 local_130 [2];
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  ulonglong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(int *)(param_1 + 0x798) == 1) && (*(char *)(param_1 + 0x8e4) != '\0')) {
    *(undefined1 *)(param_1 + 0x8e4) = 0;
  }
  FUN_1401c3c2c(param_1);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0x820) == '\0') {
      puVar5 = &DAT_14c846480;
      goto LAB_143dff8e9;
    }
  }
  else {
    if ((char)plVar2[0x2f] == '\x03') {
      if ((*(byte *)((longlong)plVar2 + 99) & 8) == 0) {
        FUN_140c7ce82(plVar2,1);
      }
      if ((char)*(byte *)(plVar2 + 0xc) < '\0') {
        *(byte *)(plVar2 + 0xc) = *(byte *)(plVar2 + 0xc) | 8;
      }
    }
    if (*(char *)(param_1 + 0x820) == '\0') {
      puVar5 = &DAT_14c846480;
      if (plVar2[0x39] != 0) {
        puVar5 = (undefined8 *)(plVar2[0x39] + 0x240);
      }
LAB_143dff8e9:
      puVar15 = (undefined8 *)(param_1 + 0x7c0);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      *(undefined1 *)(param_1 + 0x820) = 1;
    }
  }
  FUN_14655903e(&local_138);
  FUN_146558fac(param_1 + 0x599,param_1,local_138);
  FUN_146559182(&local_140);
  FUN_1465590f0(param_1 + 0x59a,param_1,local_140);
  if (*(int *)(param_1 + 0x798) == 1) {
    lVar9 = *(longlong *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar4 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar4 = *(int *)(lVar16 + 0x10);
        bVar18 = iVar4 == 0;
        if (bVar18) {
          *(int *)(lVar16 + 0x10) = iVar12;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar4 = iVar12;
        }
      }
      if (((lVar9 != 0) && (iVar4 != 0)) && ((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == iVar4)) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            plVar7 = (longlong *)*puVar5;
          }
          else {
            plVar7 = (longlong *)0x0;
          }
          local_f8 = (**(code **)(*plVar7 + 0x570))();
          if (((((int)uVar1 < DAT_14c9647dc) &&
               (puVar5 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               puVar5 != (undefined8 *)0x0)) && (*(int *)(puVar5 + 2) == iVar4)) &&
             ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
            plVar7 = (longlong *)*puVar5;
          }
          else {
            plVar7 = (longlong *)0x0;
          }
          (**(code **)(*plVar7 + 0x720))(plVar7,0);
          local_148 = (undefined1 *)0x0;
          if (*(longlong *)(lVar9 + 0x1f0) == 0) {
            puVar5 = (undefined8 *)(lVar9 + 0x458);
          }
          else {
            puVar5 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
          }
          uStack_100 = CONCAT44(iVar4,uVar1);
          local_88 = &PTR_LAB_14b41ee80;
          local_128 = &LAB_143e06336;
          local_118 = 0;
          local_98 = (undefined ***)0x0;
          local_108 = &PTR_LAB_14b41ee80;
          local_f4 = CONCAT44(uStack_70,uStack_74);
          local_ec = uStack_6c;
          local_a8 = 0;
          local_e8 = CONCAT71(local_e8._1_7_,3);
          local_168 = local_130;
          local_130[0] = 0;
          local_12c = 0xbf800000;
          uStack_80 = uStack_100;
          local_78 = local_f8;
          FUN_1406f4044(*puVar5,&local_148,&local_128,0x3f800000);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_e8 & 0xff])(&local_128);
          if (local_a8 != 0) {
            pppuVar10 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar10 = &local_88;
            }
            (*(code *)(*pppuVar10)[2])();
          }
        }
      }
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x400) + 0xc0;
    lVar9 = (longlong)*(int *)(param_1 + 0x408) * 0x108;
    do {
      if ((*(int *)(lVar16 + 0x24) == 0) || (uVar1 = *(uint *)(lVar16 + 0x20), (int)uVar1 < 0)) {
LAB_143dffdd3:
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != *(int *)(lVar16 + 0x24)))
             || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_143dffdd3;
          uVar6 = *puVar5;
        }
      }
      uVar8 = FUN_14485cccc(lVar16);
      local_160 = 0;
      FUN_1416424cc(param_1,param_1,uVar8,uVar6);
      lVar16 = lVar16 + 0x108;
      lVar9 = lVar9 + -0x108;
    } while (lVar9 != 0);
  }
  *(undefined8 *)(param_1 + 0x828) = DAT_14c872be0;
  if ((plVar2 == (longlong *)0x0) || ((char)plVar2[0x2f] != '\x03')) {
LAB_143dffdea:
    puVar17 = (undefined1 *)0x0;
  }
  else {
    uVar6 = FUN_140437988();
    lVar9 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar6);
    if (lVar9 == 0) {
LAB_143dffc2e:
      lVar16 = 0;
    }
    else {
      uVar6 = FUN_140437988();
      lVar16 = FUN_144718840(lVar9,uVar6);
      if (lVar9 == lVar16) goto LAB_143dffc2e;
    }
    FUN_14078a6f4(&local_128,lVar16);
    *(uint *)(param_1 + 0x850) = (uint)local_128;
    *(undefined4 *)(param_1 + 0x854) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0x858) = (undefined4)uStack_120;
    *(undefined4 *)(param_1 + 0x85c) = uStack_120._4_4_;
    if (((*(int *)(param_1 + 0x680) != 2) || (*(longlong **)(param_1 + 0x858) == (longlong *)0x0))
       || (*(int *)(param_1 + 0x854) == 0)) goto LAB_143dffdea;
    uVar1 = *(uint *)(param_1 + 0x850);
    puVar17 = (undefined1 *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar9 != 0) &&
         ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x854) &&
          ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
        plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
        local_128 = &LAB_143e0047c;
        uStack_120 = uStack_120 & 0xffffffff00000000;
        FUN_14574126e(plVar7 + 0xb,&local_a8,param_1);
        if ((DAT_14cb88a10 != 0) && ((longlong)(int)plVar7[1] != 0)) {
          puVar17 = (undefined1 *)0x0;
          uVar11 = 0;
          do {
            if (*(longlong *)(*plVar7 + 0x68 + uVar11) == DAT_14cb88a10) {
              if ((int)(uVar11 >> 3) * -0xf0f0f0f == -1) goto LAB_143dffdea;
              local_a8 = DAT_14cb88a10;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
              FUN_140c823b2(plVar7,&local_128);
              puVar17 = local_128;
              break;
            }
            uVar11 = uVar11 + 0x88;
          } while ((longlong)(int)plVar7[1] * 0x88 != uVar11);
          goto LAB_143dffded;
        }
      }
      goto LAB_143dffdea;
    }
  }
LAB_143dffded:
  iVar4 = *(int *)(param_1 + 0x690);
  iVar12 = -1;
  if (0 < iVar4) {
    iVar14 = 0;
    iVar12 = -1;
    do {
      if (((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x680) == 2)) &&
           ((char)plVar2[0x2f] == '\x03')) &&
          ((*(longlong *)(param_1 + 0x858) != 0 && (*(int *)(param_1 + 0x854) != 0)))) &&
         (((uVar1 = *(uint *)(param_1 + 0x850), -1 < (int)uVar1 &&
           (((int)uVar1 < DAT_14c9647dc &&
            (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0))))
          && ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x854) &&
              ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) {
        FUN_14072fffd(&local_150,iVar14);
        if (puVar17 == local_150) {
          iVar12 = iVar14;
        }
        iVar4 = *(int *)(param_1 + 0x690);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar4);
  }
  uVar13 = 1;
  FUN_146067c50(param_1,0,1);
  if (*(int *)(param_1 + 0x798) == 2) {
    uVar13 = *(undefined1 *)(param_1 + 0x8e5);
  }
  else if (*(int *)(param_1 + 0x798) == 1) {
    uVar13 = *(undefined1 *)(param_1 + 0x8e4);
  }
  FUN_146067d2e(param_1,uVar13,1);
  if (plVar2 == (longlong *)0x0) goto LAB_143e002b5;
  if ((char)plVar2[0x2f] == '\x03') {
    if (((*(longlong *)(param_1 + 0xb0) != 0) || (lVar9 = FUN_1448abda6(), lVar9 != 0)) &&
       (*(int *)(param_1 + 0x680) != 0)) {
      local_108 = (undefined **)0x0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      local_f4 = CONCAT44(local_f4._4_4_,8);
      local_e8 = 0;
      local_d8 = (longlong *)0x0;
      uVar3 = CONCAT12(local_f8._2_1_,0x100);
      local_f8 = (uint)(uVar3 & 0xe0ffff | 0x40000);
      iVar4 = *(int *)(param_1 + 0x78c);
      if (iVar4 == 3) {
        lVar9 = FUN_145b7b60c();
LAB_143dfff95:
        if (lVar9 != 0) {
          lVar16 = *(longlong *)(param_1 + 0xb0);
          if (lVar16 == 0) {
            lVar16 = FUN_1448abda6(param_1);
          }
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = (undefined ***)0x0;
          uStack_90 = 0;
          uStack_8c = 0x3ff00000;
          local_88 = (undefined **)0x0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = 0;
          uStack_64 = 0x3ff00000;
          uStack_60 = 0;
          uStack_5c = 0x3ff00000;
          local_58 = 0x3ff0000000000000;
          uStack_50 = 0;
          lVar9 = FUN_141037e38(lVar16,lVar9,&local_a8,&local_128);
          if (lVar9 == 0) {
            *(undefined4 *)(param_1 + 0x7a0) = 0;
            iVar4 = 0;
          }
          else {
            uVar1 = *(uint *)(lVar9 + 0xc);
            *(uint *)(param_1 + 0x7a0) = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar4 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar14 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar14);
              }
              LOCK();
              iVar4 = *(int *)(lVar9 + 0x10);
              bVar18 = iVar4 == 0;
              if (bVar18) {
                *(int *)(lVar9 + 0x10) = iVar14;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar4 = iVar14;
              }
            }
          }
          *(int *)(param_1 + 0x7a4) = iVar4;
        }
      }
      else {
        if (iVar4 == 2) {
          lVar9 = FUN_145a82336();
          goto LAB_143dfff95;
        }
        if (iVar4 == 1) {
          lVar9 = FUN_14595c908();
          goto LAB_143dfff95;
        }
      }
      iVar4 = DAT_14c9647dc;
      lVar9 = DAT_14c9647c8;
      if ((((*(int *)(param_1 + 0x7a4) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x7a0), -1 < (int)uVar1)) &&
          (((int)uVar1 < DAT_14c9647dc &&
           ((puVar5 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x7a4)))))))
         && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          plVar7 = (longlong *)*puVar5;
        }
        else {
          plVar7 = (longlong *)0x0;
        }
        plVar7[0x72] = 0;
        if (param_1 != 0) {
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            *(undefined4 *)(plVar7 + 0x72) = 0;
            iVar4 = 0;
          }
          else {
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xc);
            *(uint *)(plVar7 + 0x72) = uVar1;
            if ((int)uVar1 < iVar4) {
              lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar4 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar14 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar14);
              }
              LOCK();
              iVar4 = *(int *)(lVar9 + 0x10);
              bVar18 = iVar4 == 0;
              if (bVar18) {
                *(int *)(lVar9 + 0x10) = iVar14;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar4 = iVar14;
              }
            }
          }
          *(int *)((longlong)plVar7 + 0x394) = iVar4;
          (**(code **)(*plVar7 + 0x578))(plVar7);
        }
        if ((*(byte *)((longlong)plVar7 + 0x65) & 0x18) == 0x10) {
          (**(code **)(*plVar7 + 0x638))(plVar7);
        }
        if (*(int *)(param_1 + 0x7a4) == 0) {
LAB_143e00380:
          uVar6 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x7a0);
          uVar6 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar5 == (undefined8 *)0x0) ||
               ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x7a4) ||
                ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143e00380;
            uVar6 = *puVar5;
          }
        }
        puVar5 = &DAT_14c846480;
        if (plVar2[0x39] != 0) {
          puVar5 = (undefined8 *)(plVar2[0x39] + 0x240);
        }
        local_168 = (undefined2 *)((ulonglong)local_168 & 0xffffffffffffff00);
        FUN_14113775c(uVar6,puVar5,0,0);
        (**(code **)(*plVar2 + 0x578))(plVar2);
      }
      if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x690))) {
        FUN_146196d7e(param_1,iVar12,*(undefined1 *)(param_1 + 0x730));
      }
      if (local_e8 != 0) {
        plVar7 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar7 = local_c8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if ((char)plVar2[0x2f] != '\x03') goto LAB_143e0021d;
  }
  else {
LAB_143e0021d:
    if (((((*(int *)(param_1 + 0x7a4) != 0) && (uVar1 = *(uint *)(param_1 + 0x7a0), -1 < (int)uVar1)
          ) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x7a4))))) &&
       ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar6 = *puVar5;
      }
      else {
        uVar6 = 0;
      }
      FUN_143dfef68(uVar6,param_1);
    }
  }
  if (plVar2[0x39] != 0) {
    local_128 = &LAB_14152bf28;
    uStack_120 = uStack_120 & 0xffffffff00000000;
    FUN_146559234(plVar2[0x39] + 0x200,&local_a8,param_1);
  }
LAB_143e002b5:
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_1);
  }
  FUN_1458892d2(lVar9,param_1,1);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e00508 FUN_143e00508 body=563 status=ok
// SIG undefined FUN_143e00508(void)

void FUN_143e00508(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  FUN_1458892d2(lVar6,param_1,0);
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x1c8) != 0) {
      FUN_140457ffc(*(longlong *)(lVar6 + 0x1c8) + 0x200,param_1);
    }
    if (((((*(char *)(lVar6 + 0x178) == '\x03') && (*(int *)(param_1 + 0x7a4) != 0)) &&
         (uVar2 = *(uint *)(param_1 + 0x7a0), -1 < (int)uVar2)) &&
        (((int)uVar2 < DAT_14c9647dc &&
         (puVar8 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         puVar8 != (undefined8 *)0x0)))) &&
       ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x7a4) &&
        ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        uVar7 = *puVar8;
      }
      else {
        uVar7 = 0;
      }
      FUN_140aeefbc(uVar7,0,1);
      *(undefined8 *)(param_1 + 0x7a0) = 0;
    }
  }
  if ((*(longlong **)(param_1 + 0x858) != (longlong *)0x0) && (*(int *)(param_1 + 0x854) != 0)) {
    puVar1 = (uint *)(param_1 + 0x850);
    uVar2 = *puVar1;
    if (((-1 < (int)uVar2) &&
        ((((int)uVar2 < DAT_14c9647dc &&
          (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x854))))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
      FUN_140457ffc(lVar6 + 0x40,param_1);
      FUN_140457ffc(lVar6 + 0x58,param_1);
      puVar1[0] = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x858) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x838);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x830);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar6 + 8 + lVar10);
      if ((((lVar5 != 0) && (iVar4 = *(int *)(lVar6 + 4 + lVar10), iVar4 != 0)) &&
          ((uVar2 = *(uint *)(lVar6 + lVar10), -1 < (int)uVar2 &&
           (((int)uVar2 < DAT_14c9647dc &&
            (lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0))))))
         && ((*(int *)(lVar9 + 0x10) == iVar4 && ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
        FUN_148927d6e(lVar5,param_1);
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x838) = 0;
  if (*(int *)(param_1 + 0x83c) < 0) {
    FUN_14892e974(param_1 + 0x830);
  }
  FUN_140ceb1a0(param_1 + 0x599,param_1);
  FUN_140ceb202(param_1 + 0x59a,param_1);
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 143e00748 FUN_143e00748 body=546 status=ok
// SIG undefined FUN_143e00748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e00748(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  char local_3c;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 != 0) && (param_2[0x8a] == param_4)) {
    (**(code **)(*param_2 + 0x7a8))(param_2,0,0,1);
  }
  if (param_3 == 0) {
    if (((param_4 != 0) && (*(char *)(param_4 + 0x754) == '\x01')) &&
       (plVar3 = (longlong *)param_2[0x86], plVar3 != (longlong *)0x0)) {
      lVar5 = FUN_140993a2e();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        FUN_14880fa40(plVar3,&local_38,param_4);
        plVar3[0x25] = (longlong)(local_38 + (double)plVar3[0x25]);
        plVar3[0x26] = (longlong)(local_30 + (double)plVar3[0x26]);
        plVar3[0x27] = (longlong)(local_28 + (double)plVar3[0x27]);
        (**(code **)(*plVar3 + 0x4d0))(plVar3);
        iVar2 = *(int *)(param_4 + 0x770);
        if (iVar2 != 0) {
          dVar7 = (double)plVar3[0x25] * (double)plVar3[0x25] +
                  (double)plVar3[0x26] * (double)plVar3[0x26];
          if (*(char *)(param_4 + 0x780) == '\0') {
            dVar7 = dVar7 + (double)plVar3[0x27] * (double)plVar3[0x27];
          }
          fVar6 = (float)SQRT(dVar7);
          fVar1 = *(float *)(param_4 + 0x77c);
          if (fVar1 < fVar6) {
            local_48 = 1.0;
            local_40 = 400.0;
            uVar4 = DAT_1499319a0;
            if (iVar2 == 2) {
              local_48 = *(float *)(param_4 + 0x778);
              local_40 = (float)(-(uint)(0.0001 < local_48) & uVar4 &
                                (uint)((float)((uint)(fVar6 - fVar1) & uVar4) / local_48));
            }
            else if (iVar2 == 1) {
              local_40 = *(float *)(param_4 + 0x774);
              local_48 = (float)(-(uint)(0.0001 < local_40) & uVar4 &
                                (uint)((float)((uint)(fVar6 - fVar1) & uVar4) / local_40));
            }
            local_44 = fVar1;
            local_3c = *(char *)(param_4 + 0x780);
            FUN_14880fc0a(plVar3,&local_48);
          }
        }
      }
    }
  }
  else if (*(char *)(param_3 + 0x754) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e00984 FUN_143e00984 body=389 status=ok
// SIG undefined FUN_143e00984(void)

void FUN_143e00984(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 8;
    do {
      lVar5 = lVar5 + -8;
      cVar1 = FUN_14892ebae(lVar3,param_2);
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 8;
    } while (lVar5 != 0);
  }
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0xb0) == 0)) &&
      (lVar5 = FUN_1448abda6(param_2), lVar5 != 0)) && (*(longlong *)(param_2 + 0xb0) == 0)) {
    FUN_1448abda6(param_2);
  }
  local_2c = 0;
  if (param_2 == 0) {
    local_30 = 0;
    iVar2 = 0;
  }
  else {
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_2c = iVar2;
  FUN_1489283b2(param_1 + 0x18);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_148928344(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e00b0a FUN_143e00b0a body=266 status=ok
// SIG undefined FUN_143e00b0a(void)

void FUN_143e00b0a(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0x98] + 1;
  *(int *)(param_1 + 0x98) = iVar2;
  lVar1 = FUN_146559cb0();
  *(int *)(param_1 + 0x78) = iVar2;
  param_1[0x79] = lVar1;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x3ff00000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3ff00000;
  param_1[0x86] = 0x3ff0000000000000;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3ff00000;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3ff00000;
  param_1[0x92] = 0x3ff0000000000000;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x4a6) = param_4;
  *(undefined4 *)(param_1 + 0x95) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined1 *)(param_1 + 0x96) = 1;
  FUN_14578370a(param_1,1);
  *(undefined4 *)((longlong)param_1 + 0x3b4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000143e00c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x648))(param_1);
  return;
}



// FUNCTION 143e00c14 FUN_143e00c14 body=359 status=ok
// SIG undefined FUN_143e00c14(void)

void FUN_143e00c14(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  
  FUN_1405f1eac();
  (**(code **)(*param_1 + 0x638))(param_1);
  param_1[0x75] = 0;
  (**(code **)(*param_1 + 0x640))(param_1);
  if (*(int *)((longlong)param_1 + 0x394) != 0) {
    puVar4 = (uint *)(param_1 + 0x72);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar5 != 0) &&
         (((*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x394) &&
           ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) && ((char)param_1[0x2f] == '\x03')))) {
        if (*(int *)((longlong)param_1 + 0x39c) != 0) {
          uVar1 = *(uint *)(param_1 + 0x73);
          if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
             ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
              ((*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x39c) &&
               ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
            puVar4 = (uint *)(param_1 + 0x73);
          }
        }
        if (((puVar4[1] != 0) && (uVar1 = *puVar4, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
           ) {
          plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == puVar4[1])) &&
             (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
            lVar5 = FUN_140bede9a();
            if (lVar5 != 0) {
              FUN_1489284c6(param_1,lVar5);
            }
          }
        }
      }
    }
  }
  uVar2 = FUN_1447210f0(param_1);
  FUN_1458374b6(uVar2,param_1,1);
  return;
}



// FUNCTION 143e00d7c FUN_143e00d7c body=1393 status=ok
// SIG undefined FUN_143e00d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_143e00d7c(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar14 = (undefined8 *)(param_3 + 0x7c0);
  pauVar15 = param_2;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined8 *)*pauVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
  }
  lVar12 = FUN_148928538(param_1);
  if ((lVar12 != 0) && (*(char *)(param_1 + 0x4b0) == '\x01')) {
    uVar29 = *(undefined4 *)param_2[2];
    uVar30 = *(undefined4 *)(param_2[2] + 4);
    uVar31 = *(undefined4 *)(param_2[2] + 8);
    uVar32 = *(undefined4 *)(param_2[2] + 0xc);
    uVar33 = *(undefined8 *)param_2[3];
    local_118 = *(ulonglong *)*param_2;
    uStack_110 = *(undefined8 *)(*param_2 + 8);
    local_108 = *(undefined4 *)param_2[1];
    uStack_104 = *(undefined4 *)(param_2[1] + 4);
    uStack_100 = *(undefined4 *)(param_2[1] + 8);
    uStack_fc = *(undefined4 *)(param_2[1] + 0xc);
    FUN_1448052ee(&local_118,&local_f8);
    if (*(int *)(param_3 + 0x740) == 0) {
      lVar13 = *(longlong *)(param_3 + 0x728) + 0x30;
      if (*(longlong *)(param_3 + 0x728) == 0) {
        lVar13 = param_3 + 0x6a8;
      }
      if (lVar13 != 0) {
        *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x4cc);
        fVar28 = 0.0;
        fVar16 = (float)FUN_1448c9f94();
        if (*(char *)(param_3 + 0x744) == '\x01') {
          if (0 < (longlong)*(int *)(lVar12 + 0x670)) {
            fVar28 = *(float *)(*(longlong *)(lVar12 + 0x668) + -0x14 +
                               (longlong)*(int *)(lVar12 + 0x670) * 0x14);
          }
          fVar21 = *(float *)(param_1 + 0x4d4) - *(float *)(param_1 + 0x4d0);
          if (ABS(fVar21) <= 1e-08) {
            fVar21 = (float)(-(uint)(*(float *)(param_1 + 0x4d4) <= fVar16) & 0x3f800000);
          }
          else {
            fVar21 = (fVar16 - *(float *)(param_1 + 0x4d0)) / fVar21;
          }
          if (1.0 <= fVar21) {
            fVar21 = 1.0;
          }
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          fVar16 = fVar21 * fVar28 + 0.0;
          if (*(char *)(param_1 + 0x4a6) != '\0') {
            fVar16 = fVar28 - fVar16;
          }
        }
        *(float *)(param_1 + 0x4ac) = fVar16;
        local_118 = local_118 & 0xffffffff00000000;
        FUN_140753fde(lVar12 + 0x668);
        FUN_140703b8c(lVar12,&local_118);
        uVar29 = (undefined4)local_118;
        uVar30 = local_118._4_4_;
        uVar31 = (undefined4)uStack_110;
        uVar32 = uStack_110._4_4_;
        uVar33 = CONCAT44(uStack_104,local_108);
        FUN_147a207fa(lVar12,&local_f8);
      }
    }
    else if (*(int *)(param_3 + 0x740) == 1) {
      fVar28 = *(float *)(lVar12 + 0x68c);
      *(float *)(param_1 + 0x4a0) = fVar28;
      fVar16 = *(float *)(param_1 + 0x3d0);
      if (fVar28 <= *(float *)(param_1 + 0x3d0)) {
        fVar16 = fVar28;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (*(char *)(param_1 + 0x4a6) != '\0') {
        fVar16 = fVar28 - fVar16;
      }
      local_128 = 0;
      FUN_147a1f6fc(lVar12,&local_118);
      uVar29 = (undefined4)local_118;
      uVar30 = local_118._4_4_;
      uVar31 = (undefined4)uStack_110;
      uVar32 = uStack_110._4_4_;
      uVar33 = CONCAT44(uStack_104,local_108);
      local_128 = 0;
      FUN_147a20c86(lVar12,&local_f8);
      *(float *)(param_1 + 0x4ac) = fVar16;
    }
    if (*(int *)(param_3 + 0x748) == 2) {
      local_e8 = DAT_14c846508;
      local_f8 = DAT_14c8464f8;
      dStack_f0 = DAT_14c846500;
    }
    else if (*(int *)(param_3 + 0x748) == 1) {
      local_f8 = 0.0;
      local_e8 = 0.0;
    }
    auVar18._8_8_ = dStack_f0;
    auVar18._0_8_ = local_f8;
    auVar18 = divpd(auVar18,_DAT_1499387d0);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_e8;
    auVar23 = divpd(auVar23,_DAT_1499387d0);
    auVar18 = roundpd(auVar18,auVar18,3);
    auVar23 = roundpd(auVar23,auVar23,3);
    dVar9 = (local_f8 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar10 = (dStack_f0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar11 = (local_e8 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar17 = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar20 = sin(dVar9);
    dVar4 = sin(dVar10);
    dVar5 = sin(dVar11);
    sin(dVar17);
    dVar9 = cos(dVar9);
    dVar10 = cos(dVar10);
    dVar11 = cos(dVar11);
    cos(dVar17);
    dVar22 = -(dVar10 * dVar20 * dVar5) + dVar4 * dVar9 * dVar11;
    dVar25 = dVar4 * dVar20 * dVar5 + dVar10 * dVar9 * dVar11;
    dVar17 = dVar20 * dVar4 * dVar11 - dVar9 * dVar10 * dVar5;
    dVar20 = -(dVar20 * dVar10 * dVar11) - dVar9 * dVar4 * dVar5;
    if (*(char *)(param_3 + 0x745) == '\x01') {
      dVar5 = *(double *)(param_3 + 0x7d8);
      dVar4 = *(double *)(param_3 + 0x7d8);
      dVar10 = *(double *)(param_3 + 0x7c0);
      dVar9 = *(double *)(param_3 + 0x7c0);
      dVar26 = dVar10 * dVar20;
      dVar27 = dVar9 * dVar17;
      dVar1 = *(double *)(param_3 + 0x7c8);
      dVar11 = *(double *)(param_3 + 0x7c8);
      dVar6 = dVar17 * dVar1;
      dVar7 = dVar20 * dVar11;
      dVar2 = *(double *)(param_3 + 2000);
      dVar24 = *(double *)(param_3 + 2000);
      dVar19 = dVar17 * dVar24;
      dVar24 = dVar22 * dVar24;
      dVar17 = dVar20 * dVar2 * -1.0 + dVar22 * dVar1 + dVar25 * dVar10 * 1.0 + dVar17 * dVar5;
      dVar20 = dVar19 * 1.0 + dVar25 * dVar11 + dVar22 * dVar9 * -1.0 + dVar20 * dVar4;
      dVar22 = dVar25 * dVar2 * 1.0 + ((dVar26 * 1.0 + dVar5 * dVar22) - dVar6);
      dVar25 = dVar24 * -1.0 + ((dVar27 * -1.0 + dVar4 * dVar25) - dVar7);
    }
    *(undefined4 *)param_2[2] = uVar29;
    *(undefined4 *)(param_2[2] + 4) = uVar30;
    *(undefined4 *)(param_2[2] + 8) = uVar31;
    *(undefined4 *)(param_2[2] + 0xc) = uVar32;
    *(undefined8 *)param_2[3] = uVar33;
    *(undefined8 *)(param_2[3] + 8) = 0;
    auVar3._8_4_ = SUB84(dVar20,0);
    auVar3._0_8_ = dVar17;
    auVar3._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *param_2 = auVar3;
    auVar8._8_4_ = SUB84(dVar25,0);
    auVar8._0_8_ = dVar22;
    auVar8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    param_2[1] = auVar8;
  }
  if ((local_e0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e012ee FUN_143e012ee body=911 status=ok
// SIG undefined FUN_143e012ee(void)

ulonglong FUN_143e012ee(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  if (*(char *)(param_2 + 0x790) != '\x01') {
    iVar2 = *(int *)(param_1 + 0x394);
    if (((iVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x390), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) {
      uVar8 = 0;
      uVar7 = uVar8;
      if (((DAT_00000063 & 8) != 0) || (uVar7 = 0, *(char *)(param_2 + 0x9c) < '\0'))
      goto LAB_143e015ed;
    }
    else {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar2 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar9;
      }
      uVar7 = 0;
      if (((*(byte *)(lVar4 + 99) & 8) != 0) || (*(char *)(param_2 + 0x9c) < '\0'))
      goto LAB_143e015ed;
      if (((int)uVar1 < DAT_14c9647dc) &&
         (((puVar6 = (ulonglong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == iVar2)) &&
          ((puVar6[1] & 0x10200000) == 0)))) {
        uVar8 = *puVar6;
      }
      else {
        uVar8 = 0;
      }
    }
    if ((*(longlong *)(uVar8 + 0x1c8) == 0) || (-1 < *(char *)(*(longlong *)(uVar8 + 0x1c8) + 0x9c))
       ) {
      uVar7 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    else {
      uVar7 = 0;
    }
    goto LAB_143e015ed;
  }
  if (-1 < *(char *)(param_2 + 0x9c)) {
    FUN_140b361ee(param_2,1);
  }
  iVar2 = *(int *)(param_1 + 0x394);
  if (iVar2 == 0) {
    if ((DAT_00000063 & 8) == 0) {
LAB_143e01616:
      uVar3 = 0;
LAB_143e013c9:
      FUN_140c7ce82(uVar3,1);
      iVar2 = *(int *)(param_1 + 0x394);
      if (iVar2 != 0) goto LAB_143e013de;
    }
    uVar3 = 0;
    lVar4 = 0;
    if ((DAT_00000060 & 0x10) == 0) {
LAB_143e01483:
      FUN_1405ba932(uVar3,0);
      iVar2 = *(int *)(param_1 + 0x394);
      if (iVar2 != 0) goto LAB_143e01498;
LAB_143e01632:
      lVar4 = 0;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x390);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      if ((DAT_00000063 & 8) == 0) goto LAB_143e01616;
    }
    else {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar9;
      }
      if ((*(byte *)(lVar4 + 99) & 8) == 0) {
        if (((DAT_14c9647dc <= (int)uVar1) ||
            (puVar5 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            puVar5 == (undefined8 *)0x0)) ||
           ((*(int *)(puVar5 + 2) != iVar2 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_143e01616;
        uVar3 = *puVar5;
        goto LAB_143e013c9;
      }
    }
LAB_143e013de:
    uVar1 = *(uint *)(param_1 + 0x390);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      if ((DAT_00000060 & 0x10) == 0) goto LAB_143e01676;
    }
    else {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar2)) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar9;
      }
      if ((*(byte *)(lVar4 + 0x60) & 0x10) == 0) {
        if ((((int)uVar1 < DAT_14c9647dc) &&
            (puVar5 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            puVar5 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar5 + 2) == iVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          uVar3 = *puVar5;
          goto LAB_143e01483;
        }
LAB_143e01676:
        uVar3 = 0;
        goto LAB_143e01483;
      }
    }
LAB_143e01498:
    uVar1 = *(uint *)(param_1 + 0x390);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != iVar2 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))))
      goto LAB_143e01632;
      lVar4 = *plVar9;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x1c8);
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x9c) < '\0')) {
    FUN_140b361ee(lVar4,0);
  }
LAB_143e015ed:
  return uVar7 & 0xffffffff;
}



// FUNCTION 143e0167e FUN_143e0167e body=1066 status=ok
// SIG undefined FUN_143e0167e(void)

ulonglong FUN_143e0167e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined8 unaff_RDI;
  undefined7 uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar10;
  
  if (*(char *)(param_2 + 0x790) != '\x01') {
    iVar3 = *(int *)(param_1 + 0x394);
    if (iVar3 == 0) {
      uVar7 = 0;
      if ((((DAT_00000063 & 8) != 0) || (*(char *)(param_2 + 0x9c) < '\0')) ||
         (uVar7 = 0, (DAT_00000060 & 0x10) == 0)) goto LAB_143e019e8;
      goto LAB_143e019d0;
    }
    uVar1 = *(uint *)(param_1 + 0x390);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      uVar8 = 0;
      uVar7 = uVar8;
      if (((DAT_00000063 & 8) != 0) || (uVar7 = 0, *(char *)(param_2 + 0x9c) < '\0'))
      goto LAB_143e019e8;
    }
    else {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar3)) ||
         ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar10;
      }
      uVar7 = 0;
      if (((*(byte *)(lVar2 + 99) & 8) != 0) || (*(char *)(param_2 + 0x9c) < '\0'))
      goto LAB_143e019e8;
      if (((int)uVar1 < DAT_14c9647dc) &&
         (((puVar6 = (ulonglong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == iVar3)) &&
          ((puVar6[1] & 0x10200000) == 0)))) {
        uVar8 = *puVar6;
      }
      else {
        uVar8 = 0;
      }
    }
    if ((*(byte *)(uVar8 + 0x60) & 0x10) != 0) {
      if (iVar3 == 0) {
LAB_143e01a6a:
        uVar7 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x390);
        uVar7 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar6 = (ulonglong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar6 == (ulonglong *)0x0) ||
             (((int)puVar6[2] != iVar3 || ((puVar6[1] & 0x10200000) != 0)))) goto LAB_143e01a6a;
          uVar7 = *puVar6;
        }
      }
LAB_143e019d0:
      if ((*(longlong *)(uVar7 + 0x1c8) == 0) ||
         (-1 < *(char *)(*(longlong *)(uVar7 + 0x1c8) + 0x9c))) {
        uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        goto LAB_143e019e8;
      }
    }
    uVar7 = 0;
    goto LAB_143e019e8;
  }
  if (*(char *)(param_2 + 0x9c) < '\0') {
    FUN_140b361ee(param_2,0);
  }
  iVar3 = *(int *)(param_1 + 0x394);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = 0;
    lVar2 = 0;
    if ((DAT_00000063 & 8) == 0) {
LAB_143e0175a:
      FUN_140c7ce82(uVar4,1);
      iVar3 = *(int *)(param_1 + 0x394);
      if (iVar3 != 0) goto LAB_143e0176f;
      iVar3 = 0;
LAB_143e01a44:
      lVar2 = 0;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x390);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      if ((DAT_00000063 & 8) == 0) goto LAB_143e01a7f;
    }
    else {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar3)) ||
         ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar10;
      }
      if ((*(byte *)(lVar2 + 99) & 8) == 0) {
        if ((((int)uVar1 < DAT_14c9647dc) &&
            (puVar5 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            puVar5 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar5 + 2) == iVar3 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          uVar4 = *puVar5;
          goto LAB_143e0175a;
        }
LAB_143e01a7f:
        uVar4 = 0;
        goto LAB_143e0175a;
      }
    }
LAB_143e0176f:
    uVar1 = *(uint *)(param_1 + 0x390);
    lVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != iVar3 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
      goto LAB_143e01a44;
      lVar2 = *plVar10;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x1c8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x9c) < '\0')) {
    FUN_140b361ee(lVar2,0);
    iVar3 = *(int *)(param_1 + 0x394);
  }
  uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (((iVar3 == 0) || (uVar1 = *(uint *)(param_1 + 0x390), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    uVar7 = CONCAT71(uVar9,1);
    if ((DAT_00000060 & 0x10) != 0) goto LAB_143e019e8;
LAB_143e019fe:
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != iVar3)) ||
       ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar10;
    }
    uVar7 = CONCAT71(uVar9,1);
    if ((*(byte *)(lVar2 + 0x60) & 0x10) != 0) goto LAB_143e019e8;
    if (((DAT_14c9647dc <= (int)uVar1) ||
        (puVar5 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        puVar5 == (undefined8 *)0x0)) ||
       ((*(int *)(puVar5 + 2) != iVar3 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
    goto LAB_143e019fe;
    plVar10 = (longlong *)*puVar5;
  }
  (**(code **)(*plVar10 + 0x2c0))(plVar10,1);
  uVar7 = CONCAT71(uVar9,1);
LAB_143e019e8:
  return uVar7 & 0xffffffff;
}



// FUNCTION 143e01aa8 FUN_143e01aa8 body=2688 status=ok
// SIG undefined FUN_143e01aa8(void)

void FUN_143e01aa8(longlong *param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  byte *pbVar10;
  undefined8 ****ppppuVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  float local_118;
  undefined4 uStack_114;
  longlong *local_108;
  int local_f0;
  undefined8 ***local_e8 [3];
  ushort local_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_118 = param_2;
    uVar8 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_118);
    lVar18 = FUN_1447210f0(param_1);
    if (lVar18 != 0) {
      if (*(longlong *)(lVar18 + 0x1f0) == 0) {
        lVar19 = lVar18 + 0x460;
      }
      else {
        lVar19 = *(longlong *)(*(longlong *)(lVar18 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar19,param_1,*(undefined4 *)(lVar18 + 0x6f4));
    }
  }
  if ((longlong)(int)param_1[0x85] != 0) {
    puVar23 = (uint *)param_1[0x84];
    puVar20 = puVar23 + (longlong)(int)param_1[0x85] * 6;
    do {
      if (((((*(longlong **)(puVar23 + 2) != (longlong *)0x0) && (puVar23[1] != 0)) &&
           (uVar2 = *puVar23, -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (lVar18 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar18 != 0))))
         && ((*(uint *)(lVar18 + 0x10) == puVar23[1] &&
             (((*(uint *)(lVar18 + 8) & 0x10200000) == 0 && ((char)puVar23[5] == '\0')))))) {
        lVar18 = (**(code **)(**(longlong **)(puVar23 + 2) + 0x10))();
        if ((*(int *)(lVar18 + 0x2c) == 0) || (uVar2 = *(uint *)(lVar18 + 0x28), (int)uVar2 < 0)) {
LAB_143e02037:
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != *(int *)(lVar18 + 0x2c))) ||
               ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143e02037;
            lVar19 = *plVar13;
          }
        }
        uVar8 = FUN_1447210f0(param_1);
        local_118 = (float)((uint)local_118 & 0xffffff00);
        local_f0 = 0;
        FUN_1456bb102(&local_118,uVar8);
        FUN_1447c3578(param_1 + 0x7a,local_e8,&local_118);
        lVar18 = FUN_14030a32e(local_e8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar11 = local_e8;
          if (0x18 < local_d0) {
            ppppuVar11 = (undefined8 ****)local_e8[0];
          }
          (*pcVar4)(ppppuVar11);
        }
        if (0x18 < local_d0) {
          FUN_1400020a8(local_e8[0]);
        }
        if ((longlong)local_f0 != 0) {
          lVar16 = (longlong)local_f0 + -1;
          local_128 = DAT_14c9a3da0;
          local_130 = lVar16 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_130),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + local_130));
          if (*(longlong *)(local_128 + local_130) != 0) {
            FUN_1400020a8();
          }
          lVar14 = DAT_14c9a3da0;
          iVar21 = (int)lVar16;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar21;
          }
          *(undefined4 *)(lVar14 + local_130) = 0xffffffff;
          iVar15 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar15 = DAT_14c9a3dd0;
          }
          *(int *)(lVar14 + 4 + local_130) = iVar15;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar9 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar9 = &DAT_14c9a3db0;
          }
          iVar15 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar15 = iVar21;
          }
          bVar7 = (byte)lVar16 & 0x1f;
          DAT_14c9a3dd0 = iVar21;
          *(uint *)(puVar9 + (longlong)(iVar15 >> 5) * 4) =
               *(uint *)(puVar9 + (longlong)(iVar15 >> 5) * 4) &
               (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          local_f0 = 0;
        }
        if ((local_118._0_1_ == '\x03') && (local_108 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_108 + 0x10))();
          }
        }
        if (lVar18 == 0) {
          bVar7 = 1;
        }
        else {
          lVar16 = (**(code **)(**(longlong **)(puVar23 + 2) + 0x10))();
          if ((*(int *)(lVar16 + 0x2c) == 0) || (uVar2 = *(uint *)(lVar16 + 0x28), (int)uVar2 < 0))
          {
LAB_143e0203e:
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar13 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar13 == (longlong *)0x0) || ((int)plVar13[2] != *(int *)(lVar16 + 0x2c))) ||
                 ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_143e0203e;
              lVar14 = *plVar13;
            }
          }
          bVar7 = 1;
          bVar25 = true;
          if (*(char *)((longlong)param_1 + 0x3cc) == '\x01') {
            if (lVar14 == 0) {
              bVar25 = false;
            }
            else {
              bVar25 = *(longlong *)(lVar14 + 0xa8) == lVar18;
            }
          }
          if (0 < (int)param_1[0x82]) {
            lVar18 = FUN_140bede9a(lVar18);
            uVar12 = 0xffffffff;
            if (lVar18 == 0) {
              fVar26 = 1.0;
            }
            else {
              if (((*(int *)(lVar18 + 0x7a4) != 0) &&
                  (uVar2 = *(uint *)(lVar18 + 0x7a0), -1 < (int)uVar2)) &&
                 (((int)uVar2 < DAT_14c9647dc &&
                  ((plVar13 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(lVar18 + 0x7a4)))))))
              {
                fVar26 = 1.0;
                if ((*(uint *)(plVar13 + 1) & 0x10200000) != 0) goto LAB_143e01e71;
                if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
                  lVar18 = *plVar13;
                }
                else {
                  lVar18 = 0;
                }
                uVar12 = *(undefined4 *)(lVar18 + 0x3b4);
                if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
                  lVar18 = *plVar13;
                }
                else {
                  lVar18 = 0;
                }
                if (*(char *)(lVar18 + 0x4b0) == '\x01') {
                  fVar26 = *(float *)(lVar18 + 0x4a0);
                  if ((*(float *)(lVar18 + 0x3d0) < fVar26) && (*(char *)(lVar18 + 0x4a4) == '\0'))
                  {
                    fVar26 = (float)(-(uint)(1e-08 < ABS(fVar26)) &
                                    (uint)(*(float *)(lVar18 + 0x3d0) / fVar26));
                    if (1.0 <= fVar26) {
                      fVar26 = 1.0;
                    }
                    if (fVar26 <= 0.0) {
                      fVar26 = 0.0;
                    }
                    goto LAB_143e01e71;
                  }
                }
              }
              fVar26 = 1.0;
            }
LAB_143e01e71:
            FUN_14072fffd(&local_118,uVar12);
            if ((longlong)(int)param_1[0x82] == 0) {
              bVar7 = 0;
            }
            else {
              lVar18 = 0;
              bVar7 = 0;
              do {
                if (CONCAT44(uStack_114,local_118) == *(longlong *)(param_1[0x81] + lVar18)) {
                  bVar7 = *(byte *)(param_1 + 0x83) ^ 1 | ABS(fVar26 + -1.0) <= 1e-08;
                }
                lVar18 = lVar18 + 8;
              } while ((longlong)(int)param_1[0x82] * 8 != lVar18);
            }
          }
          bVar7 = bVar25 & bVar7;
        }
        if (((*(byte *)((longlong)param_1 + 0x3cc) & lVar19 == 0) == 0) && (bVar7 != 0)) {
          fVar26 = (float)puVar23[4];
          puVar23[4] = (uint)(fVar26 + param_2);
          if (*(float *)(param_1 + 0x79) <= fVar26 + param_2) {
            *(undefined1 *)(puVar23 + 5) = 1;
            if ((lVar19 == 0) ||
               (plVar13 = *(longlong **)(lVar19 + 0xa8), plVar13 == (longlong *)0x0)) {
              uVar8 = FUN_1447210f0(param_1);
              local_118 = (float)((uint)local_118 & 0xffffff00);
              local_f0 = 0;
              FUN_1456bb102(&local_118,uVar8);
              FUN_1447c3578(param_1 + 0x7a,local_e8,&local_118);
              plVar13 = (longlong *)FUN_14030a32e(local_e8);
              pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
              if (pcVar4 != (code *)0x0) {
                ppppuVar11 = local_e8;
                if (0x18 < local_d0) {
                  ppppuVar11 = (undefined8 ****)local_e8[0];
                }
                (*pcVar4)(ppppuVar11);
              }
              if (0x18 < local_d0) {
                FUN_1400020a8(local_e8[0]);
              }
              if ((longlong)local_f0 != 0) {
                lVar19 = (longlong)local_f0 + -1;
                local_130 = DAT_14c9a3da0;
                lVar18 = lVar19 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
                if (*(longlong *)(local_130 + lVar18) != 0) {
                  FUN_1400020a8();
                }
                lVar16 = DAT_14c9a3da0;
                iVar21 = (int)lVar19;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar21;
                }
                *(undefined4 *)(lVar16 + lVar18) = 0xffffffff;
                iVar15 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar15 = DAT_14c9a3dd0;
                }
                *(int *)(lVar16 + 4 + lVar18) = iVar15;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar9 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar9 = &DAT_14c9a3db0;
                }
                iVar15 = iVar21 + 0x1f;
                if (-1 < iVar21) {
                  iVar15 = iVar21;
                }
                bVar7 = (byte)lVar19 & 0x1f;
                DAT_14c9a3dd0 = iVar21;
                *(uint *)(puVar9 + (longlong)(iVar15 >> 5) * 4) =
                     *(uint *)(puVar9 + (longlong)(iVar15 >> 5) * 4) &
                     (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
                local_f0 = 0;
              }
              if ((local_118._0_1_ == '\x03') && (local_108 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_108 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_108 + 0x10))();
                }
              }
              if ((plVar13 == (longlong *)0x0) &&
                 (plVar13 = (longlong *)FUN_1433b9ef0(param_1), plVar13 == (longlong *)0x0)) {
                if ((param_1[0x39] == 0) ||
                   (lVar18 = *(longlong *)(param_1[0x39] + 0x120), lVar18 == 0)) {
                  plVar13 = (longlong *)0x0;
                }
                else {
                  plVar13 = *(longlong **)(lVar18 + 0xa8);
                }
              }
            }
            if (plVar13 == (longlong *)0x0) {
              plVar13 = param_1;
            }
            (**(code **)(**(longlong **)(puVar23 + 2) + 0x20))(*(longlong **)(puVar23 + 2),plVar13);
          }
        }
        else {
          puVar23[4] = 0;
        }
      }
      puVar23 = puVar23 + 6;
    } while (puVar23 != puVar20);
    uVar2 = *(uint *)(param_1 + 0x85);
    uVar17 = (ulonglong)(int)uVar2;
    if (uVar17 != 0) {
      puVar23 = (uint *)param_1[0x84];
      if (*(longlong *)(puVar23 + 2) == 0) {
        bVar25 = true;
      }
      else {
        bVar25 = true;
        if ((((puVar23[1] != 0) && (uVar3 = *puVar23, -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           ((lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar18 != 0 &&
            (*(uint *)(lVar18 + 0x10) == puVar23[1])))) {
          bVar25 = (*(uint *)(lVar18 + 8) & 0x10200000) != 0;
        }
      }
      iVar15 = 0;
      uVar24 = 0;
      local_120 = param_1;
      lVar18 = DAT_14c9647c8;
      iVar21 = DAT_14c9647dc;
LAB_143e022ea:
      do {
        iVar6 = (int)uVar24;
        uVar24 = (ulonglong)(iVar6 + 1U);
        lVar19 = (longlong)iVar6;
        if ((int)(iVar6 + 1U) < (int)uVar2) {
          uVar24 = lVar19 + 1;
          puVar20 = puVar23 + lVar19 * 6 + 8;
          bVar5 = true;
          do {
            if (*(longlong *)puVar20 == 0) {
              if (bVar25 == false) goto LAB_143e0239d;
            }
            else if (((puVar20[-1] == 0) || (uVar3 = puVar20[-2], (int)uVar3 < 0)) ||
                    ((iVar21 <= (int)uVar3 ||
                     ((lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(lVar18 + (ulonglong)(uVar3 >> 0x10) * 8), lVar16 == 0
                      || (*(uint *)(lVar16 + 0x10) != puVar20[-1])))))) {
              if (bVar25 == false) goto LAB_143e0237f;
            }
            else if (bVar25 == ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) goto LAB_143e0237f;
            uVar24 = uVar24 + 1;
            bVar5 = (longlong)uVar24 < (longlong)uVar17;
            puVar20 = puVar20 + 6;
          } while (uVar17 != uVar24);
          uVar24 = (ulonglong)uVar2;
LAB_143e0237f:
          if (bVar25 != false) {
            bVar25 = false;
            if (!bVar5) break;
            goto LAB_143e022ea;
          }
        }
        else {
          if (bVar25 != false) break;
          bVar5 = false;
        }
LAB_143e0239d:
        iVar22 = (int)uVar24 - iVar6;
        if (iVar15 != iVar6) {
          memmove(puVar23 + (longlong)iVar15 * 6,puVar23 + lVar19 * 6,(longlong)iVar22 * 0x18);
          lVar18 = DAT_14c9647c8;
          iVar21 = DAT_14c9647dc;
        }
        iVar15 = iVar15 + iVar22;
        bVar25 = true;
      } while (bVar5);
      *(int *)(local_120 + 0x85) = iVar15;
      param_1 = local_120;
      if (iVar15 != 0) goto LAB_143e02405;
    }
  }
  pbVar10 = (byte *)param_1[10];
  if ((pbVar10 == (byte *)0x0) || ((*pbVar10 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x3b) != '\0') {
      uVar8 = *(undefined8 *)(pbVar10 + 0x28);
      FUN_1402eb48e(uVar8,param_1 + 6);
      *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
      FUN_1402eb97e(uVar8,param_1 + 6);
      if (*(char *)((longlong)param_1 + 0x3b) != '\0') goto LAB_143e02405;
      pbVar10 = (byte *)param_1[10];
    }
    pbVar10[0x24] = 0;
    pbVar10[0x25] = 0;
    pbVar10[0x26] = 0x80;
    pbVar10[0x27] = 0xbf;
  }
LAB_143e02405:
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0252a FUN_143e0252a body=77 status=ok
// SIG undefined FUN_143e0252a(void)

void FUN_143e0252a(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    lVar1 = FUN_140bede9a();
    if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0x690))) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x688) + (ulonglong)param_2 * 0xb0 + 0x10);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}



// FUNCTION 143e02578 FUN_143e02578 body=1889 status=ok
// SIG undefined FUN_143e02578(void)

void FUN_143e02578(longlong param_1,float param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  
  lVar10 = DAT_14c9647c8;
  uVar12 = DAT_14c8464f0;
  if ((*(char *)(param_1 + 0x50) == '\x01') &&
     (iVar3 = *(int *)(param_1 + 0x40), (longlong)iVar3 != 0)) {
    lVar17 = *(longlong *)(param_1 + 0x38);
    lVar16 = 0;
    do {
      iVar4 = *(int *)(lVar17 + 0x14 + lVar16);
      puVar19 = &DAT_14c8464e0;
      uVar22 = uVar12;
      if (iVar4 != 0) {
        uVar20 = *(uint *)(lVar17 + 0x10 + lVar16);
        puVar19 = &DAT_14c8464e0;
        if ((-1 < (int)uVar20) && (puVar19 = &DAT_14c8464e0, (int)uVar20 < DAT_14c9647dc)) {
          puVar19 = &DAT_14c8464e0;
          plVar14 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(lVar10 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((plVar14 != (longlong *)0x0) &&
             ((puVar19 = &DAT_14c8464e0, (int)plVar14[2] == iVar4 &&
              (puVar19 = &DAT_14c8464e0, (*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
              lVar18 = *plVar14;
            }
            else {
              lVar18 = 0;
            }
            lVar18 = *(longlong *)(lVar18 + 0x1c8);
            puVar19 = &DAT_14c8464e0;
            if (lVar18 != 0) {
              uVar22 = *(undefined8 *)(lVar18 + 0x270);
              puVar19 = (undefined8 *)(lVar18 + 0x260);
            }
          }
        }
      }
      uVar8 = puVar19[1];
      puVar2 = (undefined8 *)(lVar17 + 0x18 + lVar16);
      *puVar2 = *puVar19;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar17 + 0x28 + lVar16) = uVar22;
      lVar16 = lVar16 + 0x30;
    } while ((longlong)iVar3 * 0x30 != lVar16);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = (iVar3 + 1) % *(int *)(param_1 + 0x4c);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar15 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 4 + uVar15 * 0x14);
      if (iVar4 != 0) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + uVar15 * 0x14);
        uVar20 = *puVar1;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          lVar10 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
          if ((lVar10 != 0) &&
             ((*(int *)(lVar10 + 0x10) == iVar4 && ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
            iVar5 = *(int *)(param_1 + 0x4c);
            puVar1[4] = (uint)((float)puVar1[4] + param_2);
            uVar9 = puVar1[3];
            if (((uVar9 == 0) ||
                (((uVar6 = puVar1[2], (int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
                 (lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
                 lVar10 == 0)))) ||
               ((*(uint *)(lVar10 + 0x10) != uVar9 || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0))))
            {
              if ((((int)uVar20 < DAT_14c9647dc) &&
                  ((plVar14 = (longlong *)
                              ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                   plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar4)))) &&
                 ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
                lVar10 = *plVar14;
              }
              else {
                lVar10 = 0;
              }
              if (*(int *)(lVar10 + 0x39c) == 0) {
LAB_143e0281a:
                puVar11 = (uint *)(lVar10 + 0x390);
              }
              else {
                puVar11 = (uint *)(lVar10 + 0x398);
                uVar20 = *puVar11;
                if (((((int)uVar20 < 0) || (DAT_14c9647dc <= (int)uVar20)) ||
                    (lVar17 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8),
                    lVar17 == 0)) ||
                   ((*(int *)(lVar17 + 0x10) != *(int *)(lVar10 + 0x39c) ||
                    ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) goto LAB_143e0281a;
              }
              if (((puVar11[1] == 0) || (uVar20 = *puVar11, (int)uVar20 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar20 ||
                  ((((plVar14 = (longlong *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                     plVar14 == (longlong *)0x0 || (*(uint *)(plVar14 + 2) != puVar11[1])) ||
                    ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) ||
                   ((*plVar14 == 0 || (lVar10 = FUN_140bede9a(), lVar10 == 0)))))))) {
                puVar1[2] = 0;
                puVar1[3] = 0;
                goto LAB_143e02acd;
              }
              uVar20 = *(uint *)(lVar10 + 0xc);
              puVar1[2] = uVar20;
              if ((int)uVar20 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              uVar9 = *(uint *)(lVar10 + 0x10);
              if (uVar9 == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar20 = DAT_14c964868 + 1;
                bVar21 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar21) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar20);
                }
                LOCK();
                uVar9 = *(uint *)(lVar10 + 0x10);
                bVar21 = uVar9 == 0;
                if (bVar21) {
                  *(uint *)(lVar10 + 0x10) = uVar20;
                  uVar9 = 0;
                }
                UNLOCK();
                if (bVar21) {
                  uVar9 = uVar20;
                }
                puVar1[3] = uVar9;
                if (uVar9 == 0) goto LAB_143e02acd;
              }
              else {
                puVar1[3] = uVar9;
              }
            }
            uVar20 = puVar1[2];
            if (((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) &&
               ((plVar14 = (longlong *)
                           ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
                plVar14 != (longlong *)0x0 &&
                ((*(uint *)(plVar14 + 2) == uVar9 && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0))))
               )) {
              if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                lVar10 = *plVar14;
              }
              else {
                lVar10 = 0;
              }
              if (*(int *)(lVar10 + 0x798) != 0) {
                if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                  lVar10 = *plVar14;
                }
                else {
                  lVar10 = 0;
                }
                if (*(int *)(lVar10 + 0x798) == 1) {
                  lVar17 = 0x8e4;
LAB_143e02979:
                  if ((*(char *)(lVar10 + lVar17) != '\0') ||
                     ((int)((longlong)
                            ((ulonglong)(uint)((int)uVar15 >> 0x1f) << 0x20 | uVar15 & 0xffffffff) %
                           (longlong)iVar5) == iVar3)) goto LAB_143e02988;
                }
                else {
                  if (*(int *)(lVar10 + 0x798) == 2) {
                    lVar17 = 0x8e5;
                    goto LAB_143e02979;
                  }
LAB_143e02988:
                  if ((puVar1[1] == 0) || (uVar20 = *puVar1, (int)uVar20 < 0)) {
LAB_143e02b67:
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    if ((int)uVar20 < DAT_14c9647dc) {
                      puVar19 = (undefined8 *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                      if (((puVar19 == (undefined8 *)0x0) || (*(uint *)(puVar19 + 2) != puVar1[1]))
                         || ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_143e02b67;
                      uVar12 = *puVar19;
                    }
                  }
                  FUN_140c7839e(uVar12,1,puVar1[4]);
                  if ((puVar1[3] == 0) || (uVar20 = puVar1[2], (int)uVar20 < 0)) {
LAB_143e02b6e:
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if ((int)uVar20 < DAT_14c9647dc) {
                      plVar14 = (longlong *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                      if (((plVar14 == (longlong *)0x0) || (*(uint *)(plVar14 + 2) != puVar1[3])) ||
                         ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143e02b6e;
                      lVar10 = *plVar14;
                    }
                  }
                  if (*(int *)(lVar10 + 0x798) != 0) {
                    FUN_146067756(lVar10,puVar1[4]);
                  }
                  puVar1[4] = 0;
                }
                if (*(char *)(param_1 + 0x50) == '\x01') {
                  uVar20 = puVar1[3];
                  if ((uVar20 == 0) || (uVar9 = puVar1[2], (int)uVar9 < 0)) {
LAB_143e02c75:
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if ((int)uVar9 < DAT_14c9647dc) {
                      plVar14 = (longlong *)
                                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                      if (((plVar14 == (longlong *)0x0) || (*(uint *)(plVar14 + 2) != uVar20)) ||
                         ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143e02c75;
                      lVar10 = *plVar14;
                    }
                  }
                  if (*(int *)(lVar10 + 0x798) == 2) {
                    if ((longlong)*(int *)(param_1 + 0x40) == 0) {
                      bVar13 = 0;
                    }
                    else {
                      lVar10 = *(longlong *)(param_1 + 0x38);
                      lVar17 = 0;
                      bVar13 = 0;
                      do {
                        if ((uVar20 == 0) || (uVar9 = puVar1[2], (int)uVar9 < 0)) {
LAB_143e02c3c:
                          lVar16 = 0;
                        }
                        else {
                          lVar16 = 0;
                          if ((int)uVar9 < DAT_14c9647dc) {
                            plVar14 = (longlong *)
                                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8))
                            ;
                            if (((plVar14 == (longlong *)0x0) || (*(uint *)(plVar14 + 2) != uVar20))
                               || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_143e02c3c;
                            lVar16 = *plVar14;
                          }
                        }
                        dVar23 = *(double *)(lVar10 + 0x28 + lVar17) - *(double *)(lVar16 + 0x270);
                        dVar24 = *(double *)(lVar10 + 0x20 + lVar17) - *(double *)(lVar16 + 0x268);
                        dVar7 = *(double *)(lVar10 + 0x18 + lVar17) - *(double *)(lVar16 + 0x260);
                        bVar13 = bVar13 | dVar23 * dVar23 + dVar7 * dVar7 + dVar24 * dVar24 <=
                                          *(double *)(param_1 + 0x58);
                        lVar17 = lVar17 + 0x30;
                      } while ((longlong)*(int *)(param_1 + 0x40) * 0x30 != lVar17);
                    }
                    if ((uVar20 == 0) || (uVar9 = puVar1[2], (int)uVar9 < 0)) {
LAB_143e02c83:
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      if ((int)uVar9 < DAT_14c9647dc) {
                        puVar19 = (undefined8 *)
                                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                        if (((puVar19 == (undefined8 *)0x0) || (*(uint *)(puVar19 + 2) != uVar20))
                           || ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_143e02c83;
                        uVar12 = *puVar19;
                      }
                    }
                    FUN_148927b8a(uVar12,bVar13);
                  }
                }
              }
            }
          }
        }
      }
LAB_143e02acd:
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < (longlong)*(int *)(param_1 + 0x10));
  }
  FUN_1411d7036(param_1 + -0x20);
  return;
}



// FUNCTION 143e02d28 FUN_143e02d28 body=570 status=ok
// SIG undefined FUN_143e02d28(void)

void FUN_143e02d28(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x140) != '\x01')) {
    lVar4 = *(longlong *)(param_2 + 0x58);
    plVar5 = *(longlong **)(param_2 + 0x60);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      lVar9 = FUN_1487e207a(param_1 + 8);
      if (((((lVar9 != 0) && (*(int *)(lVar4 + 0x34) != 0)) &&
           (uVar3 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar3)) &&
          (((int)uVar3 < DAT_14c9647dc &&
           (plVar11 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0)))) &&
         (((int)plVar11[2] == *(int *)(lVar4 + 0x34) &&
          (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))) {
        FUN_147f7a8f8(&local_58);
        if (local_50 != (longlong *)0x0) {
          iVar8 = (int)local_50[1];
          do {
            if (iVar8 == 0) {
              plVar11 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar7 = (int)local_50[1];
            bVar12 = iVar8 == iVar7;
            if (bVar12) {
              *(int *)(local_50 + 1) = iVar8 + 1;
              iVar7 = iVar8;
            }
            iVar8 = iVar7;
            UNLOCK();
            plVar11 = local_50;
          } while (!bVar12);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
          lVar9 = local_58;
          if (plVar11 != (longlong *)0x0) {
            if (local_58 != 0) {
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              local_68 = lVar4;
              local_60 = plVar5;
              uVar10 = FUN_1487e207a(param_1 + 8);
              FUN_147f77e3c(lVar9,&local_58,uVar10,&local_68);
              plVar2 = local_50;
              if ((longlong *)(param_1 + 0x30) != &local_58) {
                *(longlong *)(param_1 + 0x30) = local_58;
                local_58 = 0;
                plVar6 = *(longlong **)(param_1 + 0x38);
                if (local_50 != plVar6) {
                  local_50 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0x38) = plVar2;
                  if (plVar6 != (longlong *)0x0) {
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
              }
              plVar2 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_50 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
            }
            LOCK();
            plVar2 = plVar11 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar5 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e02f64 FUN_143e02f64 body=105 status=ok
// SIG undefined FUN_143e02f64(void)

void FUN_143e02f64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1487e207a(param_1 + 8);
    FUN_147f762da(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143e02fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e02fce FUN_143e02fce body=720 status=ok
// SIG undefined FUN_143e02fce(void)

void FUN_143e02fce(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_2 + 0x58);
  plVar5 = *(longlong **)(param_2 + 0x60);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) goto LAB_143e03212;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < 1) {
    bVar13 = true;
    bVar12 = true;
LAB_143e030c3:
    uVar10 = FUN_1405b1a32();
    lStack_40 = FUN_14477b664(uVar10);
    if (bVar13) {
LAB_143e030da:
      local_38 = 0;
      if ((((bVar12) || (lStack_40 == 0)) ||
          (plVar2 = *(longlong **)(lStack_40 + 0xb8), plVar2 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar7 == '\0')) goto LAB_143e03212;
      uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
      local_38 = FUN_144aff482(uVar10,&local_48);
      if (local_38 == 0) goto LAB_143e03212;
    }
  }
  else {
    uVar8 = rand();
    iVar9 = (int)((float)iVar3 * ((float)(uVar8 & 0x7fff) / 32767.0));
    iVar11 = iVar3 + -1;
    if (iVar9 < iVar3 + -1) {
      iVar11 = iVar9;
    }
    plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar11 * 0x18);
    local_48 = *plVar2;
    bVar12 = local_48 == 0;
    if (!bVar12) {
      local_38 = 0;
    }
    if (plVar2[1] != 0) {
      local_38 = 0;
    }
    uVar10 = FUN_14477b664();
    lStack_40 = FUN_14477b664(uVar10);
    local_38 = plVar2[2];
    bVar13 = local_38 == 0;
    if (lStack_40 == 0) goto LAB_143e030c3;
    if (local_38 == 0) goto LAB_143e030da;
  }
  FUN_1403c747e(lVar4,&local_50,0);
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    if (lStack_40 == 0) {
      uVar10 = FUN_1405b1a32();
      lStack_40 = FUN_14477b664(uVar10);
    }
    if (((local_38 == 0) && (lStack_40 != 0)) && (local_48 != 0)) {
      plVar6 = *(longlong **)(lStack_40 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
        local_38 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
        local_38 = FUN_144aff482(uVar10,&local_48);
      }
    }
    FUN_140849a08(plVar2);
    if (((local_50 != (longlong *)0x0) &&
        (*(int *)(local_50 + 0x21) = (int)local_50[0x21] + -1, (int)local_50[0x26] < 1)) &&
       (FUN_1400847bc(local_50 + 0x17,0), (int)local_50[0x21] == 0)) {
      FUN_140087e46(local_50);
      if (*local_50 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_143e03212;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_50);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_50);
      }
    }
  }
LAB_143e03212:
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e032a0 FUN_143e032a0 body=239 status=ok
// SIG undefined FUN_143e032a0(void)

void FUN_143e032a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  lVar6 = *(longlong *)(param_2 + 0x58);
  plVar4 = *(longlong **)(param_2 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_140114204(param_1 + 8);
  if ((((cVar5 != '\0') && (lVar6 != 0 && *(char *)(param_1 + 0x40) != '\0')) &&
      (*(int *)(lVar6 + 0x34) != 0)) &&
     ((uVar3 = *(uint *)(lVar6 + 0x30), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)))) {
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar8 != (undefined8 *)0x0) &&
       ((*(int *)(puVar8 + 2) == *(int *)(lVar6 + 0x34) &&
        ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        uVar7 = *puVar8;
      }
      else {
        uVar7 = 0;
      }
      lVar6 = FUN_140149a73(uVar7,0);
      if (lVar6 != 0) {
        FUN_140bc53f1(param_1 + 8,param_1 + 0x40,lVar6,0);
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
                    /* WARNING: Could not recover jumptable at 0x000143e0337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e0338f FUN_143e0338f body=41 status=ok
// SIG undefined FUN_143e0338f(void)

void FUN_143e0338f(void)

{
  DAT_14cb88af8 = 0;
  if (DAT_14cb88af0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d673ec();
  return;
}



// FUNCTION 143e033f6 FUN_143e033f6 body=69 status=ok
// SIG undefined FUN_143e033f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e033f6(void)

{
  _DAT_14cb88bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e03438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb88bc8,1);
  return;
}



// FUNCTION 143e0343d FUN_143e0343d body=372 status=ok
// SIG undefined FUN_143e0343d(void)

void FUN_143e0343d(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *_Str;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x3e0), lVar1 != 0)) {
    if (DAT_14cb5b388 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146431698;
      local_58 = &LAB_1486775cb;
      local_60 = &LAB_1464cee35;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      if (0 < (int)param_1[1]) {
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)*param_1;
        }
        _wtof(_Str);
      }
      (**(code **)(*(longlong *)(lVar1 + 0x1168) + 0x18))(lVar1 + 0x1168);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e035ce FUN_143e035ce body=69 status=ok
// SIG undefined FUN_143e035ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e035ce(void)

{
  _DAT_14cb88bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e03610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb88c00,1);
  return;
}



// FUNCTION 143e03614 FUN_143e03614 body=497 status=ok
// SIG undefined FUN_143e03614(void)

ulonglong FUN_143e03614(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + -0x68);
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar2 = 1;
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x3e0), lVar1 != 0)) {
      if (DAT_14cb5b388 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146431698;
        local_48 = &LAB_1486775cb;
        local_50 = &LAB_1464cee35;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
          == DAT_14cb5b388 + 0x30)) {
        bVar2 = 0;
        uVar3 = 0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar3,bVar2 | *(byte *)(param_1 + 8)) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e03806 FUN_143e03806 body=293 status=ok
// SIG undefined FUN_143e03806(void)

longlong FUN_143e03806(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + -0x68);
  if (lVar2 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463b31ae;
      local_38 = &LAB_1486dca4f;
      local_40 = &LAB_1464f50a6;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) goto LAB_143e03859;
  }
  lVar2 = 0;
LAB_143e03859:
  lVar1 = lVar2 + 0x990;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0392c FUN_143e0392c body=64 status=ok
// SIG undefined FUN_143e0392c(void)

undefined8 FUN_143e0392c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0xe;
  FUN_14387d746(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0396e FUN_143e0396e body=702 status=ok
// SIG undefined FUN_143e0396e(void)

void FUN_143e0396e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *_Dst;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [44];
  int local_8c;
  uint local_88;
  int iStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x420);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x418);
    lVar13 = 0;
    do {
      iVar6 = DAT_14c9647dc;
      iVar2 = *(int *)(lVar4 + 4 + lVar13);
      if ((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar13), -1 < (int)uVar3)) &&
          ((int)uVar3 < DAT_14c9647dc)) &&
         (((plVar11 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar2)) &&
          (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar10 = *plVar11, lVar10 != 0)))))) {
        iVar2 = *(int *)(param_2 + 0x388);
        *(uint *)(param_2 + 0x388) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x38c) < iVar2 + 1U) {
          FUN_14052e0a0(param_2,iVar2);
          iVar6 = DAT_14c9647dc;
        }
        lVar8 = *(longlong *)(param_2 + 0x380);
        if (*(longlong *)(param_2 + 0x380) == 0) {
          lVar8 = param_2;
        }
        local_70 = 8;
        iStack_84 = 0;
        local_88 = *(uint *)(lVar10 + 0xc);
        if ((int)local_88 < iVar6) {
          lVar10 = (ulonglong)((local_88 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            local_8c = iVar12;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
            iVar12 = local_8c;
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar12;
          }
        }
        puVar7 = &local_88;
        puVar9 = (undefined8 *)(lVar8 + (longlong)iVar2 * 0x38);
        local_68 = 0xe;
        *(ushort *)(puVar9 + 3) = local_70;
        _Dst = puVar9;
        iStack_84 = iVar6;
        if (0x18 < local_70) {
          _Dst = (undefined8 *)FUN_14001cc68(local_70,0);
          *puVar9 = _Dst;
          puVar7 = (uint *)CONCAT44(iStack_84,local_88);
        }
        if (DAT_14c9a9570 == (code *)0x0) {
          memcpy(_Dst,puVar7,(longlong)DAT_14c9a94d0);
        }
        else {
          (*DAT_14c9a9570)();
        }
        *(byte *)(puVar9 + 4) = local_68;
        puVar9[5] = 0;
        puVar9[6] = 0;
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (local_70 < 0x19) {
            puVar7 = &local_88;
          }
          else {
            puVar7 = (uint *)CONCAT44(iStack_84,local_88);
          }
          (*pcVar5)(puVar7);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(iStack_84,local_88));
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar1 * 8 != lVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e03c44 FUN_143e03c44 body=342 status=ok
// SIG undefined FUN_143e03c44(void)

void FUN_143e03c44(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  
  if (((param_2 != 0 && param_1 != 0) && (lVar3 = FUN_1447210f0(param_1), lVar3 != 0)) &&
     (lVar4 = FUN_14892b436(param_2), lVar4 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      lVar3 = lVar3 + 0x460;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
    }
    FUN_14387fdee(param_1,lVar3);
    puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_147f5680c(puVar5,param_1,param_3,param_4);
    *puVar5 = &PTR_FUN_14b41ebe0;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = 0;
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(puVar5 + 9) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar6;
      }
    }
    *(int *)((longlong)puVar5 + 0x4c) = iVar2;
    FUN_140b1330e(lVar3,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar5);
    return;
  }
  return;
}



// FUNCTION 143e03dd4 FUN_143e03dd4 body=53 status=ok
// SIG undefined FUN_143e03dd4(void)

void FUN_143e03dd4(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 143e03e12 FUN_143e03e12 body=5302 status=ok
// SIG undefined FUN_143e03e12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143e03e12(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *_Dst;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  ulonglong *puVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  bool bVar34;
  undefined1 auStack_388 [32];
  code **local_368;
  undefined8 *local_360;
  undefined4 local_358;
  undefined8 local_350;
  wchar_t *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  code **local_330;
  undefined1 *local_328;
  code *local_320;
  longlong local_310;
  longlong local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  ulonglong *local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  longlong local_2a0;
  double local_278;
  double local_270;
  double local_268;
  code *local_260;
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_174;
  undefined1 local_160 [24];
  undefined4 local_148;
  uint local_140;
  int local_13c;
  longlong local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined2 uStack_107;
  undefined1 uStack_105;
  undefined2 uStack_104;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((param_1 != (longlong *)0x0) && (lVar15 = FUN_1447210f0(), lVar15 != 0)) {
    lVar23 = *param_2;
    if (lVar23 == 0) {
      (**(code **)(*param_1 + 0x718))(param_1,&local_2b8,&local_258);
      dVar6 = (double)FUN_144719204((int)local_258,0);
      dVar7 = (double)FUN_144719204(uStack_250,0);
      dVar3 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      dVar4 = sin(dVar7 * 0.017453292519943295);
      dVar7 = cos(dVar7 * 0.017453292519943295);
      dVar5 = (double)*(float *)(param_2 + 5);
      local_268 = dVar3 * dVar5 + local_2a8;
      local_270 = dVar4 * dVar6 * dVar5 + local_2b0;
      local_278 = dVar7 * dVar6 * dVar5 + local_2b8;
      if (param_1[0x89] == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = *(longlong *)(param_1[0x89] + 0x430);
        if ((lVar23 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar23);
        }
      }
      uStack_f0 = CONCAT62(uStack_f0._2_6_,0x101);
      local_c8 = 0;
      local_c0 = 0x800000000;
      local_a8 = 0;
      local_a0 = 0x400000000;
      local_108 = 0;
      uStack_fc = 0;
      local_118 = (code *)0x0;
      uStack_110 = 0;
      uStack_107 = 1;
      uStack_105 = 0;
      local_f8 = (undefined **)((ulonglong)(uint3)((uint)(undefined4)local_f8 >> 8) << 8);
      uStack_104 = 0;
      uStack_102 = 0;
      if (lVar23 != 0) {
        local_b8 = *(undefined4 *)(lVar23 + 0xc);
        local_a0 = 0x400000001;
        uStack_110 = *(undefined8 *)(lVar23 + 0x18);
      }
      uStack_101 = 1;
      uStack_100 = CONCAT31(uStack_100._1_3_,1);
      plVar20 = (longlong *)0x0;
      memset(&local_218,0,0x100);
      local_148 = 0xffffffff;
      local_218 = (code *)CONCAT44(0x3f800000,(uint)local_218);
      local_174 = 0xffffffff;
      local_260 = (code *)CONCAT35(local_260._5_3_,0x200000);
      local_368 = &local_260;
      local_360 = &local_118;
      cVar13 = FUN_140526294(lVar15,&local_218,&local_2b8,&local_278);
      lVar23 = 0;
      lVar18 = 0;
      if (cVar13 != '\0') {
        lVar23 = FUN_14485cccc(local_160);
        if (lVar23 == 0) {
LAB_143e0410f:
          lVar23 = 0;
        }
        else {
          if (DAT_14cb5b388 == 0) {
            local_260 = FUN_141864c34;
            local_320 = FUN_14081d0ea;
            local_328 = &LAB_146431698;
            local_338 = &LAB_1486775cb;
            local_340 = &LAB_1464cee35;
            local_348 = L"Game";
            local_350 = 0;
            local_358 = 0x10000005;
            local_360 = (undefined8 *)CONCAT44(local_360._4_4_,0x10);
            local_368 = (code **)CONCAT44(local_368._4_4_,0x3a20);
            local_330 = &local_260;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30))
          goto LAB_143e0410f;
        }
        if ((((local_13c != 0) && (-1 < (int)local_140)) && ((int)local_140 < DAT_14c9647dc)) &&
           (((plVar20 = (longlong *)
                        ((ulonglong)((local_140 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8)),
             plVar20 != (longlong *)0x0 && ((int)plVar20[2] == local_13c)) &&
            (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 &&
             (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)))))) {
          if (DAT_14cb63950 == 0) {
            local_260 = FUN_144a7958c;
            local_320 = FUN_14081d0ea;
            local_328 = &LAB_1464ec72a;
            local_338 = &LAB_1486f5f75;
            local_340 = &LAB_140945686;
            local_348 = L"Engine";
            local_350 = 0;
            local_358 = 0x10000004;
            local_360 = (undefined8 *)CONCAT44(local_360._4_4_,0x10);
            local_368 = (code **)CONCAT44(local_368._4_4_,0x19d0);
            local_330 = &local_260;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                          FUN_1464fe8ee);
          }
          if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar20[2] + 0x38)) &&
             (lVar18 = local_128,
             *(longlong *)
              (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
             DAT_14cb63950 + 0x30)) goto LAB_143e04197;
        }
        plVar20 = (longlong *)0x0;
        lVar18 = local_128;
      }
LAB_143e04197:
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (cVar13 == '\0') goto LAB_143e041d8;
    }
    else {
      plVar20 = *(longlong **)(lVar23 + 0x32b8);
      lVar18 = 0;
    }
    if ((plVar20 != (longlong *)0x0) && (lVar16 = FUN_14025708c(plVar20,DAT_14c9abbf0), lVar16 != 0)
       ) {
      local_308 = lVar16;
      cVar13 = (**(code **)(*plVar20 + 0x480))(plVar20,DAT_14c9abbf0);
      if (cVar13 == '\0') {
        (**(code **)(*plVar20 + 0x690))(plVar20,1);
      }
      if (*(longlong *)(lVar15 + 0x1f0) == 0) {
        puVar17 = (undefined8 *)(lVar15 + 0x458);
      }
      else {
        puVar17 = (undefined8 *)(*(longlong *)(lVar15 + 0x1f0) + 0xf0);
      }
      local_2e0 = *puVar17;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb88d90) && (FUN_144b3d300(&DAT_14cb88d90), DAT_14cb88d90 == -1))
      {
        DAT_14cb88d60 = 0;
        DAT_14cb88d68 = 0;
        DAT_14cb88d40 = 0;
        _DAT_14cb88d48 = 0;
        _DAT_14cb88d6c = 0xffffffff00000080;
        DAT_14cb88d74 = 0;
        DAT_14cb88d80 = 0;
        DAT_14cb88d88 = 0;
        atexit(FUN_143e052c9);
        _Init_thread_footer(&DAT_14cb88d90);
      }
      uVar14 = *(uint *)(lVar15 + 0xc);
      local_218 = (code *)(ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar32 = *(uint *)(lVar16 + 0x10);
      local_2d8 = lVar15;
      local_2c8 = lVar23;
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        uVar29 = DAT_14c964868 + 1;
        bVar34 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar34) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar29);
        }
        LOCK();
        uVar32 = *(uint *)(lVar16 + 0x10);
        bVar34 = uVar32 == 0;
        if (bVar34) {
          *(uint *)(lVar16 + 0x10) = uVar29;
          uVar32 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_218;
        if (bVar34) {
          uVar32 = uVar29;
        }
      }
      local_218._0_4_ = uVar14;
      local_218 = (code *)CONCAT44(uVar32,(uint)local_218);
      local_2d0 = (longlong *)FUN_148930718(uVar32 ^ (uint)local_218);
      plVar1 = local_2d0 + 1;
      iVar22 = (int)local_2d0[2];
      *(uint *)(local_2d0 + 2) = iVar22 + 1U;
      if (*(uint *)((longlong)local_2d0 + 0x14) < iVar22 + 1U) {
        FUN_148930e9c(plVar1,iVar22);
      }
      local_310 = *plVar1;
      lVar15 = (longlong)iVar22 * 0x68;
      *(undefined8 *)(local_310 + lVar15) = 0;
      uVar14 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_310 + lVar15) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar23 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar23 = 0;
      }
      local_310 = local_310 + lVar15;
      iVar22 = *(int *)(lVar23 + 0x10);
      if (*(int *)(lVar23 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        iVar26 = DAT_14c964868 + 1;
        bVar34 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar34) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar26);
        }
        LOCK();
        iVar22 = *(int *)(lVar23 + 0x10);
        bVar34 = iVar22 == 0;
        if (bVar34) {
          *(int *)(lVar23 + 0x10) = iVar26;
          iVar22 = 0;
        }
        UNLOCK();
        if (bVar34) {
          iVar22 = iVar26;
        }
      }
      *(int *)(local_310 + 4) = iVar22;
      *(undefined8 *)(local_310 + 8) = 0;
      uVar14 = *(uint *)((longlong)plVar20 + 0xc);
      *(uint *)(local_310 + 8) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar22 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        iVar26 = DAT_14c964868 + 1;
        bVar34 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar34) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar26);
        }
        LOCK();
        iVar22 = *(int *)(lVar15 + 0x10);
        bVar34 = iVar22 == 0;
        if (bVar34) {
          *(int *)(lVar15 + 0x10) = iVar26;
          iVar22 = 0;
        }
        UNLOCK();
        if (bVar34) {
          iVar22 = iVar26;
        }
      }
      lVar15 = local_310;
      *(int *)(local_310 + 0xc) = iVar22;
      local_2f0 = local_310 + 0x10;
      FUN_14892c32a(local_2f0,param_2);
      *(undefined8 *)(lVar15 + 0x50) = 0;
      *(undefined8 *)(lVar15 + 0x58) = 0;
      *(undefined8 *)(lVar15 + 0x60) = 0;
      if ((((lVar18 != 0) && ((char)param_2[1] == '\x01')) &&
          (lVar23 = *(longlong *)(local_308 + 0x168), lVar23 != 0)) && ((int)param_2[4] != 0)) {
        if ((longlong)*(int *)(lVar23 + 0x40) != 0) {
          lVar15 = *(longlong *)(lVar23 + 0x38);
          lVar23 = (longlong)*(int *)(lVar23 + 0x40) * 0x20 + lVar15;
          do {
            if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
              lVar16 = *(longlong *)(lVar15 + 8);
              lVar33 = (longlong)*(int *)(lVar15 + 0x10) * 0x50;
              lVar21 = 0;
LAB_143e04476:
              if (*(longlong *)(lVar16 + lVar21) != lVar18) goto code_r0x000143e0447c;
              if (lVar15 != 0) {
                lVar15 = local_310 + 0x28;
                lVar23 = 0;
                do {
                  local_218 = *(code **)(lVar16 + lVar23);
                  uStack_210 = CONCAT71(uStack_210._1_7_,1);
                  FUN_14892c6bc(lVar15,&local_218);
                  lVar23 = lVar23 + 0x50;
                } while (lVar33 != lVar23);
                break;
              }
            }
LAB_143e0448c:
            lVar15 = lVar15 + 0x20;
          } while (lVar15 != lVar23);
        }
        *(longlong *)(local_310 + 0x1c) = lVar18;
        *(undefined1 *)(local_310 + 0x24) = 1;
        lVar15 = local_310;
      }
      local_300 = (longlong *)(lVar15 + 0x58);
      FUN_14892c32a(&local_2b8);
      if (*(char *)(lVar15 + 0x24) == '\x01') {
        local_2f8 = (longlong *)(local_308 + 0x128);
        iVar22 = 3;
        do {
          iVar26 = *(int *)(local_308 + 0x130);
          uVar14 = iVar26 + 1;
          *(uint *)(local_308 + 0x130) = uVar14;
          if (*(uint *)(local_308 + 0x134) < uVar14) {
            FUN_148930684(local_2f8);
          }
          lVar23 = *local_2f8;
          lVar16 = (longlong)iVar26 * 0x1d0;
          lVar15 = lVar23 + lVar16;
          memset((void *)(lVar23 + lVar16),0,0x1d0);
          puVar17 = &DAT_14c846480;
          puVar25 = (undefined8 *)(lVar15 + 0x10);
          for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar25 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar25 = puVar25 + 1;
          }
          *(undefined8 *)(lVar15 + 0x70) = 0x3ff0000000000000;
          *(undefined8 *)(lVar15 + 0x78) = 0;
          puVar17 = (undefined8 *)(lVar23 + 0x80 + lVar16);
          puVar25 = &DAT_14c846480;
          puVar27 = puVar17;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar27 = *puVar25;
            puVar25 = puVar25 + 1;
            puVar27 = puVar27 + 1;
          }
          puVar17[0xc] = 0x3ff0000000000000;
          *(undefined4 *)(puVar17 + 0xd) = 6;
          *(undefined1 *)((longlong)puVar17 + 0x6c) = 1;
          puVar17[0xe] = 0;
          puVar17[0xf] = 0;
          puVar17[0x10] = 0xffffffff;
          puVar17[0x12] = 0;
          puVar17[0x14] = 0;
          puVar17[0x1a] = 0;
          puVar17[0x1c] = 0;
          puVar17[0x22] = 0;
          puVar17[0x24] = 0;
          uVar2 = *(ulonglong *)(local_310 + 0x1c);
          uVar14 = (uint)(uVar2 >> 0x10);
          uVar32 = uVar14 << 0x13 | uVar14 & 0xffff;
          iVar19 = (int)uVar2 * 0x10000;
          iVar30 = (int)(uVar2 & 0xffff);
          iVar26 = (int)((uVar2 & 0xffff) >> 4);
          iVar28 = (int)(uVar2 >> 0x20);
          uVar14 = iVar30 + iVar19 + iVar28 + uVar32 + iVar26;
          uVar29 = uVar14 >> 0xd ^ iVar22 - (iVar30 + iVar28 + iVar26 + iVar19 + uVar32);
          uVar32 = uVar29 << 8 ^ (-0x61c88647 - uVar14) - uVar29;
          uVar31 = uVar32 >> 0xd ^ (uVar14 - uVar29) - uVar32;
          uVar14 = uVar31 >> 0xc ^ (uVar29 - uVar32) - uVar31;
          uVar29 = uVar14 << 0x10 ^ (uVar32 - uVar31) - uVar14;
          uVar32 = uVar29 >> 5 ^ (uVar31 - uVar14) - uVar29;
          uVar31 = uVar32 >> 3 ^ (uVar14 - uVar29) - uVar32;
          uVar14 = uVar31 << 10 ^ (uVar29 - uVar32) - uVar31;
          *(uint *)(puVar17 + 0x10) = uVar14 >> 0xf ^ uVar32 - (uVar31 + uVar14);
          puVar17[-0x10] = *(undefined8 *)(local_310 + 0x1c);
          *(int *)(puVar17 + 0xd) = iVar22;
          local_118 = (code *)0x0;
          local_108 = 0;
          uStack_107 = 0;
          uStack_105 = 0;
          uStack_104 = 0;
          uStack_102 = 0;
          uStack_101 = 0;
          puVar17 = (undefined8 *)FUN_14001cc68(0x48,8);
          local_108 = SUB81(puVar17,0);
          uStack_107 = (undefined2)((ulonglong)puVar17 >> 8);
          uStack_105 = (undefined1)((ulonglong)puVar17 >> 0x18);
          uStack_104 = (undefined2)((ulonglong)puVar17 >> 0x20);
          uStack_102 = (undefined1)((ulonglong)puVar17 >> 0x30);
          uStack_101 = (undefined1)((ulonglong)puVar17 >> 0x38);
          *puVar17 = &PTR_FUN_14b41f6b0;
          FUN_14892c32a(puVar17 + 1,&local_2b8);
          if (puVar17 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_118 = FUN_143e07438;
          }
          lVar23 = lVar23 + lVar16;
          local_218 = *(code **)(lVar23 + 400);
          uStack_210 = *(undefined8 *)(lVar23 + 0x198);
          local_208 = *(longlong **)(lVar23 + 0x1a0);
          uStack_200 = *(longlong *)(lVar23 + 0x1a8);
          local_1f8 = *(undefined ***)(lVar23 + 0x1b0);
          uStack_1f0 = *(longlong *)(lVar23 + 0x1b8);
          local_1e8 = *(undefined8 *)(lVar23 + 0x1c0);
          uStack_1e0 = *(undefined8 *)(lVar23 + 0x1c8);
          lVar15 = uStack_200;
          *(undefined8 *)(lVar23 + 0x1c0) = local_e8;
          *(undefined8 *)(lVar23 + 0x1c8) = uStack_e0;
          *(undefined ***)(lVar23 + 0x1b0) = local_f8;
          *(longlong *)(lVar23 + 0x1b8) = uStack_f0;
          *(ulonglong *)(lVar23 + 0x1a0) =
               CONCAT17(uStack_101,
                        CONCAT16(uStack_102,
                                 CONCAT24(uStack_104,
                                          CONCAT13(uStack_105,CONCAT21(uStack_107,local_108)))));
          *(ulonglong *)(lVar23 + 0x1a8) = CONCAT44(uStack_fc,uStack_100);
          *(code **)(lVar23 + 400) = local_118;
          *(undefined8 *)(lVar23 + 0x198) = uStack_110;
          uStack_200._4_4_ = (undefined4)((ulonglong)uStack_200 >> 0x20);
          local_e8 = local_1e8;
          uStack_e0 = uStack_1e0;
          local_f8 = local_1f8;
          uStack_f0 = uStack_1f0;
          local_108 = SUB81(local_208,0);
          uStack_107 = (undefined2)((ulonglong)local_208 >> 8);
          uStack_105 = (undefined1)((ulonglong)local_208 >> 0x18);
          uStack_104 = (undefined2)((ulonglong)local_208 >> 0x20);
          uStack_102 = (undefined1)((ulonglong)local_208 >> 0x30);
          uStack_101 = (undefined1)((ulonglong)local_208 >> 0x38);
          uStack_100 = (undefined4)uStack_200;
          uStack_fc = uStack_200._4_4_;
          local_118 = local_218;
          uStack_110 = uStack_210;
          uStack_200 = lVar15;
          if (local_218 != (code *)0x0) {
            plVar20 = local_208;
            if (local_208 == (longlong *)0x0) {
              plVar20 = &local_f8;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          lVar15 = local_310;
          iVar26 = *(int *)(local_310 + 0x60);
          *(uint *)(local_310 + 0x60) = iVar26 + 1U;
          if (*(uint *)(local_310 + 100) < iVar26 + 1U) {
            FUN_148930684(local_300,iVar26);
          }
          FUN_1470f3dd0((longlong)iVar26 * 0x1d0 + *local_300);
          iVar22 = iVar22 + 1;
        } while (iVar22 != 6);
      }
      if ((longlong)*(int *)(lVar15 + 0x30) != 0) {
        puVar24 = *(ulonglong **)(lVar15 + 0x28);
        local_2c0 = (ulonglong *)((longlong)puVar24 + (longlong)*(int *)(lVar15 + 0x30) * 0xc);
        local_2e8 = (longlong *)(local_308 + 0x128);
        do {
          iVar22 = 3;
          do {
            local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,iVar22);
            iVar22 = *(int *)(local_308 + 0x130);
            uVar14 = iVar22 + 1;
            *(uint *)(local_308 + 0x130) = uVar14;
            if (*(uint *)(local_308 + 0x134) < uVar14) {
              FUN_148930684(local_2e8);
            }
            lVar18 = *local_2e8;
            lVar33 = (longlong)iVar22 * 0x1d0;
            _Dst = (ulonglong *)(lVar18 + lVar33);
            lVar23 = lVar18 + lVar33;
            memset(_Dst,0,0x1d0);
            lVar15 = local_310;
            puVar17 = &DAT_14c846480;
            puVar25 = (undefined8 *)(lVar23 + 0x10);
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar25 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar25 = puVar25 + 1;
            }
            *(undefined8 *)(lVar23 + 0x70) = 0x3ff0000000000000;
            *(undefined8 *)(lVar23 + 0x78) = 0;
            lVar18 = lVar18 + lVar33;
            puVar17 = &DAT_14c846480;
            puVar25 = (undefined8 *)(lVar18 + 0x80);
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar25 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar25 = puVar25 + 1;
            }
            *(undefined8 *)(lVar18 + 0xe0) = 0x3ff0000000000000;
            *(undefined4 *)(lVar18 + 0xe8) = 6;
            *(undefined1 *)(lVar18 + 0xec) = 1;
            *(undefined8 *)(lVar18 + 0xf0) = 0;
            *(undefined8 *)(lVar18 + 0xf8) = 0;
            *(undefined8 *)(lVar18 + 0x100) = 0xffffffff;
            *(undefined8 *)(lVar18 + 0x110) = 0;
            *(undefined8 *)(lVar18 + 0x120) = 0;
            *(undefined8 *)(lVar18 + 0x150) = 0;
            *(undefined8 *)(lVar18 + 0x160) = 0;
            *(undefined8 *)(lVar18 + 400) = 0;
            *(undefined8 *)(lVar18 + 0x1a0) = 0;
            uVar2 = *puVar24;
            uVar14 = (uint)(uVar2 >> 0x10);
            uVar32 = uVar14 << 0x13 | uVar14 & 0xffff;
            iVar19 = (int)uVar2 * 0x10000;
            iVar30 = (int)(uVar2 & 0xffff);
            iVar26 = (int)((uVar2 & 0xffff) >> 4);
            iVar28 = (int)(uVar2 >> 0x20);
            uVar14 = iVar30 + iVar19 + iVar28 + uVar32 + iVar26;
            iVar22 = (int)local_2f8;
            uVar29 = uVar14 >> 0xd ^ (int)local_2f8 - (iVar30 + iVar28 + iVar26 + iVar19 + uVar32);
            uVar32 = uVar29 << 8 ^ (-0x61c88647 - uVar14) - uVar29;
            uVar31 = uVar32 >> 0xd ^ (uVar14 - uVar29) - uVar32;
            uVar14 = uVar31 >> 0xc ^ (uVar29 - uVar32) - uVar31;
            uVar29 = uVar14 << 0x10 ^ (uVar32 - uVar31) - uVar14;
            uVar32 = uVar29 >> 5 ^ (uVar31 - uVar14) - uVar29;
            uVar31 = uVar32 >> 3 ^ (uVar14 - uVar29) - uVar32;
            uVar14 = uVar31 << 10 ^ (uVar29 - uVar32) - uVar31;
            *(uint *)(lVar18 + 0x100) = uVar14 >> 0xf ^ uVar32 - (uVar31 + uVar14);
            *(int *)(lVar18 + 0xe8) = (int)local_2f8;
            if ((char)puVar24[1] == '\x01') {
              *_Dst = *puVar24;
              FUN_14892c32a(&local_218,&local_2b8);
              FUN_14892c32a(&local_1d8,local_2f0);
              lVar15 = local_310;
              local_198 = *(undefined8 *)(local_310 + 0x1c);
              local_258 = (code *)0x0;
              local_248 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x98,8);
              *puVar17 = &PTR_FUN_14b41f6d0;
              puVar17[1] = local_218;
              local_248 = puVar17;
              if ((local_218 != (code *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              bVar8 = DAT_14c950c29;
              puVar17[2] = uStack_210;
              puVar17[3] = local_208;
              puVar17[4] = uStack_200;
              uStack_200 = 0;
              *(undefined4 *)(puVar17 + 5) = (undefined4)local_1f8;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = local_1f8._4_4_;
              local_1f8 = (undefined **)0x0;
              puVar17[8] = uStack_1e0;
              *(undefined4 *)(puVar17 + 6) = (undefined4)uStack_1f0;
              *(undefined4 *)((longlong)puVar17 + 0x34) = uStack_1f0._4_4_;
              *(undefined4 *)(puVar17 + 7) = (undefined4)local_1e8;
              *(undefined4 *)((longlong)puVar17 + 0x3c) = local_1e8._4_4_;
              puVar17[9] = CONCAT71(uStack_1d7,local_1d8);
              if ((CONCAT71(uStack_1d7,local_1d8) != 0 & bVar8) == 1) {
                FUN_1456cec3c();
              }
              puVar17[10] = local_1d0;
              puVar17[0xb] = uStack_1c8;
              puVar17[0xc] = local_1c0;
              local_1c0 = 0;
              *(undefined4 *)(puVar17 + 0xd) = (undefined4)local_1b8;
              *(undefined4 *)((longlong)puVar17 + 0x6c) = local_1b8._4_4_;
              local_1b8 = 0;
              puVar17[0x10] = local_1a0;
              puVar17[0xe] = local_1b0;
              puVar17[0xf] = uStack_1a8;
              puVar17[0x11] = local_198;
              if (puVar17 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_258 = FUN_143e0757e;
              }
              local_118 = *(code **)(lVar23 + 400);
              uStack_110 = *(undefined8 *)(lVar23 + 0x198);
              plVar20 = *(longlong **)(lVar23 + 0x1a0);
              local_f8 = *(undefined ***)(lVar23 + 0x1b0);
              uStack_f0 = *(longlong *)(lVar23 + 0x1b8);
              local_e8 = *(undefined8 *)(lVar23 + 0x1c0);
              uStack_e0 = *(undefined8 *)(lVar23 + 0x1c8);
              uVar11 = local_e8;
              uVar12 = uStack_e0;
              ppuVar10 = local_f8;
              lVar18 = uStack_f0;
              local_108 = SUB81(plVar20,0);
              uStack_107 = (undefined2)((ulonglong)plVar20 >> 8);
              uStack_105 = (undefined1)((ulonglong)plVar20 >> 0x18);
              uStack_104 = (undefined2)((ulonglong)plVar20 >> 0x20);
              uStack_102 = (undefined1)((ulonglong)plVar20 >> 0x30);
              uStack_101 = (undefined1)((ulonglong)plVar20 >> 0x38);
              uStack_100 = (undefined4)*(undefined8 *)(lVar23 + 0x1a8);
              uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x1a8) >> 0x20);
              uVar9 = uStack_110;
              *(ulonglong *)(lVar23 + 0x1c0) = CONCAT44(uStack_224,local_228);
              *(ulonglong *)(lVar23 + 0x1c8) = CONCAT44(uStack_21c,uStack_220);
              *(ulonglong *)(lVar23 + 0x1b0) = CONCAT44(uStack_234,local_238);
              *(ulonglong *)(lVar23 + 0x1b8) = CONCAT44(uStack_22c,uStack_230);
              *(longlong **)(lVar23 + 0x1a0) = local_248;
              *(ulonglong *)(lVar23 + 0x1a8) = CONCAT44(uStack_23c,uStack_240);
              *(code **)(lVar23 + 400) = local_258;
              *(ulonglong *)(lVar23 + 0x198) = CONCAT44(uStack_24c,uStack_250);
              uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
              local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
              uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
              local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
              uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
              local_228 = (undefined4)local_e8;
              uStack_224 = local_e8._4_4_;
              uStack_220 = (undefined4)uStack_e0;
              uStack_21c = uStack_e0._4_4_;
              local_238 = (undefined4)local_f8;
              uStack_234 = local_f8._4_4_;
              uStack_230 = (undefined4)uStack_f0;
              uStack_22c = uStack_f0._4_4_;
              uStack_240 = uStack_100;
              uStack_23c = uStack_fc;
              uStack_250 = (undefined4)uStack_110;
              uStack_24c = uStack_110._4_4_;
              local_258 = local_118;
              local_248 = plVar20;
              uStack_110 = uVar9;
              local_f8 = ppuVar10;
              uStack_f0 = lVar18;
              local_e8 = uVar11;
              uStack_e0 = uVar12;
              if (local_118 != (code *)0x0) {
                if (plVar20 == (longlong *)0x0) {
                  plVar20 = (longlong *)&local_238;
                }
                (**(code **)(*plVar20 + 0x10))();
              }
              if (local_1c0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              _Dst[0xe] = 0;
              *_Dst = *(ulonglong *)(local_310 + 0x1c);
              *(undefined1 *)((longlong)_Dst + 0xec) = 1;
              _Dst[0xf] = *puVar24;
              FUN_14892c32a(&local_218,local_2f0);
              local_258 = (code *)0x0;
              local_248 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x50,8);
              *puVar17 = &PTR_FUN_14b41f6f0;
              puVar17[1] = local_218;
              local_248 = puVar17;
              if ((local_218 != (code *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              puVar17[2] = uStack_210;
              puVar17[3] = local_208;
              puVar17[4] = uStack_200;
              uStack_200 = 0;
              *(undefined4 *)(puVar17 + 5) = (undefined4)local_1f8;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = local_1f8._4_4_;
              local_1f8 = (undefined **)0x0;
              puVar17[8] = uStack_1e0;
              puVar17[6] = uStack_1f0;
              puVar17[7] = local_1e8;
              if (puVar17 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_258 = FUN_143e079a2;
              }
              local_118 = *(code **)(lVar23 + 400);
              uStack_110 = *(undefined8 *)(lVar23 + 0x198);
              plVar20 = *(longlong **)(lVar23 + 0x1a0);
              local_f8 = *(undefined ***)(lVar23 + 0x1b0);
              uStack_f0 = *(longlong *)(lVar23 + 0x1b8);
              local_e8 = *(undefined8 *)(lVar23 + 0x1c0);
              uStack_e0 = *(undefined8 *)(lVar23 + 0x1c8);
              uVar11 = local_e8;
              uVar12 = uStack_e0;
              ppuVar10 = local_f8;
              lVar18 = uStack_f0;
              local_108 = SUB81(plVar20,0);
              uStack_107 = (undefined2)((ulonglong)plVar20 >> 8);
              uStack_105 = (undefined1)((ulonglong)plVar20 >> 0x18);
              uStack_104 = (undefined2)((ulonglong)plVar20 >> 0x20);
              uStack_102 = (undefined1)((ulonglong)plVar20 >> 0x30);
              uStack_101 = (undefined1)((ulonglong)plVar20 >> 0x38);
              uStack_100 = (undefined4)*(undefined8 *)(lVar23 + 0x1a8);
              uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 0x1a8) >> 0x20);
              uVar9 = uStack_110;
              *(ulonglong *)(lVar23 + 0x1c0) = CONCAT44(uStack_224,local_228);
              *(ulonglong *)(lVar23 + 0x1c8) = CONCAT44(uStack_21c,uStack_220);
              *(ulonglong *)(lVar23 + 0x1b0) = CONCAT44(uStack_234,local_238);
              *(ulonglong *)(lVar23 + 0x1b8) = CONCAT44(uStack_22c,uStack_230);
              *(longlong **)(lVar23 + 0x1a0) = local_248;
              *(ulonglong *)(lVar23 + 0x1a8) = CONCAT44(uStack_23c,uStack_240);
              *(code **)(lVar23 + 400) = local_258;
              *(ulonglong *)(lVar23 + 0x198) = CONCAT44(uStack_24c,uStack_250);
              uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
              local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
              uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
              local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
              uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
              local_228 = (undefined4)local_e8;
              uStack_224 = local_e8._4_4_;
              uStack_220 = (undefined4)uStack_e0;
              uStack_21c = uStack_e0._4_4_;
              local_238 = (undefined4)local_f8;
              uStack_234 = local_f8._4_4_;
              uStack_230 = (undefined4)uStack_f0;
              uStack_22c = uStack_f0._4_4_;
              uStack_240 = uStack_100;
              uStack_23c = uStack_fc;
              uStack_250 = (undefined4)uStack_110;
              uStack_24c = uStack_110._4_4_;
              local_258 = local_118;
              local_248 = plVar20;
              uStack_110 = uVar9;
              local_f8 = ppuVar10;
              uStack_f0 = lVar18;
              local_e8 = uVar11;
              uStack_e0 = uVar12;
              if (local_118 != (code *)0x0) {
                if (plVar20 == (longlong *)0x0) {
                  plVar20 = (longlong *)&local_238;
                }
                (**(code **)(*plVar20 + 0x10))();
              }
            }
            if (uStack_200 != 0) {
              FUN_1400020a8();
            }
            iVar26 = *(int *)(lVar15 + 0x60);
            *(uint *)(lVar15 + 0x60) = iVar26 + 1U;
            if (*(uint *)(lVar15 + 100) < iVar26 + 1U) {
              FUN_148930684(local_300,iVar26);
            }
            FUN_1470f3dd0((longlong)iVar26 * 0x1d0 + *local_300);
            iVar22 = iVar22 + 1;
          } while (iVar22 != 6);
          puVar24 = (ulonglong *)((longlong)puVar24 + 0xc);
        } while (puVar24 != local_2c0);
      }
      FUN_14892c3c6(lVar15);
      if (*local_2d0 == 0) {
        local_218 = FUN_143e07dc4;
        local_208 = (longlong *)0x0;
        local_1f8 = &PTR_LAB_14b41f710;
        uStack_1f0 = local_2d8;
        local_1d8 = 3;
        local_368 = (code **)&local_118;
        local_118 = (code *)CONCAT62(local_118._2_6_,1);
        local_118 = (code *)CONCAT44(0xbf800000,(undefined4)local_118);
        FUN_1406f4044(local_2e0,local_2d0,&local_218,0x3dcccccd);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_1d8])(&local_218);
      }
      lVar15 = local_2c8;
      if (local_2a0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143e041da;
    }
  }
LAB_143e041d8:
  lVar15 = 0;
LAB_143e041da:
  if ((local_90 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar15;
code_r0x000143e0447c:
  lVar21 = lVar21 + 0x50;
  if (lVar33 == lVar21) goto LAB_143e0448c;
  goto LAB_143e04476;
}



// FUNCTION 143e052c9 FUN_143e052c9 body=41 status=ok
// SIG undefined FUN_143e052c9(void)

void FUN_143e052c9(void)

{
  DAT_14cb88d88 = 0;
  if (DAT_14cb88d80 != 0) {
    FUN_1400020a8();
  }
  FUN_14892e0a0();
  return;
}



// FUNCTION 143e0530f FUN_143e0530f body=41 status=ok
// SIG undefined FUN_143e0530f(void)

void FUN_143e0530f(void)

{
  DAT_14cb88f00 = 0;
  if (DAT_14cb88ef8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6748a();
  return;
}



// FUNCTION 143e05387 FUN_143e05387 body=41 status=ok
// SIG undefined FUN_143e05387(void)

void FUN_143e05387(void)

{
  DAT_14cb89010 = 0;
  if (DAT_14cb89008 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67528();
  return;
}



// FUNCTION 143e053ee FUN_143e053ee body=41 status=ok
// SIG undefined FUN_143e053ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e053ee(void)

{
  _DAT_14cb89120 = 0;
  if (DAT_14cb89118 != 0) {
    FUN_1400020a8();
  }
  FUN_145d675c6();
  return;
}



// FUNCTION 143e0543e FUN_143e0543e body=49 status=ok
// SIG undefined FUN_143e0543e(void)

void FUN_143e0543e(void)

{
  FUN_144760e21(DAT_14cb895b8,DAT_14cb895c0);
  if (DAT_14cb895b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e0546f FUN_143e0546f body=69 status=ok
// SIG undefined FUN_143e0546f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0546f(void)

{
  _DAT_14cb89208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e054b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb89210,1);
  return;
}



// FUNCTION 143e054b4 FUN_143e054b4 body=69 status=ok
// SIG undefined FUN_143e054b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e054b4(void)

{
  _DAT_14cb89220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e054f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb89228,1);
  return;
}



// FUNCTION 143e054fa FUN_143e054fa body=684 status=ok
// SIG undefined FUN_143e054fa(void)

longlong * FUN_143e054fa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[0x57] != 0) {
    FUN_145ed8890(param_1,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x30))(local_58,&local_78);
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      (**(code **)(*local_58 + 0x10))(local_58,local_90);
      FUN_1400021e4(local_90,&local_88);
      puVar9 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar9 = local_88;
      }
      FUN_140002266(&local_68,L"Platform=%s&%s",puVar9,puVar8);
      if (&local_68 == param_2) {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_68;
        local_68 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
        local_60 = 0;
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 != 0) {
    iVar3 = FUN_14490d72a(lVar5);
    lVar6 = FUN_1400f6f32(lVar5);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x68), lVar6 != 0 && iVar3 == 3)) {
      lVar5 = FUN_140149a73(lVar5,0);
      if (lVar5 != 0) {
        FUN_1409845a0(lVar6,&local_68,param_1);
        uVar4 = FUN_140b9fef0(lVar6,&local_68,0);
        local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar4);
        plVar7 = (longlong *)FUN_143d2992a(lVar5);
        if (plVar7 != (longlong *)0x0) {
          local_58 = (longlong *)0x0;
          plStack_50 = (longlong *)0x0;
          (**(code **)(*plVar7 + 0x80))(plVar7,&local_58);
          if ((int)plStack_50 - 2U < 0x7fffffff) {
            if (((int)param_2[1] - 2U < 0x7fffffff) && ((short)*local_58 != 0x3f)) {
              FUN_1400020e8(param_2,&DAT_149e1423e,1);
            }
            iVar3 = (int)plStack_50 + -1;
            if ((int)plStack_50 == 0) {
              iVar3 = 0;
            }
            FUN_1400020e8(param_2,local_58,iVar3);
          }
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e057a8 FUN_143e057a8 body=1571 status=ok
// SIG undefined FUN_143e057a8(void)

void FUN_143e057a8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  char local_6d;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *(longlong *)(param_1 + 0x30);
  if (lVar8 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1463b31ae;
      local_98 = &LAB_1486dca4f;
      local_a0 = &LAB_1464f50a6;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
    iVar10 = *(int *)(DAT_14cb61cd0 + 0x38);
    if ((iVar10 <= *(int *)(lVar8 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8) == DAT_14cb61cd0 + 0x30))
    {
      plVar1 = *(longlong **)(param_1 + 0x30);
      if ((plVar1 == (longlong *)0x0) ||
         ((lVar8 = plVar1[2], lVar8 == 0 || (*(int *)(lVar8 + 0x38) < iVar10)))) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8) ==
            DAT_14cb61cd0 + 0x30) {
          plVar11 = plVar1;
        }
      }
      bVar7 = *DAT_14cb89218;
      bVar3 = (**(code **)(*plVar11 + 0x1030))(plVar11);
      *(byte *)(param_2 + 0x471) = *(byte *)(param_2 + 0x471) | bVar7 >> 1 & bVar3;
      bVar3 = (**(code **)(*plVar11 + 0x1080))(plVar11);
      *(byte *)(param_2 + 0x471) = *(byte *)(param_2 + 0x471) | bVar3 & bVar7;
      cVar2 = (**(code **)(*plVar11 + 0x1030))(plVar11);
      if (cVar2 == '\0') {
        bVar7 = 0;
      }
      else {
        bVar7 = *DAT_14cb89230;
      }
      *(byte *)(param_2 + 0x472) = *(byte *)(param_2 + 0x472) | bVar7;
      cVar2 = (**(code **)(*plVar11 + 0x1030))(plVar11);
      if (*(char *)(param_1 + 0x2db) != cVar2) {
        local_6d = cVar2;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c8338a0) &&
           (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
          FUN_1456d85e6(&DAT_14c8337f0);
          atexit((_func_5014 *)&LAB_142748837);
          _Init_thread_footer(&DAT_14c8338a0);
        }
        FUN_1401c23cc(&local_60);
        local_58 = (code *)0x0;
        uStack_50 = 0;
        local_68 = local_60;
        local_6c = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0);
        if (0 < local_6c) {
          iVar10 = 0;
          do {
            lVar6 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_68,iVar10);
            lVar8 = lVar6 + -8;
            if (lVar6 == 0) {
              lVar8 = 0;
            }
            lVar6 = (longlong)(int)uStack_50;
            uVar5 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
            if (uStack_50._4_4_ < uVar5) {
              FUN_1401c24ca(&local_58);
            }
            *(longlong *)(local_58 + lVar6 * 8) = lVar8;
            iVar10 = iVar10 + 1;
          } while (local_6c != iVar10);
        }
        if (local_6d != '\0') {
          if ((longlong)(int)uStack_50 != 0) {
            lVar8 = 0;
            do {
              *(undefined1 *)(*(longlong *)(local_58 + lVar8) + 8) = 1;
              lVar8 = lVar8 + 8;
            } while ((longlong)(int)uStack_50 * 8 != lVar8);
          }
        }
        *(char *)(param_1 + 0x2db) = local_6d;
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb89240) && (FUN_144b3d300(&DAT_14cb89240), DAT_14cb89240 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb89238 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.PausePSOEviction",1);
        _Init_thread_footer(&DAT_14cb89240);
      }
      if (DAT_14cb89238 != (longlong *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca813a8) &&
           (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14ca813a0 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
          _Init_thread_footer(&DAT_14ca813a8);
        }
        if (((DAT_14ca84df4 != 0x10de) || (DAT_14ca813a0 == (longlong *)0x0)) ||
           (iVar10 = (**(code **)(*DAT_14ca813a0 + 0xb0))(), iVar10 < 1)) {
          cVar2 = (**(code **)(*plVar11 + 0x10d8))(plVar11);
          cVar4 = '\x01';
          if (cVar2 == '\0') {
            cVar4 = (**(code **)(*plVar11 + 0x1080))(plVar11);
          }
          cVar2 = (**(code **)(*DAT_14cb89238 + 0xa8))();
          plVar1 = DAT_14cb89238;
          if (cVar4 != cVar2) {
            uVar5 = (**(code **)(*DAT_14cb89238 + 0x18))(DAT_14cb89238);
            puVar9 = &DAT_149e25dfc;
            if (cVar4 != '\0') {
              puVar9 = &DAT_149e0209e;
            }
            (**(code **)(*plVar1 + 0x98))(plVar1,puVar9,uVar5 & 0xff000000,0);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x80), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_90 = &local_58;
      local_58 = (code *)&LAB_1417c5d06;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1417ad04a;
      local_98 = &LAB_1486a7af7;
      local_a0 = &LAB_1464e1631;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x1000000c;
      local_c0 = 8;
      local_c8 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x498))(plVar1);
      bVar7 = *(byte *)(param_2 + 0x471);
      lVar8 = 0;
      do {
        bVar7 = bVar7 | cVar2 == (&DAT_14b41eb9e)[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *(byte *)(param_2 + 0x471) = bVar7;
    }
  }
  local_c8 = param_5;
  FUN_143564ae2(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e05dee FUN_143e05dee body=391 status=ok
// SIG undefined FUN_143e05dee(void)

void FUN_143e05dee(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x1f0), lVar2 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_28;
      local_28 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar2 = *(longlong *)(lVar1 + 0x1f0);
      if (lVar2 == 0) goto LAB_143e05e60;
    }
    if ((((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
          (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
           == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))) &&
        ((lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x68), lVar1 != 0 &&
         ((-1 < *(short *)(param_2 + 0x18) &&
          (lVar1 = FUN_140d71416(lVar1,param_2 + 0x18), lVar1 != 0)))))) &&
       (*(char *)(lVar1 + 0x4dd) == '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_143e05e60:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e05fa3 FUN_143e05fa3 body=53 status=ok
// SIG undefined FUN_143e05fa3(void)

void FUN_143e05fa3(void)

{
  longlong *plVar1;
  
  if (DAT_14cb89513 != '\0') {
    plVar1 = (longlong *)FUN_140a3e602();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e05fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_14cb89510,*(code **)(*plVar1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 143e05fd8 FUN_143e05fd8 body=3 status=ok
// SIG undefined FUN_143e05fd8(void)

undefined8 FUN_143e05fd8(void)

{
  return 0;
}



// FUNCTION 143e05fdc FUN_143e05fdc body=3 status=ok
// SIG undefined FUN_143e05fdc(void)

undefined8 FUN_143e05fdc(void)

{
  return 0;
}



// FUNCTION 143e05fe0 FUN_143e05fe0 body=1 status=ok
// SIG undefined FUN_143e05fe0(void)

void FUN_143e05fe0(void)

{
  return;
}



// FUNCTION 143e05fe2 FUN_143e05fe2 body=1 status=ok
// SIG undefined FUN_143e05fe2(void)

void FUN_143e05fe2(void)

{
  return;
}



// FUNCTION 143e05fe3 FUN_143e05fe3 body=91 status=ok
// SIG undefined FUN_143e05fe3(void)

void FUN_143e05fe3(void)

{
  if (DAT_14cb89528 != 0) {
    if (DAT_14cb89520 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb89520)(DAT_14cb89520,0);
    FUN_1446efa72(&DAT_14cb89520,0,0,0x10);
    DAT_14cb89528 = 0;
  }
  if (DAT_14cb89520 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e0603e FUN_143e0603e body=91 status=ok
// SIG undefined FUN_143e0603e(void)

void FUN_143e0603e(void)

{
  if (DAT_14cb89540 != 0) {
    if (DAT_14cb89538 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb89538)(DAT_14cb89538,0);
    FUN_1446efa72(&DAT_14cb89538,0,0,0x10);
    DAT_14cb89540 = 0;
  }
  if (DAT_14cb89538 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e061c8 FUN_143e061c8 body=28 status=ok
// SIG undefined FUN_143e061c8(void)

undefined8 FUN_143e061c8(undefined8 param_1,undefined8 param_2)

{
  FUN_14892b7cc(param_2,param_1);
  return param_1;
}



// FUNCTION 143e061f4 FUN_143e061f4 body=42 status=ok
// SIG undefined FUN_143e061f4(void)

undefined4 * FUN_143e061f4(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140a8b8c6(*param_2,param_3);
  *(undefined2 *)(param_1 + 6) = 4;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 8) = 3;
  return param_1;
}



// FUNCTION 143e0622e FUN_143e0622e body=262 status=ok
// SIG undefined FUN_143e0622e(void)

double * FUN_143e0622e(double *param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == '\x15') {
    uVar2 = *param_2;
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_14575a19a(local_58,0);
    fVar4 = (float)FUN_140a8b8c6(uVar2,local_58);
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = (double)fVar4;
    *(undefined1 *)(param_1 + 4) = 0x15;
  }
  else {
    if (param_3 != '\x03') {
      *(undefined2 *)(param_1 + 3) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_143e06262;
    }
    uVar2 = *param_2;
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_14575a19a(local_58,0);
    uVar3 = FUN_140a8b8c6(uVar2,local_58);
    *(undefined2 *)(param_1 + 3) = 4;
    *(undefined4 *)param_1 = uVar3;
    *(undefined1 *)(param_1 + 4) = 3;
  }
  FUN_1448173f8(local_30);
  if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_143e06262:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e063c2 FUN_143e063c2 body=12 status=ok
// SIG undefined FUN_143e063c2(void)

void FUN_143e063c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e063cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e063ce FUN_143e063ce body=29 status=ok
// SIG undefined FUN_143e063ce(void)

undefined8 FUN_143e063ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06484 FUN_143e06484 body=29 status=ok
// SIG undefined FUN_143e06484(void)

undefined8 FUN_143e06484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e064a1 FUN_143e064a1 body=37 status=ok
// SIG undefined FUN_143e064a1(void)

void FUN_143e064a1(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[3] = DAT_14c8464e0;
  param_1[4] = uVar1;
  param_1[5] = DAT_14c8464f0;
  return;
}



// FUNCTION 143e064cc FUN_143e064cc body=29 status=ok
// SIG undefined FUN_143e064cc(void)

undefined8 FUN_143e064cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06668 FUN_143e06668 body=93 status=ok
// SIG undefined FUN_143e06668(void)

void FUN_143e06668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e066c6 FUN_143e066c6 body=93 status=ok
// SIG undefined FUN_143e066c6(void)

void FUN_143e066c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e06724 FUN_143e06724 body=126 status=ok
// SIG undefined FUN_143e06724(void)

void FUN_143e06724(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e06793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e067ac FUN_143e067ac body=266 status=ok
// SIG undefined FUN_143e067ac(void)

undefined8 FUN_143e067ac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e068b0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e068b0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e068b0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e06857;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1489299c2(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e06857;
    }
  }
  uVar6 = 0;
LAB_143e06857:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e068b8 FUN_143e068b8 body=29 status=ok
// SIG undefined FUN_143e068b8(void)

undefined8 FUN_143e068b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06a54 FUN_143e06a54 body=93 status=ok
// SIG undefined FUN_143e06a54(void)

void FUN_143e06a54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e06ab2 FUN_143e06ab2 body=93 status=ok
// SIG undefined FUN_143e06ab2(void)

void FUN_143e06ab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e06b10 FUN_143e06b10 body=126 status=ok
// SIG undefined FUN_143e06b10(void)

void FUN_143e06b10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f3a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e06b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e06b8e FUN_143e06b8e body=88 status=ok
// SIG undefined FUN_143e06b8e(void)

void FUN_143e06b8e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_1447f69b6(lVar1 + 0x28);
  local_18 = *(undefined8 *)(lVar1 + 0x128);
  FUN_1447cd2ec(lVar1 + 0x40);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e06be8 FUN_143e06be8 body=297 status=ok
// SIG undefined FUN_143e06be8(void)

undefined8 FUN_143e06be8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e06d0b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e06d0b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_143e06d0b:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e06cbf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      FUN_1447f69b6(lVar5 + 0x28);
      local_28 = *(longlong *)(lVar5 + 0x128);
      FUN_1447cd2ec(lVar5 + 0x40);
      uVar6 = 1;
      goto LAB_143e06cbf;
    }
  }
  uVar6 = 0;
LAB_143e06cbf:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e06d12 FUN_143e06d12 body=114 status=ok
// SIG undefined FUN_143e06d12(void)

void FUN_143e06d12(longlong *param_1,int param_2)

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



// FUNCTION 143e06dac FUN_143e06dac body=12 status=ok
// SIG undefined FUN_143e06dac(void)

void FUN_143e06dac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e06db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e06db8 FUN_143e06db8 body=29 status=ok
// SIG undefined FUN_143e06db8(void)

undefined8 FUN_143e06db8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06e02 FUN_143e06e02 body=12 status=ok
// SIG undefined FUN_143e06e02(void)

void FUN_143e06e02(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e06e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e06e0e FUN_143e06e0e body=29 status=ok
// SIG undefined FUN_143e06e0e(void)

undefined8 FUN_143e06e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06e2c FUN_143e06e2c body=114 status=ok
// SIG undefined FUN_143e06e2c(void)

void FUN_143e06e2c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 143e06e9e FUN_143e06e9e body=29 status=ok
// SIG undefined FUN_143e06e9e(void)

undefined8 FUN_143e06e9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e06ed0 FUN_143e06ed0 body=93 status=ok
// SIG undefined FUN_143e06ed0(void)

void FUN_143e06ed0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143e06f2e FUN_143e06f2e body=93 status=ok
// SIG undefined FUN_143e06f2e(void)

void FUN_143e06f2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f610;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143e06f8c FUN_143e06f8c body=126 status=ok
// SIG undefined FUN_143e06f8c(void)

void FUN_143e06f8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f610;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e06ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e07014 FUN_143e07014 body=20 status=ok
// SIG undefined FUN_143e07014(void)

undefined1 FUN_143e07014(longlong param_1)

{
  FUN_143e07028(param_1 + 0x18);
  return 1;
}



// FUNCTION 143e07028 FUN_143e07028 body=1019 status=ok
// SIG undefined FUN_143e07028(void)

void FUN_143e07028(uint *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[1] == 0) {
LAB_143e072fb:
    uVar10 = 0;
  }
  else {
    uVar11 = *param_1;
    uVar10 = 0;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar14 + 2) != param_1[1] || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))))
      goto LAB_143e072fb;
      uVar10 = *puVar14;
    }
  }
  FUN_140c88a82(&local_70,uVar10);
  if (local_68 == (longlong *)0x0) goto LAB_143e072c9;
  iVar7 = (int)local_68[1];
  do {
    if (iVar7 == 0) {
      plVar16 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar8 = (int)local_68[1];
    bVar22 = iVar7 == iVar8;
    if (bVar22) {
      *(int *)(local_68 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
    plVar16 = local_68;
  } while (!bVar22);
  LOCK();
  piVar1 = (int *)((longlong)local_68 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_68 + 0x10))();
  }
  lVar6 = local_70;
  if (plVar16 == (longlong *)0x0) goto LAB_143e072c9;
  if (local_70 != 0) {
    *(undefined8 *)(local_70 + 0x20) = 0;
    if (*(int *)(local_70 + 0xe8) == *(int *)(local_70 + 0x114)) {
      *(undefined8 *)(local_70 + 0xd0) = 0;
      plVar5 = *(longlong **)(local_70 + 0xd8);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(local_70 + 0xd8) = 0;
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
    else {
      if (*(longlong **)(local_70 + 0xd0) == (longlong *)0x0) {
        uVar10 = thunk_FUN_14050fd64();
        local_70 = DAT_14cb88c90;
        local_68 = DAT_14cb88c98;
        local_60 = 0;
        FUN_14655a422(uVar10,&local_58);
        plVar2 = local_50;
        *(undefined8 *)(lVar6 + 0xd0) = local_58;
        local_58 = 0;
        plVar5 = *(longlong **)(lVar6 + 0xd8);
        if (local_50 != plVar5) {
          local_50 = (longlong *)0x0;
          *(longlong **)(lVar6 + 0xd8) = plVar2;
          if (plVar5 == (longlong *)0x0) goto LAB_143e07123;
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
        plVar5 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
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
      else {
        (**(code **)(**(longlong **)(local_70 + 0xd0) + 0x18))();
      }
LAB_143e07123:
      iVar7 = *(int *)(lVar6 + 0x108);
      if (iVar7 == 0) {
        uVar20 = 1;
        uVar21 = 0;
        iVar8 = 0;
        iVar15 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar6 + 0x100);
        if (*(uint **)(lVar6 + 0x100) == (uint *)0x0) {
          puVar9 = (uint *)(lVar6 + 0xf0);
        }
        uVar11 = *puVar9;
        if (uVar11 == 0) {
          iVar8 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar8 = iVar7 + -1;
          }
          uVar21 = 0;
          uVar20 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar20 = uVar21;
          }
          iVar15 = 0;
          do {
            if (uVar20 == uVar21) goto LAB_143e072a0;
            iVar15 = iVar15 + 0x20;
            uVar11 = puVar9[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar11 == 0);
        }
        else {
          uVar21 = 0;
          iVar15 = 0;
        }
        uVar20 = (ulonglong)(-uVar11 & uVar11);
        uVar3 = uVar20 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar8) {
          iVar8 = iVar7;
        }
      }
      if (iVar8 != iVar7) {
        uVar11 = 0xffffffff;
        do {
          (**(code **)(**(longlong **)(lVar6 + 0xd0) + 8))
                    (*(longlong **)(lVar6 + 0xd0),
                     *(longlong *)(lVar6 + 0xe0) + (longlong)iVar8 * 0x40 + 0x18,0);
          uVar11 = ~(uint)uVar20 & uVar11;
          puVar9 = *(uint **)(lVar6 + 0x100);
          if (*(uint **)(lVar6 + 0x100) == (uint *)0x0) {
            puVar9 = (uint *)(lVar6 + 0xf0);
          }
          iVar4 = *(int *)(lVar6 + 0x108);
          iVar8 = (int)uVar21;
          lVar19 = (longlong)iVar8;
          uVar17 = puVar9[lVar19] & uVar11;
          if (uVar17 == 0) {
            iVar12 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar12 = iVar4 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar8) {
              iVar13 = iVar8;
            }
            if (iVar8 < iVar12) {
              lVar18 = 0;
              do {
                uVar17 = puVar9[lVar19 + lVar18 + 1];
                if (uVar17 != 0) {
                  uVar21 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                  uVar11 = 0xffffffff;
                  goto LAB_143e07259;
                }
                iVar15 = iVar15 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar13 - lVar19 != lVar18);
              uVar11 = 0xffffffff;
              iVar8 = iVar13;
            }
            uVar21 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar4;
          }
          else {
LAB_143e07259:
            uVar20 = (ulonglong)(-uVar17 & uVar17);
            uVar3 = uVar20 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar8 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar8) {
              iVar8 = iVar4;
            }
          }
        } while (iVar8 != iVar7);
      }
LAB_143e072a0:
      FUN_1407d097e(*(undefined8 *)(lVar6 + 0xd0));
    }
  }
  LOCK();
  plVar5 = plVar16 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
LAB_143e072c9:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e07438 FUN_143e07438 body=169 status=ok
// SIG undefined FUN_143e07438(void)

bool FUN_143e07438(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if (lVar1 != 0) {
    dVar3 = (double)FUN_1471176da(lVar1);
    bVar2 = ABS(dVar3) <= (double)*(float *)(param_1 + 0x34);
    if (bVar2) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)-*(float *)(param_1 + 0x2c) *
              (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar3) & -(ulonglong)(dVar3 < 0.0) & 0xbff0000000000000);
    }
    *(bool *)(param_2 + 0xec) = bVar2;
    *(double *)(param_2 + 0xf0) = dVar3;
  }
  return lVar1 != 0;
}



// FUNCTION 143e074e2 FUN_143e074e2 body=62 status=ok
// SIG undefined FUN_143e074e2(void)

void FUN_143e074e2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b41f6b0;
  FUN_14892c32a(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 143e07526 FUN_143e07526 body=29 status=ok
// SIG undefined FUN_143e07526(void)

void FUN_143e07526(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e07544 FUN_143e07544 body=57 status=ok
// SIG undefined FUN_143e07544(void)

undefined8 * FUN_143e07544(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b41f6b0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0757e FUN_143e0757e body=853 status=ok
// SIG undefined FUN_143e0757e(void)

undefined8 FUN_143e0757e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  double extraout_XMM0_Qa;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if (((lVar1 != 0) && (puVar2 = *(undefined8 **)(lVar1 + 0x20), puVar2 != (undefined8 *)0x0)) &&
     (iVar7 = (**(code **)*puVar2)(puVar2), iVar7 == 1)) {
    lVar8 = (longlong)*(int *)(puVar2[0x56] + 0x10);
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(puVar2[0x56] + 8) + lVar10);
        if (*(longlong *)(lVar3 + 0x1f0) == *(longlong *)(param_1 + 0x80)) {
          if (lVar3 != 0) {
            FUN_144941734(lVar3,&local_128);
            local_c8 = local_108;
            dStack_c0 = dStack_100;
            local_b8 = local_f8;
            FUN_144941734(puVar2,&local_128);
            dStack_b0 = local_108;
            dStack_a8 = dStack_100;
            local_a0 = local_f8;
            FUN_142b5f619(puVar2 + 0x26,puVar2 + 0x40,&local_c8);
            FUN_142b5f619(lVar3 + 0x130,lVar3 + 0x200,&dStack_b0);
            FUN_144941734(puVar2,&local_128);
            local_108 = local_c8 - local_108;
            dStack_100 = dStack_c0 - dStack_100;
            local_f8 = local_b8 - local_f8;
            dVar11 = -local_128;
            dStack_120 = -dStack_120;
            local_118 = local_118 * -1.0;
            dStack_110 = dStack_110 * 1.0;
            dVar14 = local_108 * local_118 - dVar11 * local_f8;
            dVar12 = dStack_100 * dVar11 - local_108 * dStack_120;
            dVar13 = local_f8 * dStack_120 - dStack_100 * local_118;
            dVar13 = dVar13 + dVar13;
            dVar14 = dVar14 + dVar14;
            dVar12 = dVar12 + dVar12;
            dVar4 = local_128 * dVar12 + local_118 * dVar13 + dStack_110 * dVar14 + dStack_100;
            auVar5._8_4_ = SUB84(dVar4,0);
            auVar5._0_8_ = (dVar12 * dStack_120 - dVar14 * local_118) +
                           dStack_110 * dVar13 + local_108;
            auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            *(undefined1 (*) [16])(lVar1 + 0x140) = auVar5;
            *(double *)(lVar1 + 0x150) =
                 dStack_110 * dVar12 + local_f8 + (dVar14 * dVar11 - dVar13 * dStack_120);
            *(double *)(lVar1 + 0x168) = local_a0;
            *(double *)(lVar1 + 0x158) = dStack_b0;
            *(double *)(lVar1 + 0x160) = dStack_a8;
          }
          break;
        }
        lVar10 = lVar10 + 8;
      } while (lVar8 * 8 != lVar10);
    }
    if (*(longlong *)(param_2 + 0xf8) != 0) {
      FUN_1471176da();
      dVar4 = 0.0;
      uVar9 = 1;
      bVar6 = ABS(extraout_XMM0_Qa) <= (double)*(float *)(param_1 + 0x34);
      if (!bVar6) {
        dVar4 = (double)-*(float *)(param_1 + 0x2c) *
                (double)((-(ulonglong)(0.0 < extraout_XMM0_Qa) >> 0x20 & 0x3ff00000 |
                         (ulonglong)
                         (~(uint)(-(ulonglong)(0.0 < extraout_XMM0_Qa) >> 0x20) &
                         (uint)(-(ulonglong)(extraout_XMM0_Qa < 0.0) >> 0x20) & 0xbff00000)) << 0x20
                        );
      }
      *(bool *)(param_2 + 0xec) = bVar6;
      *(double *)(param_2 + 0xf0) = dVar4;
      goto LAB_143e07803;
    }
  }
  uVar9 = 0;
LAB_143e07803:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143e078d4 FUN_143e078d4 body=98 status=ok
// SIG undefined FUN_143e078d4(void)

undefined8 * FUN_143e078d4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b41f6d0;
  FUN_14892c32a(puVar1 + 1,param_1 + 8);
  FUN_14892c32a(puVar1 + 9,param_1 + 0x48);
  puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
  return puVar1 + 1;
}



// FUNCTION 143e0793c FUN_143e0793c body=29 status=ok
// SIG undefined FUN_143e0793c(void)

void FUN_143e0793c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e0795a FUN_143e0795a body=71 status=ok
// SIG undefined FUN_143e0795a(void)

undefined8 * FUN_143e0795a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b41f6d0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e079a2 FUN_143e079a2 body=900 status=ok
// SIG undefined FUN_143e079a2(void)

undefined8 FUN_143e079a2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x20);
    lVar3 = *(longlong *)(lVar1 + 0x30);
    if (lVar3 != 0 && lVar2 != 0) {
      FUN_144941734(lVar2,&local_138);
      local_d8 = local_118;
      uStack_d4 = uStack_114;
      uStack_d0 = uStack_110;
      uStack_cc = uStack_10c;
      local_c8 = local_108;
      FUN_144941734(lVar3,&local_138);
      uStack_c0 = local_118;
      uStack_bc = uStack_114;
      uStack_b8 = uStack_110;
      uStack_b4 = uStack_10c;
      local_b0 = local_108;
      FUN_142b5f619(lVar3 + 0x130,lVar3 + 0x200,&local_d8);
      FUN_142b5f619(lVar2 + 0x130,lVar2 + 0x200,&uStack_c0);
      FUN_144941734(lVar2,&local_138);
      dVar8 = (double)CONCAT44(uStack_bc,uStack_c0) - (double)CONCAT44(uStack_114,local_118);
      dVar9 = (double)CONCAT44(uStack_b4,uStack_b8) - (double)CONCAT44(uStack_10c,uStack_110);
      dVar4 = local_b0 - local_108;
      dVar10 = -local_138;
      dVar11 = -dStack_130;
      dVar6 = local_128 * -1.0;
      dVar7 = dStack_120 * 1.0;
      dVar14 = dVar8 * dVar6 - dVar10 * dVar4;
      dVar12 = dVar9 * dVar10 - dVar8 * dVar11;
      dVar13 = dVar4 * dVar11 - dVar9 * dVar6;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      *(double *)(lVar1 + 0x140) = (dVar12 * dVar11 - dVar14 * dVar6) + dVar7 * dVar13 + dVar8;
      *(double *)(lVar1 + 0x148) = local_138 * dVar12 + dVar6 * dVar13 + dVar7 * dVar14 + dVar9;
      *(double *)(lVar1 + 0x150) = dVar7 * dVar12 + dVar4 + (dVar14 * dVar10 - dVar13 * dVar11);
      FUN_144941734(lVar3,&local_138);
      dVar12 = (double)CONCAT44(uStack_d4,local_d8) - (double)CONCAT44(uStack_114,local_118);
      dVar6 = (double)CONCAT44(uStack_cc,uStack_d0) - (double)CONCAT44(uStack_10c,uStack_110);
      local_108 = local_c8 - local_108;
      dVar4 = -local_138;
      dStack_130 = -dStack_130;
      local_128 = local_128 * -1.0;
      dStack_120 = dStack_120 * 1.0;
      dVar9 = dVar12 * local_128 - dVar4 * local_108;
      dVar7 = dVar6 * dVar4 - dVar12 * dStack_130;
      dVar8 = local_108 * dStack_130 - dVar6 * local_128;
      dVar8 = dVar8 + dVar8;
      dVar9 = dVar9 + dVar9;
      dVar7 = dVar7 + dVar7;
      *(double *)(lVar1 + 0x158) =
           (dVar7 * dStack_130 - dVar9 * local_128) + dStack_120 * dVar8 + dVar12;
      *(double *)(lVar1 + 0x160) =
           local_138 * dVar7 + local_128 * dVar8 + dStack_120 * dVar9 + dVar6;
      *(double *)(lVar1 + 0x168) =
           dStack_120 * dVar7 + local_108 + (dVar9 * dVar4 - dVar8 * dStack_130);
      uVar5 = 1;
      goto LAB_143e07cc6;
    }
  }
  uVar5 = 0;
LAB_143e07cc6:
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e07d28 FUN_143e07d28 body=62 status=ok
// SIG undefined FUN_143e07d28(void)

void FUN_143e07d28(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b41f6f0;
  FUN_14892c32a(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 143e07d6c FUN_143e07d6c body=29 status=ok
// SIG undefined FUN_143e07d6c(void)

void FUN_143e07d6c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e07d8a FUN_143e07d8a body=57 status=ok
// SIG undefined FUN_143e07d8a(void)

undefined8 * FUN_143e07d8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b41f6f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e07dc4 FUN_143e07dc4 body=556 status=ok
// SIG undefined FUN_143e07dc4(void)

void FUN_143e07dc4(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(*param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar5 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar5 = *(uint *)(lVar9 + 0x10);
      bVar12 = uVar5 == 0;
      if (bVar12) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar5 = uVar7;
      }
    }
  }
  local_58 = CONCAT44(uVar5,uVar6);
  iVar3 = FUN_148930b6c(uVar5 ^ uVar6);
  lVar9 = 0;
  if (iVar3 != -1) {
    lVar9 = (longlong)iVar3 * 0x28 + DAT_14cb88d40;
  }
  if (lVar9 != 0) {
    iVar3 = *(int *)(lVar9 + 0x18);
    uVar10 = (ulonglong)iVar3;
    if (0 < (longlong)uVar10) {
      plVar4 = (longlong *)(lVar9 + 0x10);
      lVar11 = uVar10 * 0x68;
      do {
        lVar11 = lVar11 + -0x68;
        lVar1 = *plVar4;
        cVar2 = FUN_14892c3c6(lVar1 + lVar11);
        if (cVar2 == '\0') {
          FUN_148930f2c(plVar4,(int)uVar10 + -1);
          FUN_148930f94(plVar4);
        }
        else {
          *(double *)(lVar1 + 0x50 + lVar11) =
               *(double *)(lVar1 + 0x50 + lVar11) + 0.10000000149011612;
        }
        bVar12 = 1 < uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar12);
      iVar3 = *(int *)(lVar9 + 0x18);
    }
    if (iVar3 == 0) {
      lVar11 = *(longlong *)(*param_1 + 0x1f0);
      if (lVar11 == 0) {
        plVar4 = (longlong *)(*param_1 + 0x458);
      }
      else {
        plVar4 = (longlong *)(lVar11 + 0xf0);
      }
      lVar11 = *(longlong *)(lVar9 + 8);
      if (lVar11 != 0) {
        lVar1 = *plVar4;
        uVar5 = (uint)lVar11;
        if ((int)(uVar5 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar8 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar8 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar8 + (ulonglong)((uVar5 & 0xffffff) >> 5) * 4) >> (uVar5 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar8 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
            if (((lVar1 + lVar8 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar8) == lVar11)) &&
               (*(char *)(lVar1 + 1 + lVar8) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(lVar9 + 8) = 0;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0801c FUN_143e0801c body=29 status=ok
// SIG undefined FUN_143e0801c(void)

undefined8 FUN_143e0801c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0803a FUN_143e0803a body=632 status=ok
// SIG undefined FUN_143e0803a(void)

void FUN_143e0803a(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
       || ((plVar8 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != param_1[1])))) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
       (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)))) ||
     (((lVar6 = plVar8[0x16], lVar6 == 0 && (lVar6 = FUN_1448abda6(plVar8), lVar6 == 0)) ||
      ((*(byte *)(lVar6 + 0x155) & 0x20) != 0)))) goto LAB_143e08228;
  lVar3 = plVar8[0x1f6];
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x680) != '\0') {
      *(undefined1 *)(lVar3 + 0x680) = 0;
      FUN_140acee66();
    }
    if ((plVar8[0x15f] != 0) && (*(char *)(plVar8[0x15f] + 0x2b9) == '\x01')) {
      lVar3 = DAT_14cb24ad0;
      if (DAT_14cb24ad0 == 0) {
        plVar7 = (longlong *)FUN_145a7712c();
        lVar3 = plVar7[0x22];
        if (plVar7[0x22] == 0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          DAT_14cb24ad0 = plVar7[0x22];
          lVar3 = DAT_14cb24ad0;
          if (DAT_14cb24ad0 == 0) goto LAB_143e08139;
        }
      }
      DAT_14cb24ad0 = lVar3;
      (**(code **)(*(longlong *)plVar8[0x1f6] + 0x938))
                ((longlong *)plVar8[0x1f6],*(undefined1 *)(DAT_14cb24ad0 + 0xb8),0);
    }
  }
LAB_143e08139:
  lVar3 = plVar8[0x1f7];
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x658) != '\0')) {
    *(undefined1 *)(lVar3 + 0x658) = 0;
    FUN_147e420e8();
  }
  FUN_140a32e84(&local_60,lVar6);
  plVar7 = (longlong *)CONCAT44(uStack_54,uStack_58);
  if (plVar7 != (longlong *)0x0) {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_54,uStack_58) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_54,uStack_58) + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      lVar6 = CONCAT44(uStack_5c,local_60);
      if (lVar6 != 0) {
        FUN_1406ceb3e(plVar8,&local_60,&DAT_14c846480);
        plVar8[0x145] = local_30;
        *(undefined4 *)(plVar8 + 0x143) = local_40;
        *(undefined4 *)((longlong)plVar8 + 0xa1c) = uStack_3c;
        *(undefined4 *)(plVar8 + 0x144) = uStack_38;
        *(undefined4 *)((longlong)plVar8 + 0xa24) = uStack_34;
        *(undefined4 *)(plVar8 + 0x141) = local_50;
        *(undefined4 *)((longlong)plVar8 + 0xa0c) = uStack_4c;
        *(undefined4 *)(plVar8 + 0x142) = uStack_48;
        *(undefined4 *)((longlong)plVar8 + 0xa14) = uStack_44;
        *(undefined4 *)(plVar8 + 0x13f) = local_60;
        *(undefined4 *)((longlong)plVar8 + 0x9fc) = uStack_5c;
        *(undefined4 *)(plVar8 + 0x140) = uStack_58;
        *(undefined4 *)((longlong)plVar8 + 0xa04) = uStack_54;
        (**(code **)(*plVar8 + 0x540))(plVar8);
        FUN_1411d3172(lVar6,plVar8 + 0x2c);
      }
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
LAB_143e08228:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e082de FUN_143e082de body=29 status=ok
// SIG undefined FUN_143e082de(void)

undefined8 FUN_143e082de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0830d FUN_143e0830d body=3486 status=ok
// SIG undefined FUN_143e0830d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0830d(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  char *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (char *)0xea348daa0c52a9c;
  iStack_80 = 0x8e9a9235;
  uStack_7c = 0xe002c5bd;
  _DAT_14cb88a28 = 0xa0c52a9c;
  uRam000000014cb88a2c = 0xea348da;
  uRam000000014cb88a30 = 0x8e9a9235;
  uRam000000014cb88a34 = 0xe002c5bd;
  FUN_141005458(&local_88,0,L"GbxBodyNodeSettings_MoveSwitch",0);
  atexit((_func_5014 *)&LAB_143dfef5c);
  local_88 = "MovingPlatform";
  iStack_80 = 0xe;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb88a10 = (ulonglong)uVar3;
  local_88 = "Destination";
  iStack_80 = 0xb;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb88a38 = (ulonglong)uVar3;
  local_88 = "MovingPlatformMoveState";
  iStack_80 = 0x17;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb88a18 = (ulonglong)uVar3;
  local_88 = "MovingPlatformRelevantState";
  iStack_80 = 0x1b;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb88a20 = (ulonglong)uVar3;
  local_88 = "MovingPlatformInfluenceBounds";
  iStack_80 = 0x1d;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb88a40 = (ulonglong)uVar3;
  local_88 = (char *)0xbe904c294b82d394;
  iStack_80 = 0x9399c1ac;
  uStack_7c = 0x24466095;
  _DAT_14cb88a48 = 0x4b82d394;
  uRam000000014cb88a4c = 0xbe904c29;
  uRam000000014cb88a50 = 0x9399c1ac;
  uRam000000014cb88a54 = 0x24466095;
  FUN_141005458(&local_88,1,L"GbxMovingPlatformInstanceConfigComponent",0);
  atexit((_func_5014 *)&LAB_143e0073b);
  local_88 = "AssetRegistry";
  iStack_80 = 0xd;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb88a58 = (ulonglong)uVar3;
  _DAT_14cb88a60 = 0x47efffffe0000000;
  _DAT_14cb88a68 = 0x47efffffe0000000;
  _DAT_14cb88a70 = 0x47efffffe0000000;
  _DAT_14cb88a78 = 0x47efffffe0000000;
  _DAT_14cb88a80 = 0x47efffffe0000000;
  _DAT_14cb88a88 = 0x47efffffe0000000;
  _DAT_14cb88a90 = 0x47efffffe0000000;
  _DAT_14cb88a98 = 0x47efffffe0000000;
  local_88 = "bone";
  iStack_80 = 4;
  uStack_7c = uStack_7c & 0xffffff00;
  FUN_14001a6c0(&local_88,1);
  local_88 = "MovingPlatformInfluenceVolume";
  iStack_80 = 0x1d;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb88aa0 = (ulonglong)uVar3;
  DAT_14cb88b08 = 0;
  uRam000000014cb88b10 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e064c6;
  local_88 = &DAT_14011fc1e;
  FUN_1460f529c(&local_88);
  atexit((_func_5014 *)&LAB_143e033b8);
  _DAT_14cb88ba8 = &LAB_143e033bd;
  _DAT_14cb88bb0 = 0x434a0000;
  DAT_14cb88bb4 = 1;
  DAT_14cb88ba0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb88ba0;
  atexit((_func_5014 *)&LAB_143e033c2);
  local_88 = (char *)0x0;
  iStack_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  iStack_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_14a380e50;
  *(code **)(local_88 + 0x18) = FUN_148929687;
  local_98 = (char **)((ulonglong)local_98._4_4_ << 0x20);
  FUN_14156bb10(&DAT_14cb88bc0,L"gbx.music.load",L"load a music set for this world",&local_88);
  if (iStack_80 == 0) {
LAB_143e086b5:
    if (local_88 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    iStack_80 = 0;
    goto LAB_143e086b5;
  }
  atexit(FUN_143e033f6);
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_88,&DAT_14cb88bd0);
  if (cVar2 == '\0') {
    _DAT_14cb88bd0 = 0;
    uRam000000014cb88bd8 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb88be4 = 0;
  FUN_14052b5e0(&DAT_14cb88be0,"PlayerAwareness",0);
  _DAT_14cb88bf0 = "PlayerAwareness";
  local_88 = (char *)0x0;
  iStack_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  iStack_80 = 2;
  *(undefined ***)local_88 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_88 + 0x10) = lVar4;
  *(undefined ***)local_88 = &PTR_FUN_14acb7cb0;
  *(code **)(local_88 + 0x18) = FUN_143e0343d;
  local_98 = (char **)CONCAT44(local_98._4_4_,0x10001);
  FUN_141819a96(&DAT_14cb88bf8,L"ConsumeOxygen",
                L"Consume the given amount of oxygen off of the character\'s oxygen pool",&local_88)
  ;
  if (iStack_80 != 0) {
    if (local_88 == (char *)0x0) goto LAB_143e08815;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    iStack_80 = 0;
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143e08815:
  atexit(FUN_143e035ce);
  FUN_1446f470e(&DAT_14cb88c10,L"StopLooping",1);
  FUN_1446f470e(&DAT_14cb88c18,L"WaitForLoop",1);
  FUN_1446f470e(&DAT_14cb88c20,L"CombatInterruptHappened",1);
  _DAT_14cb88c68 = 0;
  LOCK();
  DAT_14cb88c60 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e03c2d);
  FUN_1446f470e(&DAT_14cb88c40,L"Perch",1);
  FUN_1446f470e(&DAT_14cb88c58,L"IdleTime",1);
  FUN_1446f470e(&DAT_14cb88c50,L"IdleInfinitely",1);
  FUN_1446f470e(&DAT_14cb88c30,L"LoopOnly",1);
  FUN_1446f470e(&DAT_14cb88c38,L"SkipEnter",1);
  FUN_1446f470e(&DAT_14cb88c28,L"RandomSeed",1);
  FUN_1446f470e(&DAT_14cb88c48,L"CombatInterruptsPerch",1);
  local_88 = (char *)0xa70046a2e96da779;
  iStack_80 = 0xae0e98b1;
  uStack_7c = 0x2fcef5a5;
  _DAT_14cb88c70 = 0xe96da779;
  uRam000000014cb88c74 = 0xa70046a2;
  uRam000000014cb88c78 = 0xae0e98b1;
  uRam000000014cb88c7c = 0x2fcef5a5;
  FUN_141005458(&local_88,0,L"PerchData",0);
  atexit((_func_5014 *)&LAB_143e03c32);
  _DAT_14cb88c88 = 0;
  LOCK();
  DAT_14cb88c80 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e03c3e);
  FUN_1446f470e(&DAT_14cb88c90,L"Perch",1);
  FUN_1446f470e(&DAT_14cb88c98,L"Tricks",1);
  _DAT_14cb88ca0 = 0xffffffff;
  _DAT_14cb88ca4 = 0;
  FUN_1446f470e(&DAT_14cb88ca8,L"ai_scripted_perch",1);
  _DAT_14cb88cb8 = &LAB_143e03d9a;
  _DAT_14cb88cc0 = 0x45005000;
  DAT_14cb88cc4 = 1;
  DAT_14cb88cb0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb88cb0;
  atexit((_func_5014 *)&LAB_143e03d9f);
  DAT_14cb88cd0._0_1_ = 0;
  ram0x00014cb88cd4 = 0;
  DAT_14cb88ce0 = 0;
  DAT_14cb88ce8 = 0xf00000d0;
  _DAT_14cb88cf0 = 0;
  _DAT_14cb88cf8 = 0;
  DAT_14cb88cfc = 0;
  _DAT_14cb88d00 = 0;
  _DAT_14cb88d08 = 0;
  _DAT_14cb88d10 = 0;
  _DAT_14cb88d20 = &LAB_143e0609a;
  DAT_14cb88d28 = 0x1a;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa250 = 0x48;
    _DAT_14c9aa310 = &DAT_14892dbf8;
    _DAT_14c9aa2f0 = &LAB_14892dbfa;
    _DAT_14c9aa2f8 = &LAB_14892dc2e;
    _DAT_14c9aa300 = &LAB_14892dc62;
    _DAT_14c9aa308 = &LAB_14892dca6;
    _DAT_14c9aa270 = FUN_1461ffa84;
    _DAT_14c9aa268 = &LAB_14892dbf2;
    _DAT_14c9aa320 = FUN_14892e050;
    _DAT_14c9aa360 = FUN_14892e078;
    _DAT_14c9aa258 = 0x3f000000;
    uRam000000014c9aa25c = 0x3f000000;
    uRam000000014c9aa260 = 0x3f800000;
    uRam000000014c9aa264 = 0x3f800000;
    DAT_14c9aa254 = 0x20;
    DAT_14c9aa2e8 = &LAB_143e06182;
    _DAT_14c9aa318 = FUN_143e061c8;
    _DAT_14c9aa2c8 = &LAB_143e061e4;
    _DAT_14c9aa2c0 = FUN_143e061f4;
    _DAT_14c9aa2a0 = &LAB_143e0621e;
    _DAT_14c9aa2b0 = FUN_143e0622e;
  }
  else {
    _DAT_14cb88d18 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb88d18;
  }
  FUN_1446f470e(&DAT_14cb88d30,L"DestructibleComponent0",1);
  FUN_1446f470e(&DAT_14cb88d38,L"PainterComponent",1);
  DAT_14cb88d98 = 0;
  atexit((_func_5014 *)&LAB_143e052f2);
  DAT_14cb88f10 = 0;
  _DAT_14cb88f18 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e082fc;
  local_88 = &DAT_14011fc1e;
  FUN_1461869e6(&local_88);
  atexit((_func_5014 *)&LAB_143e05338);
  _DAT_14cb89590 = 0;
  uRam000000014cb89598 = 0;
  _DAT_14cb895a0 = 0;
  DAT_14cb895a8 = 0;
  uRam000000014cb895b0 = 0;
  FUN_1446ddda2(&DAT_14cb89590,"pingable_neutral",0);
  atexit((_func_5014 *)&LAB_143e0533d);
  _DAT_14cb88fa8 = &LAB_143e0534e;
  _DAT_14cb88fb0 = 0x47c2a640;
  DAT_14cb88fb4 = 1;
  DAT_14cb88fa0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb88fa0;
  atexit((_func_5014 *)&LAB_143e05353);
  DAT_14cb89020 = 0;
  _DAT_14cb89028 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e08302;
  local_88 = &DAT_14011fc1e;
  FUN_1460f5a32(&local_88);
  atexit((_func_5014 *)&LAB_143e053b0);
  _DAT_14cb890b8 = &LAB_143e053b5;
  _DAT_14cb890c0 = 0x47c2a680;
  DAT_14cb890c4 = 1;
  DAT_14cb890b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb890b0;
  atexit((_func_5014 *)&LAB_143e053ba);
  DAT_14cb89130 = 0;
  uRam000000014cb89138 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e08308;
  local_88 = &DAT_14011fc1e;
  local_90 = &DAT_149e02088;
  local_98 = &local_88;
  FUN_145dc59f4(&DAT_14cb89140,"AimAssistParameters",FUN_14892d7a6,0);
  atexit((_func_5014 *)&LAB_143e05432);
  _DAT_14cb891c4 = 0;
  FUN_14052b5e0(&DAT_14cb891c0,"volume_overall",0);
  _DAT_14cb891d0 = 0;
  FUN_14052b5e0(&DAT_14cb891cc,"volume_music",0);
  _DAT_14cb891dc = 0;
  FUN_14052b5e0(&DAT_14cb891d8,"volume_sfx",0);
  _DAT_14cb891e8 = 0;
  FUN_14052b5e0(&DAT_14cb891e4,"volume_dialog",0);
  _DAT_14cb891f4 = 0;
  FUN_14052b5e0(&DAT_14cb891f0,"PlayInBackground",0);
  _DAT_14cb89200 = 0;
  FUN_14052b5e0(&DAT_14cb891fc,"MuteHitNotifies",0);
  DAT_14cb895b8 = 0;
  _DAT_14cb895c0 = 0;
  _DAT_14cb895c8 = 2;
  atexit(FUN_143e0543e);
  local_88 = (char *)CONCAT44(local_88._4_4_,3);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb89208,L"gbx.GbxFrameGenDisableMode",&local_88,
                L"Controls how we disable frame gen during the game. \n0 - Always allow1 - Disable in Menus2 - Disable in Cinematics3 - Disable All (does not disable frame gen in game)"
               );
  atexit(FUN_143e0546f);
  local_88 = (char *)CONCAT71(local_88._1_7_,1);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cb89220,L"gbx.DisableDlssInCinematics",&local_88,
                L"Disable DLSS during cinematics");
  atexit(FUN_143e054b4);
  local_88 = "state";
  iStack_80 = 5;
  uStack_7c = uStack_7c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_88,1);
  DAT_14cb895d0 = (ulonglong)uVar3;
  _DAT_14cb89248 = 0;
  uRam000000014cb89250 = 0;
  _DAT_14cb89258 = 0;
  DAT_14cb89260 = 0;
  uRam000000014cb89268 = 0;
  FUN_1446ddda2(&DAT_14cb89248,"state.char",0);
  atexit((_func_5014 *)&LAB_143e05dcc);
  _DAT_14cb89270 = 0;
  uRam000000014cb89278 = 0;
  _DAT_14cb89280 = 0;
  DAT_14cb89288 = 0;
  uRam000000014cb89290 = 0;
  FUN_1446ddda2(&DAT_14cb89270,"engine.state.char",0);
  atexit((_func_5014 *)&LAB_143e05ddd);
  FUN_14655a802();
  atexit((_func_5014 *)&LAB_143e05f8b);
  _DAT_14cb89500 = DAT_14cb892d4;
  _DAT_14cb89508 = 0;
  _DAT_14cb89498 = 0;
  _DAT_14cb894a0 = 0;
  _DAT_14cb89458 = 0;
  uRam000000014cb89460 = 0;
  _DAT_14cb89468 = 0;
  uRam000000014cb89470 = 0;
  _DAT_14cb89478 = 0;
  uRam000000014cb89480 = 0;
  _DAT_14cb894a4 = 0xffffffff00000080;
  _DAT_14cb894d0 = 0;
  _DAT_14cb894d8 = 0;
  _DAT_14cb894ac = 0;
  uRam000000014cb894b4 = 0;
  _DAT_14cb894bc = 0;
  _DAT_14cb894dc = 0xffffffff00000080;
  _DAT_14cb894e4 = 0;
  uRam000000014cb894ec = 0;
  _DAT_14cb894f4 = 0;
  _DAT_14cb894f8 = 2;
  _DAT_14cb89450 = &PTR_FUN_14b412d50;
  atexit((_func_5014 *)&LAB_143e05f97);
  FUN_1446f470e(&local_88,L"GbxPlayerBot",1);
  FUN_142767454(&DAT_14cb89510,&local_88,3,3);
  atexit(FUN_143e05fa3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e09107 FUN_143e09107 body=49 status=ok
// SIG undefined FUN_143e09107(void)

void FUN_143e09107(void)

{
  FUN_144760e21(DAT_14cb896c8,DAT_14cb896d0);
  if (DAT_14cb896c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e09138 FUN_143e09138 body=49 status=ok
// SIG undefined FUN_143e09138(void)

void FUN_143e09138(void)

{
  FUN_144760e21(DAT_14cb896e0,DAT_14cb896e8);
  if (DAT_14cb896e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e09169 FUN_143e09169 body=49 status=ok
// SIG undefined FUN_143e09169(void)

void FUN_143e09169(void)

{
  FUN_144760e21(DAT_14cb896f8,DAT_14cb89700);
  if (DAT_14cb896f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e0919a FUN_143e0919a body=49 status=ok
// SIG undefined FUN_143e0919a(void)

void FUN_143e0919a(void)

{
  FUN_144760e21(DAT_14cb89710,DAT_14cb89718);
  if (DAT_14cb89710 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e091cb FUN_143e091cb body=49 status=ok
// SIG undefined FUN_143e091cb(void)

void FUN_143e091cb(void)

{
  FUN_144760e21(DAT_14cb89728,DAT_14cb89730);
  if (DAT_14cb89728 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e091fc FUN_143e091fc body=49 status=ok
// SIG undefined FUN_143e091fc(void)

void FUN_143e091fc(void)

{
  FUN_144760e21(DAT_14cb89740,DAT_14cb89748);
  if (DAT_14cb89740 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e0922d FUN_143e0922d body=49 status=ok
// SIG undefined FUN_143e0922d(void)

void FUN_143e0922d(void)

{
  FUN_144760e21(DAT_14cb89758,DAT_14cb89760);
  if (DAT_14cb89758 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e0929a FUN_143e0929a body=1041 status=ok
// SIG undefined FUN_143e0929a(void)

undefined8 FUN_143e0929a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  size_t sVar8;
  longlong lVar9;
  GUID *pguid;
  wchar_t *_Str;
  byte **ppbVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  GUID local_118;
  longlong local_108 [2];
  longlong local_f8;
  undefined4 uStack_f0;
  byte *local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c0;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)((longlong)param_1 + 0x4dd) == '\0') {
    local_128 = 0;
    FUN_1401412e0(param_2,&local_d8,1,0);
    if (param_3 != &DAT_14c9a1308) {
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      *param_3 = local_d8;
      param_3[1] = (longlong)local_d0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    goto LAB_143e0959f;
  }
  FUN_14009b010(param_3,3,0);
  local_e8 = (byte *)0x0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,3,0);
  if (param_1 == (longlong *)0x0) {
LAB_143e09602:
    if (((byte *)param_1[0x96] != (byte *)0x0) &&
       (((*(byte *)param_1[0x96] & 3) != 0 && ((char)param_1[0x98] == '\0')))) {
      uStack_f0 = DAT_14cb896b8;
      local_f8 = DAT_14cb896b0;
      FUN_1448075d0(&local_d8);
      lVar9 = *param_3;
      if (lVar9 != 0) {
        ppbVar10 = (byte **)(param_1 + 0x96);
LAB_143e093a8:
        local_128 = 0;
        FUN_14014191c(lVar9,&local_d8,ppbVar10,0);
      }
LAB_143e093b0:
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar5 = FUN_1403c7982();
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_143e09602;
    uVar5 = FUN_1403c7982();
    plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
    if ((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) goto LAB_143e09602;
    uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_1418861ea(uVar5,&local_e8,1);
    if ((local_e8 != (byte *)0x0) && ((*local_e8 & 3) != 0)) {
      uStack_f0 = DAT_14cb896b8;
      local_f8 = DAT_14cb896b0;
      FUN_1448075d0(&local_d8);
      lVar9 = *param_3;
      if (lVar9 != 0) {
        ppbVar10 = &local_e8;
        goto LAB_143e093a8;
      }
      goto LAB_143e093b0;
    }
  }
  plVar6 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_e8 = (byte *)0x0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,1,0);
  lVar9 = param_1[0x9a];
  iVar2 = *(int *)((longlong)param_1 + 0x4cc);
  iVar3 = *(int *)((longlong)param_1 + 0x4d4);
  lVar4 = param_1[0x9b];
  if ((((int)lVar9 == 0 && iVar2 == 0) && iVar3 == 0) && (int)lVar4 == 0) {
    pguid = &local_118;
    local_118.Data1 = 0;
    local_118.Data2 = 0;
    local_118.Data3 = 0;
    local_118.Data4[0] = '\0';
    local_118.Data4[1] = '\0';
    local_118.Data4[2] = '\0';
    local_118.Data4[3] = '\0';
    local_118.Data4[4] = '\0';
    local_118.Data4[5] = '\0';
    local_118.Data4[6] = '\0';
    local_118.Data4[7] = '\0';
    CoCreateGuid(pguid);
    plVar6 = local_108;
  }
  else {
    pguid = (GUID *)((longlong)param_1 + 0x4cc);
    plVar6 = &local_f8;
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  FUN_1407c869a(pguid,plVar6,0);
  if ((int)plVar6[1] == 0) {
    _Str = L"";
LAB_143e094e2:
    local_58 = 0;
    sVar8 = wcslen(_Str);
    FUN_1449b853c(&local_d8,_Str,sVar8 & 0xffffffff,1);
  }
  else {
    _Str = (wchar_t *)*plVar6;
    local_58 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_143e094e2;
    local_50 = 0;
    local_48 = 0;
  }
  if ((local_e8 != (byte *)0x0) && ((local_e8[1] & 2) == 0)) {
    FUN_140126aca(local_e8,local_50);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((((int)lVar9 != 0 || iVar2 != 0) || iVar3 != 0) || (int)lVar4 != 0) {
    local_108[0] = local_f8;
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  local_118.Data4[0] = (undefined1)DAT_14cb896a0;
  local_118.Data4[1] = DAT_14cb896a0._1_1_;
  local_118.Data4[2] = DAT_14cb896a0._2_1_;
  local_118.Data4[3] = DAT_14cb896a0._3_1_;
  local_118.Data1 = (ulong)DAT_14cb89698;
  local_118.Data2 = DAT_14cb89698._4_2_;
  local_118.Data3 = DAT_14cb89698._6_2_;
  FUN_1448075d0(&local_d8);
  if (*param_3 != 0) {
    local_128 = 0;
    FUN_14014191c(*param_3,&local_d8,&local_e8,0);
  }
  local_d0 = plStack_e0;
  if (local_c0 != 0) {
    FUN_1400020a8();
    local_d0 = plStack_e0;
  }
LAB_143e0959f:
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143e09728 FUN_143e09728 body=502 status=ok
// SIG undefined FUN_143e09728(void)

longlong FUN_143e09728(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      lVar3 = param_1[0x76];
      if (lVar3 != 0) goto LAB_143e09774;
      if (*(code **)(*param_1 + 0x5f8) == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)param_1 + 0x75b4) != 0) {
            uVar1 = *(uint *)(param_1 + 0xeb6);
            lVar3 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143e09774;
            plVar2 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar2 != (longlong *)0x0) &&
               (((int)plVar2[2] == *(int *)((longlong)param_1 + 0x75b4) &&
                ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
                lVar3 = *plVar2;
              }
              else {
                lVar3 = 0;
              }
              lVar3 = lVar3 + 0x110;
              goto LAB_143e0983d;
            }
          }
        }
        else {
          lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_143e0983d:
          if (lVar3 != 0) {
            lVar3 = *(longlong *)(lVar3 + 0x20);
            goto LAB_143e0984a;
          }
        }
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x5f8))(param_1);
LAB_143e0984a:
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x3b0);
          goto LAB_143e09774;
        }
      }
    }
  }
  lVar3 = 0;
LAB_143e09774:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e09992 FUN_143e09992 body=389 status=ok
// SIG undefined FUN_143e09992(void)

longlong * FUN_143e09992(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_4 + 0x150) != 0) {
    lVar6 = *(longlong *)(param_4 + 0x148);
    lVar5 = (longlong)*(int *)(param_4 + 0x150) * 0x88;
    do {
      if (*(ulonglong **)(lVar6 + 0x50) == (ulonglong *)0x0) {
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar8 = **(ulonglong **)(lVar6 + 0x50);
        uVar7 = uVar8 & 0xffffffff;
        uVar8 = uVar8 & 0xffffffff00000000;
      }
      if (*(ulonglong *)(param_1 + 8) == *(ulonglong *)(lVar6 + 0x48)) {
LAB_143e09a23:
        if (lVar6 != 0) {
          plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar4[1] = (longlong)&DAT_100000001;
          *plVar4 = (longlong)&PTR_FUN_14b420ae0;
          plVar1 = plVar4 + 2;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar4[2] = (longlong)&PTR_FUN_14b420af8;
          local_40 = plVar1;
          local_38 = plVar4;
          FUN_14893935a(&local_40,plVar1);
          FUN_1489335fa(plVar1,lVar6,*(undefined1 *)(param_1 + 0x10));
          plVar3 = local_38;
          *param_2 = (longlong)plVar1;
          param_2[1] = (longlong)plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_38 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  goto LAB_143e09a2e;
                }
              }
            }
          }
          if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      if ((uVar7 | uVar8) != 0 && *(ulonglong *)(param_1 + 8) == (uVar7 | uVar8))
      goto LAB_143e09a23;
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + -0x88;
    } while (lVar5 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143e09a2e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}


