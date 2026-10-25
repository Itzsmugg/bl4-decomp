// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476a5808 FUN_1476a5808 body=29 status=ok
// SIG undefined FUN_1476a5808(void)

undefined8 FUN_1476a5808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a583e FUN_1476a583e body=96 status=ok
// SIG undefined FUN_1476a583e(void)

void FUN_1476a583e(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar6 = *(longlong *)(lVar1 + 0x20);
  lVar3 = 0;
  lVar4 = lVar6 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar3;
  }
  lVar5 = lVar6 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar5 = lVar3;
  }
  lVar6 = lVar6 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar6 = lVar3;
  }
  FUN_1476a589e(param_1,lVar1,lVar4,lVar5,lVar6);
  return;
}



// FUNCTION 1476a589e FUN_1476a589e body=327 status=ok
// SIG undefined FUN_1476a589e(void)

void FUN_1476a589e(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  double dVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6358) && (FUN_144b3d300(), DAT_14cab6358 == -1)) {
    plVar3 = (longlong *)FUN_1413319c2();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    DAT_14cab6354 = *(undefined1 *)(lVar4 + 100);
    _Init_thread_footer();
  }
  uVar2 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (param_5 == 0) {
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        lVar4 = *(longlong *)*param_1;
        lVar6 = (ulonglong)*(ushort *)(param_3 + 2 + uVar5 * 4) * 0x10;
        *(int *)(lVar4 + lVar6) = *(int *)(lVar4 + lVar6) + *(int *)(param_4 + uVar5 * 4);
        *(double *)(lVar4 + 8 + lVar6) = *(double *)(lVar4 + 8 + lVar6) + 1.0;
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  else if (uVar2 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(longlong *)*param_1;
      dVar1 = *(double *)(param_5 + uVar5 * 8);
      lVar6 = (ulonglong)*(ushort *)(param_3 + 2 + uVar5 * 4) * 0x10;
      *(int *)(lVar4 + lVar6) =
           *(int *)(lVar4 + lVar6) + (int)((double)*(int *)(param_4 + uVar5 * 4) * dVar1);
      *(double *)(lVar4 + 8 + lVar6) = dVar1 + *(double *)(lVar4 + 8 + lVar6);
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}



// FUNCTION 1476a59e6 FUN_1476a59e6 body=166 status=ok
// SIG undefined FUN_1476a59e6(void)

void FUN_1476a59e6(undefined2 *param_1,undefined8 param_2)

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



// FUNCTION 1476a5a8e FUN_1476a5a8e body=688 status=ok
// SIG undefined FUN_1476a5a8e(void)

int * FUN_1476a5a8e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  undefined1 **local_120;
  short *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined4 local_f4;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 *local_e0;
  short **local_d8;
  short *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  byte local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar6 = FUN_1476a5d92(param_1,param_3), cVar6 == '\0')) {
    *param_2 = -1;
    goto LAB_1476a5ad4;
  }
  plVar7 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a4e0410;
  plVar7[2] = (longlong)&PTR_FUN_14a4e0428;
  plVar7[3] = *param_7;
  *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar7 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar7 + 0x24) = uVar3;
  *(undefined4 *)(plVar7 + 5) = uVar4;
  *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  local_60 = 0;
  FUN_1400abb7c(local_80,param_1 + 0x3c);
  local_88 = 0;
  FUN_1400abb7c(local_a8,param_1 + 0x50);
  FUN_1476a5e3c(param_1,local_80);
  local_d8 = &local_d0;
  local_e0 = &LAB_1476a5eca;
  local_b0 = *(byte *)(param_6 + 8);
  local_d0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(&local_b8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_120 = &local_e0;
  local_128 = &local_b8;
  local_118 = param_1 + 0xc;
  local_110 = local_80;
  local_108 = local_a8;
  local_f0 = plVar7 + 2;
  local_e8 = plVar7;
  FUN_1406ac01c(param_4,param_2,param_5,&local_f0);
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_58);
      *param_2 = (int)local_58;
      if ((int)local_58 != -1) goto LAB_1476a5c6d;
    }
  }
  else {
LAB_1476a5c6d:
    local_50 = 0;
    local_58 = &LAB_143327e80;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_128 = &local_58;
    local_c8 = plVar7 + 2;
    local_c0 = plVar7;
    FUN_1406abf4a(param_4,&local_f4,param_5,&local_c8);
    FUN_1407ce0e2(param_4,*param_2,local_f4);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476a5ad4:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a5d40 FUN_1476a5d40 body=80 status=ok
// SIG undefined FUN_1476a5d40(void)

void FUN_1476a5d40(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476a603c(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a5d92 FUN_1476a5d92 body=170 status=ok
// SIG undefined FUN_1476a5d92(void)

undefined8 FUN_1476a5d92(ushort *param_1,undefined8 param_2)

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



// FUNCTION 1476a5e3c FUN_1476a5e3c body=79 status=ok
// SIG undefined FUN_1476a5e3c(void)

void FUN_1476a5e3c(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  if (param_1[3] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1476a5e8c FUN_1476a5e8c body=1 status=ok
// SIG undefined FUN_1476a5e8c(void)

void FUN_1476a5e8c(void)

{
  return;
}



// FUNCTION 1476a5e8e FUN_1476a5e8e body=29 status=ok
// SIG undefined FUN_1476a5e8e(void)

undefined8 FUN_1476a5e8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a5eac FUN_1476a5eac body=29 status=ok
// SIG undefined FUN_1476a5eac(void)

undefined8 FUN_1476a5eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a5ee2 FUN_1476a5ee2 body=345 status=ok
// SIG undefined FUN_1476a5ee2(void)

void FUN_1476a5ee2(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_1476a5f33;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a5f33:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476a5f87;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a5f87:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar3 = (ushort)uVar2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_1476a5fd4;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a5fd4:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[3]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1476a603c FUN_1476a603c body=125 status=ok
// SIG undefined FUN_1476a603c(void)

void FUN_1476a603c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar6 = *(longlong *)(lVar1 + 0x20);
  lVar7 = 0;
  lVar4 = lVar6 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar7;
  }
  lVar5 = lVar6 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar5 = lVar7;
  }
  lVar3 = lVar6 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar3 = lVar7;
  }
  lVar6 = lVar6 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar6 = lVar7;
  }
  FUN_1476a60ba(param_1,lVar1,lVar4,lVar5,lVar3,lVar6);
  return;
}



// FUNCTION 1476a60ba FUN_1476a60ba body=347 status=ok
// SIG undefined FUN_1476a60ba(void)

void FUN_1476a60ba(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6360) && (FUN_144b3d300(&DAT_14cab6360), DAT_14cab6360 == -1)) {
    plVar2 = (longlong *)FUN_1413319c2();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    DAT_14cab635c = *(undefined1 *)(lVar3 + 100);
    _Init_thread_footer(&DAT_14cab6360);
  }
  uVar4 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (param_6 == 0) {
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)*param_1;
        lVar6 = (ulonglong)*(ushort *)(param_3 + 2 + uVar5 * 4) * 0x10;
        *(int *)(lVar3 + lVar6) =
             *(int *)(lVar3 + lVar6) +
             (*(int *)(param_4 + uVar5 * 4) - *(int *)(param_5 + uVar5 * 4));
        *(double *)(lVar3 + 8 + lVar6) = *(double *)(lVar3 + 8 + lVar6) + 1.0;
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  else if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)*param_1;
      dVar1 = *(double *)(param_6 + uVar5 * 8);
      lVar6 = (ulonglong)*(ushort *)(param_3 + 2 + uVar5 * 4) * 0x10;
      *(int *)(lVar3 + lVar6) =
           *(int *)(lVar3 + lVar6) +
           (int)((double)(*(int *)(param_4 + uVar5 * 4) - *(int *)(param_5 + uVar5 * 4)) * dVar1);
      *(double *)(lVar3 + 8 + lVar6) = dVar1 + *(double *)(lVar3 + 8 + lVar6);
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 1476a6216 FUN_1476a6216 body=190 status=ok
// SIG undefined FUN_1476a6216(void)

