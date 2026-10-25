// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145746f10 FUN_145746f10 body=669 status=ok
// SIG undefined FUN_145746f10(void)

int * FUN_145746f10(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  int *local_140;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_120;
  short **local_118;
  short *local_110;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_14574729c(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_145747101;
  }
  local_140 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b422c50;
  plVar8[2] = (longlong)&PTR_FUN_14b422c68;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_1457471ae(param_1,local_70,local_98);
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1457471f4(param_1,local_f8);
  local_118 = &local_110;
  local_120 = &LAB_1461d2252;
  local_100 = *(byte *)(param_6 + 8);
  local_110 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  param_2 = local_140;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_160 = &local_120;
  local_168 = local_108;
  local_158 = local_f8;
  local_150 = local_70;
  local_148 = local_98;
  local_130 = plVar8 + 2;
  local_128 = plVar8;
  FUN_1406ac01c(param_4,local_140,param_5,&local_130);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_134);
      *param_2 = local_134;
      iVar3 = local_134;
      if (local_134 != -1) goto LAB_1457470c3;
    }
  }
  else {
LAB_1457470c3:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
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
LAB_145747101:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457471ae FUN_1457471ae body=70 status=ok
// SIG undefined FUN_1457471ae(void)

void FUN_1457471ae(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 1457471f4 FUN_1457471f4 body=166 status=ok
// SIG undefined FUN_1457471f4(void)

void FUN_1457471f4(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574729c FUN_14574729c body=170 status=ok
// SIG undefined FUN_14574729c(void)

undefined8 FUN_14574729c(ushort *param_1,undefined8 param_2)

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
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
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



// FUNCTION 145747346 FUN_145747346 body=502 status=ok
// SIG undefined FUN_145747346(void)

undefined8 * FUN_145747346(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  
  puVar3 = TlsGetValue(*(DWORD *)(param_1 + 0x20));
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *puVar3 = 2;
    lVar4 = 0x50;
    do {
      *(undefined8 *)((longlong)puVar3 + lVar4 + -0x48) = 0;
      *(undefined8 *)((longlong)puVar3 + lVar4 + -0x40) = 0xffffffff00000000;
      *(undefined8 *)((longlong)puVar3 + lVar4 + -0x28) = 0;
      puVar2 = (undefined4 *)((longlong)puVar3 + lVar4 + -0x20);
      *puVar2 = 0;
      puVar2[1] = 0x80;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0;
      *(undefined8 *)((longlong)puVar3 + lVar4 + -8) = 0;
      *(undefined4 *)((longlong)puVar3 + lVar4) = 0;
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != 0xf0);
    puVar3 = puVar3 + 1;
    TlsSetValue(*(DWORD *)(param_1 + 0x20),puVar3);
  }
  uVar5 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar5 = DAT_14c760d80 ^ 1;
  }
  puVar1 = (undefined8 *)((longlong)puVar3 + (ulonglong)(uVar5 * 0x50));
  if (*(int *)((longlong)puVar3 + (ulonglong)(uVar5 * 0x50) + 0xc) != -1) {
    return puVar1;
  }
  *(undefined4 *)(puVar1 + 9) = 0;
  if (puVar1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(puVar1);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar7 = *(int *)(param_1 + 0x268);
  *(uint *)(param_1 + 0x268) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x26c) < iVar7 + 1U) {
    FUN_1457a9dae((longlong *)(param_1 + 0x260),iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x260) + (longlong)iVar7 * 8) = puVar1;
  if (uVar5 == 0) {
    plVar6 = (longlong *)(param_1 + 0x270);
    iVar7 = *(int *)(param_1 + 0x278);
    *(uint *)(param_1 + 0x278) = iVar7 + 1U;
    if (iVar7 + 1U <= *(uint *)(param_1 + 0x27c)) goto LAB_145747464;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x280);
    iVar7 = *(int *)(param_1 + 0x288);
    *(uint *)(param_1 + 0x288) = iVar7 + 1U;
    if (iVar7 + 1U <= *(uint *)(param_1 + 0x28c)) goto LAB_145747464;
  }
  FUN_1457a9dae(plVar6,iVar7);
LAB_145747464:
  *(undefined8 **)(*plVar6 + (longlong)iVar7 * 8) = puVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return puVar1;
}



// FUNCTION 14574753c FUN_14574753c body=38 status=ok
// SIG undefined FUN_14574753c(void)

undefined8 FUN_14574753c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x50);
    uVar1 = FUN_1409844f4(uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 145747562 FUN_145747562 body=89 status=ok
// SIG undefined FUN_145747562(void)

void FUN_145747562(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  longlong local_18 [2];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    param_2 = (longlong *)(param_1 + 4);
    plVar1 = local_18;
  }
  else {
    plVar1 = local_28;
  }
  *plVar1 = (longlong)param_2;
  *(undefined4 *)(plVar1 + 1) = 1;
  FUN_1407d0f16(plVar1,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457475bc FUN_1457475bc body=99 status=ok
// SIG undefined FUN_1457475bc(void)

undefined4 * FUN_1457475bc(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 1) = param_2;
  local_20 = param_2;
  FUN_1407d0e7d();
  FUN_144a13f80(&DAT_14c9a1210,local_24,&local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145747620 FUN_145747620 body=132 status=ok
// SIG undefined FUN_145747620(void)

void FUN_145747620(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457476a6 FUN_1457476a6 body=159 status=ok
// SIG undefined FUN_1457476a6(void)

void FUN_1457476a6(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c9a1698;
  if (param_1 <= (int)DAT_14c9a1698) {
    if (DAT_14c9a169c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a1698) {
        uVar2 = DAT_14c9a1698;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9a1698 * 3) >> 3) + (longlong)(int)DAT_14c9a1698 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14c9a169c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a1690,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145747746 FUN_145747746 body=106 status=ok
// SIG undefined FUN_145747746(void)

bool FUN_145747746(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar1;
    }
    else {
      *(undefined4 **)(param_1[2] + 8) = puVar1;
      *(longlong *)(puVar1 + 4) = param_1[2];
    }
    param_1[2] = (longlong)puVar1;
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
  }
  return puVar1 != (undefined4 *)0x0;
}



// FUNCTION 1457477b0 FUN_1457477b0 body=108 status=ok
// SIG undefined FUN_1457477b0(void)

bool FUN_1457477b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar1 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar2;
    }
    else {
      *(undefined8 **)(param_1[2] + 0x10) = puVar2;
      puVar2[3] = param_1[2];
    }
    param_1[2] = (longlong)puVar2;
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
  }
  return puVar2 != (undefined8 *)0x0;
}



// FUNCTION 14574781c FUN_14574781c body=147 status=ok
// SIG undefined FUN_14574781c(void)

void FUN_14574781c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457478b0 FUN_1457478b0 body=393 status=ok
// SIG undefined FUN_1457478b0(void)

void FUN_1457478b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = FUN_14487fd02();
  if (iVar1 != 3) {
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 == 0) || (lVar2 = FUN_1400f6f32(lVar2), lVar2 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x68);
    }
    uVar3 = FUN_1447210f0(param_1);
    lVar4 = FUN_140149a73(uVar3,0);
    if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar4 = FUN_1407d7c86(param_2), lVar4 != 0)) &&
       ((lVar5 = FUN_1407d824e(lVar4), lVar5 != 0 &&
        (lVar6 = FUN_1447210f0(param_1), 0 < *(int *)(lVar6 + 0x238))))) {
      iVar1 = 0;
      lVar10 = 0;
      do {
        lVar7 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar10);
        if (lVar7 == 0) {
LAB_145747a35:
          lVar7 = 0;
        }
        else {
          lVar8 = FUN_1449f3324();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_145747a35;
        }
        FUN_140d27df6(lVar2,local_4c,lVar7);
        if (((-1 < local_4c[0]) &&
            (plVar9 = (longlong *)FUN_140d71416(lVar2,local_4c), plVar9 != (longlong *)0x0)) &&
           (lVar7 = (**(code **)(*plVar9 + 0x7e0))(plVar9,lVar5 + 0x1c), lVar7 != 0)) {
          FUN_1407d853c(lVar7,lVar4);
        }
        lVar10 = lVar10 + 8;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(lVar6 + 0x238));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145747a3a FUN_145747a3a body=165 status=ok
// SIG undefined FUN_145747a3a(void)

void FUN_145747a3a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    FUN_144837e54(param_3,0);
    if ((*(byte **)(param_3 + 0x48) != (byte *)0x0) && ((**(byte **)(param_3 + 0x48) & 0x6b) == 3))
    {
      if (*param_2 == 0) {
        lVar1 = FUN_145747ae0();
        *param_2 = lVar1;
        *(longlong *)(param_3 + 0x30) = lVar1;
        FUN_1407d81c6(param_1,param_3);
      }
      if (*(int *)(param_3 + 0x44) == *(int *)(param_3 + 0x40)) {
        return;
      }
      FUN_1407d8264(*param_2,param_3 + 0x48,*(undefined8 *)(param_3 + 0x68));
      *(undefined1 *)(*param_2 + 0x18) = 1;
      *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
      return;
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x68) = 0;
    if (*(int *)(lVar1 + 0x6c) != 0) {
      FUN_14583f7d4(lVar1 + 0x60,0);
    }
    *(undefined1 *)(*param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 145747ae0 FUN_145747ae0 body=68 status=ok
// SIG undefined FUN_145747ae0(void)

void FUN_145747ae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143e562b4();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b3d99a0;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 145747b24 FUN_145747b24 body=143 status=ok
// SIG undefined FUN_145747b24(void)

void FUN_145747b24(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145747bb4 FUN_145747bb4 body=90 status=ok
// SIG undefined FUN_145747bb4(void)

void FUN_145747bb4(longlong *param_1)

{
  FUN_1407ddd26(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145747c0e FUN_145747c0e body=785 status=ok
// SIG undefined FUN_145747c0e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145747c0e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined ***pppuVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_128 [40];
  longlong local_100 [10];
  ulonglong *local_b0;
  uint local_a4;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_8c [4];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  ulonglong **local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a4 = 0;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_a4);
    }
    else {
      FUN_14572512c(param_2,&local_a4);
    }
  }
  else {
    local_a4 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar7 = local_a4;
  if (0 < (int)local_a4) {
    uVar11 = (ulonglong)local_a4;
    puVar5 = (ulonglong *)FUN_144a7d36f();
    *puVar5 = uVar11;
    puVar3 = puVar5 + 1;
    lVar9 = 0;
    do {
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0x78) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0x80) = 0x8000000000;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 0x38);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 0x48);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)puVar5 + lVar9 + 0x58);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0x98) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0xa0) = 0x8000000000;
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0xb8) = 0;
      *(undefined8 *)((longlong)puVar5 + lVar9 + 0xc0) = 0x8000000000;
      *(uint *)((longlong)puVar5 + lVar9 + 200) =
           *(uint *)((longlong)puVar5 + lVar9 + 200) & 0xffffffe0 | 0xf;
      lVar9 = lVar9 + 200;
    } while (uVar11 * 200 - lVar9 != 0);
    iVar4 = *(int *)(param_1 + 0x248);
    *(uint *)(param_1 + 0x248) = iVar4 + 1U;
    local_b0 = puVar3;
    if (*(uint *)(param_1 + 0x24c) < iVar4 + 1U) {
      FUN_14700a186(param_1 + 0x240,iVar4);
      uVar7 = local_a4;
    }
    *(ulonglong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 8) = puVar3;
    lVar9 = param_1 + 400;
    if ((uint)(*(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x1c4)) < uVar7) {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar7);
      }
      FUN_14701bd26(lVar9,uVar7);
      iVar4 = 1;
      if (3 < uVar7) {
        uVar7 = (uVar7 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x1d8) == 0) || (*(int *)(param_1 + 0x1d8) < iVar4)) {
        *(int *)(param_1 + 0x1d8) = iVar4;
        FUN_14701b2f4(lVar9);
      }
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149fcb970;
    local_60 = &local_b0;
    local_58 = local_a4;
    local_88[0] = &LAB_142aea5d8;
    local_100[7] = 0;
    local_100[8] = 0;
    local_100[5] = 0;
    local_100[6] = 0;
    local_100[3] = 0;
    local_100[4] = 0;
    local_100[1] = 0;
    local_100[2] = 0;
    if (0 < (int)local_a4) {
      lVar10 = 0;
      lVar8 = 0;
      do {
        local_100[0] = (longlong)local_b0 + lVar10;
        FUN_147012222(local_100[0],param_2,local_88,local_100 + 1);
        local_a0 = local_100[0];
        local_98 = local_100;
        FUN_14701bec8(lVar9,local_8c,&local_a0);
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 200;
      } while (lVar8 < (int)local_a4);
    }
    FUN_147012322(local_100 + 1);
    if (local_88[0] != (undefined1 *)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145747f22 FUN_145747f22 body=108 status=ok
// SIG undefined FUN_145747f22(void)

undefined8 FUN_145747f22(char *param_1)

{
  char cVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  code *local_18;
  char **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (undefined7)(local_8 >> 8);
  uVar2 = CONCAT71(uVar3,1);
  LOCK();
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *param_1 = '\0';
  }
  else {
    uVar2 = CONCAT71(uVar3,cVar1);
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*param_1);
    do {
      if ((char)uVar2 != '\x01') {
        local_10 = &local_20;
        local_18 = FUN_1400e502e;
        local_20 = param_1;
        uVar2 = FUN_14008cf08();
        break;
      }
      uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
      uVar2 = CONCAT71(uVar3,1);
      LOCK();
      cVar1 = *param_1;
      if (cVar1 == '\x01') {
        *param_1 = '\0';
      }
      else {
        uVar2 = CONCAT71(uVar3,cVar1);
      }
      UNLOCK();
    } while (cVar1 != '\x01');
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 145747f90 FUN_145747f90 body=271 status=ok
// SIG undefined FUN_145747f90(void)

void FUN_145747f90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_a78 [32];
  longlong local_a58;
  longlong lStack_a50;
  longlong local_a48;
  undefined4 local_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  longlong local_a30;
  undefined4 local_a28;
  longlong local_180;
  longlong local_f8;
  char local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  FUN_1400e6e60(&local_a58);
  (**(code **)(*param_1 + 0x5f8))(param_1,0,&local_a58);
  param_1[0x188] = *param_2;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (lVar1 != DAT_14cb71810)) {
    param_1[0x189] = lVar1;
  }
  *(int *)(param_1 + 0x192) = (int)param_1[0x18a];
  *(undefined4 *)(param_1 + 0x18b) = local_a28;
  param_1[0x18e] = local_a48;
  param_1[0x18c] = local_a58;
  param_1[0x18d] = lStack_a50;
  param_1[0x191] = local_a30;
  *(undefined4 *)(param_1 + 399) = local_a40;
  *(undefined4 *)((longlong)param_1 + 0xc7c) = uStack_a3c;
  *(undefined4 *)(param_1 + 400) = uStack_a38;
  *(undefined4 *)((longlong)param_1 + 0xc84) = uStack_a34;
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457480a0 FUN_1457480a0 body=20 status=ok
// SIG undefined FUN_1457480a0(void)

void FUN_1457480a0(int *param_1)

{
  DAT_14cab2fe8 = DAT_14cab2fe8 + 1;
  *param_1 = DAT_14cab2fe8;
  return;
}



// FUNCTION 1457480b4 FUN_1457480b4 body=140 status=ok
// SIG undefined FUN_1457480b4(void)