undefined8 * FUN_1476a6216(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a62d6 FUN_1476a62d6 body=589 status=ok
// SIG undefined FUN_1476a62d6(void)

int * FUN_1476a62d6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
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
  if (((*param_1 == -1) || (param_1[2] == -1)) ||
     (cVar7 = FUN_1476a6576(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476a6314;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0430;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0448;
  plVar8[3] = *param_7;
  *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_1476a65e6(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476a6670;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476a64b0;
    }
  }
  else {
LAB_1476a64b0:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476a6314:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a6524 FUN_1476a6524 body=80 status=ok
// SIG undefined FUN_1476a6524(void)

void FUN_1476a6524(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1476a6792(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a6576 FUN_1476a6576 body=112 status=ok
// SIG undefined FUN_1476a6576(void)

undefined8 FUN_1476a6576(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
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
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476a65e6 FUN_1476a65e6 body=76 status=ok
// SIG undefined FUN_1476a65e6(void)

void FUN_1476a65e6(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  if (param_1[1] != -1) {
    FUN_140dba9e6(param_2);
  }
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 1476a6632 FUN_1476a6632 body=1 status=ok
// SIG undefined FUN_1476a6632(void)

void FUN_1476a6632(void)

{
  return;
}



// FUNCTION 1476a6634 FUN_1476a6634 body=29 status=ok
// SIG undefined FUN_1476a6634(void)

undefined8 FUN_1476a6634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a6652 FUN_1476a6652 body=29 status=ok
// SIG undefined FUN_1476a6652(void)

undefined8 FUN_1476a6652(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a6688 FUN_1476a6688 body=266 status=ok
// SIG undefined FUN_1476a6688(void)

void FUN_1476a6688(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_1476a66d9;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1476a66d9:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar5 + 0x1e) == param_1[1]) {
        if ((longlong)puVar1 + lVar5 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar5)) {
            *(int *)(lVar4 + 4 + lVar6 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar5) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar4 = *param_3;
            uVar2 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
    } while ((ulonglong)uVar2 * 0x20 != lVar5);
    if (uVar2 != 0) {
      lVar5 = (ulonglong)uVar2 << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_1476a674a;
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476a674a:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar4 + 8 + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476a6792 FUN_1476a6792 body=96 status=ok
// SIG undefined FUN_1476a6792(void)

void FUN_1476a6792(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar6 = *(longlong *)(lVar1 + 0x20);
  lVar3 = 0;
  lVar4 = lVar6 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar3;
  }
  lVar5 = lVar6 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar5 = lVar3;
  }
  lVar6 = lVar6 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar6 = lVar3;
  }
  FUN_1476a67f2(param_1,lVar1,lVar4,lVar5,lVar6);
  return;
}



// FUNCTION 1476a67f2 FUN_1476a67f2 body=267 status=ok
// SIG undefined FUN_1476a67f2(void)

void FUN_1476a67f2(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6368) && (FUN_144b3d300(&DAT_14cab6368), DAT_14cab6368 == -1)) {
    plVar1 = (longlong *)FUN_1413319c2();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    DAT_14cab6364 = *(undefined1 *)(lVar2 + 100);
    _Init_thread_footer(&DAT_14cab6368);
  }
  if (param_4 == 0) {
    if (*(short *)(param_2 + 0xe) != 0) {
      uVar3 = 0;
      do {
        FUN_1476a6a64(param_1,*(undefined2 *)(param_3 + 2 + uVar3 * 4),param_5);
        uVar3 = uVar3 + 1;
        param_5 = param_5 + 4;
      } while (uVar3 < *(ushort *)(param_2 + 0xe));
    }
  }
  else if (*(short *)(param_2 + 0xe) != 0) {
    uVar3 = 0;
    do {
      FUN_1476a68fe(param_1,*(undefined2 *)(param_3 + 2 + uVar3 * 4),
                    *(undefined4 *)(param_4 + uVar3 * 4),param_5);
      uVar3 = uVar3 + 1;
      param_5 = param_5 + 4;
    } while (uVar3 < *(ushort *)(param_2 + 0xe));
  }
  return;
}



// FUNCTION 1476a68fe FUN_1476a68fe body=357 status=ok
// SIG undefined FUN_1476a68fe(void)

void FUN_1476a68fe(longlong *param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  param_1 = (longlong *)*param_1;
  iVar2 = 0;
  dVar5 = 0.0;
  param_2 = param_2 & 0xffff;
  iVar1 = 0;
  dVar6 = 0.0;
  if (0 < (int)param_1[1]) {
    iVar1 = *(int *)(*param_1 + (ulonglong)(param_2 << 4));
    dVar6 = *(double *)(*param_1 + 8 + (ulonglong)(param_2 << 4));
  }
  if (0 < (int)param_1[3]) {
    iVar2 = *(int *)(param_1[2] + (ulonglong)(param_2 << 4));
    dVar5 = *(double *)(param_1[2] + 8 + (ulonglong)(param_2 << 4));
  }
  dVar7 = 0.0;
  iVar3 = 0;
  iVar4 = 0;
  dVar8 = 0.0;
  if (0 < (int)param_1[5]) {
    iVar4 = *(int *)(param_1[4] + (ulonglong)(param_2 << 4));
    dVar8 = *(double *)(param_1[4] + 8 + (ulonglong)(param_2 << 4));
  }
  if (0 < (int)param_1[7]) {
    iVar3 = *(int *)(param_1[6] + (ulonglong)(param_2 << 4));
    dVar7 = *(double *)(param_1[6] + 8 + (ulonglong)(param_2 << 4));
  }
  if ((dVar5 != 0.0) || (NAN(dVar5))) {
    iVar2 = (int)((double)param_3 * dVar5 + (double)iVar2);
  }
  dVar5 = dVar5 + dVar6;
  if ((dVar5 != 0.0) || (NAN(dVar5))) {
    if (0.0 < dVar6 && dVar6 < 1.0) {
      iVar1 = iVar1 + (int)((double)param_3 * (1.0 - dVar6));
    }
    if (0.0 < dVar6 && dVar6 < 1.0) {
      dVar5 = dVar5 + (1.0 - dVar6);
    }
    param_3 = iVar3 + iVar4 + (int)((double)(iVar1 + iVar2) / dVar5);
  }
  else if ((dVar8 + dVar7 != 0.0) || (NAN(dVar8 + dVar7))) {
    param_3 = param_3 + iVar3 + iVar4;
  }
  *param_4 = param_3;
  return;
}



// FUNCTION 1476a6a64 FUN_1476a6a64 body=120 status=ok
// SIG undefined FUN_1476a6a64(void)

void FUN_1476a6a64(longlong *param_1,ushort param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  param_1 = (longlong *)*param_1;
  if ((int)param_1[1] < 1) {
    dVar3 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar4 = *(double *)(*param_1 + 8 + (ulonglong)param_2 * 0x10);
    dVar3 = (double)*(int *)(*param_1 + (ulonglong)param_2 * 0x10);
  }
  iVar2 = 0;
  iVar1 = 0;
  if (0 < (int)param_1[5]) {
    iVar1 = *(int *)(param_1[4] + (ulonglong)param_2 * 0x10);
  }
  if (0 < (int)param_1[7]) {
    iVar2 = *(int *)(param_1[6] + (ulonglong)param_2 * 0x10);
  }
  if ((dVar4 != 0.0) || (NAN(dVar4))) {
    *param_3 = iVar1 + iVar2 + (int)(dVar3 / dVar4);
  }
  return;
}



// FUNCTION 1476a6adc FUN_1476a6adc body=126 status=ok
// SIG undefined FUN_1476a6adc(void)

undefined4 * FUN_1476a6adc(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476a6b5a FUN_1476a6b5a body=407 status=ok
// SIG undefined FUN_1476a6b5a(void)

void FUN_1476a6b5a(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_a8,param_3[2]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_3[1]) goto LAB_1476a6bc5;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476a6bc5:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_3) goto LAB_1476a6bfb;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1476a6bfb:
  uVar4 = *puVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_80 = *puVar6;
  local_60 = local_a8;
  local_58 = local_a0;
  local_50 = local_98;
  local_b8 = local_98;
  local_90 = puVar6;
  local_88 = iVar2;
  local_78 = puVar7;
  local_70 = iVar1;
  local_68 = uVar4;
  FUN_1476a589e(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_80,
                uVar4);
  FUN_14769768e(&local_90);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a6cf2 FUN_1476a6cf2 body=126 status=ok
// SIG undefined FUN_1476a6cf2(void)

undefined4 * FUN_1476a6cf2(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476a6d70 FUN_1476a6d70 body=259 status=ok
// SIG undefined FUN_1476a6d70(void)

void FUN_1476a6d70(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[3] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[3];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a6e74 FUN_1476a6e74 body=564 status=ok
// SIG undefined FUN_1476a6e74(void)

void FUN_1476a6e74(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_c0,param_3[3]);
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_3[2]) goto LAB_1476a6edf;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476a6edf:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_3[1]) goto LAB_1476a6f1c;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476a6f1c:
  uVar5 = *puVar10;
  iVar2 = *(int *)(lVar4 + 0x14);
  local_c8 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_3) goto LAB_1476a6f69;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476a6f69:
  uVar6 = *puVar9;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_cc = iVar1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_98 = *puVar8;
  local_70 = local_cc;
  local_60 = local_c0;
  local_58 = local_b8;
  local_50 = local_b0;
  local_e0 = local_b0;
  local_e8 = uVar5;
  local_a8 = puVar8;
  local_a0 = iVar3;
  local_90 = puVar9;
  local_88 = iVar2;
  local_80 = uVar6;
  local_78 = puVar10;
  local_68 = uVar5;
  FUN_1476a60ba(local_c8,*(undefined8 *)
                          (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_98,
                uVar6);
  FUN_1476a70aa(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a70aa FUN_1476a70aa body=151 status=ok
// SIG undefined FUN_1476a70aa(void)

void FUN_1476a70aa(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476a7133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476a7142 FUN_1476a7142 body=126 status=ok
// SIG undefined FUN_1476a7142(void)

undefined4 * FUN_1476a7142(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476a71c0 FUN_1476a71c0 body=217 status=ok
// SIG undefined FUN_1476a71c0(void)

void FUN_1476a71c0(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  if (local_3a != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    FUN_147552f5e(param_2,param_3);
  }
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a729a FUN_1476a729a body=125 status=ok
// SIG undefined FUN_1476a729a(void)

void FUN_1476a729a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a7318 FUN_1476a7318 body=415 status=ok
// SIG undefined FUN_1476a7318(void)

void FUN_1476a7318(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[2]) goto LAB_1476a736a;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476a736a:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_b8 = param_3;
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar7;
  FUN_14762f08e(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_b0,param_4[1]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_4) goto LAB_1476a73c1;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1476a73c1:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_88 = *puVar6;
  local_80 = local_b0;
  local_78 = local_a8;
  local_70 = local_a0;
  local_60 = local_b8;
  local_c8 = uVar4;
  local_98 = puVar6;
  local_90 = iVar2;
  local_68 = puVar7;
  local_58 = iVar1;
  local_50 = uVar4;
  FUN_1476a67f2(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8));
  FUN_1476a74b8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a74b8 FUN_1476a74b8 body=141 status=ok
// SIG undefined FUN_1476a74b8(void)

void FUN_1476a74b8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476a7537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476a7545 FUN_1476a7545 body=27 status=ok
// SIG undefined FUN_1476a7545(void)

void FUN_1476a7545(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1476a7560 FUN_1476a7560 body=132 status=ok
// SIG undefined FUN_1476a7560(void)

void FUN_1476a7560(longlong param_1,int param_2)

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



// FUNCTION 1476a75e6 FUN_1476a75e6 body=62 status=ok
// SIG undefined FUN_1476a75e6(void)

void FUN_1476a75e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476a7624(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1476a7624 FUN_1476a7624 body=93 status=ok
// SIG undefined FUN_1476a7624(void)

ulonglong FUN_1476a7624(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1476a7682 FUN_1476a7682 body=48 status=ok
// SIG undefined FUN_1476a7682(void)

void FUN_1476a7682(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1476a76b2 FUN_1476a76b2 body=108 status=ok
// SIG undefined FUN_1476a76b2(void)

void FUN_1476a76b2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476a7710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476a771e FUN_1476a771e body=247 status=ok
// SIG undefined FUN_1476a771e(void)

undefined4 * FUN_1476a771e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476a7816(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[5] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[4] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1476a78fc(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a7816 FUN_1476a7816 body=230 status=ok
// SIG undefined FUN_1476a7816(void)

int * FUN_1476a7816(longlong *param_1,int *param_2)

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



// FUNCTION 1476a78fc FUN_1476a78fc body=419 status=ok
// SIG undefined FUN_1476a78fc(void)

void FUN_1476a78fc(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 1476a7aa0 FUN_1476a7aa0 body=184 status=ok
// SIG undefined FUN_1476a7aa0(void)

undefined8 * FUN_1476a7aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a7b5a FUN_1476a7b5a body=85 status=ok
// SIG undefined FUN_1476a7b5a(void)

void FUN_1476a7b5a(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476a7ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476a7bb0 FUN_1476a7bb0 body=201 status=ok
// SIG undefined FUN_1476a7bb0(void)

void FUN_1476a7bb0(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1476a7c7a FUN_1476a7c7a body=312 status=ok
// SIG undefined FUN_1476a7c7a(void)

void FUN_1476a7c7a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1476a7db4 FUN_1476a7db4 body=132 status=ok
// SIG undefined FUN_1476a7db4(void)

void FUN_1476a7db4(longlong param_1,int param_2)

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



// FUNCTION 1476a7e54 FUN_1476a7e54 body=29 status=ok
// SIG undefined FUN_1476a7e54(void)

bool FUN_1476a7e54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1476a7e72 FUN_1476a7e72 body=26 status=ok
// SIG undefined FUN_1476a7e72(void)

bool FUN_1476a7e72(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1476a7e8c FUN_1476a7e8c body=24 status=ok
// SIG undefined FUN_1476a7e8c(void)

bool FUN_1476a7e8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1476a7ea4 FUN_1476a7ea4 body=93 status=ok
// SIG undefined FUN_1476a7ea4(void)

void FUN_1476a7ea4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4ab7b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4e0480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476a7f02 FUN_1476a7f02 body=93 status=ok
// SIG undefined FUN_1476a7f02(void)

void FUN_1476a7f02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4ab7b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4e0480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1476a7f60 FUN_1476a7f60 body=126 status=ok
// SIG undefined FUN_1476a7f60(void)

void FUN_1476a7f60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4ab7b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4e0480;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476a7fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1476a7fde FUN_1476a7fde body=59 status=ok
// SIG undefined FUN_1476a7fde(void)

undefined8 FUN_1476a7fde(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1476a801a FUN_1476a801a body=167 status=ok
// SIG undefined FUN_1476a801a(void)

bool FUN_1476a801a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,local_48,0);
    lVar3 = local_48[0];
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,local_48,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a80c2 FUN_1476a80c2 body=114 status=ok
// SIG undefined FUN_1476a80c2(void)

void FUN_1476a80c2(longlong *param_1,int param_2)

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



// FUNCTION 1476a8134 FUN_1476a8134 body=66 status=ok
// SIG undefined FUN_1476a8134(void)

void FUN_1476a8134(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140dbbc20();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1476a8176 FUN_1476a8176 body=96 status=ok
// SIG undefined FUN_1476a8176(void)

void FUN_1476a8176(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1476a81d6 FUN_1476a81d6 body=62 status=ok
// SIG undefined FUN_1476a81d6(void)

void FUN_1476a81d6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476a8214(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1476a8214 FUN_1476a8214 body=93 status=ok
// SIG undefined FUN_1476a8214(void)

ulonglong FUN_1476a8214(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1476a8272 FUN_1476a8272 body=49 status=ok
// SIG undefined FUN_1476a8272(void)

void FUN_1476a8272(longlong param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    bVar2 = -(char)(iVar1 % 0x20);
    *(uint *)(param_1 + (longlong)(iVar3 >> 5) * 4) =
         (uint)(*(int *)(param_1 + (longlong)(iVar3 >> 5) * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
  return;
}



// FUNCTION 1476a82a4 FUN_1476a82a4 body=49 status=ok
// SIG undefined FUN_1476a82a4(void)

undefined8 * FUN_1476a82a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0250;
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a82d6 FUN_1476a82d6 body=49 status=ok
// SIG undefined FUN_1476a82d6(void)

undefined8 * FUN_1476a82d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0270;
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a8308 FUN_1476a8308 body=52 status=ok
// SIG undefined FUN_1476a8308(void)

undefined8 * FUN_1476a8308(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0290;
  FUN_140dbce18(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a833c FUN_1476a833c body=49 status=ok
// SIG undefined FUN_1476a833c(void)

undefined8 * FUN_1476a833c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e02b0;
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a836e FUN_1476a836e body=69 status=ok
// SIG undefined FUN_1476a836e(void)

undefined8 * FUN_1476a836e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e02d0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a83b4 FUN_1476a83b4 body=79 status=ok
// SIG undefined FUN_1476a83b4(void)

undefined8 * FUN_1476a83b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e02f0;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a8404 FUN_1476a8404 body=163 status=ok
// SIG undefined FUN_1476a8404(void)

void FUN_1476a8404(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 3);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[4] = *param_3;
  cVar1 = *(char *)(param_3 + 0xc);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 10);
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  param_1[0x22] = *param_6;
  param_1[0x23] = *param_7;
  param_1[0x24] = *param_8;
  cVar1 = *(char *)(param_8 + 2);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x25] = param_8[1];
  }
  return;
}



// FUNCTION 1476a84a8 FUN_1476a84a8 body=79 status=ok
// SIG undefined FUN_1476a84a8(void)

undefined8 * FUN_1476a84a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0310;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a84f8 FUN_1476a84f8 body=82 status=ok
// SIG undefined FUN_1476a84f8(void)

undefined8 * FUN_1476a84f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0330;
  FUN_140dbce18(param_1 + 0xb);
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a854a FUN_1476a854a body=193 status=ok
// SIG undefined FUN_1476a854a(void)

void FUN_1476a854a(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 3);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[4] = *param_3;
  cVar1 = *(char *)(param_3 + 0xc);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 10);
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 10) = uVar2;
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  param_1[0x22] = *param_6;
  param_1[0x23] = *param_7;
  param_1[0x24] = *param_8;
  if (*(longlong *)(param_8 + 4) != -1) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_8 + 4);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_8 + 8);
    *(undefined8 *)(param_8 + 4) = 0;
    *(undefined8 *)(param_8 + 8) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 1476a860c FUN_1476a860c body=120 status=ok
// SIG undefined FUN_1476a860c(void)

longlong * FUN_1476a860c(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x14 + *param_2;
  }
  return param_1;
}



// FUNCTION 1476a8684 FUN_1476a8684 body=147 status=ok
// SIG undefined FUN_1476a8684(void)

void FUN_1476a8684(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476a8718 FUN_1476a8718 body=62 status=ok
// SIG undefined FUN_1476a8718(void)

void FUN_1476a8718(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476a8756(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 1476a8756 FUN_1476a8756 body=112 status=ok
// SIG undefined FUN_1476a8756(void)

ulonglong FUN_1476a8756(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476a8790;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,0x10);
      param_2 = param_2 / 0x60;
    }
  }
LAB_1476a8790:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476a87d0 FUN_1476a87d0 body=359 status=ok
// SIG undefined FUN_1476a87d0(void)

void FUN_1476a87d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 8) = 0;
  if (*(int *)(lVar2 + 0xc) < 0) {
    FUN_140b584e0(lVar2,0);
  }
  *(undefined8 *)(lVar2 + 0x30) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0x40)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      local_88[2] = DAT_14c8464f0;
      local_88[0] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_88[1] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_58 = DAT_14c8463e0;
      uStack_50 = DAT_14c8463e8;
      local_68 = DAT_14c8463d0;
      uStack_60 = DAT_14c8463d8;
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      puVar3 = local_88;
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x38) + lVar5);
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar2 = *param_1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < *(int *)(lVar2 + 0x40));
  }
  if (0 < *(int *)(lVar2 + 0x50)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      local_88[2] = DAT_14c8464f0;
      local_88[0] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_88[1] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_58 = DAT_14c8463e0;
      uStack_50 = DAT_14c8463e8;
      local_68 = DAT_14c8463d0;
      uStack_60 = DAT_14c8463d8;
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      puVar3 = local_88;
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x48) + lVar5);
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar2 = *param_1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < *(int *)(lVar2 + 0x50));
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a8938 FUN_1476a8938 body=1 status=ok
// SIG undefined FUN_1476a8938(void)

void FUN_1476a8938(void)

{
  return;
}



// FUNCTION 1476a893a FUN_1476a893a body=29 status=ok
// SIG undefined FUN_1476a893a(void)

undefined8 FUN_1476a893a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a8958 FUN_1476a8958 body=29 status=ok
// SIG undefined FUN_1476a8958(void)

undefined8 FUN_1476a8958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a8976 FUN_1476a8976 body=383 status=ok
// SIG undefined FUN_1476a8976(void)

void FUN_1476a8976(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[9];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a8af6 FUN_1476a8af6 body=662 status=ok
// SIG undefined FUN_1476a8af6(void)

int * FUN_1476a8af6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong *plVar12;
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
  if ((((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
       ((param_1[3] == -1 || (param_1[4] == -1)))) ||
      ((param_1[5] == -1 || ((param_1[6] == -1 || (param_1[7] == -1)))))) ||
     ((param_1[8] == -1 ||
      ((param_1[9] == -1 || (cVar11 = FUN_1476a8de4(param_1,param_3), cVar11 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1476a8b74;
  }
  plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a4e0650;
  plVar12[2] = (longlong)&PTR_FUN_14a4e0668;
  plVar12[3] = *param_7;
  *(undefined4 *)(plVar12 + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  uVar8 = *(undefined4 *)(param_1 + 10);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(plVar12 + 6) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)plVar12 + 0x34) = uVar8;
  *(undefined4 *)(plVar12 + 7) = uVar9;
  *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar10;
  *(undefined4 *)(plVar12 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar12 + 0x24) = uVar5;
  *(undefined4 *)(plVar12 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_1476a9006(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476a90e8;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x14;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar12 + 2;
  local_c8 = plVar12;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476a8d19;
    }
  }
  else {
LAB_1476a8d19:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_1476a8b74:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a8d8e FUN_1476a8d8e body=84 status=ok
// SIG undefined FUN_1476a8d8e(void)

void FUN_1476a8d8e(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1476a9474(param_3 + 8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a8de4 FUN_1476a8de4 body=546 status=ok
// SIG undefined FUN_1476a8de4(void)

undefined8 FUN_1476a8de4(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
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
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar11 = false;
  }
  else {
    bVar11 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[9];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar12 = false;
  }
  else {
    bVar12 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),
                  (byte)uVar3 & bVar11 & bVar12 &
                  bVar8 & bVar9 & bVar10 & bVar6 & bVar7 & bVar4 & bVar5);
}



// FUNCTION 1476a9006 FUN_1476a9006 body=163 status=ok
// SIG undefined FUN_1476a9006(void)

void FUN_1476a9006(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_2,param_1[3]);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  FUN_140dba9e6(param_2,param_1[7]);
  FUN_140dba9e6(param_2,param_1[8]);
  FUN_140dba9e6(param_2,param_1[9]);
  if (param_1[10] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1476a90aa FUN_1476a90aa body=1 status=ok
// SIG undefined FUN_1476a90aa(void)

void FUN_1476a90aa(void)

{
  return;
}



// FUNCTION 1476a90ac FUN_1476a90ac body=29 status=ok
// SIG undefined FUN_1476a90ac(void)

undefined8 FUN_1476a90ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a90ca FUN_1476a90ca body=29 status=ok
// SIG undefined FUN_1476a90ca(void)

undefined8 FUN_1476a90ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a9100 FUN_1476a9100 body=884 status=ok
// SIG undefined FUN_1476a9100(void)

void FUN_1476a9100(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xb);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_1476a9151;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a9151:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476a91a5;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a91a5:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_1476a91f2;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a91f2:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[3]) goto LAB_1476a923f;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a923f:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[4]) goto LAB_1476a928c;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a928c:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x10 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[5]) goto LAB_1476a92d9;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a92d9:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x14 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[6]) goto LAB_1476a9326;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a9326:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x18 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[7]) goto LAB_1476a9373;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a9373:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x1c + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar3 = (ushort)uVar2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[8]) goto LAB_1476a93c0;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a93c0:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x20 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[9]) goto LAB_1476a940d;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476a940d:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x24 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[10]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar5 + 0x28 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1476a9474 FUN_1476a9474 body=556 status=ok
// SIG undefined FUN_1476a9474(void)

void FUN_1476a9474(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  puVar2 = (uint *)*param_3;
  lVar8 = *(longlong *)(param_2 + 0x20);
  lVar5 = 0;
  lVar11 = lVar8 + (ulonglong)puVar2[10];
  if ((ulonglong)puVar2[10] == 0xffffffff) {
    lVar11 = lVar5;
  }
  lVar12 = lVar8 + (ulonglong)puVar2[9];
  if ((ulonglong)puVar2[9] == 0xffffffff) {
    lVar12 = lVar5;
  }
  lVar15 = lVar8 + (ulonglong)puVar2[8];
  if ((ulonglong)puVar2[8] == 0xffffffff) {
    lVar15 = lVar5;
  }
  lVar7 = lVar8 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    lVar7 = lVar5;
  }
  lVar16 = lVar8 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar16 = lVar5;
  }
  lVar13 = lVar8 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar13 = lVar5;
  }
  lVar14 = lVar8 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar14 = lVar5;
  }
  lVar4 = lVar8 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar4 = lVar5;
  }
  lVar10 = lVar8 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar10 = lVar5;
  }
  lVar9 = lVar8 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar9 = lVar5;
  }
  lVar8 = lVar8 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar8 = lVar5;
  }
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar6 = 0;
    lVar5 = lVar11;
    do {
      lVar3 = lVar5;
      if (lVar11 == 0) {
        lVar3 = lVar11;
      }
      FUN_1476a96a0(param_1,*(undefined4 *)(lVar8 + lVar6),*(undefined8 *)(lVar9 + lVar6 * 2),
                    *(undefined8 *)(lVar10 + lVar6 * 2),*(undefined8 *)(lVar4 + lVar6 * 2),
                    *(undefined8 *)(lVar14 + lVar6 * 2),*(undefined8 *)(lVar13 + lVar6 * 2),
                    *(undefined8 *)(lVar16 + lVar6 * 2),*(undefined8 *)(lVar7 + lVar6 * 2),
                    *(undefined8 *)(lVar15 + lVar6 * 2),*(undefined8 *)(lVar12 + lVar6 * 2),lVar3);
      lVar6 = lVar6 + 4;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 2 != lVar6);
  }
  return;
}



// FUNCTION 1476a96a0 FUN_1476a96a0 body=723 status=ok
// SIG undefined FUN_1476a96a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476a96a0(longlong *param_1,uint param_2,double param_3,double param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,double param_9,
                  double param_10,double param_11,undefined8 *param_12)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  longlong lVar8;
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  double dVar3;
  double dVar5;
  double dVar7;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(*param_1 + 0x48);
  if (param_12 == (undefined8 *)0x0) {
    uVar21 = 0;
    uVar22 = 0x3ff00000;
  }
  else {
    uVar21 = (undefined4)*param_12;
    uVar22 = (undefined4)((ulonglong)*param_12 >> 0x20);
  }
  uVar10 = (ulonglong)((param_2 >> 0x10) * 0x60);
  *(double *)(lVar8 + uVar10) =
       param_3 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + uVar10);
  *(double *)(lVar8 + 8 + uVar10) =
       param_4 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + 8 + uVar10);
  *(double *)(lVar8 + 0x10 + uVar10) =
       param_5 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + 0x10 + uVar10);
  local_100 = param_7;
  local_f8 = param_8;
  local_f0 = param_6;
  FUN_144a7484c(&local_100,local_e8);
  FUN_144a44da6(&local_c8,&DAT_14c8463d0,local_e8,uVar21);
  dVar13 = local_b8 * local_b8 + local_c8 * local_c8;
  dVar17 = dStack_b0 * dStack_b0 + dStack_c0 * dStack_c0;
  auVar15._0_8_ = dVar13 + dVar17;
  auVar15._8_8_ = dVar13 + dVar17;
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar19 = divpd(_DAT_149934d80,auVar16);
  auVar20._0_8_ = auVar19._0_8_ * local_b8;
  auVar20._8_8_ = auVar19._8_8_ * dStack_b0;
  auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar16);
  dVar11 = (double)((ulonglong)(local_c8 * auVar19._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
  dVar12 = (double)((ulonglong)(dStack_c0 * auVar19._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_));
  pdVar1 = (double *)(lVar8 + 0x38 + uVar10);
  dVar17 = *pdVar1;
  dVar13 = *pdVar1;
  dVar14 = auVar16._0_8_;
  dVar18 = auVar16._8_8_;
  pdVar1 = (double *)(lVar8 + 0x20 + uVar10);
  dVar2 = *pdVar1;
  dVar3 = *pdVar1;
  pdVar1 = (double *)(lVar8 + 0x28 + uVar10);
  dVar4 = *pdVar1;
  dVar5 = *pdVar1;
  pdVar1 = (double *)(lVar8 + 0x30 + uVar10);
  dVar6 = *pdVar1;
  dVar7 = *pdVar1;
  dVar9 = dVar11 * dVar7 * 1.0 + dVar18 * dVar5 + dVar3 * dVar14 * -1.0 + dVar13 * dVar12;
  auVar19._8_4_ = SUB84(dVar9,0);
  auVar19._0_8_ = dVar12 * dVar6 * -1.0 + dVar14 * dVar4 + dVar2 * dVar18 * 1.0 + dVar17 * dVar11;
  auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(lVar8 + 0x20 + uVar10) = auVar19;
  pdVar1 = (double *)(lVar8 + 0x30 + uVar10);
  *pdVar1 = dVar18 * dVar6 * 1.0 + ((dVar2 * dVar12 * 1.0 + dVar17 * dVar14) - dVar11 * dVar4);
  pdVar1[1] = dVar14 * dVar7 * -1.0 + ((dVar3 * dVar11 * -1.0 + dVar13 * dVar18) - dVar12 * dVar5);
  *(double *)(lVar8 + 0x40 + uVar10) =
       param_9 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + 0x40 + uVar10);
  *(double *)(lVar8 + 0x48 + uVar10) =
       param_10 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + 0x48 + uVar10);
  *(double *)(lVar8 + 0x50 + uVar10) =
       param_11 * (double)CONCAT44(uVar22,uVar21) + *(double *)(lVar8 + 0x50 + uVar10);
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a9974 FUN_1476a9974 body=184 status=ok
// SIG undefined FUN_1476a9974(void)