void FUN_1457480b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb8a458;
  if (param_1 <= (int)DAT_14cb8a458) {
    if (DAT_14cb8a45c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb8a458) {
        uVar2 = DAT_14cb8a458;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb8a458 + ((ulonglong)((longlong)(int)DAT_14cb8a458 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb8a45c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb8a450,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145748142 FUN_145748142 body=695 status=ok
// SIG undefined FUN_145748142(void)

void FUN_145748142(longlong *param_1,longlong *param_2,undefined4 *param_3,char param_4,
                  longlong *param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_308 [32];
  undefined4 *local_2e8;
  ulonglong local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [512];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2e8 = param_3;
  iVar1 = (**(code **)(*param_1 + 0x7b0))();
  iVar10 = iVar1;
  if ((param_4 != '\0') && (iVar2 = (**(code **)(*param_1 + 0xa08))(param_1), iVar1 < iVar2)) {
    iVar10 = iVar2;
  }
  iVar2 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0x2000000000;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0x20;
  uStack_a0 = 0xffffffff;
  iStack_9c = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (0 < iVar10) {
    do {
      if (param_5 == (longlong *)0x0) {
LAB_145748208:
        lVar4 = (**(code **)(*param_1 + 0x610))(param_1,iVar2);
        if ((lVar4 != 0) &&
           (uVar5 = (**(code **)(*param_1 + 0x678))(param_1,iVar2,lVar4,0), local_2e0 = uVar5,
           uVar5 != 0)) {
          if ((int)local_c0 != iStack_9c) {
            uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            puVar7 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar7 = local_98;
            }
            iVar8 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            if (iVar8 != -1) {
              puVar7 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar7 = local_2c8;
              }
              do {
                if (*(ulonglong *)(puVar7 + (longlong)iVar8 * 0x10) == uVar5) goto LAB_1457482b1;
                iVar8 = *(int *)(puVar7 + (longlong)iVar8 * 0x10 + 8);
              } while (iVar8 != -1);
            }
          }
          plVar6 = param_2;
          if (param_6 != 0) {
            uVar9 = uVar5;
            if (*(ulonglong *)(uVar5 + 0x110) != 0) {
              uVar9 = *(ulonglong *)(uVar5 + 0x110);
            }
            plVar6 = (longlong *)FUN_1405b2aea(param_6,uVar9,param_2);
          }
          if (*plVar6 != 0) {
            local_2d8 = *local_2e8;
            uStack_2d4 = local_2e8[1];
            uStack_2d0 = local_2e8[2];
            uStack_2cc = local_2e8[3];
            FUN_14016d7a8(uVar5,plVar6,&local_2d8);
          }
          FUN_1407e55b2(local_2c8,&local_2d8,&local_2e0);
        }
      }
      else if ((longlong)(int)param_5[1] != 0) {
        uVar5 = 0;
        do {
          if (*(int *)(*param_5 + uVar5) == iVar2 % iVar1) {
            if ((int)(~uVar5 >> 2) != 0) goto LAB_145748208;
            break;
          }
          uVar5 = uVar5 + 4;
        } while ((longlong)(int)param_5[1] * 4 != uVar5);
      }
LAB_1457482b1:
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar10);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1407e5394(local_2c8);
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457483fa FUN_1457483fa body=71 status=ok
// SIG undefined FUN_1457483fa(void)

undefined8 * FUN_1457483fa(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145748442 FUN_145748442 body=71 status=ok
// SIG undefined FUN_145748442(void)

undefined8 * FUN_145748442(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14574848a FUN_14574848a body=237 status=ok
// SIG undefined FUN_14574848a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14574848a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  FUN_1457485dc(&DAT_14cae4e90,DAT_14c760db4);
  DAT_14cae4e90 = &PTR_FUN_14a975170;
  plVar3 = (longlong *)FUN_145748577();
  plVar4 = DAT_14cae4ea8;
  _DAT_14cae4ea0 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    if (DAT_14cae4ea8 == (longlong *)0x0) {
      return;
    }
    DAT_14cae4ea8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 == DAT_14cae4ea8) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_1457484e4;
    }
    bVar5 = DAT_14cae4ea8 == (longlong *)0x0;
    plVar4 = DAT_14cae4ea8;
    DAT_14cae4ea8 = plVar3;
    if (bVar5) goto LAB_1457484e4;
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
  if (plVar3 == (longlong *)0x0) {
    return;
  }
LAB_1457484e4:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014574854d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 145748577 FUN_145748577 body=101 status=ok
// SIG undefined FUN_145748577(void)

undefined8 * FUN_145748577(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a9751a0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  FUN_1407edadc(puVar1 + 2,0,0);
  return puVar1;
}



// FUNCTION 1457485dc FUN_1457485dc body=168 status=ok
// SIG undefined FUN_1457485dc(void)

undefined8 * FUN_1457485dc(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  *param_1 = &PTR_FUN_14a926040;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_144a34e6c(param_1 + 5);
  param_1[5] = &PTR_FUN_14a973680;
  param_1[8] = 0;
  FUN_144a34e6c(param_1 + 9);
  param_1[9] = &PTR_FUN_14a9736e0;
  param_1[0xc] = 0;
  FUN_144a34e6c(param_1 + 0xd);
  param_1[0xd] = &PTR_FUN_14a973750;
  param_1[0x10] = 0;
  FUN_144a34e6c(param_1 + 0x11);
  param_1[0x11] = &PTR_FUN_14a9737b0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145748684 FUN_145748684 body=159 status=ok
// SIG undefined FUN_145748684(void)

void FUN_145748684(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb262d8;
  if (param_1 <= (int)DAT_14cb262d8) {
    if (DAT_14cb262dc == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb262d8) {
        uVar2 = DAT_14cb262d8;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb262d8 * 3) >> 3) + (longlong)(int)DAT_14cb262d8 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    DAT_14cb262dc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb262d0,param_1,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145748724 FUN_145748724 body=226 status=ok
// SIG undefined FUN_145748724(void)

void FUN_145748724(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14adf8aa0;
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145748806(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145748950(param_1 + 7);
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_1407f15b2(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_14574883c(param_1[5]);
  return;
}



// FUNCTION 145748806 FUN_145748806 body=54 status=ok
// SIG undefined FUN_145748806(void)

void FUN_145748806(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14574883c FUN_14574883c body=70 status=ok
// SIG undefined FUN_14574883c(void)

void FUN_14574883c(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != 0) {
    while (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = *puVar1;
      FUN_145748882(puVar1 + 2);
      FUN_1400020a8(puVar1);
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145748882 FUN_145748882 body=87 status=ok
// SIG undefined FUN_145748882(void)

void FUN_145748882(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar3 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x40);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1457488da(param_1);
  return;
}



// FUNCTION 1457488da FUN_1457488da body=52 status=ok
// SIG undefined FUN_1457488da(void)

void FUN_1457488da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14574890e(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14574890e FUN_14574890e body=65 status=ok
// SIG undefined FUN_14574890e(void)

void FUN_14574890e(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      puVar1 = (uint *)(*param_1 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145748950 FUN_145748950 body=240 status=ok
// SIG undefined FUN_145748950(void)

void FUN_145748950(longlong param_1)

{
  longlong lVar1;
  
  FUN_145748ab8();
  FUN_145748a40(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_145748a82(param_1 + 0xf0);
  lVar1 = 0;
  do {
    if (*(longlong *)(param_1 + 0xe0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  FUN_14476820c(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_14476820c(param_1 + 0x50);
  FUN_14476820c(param_1 + 0x20);
  return;
}



// FUNCTION 145748a40 FUN_145748a40 body=66 status=ok
// SIG undefined FUN_145748a40(void)

void FUN_145748a40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_14476820c(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145748a82 FUN_145748a82 body=53 status=ok
// SIG undefined FUN_145748a82(void)

void FUN_145748a82(longlong *param_1)

{
  FUN_1407f138e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145748ab8 FUN_145748ab8 body=139 status=ok
// SIG undefined FUN_145748ab8(void)

void FUN_145748ab8(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_145748b44();
  lVar3 = *(longlong *)(param_1 + 0x160);
  iVar1 = *(int *)(param_1 + 0x168);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1407f1458(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x168);
    lVar3 = *(longlong *)(param_1 + 0x160);
  }
  FUN_145748a40(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    return;
  }
  FUN_145748ba6(param_1 + 0x160);
  return;
}



// FUNCTION 145748b44 FUN_145748b44 body=97 status=ok
// SIG undefined FUN_145748b44(void)

void FUN_145748b44(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1407f1458(param_1 + 0x20);
  FUN_1407f1458(param_1 + 0x50);
  FUN_1407f1458(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 145748ba6 FUN_145748ba6 body=48 status=ok
// SIG undefined FUN_145748ba6(void)

void FUN_145748ba6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145748bd6 FUN_145748bd6 body=38 status=ok
// SIG undefined FUN_145748bd6(void)

void FUN_145748bd6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145748c68(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 145748bfc FUN_145748bfc body=53 status=ok
// SIG undefined FUN_145748bfc(void)

void FUN_145748bfc(longlong *param_1)

{
  FUN_1407f1868();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145748c32 FUN_145748c32 body=53 status=ok
// SIG undefined FUN_145748c32(void)

void FUN_145748c32(longlong *param_1)

{
  FUN_1407f19c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145748c68 FUN_145748c68 body=266 status=ok
// SIG undefined FUN_145748c68(void)

void FUN_145748c68(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    param_1[1] = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    param_1[2] = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (param_1[2] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[2] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
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



// FUNCTION 145748d72 FUN_145748d72 body=54 status=ok
// SIG undefined FUN_145748d72(void)

undefined1 FUN_145748d72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145748da8(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 145748da8 FUN_145748da8 body=111 status=ok
// SIG undefined FUN_145748da8(void)

longlong * FUN_145748da8(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  FUN_1407f1ff6(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 145748e18 FUN_145748e18 body=534 status=ok
// SIG undefined FUN_145748e18(void)

void FUN_145748e18(undefined4 *param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  undefined4 *local_48;
  code *local_40;
  undefined4 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < (uint)param_1[6]) {
    local_38 = &local_48;
    local_40 = FUN_143eeceee;
    local_48 = param_1;
    FUN_140002266(&local_88,&DAT_149e063bc,*param_1);
    pvVar1 = local_88;
    local_78 = (void *)0x0;
    local_70 = local_80;
    if ((longlong)local_80 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_80,0);
      memcpy(local_78,pvVar1,(longlong)local_80 * 2);
    }
    local_68 = 0;
    local_60 = 0;
    FUN_14482e566(&local_78);
    local_50 = local_60 + local_68;
    local_58 = local_68;
    local_b8 = (void *)0x0;
    local_b0 = param_1[6];
    lVar2 = (longlong)local_b0;
    pvVar1 = *(void **)(param_1 + 4);
    if (lVar2 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy(local_b8,pvVar1,lVar2 * 2);
    }
    local_a8 = 0;
    local_a0 = 0;
    FUN_14482e566(&local_b8);
    local_90 = local_a0 + local_a8;
    local_98 = local_a8;
    bifrost::bifrost_config::getConfigValue(param_2,&local_98,&local_58,&local_40);
    if (local_a8 != 0) {
      FUN_1400020a8();
      local_a8 = 0;
      local_a0 = 0;
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
      local_68 = 0;
      local_60 = 0;
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145749030 FUN_145749030 body=135 status=ok
// SIG undefined FUN_145749030(void)

void FUN_145749030(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x6f8;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x6f4 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x6f8 + 0x6f0);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x6f0);
  FUN_1457cc40c(*param_1 + lVar2 + 8);
  FUN_1457490b8(param_1,param_2);
  return;
}



// FUNCTION 1457490b8 FUN_1457490b8 body=124 status=ok
// SIG undefined FUN_1457490b8(void)

void FUN_1457490b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x6f8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x6f8) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x6f8 + 4) = uVar5;
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



// FUNCTION 145749134 FUN_145749134 body=62 status=ok
// SIG undefined FUN_145749134(void)

void FUN_145749134(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14574977a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,8);
  }
  return;
}



// FUNCTION 145749172 FUN_145749172 body=110 status=ok
// SIG undefined FUN_145749172(void)

void FUN_145749172(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0xb0);
  if (*(longlong *)(*param_1 + 0x70 + (longlong)(int)param_2 * 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xb0),(longlong)(int)(~param_2 + iVar1) * 0xb0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1457491e0 FUN_1457491e0 body=62 status=ok
// SIG undefined FUN_1457491e0(void)

longlong FUN_1457491e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145749638(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb0 + *param_1;
  FUN_1457495cd(lVar2);
  return lVar2;
}



// FUNCTION 14574921e FUN_14574921e body=63 status=ok
// SIG undefined FUN_14574921e(void)

longlong FUN_14574921e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457498ee(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_145749739(lVar2);
  return lVar2;
}



// FUNCTION 14574925e FUN_14574925e body=62 status=ok
// SIG undefined FUN_14574925e(void)

void FUN_14574925e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457496ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 14574929c FUN_14574929c body=63 status=ok
// SIG undefined FUN_14574929c(void)

longlong FUN_14574929c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14574953a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  FUN_1457494ea(lVar2);
  return lVar2;
}



// FUNCTION 1457492dc FUN_1457492dc body=114 status=ok
// SIG undefined FUN_1457492dc(void)

void FUN_1457492dc(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0xa0);
  if (*(longlong *)(*param_1 + 0x70 + (longlong)(int)param_2 * 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa0),(longlong)(int)(~param_2 + iVar1) * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 14574934e FUN_14574934e body=411 status=ok
// SIG undefined FUN_14574934e(void)

void FUN_14574934e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_5;
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = (undefined4)param_5[1];
  }
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = lVar4;
  local_50 = uVar5;
  lVar3 = FUN_1407f52a0(param_2,param_3,2,param_4);
  uVar1 = *(undefined4 *)(lVar3 + 8);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(local_60,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar1;
  local_68 = &local_58;
  local_58 = lVar4;
  local_50 = uVar5;
  lVar3 = FUN_1407f52a0(param_2,param_3,8,param_4);
  uVar1 = *(undefined4 *)(lVar3 + 8);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(local_60,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar1;
  local_68 = &local_58;
  local_58 = lVar4;
  local_50 = uVar5;
  lVar4 = FUN_1407f52a0(param_2,param_3,0x10,param_4);
  uVar5 = *(undefined4 *)(lVar4 + 8);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(local_60,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a33e2(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457494ea FUN_1457494ea body=80 status=ok
// SIG undefined FUN_1457494ea(void)

void FUN_1457494ea(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 14574953a FUN_14574953a body=147 status=ok
// SIG undefined FUN_14574953a(void)

void FUN_14574953a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457495cd FUN_1457495cd body=106 status=ok
// SIG undefined FUN_1457495cd(void)

void FUN_1457495cd(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  return;
}



// FUNCTION 145749638 FUN_145749638 body=146 status=ok
// SIG undefined FUN_145749638(void)

void FUN_145749638(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457496ca FUN_1457496ca body=111 status=ok
// SIG undefined FUN_1457496ca(void)

ulonglong FUN_1457496ca(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xa0) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      uVar1 = uVar1 / 0xa0;
    }
  }
  return uVar1;
}



// FUNCTION 145749739 FUN_145749739 body=64 status=ok
// SIG undefined FUN_145749739(void)

void FUN_145749739(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  FUN_144a5dc74(param_1 + 2);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  return;
}



// FUNCTION 14574977a FUN_14574977a body=109 status=ok
// SIG undefined FUN_14574977a(void)

ulonglong FUN_14574977a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xb0) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xb0,8);
      uVar1 = uVar1 / 0xb0;
    }
  }
  return uVar1;
}



// FUNCTION 1457497e8 FUN_1457497e8 body=128 status=ok
// SIG undefined FUN_1457497e8(void)

void FUN_1457497e8(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14574986a(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 4 + *param_1),0,(ulonglong)uVar2 << 2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_148e77e08(param_1);
  return;
}



// FUNCTION 14574986a FUN_14574986a body=132 status=ok
// SIG undefined FUN_14574986a(void)

void FUN_14574986a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457498ee FUN_1457498ee body=147 status=ok
// SIG undefined FUN_1457498ee(void)

void FUN_1457498ee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145749981 FUN_145749981 body=877 status=ok
// SIG undefined FUN_145749981(void)

void FUN_145749981(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_3e8 [40];
  undefined8 *local_3c0;
  int local_3b4;
  longlong *local_3b0;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [190];
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (1 < (int)param_2) {
    memset(local_388,0,0x2f0);
    local_390 = param_1 + (ulonglong)param_2 * 0x48 + -0x48;
    local_398 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_388[0] = (int)(longlong)(fVar13 + fVar13);
    local_3b0 = &local_398;
    do {
      puVar12 = (undefined8 *)*local_3b0;
      local_3c0 = (undefined8 *)local_3b0[1];
      local_3b4 = (int)local_3b0[2];
      uVar4 = (int)((ulonglong)((longlong)local_3c0 - (longlong)puVar12) >> 3) * 0x38e38e39 + 1;
      puVar9 = puVar12;
      puVar5 = local_3c0;
      if (local_3b4 != 0) {
LAB_145749a70:
        local_3a0 = puVar5;
        local_3a8 = puVar9;
        if (8 < (int)uVar4) {
          puVar5 = puVar12 + (ulonglong)(uVar4 >> 1) * 9;
          puVar9 = local_90;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar5 = puVar12;
          puVar9 = puVar12 + (ulonglong)(uVar4 >> 1) * 9;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar5 = local_90;
          puVar9 = puVar12;
          for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar6 = local_3c0 + 9;
          puVar11 = puVar12;
          do {
            puVar5 = local_3c0;
            puVar8 = puVar11 + 9;
            puVar1 = puVar11 + 9;
            do {
              puVar11 = puVar1;
              puVar9 = puVar8;
              if (puVar5 < puVar11) break;
              cVar2 = (*(code *)*param_3)(puVar12,puVar11);
              puVar8 = puVar9 + 9;
              puVar1 = puVar11 + 9;
            } while (cVar2 == '\0');
            puVar8 = puVar6 + -0x12;
            do {
              puVar1 = puVar6;
              puVar5 = puVar8;
              puVar6 = puVar1 + -9;
              if (puVar6 <= puVar12) break;
              cVar2 = (*(code *)*param_3)(puVar6,puVar12);
              puVar8 = puVar5 + -9;
            } while (cVar2 == '\0');
            lVar3 = 9;
            puVar8 = puVar12;
            puVar7 = puVar11;
            puVar10 = local_90;
            if (puVar6 < puVar11) goto code_r0x000145749b5c;
            for (; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar5 = puVar6;
            puVar9 = puVar11;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar5 = local_90;
            puVar9 = puVar6;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar9 = puVar9 + 1;
            }
          } while( true );
        }
        if (puVar12 < local_3c0) {
          do {
            puVar5 = puVar12;
            puVar9 = puVar12 + 9;
            puVar6 = puVar12;
            if (puVar12 + 9 <= local_3c0) {
              do {
                cVar2 = (*(code *)*param_3)(puVar6,puVar9);
                puVar5 = puVar9;
                if (cVar2 == '\0') {
                  puVar5 = puVar6;
                }
                puVar9 = puVar9 + 9;
                puVar6 = puVar5;
              } while (puVar9 <= local_3c0);
            }
            puVar9 = local_3c0 + -9;
            puVar6 = puVar5;
            puVar11 = local_90;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar11 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar6 = local_3c0;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + 1;
            }
            puVar5 = local_90;
            for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
              *local_3c0 = *puVar5;
              puVar5 = puVar5 + 1;
              local_3c0 = local_3c0 + 1;
            }
            local_3c0 = puVar9;
          } while (puVar12 < puVar9);
        }
        goto LAB_145749cbe;
      }
LAB_145749ce2:
      FUN_148e77a15(puVar12,uVar4,param_3);
LAB_145749cbe:
      local_3b0 = local_3b0 + -3;
    } while (&local_398 <= local_3b0);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000145749b5c:
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar12;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_90;
  puVar7 = puVar6;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  local_3b4 = local_3b4 + -1;
  puVar1 = puVar1 + -0x12;
  if ((longlong)puVar5 - (longlong)local_3a8 < (longlong)local_3a0 - (longlong)puVar9) {
    if (puVar11 < local_3c0) {
      *local_3b0 = (longlong)puVar11;
      local_3b0[1] = (longlong)local_3c0;
      *(int *)(local_3b0 + 2) = local_3b4;
      local_3b0 = local_3b0 + 3;
    }
    puVar9 = puVar12;
    if (puVar6 <= puVar12 + 9) goto LAB_145749cbe;
  }
  else {
    if (puVar12 + 9 < puVar6) {
      *local_3b0 = (longlong)puVar12;
      local_3b0[1] = (longlong)puVar1;
      *(int *)(local_3b0 + 2) = local_3b4;
      local_3b0 = local_3b0 + 3;
    }
    puVar5 = local_3c0;
    puVar12 = puVar11;
    puVar1 = local_3c0;
    if (local_3c0 <= puVar11) goto LAB_145749cbe;
  }
  local_3c0 = puVar1;
  uVar4 = (int)((ulonglong)((longlong)puVar5 - (longlong)puVar9) >> 3) * 0x38e38e39 + 1;
  local_3a8 = puVar9;
  local_3a0 = puVar5;
  if (local_3b4 == 0) goto LAB_145749ce2;
  goto LAB_145749a70;
}



// FUNCTION 145749dd0 FUN_145749dd0 body=213 status=ok
// SIG undefined FUN_145749dd0(void)

void FUN_145749dd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    lVar1 = param_1 + -0x2600;
    FUN_145749ea6(lVar1);
    FUN_1407fcb18(lVar1);
    FUN_14574a22e(lVar1,param_2);
    local_24 = 0;
    local_38 = DAT_14c9a63f8;
    local_30 = 0xffffffff;
    local_48 = DAT_14cbc54b0;
    local_40 = 0xffffffff;
    FUN_140f8b8f2(param_1 + -0x2128);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1412d3646(param_1 + 0x60,uVar2);
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1400da9ba(param_1 + 0x70,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145749ea6 FUN_145749ea6 body=59 status=ok
// SIG undefined FUN_145749ea6(void)

void FUN_145749ea6(longlong param_1)

{
  FUN_1405ba932(param_1,1);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined1 *)(param_1 + 0x2832) = 0;
  }
  *(undefined1 *)(param_1 + 0x2831) = 0;
  FUN_140c7a916(param_1);
  FUN_140cc0454(param_1);
  return;
}



// FUNCTION 145749ee2 FUN_145749ee2 body=54 status=ok
// SIG undefined FUN_145749ee2(void)

void FUN_145749ee2(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  *(byte *)(lVar1 + 0x78) = *(byte *)(lVar1 + 0x78) & 0xf7 | param_2 << 3;
  FUN_140cf5864(lVar1);
  FUN_140cf57c4(lVar1);
  return;
}



// FUNCTION 145749f18 FUN_145749f18 body=95 status=ok
// SIG undefined FUN_145749f18(void)

void FUN_145749f18(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar2 = FUN_144a86a6e(lVar2);
    if (lVar2 != 0) {
      cVar1 = FUN_14133c9d8(lVar2);
      if (cVar1 != '\0') {
        lVar2 = FUN_1407fd4ae(param_1);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145749f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x170))(param_1,0,lVar2,0x134);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145749f78 FUN_145749f78 body=665 status=ok
// SIG undefined FUN_145749f78(void)

void FUN_145749f78(longlong param_1)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  double dVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  undefined4 local_60;
  double local_58;
  longlong *local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x2808) = 0x4040000000000000;
  *(undefined1 *)(param_1 + 0x2810) = 0;
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if (lVar5 != 0) {
    if (0.0 < *(float *)(lVar5 + 0x1c4)) {
      *(float *)(param_1 + 0x280c) = 1.0 / *(float *)(lVar5 + 0x1c4);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x2900);
  if (lVar5 == 0) {
    dVar3 = 1.0;
  }
  else {
    fVar2 = *(float *)(lVar5 + 0x478);
    if (*(float *)(lVar5 + 0x47c) <= *(float *)(lVar5 + 0x478)) {
      fVar2 = *(float *)(lVar5 + 0x47c);
    }
    dVar3 = (double)fVar2;
  }
  plVar9 = *(longlong **)(param_1 + 0x1c8);
  if (plVar9 != (longlong *)0x0) {
    lVar5 = FUN_140c7aaec();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      *(undefined1 *)(plVar9 + 0xec) = 1;
      (**(code **)(*plVar9 + 0x938))(plVar9,2,0);
    }
  }
  dVar8 = *(double *)(param_1 + 0x2828) * dVar3;
  plVar9 = (longlong *)(*(double *)(param_1 + 0x2820) * dVar3);
  dVar3 = dVar3 * *(double *)(param_1 + 0x2818);
  *(double *)(param_1 + 0x27f0) = dVar3;
  *(longlong **)(param_1 + 0x27f8) = plVar9;
  *(double *)(param_1 + 0x2800) = dVar8;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_58 = dVar3;
    local_50 = plVar9;
    local_48 = dVar8;
    FUN_141226a1c();
  }
  uVar6 = FUN_1401cb356();
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar4 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_68[2] = lVar7;
  *local_68 = &PTR_FUN_14b963250;
  local_68[3] = 0;
  FUN_14485c47a(local_68 + 3,param_1);
  puVar4[4] = param_1;
  local_78 = 0;
  FUN_1405f67fc(uVar6,&local_58,&local_68,L"ACarryableObject_LerpToDefaultScale");
  if ((double *)(param_1 + 0x27e0) != &local_58) {
    *(double *)(param_1 + 0x27e0) = local_58;
    local_58 = 0.0;
    plVar9 = *(longlong **)(param_1 + 0x27e8);
    *(longlong **)(param_1 + 0x27e8) = local_50;
    local_50 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_1449db362(&local_68);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574a212 FUN_14574a212 body=28 status=ok
// SIG undefined FUN_14574a212(void)

undefined8 FUN_14574a212(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014574a228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x2a0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14574a22e FUN_14574a22e body=876 status=ok
// SIG undefined FUN_14574a22e(void)

void FUN_14574a22e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_14574a29a;
  }
  plVar2 = (longlong *)0x0;
LAB_14574a29a:
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if (((plVar2 != (longlong *)0x0) && (lVar3 != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x1c8), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_140c7aaec();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_14574a59c(param_1,&local_58,param_2);
      (**(code **)(*plVar2 + 0x588))(plVar2,local_70,local_88);
      FUN_144a76660(local_88,&local_a0);
      fVar5 = sinf(*(float *)(lVar3 + 0x1b0) * 0.017453292);
      dVar6 = (double)fVar5;
      dVar8 = DAT_14c8462d0 * dVar6 + local_90;
      dVar10 = DAT_14c8462c8 * dVar6 + local_98;
      dVar6 = dVar6 * DAT_14c8462c0 + local_a0;
      dVar12 = dVar8 * dVar8 + dVar6 * dVar6 + dVar10 * dVar10;
      if (((dVar12 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar11 = dVar10, NAN(dVar12))) &&
         (dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar12)) {
        dVar12 = 1.0 / SQRT(dVar12);
        dVar7 = dVar6 * dVar12;
        dVar9 = dVar8 * dVar12;
        dVar11 = dVar10 * dVar12;
      }
      dVar6 = (double)*(float *)(lVar3 + 0x1a8);
      local_a8 = dVar9 * dVar6 + local_48;
      local_b0 = dVar11 * dVar6 + local_50;
      local_b8 = dVar7 * dVar6 + local_58;
      (**(code **)(*plVar1 + 0x6a8))(plVar1,&local_b8,0,1);
      dVar10 = DAT_14c8462c0 * local_98 - local_a0 * DAT_14c8462c8;
      dVar6 = local_a0 * DAT_14c8462d0 - DAT_14c8462c0 * local_90;
      dVar8 = DAT_14c8462c8 * local_90 - local_98 * DAT_14c8462d0;
      dVar12 = dVar10 * dVar10 + dVar8 * dVar8 + dVar6 * dVar6;
      if (((dVar12 != 1.0) || (local_c8 = dVar6, local_d0 = dVar8, local_c0 = dVar10, NAN(dVar12)))
         && (local_c8 = DAT_14c8464e8, local_d0 = DAT_14c8464e0, local_c0 = DAT_14c8464f0,
            9.99999993922529e-09 <= dVar12)) {
        dVar12 = 1.0 / SQRT(dVar12);
        local_c8 = dVar6 * dVar12;
        local_d0 = dVar8 * dVar12;
        local_c0 = dVar10 * dVar12;
      }
      dVar6 = (double)(*(float *)(lVar3 + 0x1ac) * 0.017453292);
      local_c0 = local_c0 * dVar6;
      local_c8 = local_c8 * dVar6;
      local_d0 = local_d0 * dVar6;
      (**(code **)(*plVar1 + 0x6b0))(plVar1,&local_d0,0,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574a59c FUN_14574a59c body=287 status=ok
// SIG undefined FUN_14574a59c(void)

double * FUN_14574a59c(longlong param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  
  param_2[2] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  lVar7 = (**(code **)(*param_3 + 0x10))(param_3);
  if (lVar7 != 0) {
    lVar8 = FUN_144a2f878();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) goto LAB_14574a5fd;
  }
  lVar7 = 0;
LAB_14574a5fd:
  lVar8 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if (((lVar7 != 0) && (lVar8 != 0)) && (lVar7 = *(longlong *)(&DAT_00006850 + lVar7), lVar7 != 0))
  {
    dVar1 = *(double *)(lVar7 + 0x3e0);
    *param_2 = *(double *)(lVar7 + 0x3d8);
    param_2[1] = dVar1;
    param_2[2] = *(double *)(lVar7 + 1000);
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    fVar9 = (float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    if (*(float *)(lVar8 + 0x1bc) < fVar9) {
      dVar10 = (double)(*(float *)(lVar8 + 0x1bc) / fVar9);
      *param_2 = dVar1 * dVar10;
      param_2[1] = dVar2 * dVar10;
      param_2[2] = dVar3 * dVar10;
    }
  }
  return param_2;
}



// FUNCTION 14574a6bc FUN_14574a6bc body=508 status=ok
// SIG undefined FUN_14574a6bc(void)

void FUN_14574a6bc(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80 [4];
  double *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_60 = (double *)0x0;
  local_58 = 0x400000000;
  (**(code **)(*(longlong *)(param_1 + 0x25f8) + 0xd8))(param_1 + 0x25f8,local_80,1);
  if (0 < (int)local_58) {
    pdVar10 = local_80;
    if (local_60 != (double *)0x0) {
      pdVar10 = local_60;
    }
    dVar9 = *pdVar10;
    if ((dVar9 != 0.0) && (lVar1 = *(longlong *)((longlong)dVar9 + 0x48), lVar1 != 0)) {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      pdVar12 = local_60;
      local_b8 = dVar4;
      uStack_b0 = dVar5;
      local_a8 = dVar6;
      uStack_a0 = dVar7;
      if (pdVar10 == (double *)0x0) {
        pdVar12 = (double *)&DAT_00000040;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd((int)pdVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_a0._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_b8;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_b8._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_b0._4_4_;
        FUN_1448052ee(&local_b8,&local_98);
        pdVar10[6] = local_88;
        pdVar10[4] = local_98;
        pdVar10[5] = dStack_90;
      }
      local_c8 = pdVar10[6];
      local_d8 = pdVar10[4];
      dStack_d0 = pdVar10[5];
      local_f8 = *(undefined8 *)(lVar1 + 0x260);
      uStack_f0 = *(undefined8 *)(lVar1 + 0x268);
      local_e8 = *(undefined8 *)(lVar1 + 0x270);
      local_100 = 0;
      local_108 = 0;
      FUN_1407fd818(param_1,&local_f8,&local_d8,0);
    }
  }
  if (local_60 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574a8ba FUN_14574a8ba body=206 status=ok
// SIG undefined FUN_14574a8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14574a8ba(void)

{
  if ((DAT_14cb328ef & 2) == 0) {
    DAT_14cb328ef = DAT_14cb328ef | 2;
    _DAT_14cb32890 = L"FNiagaraInitFreeIDBufferCS";
    _DAT_14cb328a8 = FUN_146826540;
    _DAT_14cb328b0 = FUN_146825d77;
    _DAT_14cb328b8 = FUN_146825fd6;
    _DAT_14cb328c0 = FUN_1407e02ea;
    _DAT_14cb328c8 = FUN_146826273;
    _DAT_14cb328a0 = FUN_14804e46a;
    _DAT_14cb328e0 = 0xffffffff000000e0;
    _DAT_14cb328e8 = 8;
    DAT_14cb328ec = 0;
    _DAT_14cb328d0 = &LAB_14804e494;
    FUN_14574a988();
    FUN_1407e00cc(&DAT_14cb32888);
  }
  return &DAT_14cb32888;
}



// FUNCTION 14574a988 FUN_14574a988 body=123 status=ok
// SIG undefined FUN_14574a988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14574a988(void)

{
  _DAT_14cb35780 = L"BASE";
  DAT_14cb357aa = 4;
  _DAT_14cb35788 = FUN_140b35ae4();
  _DAT_14cb35790 = DAT_14cb32898;
  _DAT_14cb35798 = &LAB_14682652b;
  DAT_14cb32898 = &DAT_14cb35780;
  DAT_14cb328ed = DAT_14cb328ed + '\x01';
  _DAT_14cb357a0 = 0x100000000;
  if (*(char *)(_DAT_14cb35788 + 100) != '\0') {
    DAT_14cb328ee = DAT_14cb328ee + '\x01';
  }
  return;
}



// FUNCTION 14574aa04 FUN_14574aa04 body=226 status=ok
// SIG undefined FUN_14574aa04(void)

longlong * FUN_14574aa04(longlong *param_1)

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
  pcVar13 = FUN_146462362;
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



// FUNCTION 14574aaec FUN_14574aaec body=138 status=ok
// SIG undefined FUN_14574aaec(void)

code * FUN_14574aaec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumNewElements";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14574ab76;
}



// FUNCTION 14574ab76 FUN_14574ab76 body=138 status=ok
// SIG undefined FUN_14574ab76(void)

code * FUN_14574ab76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExistingBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148053636;
}



// FUNCTION 14574ac00 FUN_14574ac00 body=51 status=ok
// SIG undefined FUN_14574ac00(void)

undefined8 FUN_14574ac00(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x570))();
  if ((iVar1 == 0) && ((*(byte *)((longlong)param_1 + 0x2de) & 8) == 0)) {
    return 0;
  }
  uVar2 = FUN_140805ee6(param_1);
  return uVar2;
}



// FUNCTION 14574ac34 FUN_14574ac34 body=96 status=ok
// SIG undefined FUN_14574ac34(void)

void FUN_14574ac34(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14574ac94 FUN_14574ac94 body=92 status=ok
// SIG undefined FUN_14574ac94(void)

ulonglong FUN_14574ac94(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x20);
    plVar5 = *(longlong **)(lVar3 + 0x28);
    uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (plVar5 == (longlong *)0x0) {
      uVar6 = CONCAT71(uVar7,lVar4 != 0);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      uVar6 = CONCAT71(uVar7,lVar4 != 0);
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14574acf0 FUN_14574acf0 body=116 status=ok
// SIG undefined FUN_14574acf0(void)

void FUN_14574acf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x18) != -1) {
      FUN_144962840(*(longlong *)(param_1 + 0x20),param_1,0);
    }
    FUN_1403899a2(param_1,0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014574ad4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14574ad64 FUN_14574ad64 body=337 status=ok
// SIG undefined FUN_14574ad64(void)

void FUN_14574ad64(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14477dc2a();
  FUN_14477dadc(uVar2,param_2);
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)(*param_2 + 0x130));
  if ((*param_2 != 0) && (lVar4 = *(longlong *)(*param_2 + 0x130), lVar4 != 0)) {
    lVar3 = FUN_1402e44f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_1409a445e(param_1,lVar4,*(undefined8 *)(*param_2 + 0x6a0));
    }
  }
  FUN_14574aeb6(param_1,param_2);
  lVar4 = *(longlong *)(*param_2 + 0x6a0);
  FUN_14005eae2(param_1 + 0x15);
  cVar1 = FUN_144729dda(lVar4 + 0x30);
  if (((cVar1 != '\0') && (*(longlong *)(lVar4 + 0x48) != 0)) && (0 < *(int *)(lVar4 + 8))) {
    if (*(char *)((longlong)param_1 + 0x4e4) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
    }
    local_28 = param_1;
    lVar4 = (**(code **)(*param_1 + 0x108))(param_1);
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar4 + 0x2f8);
    }
    FUN_140811016(&local_28,param_1 + 0x6b,param_1 + 0x96,uVar2);
    FUN_140811016(&local_28,param_1 + 0x75,param_1 + 0x99,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574aeb6 FUN_14574aeb6 body=417 status=ok
// SIG undefined FUN_14574aeb6(void)

void FUN_14574aeb6(longlong *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408112b8();
  FUN_1408112ba(param_1 + 0xc,param_2);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x108))(param_1);
  if (plVar4 == (longlong *)0x0) goto LAB_14574afd2;
  lVar2 = *(longlong *)(*param_2 + 0x6a0);
  sVar1 = *(short *)(lVar2 + 0xf8);
  if ((char)param_1[0x47] == '\x01') {
    if (*(char *)((longlong)param_1 + 0x251) == '\0') {
      bVar5 = sVar1 != *(short *)((longlong)param_1 + 0x254);
    }
    else {
      bVar5 = false;
    }
    cVar3 = (**(code **)(*plVar4 + 0x3c0))(plVar4);
    if (cVar3 == '\0') {
      FUN_1446f57c6(&DAT_14cc074d8,local_40);
      cVar3 = FUN_14574b07a(plVar4,local_40);
      if ((cVar3 == '\0') || (!bVar5 && (*(byte *)((longlong)param_1 + 0x251) & 1) == 0))
      goto LAB_14574afab;
    }
    FUN_140ec6c7c(param_1,plVar4);
    FUN_1446f57c6(&DAT_14cc074d8,local_40);
    (**(code **)(*plVar4 + 0x2e0))(plVar4,local_40);
    *(undefined1 *)((longlong)param_1 + 0x251) = 0;
  }
LAB_14574afab:
  FUN_140811358(param_1,plVar4,lVar2);
  if ((*(char *)((longlong)param_1 + 0x251) == '\x01') && ((char)param_1[0x47] == '\x01')) {
    (**(code **)(*plVar4 + 0x308))(plVar4);
    *(undefined1 *)((longlong)param_1 + 0x251) = 0;
  }
  *(short *)((longlong)param_1 + 0x254) = sVar1;
  if ((*(char *)((longlong)param_1 + 0x252) == '\x01') && (lVar2 = plVar4[0x5f], lVar2 != 0)) {
    local_50 = param_1[0x45];
    local_48 = param_1[0x46];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_1491ddccc(lVar2,&local_50);
  }
LAB_14574afd2:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574b07a FUN_14574b07a body=153 status=ok
// SIG undefined FUN_14574b07a(void)

undefined8 FUN_14574b07a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_1 + 0x1dc)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x1f0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar6 * 0x14) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar6 * 0x14 + 0xc);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14574b114 FUN_14574b114 body=68 status=ok
// SIG undefined FUN_14574b114(void)

void FUN_14574b114(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140e512e6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14574b158 FUN_14574b158 body=132 status=ok
// SIG undefined FUN_14574b158(void)

void FUN_14574b158(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14574b1de FUN_14574b1de body=615 status=ok
// SIG undefined FUN_14574b1de(void)

longlong * FUN_14574b1de(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_14045cd5e();
  if (*(longlong *)(param_3 + 0x28) != lVar7) {
    plVar10 = (longlong *)0x0;
    goto LAB_14574b213;
  }
  plVar11 = *(longlong **)(param_3 + 0x48);
  bVar3 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_14574b3ac:
    plVar11 = (longlong *)0x0;
LAB_14574b2bf:
    iVar6 = *(int *)(param_3 + 0x38);
    if ((((longlong)iVar6 < 0) || (*(int *)(param_1 + 0x78) <= iVar6)) ||
       (plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 8),
       plVar10 == (longlong *)0x0)) {
LAB_14574b30f:
      iVar6 = *(int *)(param_1 + 0x78);
      if ((longlong)iVar6 != 0) {
        local_60 = *(longlong *)(param_1 + 0x70);
        lVar7 = 0;
        do {
          plVar10 = *(longlong **)(local_60 + lVar7);
          if (plVar10 != (longlong *)0x0) {
            lVar8 = (**(code **)(*plVar10 + 8))(plVar10);
            lVar9 = FUN_1400de7f6();
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30 &&
                (cVar5 = (**(code **)(*plVar10 + 0xa0))(plVar10,param_2), cVar5 != '\0')))) {
              lVar7 = plVar10[9];
              *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar7 + 0x10);
              *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar7 + 0x18);
              goto LAB_14574b3e5;
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar6 * 8 != lVar7);
      }
      plVar10 = *(longlong **)(param_3 + 0x48);
      *(undefined8 *)(param_3 + 0x40) = 0;
      *(undefined8 *)(param_3 + 0x48) = 0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      plVar10 = (longlong *)0x0;
    }
    else {
      lVar7 = (**(code **)(*plVar10 + 8))(plVar10);
      lVar8 = FUN_1400653da();
      if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
           lVar8 + 0x30 ||
          (FUN_14147b138(plVar10,&local_58), local_58 != *(longlong *)(param_3 + 0x30)))))
      goto LAB_14574b30f;
LAB_14574b3e5:
      FUN_144a7bec8(plVar10,&local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      *(longlong *)(param_3 + 0x40) = local_58;
      plVar2 = *(longlong **)(param_3 + 0x48);
      *(longlong **)(param_3 + 0x48) = local_50;
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
    if (bVar3) goto LAB_14574b213;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_14574b3ac;
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar12);
    bVar3 = false;
    if ((param_1 == 0) ||
       (plVar10 = *(longlong **)(param_3 + 0x40), bVar3 = false, plVar10 == (longlong *)0x0))
    goto LAB_14574b2bf;
    lVar7 = plVar10[9];
    if ((*(longlong *)(lVar7 + 8) != *(longlong *)(param_1 + 0x40)) ||
       ((*(longlong *)(lVar7 + 0x10) != *(longlong *)(param_3 + 0x30) ||
        (*(int *)(lVar7 + 0x18) != *(int *)(param_3 + 0x38))))) {
      bVar3 = false;
      goto LAB_14574b2bf;
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
LAB_14574b213:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 14574b446 FUN_14574b446 body=107 status=ok
// SIG undefined FUN_14574b446(void)

void FUN_14574b446(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (param_1 != param_2) {
    plVar1 = param_1;
  }
  (**(code **)(*param_2 + 0x310))(param_2,plVar1);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  param_2[0x1c] = param_3;
  (**(code **)(*param_2 + 8))(param_2);
  FUN_140011b50(param_2,param_4,param_5);
  return;
}



// FUNCTION 14574b4b2 FUN_14574b4b2 body=477 status=ok
// SIG undefined FUN_14574b4b2(void)

undefined8 *
FUN_14574b4b2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined8 param_8,uint param_9,
             undefined8 param_10,undefined8 param_11,undefined8 *param_12)

{
  *(uint *)(param_1 + 1) = param_9 | 0x84;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_149e70a50;
  *(undefined4 *)(param_1 + 0x16) = (undefined4)param_10;
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_10._4_4_;
  *(undefined4 *)(param_1 + 0x17) = (undefined4)param_11;
  *(undefined4 *)((longlong)param_1 + 0xbc) = param_11._4_4_;
  param_1[0x18] = *param_12;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(uint *)((longlong)param_1 + 0xd4) = param_6 | 0x80;
  param_1[0x1b] = param_7;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2f));
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x3a));
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x1d] = param_8;
  return param_1;
}



// FUNCTION 14574b690 FUN_14574b690 body=132 status=ok
// SIG undefined FUN_14574b690(void)

void FUN_14574b690(longlong param_1,int param_2)

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



// FUNCTION 14574b724 FUN_14574b724 body=40 status=ok
// SIG undefined FUN_14574b724(void)

undefined8 FUN_14574b724(undefined8 param_1,int param_2)

{
  FUN_14574b74c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14574b74c FUN_14574b74c body=73 status=ok
// SIG undefined FUN_14574b74c(void)

void FUN_14574b74c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1d9ac0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1408206ec(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14574b796 FUN_14574b796 body=98 status=ok
// SIG undefined FUN_14574b796(void)

void FUN_14574b796(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14574b7f8 FUN_14574b7f8 body=170 status=ok
// SIG undefined FUN_14574b7f8(void)

void FUN_14574b7f8(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1403ff07a();
  FUN_1408ccbd2(local_28,uVar1);
  (**(code **)(*param_2 + 0x80))(param_2,local_28,0);
  uVar1 = FUN_14574b8de();
  FUN_1408ccbd2(local_28,uVar1);
  (**(code **)(*param_2 + 0x80))(param_2,local_28,0);
  uVar1 = FUN_14574b8a4();
  FUN_1408ccbd2(local_28,uVar1);
  (**(code **)(*param_2 + 0x80))(param_2,local_28,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574b8a4 FUN_14574b8a4 body=57 status=ok
// SIG undefined FUN_14574b8a4(void)

void FUN_14574b8a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07810 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07810 = FUN_140002ddd(FUN_141906d4b,uVar1,L"CachedRigElement");
  }
  return;
}



// FUNCTION 14574b8de FUN_14574b8de body=57 status=ok
// SIG undefined FUN_14574b8de(void)

void FUN_14574b8de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07b18 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07b18 = FUN_140002ddd(FUN_141906a1c,uVar1,L"RigElementKey");
  }
  return;
}



// FUNCTION 14574b918 FUN_14574b918 body=244 status=ok
// SIG undefined FUN_14574b918(void)

undefined8 FUN_14574b918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a7feda0;
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
  *local_38 = &PTR_FUN_14b3fae20;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14882e038;
  FUN_1408278de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574ba0e FUN_14574ba0e body=106 status=ok
// SIG undefined FUN_14574ba0e(void)

void FUN_14574ba0e(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_14028d57c(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x59d,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574ba7a FUN_14574ba7a body=159 status=ok
// SIG undefined FUN_14574ba7a(void)

void FUN_14574ba7a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"Additive",1);
  *(undefined8 *)(param_1 + 0x1b0) = local_20;
  FUN_14574bb1a(param_1);
  FUN_14574bc56(param_1);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    uVar1 = FUN_140265f12();
    FUN_1405593a8(uVar1,param_1 + 0x1a8,param_1 + 0x1a0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574bb1a FUN_14574bb1a body=315 status=ok
// SIG undefined FUN_14574bb1a(void)

void FUN_14574bb1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_1 + 0xc0;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = (longlong *)(param_1 + 0xb0);
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_140a946aa(local_78,*local_68 + (longlong)iStack_4c * 0x18 + 8);
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
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574bc56 FUN_14574bc56 body=525 status=ok
// SIG undefined FUN_14574bc56(void)

void FUN_14574bc56(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)(param_1 + 0x100);
  local_30 = param_1 + 0x110;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = plVar5;
  local_50 = plVar5;
  local_48 = plVar5;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      if ((*(longlong *)(*local_78 + (longlong)iStack_5c * 0x68) != 0) &&
         (plVar5 = (longlong *)FUN_14574be64(), (int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34))
         ) {
        lVar2 = *local_78;
        lVar7 = (longlong)iStack_5c * 0x68;
        lVar3 = *(longlong *)(lVar2 + lVar7);
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar9 = (uint)lVar3 & 0xffff;
        plVar8 = plVar5 + 7;
        if ((longlong *)plVar5[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar5[8];
        }
        iVar10 = *(int *)((longlong)plVar8 +
                         (ulonglong)
                         ((int)plVar5[9] - 1U &
                         (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            lVar1 = *plVar5 + (longlong)iVar10 * 0x20;
            if (*(longlong *)(*plVar5 + (longlong)iVar10 * 0x20) == lVar3) {
              if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
                if (*(char *)(lVar2 + 0x58 + lVar7) == '\x01') {
                  uVar6 = *(undefined1 *)(lVar2 + lVar7 + 0x59);
                }
                else {
                  uVar6 = 0;
                }
                *(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x30) = uVar6;
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x18);
          } while (iVar10 != -1);
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_1488c9486(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574be64 FUN_14574be64 body=8 status=ok
// SIG undefined FUN_14574be64(void)

undefined8 * FUN_14574be64(void)

{
  return &DAT_14cb82360;
}



// FUNCTION 14574be78 FUN_14574be78 body=234 status=ok
// SIG undefined FUN_14574be78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14574be78(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cb12240 = &PTR_LAB_149e668b0;
  _DAT_14cb12248 = 0;
  FUN_1405bceb4(&DAT_14cb12240);
  _DAT_14cb12240 = &PTR_FUN_14ab2d440;
  DAT_14cb12250 = 0;
  FUN_141247186(L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
  FUN_140056680(local_28,
                L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
  FUN_14124722a(local_28,1);
  lVar1 = FUN_14083472b(local_28);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    DAT_14cb12250 = lVar1;
    if (lVar1 == 0) {
      FUN_14283f6fe(L"/Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    DAT_14cb12250 = lVar1;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574bf64 FUN_14574bf64 body=16 status=ok
// SIG undefined FUN_14574bf64(void)

undefined8 FUN_14574bf64(void)

{
  FUN_140834eb8();
  return 0;
}



// FUNCTION 14574bf74 FUN_14574bf74 body=162 status=ok
// SIG undefined FUN_14574bf74(void)

void FUN_14574bf74(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 2) & 1) == 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x600))();
    if (cVar1 != '\0') {
      local_28 = 0;
      uStack_20 = 0;
      local_48 = *(undefined4 *)(*param_1 + 0x2b94);
      local_40 = *param_2;
      uStack_3c = param_2[1];
      uStack_38 = param_2[2];
      uStack_34 = param_2[3];
      local_30 = *(undefined8 *)(param_2 + 4);
      FUN_140836610(param_1);
      if ((*(byte *)(param_1 + 2) & 2) != 0) {
        *(undefined1 *)(param_1 + 9) = *(undefined1 *)(*param_1 + 0x2b90);
        *(undefined1 *)(*param_1 + 0x293) = 0;
        FUN_1404fb252(param_1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574c018 FUN_14574c018 body=1140 status=ok
// SIG undefined FUN_14574c018(void)

void FUN_14574c018(longlong param_1,double param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  longlong local_280;
  char local_269;
  undefined1 local_268 [96];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  cVar14 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x139);
  lVar15 = 0;
  lVar16 = 0;
  local_269 = cVar14;
  do {
    if ((cVar14 != '\0') || (*(char *)(*(longlong *)(param_1 + 0x68) + lVar16) == '\x01')) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8);
      lVar4 = *(longlong *)(lVar2 + 0x18 + lVar15);
      FUN_14013713e(lVar4,local_148);
      dVar12 = *(double *)(lVar4 + 0x80);
      dVar13 = *(double *)(lVar4 + 0x88);
      dVar7 = *(double *)(lVar4 + 0x90) * -1.0;
      dVar9 = *(double *)(lVar4 + 0x98) * 1.0;
      dVar19 = dVar7 * (double)local_138._8_8_;
      dVar21 = (double)local_148._0_8_ * dVar9;
      dVar20 = (double)local_148._0_8_ * dVar13;
      dVar18 = (double)local_138._8_8_ * dVar12;
      dVar8 = dVar7 * (double)local_148._8_8_;
      dVar6 = dVar12 * (double)local_148._8_8_;
      dVar17 = dVar13 * (double)local_138._0_8_;
      dVar11 = dVar9 * (double)local_138._0_8_;
      dVar10 = (dVar9 * (double)local_148._8_8_ +
               ((double)local_148._0_8_ * dVar7 * -1.0 - (double)local_138._8_8_ * dVar13)) -
               dVar12 * (double)local_138._0_8_ * 1.0;
      dVar7 = dVar7 * (double)local_138._0_8_ * -1.0 +
              dVar13 * (double)local_148._8_8_ +
              (dVar9 * (double)local_138._8_8_ - (double)local_148._0_8_ * dVar12 * -1.0);
      FUN_146d6d822(*(undefined8 *)(lVar2 + 0x18 + lVar15),local_1a8);
      local_148._8_4_ = SUB84(dVar10,0);
      local_148._0_8_ = (dVar8 + (dVar21 * 1.0 - dVar18)) - dVar17 * -1.0;
      local_148._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_138._8_4_ = SUB84(dVar7,0);
      local_138._0_8_ = dVar11 * 1.0 + dVar6 + (dVar19 - dVar20 * 1.0);
      local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      uStack_120 = local_1a8._8_4_;
      uStack_11c = local_1a8._12_4_;
      local_128 = local_1a8._0_4_;
      uStack_124 = local_1a8._4_4_;
      local_118 = local_198._0_8_;
      uStack_110 = 0;
      local_108 = 0x3ff0000000000000;
      uStack_100 = 0x3ff0000000000000;
      local_f8 = 0x3ff0000000000000;
      uStack_f0 = 0;
      lVar4 = *(longlong *)(lVar2 + 0x30 + lVar15);
      FUN_14013713e(lVar4,local_1a8);
      dVar12 = *(double *)(lVar4 + 0x80);
      dVar13 = *(double *)(lVar4 + 0x88);
      dVar7 = *(double *)(lVar4 + 0x90) * -1.0;
      dVar9 = *(double *)(lVar4 + 0x98) * 1.0;
      dVar19 = dVar7 * (double)local_198._8_8_;
      dVar21 = (double)local_1a8._0_8_ * dVar9;
      dVar20 = (double)local_1a8._0_8_ * dVar13;
      dVar18 = (double)local_198._8_8_ * dVar12;
      dVar8 = dVar7 * (double)local_1a8._8_8_;
      dVar6 = dVar12 * (double)local_1a8._8_8_;
      dVar17 = dVar13 * (double)local_198._0_8_;
      dVar11 = dVar9 * (double)local_198._0_8_;
      dVar10 = (dVar9 * (double)local_1a8._8_8_ +
               ((double)local_1a8._0_8_ * dVar7 * -1.0 - (double)local_198._8_8_ * dVar13)) -
               dVar12 * (double)local_198._0_8_ * 1.0;
      dVar7 = dVar7 * (double)local_198._0_8_ * -1.0 +
              dVar13 * (double)local_1a8._8_8_ +
              (dVar9 * (double)local_198._8_8_ - (double)local_1a8._0_8_ * dVar12 * -1.0);
      FUN_146d6d822(*(undefined8 *)(lVar2 + 0x30 + lVar15),&local_208);
      local_1a8._8_4_ = SUB84(dVar10,0);
      local_1a8._0_8_ = (dVar8 + (dVar21 * 1.0 - dVar18)) - dVar17 * -1.0;
      local_1a8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_198._8_4_ = SUB84(dVar7,0);
      local_198._0_8_ = dVar11 * 1.0 + dVar6 + (dVar19 - dVar20 * 1.0);
      local_198._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      uStack_180 = (undefined4)uStack_200;
      uStack_17c = (undefined4)((ulonglong)uStack_200 >> 0x20);
      local_188 = local_208;
      uStack_184 = uStack_204;
      local_178 = local_1f8;
      uStack_170 = 0;
      local_168 = 0x3ff0000000000000;
      uStack_160 = 0x3ff0000000000000;
      local_158 = 0x3ff0000000000000;
      uStack_150 = 0;
      FUN_1447dc19e(lVar3 + 0x20,&local_208,local_148);
      FUN_1447dc19e(lVar3 + 0x80,local_268,local_1a8);
      uVar5 = *(undefined8 *)(lVar2 + 0x30 + lVar15);
      *(undefined8 *)(lVar3 + 0x648) = *(undefined8 *)(lVar2 + 0x18 + lVar15);
      *(undefined8 *)(lVar3 + 0x650) = uVar5;
      if ((*(byte *)(lVar3 + 0x374) & 4) == 0) {
        FUN_1449cbdd8(lVar3);
        *(undefined4 *)(lVar2 + 0x58 + lVar15) = 0;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x5b0);
      *(undefined4 *)(lVar3 + 0x16c) = 0xffffffff;
      thunk_FUN_1449c337b(lVar3,&local_208,local_268,(double)(float)param_2);
      local_280 = *(longlong *)(param_1 + 0x10) + 0xf0;
      local_288 = *(undefined4 *)(lVar3 + 0x5b0);
      FUN_1449a602d(lVar2 + lVar15,lVar3,(float)param_2,uVar1);
      *(undefined8 *)(lVar3 + 0x648) = 0;
      *(undefined8 *)(lVar3 + 0x650) = 0;
      cVar14 = local_269;
    }
    lVar16 = lVar16 + 1;
    lVar15 = lVar15 + 0x60;
  } while (param_3 != (int)lVar16);
  if ((local_e0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574c48e FUN_14574c48e body=140 status=ok
// SIG undefined FUN_14574c48e(void)

longlong FUN_14574c48e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1408376d0();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      FUN_1408374a4(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14574c51a FUN_14574c51a body=157 status=ok
// SIG undefined FUN_14574c51a(void)

void FUN_14574c51a(longlong param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x6c) = 0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0x78) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14574c5b8 FUN_14574c5b8 body=114 status=ok
// SIG undefined FUN_14574c5b8(void)

void FUN_14574c5b8(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((DAT_14cb0d2b0 != 0) && (lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar1 != 0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0xf8) + 0x90) == 0)) {
    FUN_145df44f4(lVar1 + 0x2d0,local_10,param_1,FUN_14083e9a6);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574c62c FUN_14574c62c body=714 status=ok
// SIG undefined FUN_14574c62c(void)

void FUN_14574c62c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_20;
  
  plVar2 = DAT_14c98e618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c98e618 == (longlong *)0x0) goto LAB_14574c7f8;
  local_58 = (undefined8 *)DAT_14c98e618[4];
  local_50 = (longlong *)DAT_14c98e618[5];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)FUN_14574c8f7(&local_58);
  local_68 = plVar7 + 2;
  local_60 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x1b0))(plVar2,&local_68,1);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    (**(code **)(*plVar2 + 0x1b0))(plVar2,&local_68,1);
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
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  lVar5 = plVar2[4];
  FUN_14574cb72(lVar5 + 0x18,&local_58,param_1);
  FUN_14574cace(&local_58,param_1);
  FUN_14574c986(lVar5 + 0x78,&local_70,&local_58);
  FUN_1401cb1ee(&local_58);
  FUN_14574cd32(DAT_14cb0d2b0 + 0xe98,&local_58,param_1);
  local_58 = (undefined8 *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  puVar6 = local_58;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,2);
  *local_58 = &PTR_LAB_149e020b0;
  uVar8 = FUN_144a3f946();
  puVar6[2] = uVar8;
  *puVar6 = &PTR_FUN_14beac540;
  puVar6[3] = param_1;
  FUN_1448b6402(&DAT_14c867408,&local_70,&local_58);
  FUN_1449db362(&local_58);
  local_70 = param_1;
  FUN_14574cdf0(&local_58,&local_70);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0x58) = local_58;
    plVar7 = *(longlong **)(param_1 + 0x60);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
LAB_14574c88c:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x00014574c8c3:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(undefined8 **)(param_1 + 0x58) = local_58;
    plVar7 = *(longlong **)(param_1 + 0x60);
    if (local_50 == plVar7) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar7 = plVar2;
        goto joined_r0x00014574c8c3;
      }
    }
    else {
      *(longlong **)(param_1 + 0x60) = local_50;
      if (plVar7 != (longlong *)0x0) goto LAB_14574c88c;
    }
  }
  plVar2 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14574c7f8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574c8f7 FUN_14574c8f7 body=141 status=ok
// SIG undefined FUN_14574c8f7(void)

undefined8 * FUN_14574c8f7(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x418,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14beac3d0;
  local_28 = *param_1;
  local_20 = param_1[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14574d03e(puVar1 + 2,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574c986 FUN_14574c986 body=315 status=ok
// SIG undefined FUN_14574c986(void)

undefined8 *
FUN_14574c986(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574cace FUN_14574cace body=164 status=ok
// SIG undefined FUN_14574cace(void)

LPCRITICAL_SECTION FUN_14574cace(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14beac460;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_140310d18;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14574cb72 FUN_14574cb72 body=189 status=ok
// SIG undefined FUN_14574cb72(void)

undefined8 FUN_14574cb72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14a5aa940;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beac3f0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_1407ceb8e;
  FUN_14574cc30(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574cc30 FUN_14574cc30 body=216 status=ok
// SIG undefined FUN_14574cc30(void)

undefined8 * FUN_14574cc30(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14574cd32 FUN_14574cd32 body=189 status=ok
// SIG undefined FUN_14574cd32(void)

undefined8 FUN_14574cd32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14a8e9c60;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beac4d0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_140ababac;
  FUN_1456d7658(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574cdf0 FUN_14574cdf0 body=419 status=ok
// SIG undefined FUN_14574cdf0(void)

longlong * FUN_14574cdf0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x38,0x10);
  FUN_14574cf94(lVar2,*param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14beac600;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_14574ceb1;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_14574cf37:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_14574cea0;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_14574cf37;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_14574cea0:
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
    }
  }
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_14574ceb1:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14574cf94 FUN_14574cf94 body=169 status=ok
// SIG undefined FUN_14574cf94(void)

undefined8 * FUN_14574cf94(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bea9cb0;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_28,uVar2);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = FUN_144a80a00(puVar3,&DAT_14a3502a2);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14574d03e FUN_14574d03e body=927 status=ok
// SIG undefined FUN_14574d03e(void)

undefined8 * FUN_14574d03e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(undefined8 **)(*param_2 + 8);
  local_68 = *(longlong **)(*param_2 + 0x10);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_146021cda(param_1,&local_70);
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_1 = &PTR_FUN_14bea9af0;
  lVar6 = 0x120;
  do {
    FUN_1412535c8((longlong)param_1 + lVar6);
    lVar6 = lVar6 + 0x68;
  } while (lVar6 != 0x390);
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x7e] = *param_2;
  lVar6 = param_2[1];
  param_1[0x7f] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[0x80] = 0;
  FUN_14019d794(param_1 + 3,*param_2 + 0x18);
  FUN_14019d794(param_1 + 6,*param_2 + 0x30);
  FUN_14019d794(param_1 + 9,*param_2 + 0x48);
  FUN_14019d794(param_1 + 0xc,*param_2 + 0x60);
  FUN_14574d6a0(param_1 + 0xf,*param_2 + 0x78);
  FUN_1448a8284(*param_2 + 0x18);
  FUN_1448a8284(*param_2 + 0x30);
  FUN_1448a8284(*param_2 + 0x48);
  FUN_1448a8284(*param_2 + 0x60);
  FUN_14574d3de(*param_2 + 0x78);
  FUN_14574d5e2(*param_2 + 0x18,&local_70,param_1);
  DAT_14cc2afa8 = local_70;
  FUN_14574d478(*param_2 + 0x30,&local_70,param_1,&LAB_149828358);
  DAT_14cc2afb0 = local_70;
  FUN_14574d478(*param_2 + 0x48,&local_70,param_1,&LAB_149828362);
  DAT_14cc2afb8 = local_70;
  FUN_14574d478(*param_2 + 0x60,&local_70,param_1,&LAB_14982836c);
  DAT_14cc2afc0 = local_70;
  lVar6 = *param_2;
  FUN_14574d53e(&local_70,param_1);
  FUN_14574c986(lVar6 + 0x78,&local_78,&local_70);
  FUN_1401cb1ee(&local_70);
  lVar7 = DAT_14c98e618 + 0x580;
  DAT_14cc2afc8 = local_78;
  lVar6 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_70 = (undefined8 *)0x0;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68 = (longlong *)CONCAT44(local_68._4_4_,3);
  *local_70 = &PTR_LAB_149e020b0;
  uVar5 = FUN_144a3f946();
  puVar4[2] = uVar5;
  *puVar4 = &PTR_FUN_14beacac0;
  puVar4[3] = lVar6;
  puVar4[4] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1448b6402(lVar7,&local_78,&local_70);
    FUN_1449db362(&local_70);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1448b6402(lVar7,&local_78,&local_70);
    FUN_1449db362(&local_70);
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574d3de FUN_14574d3de body=49 status=ok
// SIG undefined FUN_14574d3de(void)

void FUN_14574d3de(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  FUN_14574d410(param_1);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014574d401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14574d410 FUN_14574d410 body=103 status=ok
// SIG undefined FUN_14574d410(void)

void FUN_14574d410(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      if (((int)plVar3[1] != 0) && (puVar1 = (undefined8 *)*plVar3, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(plVar3 + 1) = 0;
      }
      plVar3 = plVar3 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_14109be94(param_1,0);
  return;
}



// FUNCTION 14574d478 FUN_14574d478 body=196 status=ok
// SIG undefined FUN_14574d478(void)

undefined8
FUN_14574d478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aa9a7d0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beac9e0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_14586669c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574d53e FUN_14574d53e body=164 status=ok
// SIG undefined FUN_14574d53e(void)

LPCRITICAL_SECTION FUN_14574d53e(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14beaca50;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(undefined1 **)&p_Var1->EntryCount = &LAB_14010ec42;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14574d5e2 FUN_14574d5e2 body=189 status=ok
// SIG undefined FUN_14574d5e2(void)

undefined8 FUN_14574d5e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14a5aa940;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14beac970;
  puVar1[3] = param_3;
  puVar1[4] = &LAB_140100844;
  FUN_14574cc30(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574d6a0 FUN_14574d6a0 body=205 status=ok
// SIG undefined FUN_14574d6a0(void)

LPCRITICAL_SECTION FUN_14574d6a0(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != param_1) {
    local_38 = 0;
    uStack_30 = 0;
    EnterCriticalSection(param_2);
    FUN_144a3e8f2(&local_38,param_2 + 1);
    uVar1 = *(undefined4 *)&param_2[1].OwningThread;
    *(undefined4 *)&param_2[1].OwningThread = 2;
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    EnterCriticalSection(param_1);
    FUN_14574d410(param_1);
    FUN_144a3e8f2(param_1 + 1,&local_38);
    *(undefined4 *)&param_1[1].OwningThread = uVar1;
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
    FUN_144760e21(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574d76e FUN_14574d76e body=16 status=ok
// SIG undefined FUN_14574d76e(void)

void FUN_14574d76e(void)

{
  DAT_14cab2be0 = DAT_14cab2be0 + 1;
  return;
}



// FUNCTION 14574d77e FUN_14574d77e body=63 status=ok
// SIG undefined FUN_14574d77e(void)

undefined1 FUN_14574d77e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14574d7be(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 14574d7be FUN_14574d7be body=242 status=ok
// SIG undefined FUN_14574d7be(void)

longlong FUN_14574d7be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140841e06(param_1 + 0x90,param_2 + 0x90);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0xa8);
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar1;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_14119f3c4(param_1 + 0xc0,param_2 + 0xc0);
  FUN_14574d8b0(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  if (param_2 != param_1) {
    FUN_14574d9a2(param_1 + 0x18,param_2 + 0x18);
    FUN_14574dade(param_1 + 0x30,param_2 + 0x30);
    FUN_14574d9a2(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1488c5e82(param_1);
    FUN_14119f28e(param_1,1);
  }
  return param_1;
}



// FUNCTION 14574d8b0 FUN_14574d8b0 body=122 status=ok
// SIG undefined FUN_14574d8b0(void)

longlong FUN_14574d8b0(longlong param_1,longlong param_2)

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
    FUN_14574d92a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14574d92a FUN_14574d92a body=119 status=ok
// SIG undefined FUN_14574d92a(void)

undefined8 * FUN_14574d92a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141068288(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14574d9a2 FUN_14574d9a2 body=314 status=ok
// SIG undefined FUN_14574d9a2(void)

void FUN_14574d9a2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574dade FUN_14574dade body=314 status=ok
// SIG undefined FUN_14574dade(void)

void FUN_14574dade(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574dc1a FUN_14574dc1a body=132 status=ok
// SIG undefined FUN_14574dc1a(void)

void FUN_14574dc1a(longlong param_1,int param_2)

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



// FUNCTION 14574dca0 FUN_14574dca0 body=274 status=ok
// SIG undefined FUN_14574dca0(void)

undefined4 * FUN_14574dca0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14574dee0(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14574de3a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14574dfc6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574ddb4 FUN_14574ddb4 body=132 status=ok
// SIG undefined FUN_14574ddb4(void)

void FUN_14574ddb4(longlong param_1,int param_2)

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



// FUNCTION 14574de3a FUN_14574de3a body=165 status=ok
// SIG undefined FUN_14574de3a(void)

undefined8 FUN_14574de3a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148838354(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14574dee0 FUN_14574dee0 body=230 status=ok
// SIG undefined FUN_14574dee0(void)

int * FUN_14574dee0(longlong *param_1,int *param_2)

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



// FUNCTION 14574dfc6 FUN_14574dfc6 body=485 status=ok
// SIG undefined FUN_14574dfc6(void)

void FUN_14574dfc6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574e1b2 FUN_14574e1b2 body=132 status=ok
// SIG undefined FUN_14574e1b2(void)

void FUN_14574e1b2(longlong param_1,int param_2)

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



// FUNCTION 14574e24e FUN_14574e24e body=667 status=ok
// SIG undefined FUN_14574e24e(void)

void FUN_14574e24e(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14a1e1920;
  lVar6 = 0x130;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar6 + -0x88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x78) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x10) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)param_1 + lVar6 + -8) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + lVar6) = 0;
    ((undefined8 *)((longlong)param_1 + lVar6))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar6 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar6 = lVar6 + 0x138;
  } while (lVar6 != 0x610);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0x9f) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)((longlong)param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  uVar4 = *(undefined8 *)(param_2 + 0x508);
  param_1[0xa0] = *(undefined8 *)(param_2 + 0x500);
  param_1[0xa1] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x518);
  param_1[0xa2] = *(undefined8 *)(param_2 + 0x510);
  param_1[0xa3] = uVar4;
  if (0 < *(int *)(param_2 + 0x4f8)) {
    lVar6 = 0;
    do {
      lVar8 = lVar6 * 0x138;
      param_1[lVar6 * 0x27 + 0x16] = *(undefined8 *)(param_2 + 0xb0 + lVar8);
      param_1[lVar6 * 0x27 + 0x17] = *(undefined8 *)(param_2 + 0xb8 + lVar8);
      param_1[lVar6 * 0x27 + 0x15] = *(undefined8 *)(param_2 + 0xa8 + lVar8);
      param_1[lVar6 * 0x27 + 0x24] = *(undefined8 *)(param_2 + 0x120 + lVar8);
      *(undefined4 *)(param_1 + lVar6 * 0x27 + 0x25) = *(undefined4 *)(param_2 + 0x128 + lVar8);
      param_1[lVar6 * 0x27 + 0x29] = *(undefined8 *)(param_2 + 0x148 + lVar8);
      param_1[lVar6 * 0x27 + 0x28] = *(undefined8 *)(param_2 + 0x140 + lVar8);
      puVar1 = (undefined8 *)(param_2 + 0x130 + lVar8);
      uVar4 = puVar1[1];
      param_1[lVar6 * 0x27 + 0x26] = *puVar1;
      (param_1 + lVar6 * 0x27 + 0x26)[1] = uVar4;
      pdVar2 = (double *)(param_2 + 0xa8 + lVar8);
      if (10000.0 < *pdVar2 || *pdVar2 == 10000.0) {
        param_1[lVar6 * 0x27 + 0x15] = 0;
      }
      lVar8 = lVar8 + param_2 + 0x18;
      lVar9 = 0;
      bVar5 = true;
      do {
        bVar7 = bVar5;
        lVar3 = lVar9 * 0x18;
        param_1[lVar6 * 0x27 + lVar9 * 3 + 5] = *(undefined8 *)(lVar8 + 0x10 + lVar3);
        uVar4 = ((undefined8 *)(lVar8 + lVar3))[1];
        param_1[lVar6 * 0x27 + lVar9 * 3 + 3] = *(undefined8 *)(lVar8 + lVar3);
        (param_1 + lVar6 * 0x27 + lVar9 * 3 + 3)[1] = uVar4;
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0xb] = *(undefined8 *)(lVar8 + 0x40 + lVar3);
        puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar3);
        uVar4 = puVar1[1];
        param_1[lVar6 * 0x27 + lVar9 * 3 + 9] = *puVar1;
        (param_1 + lVar6 * 0x27 + lVar9 * 3 + 9)[1] = uVar4;
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0x11] = *(undefined8 *)(lVar8 + 0x70 + lVar3);
        puVar1 = (undefined8 *)(lVar8 + 0x60 + lVar3);
        uVar4 = puVar1[1];
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0xf] = *puVar1;
        (param_1 + lVar6 * 0x27 + lVar9 * 3 + 0xf)[1] = uVar4;
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0x1a] = *(undefined8 *)(lVar8 + 0xb8 + lVar3);
        puVar1 = (undefined8 *)(lVar8 + 0xa8 + lVar3);
        uVar4 = puVar1[1];
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0x18] = *puVar1;
        (param_1 + lVar6 * 0x27 + lVar9 * 3 + 0x18)[1] = uVar4;
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0x20] = *(undefined8 *)(lVar8 + 0xe8 + lVar3);
        puVar1 = (undefined8 *)(lVar8 + 0xd8 + lVar3);
        uVar4 = puVar1[1];
        param_1[lVar6 * 0x27 + lVar9 * 3 + 0x1e] = *puVar1;
        (param_1 + lVar6 * 0x27 + lVar9 * 3 + 0x1e)[1] = uVar4;
        lVar9 = 1;
        bVar5 = false;
      } while (bVar7);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_2 + 0x4f8));
  }
  return;
}



// FUNCTION 14574e4ea FUN_14574e4ea body=114 status=ok
// SIG undefined FUN_14574e4ea(void)

void FUN_14574e4ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  (*pcVar3)(lVar2 + iVar1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574e55e FUN_14574e55e body=76 status=ok
// SIG undefined FUN_14574e55e(void)

void FUN_14574e55e(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x20));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574e5b6 FUN_14574e5b6 body=79 status=ok
// SIG undefined FUN_14574e5b6(void)

void FUN_14574e5b6(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_14574e606();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14574e606 FUN_14574e606 body=89 status=ok
// SIG undefined FUN_14574e606(void)

void FUN_14574e606(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14574e660();
  return;
}



// FUNCTION 14574e660 FUN_14574e660 body=80 status=ok
// SIG undefined FUN_14574e660(void)

void FUN_14574e660(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14574e6b0(param_1,param_2);
  return;
}



// FUNCTION 14574e6b0 FUN_14574e6b0 body=114 status=ok
// SIG undefined FUN_14574e6b0(void)

void FUN_14574e6b0(longlong *param_1,int param_2)

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



// FUNCTION 14574e722 FUN_14574e722 body=185 status=ok
// SIG undefined FUN_14574e722(void)

void FUN_14574e722(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1c1350;
  if (param_1[8] != 0) {
    FUN_14574e7dc(param_1);
  }
  plVar3 = (longlong *)param_1[0x32];
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
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7f26(param_1);
  return;
}



// FUNCTION 14574e7dc FUN_14574e7dc body=122 status=ok
// SIG undefined FUN_14574e7dc(void)

void FUN_14574e7dc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x16c) == '\x01') {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  FUN_140872c3a(param_1);
  FUN_140872c8a(param_1);
  param_1[0x31] = 0;
  plVar3 = (longlong *)param_1[0x32];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x32] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014574e852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14574e856 FUN_14574e856 body=246 status=ok
// SIG undefined FUN_14574e856(void)

void FUN_14574e856(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar5 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      lVar10 = (longlong)iVar6;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar7 = iVar6;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar8 = iVar4;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar7 = iVar7 + 1;
        plVar9 = plVar9 + 2;
        iVar8 = iVar7;
      } while (bVar5 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar8 - iVar6;
      if (bVar5 == false) {
        if (iVar12 != iVar6) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_140854700(plVar2 + lVar10 * 2,iVar4);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar6 = iVar8;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 14574e94c FUN_14574e94c body=430 status=ok
// SIG undefined FUN_14574e94c(void)

longlong * FUN_14574e94c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147adf9f0(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_147adf9f0(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147adf96a(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14574eafc FUN_14574eafc body=62 status=ok
// SIG undefined FUN_14574eafc(void)

void FUN_14574eafc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14574eb3a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 14574eb3a FUN_14574eb3a body=111 status=ok
// SIG undefined FUN_14574eb3a(void)

ulonglong FUN_14574eb3a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,0x10);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 14574eba9 FUN_14574eba9 body=753 status=ok
// SIG undefined FUN_14574eba9(void)

void FUN_14574eba9(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar18 = iVar13;
joined_r0x00014574ebdd:
    do {
      iVar15 = iVar13 * 2 + 1;
      if (iVar15 < (int)param_2) {
        iVar17 = iVar13 * 2 + 2;
        if ((iVar17 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar15 * 6 + 5) <
            *(float *)(param_1 + (longlong)iVar17 * 6 + 5) ||
            *(float *)(param_1 + (longlong)iVar15 * 6 + 5) ==
            *(float *)(param_1 + (longlong)iVar17 * 6 + 5))) {
          iVar15 = iVar17;
        }
        if (*(float *)(param_1 + (longlong)iVar13 * 6 + 5) <=
            *(float *)(param_1 + (longlong)iVar15 * 6 + 5) &&
            *(float *)(param_1 + (longlong)iVar15 * 6 + 5) !=
            *(float *)(param_1 + (longlong)iVar13 * 6 + 5)) {
          puVar19 = param_1 + (longlong)iVar13 * 6;
          puVar16 = param_1 + (longlong)iVar15 * 6;
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          uVar4 = puVar19[2];
          uVar5 = puVar19[3];
          uVar6 = puVar19[4];
          uVar7 = puVar19[5];
          uVar8 = *puVar16;
          uVar9 = puVar16[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          uVar12 = puVar16[5];
          puVar19[4] = puVar16[4];
          puVar19[5] = uVar12;
          puVar19[2] = uVar10;
          puVar19[3] = uVar11;
          *puVar19 = uVar8;
          puVar19[1] = uVar9;
          local_48._0_4_ = (undefined4)uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar3;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar16 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar16 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar16 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar16 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar16 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
          iVar13 = iVar15;
          local_48 = uVar2;
          uStack_40 = uVar3;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x00014574ebdd;
        }
      }
      bVar20 = iVar18 != 0;
      iVar13 = iVar18 + -1;
      iVar18 = iVar13;
    } while (bVar20);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uVar8 = param_1[uVar14 * 6];
      uVar9 = (param_1 + uVar14 * 6)[1];
      uVar10 = param_1[uVar14 * 6 + 2];
      uVar11 = (param_1 + uVar14 * 6 + 2)[1];
      uVar12 = (param_1 + uVar14 * 6 + 4)[1];
      param_1[4] = param_1[uVar14 * 6 + 4];
      param_1[5] = uVar12;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar2;
      local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar3;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar16 = param_1 + uVar14 * 6 + 4;
      *(undefined4 *)puVar16 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar16 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_20._4_4_;
      puVar16 = param_1 + uVar14 * 6 + 2;
      *(undefined4 *)puVar16 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar16 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_30._4_4_;
      puVar16 = param_1 + uVar14 * 6;
      *(undefined4 *)puVar16 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
      local_48 = uVar2;
      uStack_40 = uVar3;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar13 = 0;
          iVar15 = 1;
          iVar18 = 0;
          do {
            iVar13 = iVar13 + 2;
            iVar17 = iVar15;
            if (((longlong)iVar13 < (longlong)uVar14) &&
               (*(float *)(param_1 + (longlong)iVar15 * 6 + 5) <
                *(float *)(param_1 + (longlong)iVar13 * 6 + 5) ||
                *(float *)(param_1 + (longlong)iVar15 * 6 + 5) ==
                *(float *)(param_1 + (longlong)iVar13 * 6 + 5))) {
              iVar17 = iVar13;
            }
            if (*(float *)(param_1 + (longlong)iVar17 * 6 + 5) <
                *(float *)(param_1 + (longlong)iVar18 * 6 + 5) ||
                *(float *)(param_1 + (longlong)iVar17 * 6 + 5) ==
                *(float *)(param_1 + (longlong)iVar18 * 6 + 5)) break;
            puVar19 = param_1 + (longlong)iVar18 * 6;
            puVar16 = param_1 + (longlong)iVar17 * 6;
            uVar2 = *puVar19;
            uVar3 = puVar19[1];
            uVar4 = puVar19[2];
            uVar5 = puVar19[3];
            uVar6 = puVar19[4];
            uVar7 = puVar19[5];
            uVar8 = *puVar16;
            uVar9 = puVar16[1];
            uVar10 = puVar16[2];
            uVar11 = puVar16[3];
            uVar12 = puVar16[5];
            puVar19[4] = puVar16[4];
            puVar19[5] = uVar12;
            puVar19[2] = uVar10;
            puVar19[3] = uVar11;
            *puVar19 = uVar8;
            puVar19[1] = uVar9;
            puVar16[4] = uVar6;
            puVar16[5] = uVar7;
            puVar16[2] = uVar4;
            puVar16[3] = uVar5;
            *puVar16 = uVar2;
            puVar16[1] = uVar3;
            iVar13 = iVar17 * 2;
            iVar15 = iVar17 * 2 + 1;
            iVar18 = iVar17;
          } while ((longlong)iVar15 < (longlong)uVar14);
          uVar1 = uVar14 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[4];
          uVar7 = param_1[5];
          uVar8 = param_1[uVar1 * 6];
          uVar9 = (param_1 + uVar1 * 6)[1];
          uVar10 = param_1[uVar1 * 6 + 2];
          uVar11 = (param_1 + uVar1 * 6 + 2)[1];
          uVar12 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar12;
          param_1[2] = uVar10;
          param_1[3] = uVar11;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          local_48._0_4_ = (undefined4)uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar3;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar16 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar16 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar16 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_20._4_4_;
          puVar16 = param_1 + uVar1 * 6 + 2;
          *(undefined4 *)puVar16 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar16 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_30._4_4_;
          puVar16 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar16 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
          bVar20 = 2 < uVar14;
          uVar14 = uVar1;
          local_48 = uVar2;
          uStack_40 = uVar3;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar20);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14574eebc FUN_14574eebc body=63 status=ok
// SIG undefined FUN_14574eebc(void)

longlong FUN_14574eebc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14574f1d4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_14574eefb(lVar2);
  return lVar2;
}



// FUNCTION 14574eefb FUN_14574eefb body=15 status=ok
// SIG undefined FUN_14574eefb(void)

void FUN_14574eefb(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14574ef0a FUN_14574ef0a body=15 status=ok
// SIG undefined FUN_14574ef0a(void)

longlong FUN_14574ef0a(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0xf0 + *(longlong *)(param_1 + 0x60);
}



// FUNCTION 14574ef1a FUN_14574ef1a body=63 status=ok
// SIG undefined FUN_14574ef1a(void)

longlong FUN_14574ef1a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14574f140(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_14574ef59(lVar2);
  return lVar2;
}



// FUNCTION 14574ef59 FUN_14574ef59 body=26 status=ok
// SIG undefined FUN_14574ef59(void)

void FUN_14574ef59(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



// FUNCTION 14574ef74 FUN_14574ef74 body=228 status=ok
// SIG undefined FUN_14574ef74(void)

longlong FUN_14574ef74(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6a750 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14876165b;
    local_40 = FUN_146526fac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"SequencerStreamableContentProvider",&DAT_14cb6a750,
                  &DAT_14876165a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574f05a FUN_14574f05a body=98 status=ok
// SIG undefined FUN_14574f05a(void)

void FUN_14574f05a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14574f0bc FUN_14574f0bc body=132 status=ok
// SIG undefined FUN_14574f0bc(void)

void FUN_14574f0bc(longlong param_1,int param_2)

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



// FUNCTION 14574f140 FUN_14574f140 body=147 status=ok
// SIG undefined FUN_14574f140(void)

void FUN_14574f140(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14574f1d4 FUN_14574f1d4 body=147 status=ok
// SIG undefined FUN_14574f1d4(void)

void FUN_14574f1d4(longlong param_1,int param_2)

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



// FUNCTION 14574f268 FUN_14574f268 body=143 status=ok
// SIG undefined FUN_14574f268(void)

void FUN_14574f268(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14574f2f8 FUN_14574f2f8 body=147 status=ok
// SIG undefined FUN_14574f2f8(void)

void FUN_14574f2f8(longlong param_1,int param_2)

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



// FUNCTION 14574f38c FUN_14574f38c body=147 status=ok
// SIG undefined FUN_14574f38c(void)

void FUN_14574f38c(longlong param_1,int param_2)

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



// FUNCTION 14574f420 FUN_14574f420 body=254 status=ok
// SIG undefined FUN_14574f420(void)

undefined8
FUN_14574f420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b424980;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574f520 FUN_14574f520 body=387 status=ok
// SIG undefined FUN_14574f520(void)

uint FUN_14574f520(longlong param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = FUN_140af7eac(*(undefined8 *)(param_1 + 0x10));
  local_78 = *(undefined1 *)((longlong)param_2 + 0x54);
  uVar6 = 0;
  FUN_1406d7b94(param_1,&local_60,uVar7,0);
  if (local_60 != (longlong *)0x0) {
    lVar3 = *local_60;
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      fVar8 = 0.0;
      if (0.0 <= *(float *)(param_2 + 9)) {
        fVar8 = *(float *)(param_2 + 9);
      }
      fVar9 = 0.0;
      if (0.0 <= param_3) {
        fVar9 = param_3;
      }
      iVar5 = FUN_144b42fe0(((int)(fVar8 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar9 * 65536.0));
      FUN_14011ecb7(lVar3,iVar5 + 0x20 >> 6);
      local_68 = *param_2;
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      cVar4 = FUN_140af803e(&local_68);
      if ((cVar4 == '\0') || (*(char *)((longlong)local_60 + 0xb9) != '\x01')) {
        uVar6 = FUN_140af7d6f(*local_60,(char)local_60[0x23]);
      }
      else {
        uVar6 = FUN_144b42fe0((int)local_60[0x18],
                              *(undefined4 *)(*(longlong *)(*local_60 + 0x80) + 0x20));
        uVar6 = uVar6 & 0xffffffc0;
      }
      uVar6 = uVar6 + 0x20 >> 6;
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574f6a4 FUN_14574f6a4 body=543 status=ok
// SIG undefined FUN_14574f6a4(void)

int FUN_14574f6a4(longlong param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar8 = FUN_140af7eac(*(undefined8 *)(param_1 + 0x10));
  local_88 = *(undefined1 *)((longlong)param_2 + 0x54);
  iVar5 = 0;
  FUN_1406d7b94(param_1,&local_70,uVar8,0);
  if (local_70 == (longlong *)0x0) goto LAB_14574f7e5;
  lVar3 = *local_70;
  if (lVar3 == 0) {
    iVar5 = 0;
    goto LAB_14574f7e5;
  }
  fVar9 = 0.0;
  if (0.0 <= *(float *)(param_2 + 9)) {
    fVar9 = *(float *)(param_2 + 9);
  }
  fVar10 = 0.0;
  if (0.0 <= param_3) {
    fVar10 = param_3;
  }
  iVar5 = FUN_144b42fe0(((int)(fVar9 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar10 * 65536.0));
  FUN_14011ecb7(lVar3,iVar5 + 0x20 >> 6);
  lVar3 = param_2[2];
  local_78 = *param_2;
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar4 = FUN_140af803e(&local_78);
  if (cVar4 == '\0') {
LAB_14574f7c0:
    iVar5 = FUN_140af7db2(*local_70,(char)local_70[0x23]);
  }
  else {
    if ((char)local_70[0x17] == '\0') {
      if (*(char *)((longlong)local_70 + 0xb9) == '\0') goto LAB_14574f7c0;
      uVar6 = FUN_146936c9c(*local_70,(char)local_70[0x23]);
    }
    else {
      iVar5 = FUN_144b42fe0(*(undefined4 *)((longlong)local_70 + 0xbc),
                            *(undefined4 *)(*(longlong *)(*local_70 + 0x80) + 0x20));
      uVar6 = iVar5 + 0x3fU & 0xffffffc0;
    }
    if (*(char *)((longlong)local_70 + 0xb9) == '\x01') {
      uVar7 = FUN_144b42fe0((int)local_70[0x18],
                            *(undefined4 *)(*(longlong *)(*local_70 + 0x80) + 0x20));
      uVar7 = uVar7 & 0xffffffc0;
    }
    else {
      uVar7 = FUN_140af7d6f(*local_70,(char)local_70[0x23]);
    }
    iVar5 = uVar6 - uVar7;
  }
  iVar5 = (int)((float)(int)lVar3 * param_3 + (float)(iVar5 + 0x20 >> 6));
LAB_14574f7e5:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14574f8c4 FUN_14574f8c4 body=55 status=ok
// SIG undefined FUN_14574f8c4(void)

void FUN_14574f8c4(longlong *param_1)

{
  FUN_14574fab6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14574f8fc FUN_14574f8fc body=93 status=ok
// SIG undefined FUN_14574f8fc(void)

undefined8 * FUN_14574f8fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412f41f5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14574f9b6(param_1,iVar1);
      FUN_14574fa29(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14574f95a FUN_14574f95a body=91 status=ok
// SIG undefined FUN_14574f95a(void)

longlong FUN_14574f95a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140869d86(param_1);
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



// FUNCTION 14574f9b6 FUN_14574f9b6 body=115 status=ok
// SIG undefined FUN_14574f9b6(void)

void FUN_14574f9b6(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14574fa29 FUN_14574fa29 body=140 status=ok
// SIG undefined FUN_14574fa29(void)

void FUN_14574fa29(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar9[-2];
      _Src = *(void **)(puVar9 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 6) = puVar9[8];
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar6 = puVar9[5];
      uVar7 = puVar9[6];
      uVar8 = puVar9[7];
      *(undefined4 *)(param_1 + 4) = puVar9[4];
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
      *(undefined4 *)(param_1 + 5) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(undefined4 *)(param_1 + 3) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      param_1 = param_1 + 7;
      puVar9 = puVar9 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14574fab6 FUN_14574fab6 body=366 status=ok
// SIG undefined FUN_14574fab6(void)

void FUN_14574fab6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1403af08a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14574fc26 FUN_14574fc26 body=68 status=ok
// SIG undefined FUN_14574fc26(void)

void FUN_14574fc26(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14086a098(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0ab820;
  puVar1[5] = &PTR_FUN_14b0abad0;
  puVar1[10] = &PTR_FUN_14b0abb00;
  puVar1[0xb] = &PTR_FUN_14b0abb30;
  return;
}



// FUNCTION 14574fc6a FUN_14574fc6a body=1803 status=ok
// SIG undefined FUN_14574fc6a(void)

undefined1 * FUN_14574fc6a(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_3c8 [32];
  undefined ***local_3a8;
  undefined4 local_3a0;
  longlong *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined1 *local_378;
  longlong local_370;
  undefined8 local_368;
  longlong *plStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined **local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *plStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined3 uStack_2e8;
  undefined5 uStack_2e5;
  undefined3 uStack_2e0;
  undefined8 uStack_2dd;
  undefined **local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *plStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined3 uStack_268;
  undefined8 uStack_265;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined3 uStack_248;
  undefined8 uStack_245;
  undefined8 local_238;
  undefined8 uStack_230;
  char local_220 [8];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_200;
  undefined1 local_1f8 [136];
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *plStack_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  local_378 = param_2;
  if (*(int *)(param_3 + 0x130) < 1) {
    local_330 = *(undefined8 *)(param_4 + 0x18);
    local_340 = *(undefined8 *)(param_4 + 8);
    uStack_338 = *(undefined8 *)(param_4 + 0x10);
    local_348 = &PTR_FUN_149eda650;
    local_328 = *(undefined8 *)(param_4 + 0x20);
    plStack_320 = *(longlong **)(param_4 + 0x28);
    local_318 = *(undefined8 *)(param_4 + 0x30);
    uStack_310 = *(undefined8 *)(param_4 + 0x38);
    local_308 = *(undefined8 *)(param_4 + 0x40);
    local_300 = *(undefined8 *)(param_4 + 0x48);
    local_2f8 = *(longlong **)(param_4 + 0x50);
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
      UNLOCK();
    }
    local_2f0 = *(undefined8 *)(param_4 + 0x58);
    uStack_2dd = *(undefined8 *)(param_4 + 0x6b);
    uStack_2e0 = (undefined3)((ulonglong)*(undefined8 *)(param_4 + 99) >> 0x28);
    uStack_2e8 = (undefined3)*(undefined8 *)(param_4 + 0x60);
    uStack_2e5 = (undefined5)((ulonglong)*(undefined8 *)(param_4 + 0x60) >> 0x18);
  }
  else {
    lVar10 = param_3 + 8;
    if (*(longlong *)(param_3 + 0x128) != 0) {
      lVar10 = *(longlong *)(param_3 + 0x128);
    }
    local_168 = *(undefined8 *)(lVar10 + 0x38);
    plVar11 = *(longlong **)(lVar10 + 0x40);
    if (plVar11 == (longlong *)0x0) {
      plStack_160 = (longlong *)0x0;
      FUN_1403d09a4(param_1,&local_348,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plStack_160 = plVar11;
      FUN_1403d09a4(param_1,&local_348,param_4);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  plVar11 = local_2f8;
  local_238 = local_340;
  uStack_230 = uStack_338;
  local_368 = local_328;
  plStack_360 = plStack_320;
  local_358 = local_318;
  uStack_350 = uStack_310;
  local_380 = local_308;
  local_388 = local_300;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
  }
  uStack_248 = uStack_2e0;
  uStack_245 = uStack_2dd;
  uStack_258 = local_2f0;
  uStack_250 = (undefined4)CONCAT53(uStack_2e5,uStack_2e8);
  uStack_24c = (undefined4)((uint5)uStack_2e5 >> 8);
  uVar8 = (ulonglong)*(int *)(param_3 + 0x130);
  local_220[0] = '\0';
  local_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  memset(local_1f8,0,0x88);
  local_170 = 0x20702;
  local_16c = 0;
  if (0 < (longlong)uVar8) {
    local_370 = param_3 + 8;
    lVar10 = uVar8 * 0x48 + -8;
    lVar9 = uVar8 * 0x14 + -4;
    local_390 = plVar11;
    do {
      local_50 = *(char *)(*(longlong *)(param_3 + 0x150) + lVar9);
      if (local_50 == '\x01') {
        lVar7 = *(longlong *)(param_3 + 0x150) + lVar9;
        local_168 = *(undefined8 *)(lVar7 + -0x10);
        plStack_160 = *(longlong **)(lVar7 + -8);
      }
      lVar7 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar7 = local_370;
      }
      local_78 = *(undefined8 *)(lVar7 + -0x10 + lVar10);
      puVar4 = (undefined8 *)(lVar7 + -0x40 + lVar10);
      local_a8 = *puVar4;
      uStack_a0 = puVar4[1];
      puVar4 = (undefined8 *)(lVar7 + -0x30 + lVar10);
      local_98 = *puVar4;
      uStack_90 = puVar4[1];
      puVar5 = (undefined4 *)(lVar7 + -0x20 + lVar10);
      local_88 = *puVar5;
      uStack_84 = puVar5[1];
      uStack_80 = puVar5[2];
      uStack_7c = puVar5[3];
      local_70 = *(longlong **)(lVar7 + -8 + lVar10);
      local_68 = *(longlong **)(lVar7 + lVar10);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      if (local_50 == '\0') {
        local_2b0 = local_368;
        plStack_2a8 = plStack_360;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
      }
      else {
        local_60 = local_168;
        plStack_58 = plStack_160;
        local_2b0 = local_168;
        plStack_2a8 = plStack_160;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_390 + 1) = (int)local_390[1] + 1;
          UNLOCK();
        }
      }
      uStack_268 = uStack_248;
      uStack_265 = uStack_245;
      uStack_26c = uStack_24c;
      uStack_270 = uStack_250;
      uStack_274 = uStack_258._4_4_;
      uStack_278 = (undefined4)uStack_258;
      local_288 = local_388;
      local_290 = local_380;
      uStack_294 = uStack_350._4_4_;
      uStack_298 = (undefined4)uStack_350;
      uStack_29c = local_358._4_4_;
      local_2a0 = (undefined4)local_358;
      uStack_2c0 = uStack_230;
      local_2c8 = local_238;
      local_2d0 = &PTR_FUN_149eda650;
      local_2b8 = param_3;
      local_280 = plVar11;
      (**(code **)(*local_70 + 0xa0))(local_70,&local_168,&local_a8,&local_2d0);
      FUN_1402c173a(&local_168,&local_70);
      FUN_1402c17c2(local_220,&local_168);
      FUN_14493db24(&local_168);
      local_3a0 = local_2c8._4_4_;
      local_3a8 = &local_2d0;
      FUN_1402c1d72(param_1,param_3,local_220,param_3);
      plVar11 = local_280;
      local_2d0 = &PTR_FUN_149eda650;
      if (local_280 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_280 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_280)(local_280);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar3 = local_68;
      plVar11 = local_390;
      if (local_50 == '\x01') {
        local_50 = '\0';
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (uVar8 < 2) break;
      lVar10 = lVar10 + -0x48;
      lVar9 = lVar9 + -0x14;
      uVar8 = uVar8 - 1;
    } while (local_220[0] == '\0');
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  puVar6 = local_378;
  FUN_1403d4924(local_378,local_220);
  FUN_14493db24(local_220);
  plVar11 = local_2f8;
  local_348 = &PTR_FUN_149eda650;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + -1;
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 145750376 FUN_145750376 body=12 status=ok
// SIG undefined FUN_145750376(void)

void FUN_145750376(longlong param_1)

{
  FUN_140c7df7a(param_1,*(undefined8 *)(param_1 + 0x31c));
  return;
}



// FUNCTION 145750382 FUN_145750382 body=85 status=ok
// SIG undefined FUN_145750382(void)

void FUN_145750382(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_1457503d8();
  return;
}



// FUNCTION 1457503d8 FUN_1457503d8 body=114 status=ok
// SIG undefined FUN_1457503d8(void)

void FUN_1457503d8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 14575044a FUN_14575044a body=277 status=ok
// SIG undefined FUN_14575044a(void)

void FUN_14575044a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  uint uVar7;
  bool bVar8;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    plVar3 = *(longlong **)(lVar6 + 0x228);
    if (plVar3 == (longlong *)0x0) {
LAB_1457504af:
      if (param_1 != 0) {
        return;
      }
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1457504af;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      lVar6 = *(longlong *)(lVar6 + 0x220);
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
      if (lVar6 != param_1) {
        return;
      }
    }
    (**(code **)(*(longlong *)*param_2 + 0x18))();
    iVar5 = *(int *)(param_1 + 0x158);
    if ((longlong)iVar5 != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar6) == *param_2) {
          if (iVar5 <= (int)uVar7 || (int)uVar7 < 0) {
            return;
          }
          _Dst = (void *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar7 & 0x7fffffff) * 0x10);
          FUN_1403d7d42(_Dst,1);
          iVar5 = *(int *)(param_1 + 0x158);
          if (iVar5 - 1U != uVar7) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + iVar5) << 4);
            iVar5 = *(int *)(param_1 + 0x158);
          }
          *(int *)(param_1 + 0x158) = iVar5 + -1;
          return;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar5 << 4 != lVar6);
    }
  }
  return;
}



// FUNCTION 145750560 FUN_145750560 body=289 status=ok
// SIG undefined FUN_145750560(void)

void FUN_145750560(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x58 + (longlong)iStack_44 * 0x70) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145750682 FUN_145750682 body=322 status=ok
// SIG undefined FUN_145750682(void)

void FUN_145750682(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 1457507c6 FUN_1457507c6 body=335 status=ok
// SIG undefined FUN_1457507c6(void)

undefined4 * FUN_1457507c6(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457509a8(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar8 = *(ulonglong *)*param_2;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_145750916(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cb7f9a0 - DAT_14cb7f9cc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7f9e0)) {
      uVar5 = DAT_14cb7f9e0 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x14) = uVar5;
      puVar7 = DAT_14cb7f9d8;
      if (DAT_14cb7f9d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7f9d0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7f9e0 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cb7f9d8;
      if (DAT_14cb7f9d8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7f9d0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7f9e0 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cb7f9e0 = iVar9;
      FUN_145750ab6();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145750916 FUN_145750916 body=145 status=ok
// SIG undefined FUN_145750916(void)

undefined8 FUN_145750916(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7f9a0 - DAT_14cb7f9cc != 1) && (DAT_14cb7f9a0 != DAT_14cb7f9cc)) {
    puVar6 = &DAT_14cb7f9d0;
    if (DAT_14cb7f9d8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7f9d8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7f9e0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7f998 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1457bb2a4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457509a8 FUN_1457509a8 body=270 status=ok
// SIG undefined FUN_1457509a8(void)

int * FUN_1457509a8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7f9c8;
  iVar3 = DAT_14cb7f9a0;
  if (DAT_14cb7f9cc == 0) {
    iVar2 = DAT_14cb7f9a0 + 1;
    bVar7 = DAT_14cb7f9a4 == DAT_14cb7f9a0;
    DAT_14cb7f9a0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7f998,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7f9a8,1);
    puVar4 = DAT_14cb7f9b8;
    if (DAT_14cb7f9b8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7f9a8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7f9c8;
    DAT_14cb7f9c8 = *(int *)(DAT_14cb7f998 + 4 + lVar6 * 0x18);
    DAT_14cb7f9cc = DAT_14cb7f9cc + -1;
    if (DAT_14cb7f9cc != 0) {
      *(undefined4 *)(DAT_14cb7f998 + (longlong)DAT_14cb7f9c8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7f9a8;
  if (DAT_14cb7f9b8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7f9b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7f998;
  return param_1;
}



// FUNCTION 145750ab6 FUN_145750ab6 body=524 status=ok
// SIG undefined FUN_145750ab6(void)

void FUN_145750ab6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7f9d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7f9d8,0,0,4);
  }
  uVar7 = DAT_14cb7f9e0;
  uVar2 = local_50;
  if (DAT_14cb7f9e0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb7f9d0,0,DAT_14cb7f9e0,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14cb7f9d8;
        if (DAT_14cb7f9d8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7f9d0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7f9e0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7f9a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7f9c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7f998;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb7f9e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14cb7f9d8;
        if (DAT_14cb7f9d8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7f9d0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7f9e0 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7f9d8;
        if (DAT_14cb7f9d8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7f9d0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7f9e0 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145750cc4 FUN_145750cc4 body=125 status=ok
// SIG undefined FUN_145750cc4(void)

undefined8 * FUN_145750cc4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145750dd6();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145750d42 FUN_145750d42 body=147 status=ok
// SIG undefined FUN_145750d42(void)

void FUN_145750d42(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145750dd6 FUN_145750dd6 body=438 status=ok
// SIG undefined FUN_145750dd6(void)

longlong * FUN_145750dd6(longlong *param_1,longlong *param_2)

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
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x48) != 0) {
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



// FUNCTION 145750f8e FUN_145750f8e body=237 status=ok
// SIG undefined FUN_145750f8e(void)

undefined8
FUN_145750f8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a5a80;
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
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b9a5a10;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14575107c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575107c FUN_14575107c body=216 status=ok
// SIG undefined FUN_14575107c(void)

undefined8 * FUN_14575107c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145751166 FUN_145751166 body=68 status=ok
// SIG undefined FUN_145751166(void)

undefined8 FUN_145751166(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(*(longlong *)(param_1 + 0x160) + 0x4cc) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 0x160) + 0xd0) == '\x01')) {
    FUN_1489a7980(param_1);
  }
  FUN_14088262a(param_1,param_2);
  return param_2;
}



// FUNCTION 1457511aa FUN_1457511aa body=198 status=ok
// SIG undefined FUN_1457511aa(void)

int FUN_1457511aa(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1457511f3:
      lVar11 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar11 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar8 = 0;
        do {
          uVar9 = *(ushort *)(*(longlong *)(lVar4 + lVar11 * 0x28) + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar6 = *(ushort *)(*param_3 + lVar8);
          if (uVar9 == uVar6) {
            if (uVar9 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar9)) goto LAB_145751265;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_145751265;
          }
          lVar8 = lVar8 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_145751256;
    }
  }
  return -1;
LAB_145751265:
  if (uVar9 == uVar6) {
    return iVar1;
  }
LAB_145751256:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1457511f3;
}



// FUNCTION 1457512ae FUN_1457512ae body=48 status=ok
// SIG undefined FUN_1457512ae(void)

void FUN_1457512ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1457512de FUN_1457512de body=55 status=ok
// SIG undefined FUN_1457512de(void)

void FUN_1457512de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabae0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabae0 = FUN_140002ddd(FUN_1465dec9a,uVar1,L"OakInventoryShopDef");
  }
  return;
}



// FUNCTION 145751316 FUN_145751316 body=541 status=ok
// SIG undefined FUN_145751316(void)

bool FUN_145751316(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_184;
  undefined **local_180 [19];
  undefined **local_e8 [18];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140b96410();
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_144a791f8(param_2,&DAT_149e01f5a,1,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_144a38768(param_2,&DAT_149e01f5a,1,1);
    if (cVar1 != '\0') {
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -2;
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_146802a00(puVar7,iVar4);
  FUN_144a5eaa2(&local_38,uVar2,1);
  bVar5 = false;
  cVar1 = FUN_1415cf884(puVar7,iVar4,local_38,0);
  lVar3 = local_38;
  if (cVar1 != '\0') {
    lVar6 = (longlong)(int)uStack_30;
    FUN_144869430(local_e8);
    local_e8[0] = &PTR__purecall_149e30ac0;
    local_58 = lVar3;
    local_50 = 0;
    local_40 = '\0';
    local_48 = lVar6;
    FUN_140996f94(local_e8,1);
    bVar5 = false;
    (*(code *)local_e8[0][0x1e])(local_e8,0);
    local_e8[0] = &PTR_FUN_149e447c0;
    FUN_140713482(local_180,local_e8);
    local_180[0] = &PTR_FUN_149f3b840;
    local_184 = 1;
    local_188 = 1;
    FUN_143da7690(param_1);
    if (*param_1 != 0) {
      bVar5 = true;
      if ((longlong)(int)param_1[3] != 0) {
        lVar3 = 0;
        do {
          bVar8 = *(longlong *)(param_1[2] + lVar3) == 0;
          bVar5 = !bVar8;
          if (bVar8) break;
          bVar8 = (longlong)(int)param_1[3] * 8 + -8 != lVar3;
          lVar3 = lVar3 + 8;
        } while (bVar8);
      }
    }
    FUN_14041e0ea(local_180);
    if (local_40 == '\x01') {
      FUN_1400020a8(local_58);
      local_58 = 0;
    }
    FUN_144a7fc42(local_e8);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 1457515da FUN_1457515da body=114 status=ok
// SIG undefined FUN_1457515da(void)

void FUN_1457515da(longlong *param_1,int param_2)

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



// FUNCTION 14575164c FUN_14575164c body=143 status=ok
// SIG undefined FUN_14575164c(void)

void FUN_14575164c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457516dc FUN_1457516dc body=135 status=ok
// SIG undefined FUN_1457516dc(void)

longlong FUN_1457516dc(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145751764();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_145751729;
  }
  local_30 = param_3;
  FUN_145751968(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145751729:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 8;
}



// FUNCTION 145751764 FUN_145751764 body=180 status=ok
// SIG undefined FUN_145751764(void)

int FUN_145751764(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1457517f2;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1457517f2:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575181a FUN_14575181a body=141 status=ok
// SIG undefined FUN_14575181a(void)

longlong FUN_14575181a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1457518a8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x60;
    if (lVar3 + lVar2 != 0) goto LAB_145751857;
  }
  local_30 = param_3;
  FUN_148f11fb4(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x60;
LAB_145751857:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457518a8 FUN_1457518a8 body=190 status=ok
// SIG undefined FUN_1457518a8(void)

int FUN_1457518a8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_14088c64c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14575192c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14575192c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751968 FUN_145751968 body=275 status=ok
// SIG undefined FUN_145751968(void)

undefined4 * FUN_145751968(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145751b02(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_145751a7c(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_145752244(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751a7c FUN_145751a7c body=132 status=ok
// SIG undefined FUN_145751a7c(void)

undefined8 FUN_145751a7c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_1411b8176();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_145ac2278(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145751abe;
    }
  }
  uVar6 = 0;
LAB_145751abe:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751b02 FUN_145751b02 body=231 status=ok
// SIG undefined FUN_145751b02(void)

int * FUN_145751b02(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145751bea FUN_145751bea body=283 status=ok
// SIG undefined FUN_145751bea(void)

undefined4 * FUN_145751bea(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145751dc2(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_14088c1ba(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_145751d06(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_145752e88(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751d06 FUN_145751d06 body=186 status=ok
// SIG undefined FUN_145751d06(void)

undefined8 FUN_145751d06(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    iVar7 = FUN_14088b25a();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      lVar9 = (longlong)iVar7 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar9);
      FUN_14088c1ba(*(undefined8 *)(lVar2 + 8 + lVar9),*(undefined4 *)(lVar2 + 0x10 + lVar9));
      if (*(longlong *)(lVar2 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1457515da(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_145751d4e;
    }
  }
  uVar8 = 0;
LAB_145751d4e:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751dc2 FUN_145751dc2 body=229 status=ok
// SIG undefined FUN_145751dc2(void)

int * FUN_145751dc2(longlong *param_1,int *param_2)

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



// FUNCTION 145751ea8 FUN_145751ea8 body=269 status=ok
// SIG undefined FUN_145751ea8(void)

undefined4 * FUN_145751ea8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_145752402(param_1,local_48);
  FUN_145751fb6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_145752188(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_145752ca0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145751fb6 FUN_145751fb6 body=151 status=ok
// SIG undefined FUN_145751fb6(void)

undefined8 * FUN_145751fb6(undefined8 *param_1,undefined8 *param_2)

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
  FUN_145752086(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14575204e(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14575204e FUN_14575204e body=55 status=ok
// SIG undefined FUN_14575204e(void)

void FUN_14575204e(longlong *param_1)

{
  FUN_14088ef38(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145752086 FUN_145752086 body=125 status=ok
// SIG undefined FUN_145752086(void)

undefined8 * FUN_145752086(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457528d2();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145752104 FUN_145752104 body=132 status=ok
// SIG undefined FUN_145752104(void)

void FUN_145752104(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145752188 FUN_145752188 body=188 status=ok
// SIG undefined FUN_145752188(void)

undefined8 FUN_145752188(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14575204e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1488d321c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145752244 FUN_145752244 body=445 status=ok
// SIG undefined FUN_145752244(void)

void FUN_145752244(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145752402 FUN_145752402 body=239 status=ok
// SIG undefined FUN_145752402(void)

int * FUN_145752402(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1457524f2 FUN_1457524f2 body=443 status=ok
// SIG undefined FUN_1457524f2(void)

undefined8 FUN_1457524f2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x178) != 0)) {
    lVar4 = FUN_14030d660();
    lVar3 = *(longlong *)(lVar3 + 0x178);
    if (lVar3 != 0) {
      uVar6 = 0;
      if ((lVar4 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_1457525cf;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30 && (lVar3 = *(longlong *)(lVar3 + 0x488), lVar3 != 0)))) {
        lVar4 = FUN_144a7b4ca();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if (*(char *)(lVar3 + 0xf40) != '\0') {
            uVar6 = 1;
            if ((*(int *)(lVar3 + 0xf38) == 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
              FUN_1441feb12(lVar3);
            }
            goto LAB_1457525cf;
          }
          if (param_1[0x4c] == 0) {
            local_48 = FUN_148f06bea;
            uStack_40 = uStack_40 & 0xffffffff00000000;
            FUN_148f06af8(&local_38,param_1);
            param_1[0x4c] = local_38;
          }
          local_48 = (code *)0x0;
          FUN_14485c47a(&local_48,param_3);
          uStack_40 = 0;
          FUN_14485c47a(&uStack_40,param_2);
          puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar5 + 0xc) = local_48._4_4_;
          *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_40._4_4_;
          if (puVar5 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)param_1[0x4e];
            param_1[0x4e] = (longlong)puVar5;
            *puVar2 = puVar5;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_1457525cf:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457526ae FUN_1457526ae body=132 status=ok
// SIG undefined FUN_1457526ae(void)

void FUN_1457526ae(longlong param_1,int param_2)

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



// FUNCTION 145752732 FUN_145752732 body=133 status=ok
// SIG undefined FUN_145752732(void)

longlong FUN_145752732(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1411210f6();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_145752791;
  }
  local_30 = param_3;
  FUN_1457527b8(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145752791:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x14 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457527b8 FUN_1457527b8 body=280 status=ok
// SIG undefined FUN_1457527b8(void)

undefined4 * FUN_1457527b8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14112137e(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1411212da(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_141121a6c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457528d2 FUN_1457528d2 body=446 status=ok
// SIG undefined FUN_1457528d2(void)

longlong * FUN_1457528d2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
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
    iVar9 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar9 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar7 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar8 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar7, local_48 != plVar1)) {
      do {
        local_60 = uVar7;
        plVar3 = *(longlong **)(*local_78 + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar7 = local_60;
      } while (((local_60._4_4_ != iVar9) || (local_68 != plVar1)) || (local_78 != param_1));
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
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar6 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(int *)(param_1 + 3) = (int)lVar6;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
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



// FUNCTION 145752a92 FUN_145752a92 body=75 status=ok
// SIG undefined FUN_145752a92(void)

void FUN_145752a92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14089002a(param_2);
    if (lVar1 == param_1 + 0x1a98) {
      lVar1 = FUN_145d182e6(param_2);
      if (lVar1 != 0) {
        FUN_146040040(lVar1 + 0x30);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145752ade FUN_145752ade body=448 status=ok
// SIG undefined FUN_145752ade(void)

void FUN_145752ade(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145752ca0 FUN_145752ca0 body=486 status=ok
// SIG undefined FUN_145752ca0(void)

void FUN_145752ca0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145752e88 FUN_145752e88 body=448 status=ok
// SIG undefined FUN_145752e88(void)

void FUN_145752e88(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14575304a FUN_14575304a body=1036 status=ok
// SIG undefined FUN_14575304a(void)

bool FUN_14575304a(longlong param_1,longlong *param_2,char param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != (longlong *)0x0) {
    plVar12 = (longlong *)(param_1 + 0x2808);
    local_88 = 0.0;
    FUN_14485c47a(&local_88);
    local_b0 = local_88;
    iVar7 = FUN_1412ea6f2(plVar12,(uint)((ulonglong)local_88 >> 0x20) ^ SUB84(local_88,0));
    if (iVar7 != -1) {
      local_90 = 0.0;
      FUN_14485c47a(&local_90,param_2);
      local_b0 = local_90;
      iVar7 = FUN_1412ea6f2(plVar12,(uint)((ulonglong)local_90 >> 0x20) ^ SUB84(local_90,0));
      if (iVar7 == -1) {
        lVar11 = 0;
      }
      else {
        lVar11 = (longlong)iVar7 * 0x18 + *plVar12;
      }
      cVar5 = FUN_144729dda(lVar11 + 8);
      if ((cVar5 != '\0') && (lVar11 = (**(code **)(*param_2 + 0x5e0))(param_2), lVar11 != 0)) {
        lVar8 = FUN_14011c349();
        fVar1 = *(float *)(lVar8 + 0x6a0);
        fVar19 = 0.0;
        if (param_3 != '\0') {
          lVar8 = FUN_14011c349();
          fVar19 = *(float *)(lVar8 + 0x6a4);
        }
        local_98 = 0.0;
        FUN_14485c47a(&local_98,param_2);
        local_b0 = local_98;
        iVar7 = FUN_1412ea6f2(plVar12,(uint)((ulonglong)local_98 >> 0x20) ^ SUB84(local_98,0));
        if (iVar7 == -1) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)iVar7 * 0x18 + *plVar12;
        }
        lVar8 = FUN_14479d2ce(lVar8 + 8);
        lVar8 = *(longlong *)(lVar8 + 0x1c8);
        if (lVar8 == 0) {
          pdVar9 = &DAT_14c8464e0;
          dVar18 = DAT_14c8464f0;
        }
        else {
          pdVar9 = (double *)(lVar8 + 0x260);
          dVar18 = *(double *)(lVar8 + 0x270);
        }
        lVar11 = *(longlong *)(lVar11 + 0x1c8);
        if (lVar11 == 0) {
          pdVar10 = &DAT_14c8464e0;
          dVar16 = DAT_14c8464f0;
        }
        else {
          pdVar10 = (double *)(lVar11 + 0x260);
          dVar16 = *(double *)(lVar11 + 0x270);
        }
        dVar2 = *pdVar9 - *pdVar10;
        dVar3 = pdVar9[1] - pdVar10[1];
        dVar17 = dVar2 * dVar2 + dVar3 * dVar3;
        if ((dVar17 != 1.0) || (NAN(dVar17))) {
          if (dVar17 < 9.99999993922529e-09) {
            uVar20 = SUB84(DAT_14c8464f0,0);
            uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            dVar2 = DAT_14c8464e0;
            dVar3 = DAT_14c8464e8;
          }
          else {
            uVar20 = 0;
            uVar21 = 0;
            dVar2 = dVar2 * (1.0 / SQRT(dVar17));
            dVar3 = dVar3 * (1.0 / SQRT(dVar17));
          }
        }
        else {
          uVar4 = -(ulonglong)(dVar18 - dVar16 == 0.0) & (ulonglong)(dVar18 - dVar16);
          uVar20 = (undefined4)uVar4;
          uVar21 = (undefined4)(uVar4 >> 0x20);
        }
        (**(code **)(*param_2 + 0x680))(param_2,local_c8);
        FUN_144a76660(local_c8,&local_b0);
        dVar18 = local_b0 * local_b0 + local_a8 * local_a8;
        if ((dVar18 != 1.0) || (NAN(dVar18))) {
          dVar16 = DAT_14c8464e0;
          dVar17 = DAT_14c8464f0;
          dVar14 = DAT_14c8464e8;
          if (9.99999993922529e-09 <= dVar18) {
            dVar16 = local_b0 * (1.0 / SQRT(dVar18));
            dVar17 = 0.0;
            dVar14 = local_a8 * (1.0 / SQRT(dVar18));
          }
        }
        else {
          dVar16 = local_b0;
          dVar17 = (double)(-(ulonglong)(local_a0 == 0.0) & (ulonglong)local_a0);
          dVar14 = local_a8;
        }
        fVar13 = (float)(dVar3 * dVar14 + dVar2 * dVar16 + (double)CONCAT44(uVar21,uVar20) * dVar17)
        ;
        fVar15 = fVar13;
        if (1.0 <= fVar13) {
          fVar15 = 1.0;
        }
        fVar15 = acosf((float)(-(uint)(fVar13 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar13 < -1.0) & (uint)fVar15));
        bVar6 = fVar15 * 57.295776 <= fVar1 * 0.5 + fVar19;
        goto LAB_145753351;
      }
    }
  }
  bVar6 = false;
LAB_145753351:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 145753458 FUN_145753458 body=246 status=ok
// SIG undefined FUN_145753458(void)

int FUN_145753458(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1 = puVar3 + 6;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  FUN_141067f4a(puVar1);
  puVar3[6] = &PTR_FUN_14b334a00;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
  *(byte *)((longlong)puVar3 + 0x3a) = *(byte *)((longlong)puVar3 + 0x3a) & 0xf9 | 2;
  *(undefined1 *)(puVar3 + 7) = 2;
  puVar3[0xd] = 0;
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  iVar2 = *(int *)(param_1 + 0x3c8);
  *(uint *)(param_1 + 0x3c8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3cc) < iVar2 + 1U) {
    FUN_1456bd870(param_1 + 0x3c0,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x3c0) + (longlong)iVar2 * 8) = puVar3;
  *(int *)(puVar3 + 0xc) = *(int *)(param_1 + 0x3c8) + -1;
  *(undefined4 *)puVar3 = 0;
  puVar3[0xb] = param_1;
  *(undefined1 *)(puVar3 + 7) = 2;
  FUN_14082bc44(puVar1,param_1,param_1 + 0x30);
  if ((*(byte **)(param_1 + 0x50) != (byte *)0x0) && ((**(byte **)(param_1 + 0x50) & 1) != 0)) {
    uVar4 = FUN_144a79cc8(param_1);
    FUN_1402eb876(puVar1,uVar4);
  }
  return *(int *)(param_1 + 0x3c8) + -1;
}



// FUNCTION 14575354e FUN_14575354e body=132 status=ok
// SIG undefined FUN_14575354e(void)

void FUN_14575354e(longlong param_1,int param_2)

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



// FUNCTION 1457535d4 FUN_1457535d4 body=386 status=ok
// SIG undefined FUN_1457535d4(void)

void FUN_1457535d4(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa4fc) {
    FUN_144b3d300(&DAT_14caaa4fc);
    if (DAT_14caaa4fc == -1) {
      DAT_14caaa4f0 = 0;
      DAT_14caaa4f8 = -1;
      _Init_thread_footer(&DAT_14caaa4fc);
    }
  }
  if (DAT_14caaa4f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa508) {
      FUN_144b3d300(&DAT_14caaa508);
      if (DAT_14caaa508 == -1) {
        FUN_1446ddc76(&DAT_14caaa500,"BlendTime",1);
        _Init_thread_footer(&DAT_14caaa508);
      }
    }
    if (DAT_14caaa0d8 == 0) {
      uVar1 = FUN_140c6b56d();
      DAT_14caaa0d8 = FUN_140002ddd(FUN_14633061b,uVar1,L"AnimNode_BlendListBase");
    }
    FUN_14094e66e(&local_28,DAT_14caaa500,param_1,DAT_14caaa0d8);
    DAT_14caaa4f0 = local_28;
    DAT_14caaa4f8 = local_20;
  }
  local_20 = DAT_14caaa4f8;
  local_28 = DAT_14caaa4f0;
  FUN_144b20046(*(undefined8 *)(param_1 + 8),&local_28,param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145753758 FUN_145753758 body=241 status=ok
// SIG undefined FUN_145753758(void)

void FUN_145753758(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  float fVar10;
  
  FUN_1408948d8();
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (lVar4 == 0) {
    puVar5 = &DAT_100000018;
  }
  else {
    puVar5 = *(undefined1 **)(lVar4 + 0x118);
  }
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    dVar9 = ((double)(int)puVar5 * 0.5) / (double)(int)((ulonglong)puVar5 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar9;
    auVar7 = roundpd(auVar7,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar9 = dVar9 - dVar6;
    iVar2 = (int)dVar9;
    fVar8 = (float)dVar9 - (float)iVar2;
    fVar10 = fVar8;
    if (0.99999994 <= fVar8) {
      fVar10 = 0.99999994;
    }
    fVar10 = (float)(~-(uint)(0.0 < fVar8) & (uint)fVar8 | (uint)fVar10 & -(uint)(0.0 < fVar8)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (2147483647.0 <= dVar6) {
      dVar6 = 2147483647.0;
    }
    if (dVar6 <= -2147483648.0) {
      dVar6 = -2147483648.0;
    }
    *(uint *)(param_1 + 0xb0) = (uint)(0.5 <= fVar10) + (int)dVar6 + iVar2;
  }
  return;
}



// FUNCTION 14575384a FUN_14575384a body=63 status=ok
// SIG undefined FUN_14575384a(void)

longlong FUN_14575384a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x18))(param_1 + 0x3c20);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x3c0);
    }
  }
  return lVar1;
}



// FUNCTION 14575388e FUN_14575388e body=78 status=ok
// SIG undefined FUN_14575388e(void)

void FUN_14575388e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1408981d2();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30) {
        lVar2 = param_2;
      }
      goto LAB_1457538c4;
    }
  }
  lVar2 = 0;
LAB_1457538c4:
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 1457538dc FUN_1457538dc body=126 status=ok
// SIG undefined FUN_1457538dc(void)

longlong * FUN_1457538dc(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1446f4bba();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14575395a FUN_14575395a body=131 status=ok
// SIG undefined FUN_14575395a(void)

undefined8 FUN_14575395a(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = DAT_14cb7ecb8;
  local_48 = DAT_14cb7ecb0;
  FUN_1448075d0(local_38);
  if (DAT_14cb7f988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb7f988,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457539de FUN_1457539de body=153 status=ok
// SIG undefined FUN_1457539de(void)

void FUN_1457539de(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14494f566(param_1 + 0x98);
  uVar1 = DAT_14c763924;
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x68) != 0)) {
    FUN_140056680(local_40,L"Pending Performance Set To Start Immediately");
    FUN_1403171d0(param_1,0,local_40,uVar1);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14031a786(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145753a78 FUN_145753a78 body=178 status=ok
// SIG undefined FUN_145753a78(void)

void FUN_145753a78(ulonglong *param_1,longlong param_2)

{
  void *_Src;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  uVar1 = ~*param_1 + param_2 + param_1[2];
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = 0x20;
  if (0x20 < uVar2) {
    uVar1 = uVar2;
  }
  _Dst = (void *)FUN_14001cc68(uVar1,0);
  _Src = (void *)*param_1;
  uVar2 = param_1[1];
  memcpy(_Dst,_Src,uVar2 - (longlong)_Src);
  if ((char)param_1[3] == '\x01') {
    FUN_1400020a8(_Src);
  }
  *param_1 = (ulonglong)_Dst;
  param_1[1] = (uVar2 - (longlong)_Src) + (longlong)_Dst;
  param_1[2] = uVar1 + (longlong)_Dst;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 145753b2a FUN_145753b2a body=405 status=ok
// SIG undefined FUN_145753b2a(void)

undefined8 FUN_145753b2a(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar2 = *(int *)(param_1 + 0x178);
  if (iVar2 == 0) {
    uVar7 = 1;
    uVar9 = 0;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x170);
    if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x160);
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar7 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar7 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar7 == uVar9) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar7 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    uVar8 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8 + (longlong)iVar11 * 0x20);
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x538) != '\0')) {
        return CONCAT71((int7)((ulonglong)((longlong)iVar11 * 0x20) >> 8),1);
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      puVar6 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x160);
      }
      iVar11 = (int)uVar9;
      lVar13 = (longlong)iVar11;
      uVar3 = puVar6[lVar13] & uVar8;
      if (uVar3 == 0) {
        iVar4 = iVar2 + -1;
        if (iVar2 + -1 < 0) {
          iVar4 = iVar2 + 0x1e;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar11) {
          iVar5 = iVar11;
        }
        if (iVar4 <= iVar11) {
          return 0;
        }
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar6[lVar13 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar5 - lVar13 == lVar12) {
            return 0;
          }
        }
        uVar9 = (ulonglong)(iVar11 + (int)lVar12 + 1);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar7 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar2);
  }
  return 0;
}



// FUNCTION 145753cc0 FUN_145753cc0 body=61 status=ok
// SIG undefined FUN_145753cc0(void)

void FUN_145753cc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x18);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x18);
    FUN_140e3bfea(lVar2,*(undefined1 *)(lVar2 + 0xbd8),0);
    return;
  }
  return;
}



// FUNCTION 145753cfe FUN_145753cfe body=96 status=ok
// SIG undefined FUN_145753cfe(void)

void FUN_145753cfe(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x50);
    memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)(int)(~param_2 + iVar2) * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145753d5e FUN_145753d5e body=113 status=ok
// SIG undefined FUN_145753d5e(void)

void FUN_145753d5e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 145753dd0 FUN_145753dd0 body=91 status=ok
// SIG undefined FUN_145753dd0(void)

void FUN_145753dd0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145753e2c(param_1,param_2,1);
  return;
}



// FUNCTION 145753e2c FUN_145753e2c body=138 status=ok
// SIG undefined FUN_145753e2c(void)

void FUN_145753e2c(longlong *param_1,int param_2,int param_3)

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