undefined8 * FUN_1476a9974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a9a2e FUN_1476a9a2e body=593 status=ok
// SIG undefined FUN_1476a9a2e(void)

int * FUN_1476a9a2e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
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
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_1476a9cfe(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476a9a6c;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0670;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0688;
  plVar8[3] = *param_7;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476a9dac;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476a9c0c;
    }
  }
  else {
LAB_1476a9c0c:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476a9a6c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a9c80 FUN_1476a9c80 body=126 status=ok
// SIG undefined FUN_1476a9c80(void)

void FUN_1476a9c80(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = *(longlong *)(lVar1 + 0x20);
  uVar5 = (ulonglong)*(uint *)*param_2;
  uVar2 = (ulonglong)((uint *)*param_2)[1];
  lVar3 = lVar4 + uVar2;
  if (uVar2 == 0xffffffff) {
    lVar3 = 0;
  }
  lVar4 = lVar4 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar4 = 0;
  }
  uVar2 = (ulonglong)*(ushort *)(lVar1 + 0xe);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      FUN_1476a9e7e(param_3 + 8,*(undefined4 *)(lVar4 + uVar5 * 4),
                    *(undefined8 *)(lVar3 + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}



// FUNCTION 1476a9cfe FUN_1476a9cfe body=112 status=ok
// SIG undefined FUN_1476a9cfe(void)

undefined8 FUN_1476a9cfe(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
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
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476a9d6e FUN_1476a9d6e body=1 status=ok
// SIG undefined FUN_1476a9d6e(void)

void FUN_1476a9d6e(void)

{
  return;
}



// FUNCTION 1476a9d70 FUN_1476a9d70 body=29 status=ok
// SIG undefined FUN_1476a9d70(void)

undefined8 FUN_1476a9d70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a9d8e FUN_1476a9d8e body=29 status=ok
// SIG undefined FUN_1476a9d8e(void)

undefined8 FUN_1476a9d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a9dc4 FUN_1476a9dc4 body=186 status=ok
// SIG undefined FUN_1476a9dc4(void)

void FUN_1476a9dc4(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1476a9e15;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1476a9e15:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1476a9e61;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1476a9e61:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476a9e7e FUN_1476a9e7e body=144 status=ok
// SIG undefined FUN_1476a9e7e(void)

void FUN_1476a9e7e(longlong *param_1,uint param_2,double param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  double *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = param_2 >> 0x10;
  param_1 = (longlong *)*param_1;
  if ((int)uVar2 < (int)param_1[5]) {
    plVar1 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar1 + (ulonglong)(param_2 >> 0x15) * 4) >> (uVar2 & 0x1f) & 1) != 0)
    {
      *(double *)(*param_1 + (ulonglong)uVar2 * 8) =
           param_3 + *(double *)(*param_1 + (ulonglong)uVar2 * 8);
      goto LAB_1476a9ed6;
    }
  }
  FUN_1476a9f10(param_1,local_30);
  *local_28 = param_3;
LAB_1476a9ed6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a9f10 FUN_1476a9f10 body=299 status=ok
// SIG undefined FUN_1476a9f10(void)

uint * FUN_1476a9f10(longlong *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  iVar4 = (int)param_1[1];
  if ((int)param_3 < iVar4) {
    lVar8 = *param_1;
  }
  else {
    iVar6 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar6;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar4) < (uint)(iVar6 - iVar4)) {
      FUN_14055ddfe(param_1);
      iVar6 = (int)param_1[1];
    }
    lVar8 = *param_1;
    iVar4 = (int)param_1[5];
    if (iVar4 < iVar6) {
      do {
        *(undefined4 *)(lVar8 + (longlong)iVar4 * 8) = 0xffffffff;
        lVar3 = param_1[6];
        *(int *)(lVar8 + 4 + (longlong)iVar4 * 8) = (int)lVar3;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar8 + (longlong)(int)lVar3 * 8) = iVar4;
        }
        *(int *)(param_1 + 6) = iVar4;
        iVar4 = FUN_144a54ea4(param_1 + 2,1);
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        bVar2 = (byte)iVar4 & 0x1f;
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar4 = (int)param_1[5];
      } while (iVar4 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  uVar5 = (ulonglong)param_3;
  iVar4 = *(int *)(lVar8 + uVar5 * 8);
  iVar6 = *(int *)(lVar8 + 4 + uVar5 * 8);
  if ((longlong)iVar4 == -1) {
    *(int *)(param_1 + 6) = iVar6;
  }
  else {
    *(int *)(lVar8 + 4 + (longlong)iVar4 * 8) = iVar6;
  }
  if (iVar6 != -1) {
    *(int *)(lVar8 + (longlong)iVar6 * 8) = iVar4;
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  puVar1 = (uint *)((longlong)plVar7 + (ulonglong)(param_3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(ulonglong *)(param_2 + 2) = uVar5 * 8 + *param_1;
  return param_2;
}



// FUNCTION 1476aa03c FUN_1476aa03c body=662 status=ok
// SIG undefined FUN_1476aa03c(void)

int * FUN_1476aa03c(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong *plVar12;
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
  if ((((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
       ((param_1[3] == -1 || (param_1[4] == -1)))) ||
      ((param_1[5] == -1 || ((param_1[6] == -1 || (param_1[7] == -1)))))) ||
     ((param_1[8] == -1 ||
      ((param_1[9] == -1 || (cVar11 = FUN_1476a8de4(param_1,param_3), cVar11 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1476aa0ba;
  }
  plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a4e0690;
  plVar12[2] = (longlong)&PTR_FUN_14a4e06a8;
  plVar12[3] = *param_7;
  *(undefined4 *)(plVar12 + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  uVar8 = *(undefined4 *)(param_1 + 10);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(plVar12 + 6) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)plVar12 + 0x34) = uVar8;
  *(undefined4 *)(plVar12 + 7) = uVar9;
  *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar10;
  *(undefined4 *)(plVar12 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar12 + 0x24) = uVar5;
  *(undefined4 *)(plVar12 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_1476a9006(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476aa368;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x14;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar12 + 2;
  local_c8 = plVar12;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476aa25f;
    }
  }
  else {
LAB_1476aa25f:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_1476aa0ba:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476aa2d4 FUN_1476aa2d4 body=84 status=ok
// SIG undefined FUN_1476aa2d4(void)

void FUN_1476aa2d4(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1476aa380(param_3 + 8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aa32a FUN_1476aa32a body=1 status=ok
// SIG undefined FUN_1476aa32a(void)

void FUN_1476aa32a(void)

{
  return;
}



// FUNCTION 1476aa32c FUN_1476aa32c body=29 status=ok
// SIG undefined FUN_1476aa32c(void)

undefined8 FUN_1476aa32c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aa34a FUN_1476aa34a body=29 status=ok
// SIG undefined FUN_1476aa34a(void)

undefined8 FUN_1476aa34a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aa380 FUN_1476aa380 body=556 status=ok
// SIG undefined FUN_1476aa380(void)

void FUN_1476aa380(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  puVar2 = (uint *)*param_3;
  lVar8 = *(longlong *)(param_2 + 0x20);
  lVar5 = 0;
  lVar11 = lVar8 + (ulonglong)puVar2[10];
  if ((ulonglong)puVar2[10] == 0xffffffff) {
    lVar11 = lVar5;
  }
  lVar12 = lVar8 + (ulonglong)puVar2[9];
  if ((ulonglong)puVar2[9] == 0xffffffff) {
    lVar12 = lVar5;
  }
  lVar15 = lVar8 + (ulonglong)puVar2[8];
  if ((ulonglong)puVar2[8] == 0xffffffff) {
    lVar15 = lVar5;
  }
  lVar7 = lVar8 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    lVar7 = lVar5;
  }
  lVar16 = lVar8 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar16 = lVar5;
  }
  lVar13 = lVar8 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar13 = lVar5;
  }
  lVar14 = lVar8 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar14 = lVar5;
  }
  lVar4 = lVar8 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar4 = lVar5;
  }
  lVar10 = lVar8 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar10 = lVar5;
  }
  lVar9 = lVar8 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar9 = lVar5;
  }
  lVar8 = lVar8 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar8 = lVar5;
  }
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar6 = 0;
    lVar5 = lVar11;
    do {
      lVar3 = lVar5;
      if (lVar11 == 0) {
        lVar3 = lVar11;
      }
      FUN_1476aa5ac(param_1,*(undefined4 *)(lVar8 + lVar6),*(undefined8 *)(lVar9 + lVar6 * 2),
                    *(undefined8 *)(lVar10 + lVar6 * 2),*(undefined8 *)(lVar4 + lVar6 * 2),
                    *(undefined8 *)(lVar14 + lVar6 * 2),*(undefined8 *)(lVar13 + lVar6 * 2),
                    *(undefined8 *)(lVar16 + lVar6 * 2),*(undefined8 *)(lVar7 + lVar6 * 2),
                    *(undefined8 *)(lVar15 + lVar6 * 2),*(undefined8 *)(lVar12 + lVar6 * 2),lVar3);
      lVar6 = lVar6 + 4;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 2 != lVar6);
  }
  return;
}



// FUNCTION 1476aa5ac FUN_1476aa5ac body=791 status=ok
// SIG undefined FUN_1476aa5ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476aa5ac(longlong *param_1,uint param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,double param_9,double param_10,
                  double param_11,double *param_12)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  double dVar3;
  double dVar5;
  double dVar7;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar12 = 1.0;
  uVar23 = 0;
  uVar24 = 0x3ff00000;
  if (param_12 != (double *)0x0) {
    dVar17 = *param_12;
    uVar23 = SUB84(dVar17,0);
    uVar24 = (undefined4)((ulonglong)dVar17 >> 0x20);
    if ((dVar17 == 0.0) && (!NAN(dVar17))) goto LAB_1476aa866;
  }
  uVar9 = param_2 >> 0x10;
  param_1 = (longlong *)*param_1;
  if ((int)uVar9 < (int)param_1[5]) {
    plVar10 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar10 + (ulonglong)(param_2 >> 0x15) * 4) >> (uVar9 & 0x1f) & 1) != 0
       ) {
      dVar12 = *(double *)(*param_1 + (ulonglong)uVar9 * 8);
    }
  }
  dVar12 = (double)CONCAT44(uVar24,uVar23) / dVar12;
  lVar8 = param_1[7];
  uVar11 = (ulonglong)(uVar9 * 0x60);
  local_c8 = param_7;
  dStack_c0 = param_8;
  local_b8 = param_6;
  FUN_144a7484c(&local_c8,local_e8);
  *(double *)(lVar8 + uVar11) = param_3 * dVar12 + *(double *)(lVar8 + uVar11);
  *(double *)(lVar8 + 8 + uVar11) = param_4 * dVar12 + *(double *)(lVar8 + 8 + uVar11);
  *(double *)(lVar8 + 0x10 + uVar11) = param_5 * dVar12 + *(double *)(lVar8 + 0x10 + uVar11);
  FUN_144a44da6(&local_c8,&DAT_14c8463d0,local_e8,dVar12);
  dVar17 = local_b8 * local_b8 + local_c8 * local_c8;
  dVar21 = dStack_b0 * dStack_b0 + dStack_c0 * dStack_c0;
  auVar18._0_8_ = dVar17 + dVar21;
  auVar18._8_8_ = dVar17 + dVar21;
  auVar19 = sqrtpd(auVar18,auVar18);
  auVar19 = divpd(_DAT_149934d80,auVar19);
  auVar22._0_8_ = auVar19._0_8_ * local_b8;
  auVar22._8_8_ = auVar19._8_8_ * dStack_b0;
  dVar13 = (double)((ulonglong)(local_c8 * auVar19._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
  dVar14 = (double)((ulonglong)(dStack_c0 * auVar19._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
  auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
  auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
  auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar19);
  pdVar1 = (double *)(lVar8 + 0x38 + uVar11);
  dVar21 = *pdVar1;
  dVar17 = *pdVar1;
  dVar15 = auVar19._0_8_;
  dVar16 = auVar19._8_8_;
  auVar20._8_4_ = SUB84(dVar13,0);
  auVar20._0_8_ = dVar14;
  auVar20._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  pdVar1 = (double *)(lVar8 + 0x20 + uVar11);
  dVar2 = *pdVar1;
  dVar3 = *pdVar1;
  pdVar1 = (double *)(lVar8 + 0x28 + uVar11);
  dVar4 = *pdVar1;
  dVar5 = *pdVar1;
  pdVar1 = (double *)(lVar8 + 0x30 + uVar11);
  dVar6 = *pdVar1;
  dVar7 = *pdVar1;
  pdVar1 = (double *)(lVar8 + 0x20 + uVar11);
  *pdVar1 = dVar14 * dVar6 * -1.0 + dVar15 * dVar4 + dVar2 * dVar16 * 1.0 + dVar21 * dVar13;
  pdVar1[1] = auVar20._8_8_ * dVar7 * 1.0 + dVar16 * dVar5 + dVar3 * dVar15 * -1.0 + dVar17 * dVar14
  ;
  pdVar1 = (double *)(lVar8 + 0x30 + uVar11);
  *pdVar1 = dVar16 * dVar6 * 1.0 + ((dVar2 * dVar14 * 1.0 + dVar21 * dVar15) - dVar13 * dVar4);
  pdVar1[1] = dVar15 * dVar7 * -1.0 +
              ((dVar3 * auVar20._8_8_ * -1.0 + dVar17 * dVar16) - dVar14 * dVar5);
  *(double *)(lVar8 + 0x40 + uVar11) = dVar12 * param_9 + *(double *)(lVar8 + 0x40 + uVar11);
  *(double *)(lVar8 + 0x48 + uVar11) = param_10 * dVar12 + *(double *)(lVar8 + 0x48 + uVar11);
  *(double *)(lVar8 + 0x50 + uVar11) = param_11 * dVar12 + *(double *)(lVar8 + 0x50 + uVar11);
LAB_1476aa866:
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aa8c4 FUN_1476aa8c4 body=383 status=ok
// SIG undefined FUN_1476aa8c4(void)

void FUN_1476aa8c4(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[9];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aaa44 FUN_1476aaa44 body=665 status=ok
// SIG undefined FUN_1476aaa44(void)

int * FUN_1476aaa44(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  longlong *plVar12;
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
  if ((((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
       ((param_1[3] == -1 || (param_1[4] == -1)))) ||
      ((param_1[5] == -1 || ((param_1[6] == -1 || (param_1[7] == -1)))))) ||
     ((param_1[8] == -1 ||
      ((param_1[9] == -1 || (cVar11 = FUN_1476aad34(param_1,param_3), cVar11 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1476aaac2;
  }
  plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a4e06b0;
  plVar12[2] = (longlong)&PTR_FUN_14a4e06c8;
  plVar12[3] = *param_7;
  *(undefined4 *)(plVar12 + 8) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  uVar8 = *(undefined4 *)(param_1 + 10);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(plVar12 + 6) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)plVar12 + 0x34) = uVar8;
  *(undefined4 *)(plVar12 + 7) = uVar9;
  *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar10;
  *(undefined4 *)(plVar12 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar12 + 0x24) = uVar5;
  *(undefined4 *)(plVar12 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_1476aaf56(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476ab0aa;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x14;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar12 + 2;
  local_c8 = plVar12;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476aac6a;
    }
  }
  else {
LAB_1476aac6a:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_1476aaac2:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476aacde FUN_1476aacde body=84 status=ok
// SIG undefined FUN_1476aacde(void)

void FUN_1476aacde(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1476ab436(param_3 + 8,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aad34 FUN_1476aad34 body=546 status=ok
// SIG undefined FUN_1476aad34(void)

undefined8 FUN_1476aad34(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
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
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar11 = false;
  }
  else {
    bVar11 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[9];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar12 = false;
  }
  else {
    bVar12 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),
                  (byte)uVar3 & bVar11 & bVar12 &
                  bVar8 & bVar9 & bVar10 & bVar6 & bVar7 & bVar4 & bVar5);
}



// FUNCTION 1476aaf56 FUN_1476aaf56 body=277 status=ok
// SIG undefined FUN_1476aaf56(void)

void FUN_1476aaf56(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_3,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  FUN_140dba9e6(param_2,param_1[3]);
  FUN_140dba9e6(param_3,param_1[3]);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_3,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_3,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  FUN_140dba9e6(param_3,param_1[6]);
  FUN_140dba9e6(param_2,param_1[7]);
  FUN_140dba9e6(param_3,param_1[7]);
  FUN_140dba9e6(param_2,param_1[8]);
  FUN_140dba9e6(param_3,param_1[8]);
  FUN_140dba9e6(param_2,param_1[9]);
  FUN_140dba9e6(param_3,param_1[9]);
  if (param_1[10] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1476ab06c FUN_1476ab06c body=1 status=ok
// SIG undefined FUN_1476ab06c(void)

void FUN_1476ab06c(void)

{
  return;
}



// FUNCTION 1476ab06e FUN_1476ab06e body=29 status=ok
// SIG undefined FUN_1476ab06e(void)

undefined8 FUN_1476ab06e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ab08c FUN_1476ab08c body=29 status=ok
// SIG undefined FUN_1476ab08c(void)

undefined8 FUN_1476ab08c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ab0c2 FUN_1476ab0c2 body=884 status=ok
// SIG undefined FUN_1476ab0c2(void)

void FUN_1476ab0c2(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xb);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_1476ab113;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab113:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476ab167;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab167:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_1476ab1b4;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab1b4:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[3]) goto LAB_1476ab201;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab201:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[4]) goto LAB_1476ab24e;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab24e:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x10 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[5]) goto LAB_1476ab29b;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab29b:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x14 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[6]) goto LAB_1476ab2e8;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab2e8:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x18 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[7]) goto LAB_1476ab335;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab335:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x1c + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar3 = (ushort)uVar2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[8]) goto LAB_1476ab382;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab382:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x20 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[9]) goto LAB_1476ab3cf;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476ab3cf:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x24 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[10]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar5 + 0x28 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1476ab436 FUN_1476ab436 body=492 status=ok
// SIG undefined FUN_1476ab436(void)

void FUN_1476ab436(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  puVar2 = (uint *)*param_3;
  lVar12 = *(longlong *)(param_2 + 0x20);
  lVar11 = 0;
  lVar6 = lVar12 + (ulonglong)puVar2[10];
  if ((ulonglong)puVar2[10] == 0xffffffff) {
    lVar6 = lVar11;
  }
  lVar7 = lVar12 + (ulonglong)puVar2[9];
  if ((ulonglong)puVar2[9] == 0xffffffff) {
    lVar7 = lVar11;
  }
  lVar16 = lVar12 + (ulonglong)puVar2[8];
  if ((ulonglong)puVar2[8] == 0xffffffff) {
    lVar16 = lVar11;
  }
  lVar15 = lVar12 + (ulonglong)puVar2[7];
  if ((ulonglong)puVar2[7] == 0xffffffff) {
    lVar15 = lVar11;
  }
  lVar13 = lVar12 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar13 = lVar11;
  }
  lVar8 = lVar12 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar8 = lVar11;
  }
  lVar9 = lVar12 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar9 = lVar11;
  }
  lVar5 = lVar12 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar5 = lVar11;
  }
  lVar10 = lVar12 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar10 = lVar11;
  }
  lVar4 = lVar12 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar4 = lVar11;
  }
  lVar12 = lVar12 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar12 = lVar11;
  }
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar14 = 0;
    lVar11 = lVar6;
    do {
      lVar3 = lVar11;
      if (lVar6 == 0) {
        lVar3 = lVar6;
      }
      FUN_1476ab622(param_1,*(undefined4 *)(lVar12 + uVar14 * 4),lVar4,lVar10,lVar5,lVar9,lVar8,
                    lVar13,lVar15,lVar16,lVar7,lVar3);
      uVar14 = uVar14 + 1;
      lVar4 = lVar4 + 8;
      lVar10 = lVar10 + 8;
      lVar5 = lVar5 + 8;
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + 8;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + 8;
      lVar7 = lVar7 + 8;
      lVar11 = lVar11 + 0x48;
    } while (uVar1 != uVar14);
  }
  return;
}



// FUNCTION 1476ab622 FUN_1476ab622 body=1142 status=ok
// SIG undefined FUN_1476ab622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476ab622(longlong *param_1,uint param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
                  double *param_11,double *param_12)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined8 uVar3;
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
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  double dVar26;
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar24 = param_2 >> 0x10;
  plVar22 = (longlong *)*param_1;
  uVar34 = 0;
  uVar35 = 0x3ff00000;
  if ((int)uVar24 < (int)plVar22[5]) {
    plVar25 = plVar22 + 2;
    if ((longlong *)plVar22[4] != (longlong *)0x0) {
      plVar25 = (longlong *)plVar22[4];
    }
    if ((*(uint *)((longlong)plVar25 + (ulonglong)(param_2 >> 0x15) * 4) >> (uVar24 & 0x1f) & 1) !=
        0) {
      uVar3 = *(undefined8 *)(*plVar22 + (ulonglong)uVar24 * 8);
      uVar34 = (undefined4)uVar3;
      uVar35 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
  }
  lVar14 = plVar22[7];
  uVar23 = (ulonglong)(uVar24 * 0x60);
  dVar4 = *(double *)(lVar14 + uVar23);
  dVar5 = *(double *)(lVar14 + 8 + uVar23);
  dVar6 = *(double *)(lVar14 + 0x10 + uVar23);
  pauVar1 = (undefined1 (*) [16])(lVar14 + 0x20 + uVar23);
  local_138 = *pauVar1;
  local_128 = *(undefined1 (*) [16])(lVar14 + 0x30 + uVar23);
  dVar7 = *(double *)(lVar14 + 0x40 + uVar23);
  dVar8 = *(double *)(lVar14 + 0x48 + uVar23);
  dVar9 = *(double *)(lVar14 + 0x50 + uVar23);
  if (((param_12 == (double *)0x0) || ((double)CONCAT44(uVar35,uVar34) < 0.0)) ||
     (1.0 < (double)CONCAT44(uVar35,uVar34) || (double)CONCAT44(uVar35,uVar34) == 1.0)) {
    local_138._0_4_ = (undefined4)*(undefined8 *)*pauVar1;
    local_138._4_4_ = (undefined4)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20);
    local_138._8_4_ = (undefined4)*(undefined8 *)(*pauVar1 + 8);
    local_138._12_4_ = (undefined4)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
  }
  else {
    dVar6 = (dVar6 - param_12[2]) * (double)CONCAT44(uVar35,uVar34) + param_12[2];
    dVar5 = (dVar5 - param_12[1]) * (double)CONCAT44(uVar35,uVar34) + param_12[1];
    dVar4 = (dVar4 - *param_12) * (double)CONCAT44(uVar35,uVar34) + *param_12;
    local_160 = param_12[3];
    local_170 = *(undefined4 *)(param_12 + 4);
    uStack_16c = *(undefined4 *)((longlong)param_12 + 0x24);
    uStack_168 = *(undefined4 *)(param_12 + 5);
    uStack_164 = *(undefined4 *)((longlong)param_12 + 0x2c);
    local_178 = param_1;
    FUN_144a7484c(&local_170,local_158);
    FUN_144a44da6(&local_118,local_158,local_138,CONCAT44(uVar35,uVar34));
    dVar26 = local_108 * local_108 + local_118 * local_118;
    dVar30 = dStack_100 * dStack_100 + dStack_110 * dStack_110;
    auVar28._0_8_ = dVar26 + dVar30;
    auVar28._8_8_ = dVar26 + dVar30;
    auVar29 = sqrtpd(auVar28,auVar28);
    auVar32 = divpd(_DAT_149934d80,auVar29);
    auVar33._0_8_ = auVar32._0_8_ * local_108;
    auVar33._8_8_ = auVar32._8_8_ * dStack_100;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    local_128 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar29);
    uVar23 = (ulonglong)(local_118 * auVar32._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    local_138._0_4_ = (undefined4)uVar23;
    local_138._4_4_ = (undefined4)(uVar23 >> 0x20);
    uVar23 = (ulonglong)(dStack_110 * auVar32._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    local_138._8_4_ = (undefined4)uVar23;
    local_138._12_4_ = (undefined4)(uVar23 >> 0x20);
    dVar9 = (dVar9 - param_12[8]) * (double)CONCAT44(uVar35,uVar34) + param_12[8];
    dVar8 = (dVar8 - param_12[7]) * (double)CONCAT44(uVar35,uVar34) + param_12[7];
    dVar7 = (dVar7 - param_12[6]) * (double)CONCAT44(uVar35,uVar34) + param_12[6];
    plVar22 = (longlong *)*local_178;
  }
  lVar14 = plVar22[9];
  uVar23 = (ulonglong)(uVar24 * 0x60);
  pdVar2 = (double *)(lVar14 + 0x20 + uVar23);
  dVar18 = *pdVar2;
  dVar19 = pdVar2[1];
  pdVar2 = (double *)(lVar14 + 0x30 + uVar23);
  dVar20 = *pdVar2;
  dVar21 = pdVar2[1];
  dVar31 = local_128._8_8_;
  dVar11 = (double)CONCAT44(local_138._4_4_,local_138._0_4_);
  dVar12 = (double)CONCAT44(local_138._4_4_,local_138._0_4_);
  dVar13 = (double)CONCAT44(local_138._12_4_,local_138._8_4_);
  dVar15 = (double)CONCAT44(local_138._12_4_,local_138._8_4_);
  dVar16 = (double)CONCAT44(local_138._12_4_,local_138._8_4_);
  dVar27 = local_128._0_8_;
  dVar17 = dVar18 * dVar27 * 1.0 +
           dVar21 * (double)CONCAT44(local_138._12_4_,local_138._8_4_) +
           dVar12 * dVar20 * -1.0 + dVar31 * dVar19;
  dVar26 = *(double *)(lVar14 + uVar23);
  dVar30 = *(double *)(lVar14 + 8 + uVar23);
  dVar10 = *(double *)(lVar14 + 0x10 + uVar23);
  local_138._8_4_ = SUB84(dVar17,0);
  local_138._0_8_ =
       dVar19 * dVar27 * -1.0 + dVar20 * dVar13 + dVar11 * dVar21 * 1.0 + dVar31 * dVar18;
  local_138._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_128._8_8_ =
       dVar20 * dVar27 * -1.0 + ((dVar12 * dVar18 * -1.0 + dVar31 * dVar21) - dVar16 * dVar19);
  local_128._0_8_ =
       dVar21 * dVar27 * 1.0 + ((dVar11 * dVar19 * 1.0 + dVar31 * dVar20) - dVar15 * dVar18);
  dVar11 = *(double *)(lVar14 + 0x40 + uVar23);
  dVar12 = *(double *)(lVar14 + 0x48 + uVar23);
  dVar13 = *(double *)(lVar14 + 0x50 + uVar23);
  FUN_1448052ee(local_138,&local_118);
  *param_3 = dVar4 + dVar26;
  *param_4 = dVar5 + dVar30;
  *param_5 = dVar6 + dVar10;
  *param_6 = local_108;
  *param_7 = local_118;
  *param_8 = dStack_110;
  *param_9 = dVar7 + dVar11;
  *param_10 = dVar8 + dVar12;
  *param_11 = dVar9 + dVar13;
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aba9a FUN_1476aba9a body=142 status=ok
// SIG undefined FUN_1476aba9a(void)

undefined4 * FUN_1476aba9a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_3[8];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476abb28 FUN_1476abb28 body=511 status=ok
// SIG undefined FUN_1476abb28(void)

void FUN_1476abb28(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[4];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[5];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[6];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[7];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[8];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[9];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[10] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[10];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476abd28 FUN_1476abd28 body=1921 status=ok
// SIG undefined FUN_1476abd28(void)

void FUN_1476abd28(undefined8 param_1,longlong param_2,short *param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong local_240;
  ulonglong local_238;
  int local_22c;
  longlong *local_228;
  short *local_220;
  longlong local_218;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  longlong *local_158;
  int local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  longlong local_130;
  longlong *local_128;
  int local_120;
  longlong local_118;
  longlong *local_110;
  int local_108;
  longlong local_100;
  longlong *local_f8;
  int local_f0;
  longlong local_e8;
  longlong *local_e0;
  int local_d8;
  longlong local_d0;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1475b4978(param_2,&local_1a0,param_3[10]);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == param_3[9]) goto LAB_1476abd95;
      plVar13 = plVar13 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1476abd95:
  local_1ec = *(int *)(param_2 + 0x14);
  if (local_1ec == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[8]) goto LAB_1476abdc5;
      plVar9 = plVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476abdc5:
  local_1d8 = *plVar13;
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == param_3[7]) goto LAB_1476abe02;
      plVar12 = plVar12 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1476abe02:
  lVar8 = *plVar9;
  local_1f4 = *(int *)(param_2 + 0x14);
  local_1f0 = iVar2;
  if (local_1f4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == param_3[6]) goto LAB_1476abe3a;
      plVar14 = plVar14 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1476abe3a:
  local_1b8 = *plVar12;
  local_1f8 = *(int *)(param_2 + 0x14);
  local_228 = plVar13;
  if (local_1f8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == param_3[5]) goto LAB_1476abe7f;
      plVar13 = plVar13 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1476abe7f:
  lVar7 = *plVar14;
  local_1fc = *(int *)(param_2 + 0x14);
  local_1b0 = lVar8;
  if (local_1fc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == param_3[4]) goto LAB_1476abec4;
      plVar18 = plVar18 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1476abec4:
  lVar8 = *plVar13;
  local_200 = *(int *)(param_2 + 0x14);
  local_1d0 = param_1;
  local_1c0 = lVar7;
  if (local_200 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[3]) goto LAB_1476abf01;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476abf01:
  local_1e0 = *plVar18;
  local_204 = *(int *)(param_2 + 0x14);
  local_1a8 = plVar9;
  if (local_204 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[2]) goto LAB_1476abf44;
      plVar9 = plVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476abf44:
  local_218 = *plVar10;
  local_208 = *(int *)(param_2 + 0x14);
  local_1c8 = lVar8;
  if (local_208 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == param_3[1]) goto LAB_1476abf8d;
      plVar16 = plVar16 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476abf8d:
  local_1e8 = *plVar9;
  local_22c = *(int *)(param_2 + 0x14);
  local_220 = param_3;
  if (local_22c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *local_220) goto LAB_1476abfe3;
      plVar15 = plVar15 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476abfe3:
  local_220 = (short *)*plVar16;
  local_180 = *(int *)(param_2 + 0x14);
  local_238 = param_2;
  if (local_180 == 1) {
    local_20c = local_180;
    AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
    local_180 = local_20c;
  }
  lVar6 = local_1b0;
  lVar5 = local_1b8;
  lVar4 = local_1c0;
  lVar3 = local_1c8;
  lVar7 = local_1e8;
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  lVar8 = *plVar15;
  local_150 = local_208;
  local_138 = local_204;
  local_120 = local_200;
  local_118 = local_1e0;
  local_108 = local_1fc;
  local_100 = local_1c8;
  local_f0 = local_1f8;
  local_e8 = local_1c0;
  local_d8 = local_1f4;
  local_d0 = local_1b8;
  local_c8 = local_1a8;
  local_c0 = local_1f0;
  local_b8 = local_1b0;
  local_b0 = local_228;
  local_a8 = local_1ec;
  local_a0 = local_1d8;
  local_98 = local_1a0;
  local_90 = local_198;
  local_228 = (longlong *)local_190;
  local_88 = local_190;
  puVar1 = (ushort *)(local_238 + 0xe);
  local_238 = (ulonglong)*puVar1;
  local_188 = plVar15;
  local_178 = lVar8;
  local_170 = plVar16;
  local_168 = local_22c;
  local_160 = (longlong)local_220;
  local_158 = plVar9;
  local_148 = local_1e8;
  local_140 = plVar10;
  local_130 = local_218;
  local_128 = plVar18;
  local_110 = plVar13;
  local_f8 = plVar14;
  local_e0 = plVar12;
  if (local_238 != 0) {
    local_238 = (ulonglong)*puVar1 << 2;
    uVar11 = 0;
    lVar17 = local_190;
    do {
      local_240 = lVar17;
      if (local_228 == (longlong *)0x0) {
        local_240 = 0;
      }
      local_248 = *(undefined8 *)(local_1d8 + uVar11 * 2);
      local_250 = *(undefined8 *)(lVar6 + uVar11 * 2);
      local_258 = *(undefined8 *)(lVar5 + uVar11 * 2);
      local_260 = *(undefined8 *)(lVar4 + uVar11 * 2);
      local_268 = *(undefined8 *)(lVar3 + uVar11 * 2);
      local_270 = *(undefined8 *)(local_1e0 + uVar11 * 2);
      local_278 = *(undefined8 *)(local_218 + uVar11 * 2);
      FUN_1476a96a0(local_1d0,*(undefined4 *)(lVar8 + uVar11),
                    *(undefined8 *)((longlong)local_220 + uVar11 * 2),
                    *(undefined8 *)(lVar7 + uVar11 * 2));
      uVar11 = uVar11 + 4;
      lVar17 = lVar17 + 8;
    } while (local_238 != uVar11);
  }
  FUN_1476ac4aa(&local_188);
  if ((local_80 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ac4aa FUN_1476ac4aa body=430 status=ok
// SIG undefined FUN_1476ac4aa(void)

void FUN_1476ac4aa(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476ac64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ac658 FUN_1476ac658 body=119 status=ok
// SIG undefined FUN_1476ac658(void)

undefined4 * FUN_1476ac658(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476ac6d0 FUN_1476ac6d0 body=183 status=ok
// SIG undefined FUN_1476ac6d0(void)

void FUN_1476ac6d0(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ac788 FUN_1476ac788 body=315 status=ok
// SIG undefined FUN_1476ac788(void)

void FUN_1476ac788(undefined8 param_1,longlong param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == param_3[1]) goto LAB_1476ac7c0;
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476ac7c0:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_1476ac7e7;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476ac7e7:
  lVar5 = *plVar6;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_78 = plVar8;
  local_70 = iVar3;
  local_68 = lVar4;
  local_60 = plVar6;
  local_58 = iVar2;
  local_50 = lVar5;
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      FUN_1476a9e7e(param_1,*(undefined4 *)(lVar4 + uVar7 * 4),*(undefined8 *)(lVar5 + uVar7 * 8));
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  FUN_1476ac8c4(&local_78);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ac8c4 FUN_1476ac8c4 body=85 status=ok
// SIG undefined FUN_1476ac8c4(void)

void FUN_1476ac8c4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476ac90b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ac91a FUN_1476ac91a body=142 status=ok
// SIG undefined FUN_1476ac91a(void)

undefined4 * FUN_1476ac91a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_3[8];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476ac9a8 FUN_1476ac9a8 body=1921 status=ok
// SIG undefined FUN_1476ac9a8(void)

void FUN_1476ac9a8(undefined8 param_1,longlong param_2,short *param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong local_240;
  ulonglong local_238;
  int local_22c;
  longlong *local_228;
  short *local_220;
  longlong local_218;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  longlong *local_158;
  int local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  longlong local_130;
  longlong *local_128;
  int local_120;
  longlong local_118;
  longlong *local_110;
  int local_108;
  longlong local_100;
  longlong *local_f8;
  int local_f0;
  longlong local_e8;
  longlong *local_e0;
  int local_d8;
  longlong local_d0;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1475b4978(param_2,&local_1a0,param_3[10]);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == param_3[9]) goto LAB_1476aca15;
      plVar13 = plVar13 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1476aca15:
  local_1ec = *(int *)(param_2 + 0x14);
  if (local_1ec == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[8]) goto LAB_1476aca45;
      plVar9 = plVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476aca45:
  local_1d8 = *plVar13;
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == param_3[7]) goto LAB_1476aca82;
      plVar12 = plVar12 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1476aca82:
  lVar8 = *plVar9;
  local_1f4 = *(int *)(param_2 + 0x14);
  local_1f0 = iVar2;
  if (local_1f4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == param_3[6]) goto LAB_1476acaba;
      plVar14 = plVar14 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1476acaba:
  local_1b8 = *plVar12;
  local_1f8 = *(int *)(param_2 + 0x14);
  local_228 = plVar13;
  if (local_1f8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == param_3[5]) goto LAB_1476acaff;
      plVar13 = plVar13 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1476acaff:
  lVar7 = *plVar14;
  local_1fc = *(int *)(param_2 + 0x14);
  local_1b0 = lVar8;
  if (local_1fc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == param_3[4]) goto LAB_1476acb44;
      plVar18 = plVar18 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1476acb44:
  lVar8 = *plVar13;
  local_200 = *(int *)(param_2 + 0x14);
  local_1d0 = param_1;
  local_1c0 = lVar7;
  if (local_200 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[3]) goto LAB_1476acb81;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476acb81:
  local_1e0 = *plVar18;
  local_204 = *(int *)(param_2 + 0x14);
  local_1a8 = plVar9;
  if (local_204 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[2]) goto LAB_1476acbc4;
      plVar9 = plVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476acbc4:
  local_218 = *plVar10;
  local_208 = *(int *)(param_2 + 0x14);
  local_1c8 = lVar8;
  if (local_208 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == param_3[1]) goto LAB_1476acc0d;
      plVar16 = plVar16 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476acc0d:
  local_1e8 = *plVar9;
  local_22c = *(int *)(param_2 + 0x14);
  local_220 = param_3;
  if (local_22c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *local_220) goto LAB_1476acc63;
      plVar15 = plVar15 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476acc63:
  local_220 = (short *)*plVar16;
  local_180 = *(int *)(param_2 + 0x14);
  local_238 = param_2;
  if (local_180 == 1) {
    local_20c = local_180;
    AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
    local_180 = local_20c;
  }
  lVar6 = local_1b0;
  lVar5 = local_1b8;
  lVar4 = local_1c0;
  lVar3 = local_1c8;
  lVar7 = local_1e8;
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  lVar8 = *plVar15;
  local_150 = local_208;
  local_138 = local_204;
  local_120 = local_200;
  local_118 = local_1e0;
  local_108 = local_1fc;
  local_100 = local_1c8;
  local_f0 = local_1f8;
  local_e8 = local_1c0;
  local_d8 = local_1f4;
  local_d0 = local_1b8;
  local_c8 = local_1a8;
  local_c0 = local_1f0;
  local_b8 = local_1b0;
  local_b0 = local_228;
  local_a8 = local_1ec;
  local_a0 = local_1d8;
  local_98 = local_1a0;
  local_90 = local_198;
  local_228 = (longlong *)local_190;
  local_88 = local_190;
  puVar1 = (ushort *)(local_238 + 0xe);
  local_238 = (ulonglong)*puVar1;
  local_188 = plVar15;
  local_178 = lVar8;
  local_170 = plVar16;
  local_168 = local_22c;
  local_160 = (longlong)local_220;
  local_158 = plVar9;
  local_148 = local_1e8;
  local_140 = plVar10;
  local_130 = local_218;
  local_128 = plVar18;
  local_110 = plVar13;
  local_f8 = plVar14;
  local_e0 = plVar12;
  if (local_238 != 0) {
    local_238 = (ulonglong)*puVar1 << 2;
    uVar11 = 0;
    lVar17 = local_190;
    do {
      local_240 = lVar17;
      if (local_228 == (longlong *)0x0) {
        local_240 = 0;
      }
      local_248 = *(undefined8 *)(local_1d8 + uVar11 * 2);
      local_250 = *(undefined8 *)(lVar6 + uVar11 * 2);
      local_258 = *(undefined8 *)(lVar5 + uVar11 * 2);
      local_260 = *(undefined8 *)(lVar4 + uVar11 * 2);
      local_268 = *(undefined8 *)(lVar3 + uVar11 * 2);
      local_270 = *(undefined8 *)(local_1e0 + uVar11 * 2);
      local_278 = *(undefined8 *)(local_218 + uVar11 * 2);
      FUN_1476aa5ac(local_1d0,*(undefined4 *)(lVar8 + uVar11),
                    *(undefined8 *)((longlong)local_220 + uVar11 * 2),
                    *(undefined8 *)(lVar7 + uVar11 * 2));
      uVar11 = uVar11 + 4;
      lVar17 = lVar17 + 8;
    } while (local_238 != uVar11);
  }
  FUN_1476ac4aa(&local_188);
  if ((local_80 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ad12a FUN_1476ad12a body=142 status=ok
// SIG undefined FUN_1476ad12a(void)

undefined4 * FUN_1476ad12a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_3[8];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476ad1b8 FUN_1476ad1b8 body=511 status=ok
// SIG undefined FUN_1476ad1b8(void)

void FUN_1476ad1b8(short *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[4];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[5];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[6];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[7];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[8];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[9];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (param_1[10] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[10];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ad3b8 FUN_1476ad3b8 body=409 status=ok
// SIG undefined FUN_1476ad3b8(void)

void FUN_1476ad3b8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_38);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 6),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 8),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 10),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 0xc),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 0xe),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 0x10),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 0x12),&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ad552 FUN_1476ad552 body=1976 status=ok
// SIG undefined FUN_1476ad552(void)

void FUN_1476ad552(undefined8 param_1,longlong param_2,ulonglong param_3,short *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  short *local_250;
  longlong local_248;
  int local_23c;
  ulonglong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  ulonglong local_178;
  int local_170;
  longlong local_168;
  longlong *local_160;
  ulonglong local_158;
  int local_150;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  int local_130;
  longlong local_128;
  longlong *local_120;
  ulonglong local_118;
  int local_110;
  longlong local_108;
  longlong *local_100;
  ulonglong local_f8;
  int local_f0;
  longlong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  int local_d0;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_238 = param_3;
  FUN_1476adfb4(param_2,&local_1b0,param_4[10]);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == param_4[9]) goto LAB_1476ad5ad;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476ad5ad:
  local_1e4 = *(int *)(param_2 + 0x14);
  if (local_1e4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == param_4[8]) goto LAB_1476ad5dc;
      plVar15 = plVar15 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476ad5dc:
  lVar3 = *plVar7;
  local_1e8 = *(int *)(param_2 + 0x14);
  local_1b8 = plVar7;
  if (local_1e8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == param_4[7]) goto LAB_1476ad616;
      plVar7 = plVar7 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476ad616:
  local_1c0 = *plVar15;
  local_1ec = *(int *)(param_2 + 0x14);
  if (local_1ec == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == param_4[6]) goto LAB_1476ad64f;
      plVar6 = plVar6 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476ad64f:
  local_218 = *plVar7;
  local_1f0 = *(int *)(param_2 + 0x14);
  if (local_1f0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == param_4[5]) goto LAB_1476ad691;
      plVar14 = plVar14 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1476ad691:
  lVar9 = *plVar6;
  local_1f4 = *(int *)(param_2 + 0x14);
  local_210 = lVar3;
  if (local_1f4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_4[4]) goto LAB_1476ad6ce;
      plVar8 = plVar8 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476ad6ce:
  local_228 = *plVar14;
  local_1f8 = *(int *)(param_2 + 0x14);
  local_220 = lVar9;
  if (local_1f8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == param_4[3]) goto LAB_1476ad716;
      plVar18 = plVar18 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1476ad716:
  local_230 = *plVar8;
  local_1fc = *(int *)(param_2 + 0x14);
  local_250 = param_4;
  local_1d8 = param_1;
  if (local_1fc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == local_250[2]) goto LAB_1476ad759;
      plVar17 = plVar17 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1476ad759:
  lVar3 = *plVar18;
  local_200 = *(int *)(param_2 + 0x14);
  local_1c8 = plVar15;
  if (local_200 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == local_250[1]) goto LAB_1476ad797;
      plVar15 = plVar15 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476ad797:
  psVar11 = (short *)*plVar17;
  local_23c = *(int *)(param_2 + 0x14);
  local_248 = param_2;
  local_1e0 = lVar3;
  if (local_23c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (*(ushort *)(local_248 + 0xc) != 0) {
    plVar4 = *(longlong **)(local_248 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(local_248 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar4 + 0x1e) == *local_250) goto LAB_1476ad7ec;
      plVar4 = plVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar4 = (longlong *)0x0;
LAB_1476ad7ec:
  local_1d0 = *plVar15;
  local_190 = *(int *)(local_248 + 0x14);
  if (local_190 == 1) {
    local_250 = psVar11;
    local_204 = local_190;
    AcquireSRWLockShared((PSRWLOCK)(plVar4 + 1));
    psVar11 = local_250;
    local_190 = local_204;
  }
  LOCK();
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  UNLOCK();
  lVar3 = *plVar4;
  local_178 = local_238;
  local_168 = local_1d0;
  local_158 = local_238;
  local_150 = local_200;
  local_138 = local_238;
  local_130 = local_1fc;
  local_118 = local_238;
  local_110 = local_1f8;
  local_108 = local_230;
  local_f8 = local_238;
  local_f0 = local_1f4;
  local_e8 = local_228;
  local_d8 = local_238;
  local_d0 = local_1f0;
  local_c8 = local_220;
  local_b8 = local_238;
  local_b0 = local_1ec;
  local_a8 = local_218;
  local_a0 = local_1c8;
  local_98 = local_238;
  local_90 = local_1e8;
  local_88 = local_1c0;
  local_80 = local_1b8;
  local_78 = local_238;
  local_70 = local_1e4;
  local_68 = local_210;
  local_60 = local_1b0;
  local_58 = local_1a8;
  local_250 = (short *)local_1a0;
  local_50 = local_1a0;
  local_198 = plVar4;
  local_188 = lVar3;
  local_180 = plVar15;
  local_170 = local_23c;
  local_160 = plVar17;
  local_148 = (longlong)psVar11;
  local_140 = plVar18;
  local_128 = local_1e0;
  local_120 = plVar8;
  local_100 = plVar14;
  local_e0 = plVar6;
  local_c0 = plVar7;
  if ((ulonglong)*(ushort *)(local_248 + 0xe) != 0) {
    uVar5 = 0;
    lVar9 = local_220;
    lVar10 = local_218;
    lVar12 = local_1e0;
    lVar13 = local_210;
    lVar16 = local_1d0;
    lVar19 = local_1c0;
    local_238 = (ulonglong)*(ushort *)(local_248 + 0xe);
    do {
      lVar2 = local_228;
      lVar1 = local_230;
      local_260 = local_1a0;
      if (local_250 == (short *)0x0) {
        local_260 = 0;
      }
      local_288 = local_228;
      local_290 = local_230;
      local_298 = lVar12;
      local_280 = lVar9;
      local_278 = lVar10;
      local_270 = lVar19;
      local_268 = lVar13;
      local_248 = local_1a0;
      local_220 = lVar9;
      local_218 = lVar10;
      local_210 = lVar13;
      FUN_1476ab622(local_1d8,*(undefined4 *)(lVar3 + uVar5 * 4),lVar16,psVar11);
      uVar5 = uVar5 + 1;
      lVar16 = lVar16 + 8;
      psVar11 = (short *)((longlong)psVar11 + 8);
      lVar12 = lVar12 + 8;
      local_230 = lVar1 + 8;
      local_228 = lVar2 + 8;
      lVar9 = local_220 + 8;
      lVar10 = local_218 + 8;
      lVar19 = lVar19 + 8;
      lVar13 = local_210 + 8;
      local_1a0 = local_248 + 0x48;
    } while (local_238 != uVar5);
  }
  FUN_1476add0c(&local_198);
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476add0c FUN_1476add0c body=679 status=ok
// SIG undefined FUN_1476add0c(void)

void FUN_1476add0c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1[0x27] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x27] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x28] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x27] + 8));
    }
  }
  lVar2 = param_1[0x23];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x24]) {
      uVar3 = param_1[0x24];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x23] + 0x18) = *(int *)(param_1[0x23] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x25] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x23] + 8));
    }
  }
  lVar2 = param_1[0x1f];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x20]) {
      uVar3 = param_1[0x20];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x1f] + 0x18) = *(int *)(param_1[0x1f] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x21] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x1f] + 8));
    }
  }
  lVar2 = param_1[0x1b];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x1c]) {
      uVar3 = param_1[0x1c];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x1b] + 0x18) = *(int *)(param_1[0x1b] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x1d] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x18]) {
      uVar3 = param_1[0x18];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x17] + 0x18) = *(int *)(param_1[0x17] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x17] + 8));
    }
  }
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x14]) {
      uVar3 = param_1[0x14];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x13] + 0x18) = *(int *)(param_1[0x13] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x15] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x13] + 8));
    }
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x10]) {
      uVar3 = param_1[0x10];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xf] + 0x18) = *(int *)(param_1[0xf] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x11] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xc]) {
      uVar3 = param_1[0xc];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xb] + 0x18) = *(int *)(param_1[0xb] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xb] + 8));
    }
  }
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[8]) {
      uVar3 = param_1[8];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[7] + 0x18) = *(int *)(param_1[7] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[9] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[7] + 8));
    }
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476adfa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476adfb4 FUN_1476adfb4 body=88 status=ok
// SIG undefined FUN_1476adfb4(void)

undefined8 * FUN_1476adfb4(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147605b32(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1476ae00c FUN_1476ae00c body=29 status=ok
// SIG undefined FUN_1476ae00c(void)

undefined8 FUN_1476ae00c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ae02a FUN_1476ae02a body=333 status=ok
// SIG undefined FUN_1476ae02a(void)

void FUN_1476ae02a(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ae178 FUN_1476ae178 body=223 status=ok
// SIG undefined FUN_1476ae178(void)

void FUN_1476ae178(longlong param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 8);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 10);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 10);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 != -1) {
    local_28 = *param_2;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      sVar1 = *(short *)(param_1 + 0xc);
    }
    FUN_1432da954(param_3,sVar1,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ae258 FUN_1476ae258 body=162 status=ok
// SIG undefined FUN_1476ae258(void)

undefined8 * FUN_1476ae258(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[8] = 0x10000000000;
  param_1[0xd] = 0x10000000000;
  param_1[0x14] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 4);
  FUN_1417a7dbb((undefined2 *)((longlong)param_1 + 2),param_1 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ae2fc FUN_1476ae2fc body=1053 status=ok
// SIG undefined FUN_1476ae2fc(void)

void FUN_1476ae2fc(longlong *param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  int local_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong local_120;
  int local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  undefined8 local_30;
  undefined4 local_28;
  short local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_108,param_3[6],param_2);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_128,param_3[5],param_2);
  FUN_1476ae894(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                &local_148,param_3[4],param_2);
  local_24 = param_3[3];
  local_28 = *(undefined4 *)(param_3 + 1);
  FUN_1476ae8f4(&local_190,
                *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar5 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_3) goto LAB_1476ae3db;
      puVar5 = puVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar5 = (undefined8 *)0x0;
LAB_1476ae3db:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar5 + 1));
  }
  LOCK();
  *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
  UNLOCK();
  local_d8 = *puVar5;
  local_d0 = local_190;
  local_c8 = local_188;
  local_190 = 0;
  local_c0 = local_180;
  uStack_b8 = uStack_178;
  local_180 = 0;
  uStack_178 = 0;
  local_b0 = local_170;
  local_a8 = local_168;
  local_168 = 0;
  local_a0 = local_160;
  local_98 = local_158;
  local_160 = 0;
  local_90 = local_150;
  local_150 = 0;
  local_88 = local_148;
  local_80 = local_140;
  local_78 = local_138;
  local_148 = 0;
  local_70 = local_130;
  local_130 = 0;
  local_68 = local_128;
  local_60 = local_120;
  local_58 = local_118;
  local_128 = 0;
  local_50 = local_110;
  local_110 = 0;
  local_48 = local_108;
  local_40 = local_100;
  local_38 = local_f8;
  local_108 = 0;
  local_30 = local_f0;
  local_f0 = 0;
  local_e8 = puVar5;
  local_e0 = iVar1;
  FUN_1476ae71a();
  if (local_148 != 0) {
    uVar4 = *(ulonglong *)(local_148 + 0x10);
    if (*(ulonglong *)(local_148 + 0x10) < local_140) {
      uVar4 = local_140;
    }
    *(ulonglong *)(local_148 + 0x10) = uVar4;
    LOCK();
    *(int *)(local_148 + 0x18) = *(int *)(local_148 + 0x18) + -1;
    UNLOCK();
    if (local_138 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_148 + 8));
    }
  }
  if (local_128 != 0) {
    uVar4 = *(ulonglong *)(local_128 + 0x10);
    if (*(ulonglong *)(local_128 + 0x10) < local_120) {
      uVar4 = local_120;
    }
    *(ulonglong *)(local_128 + 0x10) = uVar4;
    LOCK();
    *(int *)(local_128 + 0x18) = *(int *)(local_128 + 0x18) + -1;
    UNLOCK();
    if (local_118 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_128 + 8));
    }
  }
  if (local_108 != 0) {
    uVar4 = *(ulonglong *)(local_108 + 0x10);
    if (*(ulonglong *)(local_108 + 0x10) < local_100) {
      uVar4 = local_100;
    }
    *(ulonglong *)(local_108 + 0x10) = uVar4;
    LOCK();
    *(int *)(local_108 + 0x18) = *(int *)(local_108 + 0x18) + -1;
    UNLOCK();
    if (local_f8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_108 + 8));
    }
  }
  local_1a8 = 0;
  lStack_1a0 = 0;
  local_198 = 0;
  if (local_c0 != 0) {
    local_1a8 = local_c0;
  }
  if (local_a8 != 0) {
    lStack_1a0 = local_a8;
  }
  if (local_90 != 0) {
    local_198 = local_90;
  }
  local_1b0 = local_30;
  local_1b8 = local_50;
  FUN_14052e948(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8),
                local_d8,&local_1a8,local_70);
  FUN_1476ae790(&local_e8);
  if ((local_20 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ae71a FUN_1476ae71a body=118 status=ok
// SIG undefined FUN_1476ae71a(void)

void FUN_1476ae71a(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476ae782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ae790 FUN_1476ae790 body=259 status=ok
// SIG undefined FUN_1476ae790(void)

void FUN_1476ae790(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x15]) {
      uVar3 = param_1[0x15];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x14] + 0x18) = *(int *)(param_1[0x14] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x14] + 8));
    }
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0x11]) {
      uVar3 = param_1[0x11];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0x10] + 0x18) = *(int *)(param_1[0x10] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0x12] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0x10] + 8));
    }
  }
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xd]) {
      uVar3 = param_1[0xd];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[0xc] + 0x18) = *(int *)(param_1[0xc] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xe] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1476ae71a(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476ae885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ae894 FUN_1476ae894 body=96 status=ok
// SIG undefined FUN_1476ae894(void)

undefined8 * FUN_1476ae894(longlong param_1,undefined8 *param_2,short param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_14756a2b6(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),param_4,0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  return param_2;
}



// FUNCTION 1476ae8f4 FUN_1476ae8f4 body=197 status=ok
// SIG undefined FUN_1476ae8f4(void)

undefined8 * FUN_1476ae8f4(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1476ae9ba(param_2,&local_48,param_3[2]);
  FUN_1476ae9ba(param_2,&local_60,param_3[1]);
  FUN_1476ae9ba(param_2,&local_78,*param_3);
  *param_1 = local_78;
  *(undefined4 *)(param_1 + 1) = local_70;
  param_1[2] = local_68;
  param_1[3] = local_60;
  *(undefined4 *)(param_1 + 4) = local_58;
  param_1[5] = local_50;
  param_1[6] = local_48;
  *(undefined4 *)(param_1 + 7) = local_40;
  param_1[8] = local_38;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ae9ba FUN_1476ae9ba body=85 status=ok
// SIG undefined FUN_1476ae9ba(void)

undefined8 * FUN_1476ae9ba(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1476aea10(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1476aea10 FUN_1476aea10 body=100 status=ok
// SIG undefined FUN_1476aea10(void)

longlong * FUN_1476aea10(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  UNLOCK();
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = *param_2;
  return param_1;
}



// FUNCTION 1476aea74 FUN_1476aea74 body=38 status=ok
// SIG undefined FUN_1476aea74(void)

undefined8 FUN_1476aea74(undefined8 param_1,int param_2)

{
  FUN_140cc566c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aeaa6 FUN_1476aeaa6 body=62 status=ok
// SIG undefined FUN_1476aeaa6(void)

void FUN_1476aeaa6(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_1476aecba();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aeaee FUN_1476aeaee body=336 status=ok
// SIG undefined FUN_1476aeaee(void)

void FUN_1476aeaee(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = param_2[1];
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar5 & 1) != 0) {
    uVar3 = *param_2;
    uVar6 = FUN_140732858();
    if (0 < (int)uVar3) {
      lVar2 = local_88 + -0xd8;
      lVar1 = local_88 + -0x10;
      uVar7 = 0;
      do {
        lVar4 = *(longlong *)(param_5 + uVar7 * 8);
        local_68 = 0;
        if (lVar4 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar4);
          local_68 = local_60;
        }
        FUN_14027461a(lVar1,&local_6c,lVar4);
        FUN_140732f84(lVar2,&local_70,&local_68);
        local_54 = *(undefined4 *)(local_78 + uVar7 * 4);
        local_4a = *(undefined2 *)(local_80 + uVar7 * 2);
        local_60 = CONCAT44(*(undefined4 *)(local_88 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar5;
        FUN_1449da5a2(uVar6,&local_4a,&local_60);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aec40 FUN_1476aec40 body=84 status=ok
// SIG undefined FUN_1476aec40(void)

void FUN_1476aec40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_140733330(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476aec94 FUN_1476aec94 body=38 status=ok
// SIG undefined FUN_1476aec94(void)

undefined8 FUN_1476aec94(undefined8 param_1,int param_2)

{
  FUN_140cc566c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aecba FUN_1476aecba body=139 status=ok
// SIG undefined FUN_1476aecba(void)

void FUN_1476aecba(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x30) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476aed46 FUN_1476aed46 body=118 status=ok
// SIG undefined FUN_1476aed46(void)

void FUN_1476aed46(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x28);
  if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)((longlong)_Dst + 0x10) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar1) * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1476aedbc FUN_1476aedbc body=62 status=ok
// SIG undefined FUN_1476aedbc(void)

void FUN_1476aedbc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476aedfa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1476aedfa FUN_1476aedfa body=112 status=ok
// SIG undefined FUN_1476aedfa(void)

ulonglong FUN_1476aedfa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476aee34;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1476aee34:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476aee6a FUN_1476aee6a body=20 status=ok
// SIG undefined FUN_1476aee6a(void)

void FUN_1476aee6a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1476aee7e FUN_1476aee7e body=63 status=ok
// SIG undefined FUN_1476aee7e(void)

void FUN_1476aee7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476aeebe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1476aeebe FUN_1476aeebe body=97 status=ok
// SIG undefined FUN_1476aeebe(void)

ulonglong FUN_1476aeebe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1476aef20 FUN_1476aef20 body=126 status=ok
// SIG undefined FUN_1476aef20(void)

undefined4 * FUN_1476aef20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 2) = 0;
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0;
  }
  return param_1;
}



// FUNCTION 1476aef9e FUN_1476aef9e body=261 status=ok
// SIG undefined FUN_1476aef9e(void)

void FUN_1476aef9e(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x28) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar6 + (ulonglong)uVar7 * 0x28) <= *param_2)) {
      piVar8 = (int *)(lVar6 + (ulonglong)uVar7 * 0x28);
      FUN_140cc5809(piVar8,1);
      goto LAB_1476af04e;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476af0a4(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x28;
  memmove((void *)(lVar6 + lVar4 + 0x28),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x28);
  piVar8 = (int *)(lVar4 + *param_1);
LAB_1476af04e:
  *piVar8 = *param_2;
  piVar8[2] = *param_3;
  *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_3 + 2);
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(param_3 + 4);
  param_3[4] = 0;
  param_3[5] = 0;
  piVar8[8] = param_3[6];
  piVar8[9] = param_3[7];
  param_3[6] = 0;
  param_3[7] = 0;
  return;
}



// FUNCTION 1476af0a4 FUN_1476af0a4 body=147 status=ok
// SIG undefined FUN_1476af0a4(void)

void FUN_1476af0a4(longlong param_1,int param_2)

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



// FUNCTION 1476af138 FUN_1476af138 body=29 status=ok
// SIG undefined FUN_1476af138(void)

undefined8 FUN_1476af138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476af156 FUN_1476af156 body=122 status=ok
// SIG undefined FUN_1476af156(void)

void FUN_1476af156(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x3f0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3f0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3f0 + 4) = uVar5;
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



// FUNCTION 1476af1d0 FUN_1476af1d0 body=147 status=ok
// SIG undefined FUN_1476af1d0(void)

void FUN_1476af1d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x168);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x16c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xb0,0);
      iVar5 = (int)(uVar4 / 0xb0);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x16c) = iVar6;
    FUN_1476af264(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476af264 FUN_1476af264 body=147 status=ok
// SIG undefined FUN_1476af264(void)

void FUN_1476af264(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x160);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xb0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x160,0,param_3,0xb0);
    memmove(*(void **)((longlong)param_1 + 0x160),param_1,(longlong)param_2 * 0xb0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x160,param_2,param_3,0xb0);
  return;
}



// FUNCTION 1476af2f8 FUN_1476af2f8 body=188 status=ok
// SIG undefined FUN_1476af2f8(void)

void FUN_1476af2f8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[0x28];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x27];
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar1 + lVar4) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + lVar4) + 0x128), lVar2 != 0)) {
        (**(code **)(*param_1 + 0x4a8))(param_1,local_a8,lVar2,2);
        FUN_1476609ec(param_2,param_1,local_a8,lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476af3b6 FUN_1476af3b6 body=1159 status=ok
// SIG undefined FUN_1476af3b6(void)

void FUN_1476af3b6(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined1 auStack_498 [32];
  ulonglong local_478;
  longlong *local_470;
  undefined8 local_468;
  undefined1 local_460;
  longlong *local_458;
  longlong local_448;
  longlong local_440;
  longlong local_438 [2];
  undefined8 local_428;
  undefined1 local_420 [8];
  undefined8 local_418 [6];
  undefined1 local_3e8 [48];
  char local_3b8;
  undefined8 local_3a8 [12];
  undefined1 local_348;
  undefined8 local_2a8 [12];
  longlong local_248;
  uint local_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined1 local_223;
  undefined8 local_218 [12];
  char local_1b8;
  undefined8 local_1a8;
  undefined8 local_198 [12];
  char local_138;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118 [12];
  undefined8 local_b8 [12];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  lVar9 = *(longlong *)(param_2 + 4);
  cVar5 = FUN_140735300(*(undefined8 *)(param_2 + 8),*(undefined8 *)(lVar9 + 0x100));
  if (cVar5 == '\0') goto LAB_1476af5ff;
  FUN_140734f76(local_438,*(undefined8 *)(param_2 + 8));
  if ((*(char *)(lVar9 + 0x249) != '\0') ||
     ((local_438[0] != 0 && (cVar5 = FUN_1474bffbc(), cVar5 != '\0')))) {
    FUN_14073397e(*(undefined8 *)(param_2 + 8),2,1);
  }
  plVar1 = (longlong *)(lVar9 + 0x100);
  uVar7 = FUN_14073476d(*(undefined8 *)(param_2 + 8));
  if (uVar7 != 0) {
    local_478 = uVar7;
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xd8) + 8))
              (*(longlong *)(param_1 + 0x30) + 0xd8,*param_2,*(undefined1 *)(param_2 + 0x16),
               *(undefined4 *)(param_2 + 1));
    local_428 = local_428 & 0xffffffffffffff00;
    FUN_1407355a4(*(undefined8 *)(param_1 + 0x30),&local_428,uVar7);
    local_58 = 0;
    local_3b8 = '\0';
    local_348 = 0;
    FUN_140734938(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 0xc),&local_428);
    if (local_3b8 == '\x01') {
      local_58 = 1;
      puVar12 = local_418;
      puVar14 = local_118;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      local_128 = CONCAT44(local_428._4_4_,(undefined4)local_128);
      local_128 = CONCAT71(local_128._1_7_,(undefined1)local_428);
      puVar12 = local_3a8;
      puVar14 = local_b8;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    uVar2 = *(ulonglong *)(param_2 + 4);
    uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    FUN_1407347d2(param_1,local_198,*(undefined1 *)(uVar2 + 0x24a),*(undefined8 *)(param_2 + 8));
    lVar9 = *(longlong *)(param_2 + 4);
    uVar3 = *(undefined8 *)(lVar9 + 0x130);
    if (local_138 == '\x01') {
      puVar12 = local_198;
      puVar14 = local_2a8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    local_248 = *plVar1;
    local_240 = uVar6 >> 0x10 ^ uVar6;
    local_238 = &local_128;
    local_230 = *(undefined8 *)(param_2 + 0x10);
    local_228 = *(undefined4 *)(param_2 + 0x14);
    local_224 = *(undefined1 *)(param_2 + 0x17);
    local_223 = *(undefined1 *)(lVar9 + 0x24a);
    local_1b8 = local_138;
    if (local_138 != '\0') {
      puVar12 = local_2a8;
      puVar14 = local_218;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    local_1a8 = uVar3;
    FUN_140734cf0(uVar7);
    goto LAB_1476af5ff;
  }
  uVar7 = FUN_14073275e(*(undefined8 *)(param_2 + 8));
  if (uVar7 == 0) goto LAB_1476af5ff;
  iVar11 = (int)*(undefined8 *)(param_2 + 0x18);
  iVar8 = (int)*(undefined8 *)(param_2 + 0xc);
  if (iVar8 < iVar11) {
    if ((*(uint *)(lVar9 + 0x120) & 1) != 0) goto LAB_1476af6a4;
LAB_1476af675:
    bVar13 = false;
  }
  else {
    if (((float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20) <
         (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20) && iVar11 == iVar8) !=
        (bool)((byte)*(uint *)(lVar9 + 0x120) & 1)) goto LAB_1476af675;
LAB_1476af6a4:
    bVar13 = *(float *)(param_2 + 0x12) <= *(float *)(param_2 + 0x10) &&
             *(float *)(param_2 + 0x10) != *(float *)(param_2 + 0x12);
  }
  local_440 = *(longlong *)(lVar9 + 0x130);
  if ((local_440 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c();
  }
  local_460 = *(undefined1 *)((longlong)param_2 + 0x2d);
  local_458 = &local_440;
  local_468 = CONCAT71(local_468._1_7_,bVar13);
  local_470 = (longlong *)CONCAT44(local_470._4_4_,*(undefined4 *)(param_2 + 0x14));
  local_478 = CONCAT44(local_478._4_4_,*(undefined4 *)(param_2 + 0x12));
  FUN_140735fce(*(undefined8 *)(lVar9 + 0x124),*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(lVar9 + 0x100),*(undefined4 *)(param_2 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_448 = *(longlong *)(lVar9 + 0x100);
  uVar4 = *(undefined8 *)(lVar9 + 0x124);
  if ((local_448 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_470 = &local_448;
  local_478 = uVar7;
  local_468 = uVar4;
  FUN_140736106(uVar3,*param_2,*(undefined1 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 1));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_428 = uVar7;
  FUN_1476afbb8(local_420,plVar1);
  local_248 = 0;
  FUN_14485c47a(&local_248,uVar7);
  local_128 = local_248;
  lVar10 = *plVar1;
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar10);
LAB_1476af7c0:
    local_248 = 0;
    FUN_14485c47a(&local_248,lVar10);
    local_120 = local_248;
  }
  else {
    local_120 = 0;
    if (lVar10 != 0) goto LAB_1476af7c0;
  }
  local_118[0] = *(undefined8 *)(lVar9 + 0x124);
  FUN_1476afade(uVar3,&local_128,&local_428);
  FUN_1404dbc70(local_3e8);
  if (*(char *)((longlong)param_2 + 0x2f) == '\x01') {
    FUN_1433d520a(uVar7,2);
  }
LAB_1476af5ff:
  if ((local_48 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476af83e FUN_1476af83e body=293 status=ok
// SIG undefined FUN_1476af83e(void)

undefined1 FUN_1476af83e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_168 [40];
  undefined2 *local_140;
  undefined1 *local_138;
  undefined2 local_130 [2];
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined2 *local_108;
  undefined2 *local_100;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined1 local_f0 [16];
  undefined1 local_e0 [80];
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = &local_109;
  local_109 = 0;
  local_120 = param_2;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_130[0] = *(undefined2 *)(lVar1 + 0x4a);
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_f2 = *(undefined2 *)(lVar2 + 0x84);
  local_140 = &local_f2;
  local_138 = local_f0;
  FUN_14765c59c(local_130,local_f0);
  local_f8 = *(undefined2 *)(lVar1 + 0x104);
  local_100 = &local_f2;
  local_f6 = *(undefined2 *)(lVar1 + 0x106);
  local_f4 = *(undefined2 *)(lVar1 + 0x108);
  local_108 = &local_f8;
  FUN_1403b5126(local_e0,&local_108,2);
  FUN_1476af964(local_f0,*param_1 + 0x28,local_e0,&local_120);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return local_109;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476af964 FUN_1476af964 body=377 status=ok
// SIG undefined FUN_1476af964(void)

void FUN_1476af964(short *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != -1) {
    cVar1 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    iVar3 = *(int *)(param_2 + 0x10);
    while (local_50 != iVar3) {
      lVar5 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar5 + 0x14) = 0;
        lVar8 = lVar5;
      }
      else {
        lVar8 = 0;
      }
      if (*(ushort *)(lVar5 + 0xc) != 0) {
        plVar9 = *(longlong **)(lVar5 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar9 + 0x1e) == *param_1) goto LAB_1476af9fe;
          plVar9 = plVar9 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      plVar9 = (longlong *)0x0;
LAB_1476af9fe:
      iVar4 = *(int *)(lVar5 + 0x14);
      if (iVar4 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
      }
      LOCK();
      *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
      UNLOCK();
      uVar2 = *(ushort *)(lVar5 + 0xe);
      if ((ulonglong)uVar2 != 0) {
        lVar5 = *plVar9;
        uVar7 = 0;
        do {
          if (*param_4 == *(longlong *)(lVar5 + uVar7 * 8)) {
            *(undefined1 *)param_4[1] = 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
        UNLOCK();
        if (iVar4 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
        }
      }
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x14) = 1;
      }
      local_50 = FUN_1403b8464(&local_60);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476afade FUN_1476afade body=216 status=ok
// SIG undefined FUN_1476afade(void)

void FUN_1476afade(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_140735e86();
  if (cVar1 != '\0') {
    FUN_14574087a(param_1,&local_2c,param_2);
    local_38 = 0xffffffff;
    local_34 = *(undefined4 *)(param_1 + 0xc0);
    local_30 = local_2c;
    piVar3 = *(int **)(param_1 + 0xb0);
    if (*piVar3 != 0) {
      FUN_140adeba6(piVar3,&local_38);
      piVar3 = *(int **)(param_1 + 0xb0);
    }
    cVar1 = FUN_14115d04a(piVar3);
    cVar2 = FUN_145740952(param_1,local_30,cVar1 + '\x01');
    if (cVar2 == '\0') {
      FUN_1476afca2(param_3,local_60);
      FUN_145740d2a(param_1,local_2c,cVar1 + '\x01',local_60);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476afbb8 FUN_1476afbb8 body=233 status=ok
// SIG undefined FUN_1476afbb8(void)

longlong * FUN_1476afbb8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = param_2[1];
  param_1[3] = param_2[3];
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[4] = param_2[4];
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  FUN_140737604(param_1 + 7,param_2 + 7);
  param_1[0x29] = param_2[0x29];
  *(int *)(param_1 + 0x2a) = (int)param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  lVar1 = param_2[0x2c];
  param_1[0x2c] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 0x2d) = (char)param_2[0x2d];
  return param_1;
}



// FUNCTION 1476afca2 FUN_1476afca2 body=214 status=ok
// SIG undefined FUN_1476afca2(void)

undefined8 * FUN_1476afca2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_14485c47a(param_2,*param_1);
  param_2[1] = *(undefined8 *)((longlong)param_1 + 0x2c);
  lVar1 = param_1[1];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar1);
  param_2[2] = local_30;
  param_2[3] = param_1[0x2c];
  lVar1 = param_1[0x2d];
  if (DAT_14c950c29 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_1[0x2d];
    }
  }
  param_2[4] = lVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476afd7a FUN_1476afd7a body=286 status=ok
// SIG undefined FUN_1476afd7a(void)

void FUN_1476afd7a(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar7 = *param_2;
    uVar11 = 0;
    uVar8 = uVar2;
    do {
      uVar1 = (uVar8 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x30) < iVar7) {
        uVar11 = uVar1 + (uVar8 & 1);
      }
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x30) <= iVar7)) {
      piVar9 = (int *)(lVar10 + (ulonglong)uVar11 * 0x30);
      goto LAB_1476afe2d;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476afe98(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x30;
  memmove((void *)(lVar10 + lVar4 + 0x30),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x30);
  piVar9 = (int *)(lVar4 + *param_1);
  iVar7 = *param_2;
LAB_1476afe2d:
  *piVar9 = iVar7;
  iVar7 = param_3[1];
  iVar5 = param_3[2];
  iVar6 = param_3[3];
  piVar9[2] = *param_3;
  piVar9[3] = iVar7;
  piVar9[4] = iVar5;
  piVar9[5] = iVar6;
  *(undefined8 *)(piVar9 + 6) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(piVar9 + 8) = *(undefined8 *)(param_3 + 6);
  lVar10 = *(longlong *)(param_3 + 8);
  *(longlong *)(piVar9 + 10) = lVar10;
  if ((lVar10 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1476afe98 FUN_1476afe98 body=147 status=ok
// SIG undefined FUN_1476afe98(void)

void FUN_1476afe98(longlong param_1,int param_2)

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



// FUNCTION 1476aff2c FUN_1476aff2c body=52 status=ok
// SIG undefined FUN_1476aff2c(void)

undefined8 * FUN_1476aff2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0908;
  FUN_1476b0536(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aff60 FUN_1476aff60 body=38 status=ok
// SIG undefined FUN_1476aff60(void)

undefined8 FUN_1476aff60(undefined8 param_1,int param_2)

{
  FUN_1476b000e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476aff92 FUN_1476aff92 body=85 status=ok
// SIG undefined FUN_1476aff92(void)

void FUN_1476aff92(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x48);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FUN_1476b0084();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476affe8 FUN_1476affe8 body=38 status=ok
// SIG undefined FUN_1476affe8(void)

undefined8 FUN_1476affe8(undefined8 param_1,int param_2)

{
  FUN_1476b000e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b000e FUN_1476b000e body=117 status=ok
// SIG undefined FUN_1476b000e(void)

void FUN_1476b000e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4e0980;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140ccf944(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140ccf97c(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b007f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476b0084 FUN_1476b0084 body=150 status=ok
// SIG undefined FUN_1476b0084(void)

void FUN_1476b0084(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar7 = (longlong)param_2;
  local_48 = *(undefined8 *)(lVar3 + 0x10 + lVar7 * 0x48);
  puVar1 = (undefined8 *)(lVar3 + lVar7 * 0x48);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar2 = (undefined4 *)(lVar3 + lVar7 * 0x48);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x10 + lVar7 * 0x48) = *(undefined8 *)(param_3 + 4);
  local_3c = param_2;
  FUN_1461aa200(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_145740e30(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b011c FUN_1476b011c body=62 status=ok
// SIG undefined FUN_1476b011c(void)

void FUN_1476b011c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476b015a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1476b015a FUN_1476b015a body=112 status=ok
// SIG undefined FUN_1476b015a(void)

ulonglong FUN_1476b015a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476b0194;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1476b0194:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476b01ca FUN_1476b01ca body=38 status=ok
// SIG undefined FUN_1476b01ca(void)

undefined8 FUN_1476b01ca(undefined8 param_1,int param_2)

{
  FUN_1476b0410();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b01fc FUN_1476b01fc body=62 status=ok
// SIG undefined FUN_1476b01fc(void)

void FUN_1476b01fc(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_1476b04ae();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b0244 FUN_1476b0244 body=336 status=ok
// SIG undefined FUN_1476b0244(void)

void FUN_1476b0244(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = param_2[1];
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar5 & 1) != 0) {
    uVar3 = *param_2;
    uVar6 = FUN_140732858();
    if (0 < (int)uVar3) {
      lVar2 = local_88 + -0xd8;
      lVar1 = local_88 + -0x10;
      uVar7 = 0;
      do {
        lVar4 = *(longlong *)(param_5 + uVar7 * 8);
        local_68 = 0;
        if (lVar4 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar4);
          local_68 = local_60;
        }
        FUN_14027461a(lVar1,&local_6c,lVar4);
        FUN_140735aee(lVar2,&local_70,&local_68);
        local_54 = *(undefined4 *)(local_78 + uVar7 * 4);
        local_4a = *(undefined2 *)(local_80 + uVar7 * 2);
        local_60 = CONCAT44(*(undefined4 *)(local_88 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar5;
        FUN_1449da5a2(uVar6,&local_4a,&local_60);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b0396 FUN_1476b0396 body=84 status=ok
// SIG undefined FUN_1476b0396(void)

void FUN_1476b0396(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_1407355a4(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476b03ea FUN_1476b03ea body=38 status=ok
// SIG undefined FUN_1476b03ea(void)

undefined8 FUN_1476b03ea(undefined8 param_1,int param_2)

{
  FUN_1476b0410();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b0410 FUN_1476b0410 body=158 status=ok
// SIG undefined FUN_1476b0410(void)

void FUN_1476b0410(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4e0a60;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140d64a68(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b04aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476b04ae FUN_1476b04ae body=135 status=ok
// SIG undefined FUN_1476b04ae(void)

void FUN_1476b04ae(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b0536 FUN_1476b0536 body=141 status=ok
// SIG undefined FUN_1476b0536(void)

void FUN_1476b0536(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001476b05bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1476b05c4 FUN_1476b05c4 body=187 status=ok
// SIG undefined FUN_1476b05c4(void)

undefined4 * FUN_1476b05c4(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = param_2[4];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  puVar1 = param_1 + 6;
  FUN_1403b8af8(puVar1,param_3);
  *(undefined8 *)(param_1 + 0x26) = 0x10000000000;
  *(undefined8 *)(param_1 + 0x30) = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(puVar1,&local_48);
  local_32 = *(undefined2 *)(param_1 + 1);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(puVar1,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b0680 FUN_1476b0680 body=171 status=ok
// SIG undefined FUN_1476b0680(void)

longlong FUN_1476b0680(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_140732f84(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b072c FUN_1476b072c body=135 status=ok
// SIG undefined FUN_1476b072c(void)

undefined4 * FUN_1476b072c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b07b4 FUN_1476b07b4 body=336 status=ok
// SIG undefined FUN_1476b07b4(void)

void FUN_1476b07b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 2);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 4);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 6);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 8);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (*(short *)(param_1 + 10) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 10);
    FUN_147552f5e(param_2,param_3);
  }
  if (*(short *)(param_1 + 0xc) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 0xc);
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b0906 FUN_1476b0906 body=842 status=ok
// SIG undefined FUN_1476b0906(void)

void FUN_1476b0906(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_148;
  int local_140;
  int local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_f8,*(undefined2 *)(param_3 + 0xc));
  FUN_1476b0d36(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_110,*(undefined2 *)(param_3 + 10));
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(param_3 + 8)) goto LAB_1476b0995;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476b0995:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *(short *)(param_3 + 6)) goto LAB_1476b09cb;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476b09cb:
  local_138 = *puVar9;
  local_140 = *(int *)(lVar4 + 0x14);
  if (local_140 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_3 + 4)) goto LAB_1476b0a0c;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476b0a0c:
  uVar5 = *puVar10;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    local_148 = param_3;
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
    param_3 = local_148;
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *(short *)(param_3 + 2)) goto LAB_1476b0a6a;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476b0a6a:
  iVar3 = *(int *)(lVar4 + 0x14);
  local_178 = *plVar7;
  local_13c = iVar1;
  local_130 = param_1;
  if (iVar3 == 1) {
    local_148 = *plVar7;
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
    local_178 = local_148;
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_c8 = *puVar8;
  local_e0 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0x18)
  ;
  local_a0 = local_140;
  local_88 = local_13c;
  local_80 = local_138;
  local_78 = local_110;
  local_70 = local_108;
  local_110 = 0;
  local_68 = local_100;
  local_60 = local_f8;
  local_58 = local_f0;
  local_f8 = 0;
  local_50 = local_e8;
  local_128 = (undefined4)*param_2;
  uStack_124 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_120 = (undefined4)param_2[1];
  uStack_11c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_158 = local_e8;
  local_160 = local_100;
  local_168 = local_138;
  local_170 = uVar5;
  local_d8 = puVar8;
  local_d0 = iVar3;
  local_c0 = plVar7;
  local_b8 = iVar2;
  local_b0 = local_178;
  local_a8 = puVar10;
  local_98 = uVar5;
  local_90 = puVar9;
  FUN_1406b7dfa(local_130);
  FUN_1476b0c52(&local_e0);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b0c52 FUN_1476b0c52 body=228 status=ok
// SIG undefined FUN_1476b0c52(void)

void FUN_1476b0c52(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x88) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x80) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x70) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x68) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b0d36 FUN_1476b0d36 body=85 status=ok
// SIG undefined FUN_1476b0d36(void)

undefined8 * FUN_1476b0d36(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1476b0d8c(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1476b0d8c FUN_1476b0d8c body=100 status=ok
// SIG undefined FUN_1476b0d8c(void)

longlong * FUN_1476b0d8c(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  UNLOCK();
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = *param_2;
  return param_1;
}



// FUNCTION 1476b0df0 FUN_1476b0df0 body=104 status=ok
// SIG undefined FUN_1476b0df0(void)

void FUN_1476b0df0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144a28284(0xa8);
    FUN_1476b0536(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144a28284(param_1 + 0x15);
  FUN_1476b0536(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b0e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1476b0e58 FUN_1476b0e58 body=95 status=ok
// SIG undefined FUN_1476b0e58(void)

void FUN_1476b0e58(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_1476b0eb8();
  return;
}



// FUNCTION 1476b0eb8 FUN_1476b0eb8 body=204 status=ok
// SIG undefined FUN_1476b0eb8(void)

void FUN_1476b0eb8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  lVar2 = *param_1;
  lVar6 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar2 + 0x50 + lVar6) = 0;
  if (*(longlong *)(lVar2 + 0x48 + lVar6) != 0) {
    FUN_1400020a8();
  }
  FUN_1476a3d68(lVar2 + lVar6 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476b0f84 FUN_1476b0f84 body=476 status=ok
// SIG undefined FUN_1476b0f84(void)

longlong * FUN_1476b0f84(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476b1162();
  if (*param_2 != 0) goto LAB_1476b0fb2;
  plVar3 = (longlong *)FUN_14001cc68(0xd8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4e0ad0;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0xffffffff00000080;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xcc) = 0xffffffff00000000;
  plVar3[2] = (longlong)&PTR_FUN_14a4e0af0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1476b1e40(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1476b1126:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001476b1116:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x0001476b1116;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1476b1126;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_1476b1216(param_1,param_3,&local_50);
LAB_1476b0fb2:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1162 FUN_1476b1162 body=179 status=ok
// SIG undefined FUN_1476b1162(void)

undefined8 * FUN_1476b1162(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1476b11bc;
    }
  }
  uVar6 = 0;
LAB_1476b11bc:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476b1216 FUN_1476b1216 body=184 status=ok
// SIG undefined FUN_1476b1216(void)

void FUN_1476b1216(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b12d0 FUN_1476b12d0 body=9 status=ok
// SIG undefined FUN_1476b12d0(void)

void FUN_1476b12d0(longlong param_1)

{
  FUN_1476b1a66(param_1 + 0x10);
  return;
}



// FUNCTION 1476b12da FUN_1476b12da body=29 status=ok
// SIG undefined FUN_1476b12da(void)

undefined8 FUN_1476b12da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b12f8 FUN_1476b12f8 body=38 status=ok
// SIG undefined FUN_1476b12f8(void)

undefined8 FUN_1476b12f8(undefined8 param_1,int param_2)

{
  FUN_1476b1a66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b132a FUN_1476b132a body=14 status=ok
// SIG undefined FUN_1476b132a(void)

void FUN_1476b132a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 1476b1338 FUN_1476b1338 body=77 status=ok
// SIG undefined FUN_1476b1338(void)

void FUN_1476b1338(longlong param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  FUN_1476b1aea();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1386 FUN_1476b1386 body=912 status=ok
// SIG undefined FUN_1476b1386(void)

ulonglong FUN_1476b1386(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1476b1402;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar13 = *(longlong *)(param_1 + 0x68);
      lVar14 = (longlong)param_2 * 0x20;
      local_60 = *(undefined8 *)(lVar13 + lVar14);
      local_50 = *(char *)(lVar13 + 0x10 + lVar14);
      if (local_50 == '\x01') {
        local_58 = *(undefined8 *)(lVar13 + lVar14 + 8);
      }
      local_48 = *(byte *)(lVar13 + lVar14 + 0x18);
      FUN_14621f65a(param_1 + 0x18);
      if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar14) == '\x01') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar14 + 0x10) = 0;
      }
      FUN_1476b1b72(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x18) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      if ((int)uVar8 < (int)uVar3) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x18);
joined_r0x0001476b1675:
        if (iVar4 <= param_2) {
          FUN_1476b1be4(param_1 + 0xa0);
        }
      }
LAB_1476b15ab:
      if ((local_48 & 1) != 0) {
        FUN_1476b1ce6(&local_58,param_5);
      }
      unaff_RBP = 0;
      goto LAB_1476b1402;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x18 + (longlong)param_2 * 0x20) & 1) == 0)
    goto LAB_1476b1402;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    uVar11 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x18) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar12 < (int)uVar3) && (*(int *)(lVar13 + (ulonglong)uVar12 * 0x18) <= param_2)) &&
       (lVar13 + (ulonglong)uVar12 * 0x18 != -8)) {
      FUN_1476b1ce6();
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x18) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x18) <= param_2)) {
        FUN_1476b1be4(param_1 + 0xa0);
      }
      goto LAB_1476b1402;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x18 + (longlong)param_2 * 0x20);
      if ((bVar2 & 1) == 0) goto LAB_1476b1402;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      *(byte *)(puVar7 + 3) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476b1402;
      lVar13 = (longlong)param_2 * 0x20;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x18 + lVar13);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13);
      if ((bVar2 & 2) == 0) {
        local_60 = *puVar7;
        local_50 = *(char *)(puVar7 + 2);
        if (local_50 == '\x01') {
          local_58 = puVar7[1];
        }
        local_48 = bVar2;
        FUN_14621f65a(param_1 + 0x18);
        if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar13) == '\x01') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar13 + 0x10) = 0;
        }
        FUN_1476b1b72(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar3) {
          uVar10 = (ulonglong)uVar3;
          uVar11 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar12 = (uint)uVar10 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x18) < param_2) {
              uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
            }
            bVar5 = 1 < uVar11;
            uVar11 = (uint)uVar10;
          } while (bVar5);
        }
        if ((int)uVar8 < (int)uVar3) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x18);
          goto joined_r0x0001476b1675;
        }
        goto LAB_1476b15ab;
      }
      if ((bVar2 & 1) == 0) goto LAB_1476b1402;
    }
  }
  FUN_1476b1ce6(puVar7 + 1,param_5);
LAB_1476b1402:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1718 FUN_1476b1718 body=398 status=ok
// SIG undefined FUN_1476b1718(void)

undefined8 FUN_1476b1718(longlong param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar5 = 3;
    if (cVar4 == '\0') goto LAB_1476b17cb;
  }
  if (param_3 == '\x01') {
    lVar10 = (longlong)param_2 * 0x20;
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar10);
    FUN_14621f65a(param_1 + 0x18);
    if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar10) == '\x01') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar10 + 0x10) = 0;
    }
    FUN_1476b1b72(param_1 + 0x68);
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x18) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x18) <= param_2)) {
      FUN_1476b1be4(param_1 + 0xa0);
    }
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      uVar8 = uVar2;
      do {
        uVar7 = uVar7 >> 1;
        uVar9 = (uint)uVar7 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar9 * 0x18) < param_2) {
          uVar6 = (ulonglong)(uVar9 + (uVar8 & 1));
        }
        bVar3 = 1 < uVar8;
        uVar8 = (uint)uVar7;
      } while (bVar3);
    }
    if (((int)uVar6 < (int)uVar2) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x18) <= param_2)) {
      FUN_1476b1be4(param_1 + 0xa0);
    }
    else {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x18 + (longlong)param_2 * 0x20);
      *pbVar1 = *pbVar1 | 2;
    }
    uVar5 = 1;
  }
LAB_1476b17cb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b18b6 FUN_1476b18b6 body=38 status=ok
// SIG undefined FUN_1476b18b6(void)

undefined8 FUN_1476b18b6(undefined8 param_1,int param_2)

{
  FUN_1476b1a66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b18dc FUN_1476b18dc body=52 status=ok
// SIG undefined FUN_1476b18dc(void)

void FUN_1476b18dc(longlong *param_1)

{
  FUN_1476b192a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476b1910 FUN_1476b1910 body=25 status=ok
// SIG undefined FUN_1476b1910(void)

void FUN_1476b1910(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x10);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476b192a FUN_1476b192a body=315 status=ok
// SIG undefined FUN_1476b192a(void)

void FUN_1476b192a(longlong *param_1)

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
      if (*(char *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20) == '\x01') {
        *(undefined1 *)((longlong)iStack_4c * 0x20 + *local_68 + 0x10) = 0;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1476b1a66 FUN_1476b1a66 body=132 status=ok
// SIG undefined FUN_1476b1a66(void)

void FUN_1476b1a66(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4e0b40;
  FUN_1476b1910(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476b18dc(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec2f68(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476b1ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476b1aea FUN_1476b1aea body=135 status=ok
// SIG undefined FUN_1476b1aea(void)

void FUN_1476b1aea(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20) = *param_3;
  local_3c = param_2;
  FUN_14621f65a(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1458160bc(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1b72 FUN_1476b1b72 body=114 status=ok
// SIG undefined FUN_1476b1b72(void)

void FUN_1476b1b72(longlong *param_1,int param_2)

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



// FUNCTION 1476b1be4 FUN_1476b1be4 body=84 status=ok
// SIG undefined FUN_1476b1be4(void)

void FUN_1476b1be4(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x18);
  if (*(char *)((longlong)_Dst + 0x10) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x10) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1476b1c38(param_1);
  return;
}



// FUNCTION 1476b1c38 FUN_1476b1c38 body=62 status=ok
// SIG undefined FUN_1476b1c38(void)

void FUN_1476b1c38(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476b1c76(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1476b1c76 FUN_1476b1c76 body=112 status=ok
// SIG undefined FUN_1476b1c76(void)

ulonglong FUN_1476b1c76(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476b1cb0;
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
LAB_1476b1cb0:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476b1ce6 FUN_1476b1ce6 body=216 status=ok
// SIG undefined FUN_1476b1ce6(void)

void FUN_1476b1ce6(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14625d148(param_2,&local_50);
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
  if ((local_50 != 0) && (*(char *)(param_1 + 1) == '\x01')) {
    uVar3 = *param_1;
    uVar4 = FUN_14479d2ce(local_50 + 0x18);
    FUN_1476b1dc0(uVar4,(int)uVar3);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1dc0 FUN_1476b1dc0 body=127 status=ok
// SIG undefined FUN_1476b1dc0(void)

void FUN_1476b1dc0(longlong *param_1,double param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if ((0.0 < param_2) && (iVar1 != 3)) {
        plVar3 = (longlong *)FUN_14494016c(lVar2,0,1);
        if (plVar3 != (longlong *)0x0) {
          *(float *)((longlong)plVar3 + 0x4cc) = (float)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001476b1e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x578))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1476b1e40 FUN_1476b1e40 body=167 status=ok
// SIG undefined FUN_1476b1e40(void)

void FUN_1476b1e40(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476b1ebb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476b1ebb;
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
LAB_1476b1ebb:
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
                    /* WARNING: Could not recover jumptable at 0x0001476b1edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476b1ee8 FUN_1476b1ee8 body=184 status=ok
// SIG undefined FUN_1476b1ee8(void)

undefined8 * FUN_1476b1ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b1fa2 FUN_1476b1fa2 body=593 status=ok
// SIG undefined FUN_1476b1fa2(void)

int * FUN_1476b1fa2(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
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
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_1476b223c(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476b1fe0;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e0b90;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0ba8;
  plVar8[3] = *param_7;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x38);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x4c);
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476b22ea;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 8;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476b2180;
    }
  }
  else {
LAB_1476b2180:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476b1fe0:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476b21f4 FUN_1476b21f4 body=72 status=ok
// SIG undefined FUN_1476b21f4(void)

void FUN_1476b21f4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = *(longlong *)(lVar1 + 0x20);
  uVar3 = (ulonglong)*(uint *)*param_2;
  uVar5 = (ulonglong)((uint *)*param_2)[1];
  lVar2 = lVar4 + uVar3;
  if (uVar3 == 0xffffffff) {
    lVar2 = 0;
  }
  lVar4 = lVar4 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar4 = 0;
  }
  FUN_1476b23bc(param_3 + 8,lVar1,lVar2,lVar4);
  return;
}



// FUNCTION 1476b223c FUN_1476b223c body=112 status=ok
// SIG undefined FUN_1476b223c(void)

undefined8 FUN_1476b223c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
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
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1476b22ac FUN_1476b22ac body=1 status=ok
// SIG undefined FUN_1476b22ac(void)

void FUN_1476b22ac(void)

{
  return;
}



// FUNCTION 1476b22ae FUN_1476b22ae body=29 status=ok
// SIG undefined FUN_1476b22ae(void)

undefined8 FUN_1476b22ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b22cc FUN_1476b22cc body=29 status=ok
// SIG undefined FUN_1476b22cc(void)

undefined8 FUN_1476b22cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476b2302 FUN_1476b2302 body=186 status=ok
// SIG undefined FUN_1476b2302(void)

void FUN_1476b2302(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1476b2353;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1476b2353:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1476b239f;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1476b239f:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476b23bc FUN_1476b23bc body=183 status=ok
// SIG undefined FUN_1476b23bc(void)

void FUN_1476b23bc(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    uVar8 = 0;
    do {
      lVar6 = (ulonglong)*(ushort *)(param_3 + uVar8 * 4) * 0x128;
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 8) + 0x100 + lVar6);
      plVar5 = *(longlong **)(*(longlong *)(*param_1 + 8) + 0x108 + lVar6);
      if (plVar5 == (longlong *)0x0) {
        uVar7 = FUN_14479d2ce(lVar4 + 0x18);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        uVar7 = FUN_14479d2ce(lVar4 + 0x18);
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
      FUN_1476b1dc0(uVar7,*(undefined8 *)(param_4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  return;
}



// FUNCTION 1476b2474 FUN_1476b2474 body=119 status=ok
// SIG undefined FUN_1476b2474(void)

undefined4 * FUN_1476b2474(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476b24ec FUN_1476b24ec body=183 status=ok
// SIG undefined FUN_1476b24ec(void)

void FUN_1476b24ec(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b25a4 FUN_1476b25a4 body=334 status=ok
// SIG undefined FUN_1476b25a4(void)

void FUN_1476b25a4(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_3[1]) goto LAB_1476b25eb;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1476b25eb:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_3) goto LAB_1476b2621;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1476b2621:
  uVar4 = *puVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_68 = *puVar6;
  local_78 = puVar6;
  local_70 = iVar2;
  local_60 = puVar7;
  local_58 = iVar1;
  local_50 = uVar4;
  FUN_1476b23bc(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_68,
                uVar4);
  FUN_1476b26f4(&local_78);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476b26f4 FUN_1476b26f4 body=85 status=ok
// SIG undefined FUN_1476b26f4(void)

void FUN_1476b26f4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476b273b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476b274a FUN_1476b274a body=335 status=ok
// SIG undefined FUN_1476b274a(void)

void FUN_1476b274a(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined2 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [40];
  undefined2 *local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((**(int **)(param_1 + 0xb0) != 0) || (param_3 != '\0')) {
    local_88 = 0x10000000000;
    local_60 = 0x10000000000;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    lVar1 = FUN_14009d2a0();
    local_b4 = *(undefined2 *)(lVar1 + 0x11a);
    local_c8 = &uStack_b2;
    local_d0 = &local_b4;
    FUN_1447c44f6(local_a8,&local_d0);
    local_d0 = param_5;
    FUN_1476b289a(param_1,&local_ac,&local_d0);
    local_b4 = 0xffff;
    uStack_b2 = 0xffff;
    uStack_b0 = *(undefined4 *)(param_1 + 0xc0);
    uVar2 = FUN_140732858(*(undefined8 *)(param_1 + 0xb0));
    local_d0 = (undefined2 *)CONCAT44(uStack_b0,CONCAT22(uStack_b2,local_b4));
    local_c8 = (undefined2 *)CONCAT44(param_4,local_ac);
    local_c0 = param_3;
    local_b6 = param_2;
    FUN_1449da5a2(uVar2,&local_b6,&local_d0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b289a FUN_1476b289a body=246 status=ok
// SIG undefined FUN_1476b289a(void)

longlong * FUN_1476b289a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) &&
             (lVar4 = plVar1[1], *(int *)param_2 = (int)lVar4, (int)lVar4 != -1))
          goto LAB_1476b296b;
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  FUN_1476b2992(param_1 + 0x68,&local_40);
  *local_38 = lVar2;
  *(undefined1 *)(local_38 + 2) = 0;
  *(undefined1 *)(local_38 + 3) = 0;
  *(int *)param_2 = (int)local_40;
  local_40 = param_3;
  local_38 = param_2;
  FUN_1458160bc((longlong *)(param_1 + 0x18),local_44,&local_40,0);
LAB_1476b296b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b2992 FUN_1476b2992 body=229 status=ok
// SIG undefined FUN_1476b2992(void)

int * FUN_1476b2992(longlong *param_1,int *param_2)

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



// FUNCTION 1476b2a78 FUN_1476b2a78 body=153 status=ok
// SIG undefined FUN_1476b2a78(void)

byte FUN_1476b2a78(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = *(int **)(param_1 + 0xb0);
  bVar3 = 1;
  if (*piVar1 == 0) {
    local_28 = *param_2;
    lVar2 = param_1;
    FUN_1476b2c5a(param_1,&local_2c);
    bVar3 = (byte)lVar2;
    local_38 = 0xffffffff;
    local_34 = *(undefined4 *)(param_1 + 0xc0);
    local_30 = local_2c;
    if (local_2c != -1) {
      lVar2 = FUN_1400e4054(piVar1,&local_38);
      bVar3 = lVar2 != 0;
    }
    bVar3 = local_2c != -1 & bVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1476b2b12 FUN_1476b2b12 body=137 status=ok
// SIG undefined FUN_1476b2b12(void)

ulonglong FUN_1476b2b12(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar8;
  uint uVar9;
  undefined7 uVar7;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x18 + (longlong)param_2 * 0x20);
  uVar7 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8);
  uVar6 = CONCAT71(uVar7,bVar2);
  if ((param_3 != '\x01') && (uVar6 = CONCAT71(uVar7,1), ((bVar2 & 2) == 0 & bVar2) == 0)) {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    uVar8 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar8 >> 1) + uVar9;
        if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x18) < param_2) {
          uVar9 = uVar1 + (uVar8 & 1);
        }
        bVar5 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar5);
    }
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar4 + (ulonglong)uVar9 * 0x18) <= param_2)) {
      lVar4 = lVar4 + (ulonglong)uVar9 * 0x18;
      uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != -8);
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1476b2b9c FUN_1476b2b9c body=189 status=ok
// SIG undefined FUN_1476b2b9c(void)

void FUN_1476b2b9c(longlong param_1,int param_2,char param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 != '\x01') {
    if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
      FUN_1476b2cd6(param_1 + 0xa0,&local_c,param_4);
      goto LAB_1476b2be6;
    }
    if ((undefined8 *)(lVar1 + 8) != param_4) {
      if (*(char *)(param_4 + 1) == '\x01') {
        *(undefined8 *)(lVar1 + 8) = *param_4;
        uVar2 = 1;
      }
      else {
        if (*(char *)(lVar1 + 0x10) != '\x01') goto LAB_1476b2c22;
        uVar2 = 0;
      }
      *(undefined1 *)(lVar1 + 0x10) = uVar2;
    }
LAB_1476b2c22:
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 1;
    goto LAB_1476b2be6;
  }
  if ((undefined8 *)(lVar1 + 8) != param_4) {
    if (*(char *)(param_4 + 1) == '\x01') {
      *(undefined8 *)(lVar1 + 8) = *param_4;
      uVar2 = 1;
    }
    else {
      if (*(char *)(lVar1 + 0x10) != '\x01') goto LAB_1476b2be2;
      uVar2 = 0;
    }
    *(undefined1 *)(lVar1 + 0x10) = uVar2;
  }
LAB_1476b2be2:
  *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 3;
LAB_1476b2be6:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476b2c5a FUN_1476b2c5a body=124 status=ok
// SIG undefined FUN_1476b2c5a(void)

void FUN_1476b2c5a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar2 = *param_3;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 != (longlong *)0x0) {
            uVar3 = (undefined4)plVar1[1];
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 1476b2cd6 FUN_1476b2cd6 body=232 status=ok
// SIG undefined FUN_1476b2cd6(void)

void FUN_1476b2cd6(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar8 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x18) <= *param_2)) {
      piVar9 = (int *)(lVar7 + (ulonglong)uVar8 * 0x18);
      FUN_1476b1910(piVar9,1);
      goto LAB_1476b2d86;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1476b2dbe(param_1,uVar3);
    lVar7 = *param_1;
  }
  lVar5 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar7 + lVar5 + 0x18),(void *)(lVar7 + lVar5),(ulonglong)(uVar3 - uVar8) * 0x18);
  piVar9 = (int *)(lVar5 + *param_1);
LAB_1476b2d86:
  *piVar9 = *param_2;
  cVar2 = *(char *)(param_3 + 1);
  *(char *)(piVar9 + 4) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined8 *)(piVar9 + 2) = *param_3;
  }
  return;
}



// FUNCTION 1476b2dbe FUN_1476b2dbe body=147 status=ok
// SIG undefined FUN_1476b2dbe(void)

void FUN_1476b2dbe(longlong param_1,int param_2)

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


