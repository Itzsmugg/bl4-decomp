// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147695118 FUN_147695118 body=184 status=ok
// SIG undefined FUN_147695118(void)

undefined8 * FUN_147695118(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1476951d2 FUN_1476951d2 body=112 status=ok
// SIG undefined FUN_1476951d2(void)

undefined8 FUN_1476951d2(ushort *param_1,undefined8 param_2)

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



// FUNCTION 147695242 FUN_147695242 body=119 status=ok
// SIG undefined FUN_147695242(void)

undefined4 * FUN_147695242(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 1476952ba FUN_1476952ba body=183 status=ok
// SIG undefined FUN_1476952ba(void)

void FUN_1476952ba(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 147695372 FUN_147695372 body=125 status=ok
// SIG undefined FUN_147695372(void)

void FUN_147695372(longlong param_1,longlong *param_2,undefined8 param_3)

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
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476953f0 FUN_1476953f0 body=347 status=ok
// SIG undefined FUN_1476953f0(void)

void FUN_1476953f0(longlong param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_4[1]) goto LAB_14769542b;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14769542b:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_4) goto LAB_147695452;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147695452:
  lVar6 = *plVar9;
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  local_70 = *plVar8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      uVar2 = *(ushort *)(local_70 + 2 + uVar7 * 4);
      if ((int)(uint)uVar2 < (int)(*(longlong **)(param_1 + 8))[1]) {
        lVar5 = **(longlong **)(param_1 + 8);
        *(char *)(lVar6 + uVar7) =
             (char)((uint)*(byte *)(lVar5 + (ulonglong)uVar2 * 8) /
                   *(uint *)(lVar5 + 4 + (ulonglong)uVar2 * 8));
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  local_80 = plVar8;
  local_78 = iVar4;
  local_68 = plVar9;
  local_60 = param_3;
  local_58 = iVar3;
  local_50 = lVar6;
  FUN_14769554c(&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769554c FUN_14769554c body=108 status=ok
// SIG undefined FUN_14769554c(void)

void FUN_14769554c(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001476955aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476955b8 FUN_1476955b8 body=62 status=ok
// SIG undefined FUN_1476955b8(void)

void FUN_1476955b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476955f6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1476955f6 FUN_1476955f6 body=93 status=ok
// SIG undefined FUN_1476955f6(void)

ulonglong FUN_1476955f6(uint param_1,uint param_2)

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



// FUNCTION 147695654 FUN_147695654 body=48 status=ok
// SIG undefined FUN_147695654(void)

void FUN_147695654(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147695684 FUN_147695684 body=48 status=ok
// SIG undefined FUN_147695684(void)

void FUN_147695684(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1476956b4 FUN_1476956b4 body=1 status=ok
// SIG undefined FUN_1476956b4(void)

void FUN_1476956b4(void)

{
  return;
}



// FUNCTION 1476956b6 FUN_1476956b6 body=29 status=ok
// SIG undefined FUN_1476956b6(void)

undefined8 FUN_1476956b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476956d4 FUN_1476956d4 body=1 status=ok
// SIG undefined FUN_1476956d4(void)

void FUN_1476956d4(void)

{
  return;
}



// FUNCTION 1476956d6 FUN_1476956d6 body=29 status=ok
// SIG undefined FUN_1476956d6(void)

undefined8 FUN_1476956d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476956f4 FUN_1476956f4 body=614 status=ok
// SIG undefined FUN_1476956f4(void)

int * FUN_1476956f4(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar8 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar8 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar8 + 0x20))
       && ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14a4d88e0;
      plVar9[2] = (longlong)&PTR_FUN_14a4d88f8;
      plVar9[3] = *param_7;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)(plVar9 + 4) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)plVar9 + 0x24) = uVar5;
      *(undefined4 *)(plVar9 + 5) = uVar6;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar7;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
      local_50 = 0;
      FUN_1400abb7c(local_70,param_1 + 0x38);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x4c);
      FUN_140dba9e6(local_70,*param_1);
      if (param_1[1] != 0xffff) {
        FUN_140dba9e6(local_70);
      }
      local_b8 = &local_b0;
      local_c0 = &LAB_147695a24;
      local_a0 = *(byte *)(param_6 + 8);
      local_b0 = param_1;
      (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_100 = &local_c0;
      local_108 = local_a8;
      local_f8 = param_1 + 8;
      local_f0 = local_70;
      local_e8 = local_98;
      local_d0 = plVar9 + 2;
      local_c8 = plVar9;
      FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
      iVar4 = *param_2;
      if (*param_2 == -1) {
        if ((*(byte *)(param_5 + 1) & 4) != 0) {
          FUN_145c71394(param_4,&local_d4);
          *param_2 = local_d4;
          iVar4 = local_d4;
          if (local_d4 != -1) goto LAB_1476958b8;
        }
      }
      else {
LAB_1476958b8:
        FUN_1407ce0e2(param_4,iVar4,0xffffffff);
        FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
      goto LAB_147695900;
    }
  }
  *param_2 = -1;
LAB_147695900:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14769595c FUN_14769595c body=137 status=ok
// SIG undefined FUN_14769595c(void)

void FUN_14769595c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_28 = (int)param_1[1];
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_30 + 0x60) + (longlong)local_28 * 8) + 0x20);
  uVar2 = (ulonglong)*(uint *)*param_2;
  uVar3 = (ulonglong)((uint *)*param_2)[1];
  lVar1 = lVar4 + uVar2;
  if (uVar2 == 0xffffffff) {
    lVar1 = 0;
  }
  lVar4 = lVar4 + uVar3;
  if (uVar3 == 0xffffffff) {
    lVar4 = 0;
  }
  FUN_147695afc(param_3 + 8,&local_30,lVar1,lVar4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476959e6 FUN_1476959e6 body=1 status=ok
// SIG undefined FUN_1476959e6(void)

void FUN_1476959e6(void)

{
  return;
}



// FUNCTION 1476959e8 FUN_1476959e8 body=29 status=ok
// SIG undefined FUN_1476959e8(void)

undefined8 FUN_1476959e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147695a06 FUN_147695a06 body=29 status=ok
// SIG undefined FUN_147695a06(void)

undefined8 FUN_147695a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147695a3c FUN_147695a3c body=191 status=ok
// SIG undefined FUN_147695a3c(void)

void FUN_147695a3c(short *param_1,longlong param_2,longlong *param_3)

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
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_147695a8d;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_147695a8d:
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
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) {
        if (puVar2 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar2 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
             (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 147695afc FUN_147695afc body=428 status=ok
// SIG undefined FUN_147695afc(void)

void FUN_147695afc(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar5 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar5 + 0x28);
    puVar14 = puVar9 + (ulonglong)*(ushort *)(lVar5 + 0xc) * 4;
    do {
      uVar2 = *(uint *)((longlong *)*param_1 + 1);
      lVar10 = *(longlong *)*param_1;
      uVar13 = 0;
      if (0 < (int)uVar2) {
        uVar13 = 0;
        uVar12 = uVar2;
        do {
          uVar1 = (uVar12 >> 1) + uVar13;
          if (*(ushort *)(lVar10 + (ulonglong)uVar1 * 0x20) < *(ushort *)((longlong)puVar9 + 0x1e))
          {
            uVar13 = uVar1 + (uVar12 & 1);
          }
          bVar7 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar7);
      }
      if (((int)uVar13 < (int)uVar2) &&
         (*(ushort *)(lVar10 + (ulonglong)uVar13 * 0x20) <= *(ushort *)((longlong)puVar9 + 0x1e))) {
        lVar10 = lVar10 + (ulonglong)uVar13 * 0x20;
        lVar11 = lVar10 + 8;
        if (lVar11 != 0) {
          if (*(ushort *)(lVar5 + 0xc) != 0) {
            puVar15 = *(undefined8 **)(lVar5 + 0x28);
            lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar15 + 0x1e) == *(short *)(lVar10 + 0x18))
              goto LAB_147695bc1;
              puVar15 = puVar15 + 4;
              lVar8 = lVar8 + -0x20;
            } while (lVar8 != 0);
          }
          puVar15 = (undefined8 *)0x0;
LAB_147695bc1:
          iVar3 = *(int *)(lVar5 + 0x14);
          if (iVar3 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
          }
          LOCK();
          *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
          UNLOCK();
          uVar6 = *puVar15;
          iVar4 = *(int *)(lVar5 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
          }
          LOCK();
          *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
          UNLOCK();
          FUN_147695ca8(lVar5,*puVar9,uVar6,param_3,param_4,lVar11);
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + -1;
            UNLOCK();
            if (iVar4 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar9 + 1));
            }
          }
          if (puVar15 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + -1;
            UNLOCK();
            if (iVar3 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 1));
            }
          }
        }
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar14);
  }
  return;
}



// FUNCTION 147695ca8 FUN_147695ca8 body=358 status=ok
// SIG undefined FUN_147695ca8(void)

void FUN_147695ca8(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fc4) && (FUN_144b3d300(&DAT_14cab5fc4), DAT_14cab5fc4 == -1)) {
    plVar1 = (longlong *)FUN_14099c56c();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    DAT_14cab5fc0 = *(undefined1 *)(lVar2 + 100);
    _Init_thread_footer(&DAT_14cab5fc4);
  }
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0xe);
  if (param_5 == 0) {
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *param_6;
        lVar5 = (ulonglong)*(ushort *)(param_4 + 2 + uVar4 * 4) * 0x10;
        *(double *)(lVar2 + lVar5) =
             (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)) +
             *(double *)(lVar2 + lVar5);
        *(float *)(lVar2 + 8 + lVar5) = *(float *)(lVar2 + 8 + lVar5) + 1.0;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  else if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *param_6;
      fVar6 = (float)*(double *)(param_5 + uVar4 * 8);
      lVar5 = (ulonglong)*(ushort *)(param_4 + 2 + uVar4 * 4) * 0x10;
      *(double *)(lVar2 + lVar5) =
           (double)fVar6 * (*(double *)(param_2 + uVar4 * 8) - *(double *)(param_3 + uVar4 * 8)) +
           *(double *)(lVar2 + lVar5);
      *(float *)(lVar2 + 8 + lVar5) = fVar6 + *(float *)(lVar2 + 8 + lVar5);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 147695e0e FUN_147695e0e body=190 status=ok
// SIG undefined FUN_147695e0e(void)

undefined8 * FUN_147695e0e(undefined8 *param_1,undefined8 *param_2)

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
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147695ece FUN_147695ece body=589 status=ok
// SIG undefined FUN_147695ece(void)

int * FUN_147695ece(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
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
     (cVar7 = FUN_1476961c4(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147695f0c;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d8900;
  plVar8[2] = (longlong)&PTR_FUN_14a4d8918;
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
  FUN_147696234(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476962b6;
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
      if (local_d4 != -1) goto LAB_1476960a8;
    }
  }
  else {
LAB_1476960a8:
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
LAB_147695f0c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14769611c FUN_14769611c body=166 status=ok
// SIG undefined FUN_14769611c(void)

void FUN_14769611c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (uint *)*param_2;
  local_40 = *param_1;
  local_38 = (int)param_1[1];
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(local_40 + 0x60) + (longlong)local_38 * 8) + 0x20);
  lVar5 = 0;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar5;
  }
  local_34 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar4 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_48 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  FUN_1476963da(param_3 + 8,&local_40,lVar3,lVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476961c4 FUN_1476961c4 body=112 status=ok
// SIG undefined FUN_1476961c4(void)

undefined8 FUN_1476961c4(ushort *param_1,undefined8 param_2)

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



// FUNCTION 147696234 FUN_147696234 body=67 status=ok
// SIG undefined FUN_147696234(void)

void FUN_147696234(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  if (param_1[2] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 147696278 FUN_147696278 body=1 status=ok
// SIG undefined FUN_147696278(void)

void FUN_147696278(void)

{
  return;
}



// FUNCTION 14769627a FUN_14769627a body=29 status=ok
// SIG undefined FUN_14769627a(void)

undefined8 FUN_14769627a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147696298 FUN_147696298 body=29 status=ok
// SIG undefined FUN_147696298(void)

undefined8 FUN_147696298(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476962ce FUN_1476962ce body=268 status=ok
// SIG undefined FUN_1476962ce(void)

void FUN_1476962ce(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_14769631f;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14769631f:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_147696373;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147696373:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1476963da FUN_1476963da body=280 status=ok
// SIG undefined FUN_1476963da(void)

void FUN_1476963da(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x28);
    puVar11 = puVar10 + (ulonglong)*(ushort *)(lVar3 + 0xc) * 4;
    do {
      uVar1 = *(uint *)((longlong *)*param_1 + 1);
      lVar9 = *(longlong *)*param_1;
      if ((int)uVar1 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        uVar6 = (ulonglong)uVar1;
        uVar7 = uVar1;
        do {
          uVar6 = uVar6 >> 1;
          uVar8 = (uint)uVar6 + (int)uVar5;
          if (*(ushort *)(lVar9 + (ulonglong)uVar8 * 0x18) < *(ushort *)((longlong)puVar10 + 0x1e))
          {
            uVar5 = (ulonglong)(uVar8 + (uVar7 & 1));
          }
          bVar4 = 1 < uVar7;
          uVar7 = (uint)uVar6;
        } while (bVar4);
      }
      if ((((int)uVar5 < (int)uVar1) &&
          (*(ushort *)(lVar9 + uVar5 * 0x18) <= *(ushort *)((longlong)puVar10 + 0x1e))) &&
         (lVar9 = lVar9 + uVar5 * 0x18 + 8, lVar9 != 0)) {
        iVar2 = *(int *)(lVar3 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
        }
        LOCK();
        *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
        UNLOCK();
        FUN_1476964f2(lVar3,*puVar10,param_4,param_3,param_5,lVar9);
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + -1;
          UNLOCK();
          if (iVar2 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar10 + 1));
          }
        }
      }
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar11);
  }
  return;
}



// FUNCTION 1476964f2 FUN_1476964f2 body=568 status=ok
// SIG undefined FUN_1476964f2(void)

void FUN_1476964f2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  char local_60 [8];
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fcc) && (FUN_144b3d300(&DAT_14cab5fcc), DAT_14cab5fcc == -1)) {
    plVar3 = (longlong *)FUN_14099c56c();
    lVar1 = plVar3[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar1 = plVar3[0x22];
    }
    DAT_14cab5fc8 = *(undefined1 *)(lVar1 + 100);
    _Init_thread_footer(&DAT_14cab5fcc);
  }
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0xe);
  lVar1 = FUN_14009d2a0();
  if (*(ushort *)(param_1 + 0xc) == 0) {
    bVar7 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == *(short *)(lVar1 + 0x114)) goto LAB_14769657a;
      lVar2 = lVar2 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    lVar2 = 0;
LAB_14769657a:
    bVar7 = lVar2 != 0;
  }
  lVar1 = FUN_14009d2a0();
  if (*(ushort *)(param_1 + 0xc) == 0) {
    bVar8 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == *(short *)(lVar1 + 0x118)) goto LAB_1476965b4;
      lVar2 = lVar2 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    lVar2 = 0;
LAB_1476965b4:
    bVar8 = lVar2 != 0;
  }
  if ((bVar7 != false) || (bVar8)) {
    if (param_5 == 0) {
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          local_58 = *(undefined8 *)(param_2 + uVar6 * 8);
          local_50 = 1.0;
          local_4c = *(undefined4 *)(param_3 + uVar6 * 4);
          local_60[0] = bVar7;
          FUN_14769672c((ulonglong)*(ushort *)(param_4 + 2 + uVar6 * 4) * 0x10 + *param_6,&local_4c,
                        local_60);
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
    }
    else if (uVar5 != 0) {
      uVar6 = 0;
      do {
        local_58 = *(undefined8 *)(param_2 + uVar6 * 8);
        local_50 = (float)*(double *)(param_5 + uVar6 * 8);
        local_4c = *(undefined4 *)(param_3 + uVar6 * 4);
        local_60[0] = bVar7;
        FUN_14769672c((ulonglong)*(ushort *)(param_4 + 2 + uVar6 * 4) * 0x10 + *param_6,&local_4c,
                      local_60);
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769672c FUN_14769672c body=217 status=ok
// SIG undefined FUN_14769672c(void)

void FUN_14769672c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x20) < iVar5) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar9 * 0x20) <= iVar5)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar9 * 0x20);
      goto LAB_1476967d1;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147696806(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar10 = (ulonglong)uVar9 * 0x20;
  memmove((void *)(lVar8 + lVar10 + 0x20),(void *)(lVar8 + lVar10),(ulonglong)(uVar2 - uVar9) << 5);
  piVar7 = (int *)(lVar10 + *param_1);
  iVar5 = *param_2;
LAB_1476967d1:
  *piVar7 = iVar5;
  uVar4 = param_3[1];
  *(undefined8 *)(piVar7 + 2) = *param_3;
  *(undefined8 *)(piVar7 + 4) = uVar4;
  *(undefined8 *)(piVar7 + 6) = param_3[2];
  return;
}



// FUNCTION 147696806 FUN_147696806 body=132 status=ok
// SIG undefined FUN_147696806(void)

void FUN_147696806(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14769688e FUN_14769688e body=29 status=ok
// SIG undefined FUN_14769688e(void)

undefined8 FUN_14769688e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476968ac FUN_1476968ac body=609 status=ok
// SIG undefined FUN_1476968ac(void)

int * FUN_1476968ac(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar8 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar8 + 0x20) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar8 + 0x20))
       && ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar9 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14a4d8940;
      plVar9[2] = (longlong)&PTR_FUN_14a4d8958;
      lVar8 = *param_8;
      plVar9[3] = *param_7;
      plVar9[4] = lVar8;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)(plVar9 + 5) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar5;
      *(undefined4 *)(plVar9 + 6) = uVar6;
      *(undefined4 *)((longlong)plVar9 + 0x34) = uVar7;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
      local_50 = 0;
      FUN_1400abb7c(local_70,param_1 + 0x38);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x4c);
      FUN_140dba9e6(local_70,*param_1);
      local_b8 = &local_b0;
      local_c0 = &LAB_147696bc4;
      local_a0 = *(byte *)(param_6 + 8);
      local_b0 = param_1;
      (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_100 = &local_c0;
      local_108 = local_a8;
      local_f8 = param_1 + 8;
      local_f0 = local_70;
      local_e8 = local_98;
      local_d0 = plVar9 + 2;
      local_c8 = plVar9;
      FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
      iVar4 = *param_2;
      if (*param_2 == -1) {
        if ((*(byte *)(param_5 + 1) & 4) != 0) {
          FUN_145c71394(param_4,&local_d4);
          *param_2 = local_d4;
          iVar4 = local_d4;
          if (local_d4 != -1) goto LAB_147696a6b;
        }
      }
      else {
LAB_147696a6b:
        FUN_1407ce0e2(param_4,iVar4,0xffffffff);
        FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
      goto LAB_147696ab3;
    }
  }
  *param_2 = -1;
LAB_147696ab3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147696b0e FUN_147696b0e body=119 status=ok
// SIG undefined FUN_147696b0e(void)

void FUN_147696b0e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_18 = (int)param_1[1];
  local_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = 0;
  if ((ulonglong)*(uint *)*param_2 != 0xffffffff) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_20 + 0x60) + (longlong)local_18 * 8) + 0x20) +
            (ulonglong)*(uint *)*param_2;
  }
  FUN_147696c44(param_3 + 8,&local_20,lVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147696b86 FUN_147696b86 body=1 status=ok
// SIG undefined FUN_147696b86(void)

void FUN_147696b86(void)

{
  return;
}



// FUNCTION 147696b88 FUN_147696b88 body=29 status=ok
// SIG undefined FUN_147696b88(void)

undefined8 FUN_147696b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147696ba6 FUN_147696ba6 body=29 status=ok
// SIG undefined FUN_147696ba6(void)

undefined8 FUN_147696ba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147696bdc FUN_147696bdc body=103 status=ok
// SIG undefined FUN_147696bdc(void)

void FUN_147696bdc(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,1);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar2 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == *param_1) goto LAB_147696c24;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_147696c24:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(*param_3 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147696c44 FUN_147696c44 body=559 status=ok
// SIG undefined FUN_147696c44(void)

void FUN_147696c44(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5fd4) {
    FUN_144b3d300(&DAT_14cab5fd4);
    if (DAT_14cab5fd4 == -1) {
      plVar6 = (longlong *)FUN_14099c56c();
      lVar7 = plVar6[0x22];
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar7 = plVar6[0x22];
      }
      DAT_14cab5fd0 = *(undefined1 *)(lVar7 + 100);
      _Init_thread_footer(&DAT_14cab5fd4);
    }
  }
  lVar7 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar8 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  lVar11 = 0;
  lVar4 = FUN_14009d2a0();
  do {
    uVar1 = *(ushort *)(lVar4 + 0xbc + lVar11 * 2);
    if (((uVar1 != 0xffff) &&
        (uVar2 = *(uint *)(lVar8 + 0x20), uVar10 = (uint)uVar1,
        uVar2 != uVar10 && (int)(uint)uVar1 <= (int)uVar2)) &&
       ((*(uint *)(lVar8 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0)) {
      FUN_145f9403c(*param_1,&local_70,uVar10);
      if (((local_70 != 0) || (local_68 != 0)) ||
         ((local_60 != 0 || ((local_58 != 0 || (local_50 != 0)))))) {
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar6 = *(longlong **)(lVar7 + 0x28);
          lVar5 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar6 + 0x1e) == uVar1) goto LAB_147696d4c;
            plVar6 = plVar6 + 4;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        plVar6 = (longlong *)0x0;
LAB_147696d4c:
        local_88 = param_1[1];
        iVar3 = *(int *)(lVar7 + 0x14);
        local_80 = param_1;
        if (iVar3 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
        }
        LOCK();
        *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
        UNLOCK();
        if (*(short *)(lVar7 + 0xe) != 0) {
          lVar5 = *plVar6;
          uVar9 = 0;
          do {
            FUN_1476629dc(&local_70,*(undefined2 *)(local_78 + 2 + uVar9 * 4),lVar5);
            uVar9 = uVar9 + 1;
            lVar5 = lVar5 + 8;
          } while (uVar9 < *(ushort *)(lVar7 + 0xe));
        }
        param_1 = local_80;
        if (plVar6 != (longlong *)0x0) {
          uVar9 = plVar6[2];
          if ((ulonglong)plVar6[2] < local_88) {
            uVar9 = local_88;
          }
          plVar6[2] = uVar9;
          LOCK();
          *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
          UNLOCK();
          if (iVar3 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
          }
        }
      }
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 9) {
      if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147696e74 FUN_147696e74 body=119 status=ok
// SIG undefined FUN_147696e74(void)

undefined4 * FUN_147696e74(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 147696eec FUN_147696eec body=187 status=ok
// SIG undefined FUN_147696eec(void)

void FUN_147696eec(short *param_1,undefined8 param_2,undefined8 param_3)

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
  if (param_1[1] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[1];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147696fa8 FUN_147696fa8 body=259 status=ok
// SIG undefined FUN_147696fa8(void)

void FUN_147696fa8(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_78,param_3[1]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_147697006;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147697006:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_50 = *puVar4;
  local_48 = local_78;
  local_40 = local_70;
  local_38 = local_68;
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = puVar4;
  local_58 = iVar1;
  FUN_1476970ac(param_1);
  FUN_1476971b0(&local_60);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476970ac FUN_1476970ac body=260 status=ok
// SIG undefined FUN_1476970ac(void)

void FUN_1476970ac(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    puVar10 = puVar9 + (ulonglong)*(ushort *)(lVar2 + 0xc) * 4;
    do {
      uVar1 = *(uint *)((longlong *)*param_1 + 1);
      lVar5 = *(longlong *)*param_1;
      if ((int)uVar1 < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar6 = (ulonglong)uVar1;
        uVar7 = uVar1;
        do {
          uVar6 = uVar6 >> 1;
          uVar8 = (uint)uVar6 + (int)uVar4;
          if (*(ushort *)(lVar5 + (ulonglong)uVar8 * 0x18) < *(ushort *)((longlong)puVar9 + 0x1e)) {
            uVar4 = (ulonglong)(uVar8 + (uVar7 & 1));
          }
          bVar3 = 1 < uVar7;
          uVar7 = (uint)uVar6;
        } while (bVar3);
      }
      if ((((int)uVar4 < (int)uVar1) &&
          (*(ushort *)(lVar5 + uVar4 * 0x18) <= *(ushort *)((longlong)puVar9 + 0x1e))) &&
         (lVar5 = lVar5 + uVar4 * 0x18 + 8, lVar5 != 0)) {
        if (*(int *)(lVar2 + 0x14) != 0) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        FUN_147697206(lVar2,*puVar9,param_3,param_4,lVar5);
        if (*(int *)(lVar2 + 0x14) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar10);
  }
  return;
}



// FUNCTION 1476971b0 FUN_1476971b0 body=85 status=ok
// SIG undefined FUN_1476971b0(void)

void FUN_1476971b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001476971f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147697206 FUN_147697206 body=406 status=ok
// SIG undefined FUN_147697206(void)

void FUN_147697206(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fdc) && (FUN_144b3d300(&DAT_14cab5fdc), DAT_14cab5fdc == -1)) {
    plVar3 = (longlong *)FUN_14099c56c();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    DAT_14cab5fd8 = *(undefined1 *)(lVar4 + 100);
    _Init_thread_footer(&DAT_14cab5fdc);
  }
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0xe);
  if (param_4 == 0) {
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
        if ((int)param_5[1] <= (int)(uint)uVar1) {
          FUN_146020b32(param_5,uVar1 + 1,0);
          uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
        }
        lVar4 = *param_5;
        lVar2 = (ulonglong)uVar1 * 0x10;
        *(double *)(lVar4 + lVar2) = *(double *)(param_2 + uVar5 * 8) + *(double *)(lVar4 + lVar2);
        *(float *)(lVar4 + 8 + lVar2) = *(float *)(lVar4 + 8 + lVar2) + 1.0;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
  }
  else if (uVar6 != 0) {
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
      if ((int)param_5[1] <= (int)(uint)uVar1) {
        FUN_146020b32(param_5,uVar1 + 1,0);
        uVar1 = *(ushort *)(param_3 + 2 + uVar5 * 4);
      }
      lVar4 = *param_5;
      lVar2 = (ulonglong)uVar1 * 0x10;
      fVar7 = (float)*(double *)(param_4 + uVar5 * 8);
      *(double *)(lVar4 + lVar2) =
           (double)fVar7 * *(double *)(param_2 + uVar5 * 8) + *(double *)(lVar4 + lVar2);
      *(float *)(lVar4 + 8 + lVar2) = fVar7 + *(float *)(lVar4 + 8 + lVar2);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  return;
}



// FUNCTION 14769739c FUN_14769739c body=126 status=ok
// SIG undefined FUN_14769739c(void)

undefined4 * FUN_14769739c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 14769741a FUN_14769741a body=223 status=ok
// SIG undefined FUN_14769741a(void)

void FUN_14769741a(short *param_1,undefined8 param_2,undefined8 param_3)

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
  if (param_1[2] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[2];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476974fa FUN_1476974fa body=403 status=ok
// SIG undefined FUN_1476974fa(void)

void FUN_1476974fa(undefined8 param_1,longlong *param_2,short *param_3)

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
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_a8,param_3[2]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_3[1]) goto LAB_147697565;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147697565:
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
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_3) goto LAB_14769759b;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_14769759b:
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
  local_b8 = (undefined4)*param_2;
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_b0 = (undefined4)param_2[1];
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
  local_c8 = local_98;
  local_90 = puVar6;
  local_88 = iVar2;
  local_78 = puVar7;
  local_70 = iVar1;
  local_68 = uVar4;
  FUN_1476963da(param_1,&local_b8,local_80,uVar4);
  FUN_14769768e(&local_90);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769768e FUN_14769768e body=118 status=ok
// SIG undefined FUN_14769768e(void)

void FUN_14769768e(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001476976f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147697704 FUN_147697704 body=119 status=ok
// SIG undefined FUN_147697704(void)

undefined4 * FUN_147697704(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 14769777c FUN_14769777c body=259 status=ok
// SIG undefined FUN_14769777c(void)

void FUN_14769777c(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_78,param_3[1]);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_1476977da;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1476977da:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_50 = *puVar4;
  local_48 = local_78;
  local_40 = local_70;
  local_38 = local_68;
  local_88 = (undefined4)*param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_60 = puVar4;
  local_58 = iVar1;
  FUN_147695afc(param_1);
  FUN_1476971b0(&local_60);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147697880 FUN_147697880 body=119 status=ok
// SIG undefined FUN_147697880(void)

undefined4 * FUN_147697880(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 1476978f8 FUN_1476978f8 body=197 status=ok
// SIG undefined FUN_1476978f8(void)

void FUN_1476978f8(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_14769792f;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_14769792f:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_1476979d0(param_1,&local_38,*puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476979d0 FUN_1476979d0 body=271 status=ok
// SIG undefined FUN_1476979d0(void)

void FUN_1476979d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = param_1;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1449c0562(&local_50);
    if (iStack_3c < *(int *)(local_48 + 0x18)) {
      do {
        uVar1 = *(ushort *)(**(longlong **)(param_1 + 0x20) + 0x14 + (longlong)iStack_3c * 0x58);
        if (((uVar1 != 0xffff) &&
            (*(uint *)(lVar3 + 0x20) != (uint)uVar1 &&
             (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x20))) &&
           ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
          local_58 = param_3;
          FUN_147697ae0(param_1,uVar2,lVar3,
                        **(longlong **)(param_1 + 0x20) + (longlong)iStack_3c * 0x58);
          break;
        }
        local_40 = local_40 & ~local_50._4_4_;
        FUN_1449c0562(&local_50);
      } while (iStack_3c < *(int *)(local_48 + 0x18));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147697ae0 FUN_147697ae0 body=848 status=ok
// SIG undefined FUN_147697ae0(void)

void FUN_147697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_ac;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fe4) && (FUN_144b3d300(&DAT_14cab5fe4), DAT_14cab5fe4 == -1)) {
    plVar4 = (longlong *)FUN_14099c56c();
    lVar6 = plVar4[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar6 = plVar4[0x22];
    }
    DAT_14cab5fe0 = *(undefined1 *)(lVar6 + 100);
    _Init_thread_footer(&DAT_14cab5fe4);
  }
  uVar1 = *(ushort *)(param_4 + 0x12);
  lVar6 = (ulonglong)*(ushort *)(param_4 + 0x10) * 4 +
          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  FUN_147547b8e(param_2,&local_68,*(undefined2 *)(param_4 + 0x16));
  if ((ulonglong)uVar1 != 0) {
    uVar8 = 0;
    do {
      if ((*(uint *)(param_4 + 0xc) >> ((uint)uVar8 & 0x1f) & 1) != 0) {
        uVar2 = *(ushort *)(lVar6 + uVar8 * 4);
        if ((((uVar2 != 0xffff) &&
             (uVar7 = (uint)uVar2,
             *(uint *)(param_3 + 0x20) != uVar7 &&
             (int)(uint)uVar2 <= (int)*(uint *)(param_3 + 0x20))) &&
            ((*(uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0)) &&
           (((local_a8 = param_1, FUN_145f9403c(*(undefined8 *)(param_1 + 0x28),&local_90,uVar7),
             local_90 != 0 || (local_88 != 0)) ||
            ((local_80 != 0 || ((local_78 != 0 || (param_1 = local_a8, local_70 != 0)))))))) {
          if (*(ushort *)(param_2 + 0xc) != 0) {
            plVar4 = *(longlong **)(param_2 + 0x28);
            lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
            do {
              if (*(ushort *)((longlong)plVar4 + 0x1e) == uVar2) goto LAB_147697c80;
              plVar4 = plVar4 + 4;
              lVar3 = lVar3 + -0x20;
            } while (lVar3 != 0);
          }
          plVar4 = (longlong *)0x0;
LAB_147697c80:
          local_98 = (ulonglong)*(ushort *)(lVar6 + 2 + uVar8 * 4);
          local_a0 = *(ulonglong *)(local_a8 + 0x30);
          local_ac = *(int *)(param_2 + 0x14);
          if (local_ac == 1) {
            AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 1));
          }
          LOCK();
          *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
          UNLOCK();
          lVar3 = *plVar4;
          local_b8 = param_2;
          if (local_58 == 0) {
            if (*(short *)(param_2 + 0xe) != 0) {
              uVar5 = 0;
              do {
                FUN_1476629dc(&local_90,*(undefined2 *)(param_5 + 2 + uVar5 * 4),lVar3);
                uVar5 = uVar5 + 1;
                lVar3 = lVar3 + 8;
              } while (uVar5 < *(ushort *)(local_b8 + 0xe));
            }
          }
          else if (*(short *)(param_2 + 0xe) != 0) {
            uVar5 = 0;
            do {
              FUN_145f942b0(&local_90,*(undefined2 *)(param_5 + 2 + uVar5 * 4),
                            *(undefined8 *)
                             (local_98 + (longlong)(int)uVar5 * (longlong)local_50 + local_58),lVar3
                           );
              uVar5 = uVar5 + 1;
              lVar3 = lVar3 + 8;
            } while (uVar5 < *(ushort *)(local_b8 + 0xe));
          }
          param_2 = local_b8;
          param_1 = local_a8;
          if (plVar4 != (longlong *)0x0) {
            uVar5 = plVar4[2];
            if ((ulonglong)plVar4[2] < local_a0) {
              uVar5 = local_a0;
            }
            plVar4[2] = uVar5;
            LOCK();
            *(int *)(plVar4 + 3) = (int)plVar4[3] + -1;
            UNLOCK();
            if (local_ac == 1) {
              ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 1));
              param_1 = local_a8;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + -1;
    UNLOCK();
    if (local_60 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_68 + 8));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147697e32 FUN_147697e32 body=119 status=ok
// SIG undefined FUN_147697e32(void)

undefined4 * FUN_147697e32(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 147697eaa FUN_147697eaa body=197 status=ok
// SIG undefined FUN_147697eaa(void)

void FUN_147697eaa(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_3) goto LAB_147697ee1;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147697ee1:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_147696c44(param_1,&local_38,*puVar4);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147697f82 FUN_147697f82 body=231 status=ok
// SIG undefined FUN_147697f82(void)

ushort * FUN_147697f82(longlong *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      if (*(ushort *)(lVar8 + (ulonglong)uVar1 * 0x20) < *param_2) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if (((int)uVar5 < (int)uVar2) && (*(ushort *)(lVar8 + (ulonglong)uVar5 * 0x20) <= *param_2)) {
      puVar7 = (ushort *)(lVar8 + (ulonglong)uVar5 * 0x20);
      FUN_1458ea41a(puVar7,1);
      goto LAB_14769802e;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14769806a(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar6 = (ulonglong)uVar5 * 0x20;
  memmove((void *)(lVar8 + lVar6 + 0x20),(void *)(lVar8 + lVar6),(ulonglong)(uVar2 - uVar5) << 5);
  puVar7 = (ushort *)(lVar6 + *param_1);
LAB_14769802e:
  *puVar7 = *param_2;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0xffff;
  return puVar7 + 4;
}



// FUNCTION 14769806a FUN_14769806a body=132 status=ok
// SIG undefined FUN_14769806a(void)

void FUN_14769806a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476980f0 FUN_1476980f0 body=225 status=ok
// SIG undefined FUN_1476980f0(void)

ushort * FUN_1476980f0(longlong *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar7 = 0;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(ushort *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      puVar8 = (ushort *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_1458ea44b(puVar8,1);
      goto LAB_147698193;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476981d2(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  puVar8 = (ushort *)(lVar4 + *param_1);
LAB_147698193:
  *puVar8 = *param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  FUN_147664d95(0,0);
  return puVar8 + 4;
}



// FUNCTION 1476981d2 FUN_1476981d2 body=147 status=ok
// SIG undefined FUN_1476981d2(void)

void FUN_1476981d2(longlong param_1,int param_2)

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



// FUNCTION 147698266 FUN_147698266 body=19 status=ok
// SIG undefined FUN_147698266(void)

void FUN_147698266(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 14769827a FUN_14769827a body=132 status=ok
// SIG undefined FUN_14769827a(void)

void FUN_14769827a(longlong param_1,int param_2)

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



// FUNCTION 147698300 FUN_147698300 body=89 status=ok
// SIG undefined FUN_147698300(void)

void FUN_147698300(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_147664d95(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14769835a FUN_14769835a body=62 status=ok
// SIG undefined FUN_14769835a(void)

void FUN_14769835a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147698398(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147698398 FUN_147698398 body=93 status=ok
// SIG undefined FUN_147698398(void)

ulonglong FUN_147698398(uint param_1,uint param_2)

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



// FUNCTION 1476983f6 FUN_1476983f6 body=166 status=ok
// SIG undefined FUN_1476983f6(void)

void FUN_1476983f6(undefined2 *param_1,undefined8 param_2)

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



// FUNCTION 14769849e FUN_14769849e body=170 status=ok
// SIG undefined FUN_14769849e(void)

undefined8 FUN_14769849e(ushort *param_1,undefined8 param_2)

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



// FUNCTION 147698548 FUN_147698548 body=339 status=ok
// SIG undefined FUN_147698548(void)

void FUN_147698548(short *param_1,undefined8 param_2,undefined8 param_3)

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
  if (param_1[4] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769869c FUN_14769869c body=220 status=ok
// SIG undefined FUN_14769869c(void)

void FUN_14769869c(longlong *param_1)

{
  int *piVar1;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014769876a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147698778 FUN_147698778 body=132 status=ok
// SIG undefined FUN_147698778(void)

void FUN_147698778(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476987fe FUN_1476987fe body=147 status=ok
// SIG undefined FUN_1476987fe(void)

void FUN_1476987fe(longlong param_1,int param_2)

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



// FUNCTION 147698892 FUN_147698892 body=193 status=ok
// SIG undefined FUN_147698892(void)

undefined8 * FUN_147698892(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
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



// FUNCTION 147698954 FUN_147698954 body=113 status=ok
// SIG undefined FUN_147698954(void)

undefined8 FUN_147698954(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *(ushort *)(param_1 + 2);
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
  uVar1 = *(ushort *)(param_1 + 4);
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



// FUNCTION 1476989c6 FUN_1476989c6 body=304 status=ok
// SIG undefined FUN_1476989c6(void)

void FUN_1476989c6(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  if (*(short *)(param_1 + 6) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 6);
    FUN_147552f5e(param_2,param_3);
  }
  if (*(short *)(param_1 + 8) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 8);
    FUN_147552f5e(param_2,param_3);
  }
  if (*(short *)(param_1 + 10) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 10);
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147698af8 FUN_147698af8 body=186 status=ok
// SIG undefined FUN_147698af8(void)

void FUN_147698af8(longlong param_1)

{
  int *piVar1;
  
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
                    /* WARNING: Could not recover jumptable at 0x000147698ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147698bb6 FUN_147698bb6 body=58 status=ok
// SIG undefined FUN_147698bb6(void)

void FUN_147698bb6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14633bf66();
  FUN_14766256a(param_1 + 0x68,*(undefined8 *)(param_1 + 0x28),param_1 + 0x40,param_2,param_3);
  return;
}



// FUNCTION 147698bf4 FUN_147698bf4 body=136 status=ok
// SIG undefined FUN_147698bf4(void)

void FUN_147698bf4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1476a54ce(param_1);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1476a54ce(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_1476a54ce(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_1476a54ce(param_1 + 0x30);
  return;
}



// FUNCTION 147698c7e FUN_147698c7e body=1830 status=ok
// SIG undefined FUN_147698c7e(void)

void FUN_147698c7e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_1a8 [32];
  ushort *local_188;
  code **local_180;
  longlong *local_178;
  longlong local_168;
  ushort *local_160;
  ushort *local_158;
  longlong local_150;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  ushort local_126;
  undefined2 local_124;
  ushort local_122;
  undefined1 local_120;
  undefined1 local_11f;
  ushort local_118;
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1476993a6(param_1);
    if ((((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x80) != 0)) ||
        (*(int *)(param_1 + 0x90) != 0)) || (*(int *)(param_1 + 0xa0) != 0)) {
      lVar1 = FUN_14009d2a0();
      local_168 = FUN_14038fb82();
      local_11f = 0;
      FUN_1476996f0(param_2,&local_12c,&local_120,param_1);
      FUN_145c71394(param_2,&local_130);
      if (*(int *)(param_1 + 0x70) != 0) {
        local_148 = *(undefined2 *)(lVar1 + 0x5a);
        local_146 = CONCAT22(*(undefined2 *)(lVar1 + 0xf4),*(undefined2 *)(lVar1 + 0x78));
        local_13f = 0;
        local_13c = 0x6ff;
        local_138 = 0;
        local_126 = *(ushort *)(lVar1 + 0x110);
        local_124 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(&local_120);
        local_58 = (code *)&local_126;
        local_50 = &local_122;
        FUN_1447c44f6(local_108,&local_58);
        local_128 = *(undefined2 *)(lVar1 + 0x130);
        local_50 = &local_126;
        local_58 = (code *)&local_128;
        FUN_1447c44f6(local_e0,&local_58);
        local_178 = &local_150;
        local_188 = &local_122;
        local_122 = local_118 | 0x200;
        local_58 = FUN_1476a5796;
        local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
        local_180 = &local_58;
        local_150 = param_1 + 0x68;
        FUN_1476a5548(&local_120,&local_134,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1406adae8(param_2,local_12c,local_134);
        FUN_1406adae8(param_2,local_134,local_130);
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        local_148 = *(undefined2 *)(lVar1 + 0x5a);
        local_146 = CONCAT22(*(undefined2 *)(lVar1 + 0xf4),*(undefined2 *)(lVar1 + 0x78));
        local_13f = 0;
        local_13c = 0x6ff;
        local_138 = 0;
        local_126 = *(ushort *)(lVar1 + 0x112);
        local_124 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(&local_120);
        local_58 = (code *)&local_126;
        local_50 = &local_122;
        FUN_1447c44f6(local_108,&local_58);
        local_128 = *(undefined2 *)(lVar1 + 0x130);
        local_50 = &local_126;
        local_58 = (code *)&local_128;
        FUN_1447c44f6(local_e0,&local_58);
        local_178 = &local_150;
        local_188 = &local_122;
        local_122 = local_118 | 0x200;
        local_58 = FUN_1476a5796;
        local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
        local_180 = &local_58;
        local_150 = param_1 + 0x78;
        FUN_1476a5548(&local_120,&local_134,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1406adae8(param_2,local_12c,local_134);
        FUN_1406adae8(param_2,local_134,local_130);
      }
      if (*(int *)(param_1 + 0x90) != 0) {
        local_148 = *(undefined2 *)(lVar1 + 0x5a);
        local_146 = CONCAT22(*(undefined2 *)(lVar1 + 0xf4),*(undefined2 *)(lVar1 + 0x78));
        local_13f = 0;
        local_13c = 0x6ff;
        local_138 = 0;
        local_126 = *(ushort *)(lVar1 + 0x114);
        local_124 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(&local_120);
        local_58 = (code *)&local_126;
        local_50 = &local_122;
        FUN_1447c44f6(local_108,&local_58);
        local_128 = *(undefined2 *)(lVar1 + 0x130);
        local_50 = &local_126;
        local_58 = (code *)&local_128;
        FUN_1447c44f6(local_e0,&local_58);
        local_178 = &local_150;
        local_188 = &local_122;
        local_122 = local_118 | 0x200;
        local_58 = FUN_1476a5796;
        local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
        local_180 = &local_58;
        local_150 = param_1 + 0x88;
        FUN_1476a5548(&local_120,&local_134,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1406adae8(param_2,local_12c,local_134);
        FUN_1406adae8(param_2,local_134,local_130);
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        local_148 = *(undefined2 *)(lVar1 + 0x5a);
        local_146 = *(undefined4 *)(lVar1 + 0x78);
        local_142 = *(undefined2 *)(lVar1 + 0xf4);
        local_13f = 0;
        local_13c = 0x6ff;
        local_138 = 0;
        local_126 = *(ushort *)(lVar1 + 0x116);
        local_160 = &local_126;
        local_124 = *(undefined2 *)(param_1 + 0x66);
        local_158 = &local_122;
        FUN_147699886(&local_148,&local_120);
        local_128 = *(undefined2 *)(lVar1 + 0x130);
        local_50 = &local_126;
        local_58 = (code *)&local_128;
        FUN_1447c44f6(local_e0,&local_58);
        local_178 = &local_150;
        local_188 = &local_122;
        local_122 = local_118 | 0x200;
        local_58 = FUN_1476a5d40;
        local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
        local_180 = &local_58;
        local_150 = param_1 + 0x98;
        FUN_1476a5a8e(&local_120,&local_134,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1406adae8(param_2,local_12c,local_134);
        FUN_1406adae8(param_2,local_134,local_130);
      }
      local_148 = *(undefined2 *)(lVar1 + 0x5c);
      local_146 = CONCAT22(*(undefined2 *)(lVar1 + 0x78),*(undefined2 *)(local_168 + 0x26));
      local_13f = 0;
      local_13c = 0x6ff;
      local_138 = 0;
      local_122 = *(ushort *)(param_1 + 0x66);
      FUN_1476a6216(&local_120);
      local_58 = (code *)&local_122;
      local_50 = (ushort *)&local_120;
      FUN_1447c44f6(local_108,&local_58);
      local_178 = &local_150;
      local_188 = &local_126;
      local_126 = local_118 & 0xfdff;
      local_58 = FUN_1476a6524;
      local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
      local_180 = &local_58;
      local_150 = param_1 + 0x68;
      FUN_1476a62d6(&local_120,&local_134,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1406adae8(param_2,local_130,local_134);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476993a6 FUN_1476993a6 body=840 status=ok
// SIG undefined FUN_1476993a6(void)

void FUN_1476993a6(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_118 [43];
  char local_ed;
  undefined4 local_ec;
  longlong local_e8;
  undefined2 *local_e0;
  undefined8 *local_d8;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = *(undefined4 *)(param_1 + 0x58);
  lVar7 = FUN_14009d2a0();
  local_e8 = param_1 + 0x68;
  FUN_147698bf4();
  uVar1 = *(undefined2 *)(lVar7 + 0x78);
  lVar2 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = *(undefined2 *)(param_1 + 0x66);
  local_cc = *(undefined2 *)(lVar7 + 0x5a);
  local_ca = *(undefined2 *)(lVar7 + 0x110);
  local_e0 = &local_d0;
  local_d8 = &local_c8;
  local_ce = uVar1;
  FUN_1447c44f6(&local_c8);
  local_ed = FUN_14050a5e0(lVar2 + 0x28,&local_c8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = *(undefined2 *)(param_1 + 0x66);
  local_cc = *(undefined2 *)(lVar7 + 0x5a);
  local_ca = *(undefined2 *)(lVar7 + 0x112);
  local_e0 = &local_d0;
  local_d8 = &local_c8;
  local_ce = uVar1;
  FUN_1447c44f6(&local_c8);
  cVar4 = FUN_14050a5e0(lVar2 + 0x28,&local_c8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = *(undefined2 *)(param_1 + 0x66);
  local_cc = *(undefined2 *)(lVar7 + 0x5a);
  local_ca = *(undefined2 *)(lVar7 + 0x114);
  local_e0 = &local_d0;
  local_d8 = &local_c8;
  local_ce = uVar1;
  FUN_1447c44f6(&local_c8);
  cVar5 = FUN_14050a5e0(lVar2 + 0x28,&local_c8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_d0 = *(undefined2 *)(param_1 + 0x66);
  local_cc = *(undefined2 *)(lVar7 + 0x5a);
  local_ca = *(undefined2 *)(lVar7 + 0x116);
  local_e0 = &local_d0;
  local_d8 = &local_c8;
  local_ce = uVar1;
  FUN_1447c44f6(&local_c8);
  cVar6 = FUN_14050a5e0(lVar2 + 0x28,&local_c8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar3 = local_ec;
  if (local_ed != '\0') {
    FUN_14769a00a(local_e8,local_ec);
  }
  if (cVar4 != '\0') {
    FUN_14769a00a(param_1 + 0x78,uVar3);
  }
  if (cVar5 != '\0') {
    FUN_14769a00a(param_1 + 0x88,uVar3);
  }
  if (cVar6 != '\0') {
    FUN_14769a00a(param_1 + 0x98,uVar3);
  }
  FUN_147699802(param_1);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476996f0 FUN_1476996f0 body=272 status=ok
// SIG undefined FUN_1476996f0(void)

undefined8 FUN_1476996f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = &LAB_1476a54fe;
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4e03d0;
  local_50 = plVar3 + 2;
  plVar3[2] = (longlong)&PTR_FUN_14a4e03e8;
  plVar3[3] = param_4;
  plVar3[4] = (longlong)FUN_147699802;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147699802 FUN_147699802 body=131 status=ok
// SIG undefined FUN_147699802(void)

void FUN_147699802(longlong param_1)

{
  if (0 < (longlong)*(int *)(param_1 + 0x70)) {
    memset(*(void **)(param_1 + 0x68),0,(longlong)*(int *)(param_1 + 0x70) << 4);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x80)) {
    memset(*(void **)(param_1 + 0x78),0,(longlong)*(int *)(param_1 + 0x80) << 4);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x90)) {
    memset(*(void **)(param_1 + 0x88),0,(longlong)*(int *)(param_1 + 0x90) << 4);
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa0)) {
    memset(*(void **)(param_1 + 0x98),0,(longlong)*(int *)(param_1 + 0xa0) << 4);
    return;
  }
  return;
}



// FUNCTION 147699886 FUN_147699886 body=146 status=ok
// SIG undefined FUN_147699886(void)

undefined8 * FUN_147699886(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476a59e6(param_2,param_2 + 3);
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



// FUNCTION 14769991a FUN_14769991a body=1775 status=ok
// SIG undefined FUN_14769991a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14769991a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 **local_200;
  undefined8 *local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  undefined2 local_1c4;
  undefined4 local_1c2;
  undefined2 local_1be;
  undefined1 local_1bb;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0 [10];
  undefined2 local_196;
  undefined2 uStack_194;
  undefined2 uStack_192;
  undefined1 auStack_190 [24];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  longlong local_128;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar3 = FUN_14754621c(param_1 + 0xa8,*(longlong *)(param_1 + 0x28) + 0x28);
    if (iVar3 == 1) {
      FUN_1476993a6();
    }
    else {
      FUN_147699802(param_1);
    }
    if ((((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x80) != 0)) ||
        (*(int *)(param_1 + 0x90) != 0)) || (*(int *)(param_1 + 0xa0) != 0)) {
      local_1f0 = (undefined8 *)(param_1 + 0x68);
      lVar4 = FUN_14009d2a0();
      local_1e8 = FUN_14038fb82();
      local_88 = 0;
      local_80 = 0x400000000;
      local_58 = 0;
      local_50 = 0x400000000;
      if (*(int *)(param_1 + 0x70) != 0) {
        local_1c4 = *(undefined2 *)(lVar4 + 0x5a);
        local_1c2 = CONCAT22(*(undefined2 *)(lVar4 + 0xf4),*(undefined2 *)(lVar4 + 0x78));
        local_1bb = 0;
        local_1b8 = 0x6ff;
        local_1b4 = 0;
        uStack_194 = *(undefined2 *)(lVar4 + 0x110);
        uStack_192 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(auStack_190);
        local_1b0 = (undefined8 *)&uStack_194;
        local_1a8 = (undefined8 *)auStack_190;
        FUN_1447c44f6(local_178,&local_1b0);
        local_196 = *(undefined2 *)(lVar4 + 0x130);
        local_1a8 = (undefined8 *)&uStack_194;
        local_1b0 = (undefined8 *)&local_196;
        FUN_1447c44f6(local_150,&local_1b0);
        local_208 = (undefined8 *)local_1a0;
        local_1a0._0_8_ = local_1f0;
        FUN_14331a4f4(auStack_190,&local_1b0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar2 = local_1b0;
        if (local_1b0 != (undefined8 *)0x0) {
          FUN_147552ffc(local_c8,0xffff,&local_1b0);
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        local_1c4 = *(undefined2 *)(lVar4 + 0x5a);
        local_1c2 = CONCAT22(*(undefined2 *)(lVar4 + 0xf4),*(undefined2 *)(lVar4 + 0x78));
        local_1bb = 0;
        local_1b8 = 0x6ff;
        local_1b4 = 0;
        uStack_194 = *(undefined2 *)(lVar4 + 0x112);
        uStack_192 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(auStack_190);
        local_1b0 = (undefined8 *)&uStack_194;
        local_1a8 = (undefined8 *)auStack_190;
        FUN_1447c44f6(local_178,&local_1b0);
        local_196 = *(undefined2 *)(lVar4 + 0x130);
        local_1a8 = (undefined8 *)&uStack_194;
        local_1b0 = (undefined8 *)&local_196;
        FUN_1447c44f6(local_150,&local_1b0);
        local_208 = (undefined8 *)local_1a0;
        local_1a0._0_8_ = (undefined8 *)(param_1 + 0x78);
        FUN_14331a4f4(auStack_190,&local_1b0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar2 = local_1b0;
        if (local_1b0 != (undefined8 *)0x0) {
          FUN_147552ffc(local_c8,0xffff,&local_1b0);
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      if (*(int *)(param_1 + 0x90) != 0) {
        local_1c4 = *(undefined2 *)(lVar4 + 0x5a);
        local_1c2 = CONCAT22(*(undefined2 *)(lVar4 + 0xf4),*(undefined2 *)(lVar4 + 0x78));
        local_1bb = 0;
        local_1b8 = 0x6ff;
        local_1b4 = 0;
        uStack_194 = *(undefined2 *)(lVar4 + 0x114);
        uStack_192 = *(undefined2 *)(param_1 + 0x66);
        FUN_147695e0e(auStack_190);
        local_1b0 = (undefined8 *)&uStack_194;
        local_1a8 = (undefined8 *)auStack_190;
        FUN_1447c44f6(local_178,&local_1b0);
        local_196 = *(undefined2 *)(lVar4 + 0x130);
        local_1a8 = (undefined8 *)&uStack_194;
        local_1b0 = (undefined8 *)&local_196;
        FUN_1447c44f6(local_150,&local_1b0);
        local_208 = (undefined8 *)local_1a0;
        local_1a0._0_8_ = (undefined8 *)(param_1 + 0x88);
        FUN_14331a4f4(auStack_190,&local_1b0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar2 = local_1b0;
        if (local_1b0 != (undefined8 *)0x0) {
          FUN_147552ffc(local_c8,0xffff,&local_1b0);
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        local_1c4 = *(undefined2 *)(lVar4 + 0x5a);
        local_1c2 = *(undefined4 *)(lVar4 + 0x78);
        local_1be = *(undefined2 *)(lVar4 + 0xf4);
        local_1bb = 0;
        local_1b8 = 0x6ff;
        local_1b4 = 0;
        uStack_194 = *(undefined2 *)(lVar4 + 0x116);
        local_1d8 = (undefined8 *)&uStack_194;
        uStack_192 = *(undefined2 *)(param_1 + 0x66);
        local_1d0 = (longlong)auStack_190;
        FUN_147699886(&local_1c4,auStack_190);
        local_196 = *(undefined2 *)(lVar4 + 0x130);
        local_1a8 = (undefined8 *)&uStack_194;
        local_1b0 = (undefined8 *)&local_196;
        FUN_1447c44f6(local_150);
        local_208 = (undefined8 *)local_1a0;
        local_1a0._0_8_ = (undefined8 *)(param_1 + 0x98);
        FUN_14331a958(auStack_190,&local_1b0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar2 = local_1b0;
        if (local_1b0 != (undefined8 *)0x0) {
          FUN_147552ffc(local_c8,0xffff,&local_1b0);
          LOCK();
          piVar1 = (int *)(puVar2 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      local_1c4 = *(undefined2 *)(lVar4 + 0x5c);
      local_1c2 = CONCAT22(*(undefined2 *)(lVar4 + 0x78),*(undefined2 *)(local_1e8 + 0x26));
      local_1bb = 0;
      local_1b8 = 0x6ff;
      local_1b4 = 0;
      local_1a0._0_2_ = *(undefined2 *)(param_1 + 0x66);
      FUN_1476a6216(auStack_190);
      local_1b0 = (undefined8 *)local_1a0;
      local_1a8 = (undefined8 *)((longlong)local_1a0 + 2);
      FUN_1447c44f6(local_178,&local_1b0);
      local_1b0 = local_1f0;
      local_208 = param_3;
      local_200 = &local_1b0;
      FUN_14331adc2(auStack_190,&local_1e0,*(longlong *)(param_1 + 0x28) + 0x28,local_c8);
      if (local_1e0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_1e0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_1e0)(local_1e0,1);
        }
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      FUN_14588b8d6(local_78);
      FUN_14009d40c(local_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a00a FUN_14769a00a body=109 status=ok
// SIG undefined FUN_14769a00a(void)

void FUN_14769a00a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1476a7560(param_1,iVar1);
    }
    FUN_1476a7545((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1476a75e6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14769a078 FUN_14769a078 body=132 status=ok
// SIG undefined FUN_14769a078(void)

undefined8 * FUN_14769a078(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1406f4b62(param_2);
  *param_1 = 0;
  if (lVar1 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar1);
    *(undefined4 *)param_1 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
  }
  param_1[1] = *param_3;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a0fe FUN_14769a0fe body=111 status=ok
// SIG undefined FUN_14769a0fe(void)

void FUN_14769a0fe(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_20 = 0;
    FUN_14485c47a(&local_20,lVar1);
    uVar2 = local_20;
  }
  *param_1 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a16e FUN_14769a16e body=73 status=ok
// SIG undefined FUN_14769a16e(void)

void FUN_14769a16e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = 2;
  local_c = 0xffffffff;
  FUN_1457dbf04();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a1b8 FUN_14769a1b8 body=192 status=ok
// SIG undefined FUN_14769a1b8(void)

void FUN_14769a1b8(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    lVar2 = FUN_140a2e7a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_144a772c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a2ac FUN_14769a2ac body=111 status=ok
// SIG undefined FUN_14769a2ac(void)

void FUN_14769a2ac(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_20 = 0;
    FUN_14485c47a(&local_20,lVar1);
    uVar2 = local_20;
  }
  *param_1 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a31c FUN_14769a31c body=83 status=ok
// SIG undefined FUN_14769a31c(void)

undefined8 FUN_14769a31c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = 2;
  local_14 = 0xffffffff;
  FUN_14769a370();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a370 FUN_14769a370 body=228 status=ok
// SIG undefined FUN_14769a370(void)

undefined4 * FUN_14769a370(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1406f4b62(param_2);
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  if (lVar1 != 0) {
    lVar2 = FUN_140a2e7a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_147bc80bc(lVar1,*param_3,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_34 = (undefined4)*param_3;
      local_30 = 0;
      local_2c = (undefined4)((ulonglong)*param_3 >> 0x20);
      local_28 = *(undefined4 *)((longlong)param_3 + 0xc);
      local_24 = *(undefined1 *)(param_3 + 1);
      FUN_140fc5922(lVar1,&local_34,param_1,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a458 FUN_14769a458 body=194 status=ok
// SIG undefined FUN_14769a458(void)

void FUN_14769a458(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    lVar2 = FUN_140a2e7a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar2 = FUN_144a772c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      uStack_2c = param_2[3];
      FUN_1417e08e2(lVar1,param_1 + 2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a530 FUN_14769a530 body=308 status=ok
// SIG undefined FUN_14769a530(void)

void FUN_14769a530(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  uVar1 = FUN_14769a666(local_20,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a666 FUN_14769a666 body=192 status=ok
// SIG undefined FUN_14769a666(void)

undefined8 FUN_14769a666(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0 && param_1 != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      uVar3 = *(undefined8 *)(lVar2 + 0x118);
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      FUN_144a808d5(&local_38,param_3,*(undefined8 *)(lVar2 + 0x120),uVar3);
      uVar3 = FUN_14769acba(param_1,param_2,local_38,0);
      goto LAB_14769a6b8;
    }
  }
  uVar3 = 0;
LAB_14769a6b8:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a728 FUN_14769a728 body=311 status=ok
// SIG undefined FUN_14769a728(void)

void FUN_14769a728(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14769ab98(local_20,local_28,local_2c,0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a860 FUN_14769a860 body=308 status=ok
// SIG undefined FUN_14769a860(void)

void FUN_14769a860(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  uVar1 = FUN_14769a996(local_20,local_28,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769a996 FUN_14769a996 body=192 status=ok
// SIG undefined FUN_14769a996(void)

undefined8 FUN_14769a996(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0 && param_1 != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      uVar3 = *(undefined8 *)(lVar2 + 0x118);
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      FUN_144a808d5(&local_38,param_3,*(undefined8 *)(lVar2 + 0x120),uVar3);
      uVar3 = FUN_14769acba(param_1,param_2,local_38,1);
      goto LAB_14769a9e8;
    }
  }
  uVar3 = 0;
LAB_14769a9e8:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769aa58 FUN_14769aa58 body=311 status=ok
// SIG undefined FUN_14769aa58(void)

void FUN_14769aa58(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14769ab98(local_20,local_28,local_2c,1);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769ab98 FUN_14769ab98 body=289 status=ok
// SIG undefined FUN_14769ab98(void)

undefined8 FUN_14769ab98(longlong param_1,longlong param_2,float param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((param_2 != 0 && param_1 != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x298), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*plVar1 + 0x2e8))(plVar1);
      dVar5 = ((double)(int)*(undefined8 *)(lVar2 + 0x118) * (double)param_3) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar5;
      auVar7 = roundpd(auVar7,auVar7,1);
      dVar6 = auVar7._0_8_;
      dVar5 = dVar5 - dVar6;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      fVar4 = (float)dVar5 - (float)(int)dVar5;
      fVar8 = fVar4;
      if (0.99999994 <= fVar4) {
        fVar8 = 0.99999994;
      }
      auVar9._0_4_ = ~-(uint)(0.0 < fVar4) & (uint)fVar4;
      auVar9._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar9._8_4_ = extraout_XMM0_Dc;
      auVar9._12_4_ = extraout_XMM0_Dd;
      auVar9 = auVar9 | ZEXT416((uint)fVar8 & -(uint)(0.0 < fVar4));
      auVar10._4_12_ = auVar9._4_12_;
      fVar8 = auVar9._0_4_ + 0.5 + -0.5;
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
      auVar10._0_4_ = fVar8;
      lVar2 = auVar10._0_8_;
      if (fVar8 <= 0.0) {
        lVar2 = 0;
      }
      uVar3 = FUN_14769acba(param_1,param_2,
                            (ulonglong)(uint)((int)dVar6 + (int)dVar5) | lVar2 << 0x20,param_4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14769acba FUN_14769acba body=204 status=ok
// SIG undefined FUN_14769acba(void)

longlong FUN_14769acba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  uVar2 = FUN_1475542ea(uVar2);
  lVar3 = FUN_14769ad88(uVar2);
  lVar4 = FUN_14769adeb(lVar3);
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(lVar4 + 0x60) = param_1;
  *(undefined8 *)(lVar4 + 0x70) = param_3;
  local_40 = param_3;
  uVar1 = FUN_1475a7b04(lVar3 + 0x40);
  *(undefined4 *)(lVar4 + 0x78) = uVar1;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(undefined8 *)(lVar4 + 0x68) = param_2;
  *(undefined1 *)(lVar4 + 0x7c) = param_4;
  FUN_14769ae9c(lVar3,lVar4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769ad88 FUN_14769ad88 body=98 status=ok
// SIG undefined FUN_14769ad88(void)

void FUN_14769ad88(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b365dc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769adeb FUN_14769adeb body=175 status=ok
// SIG undefined FUN_14769adeb(void)

undefined8 FUN_14769adeb(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14585da08();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769ae9c FUN_14769ae9c body=150 status=ok
// SIG undefined FUN_14769ae9c(void)

void FUN_14769ae9c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
    FUN_1476a7db4((longlong *)(param_1 + 0xd0),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x278) = *(undefined8 *)(lVar2 + 0x270);
  *(undefined1 *)(lVar2 + 0x289) = 1;
  return;
}



// FUNCTION 14769af32 FUN_14769af32 body=266 status=ok
// SIG undefined FUN_14769af32(void)

void FUN_14769af32(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [44];
  uint local_ec;
  undefined8 local_e8 [12];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x78) != -1) {
    FUN_1475a79fa(param_2,&local_ec,*(undefined8 *)(param_1 + 0x68));
    if ((((ulonglong)local_ec != 0xffffffff) && (-1 < (int)local_ec)) &&
       ((int)local_ec < (int)param_3[5])) {
      plVar3 = param_3 + 2;
      if ((longlong *)param_3[4] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[4];
      }
      if ((*(uint *)((longlong)plVar3 + (ulonglong)(local_ec >> 5) * 4) >> (local_ec & 0x1f) & 1) !=
          0) {
        iVar1 = *(int *)(param_1 + 0x78);
        if (-1 < (longlong)iVar1) {
          lVar2 = (ulonglong)local_ec * 0x10;
          if (iVar1 < *(int *)(*param_3 + 8 + lVar2)) {
            puVar5 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(*param_3 + lVar2));
            puVar6 = local_e8;
            for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = local_e8;
            puVar6 = local_88;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            FUN_1447cd2ec(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_118);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    FUN_1447cd2ec(param_1 + 0x40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769b04a FUN_14769b04a body=393 status=ok
// SIG undefined FUN_14769b04a(void)

void FUN_14769b04a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x78) != -1) {
    FUN_1475a79fa(param_2,&local_cc,*(undefined8 *)(param_1 + 0x68));
    if ((((ulonglong)local_cc != 0xffffffff) && (-1 < (int)local_cc)) &&
       ((int)local_cc < (int)param_3[5])) {
      plVar10 = param_3 + 2;
      if ((longlong *)param_3[4] != (longlong *)0x0) {
        plVar10 = (longlong *)param_3[4];
      }
      if ((*(uint *)((longlong)plVar10 + (ulonglong)(local_cc >> 5) * 4) >> (local_cc & 0x1f) & 1)
          != 0) {
        lVar11 = (longlong)*(int *)(param_1 + 0x78);
        if (-1 < lVar11) {
          lVar9 = (ulonglong)local_cc * 0x10;
          if (*(int *)(param_1 + 0x78) < *(int *)(*param_3 + 8 + lVar9)) {
            lVar9 = *(longlong *)(*param_3 + lVar9);
            local_d8 = *(undefined8 *)(lVar9 + 0x18 + lVar11 * 0x48);
            puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar11 * 0x48);
            local_e8 = *puVar2;
            uStack_e4 = puVar2[1];
            uStack_e0 = puVar2[2];
            uStack_dc = puVar2[3];
            puVar1 = (undefined8 *)(lVar9 + lVar11 * 0x48);
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar3 = *(undefined8 *)(lVar9 + 0x10 + lVar11 * 0x48);
            puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar11 * 0x48);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar4 = *(undefined8 *)(lVar9 + 0x40 + lVar11 * 0x48);
            FUN_144a7484c(&local_e8,local_c8);
            uStack_90 = 0;
            uStack_70 = 0;
            local_a8 = uVar5;
            uStack_a0 = uVar6;
            local_98 = uVar3;
            local_88 = uVar7;
            uStack_80 = uVar8;
            local_78 = uVar4;
            FUN_1447cd2ec(param_1 + 0x30,local_c8);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    FUN_1447cd2ec(param_1 + 0x40,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769b202 FUN_14769b202 body=136 status=ok
// SIG undefined FUN_14769b202(void)

void FUN_14769b202(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14009d2a0();
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    uVar1 = *(undefined2 *)(lVar3 + 0x11c);
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      FUN_1405e0992(param_2 + 0x28,*(undefined2 *)(lVar3 + lVar4),uVar1,3);
      lVar4 = lVar4 + 2;
    } while ((longlong)iVar2 * 2 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
  FUN_14754fb6a(param_1 + 0x50,0);
  return;
}



// FUNCTION 14769b28a FUN_14769b28a body=60 status=ok
// SIG undefined FUN_14769b28a(void)

void FUN_14769b28a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x120) != 0) {
    FUN_14769b28a(param_1,param_2);
  }
  FUN_14769b962(param_1,param_2,param_3);
  return;
}



// FUNCTION 14769b2c6 FUN_14769b2c6 body=1690 status=ok
// SIG undefined FUN_14769b2c6(void)

int FUN_14769b2c6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  int local_188;
  int local_184;
  longlong local_180;
  longlong *local_178;
  undefined4 local_170 [2];
  longlong local_168;
  longlong *local_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_13c;
  code *local_138;
  undefined8 *local_130;
  int local_128;
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_114;
  undefined8 local_110;
  longlong local_100;
  longlong *local_f8;
  int local_ec;
  code *local_e8;
  undefined8 *local_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  char local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int local_84;
  int local_80;
  undefined2 local_7c;
  undefined4 uStack_7a;
  undefined1 local_76;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  longlong local_60;
  undefined8 local_58;
  code **local_50;
  ulonglong local_48;
  
  iVar4 = DAT_14cab5ff4;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x28);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    plVar7 = (longlong *)0x0;
  }
  uVar5 = (**(code **)(*plVar7 + 0x10))();
  local_9c = '\0';
  lVar6 = FUN_144a6c4d8();
  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
      == lVar6 + 0x30)) {
    FUN_147582a22(&local_98,param_2);
    if ((char)local_7c != '\0') {
      iStack_a8 = local_88;
      iStack_a4 = local_84;
      local_a0 = local_80;
      local_b8 = (int)local_98;
      iStack_b4 = local_98._4_4_;
      iStack_b0 = (int)uStack_90;
      iStack_ac = uStack_90._4_4_;
      local_9c = '\x01';
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x28);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        plVar7 = (longlong *)0x0;
      }
      uVar10 = (**(code **)(*plVar7 + 0x60))();
      local_198 = 0;
      FUN_140f96e2c(uVar10,&local_98,&local_b8,&local_a0);
      lVar6 = FUN_14479d2ce(&local_98);
      if (lVar6 == param_2) goto LAB_14769b33f;
    }
    if (local_9c == '\x01') {
      local_9c = '\0';
    }
  }
LAB_14769b33f:
  plVar7 = (longlong *)FUN_1475542ea(uVar5);
  lVar6 = FUN_1432d91c8(uVar5);
  FUN_1432d9202(uVar5,&local_ec);
  plVar8 = (longlong *)FUN_140a46d48((longlong)local_ec * 0x30 + *(longlong *)(lVar6 + 0xa0));
  local_178 = plVar7;
  if (plVar8 == (longlong *)0x0) {
    local_188 = 0;
  }
  else {
    if ((local_9c == '\x01') && (local_a0 == DAT_14cab5ff4)) {
      local_d8 = local_b8;
      iStack_d4 = iStack_b4;
      iStack_d0 = iStack_b0;
      iStack_cc = iStack_ac;
    }
    else {
      FUN_14179efe6(*(longlong *)(param_1 + 0x60) + 0x28,&local_98);
      local_100 = local_98;
      local_f8 = uStack_90;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x2d0))(plVar8,&local_d8,param_2,&local_100);
      plVar8 = uStack_90;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_90 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*uStack_90)(uStack_90);
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
    local_188 = 0;
    if ((((iStack_d4 != 0 || local_d8 != 0) || iStack_d0 != 0) || iStack_cc != 0) &&
       (lVar9 = FUN_14055aa88(lVar6,local_ec), lVar9 != 0)) {
      local_50 = &local_e8;
      local_e8 = (code *)((ulonglong)local_e8 & 0xffffffff00000000);
      local_130 = &local_98;
      local_88 = 0;
      local_84 = iVar4;
      local_80 = 0xffff;
      local_7c = 0xffff;
      uStack_7a = 0;
      local_76 = 0;
      local_74 = local_d8;
      iStack_70 = iStack_d4;
      iStack_6c = iStack_d0;
      iStack_68 = iStack_cc;
      local_58 = *param_3;
      local_120[0] = 2;
      local_11c = 0;
      local_118 = 2;
      local_114 = 0;
      local_138 = FUN_1433286aa;
      local_98 = param_1;
      uStack_90 = plVar7;
      local_60 = lVar9;
      FUN_147554af6(lVar9,*(undefined4 *)(param_1 + 0x70));
      local_188 = (int)local_e8;
    }
  }
  lVar9 = FUN_1400a382a(lVar6,local_ec);
  if (lVar9 != 0) {
    FUN_147552d56(lVar9 + 0x18,local_120,*(undefined4 *)(param_1 + 0x70));
    FUN_1400ab8bc(&local_138,lVar9 + 0x18,local_110);
    if (local_130 != (undefined8 *)0x0) {
      local_184 = iVar4;
      do {
        lVar11 = (longlong)*(int *)((longlong)local_130 + 0x1c);
        if (((lVar11 == -1) || ((longlong)local_128 < 0)) ||
           (*(int *)(*(longlong *)(local_138 + 0x40) + 4 + lVar11 * 0xc) <= local_128)) break;
        lVar12 = (longlong)*(int *)(*(longlong *)(local_138 + 0x40) + lVar11 * 0xc) * 0x30 +
                 *(longlong *)(local_138 + 0x50);
        lVar11 = (longlong)local_128 * 0x30;
        if (((*(char *)(lVar11 + 4 + lVar12) == '\0') &&
            (lVar11 = FUN_1400d12c6(lVar9,lVar12 + lVar11), lVar11 != 0)) &&
           ((plVar7 = (longlong *)FUN_1400a4c08(lVar11), plVar7 != (longlong *)0x0 &&
            (FUN_140b56bb8(lVar6,&local_13c,plVar7), local_13c != -1)))) {
          if (local_9c == '\0') {
LAB_14769b624:
            FUN_14179efe6(*(longlong *)(param_1 + 0x60) + 0x28,&local_98);
            local_168 = local_98;
            local_160 = uStack_90;
            if (uStack_90 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_158,param_2,&local_168);
            plVar7 = uStack_90;
            if (uStack_90 != (longlong *)0x0) {
              LOCK();
              plVar8 = uStack_90 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*uStack_90)(uStack_90);
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
          else {
            if ((longlong)*(int *)((longlong)local_130 + 0x1c) == -1) {
              lVar12 = 0;
            }
            else {
              lVar12 = (longlong)
                       *(int *)(*(longlong *)(local_138 + 0x40) +
                               (longlong)*(int *)((longlong)local_130 + 0x1c) * 0xc) * 0x30 +
                       *(longlong *)(local_138 + 0x50);
            }
            if (local_a0 != *(int *)(lVar12 + (longlong)local_128 * 0x30)) goto LAB_14769b624;
            local_158 = local_b8;
            iStack_154 = iStack_b4;
            iStack_150 = iStack_b0;
            iStack_14c = iStack_ac;
          }
          if ((((iStack_154 != 0 || local_158 != 0) || iStack_150 != 0) || iStack_14c != 0) &&
             (lVar12 = FUN_14055aa88(lVar6,local_13c), lVar12 != 0)) {
            sVar3 = *(short *)(lVar11 + 0xac);
            local_180 = param_2;
            FUN_1402985cb(local_170,*(undefined8 *)(param_1 + 0x70),lVar11 + 0x40);
            param_2 = local_180;
            local_bc = 0;
            uStack_90 = local_178;
            local_84 = local_184;
            local_80 = 0xffff;
            local_7c = 0xffff;
            uStack_7a = 0;
            local_76 = 0;
            local_74 = local_158;
            iStack_70 = iStack_154;
            iStack_6c = iStack_150;
            iStack_68 = iStack_14c;
            local_58 = *param_3;
            local_50 = (code **)&local_bc;
            local_d8 = CONCAT31(local_d8._1_3_,2);
            iStack_d4 = 0;
            iStack_d0 = CONCAT31(iStack_d0._1_3_,2);
            iStack_cc = 0;
            local_e0 = &local_98;
            local_e8 = FUN_1433286aa;
            local_98 = param_1;
            local_88 = (int)sVar3;
            local_60 = lVar12;
            FUN_147554af6(lVar12,local_170[0],&local_e8,&local_d8);
            local_188 = local_188 + local_bc;
          }
        }
        FUN_1400ab81a(&local_138);
      } while (local_130 != (undefined8 *)0x0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_188;
}



// FUNCTION 14769b962 FUN_14769b962 body=354 status=ok
// SIG undefined FUN_14769b962(void)

void FUN_14769b962(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_78;
  longlong local_70 [2];
  undefined4 local_5c;
  undefined4 local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = 0xffffffff;
  if (*(longlong *)(param_3 + 0x120) != 0) {
    FUN_1475a79fa(param_2,&local_5c);
    uVar5 = local_5c;
  }
  FUN_1475a79fa(param_2,&local_44,param_3);
  iVar4 = local_44;
  if (local_44 == -1) {
    FUN_140056680(local_70,L"Transform");
    FUN_1446ddc76(&local_78,"Transform",1);
    FUN_140aecba6(&local_5c,local_78,local_70);
    local_88 = &local_5c;
    FUN_1475a7930(param_2,&local_48,param_3,uVar5);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    iVar4 = local_48;
    if (local_48 == -1) goto LAB_14769ba3f;
  }
  local_58 = *(undefined4 *)(param_1 + 0x78);
  iVar2 = FUN_14769b2c6(param_1,param_3);
  lVar1 = *(longlong *)(param_3 + 0xa8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1c8) == param_3)) {
    FUN_1447210f0(lVar1);
    iVar3 = FUN_14769b2c6(param_1,lVar1,&local_5c);
    iVar2 = iVar2 + iVar3;
  }
  if (0 < iVar2) {
    FUN_1475a7ad4(param_2,iVar4);
  }
LAB_14769ba3f:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769bac6 FUN_14769bac6 body=93 status=ok
// SIG undefined FUN_14769bac6(void)

int * FUN_14769bac6(longlong *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  uVar6 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(*param_1 + (ulonglong)uVar1 * 0x24) < param_2) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((int)uVar7 < (int)uVar3) {
    piVar2 = (int *)(*param_1 + (ulonglong)uVar7 * 0x24);
    piVar5 = (int *)0x0;
    if (*piVar2 <= param_2) {
      piVar5 = piVar2 + 1;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  return piVar5;
}



// FUNCTION 14769bb24 FUN_14769bb24 body=52 status=ok
// SIG undefined FUN_14769bb24(void)

void FUN_14769bb24(longlong *param_1)

{
  FUN_1476a7c7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14769bb5c FUN_14769bb5c body=343 status=ok
// SIG undefined FUN_14769bb5c(void)

undefined8 * FUN_14769bb5c(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14769c33c(*(longlong *)(param_1 + 0x28) + 0x28,&local_40,param_3,
                *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x62));
  FUN_14331c604(*(longlong *)(param_1 + 0x28) + 0x28,&local_58,param_3 & 0xffffffff,
                *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x58));
  if ((local_30 != 0) && (local_48 != 0)) {
    uVar1 = *(uint *)(local_48 + 4);
    if (((ulonglong)uVar1 != 0xffffffff) &&
       ((-1 < (int)uVar1 && ((int)uVar1 < *(int *)(param_1 + 0x70))))) {
      lVar4 = param_1 + 0x58;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x68);
      }
      if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x48) + (ulonglong)uVar1 * 0x60;
        *(undefined2 *)param_2 = *(undefined2 *)(lVar4 + 0x4c);
        uVar3 = FUN_14479d2ce(lVar4 + 0x18);
        param_2[1] = uVar3;
        uVar2 = *(undefined2 *)(lVar4 + 0x48);
        goto LAB_14769bc44;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = 0xffff;
  *(undefined2 *)param_2 = 0xffff;
LAB_14769bc44:
  *(undefined2 *)(param_2 + 2) = uVar2;
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + -1;
    UNLOCK();
    if (local_50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_58 + 8));
    }
  }
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0x18) = *(int *)(local_40 + 0x18) + -1;
    UNLOCK();
    if (local_38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_40 + 8));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769bcb4 FUN_14769bcb4 body=305 status=ok
// SIG undefined FUN_14769bcb4(void)

void FUN_14769bcb4(longlong *param_1)

{
  longlong lVar1;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      lVar1 = *local_68 + (longlong)iStack_4c * 0x60;
      if (*(char *)(*local_68 + 0x58 + (longlong)iStack_4c * 0x60) == '\x01') {
        *(undefined1 *)(lVar1 + 0x58) = 0;
      }
      (*(code *)(&PTR_FUN_14a4c7e50)[*(byte *)(lVar1 + 0x10)])();
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769bde6 FUN_14769bde6 body=259 status=ok
// SIG undefined FUN_14769bde6(void)

void FUN_14769bde6(longlong *param_1,longlong param_2,longlong *param_3,undefined *param_4)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  ulonglong uVar5;
  
  if ((ulonglong)*(ushort *)(*param_1 + 0x48) != 0xffff) {
    uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x98) + (ulonglong)*(ushort *)(*param_1 + 0x48) * 8)
    ;
    puVar4 = &DAT_14cab2728;
    if (uVar1 != 0xffff) {
      puVar4 = (undefined *)((ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_2 + 8));
    }
    if (puVar4 != param_4) {
      FUN_1400abb7c(param_4);
    }
  }
  if (0 < (int)param_3[1]) {
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(*param_3 + uVar5 * 4);
      if ((*(uint *)(*param_1 + 0x3c + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1) ==
          0) {
        FUN_140dba9e6(param_4);
      }
      else if ((int)(uint)uVar1 < *(int *)(param_4 + 0x20)) {
        bVar2 = (byte)uVar1 & 0x1f;
        *(uint *)(param_4 + (ulonglong)(uVar1 >> 5) * 4) =
             *(uint *)(param_4 + (ulonglong)(uVar1 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)param_3[1]);
  }
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1[1] + 0x14));
  bVar2 = *(byte *)(*param_1 + 0x5e);
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x10a);
  if ((bVar2 & 1) == 0) {
    if ((int)(uint)uVar1 < *(int *)(param_4 + 0x20)) {
      bVar2 = (byte)uVar1 & 0x1f;
      *(uint *)(param_4 + (ulonglong)(uVar1 >> 5) * 4) =
           *(uint *)(param_4 + (ulonglong)(uVar1 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    }
    return;
  }
  FUN_140dba9e6(param_4);
  return;
}



// FUNCTION 14769beea FUN_14769beea body=148 status=ok
// SIG undefined FUN_14769beea(void)

undefined8 *
FUN_14769beea(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined2 *local_30;
  undefined2 local_26;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_26;
  local_24 = *param_4;
  local_22 = 1;
  local_38 = param_1 + 0x4e;
  local_40 = param_1 + 0x4c;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  local_26 = param_3;
  FUN_1476a8404(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0xb) = uVar1;
  *param_2 = &PTR_FUN_14a4e05b0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769bf80 FUN_14769bf80 body=361 status=ok
// SIG undefined FUN_14769bf80(void)

undefined2 * FUN_14769bf80(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476a3896(local_58,param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476a3902(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar1 + lVar2) + 8))
                (*(longlong **)((longlong)puVar1 + lVar2),&local_78,&local_80);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_88;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14769c0ea FUN_14769c0ea body=229 status=ok
// SIG undefined FUN_14769c0ea(void)

undefined8 *
FUN_14769c0ea(longlong param_1,undefined8 *param_2,undefined2 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38 [4];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *param_4;
  local_28 = (longlong *)param_4[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_48 = param_1 + 0x4e;
  local_50 = param_1 + 0x4c;
  local_58 = param_1 + 0x48;
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  local_40 = local_38;
  local_38[0] = param_3;
  FUN_1476a854a(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x30);
  plVar4 = local_28;
  *(undefined1 *)(param_2 + 0xd) = uVar3;
  *param_2 = &PTR_FUN_14a4e05f0;
  if ((local_30 != -1) && (local_28 != (longlong *)0x0)) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769c1d2 FUN_14769c1d2 body=361 status=ok
// SIG undefined FUN_14769c1d2(void)

undefined2 * FUN_14769c1d2(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476a3bf0(local_58,param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x68) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476a3c5c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined8 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar1 + lVar2) + 8))
                (*(longlong **)((longlong)puVar1 + lVar2),&local_78,&local_80);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_88;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14769c33c FUN_14769c33c body=185 status=ok
// SIG undefined FUN_14769c33c(void)

undefined8 * FUN_14769c33c(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1476a860c(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14769c3fa FUN_14769c3fa body=211 status=ok
// SIG undefined FUN_14769c3fa(void)

void FUN_14769c3fa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_38;
  uint local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x128))) &&
       (local_28 = *(undefined8 *)(*(longlong *)(lVar2 + 0x120) + (longlong)iVar1 * 8),
       0 < (int)local_28)) {
      plVar3 = (longlong *)FUN_14009d2a0();
      lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x58;
      lVar2 = *plVar3 + lVar4;
      lVar4 = lVar4 + *plVar3;
      plVar5 = (longlong *)(lVar4 + 0x30);
      if ((*(byte *)(lVar4 + 0x50) & 2) == 0) {
        plVar5 = (longlong *)*plVar5;
      }
      local_48 = *(undefined8 *)(param_1 + 0x28);
      local_38 = (ulonglong)*(ushort *)(lVar2 + 0x10) * 4 + plVar3[2];
      local_30 = (uint)*(ushort *)(lVar2 + 0x12);
      local_58 = param_2;
      local_50 = param_3;
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769c4ce FUN_14769c4ce body=169 status=ok
// SIG undefined FUN_14769c4ce(void)

undefined8 * FUN_14769c4ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  ulonglong *local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_22 = *(undefined2 *)param_2;
  local_30 = &local_20;
  local_38 = &local_22;
  FUN_1447c44f6(param_2 + 2);
  FUN_14010b303(param_3,param_2 + 2,1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769c57c FUN_14769c57c body=1627 status=ok
// SIG undefined FUN_14769c57c(void)

void FUN_14769c57c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1f8 [32];
  ushort *local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined2 *local_1b0;
  undefined4 *local_1a8;
  undefined4 *local_1a0;
  undefined4 *local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 *local_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined2 local_16a;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [2];
  ushort local_15a;
  undefined1 local_158;
  undefined1 uStack_157;
  undefined2 uStack_156;
  undefined2 uStack_154;
  undefined2 uStack_152;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined2 uStack_14e;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 uStack_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_120 [8];
  ushort local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [24];
  undefined1 local_e0 [16];
  longlong local_d0;
  longlong local_b8;
  undefined8 local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar5 = FUN_14009d2a0();
  local_1b8 = FUN_14038fb82();
  lVar1 = param_1 + 0x70;
  FUN_14769cbd8(param_1 + 0xa8,*(undefined4 *)(param_1 + 0x58));
  FUN_14769cbd8(param_1 + 0xb8,*(undefined4 *)(param_1 + 0x58));
  uStack_157 = 0;
  local_130 = lVar1;
  FUN_14769cc54(param_2,&local_170,&local_158);
  uVar2 = *(undefined4 *)(lVar5 + 0xc0);
  local_146 = *(undefined2 *)(lVar5 + 0xcc);
  local_144 = *(undefined2 *)(lVar5 + 0xf4);
  local_158 = (undefined1)*(undefined2 *)(lVar5 + 0x5a);
  uStack_157 = (undefined1)((ushort)*(undefined2 *)(lVar5 + 0x5a) >> 8);
  uStack_156 = (undefined2)*(undefined4 *)(lVar5 + 0xbc);
  uStack_154 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xbc) >> 0x10);
  uStack_152 = (undefined2)uVar2;
  uStack_150 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_14f = (undefined1)((uint)uVar2 >> 0x18);
  uStack_14e = (undefined2)*(undefined4 *)(lVar5 + 0xc4);
  uStack_14c = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc4) >> 0x10);
  uStack_14a = (undefined2)*(undefined4 *)(lVar5 + 200);
  uStack_148 = (undefined2)((uint)*(undefined4 *)(lVar5 + 200) >> 0x10);
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_188 = &local_160;
  local_160 = *(undefined4 *)(lVar5 + 0x114);
  local_180 = local_15c;
  FUN_14769cd5e(&local_158,&local_130);
  local_50 = (undefined4 *)((longlong)&local_168 + 2);
  local_168 = CONCAT22(local_168._2_2_,*(undefined2 *)(param_1 + 0x66));
  local_58 = (code *)&local_168;
  FUN_1447c44f6(local_108,&local_58);
  local_15a = *(ushort *)(lVar5 + 0x130);
  local_50 = (undefined4 *)&local_158;
  local_58 = (code *)&local_15a;
  FUN_1447c44f6(local_e0,&local_58);
  local_164 = CONCAT22(local_164._2_2_,local_118) | 0x200;
  local_58 = FUN_1476a8d8e;
  local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
  local_1d8 = (ushort *)&local_164;
  local_1d0 = &local_58;
  local_1c8 = &local_190;
  local_1c0 = lVar1;
  local_190 = lVar1;
  FUN_1476a8af6(&local_130,&local_174,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(param_2,local_170,local_174);
  pcVar3 = local_58;
  local_58._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0xf4),*(undefined2 *)(lVar5 + 0x5a));
  uVar4 = local_58;
  local_58._6_2_ = SUB82(pcVar3,6);
  local_58._0_6_ = (uint6)(uint5)uVar4;
  local_50 = (undefined4 *)CONCAT35(local_50._5_3_,0x6ff);
  local_164 = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar5 + 0x110));
  FUN_1476a9974(&local_130);
  local_158 = SUB81(&local_164,0);
  uStack_157 = (undefined1)((ulonglong)&local_164 >> 8);
  uStack_156 = (undefined2)((ulonglong)&local_164 >> 0x10);
  uStack_154 = (undefined2)((ulonglong)&local_164 >> 0x20);
  uStack_152 = (undefined2)((ulonglong)&local_164 >> 0x30);
  uStack_150 = SUB81(&local_160,0);
  uStack_14f = (undefined1)((ulonglong)&local_160 >> 8);
  uStack_14e = (undefined2)((ulonglong)&local_160 >> 0x10);
  uStack_14c = (undefined2)((ulonglong)&local_160 >> 0x20);
  uStack_14a = (undefined2)((ulonglong)&local_160 >> 0x30);
  FUN_1447c44f6(local_120,&local_158);
  local_15a = *(ushort *)(lVar5 + 0x130);
  local_158 = SUB81(&local_15a,0);
  uStack_157 = (undefined1)((ulonglong)&local_15a >> 8);
  uStack_156 = (undefined2)((ulonglong)&local_15a >> 0x10);
  uStack_154 = (undefined2)((ulonglong)&local_15a >> 0x20);
  uStack_152 = (undefined2)((ulonglong)&local_15a >> 0x30);
  uStack_150 = SUB81(&local_158,0);
  uStack_14f = (undefined1)((ulonglong)&local_158 >> 8);
  uStack_14e = (undefined2)((ulonglong)&local_158 >> 0x10);
  uStack_14c = (undefined2)((ulonglong)&local_158 >> 0x20);
  uStack_14a = (undefined2)((ulonglong)&local_158 >> 0x30);
  FUN_1447c44f6(local_f8,&local_158);
  local_190 = local_1c0;
  local_168 = CONCAT22(local_168._2_2_,local_130._4_2_) | 0x200;
  local_158 = 0x80;
  uStack_157 = 0x9c;
  uStack_156 = 0x476a;
  uStack_154 = 1;
  uStack_152 = 0;
  uStack_150 = 3;
  local_1d8 = (ushort *)&local_168;
  local_1d0 = (undefined8 *)&local_158;
  local_1c8 = &local_190;
  FUN_1476a9a2e(&local_130,&local_160,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(param_2,local_170,local_160);
  uVar2 = *(undefined4 *)(lVar5 + 0xc0);
  local_146 = *(undefined2 *)(lVar5 + 0xcc);
  local_144 = *(undefined2 *)(lVar5 + 0xf4);
  local_158 = (undefined1)*(undefined2 *)(lVar5 + 0x5a);
  uStack_157 = (undefined1)((ushort)*(undefined2 *)(lVar5 + 0x5a) >> 8);
  uStack_156 = (undefined2)*(undefined4 *)(lVar5 + 0xbc);
  uStack_154 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xbc) >> 0x10);
  uStack_152 = (undefined2)uVar2;
  uStack_150 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_14f = (undefined1)((uint)uVar2 >> 0x18);
  uStack_14e = (undefined2)*(undefined4 *)(lVar5 + 0xc4);
  uStack_14c = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc4) >> 0x10);
  uStack_14a = (undefined2)*(undefined4 *)(lVar5 + 200);
  uStack_148 = (undefined2)((uint)*(undefined4 *)(lVar5 + 200) >> 0x10);
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_198 = &local_164;
  local_168 = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar5 + 0x110));
  local_1a0 = &local_168;
  FUN_14769cdfc(&local_158,&local_130);
  local_16a = *(undefined2 *)(lVar5 + 0x130);
  local_50 = &local_168;
  local_58 = (code *)&local_16a;
  FUN_1447c44f6(local_e0,&local_58);
  local_190 = local_1c0;
  local_15a = local_118 | 0x200;
  local_58 = FUN_1476aa2d4;
  local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
  local_1d8 = &local_15a;
  local_1d0 = &local_58;
  local_1c8 = &local_190;
  FUN_1476aa03c(&local_130,&local_164,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(param_2,local_160,local_164);
  uStack_152 = *(undefined2 *)(lVar5 + 0xc0);
  uStack_154 = *(undefined2 *)(lVar5 + 0xbe);
  uStack_156 = *(undefined2 *)(lVar5 + 0xbc);
  uStack_14c = *(undefined2 *)(lVar5 + 0xc6);
  uStack_14e = *(undefined2 *)(lVar5 + 0xc4);
  local_146 = *(undefined2 *)(lVar5 + 0xcc);
  uStack_148 = *(undefined2 *)(lVar5 + 0xca);
  uStack_14a = *(undefined2 *)(lVar5 + 200);
  local_144 = *(undefined2 *)(local_1b8 + 0x86);
  local_158 = (undefined1)*(undefined2 *)(lVar5 + 0x5c);
  uStack_157 = (undefined1)((ushort)*(undefined2 *)(lVar5 + 0x5c) >> 8);
  uStack_150 = (undefined1)*(undefined2 *)(lVar5 + 0xc2);
  uStack_14f = (undefined1)((ushort)*(undefined2 *)(lVar5 + 0xc2) >> 8);
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_16a = *(undefined2 *)(param_1 + 0x66);
  local_1b0 = &local_16a;
  local_1a8 = &local_168;
  FUN_14769ce98(&local_158,&local_130);
  local_190 = local_1c0;
  local_15a = local_118 & 0xfdff;
  local_58 = FUN_1476aacde;
  local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
  local_1c8 = &local_190;
  local_1d8 = &local_15a;
  local_1d0 = &local_58;
  FUN_1476aaa44(&local_130,&local_168,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(param_2,local_174,local_168);
  FUN_1406adae8(param_2,local_160,local_168);
  FUN_1406adae8(param_2,local_164,local_168);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769cbd8 FUN_14769cbd8 body=123 status=ok
// SIG undefined FUN_14769cbd8(void)

void FUN_14769cbd8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1476a8684(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x60 + *param_1),0,(longlong)(param_2 - iVar1) * 0x60);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1476a8718(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14769cc54 FUN_14769cc54 body=264 status=ok
// SIG undefined FUN_14769cc54(void)

undefined8 FUN_14769cc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = &LAB_1476a87c6;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4e0630;
  local_50 = plVar3 + 2;
  plVar3[2] = (longlong)&PTR_FUN_14a4e0648;
  plVar3[3] = *param_4;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769cd5e FUN_14769cd5e body=157 status=ok
// SIG undefined FUN_14769cd5e(void)

undefined8 * FUN_14769cd5e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[9] = 0x10000000000;
  param_2[0xe] = 0x10000000000;
  param_2[0x15] = 0x10000000000;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x1a] = 0x10000000000;
  FUN_1476a8976(param_2,param_2 + 5);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1403b5126(param_2 + 5,&local_38,2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769cdfc FUN_14769cdfc body=154 status=ok
// SIG undefined FUN_14769cdfc(void)

undefined8 * FUN_14769cdfc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[9] = 0x10000000000;
  param_2[0xe] = 0x10000000000;
  param_2[0x15] = 0x10000000000;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x1a] = 0x10000000000;
  FUN_1476a8976(param_2,param_2 + 5);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769ce98 FUN_14769ce98 body=154 status=ok
// SIG undefined FUN_14769ce98(void)

undefined8 * FUN_14769ce98(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[9] = 0x10000000000;
  param_2[0xe] = 0x10000000000;
  param_2[0x15] = 0x10000000000;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x1a] = 0x10000000000;
  FUN_1476aa8c4(param_2,param_2 + 5);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769cf34 FUN_14769cf34 body=1526 status=ok
// SIG undefined FUN_14769cf34(void)

void FUN_14769cf34(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined2 *local_230;
  undefined2 *local_228;
  undefined8 *local_220;
  undefined2 *local_218;
  undefined2 *local_210;
  undefined2 *local_208;
  undefined4 *local_200;
  undefined2 local_1f8;
  undefined2 uStack_1f6;
  undefined2 uStack_1f4;
  undefined2 uStack_1f2;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined2 uStack_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined1 local_1df;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined2 *local_1c0;
  undefined8 local_1b8;
  undefined2 local_1ae;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [16];
  undefined1 local_190 [24];
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [16];
  longlong local_140;
  longlong local_128;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined1 local_78 [32];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = param_3;
  lVar5 = FUN_14009d2a0();
  lVar6 = FUN_14038fb82();
  lVar1 = param_1 + 0x70;
  FUN_14769cbd8(param_1 + 0xa8,*(undefined4 *)(param_1 + 0x58));
  FUN_14769cbd8(param_1 + 0xb8,*(undefined4 *)(param_1 + 0x58));
  local_88 = 0;
  lVar7 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar7 = param_2;
  }
  FUN_1476a3cb0(local_c8,lVar7,*(undefined4 *)(param_2 + 0x48));
  local_58 = 0;
  lVar7 = param_2 + 0x50;
  if (*(longlong *)(param_2 + 0x70) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
  }
  FUN_144727e18(local_78,lVar7,*(undefined4 *)(param_2 + 0x78),0);
  local_1f8 = *(undefined2 *)(lVar5 + 0x5a);
  local_1e6 = *(undefined2 *)(lVar5 + 0xcc);
  local_1e4 = *(undefined2 *)(lVar5 + 0xf4);
  uStack_1f6 = (undefined2)*(undefined4 *)(lVar5 + 0xbc);
  uStack_1f4 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xbc) >> 0x10);
  uStack_1f2 = (undefined2)*(undefined4 *)(lVar5 + 0xc0);
  uStack_1f0 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc0) >> 0x10);
  uStack_1ee = (undefined2)*(undefined4 *)(lVar5 + 0xc4);
  uStack_1ec = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc4) >> 0x10);
  uStack_1ea = (undefined2)*(undefined4 *)(lVar5 + 200);
  uStack_1e8 = (undefined2)((uint)*(undefined4 *)(lVar5 + 200) >> 0x10);
  local_1df = 0;
  local_1dc = 0x6ff;
  local_1d8 = 0;
  uStack_1a8 = *(undefined2 *)(lVar5 + 0x114);
  local_208 = &uStack_1a8;
  uStack_1a6 = *(undefined2 *)(lVar5 + 0x116);
  local_200 = &uStack_1a4;
  FUN_14769cd5e(&local_1f8,local_1a0);
  local_1c0 = (undefined2 *)((longlong)&local_1b8 + 2);
  local_1b8 = CONCAT62(local_1b8._2_6_,*(undefined2 *)(param_1 + 0x66));
  local_1c8 = &local_1b8;
  FUN_1447c44f6(local_178,&local_1c8);
  uStack_1ac = *(undefined2 *)(lVar5 + 0x130);
  local_1c0 = &uStack_1aa;
  local_1c8 = (undefined8 *)&uStack_1ac;
  FUN_1447c44f6(local_150,&local_1c8);
  local_248 = &local_1c8;
  local_1c8 = (undefined8 *)lVar1;
  FUN_14331c712(local_1a0,&local_1d0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  lVar7 = (longlong)local_1c8;
  local_1c8._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0xf4),*(undefined2 *)(lVar5 + 0x5a));
  uVar4 = local_1c8;
  local_1c8._6_2_ = SUB82(lVar7,6);
  local_1c8._0_6_ = (uint6)(uint5)uVar4;
  local_1c0 = (undefined2 *)CONCAT35(local_1c0._5_3_,0x6ff);
  lVar7 = (longlong)&local_1b8 + 4;
  local_1b8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar5 + 0x110));
  FUN_1476a9974(local_1a0);
  local_1f8 = SUB82(&local_1b8,0);
  uStack_1f6 = (undefined2)((ulonglong)&local_1b8 >> 0x10);
  uStack_1f4 = (undefined2)((ulonglong)&local_1b8 >> 0x20);
  uStack_1f2 = (undefined2)((ulonglong)&local_1b8 >> 0x30);
  uStack_1f0 = (undefined2)lVar7;
  uStack_1ee = (undefined2)((ulonglong)lVar7 >> 0x10);
  uStack_1ec = (undefined2)((ulonglong)lVar7 >> 0x20);
  uStack_1ea = (undefined2)((ulonglong)lVar7 >> 0x30);
  FUN_1447c44f6(local_190,&local_1f8);
  uStack_1ac = *(undefined2 *)(lVar5 + 0x130);
  local_1f8 = SUB82(&uStack_1ac,0);
  uStack_1f6 = (undefined2)((ulonglong)&uStack_1ac >> 0x10);
  uStack_1f4 = (undefined2)((ulonglong)&uStack_1ac >> 0x20);
  uStack_1f2 = (undefined2)((ulonglong)&uStack_1ac >> 0x30);
  uStack_1f0 = SUB82(&uStack_1aa,0);
  uStack_1ee = (undefined2)((ulonglong)&uStack_1aa >> 0x10);
  uStack_1ec = (undefined2)((ulonglong)&uStack_1aa >> 0x20);
  uStack_1ea = (undefined2)((ulonglong)&uStack_1aa >> 0x30);
  FUN_1447c44f6(local_168,&local_1f8);
  local_1f8 = (undefined2)lVar1;
  uStack_1f6 = (undefined2)((ulonglong)lVar1 >> 0x10);
  uStack_1f4 = (undefined2)((ulonglong)lVar1 >> 0x20);
  uStack_1f2 = (undefined2)((ulonglong)lVar1 >> 0x30);
  local_248 = (undefined8 *)&local_1f8;
  FUN_14331cbae(local_1a0,&uStack_1a8,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,uStack_1a8)) != 0) {
    FUN_147552ffc(param_2,0xffff,&uStack_1a8);
  }
  local_1f8 = *(undefined2 *)(lVar5 + 0x5a);
  local_1e6 = *(undefined2 *)(lVar5 + 0xcc);
  local_1e4 = *(undefined2 *)(lVar5 + 0xf4);
  uStack_1f6 = (undefined2)*(undefined4 *)(lVar5 + 0xbc);
  uStack_1f4 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xbc) >> 0x10);
  uStack_1f2 = (undefined2)*(undefined4 *)(lVar5 + 0xc0);
  uStack_1f0 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc0) >> 0x10);
  uStack_1ee = (undefined2)*(undefined4 *)(lVar5 + 0xc4);
  uStack_1ec = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc4) >> 0x10);
  uStack_1ea = (undefined2)*(undefined4 *)(lVar5 + 200);
  uStack_1e8 = (undefined2)((uint)*(undefined4 *)(lVar5 + 200) >> 0x10);
  local_1df = 0;
  local_1dc = 0x6ff;
  local_1d8 = 0;
  uStack_1ac = *(undefined2 *)(lVar5 + 0x110);
  local_210 = &uStack_1a8;
  uStack_1aa = *(undefined2 *)(param_1 + 0x66);
  local_218 = &uStack_1ac;
  FUN_14769cdfc(&local_1f8,local_1a0);
  local_1ae = *(undefined2 *)(lVar5 + 0x130);
  local_1c0 = &uStack_1ac;
  local_1c8 = (undefined8 *)&local_1ae;
  FUN_1447c44f6(local_150);
  local_248 = &local_1b8;
  local_1b8 = lVar1;
  FUN_14331d012(local_1a0,&local_1c8,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined8 *)0x0) {
    FUN_147552ffc(param_2,0xffff,&local_1c8);
  }
  if (local_1d0 != (undefined8 *)0x0) {
    FUN_147552ffc(param_2,0xffff,&local_1d0);
  }
  uStack_1f2 = *(undefined2 *)(lVar5 + 0xc0);
  uStack_1f4 = *(undefined2 *)(lVar5 + 0xbe);
  local_1f8 = *(undefined2 *)(lVar5 + 0x5c);
  uStack_1f6 = *(undefined2 *)(lVar5 + 0xbc);
  uStack_1ec = *(undefined2 *)(lVar5 + 0xc6);
  uStack_1ee = *(undefined2 *)(lVar5 + 0xc4);
  uStack_1f0 = *(undefined2 *)(lVar5 + 0xc2);
  local_1e6 = *(undefined2 *)(lVar5 + 0xcc);
  uStack_1e8 = *(undefined2 *)(lVar5 + 0xca);
  uStack_1ea = *(undefined2 *)(lVar5 + 200);
  local_1e4 = *(undefined2 *)(lVar6 + 0x86);
  local_1df = 0;
  local_1dc = 0x6ff;
  local_1d8 = 0;
  uStack_1ac = *(undefined2 *)(param_1 + 0x66);
  local_230 = &uStack_1ac;
  local_228 = &uStack_1aa;
  FUN_14769ce98(&local_1f8,local_1a0);
  local_240 = &local_1b8;
  local_248 = (undefined8 *)local_238;
  local_1b8 = lVar1;
  FUN_14331d4ae(local_1a0,&local_220,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_220 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_220 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_220)(local_220,1);
    }
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_1c8 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_1c8)(local_1c8,1);
    }
  }
  puVar3 = (undefined8 *)CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,uStack_1a8));
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (local_1d0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_1d0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_1d0)(local_1d0,1);
    }
  }
  FUN_14588b8d6(local_78);
  FUN_14009d40c(local_c8);
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769d546 FUN_14769d546 body=347 status=ok
// SIG undefined FUN_14769d546(void)

void FUN_14769d546(undefined8 *param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x1c] != 0) goto LAB_14769d572;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  puVar4 = param_1 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_1 + 0xe != param_5) {
    if (*(char *)(param_5 + 0xc) == '\x01') {
      puVar4 = param_5;
      puVar5 = param_1 + 0xe;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1a) != '\x01') goto LAB_14769d5e2;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1a) = uVar1;
  }
LAB_14769d5e2:
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14a4e0740;
  local_48[3] = param_1;
  (**(code **)(*param_2 + 0xbc8))(param_2,&local_38,&local_48);
  param_1[0x1c] = local_38;
  FUN_1449db362(&local_48);
LAB_14769d572:
  if (*(char *)(param_5 + 0xc) == '\x01') {
    *(undefined1 *)(param_5 + 0xc) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769d6a2 FUN_14769d6a2 body=5527 status=ok
// SIG undefined FUN_14769d6a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14769d6a2(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar42 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar62;
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double dVar69;
  undefined1 auVar68 [16];
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined1 local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined1 local_2b0 [24];
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_280 [24];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar65 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((*param_1 != 0) && (cVar10 = (char)param_1[1], cVar10 != '\x02')) {
    dVar38 = (double)param_1[2];
    dVar62 = (double)param_1[3];
    auVar31 = *(undefined1 (*) [16])(param_1 + 4);
    dVar29 = auVar31._0_8_;
    dVar59 = auVar31._8_8_;
    dVar53 = (double)param_1[6];
    dVar56 = (double)param_1[7];
    dVar26 = (double)param_1[8];
    dVar39 = (double)param_1[9];
    local_348 = *(double *)*(undefined1 (*) [16])(param_1 + 10);
    dStack_340 = (double)param_1[0xb];
    auVar22 = *(undefined1 (*) [16])(param_1 + 0xc);
    dVar44 = auVar22._0_8_;
    dVar37 = auVar22._8_8_;
    if ((char)param_1[0x1a] == '\x01') {
      auVar31 = *(undefined1 (*) [16])(param_1 + 0x16);
      dVar50 = auVar31._0_8_;
      dVar67 = auVar31._8_8_;
      auVar40 = *(undefined1 (*) [16])(param_1 + 0x18);
      dVar54 = auVar40._0_8_;
      dVar69 = auVar40._8_8_;
      auVar31 = minpd(*(undefined1 (*) [16])(param_1 + 10),auVar31);
      auVar40 = minpd(auVar22,auVar40);
      auVar22._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      iVar12 = movmskpd((int)param_1,auVar22);
      auVar48._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar48._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar15 = movmskpd(param_2,auVar48);
      if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
        dVar5 = (double)param_1[0xe];
        dVar6 = (double)param_1[0xf];
        dVar30 = (double)param_1[0x11];
        dVar51 = (double)param_1[0x11];
        dVar55 = (double)param_1[0xe];
        dVar52 = (double)param_1[0xe];
        dVar57 = dVar55 * dVar62;
        dVar60 = dVar52 * dVar38;
        dVar46 = (double)param_1[0xf];
        dVar43 = (double)param_1[0xf];
        dVar7 = (double)param_1[0x10];
        dVar8 = (double)param_1[0x11];
        dVar63 = dVar38 * dVar46;
        dVar64 = dVar62 * dVar43;
        dVar49 = (double)param_1[0x10];
        dVar47 = (double)param_1[0x10];
        dVar45 = dVar38 * dVar47;
        dVar38 = dVar62 * dVar49 * -1.0 + dVar29 * dVar46 + dVar59 * dVar55 * 1.0 + dVar38 * dVar30;
        dVar62 = dVar45 * 1.0 + dVar59 * dVar43 + dVar29 * dVar52 * -1.0 + dVar62 * dVar51;
        dVar53 = dVar53 * dVar50;
        dVar56 = dVar56 * dVar67;
        dVar26 = dVar26 * dVar54;
        dVar39 = dVar39 * dVar69;
        dVar52 = dVar56 * dVar5 - dVar53 * dVar6;
        dVar55 = dVar26 * dVar6 - dVar56 * dVar7;
        dVar43 = dVar53 * dVar7 - dVar26 * dVar5;
        dVar46 = dVar39 * dVar8 - dVar39 * dVar8;
        dVar55 = dVar55 + dVar55;
        dVar43 = dVar43 + dVar43;
        dVar52 = dVar52 + dVar52;
        dVar46 = dVar46 + dVar46;
        local_348 = local_348 * dVar50;
        dStack_340 = dStack_340 * dVar67;
        dVar53 = (dVar52 * dVar6 - dVar7 * dVar43) + dVar30 * dVar55 + dVar53 +
                 (double)param_1[0x12];
        dVar56 = (dVar55 * dVar7 - dVar52 * dVar5) + dVar51 * dVar43 + dVar56 +
                 (double)param_1[0x13];
        dVar26 = (dVar43 * dVar5 - dVar6 * dVar55) + dVar30 * dVar52 + dVar26 +
                 (double)param_1[0x14];
        dVar39 = (dVar46 * dVar8 - dVar46 * dVar8) + dVar51 * dVar46 + dVar39 +
                 (double)param_1[0x15];
        dVar44 = dVar44 * dVar54;
        dVar37 = dVar37 * dVar69;
        auVar31._8_8_ = dVar29 * dVar47 * -1.0 + ((dVar60 * -1.0 + dVar59 * dVar51) - dVar64);
        auVar31._0_8_ = dVar59 * dVar49 * 1.0 + ((dVar57 * 1.0 + dVar29 * dVar30) - dVar63);
        param_2 = 0;
      }
      else {
        dVar51 = (double)param_1[0xe];
        dVar52 = (double)param_1[0xf];
        dVar55 = (double)param_1[0x10];
        dVar43 = dVar52 + dVar52;
        dVar46 = dVar55 + dVar55;
        dVar30 = dVar51 * (dVar51 + dVar51);
        dVar39 = (double)param_1[0x11];
        dVar47 = dVar46 * dVar39;
        dVar49 = (dVar51 + dVar51) * (double)param_1[0x11];
        dVar39 = dVar43 * dVar39;
        local_358 = dVar44 * dVar54;
        dStack_350 = dVar37 * dVar69;
        local_178 = (1.0 - (dVar30 + dVar52 * dVar43)) * dVar54;
        local_1a8 = (dVar43 * dVar51 - dVar47) * dVar67;
        local_328 = local_348 * dVar50;
        dStack_320 = dStack_340 * dVar67;
        local_1c8 = ((double)DAT_149934d80 - (dVar55 * dVar46 + dVar52 * dVar43)) * dVar50;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar55 * dVar46 + dVar30)) * dVar67;
        dStack_1c0 = (dVar43 * dVar51 + dVar47) * dVar50;
        local_198 = (dVar46 * dVar52 + dVar49) * dVar67;
        local_1b8 = ((double)param_1[0xe] * dVar46 - dVar39) * dVar50;
        param_3 = SUB84(&local_1c8,0);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_8_ = (dVar46 * dVar52 - dVar49) * dVar54;
        local_188._0_8_ = (dVar39 + (double)param_1[0xe] * dVar46) * dVar54;
        uStack_170 = 0;
        local_168 = *(undefined1 (*) [16])(param_1 + 0x12);
        local_158 = (double)param_1[0x14];
        uStack_150 = 0x3ff0000000000000;
        dVar37 = dVar62 + dVar62;
        dVar50 = dVar29 + dVar29;
        dVar39 = dVar38 * (dVar38 + dVar38);
        local_1f8 = (1.0 - (dVar39 + dVar62 * dVar37)) * dVar44;
        dVar54 = (dVar38 + dVar38) * dVar59;
        local_208 = (dVar37 * dVar59 + dVar38 * dVar50) * dVar44;
        local_228 = (dVar37 * dVar38 - dVar50 * dVar59) * dStack_340;
        dStack_200 = (dVar50 * dVar62 - dVar54) * dVar44;
        local_248 = ((double)DAT_149934d80 - (dVar29 * dVar50 + dVar62 * dVar37)) * local_348;
        dStack_220 = (DAT_149934d80._8_8_ - (dVar29 * dVar50 + dVar39)) * dStack_340;
        dStack_240 = (dVar37 * dVar38 + dVar50 * dVar59) * local_348;
        local_218 = (dVar50 * dVar62 + dVar54) * dStack_340;
        local_238 = (dVar38 * dVar50 - dVar37 * dVar59) * local_348;
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        pdVar14 = &local_148;
        local_318 = dVar53;
        dStack_310 = dVar56;
        local_1e8 = dVar53;
        dStack_1e0 = dVar56;
        local_1d8 = dVar26;
        FUN_1447fea8d(pdVar14);
        FUN_144a1c686(pdVar14,0x3e45798ee0000000);
        dVar53 = dStack_320;
        dVar59 = local_328;
        dVar37 = dStack_350;
        dVar44 = local_358;
        auVar40._8_8_ = -(ulonglong)(0.0 <= dStack_320);
        auVar40._0_8_ = -(ulonglong)(0.0 <= local_328);
        auVar31 = blendvpd(_DAT_149936790,auVar65,auVar40);
        dVar29 = (double)(~-(ulonglong)(0.0 <= local_358) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_358) & 0x3ff0000000000000);
        dVar38 = auVar31._0_8_;
        dStack_140 = dStack_140 * dVar38;
        local_148 = local_148 * dVar38;
        local_138._0_8_ = (double)local_138._0_8_ * dVar38;
        dVar38 = auVar31._8_8_;
        local_118 = local_118 * dVar38;
        local_120 = local_120 * dVar38;
        local_128 = dVar38 * local_128;
        local_f8 = local_f8 * dVar29;
        local_100 = local_100 * dVar29;
        local_108 = dVar29 * local_108;
        FUN_14481fd10(&local_268);
        param_2 = SUB84(pdVar14,0);
        dVar29 = local_258 * local_258 + local_268 * local_268;
        dVar38 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar32._0_8_ = dVar29 + dVar38;
        auVar32._8_8_ = dVar29 + dVar38;
        auVar58._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
        auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
        auVar31 = sqrtpd(auVar32,auVar32);
        auVar65 = divpd(auVar65,auVar31);
        auVar66._0_8_ = auVar65._0_8_ * local_258;
        auVar66._8_8_ = auVar65._8_8_ * dStack_250;
        dVar38 = (double)((ulonglong)(local_268 * auVar65._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
        dVar62 = (double)((ulonglong)(dStack_260 * auVar65._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
        auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar58);
        dVar39 = 0.0;
        cVar10 = (char)param_1[1];
        local_348 = dVar59;
        dStack_340 = dVar53;
        dVar53 = local_e8;
        dVar56 = dStack_e0;
        dVar26 = local_d8;
      }
    }
    auVar65 = _DAT_149934d80;
    if (cVar10 == '\x01') {
      lVar16 = *param_1;
      lVar1 = *(longlong *)(lVar16 + 0xa8);
      if ((lVar1 == 0) || (lVar11 = *(longlong *)(lVar1 + 0x1c8), lVar11 == 0)) goto LAB_14769d730;
      auVar22 = *(undefined1 (*) [16])(lVar16 + 0x280);
      auVar40 = *(undefined1 (*) [16])(lVar16 + 0x290);
      auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_));
      auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_));
      iVar12 = movmskpd(param_2,auVar2);
      auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar40._8_8_));
      auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar40._0_8_));
      uVar15 = movmskpd(param_3,auVar3);
      auVar19 = _DAT_14c8464c0;
      auVar33 = _DAT_14c8464d0;
      local_2c8 = DAT_14c8464a0;
      dStack_2c0 = DAT_14c8464a8;
      dVar29 = DAT_14c846490;
      dVar59 = DAT_14c846498;
      dVar50 = DAT_14c8464b0;
      dVar54 = DAT_14c8464b8;
      dVar67 = DAT_14c846480;
      dVar69 = DAT_14c846488;
      if ((uVar15 & 0x3fffffff) != 0 || iVar12 != 0) {
        auVar58 = divpd(_DAT_149934d80,auVar22);
        auVar48 = divpd(ZEXT816(0x3ff0000000000000),auVar40);
        auVar19._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar22._0_8_)) & auVar58._0_8_);
        auVar19._8_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_)) & auVar58._8_8_);
        dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar40._0_8_)) & auVar48._0_8_);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = dVar51;
        dVar29 = *(double *)(lVar16 + 0x250) * -1.0;
        dVar59 = *(double *)(lVar16 + 600) * 1.0;
        dVar67 = -*(double *)(lVar16 + 0x240);
        dVar69 = -*(double *)(lVar16 + 0x248);
        dVar50 = *(double *)(lVar16 + 0x260) * auVar19._0_8_;
        dVar54 = *(double *)(lVar16 + 0x268) * auVar19._8_8_;
        dVar51 = *(double *)(lVar16 + 0x270) * dVar51;
        dVar52 = dVar54 * dVar67 - dVar69 * dVar50;
        dVar55 = dVar51 * dVar69 - dVar29 * dVar54;
        dVar30 = dVar50 * dVar29 - dVar67 * dVar51;
        dVar55 = dVar55 + dVar55;
        dVar30 = dVar30 + dVar30;
        dVar52 = dVar52 + dVar52;
        local_2c8 = 0.0 - ((dVar52 * dVar69 - dVar30 * dVar29) + dVar59 * dVar55 + dVar50);
        dStack_2c0 = 0.0 - (dVar52 * *(double *)(lVar16 + 0x240) + dVar29 * dVar55 +
                           dVar59 * dVar30 + dVar54);
        dVar50 = 0.0 - (dVar59 * dVar52 + dVar51 + (dVar30 * dVar67 - dVar55 * dVar69));
        dVar54 = 0.0;
      }
      local_2d8._8_4_ = SUB84(dVar37,0);
      local_2d8._0_8_ = dVar44;
      local_2d8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      auVar22 = *(undefined1 (*) [16])(lVar11 + 0x280);
      dVar44 = auVar22._0_8_;
      dVar37 = auVar22._8_8_;
      local_338 = *(undefined1 (*) [16])(lVar11 + 0x290);
      auVar40 = minpd(auVar22,auVar19);
      auVar48 = minpd(local_338,auVar33);
      auVar27._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      iVar13 = movmskpd((int)lVar16,auVar27);
      auVar34._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
      uVar15 = movmskpd(iVar12,auVar34);
      dVar30 = auVar19._0_8_;
      dVar51 = auVar19._8_8_;
      dVar52 = auVar33._0_8_;
      dVar55 = auVar33._8_8_;
      local_328 = dVar26;
      dStack_320 = dVar39;
      local_318 = dVar53;
      dStack_310 = dVar56;
      local_308 = auVar31;
      local_2e8 = dVar38;
      dStack_2e0 = dVar62;
      if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
        dVar38 = *(double *)(lVar11 + 0x240);
        dVar62 = *(double *)(lVar11 + 0x248);
        dVar53 = *(double *)(lVar11 + 0x250);
        dVar56 = *(double *)(lVar11 + 600);
        dVar47 = dVar62 * dVar29 * -1.0 + dVar53 * dVar69 + dVar67 * dVar56 * 1.0 + dVar59 * dVar38;
        dVar49 = dVar38 * dVar29 * 1.0 + dVar56 * dVar69 + dVar67 * dVar53 * -1.0 + dVar59 * dVar62;
        auVar65._0_8_ =
             dVar56 * dVar29 * 1.0 + ((dVar67 * dVar62 * 1.0 + dVar59 * dVar53) - dVar69 * dVar38);
        auVar65._8_8_ =
             dVar53 * dVar29 * -1.0 + ((dVar67 * dVar38 * -1.0 + dVar59 * dVar56) - dVar69 * dVar62)
        ;
        dVar53 = *(double *)(lVar11 + 0x260) * dVar30;
        dVar56 = *(double *)(lVar11 + 0x268) * dVar51;
        dVar38 = *(double *)(lVar11 + 0x270) * dVar52;
        dVar62 = *(double *)(lVar11 + 0x278) * dVar55;
        dVar26 = dVar56 * dVar67 - dVar69 * dVar53;
        dVar43 = dVar38 * dVar69 - dVar29 * dVar56;
        dVar46 = dVar53 * dVar29 - dVar67 * dVar38;
        dVar39 = dVar62 * dVar59 - dVar59 * dVar62;
        dVar43 = dVar43 + dVar43;
        dVar46 = dVar46 + dVar46;
        dVar26 = dVar26 + dVar26;
        dVar39 = dVar39 + dVar39;
        local_2c8 = local_2c8 + (dVar26 * dVar69 - dVar29 * dVar46) + dVar59 * dVar43 + dVar53;
        dStack_2c0 = dStack_2c0 + (dVar43 * dVar29 - dVar26 * dVar67) + dVar59 * dVar46 + dVar56;
        local_358 = dVar50 + (dVar46 * dVar67 - dVar69 * dVar43) + dVar59 * dVar26 + dVar38;
        dStack_350 = dVar54 + (dVar39 * dVar59 - dVar39 * dVar59) + dVar59 * dVar39 + dVar62;
        auVar61._0_8_ = (double)local_338._0_8_ * dVar52;
        auVar61._8_8_ = (double)local_338._8_8_ * dVar55;
        local_2f8 = auVar22;
      }
      else {
        dVar62 = dVar69 + dVar69;
        dVar53 = dVar29 + dVar29;
        dVar38 = dVar67 * (dVar67 + dVar67);
        local_1c8 = (1.0 - (dVar29 * dVar53 + dVar69 * dVar62)) * dVar30;
        dStack_1a0 = (1.0 - (dVar29 * dVar53 + dVar38)) * dVar51;
        dVar56 = (dVar67 + dVar67) * dVar59;
        local_1a8 = (dVar62 * dVar67 - dVar53 * dVar59) * dVar51;
        dVar29 = (dVar53 * dVar69 - dVar56) * dVar52;
        local_178 = (1.0 - (dVar38 + dVar69 * dVar62)) * dVar52;
        dVar38 = dVar52 * (double)local_338._0_8_;
        dStack_1c0 = (dVar62 * dVar67 + dVar53 * dVar59) * dVar30;
        local_198 = (dVar53 * dVar69 + dVar56) * dVar51;
        local_1b8 = (dVar67 * dVar53 - dVar62 * dVar59) * dVar30;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_4_ = SUB84(dVar29,0);
        local_188._0_8_ = (dVar67 * dVar53 + dVar62 * dVar59) * dVar52;
        local_188._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_170 = 0;
        local_168._8_4_ = SUB84(dStack_2c0,0);
        local_168._0_8_ = local_2c8;
        local_168._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
        uStack_150 = 0x3ff0000000000000;
        dVar62 = *(double *)(lVar11 + 0x240);
        dVar53 = *(double *)(lVar11 + 0x248);
        dVar56 = *(double *)(lVar11 + 0x250);
        dVar39 = dVar53 + dVar53;
        dVar54 = dVar56 + dVar56;
        dVar26 = dVar62 * (dVar62 + dVar62);
        local_1f8 = (1.0 - (dVar26 + dVar53 * dVar39)) * (double)local_338._0_8_;
        dVar59 = *(double *)(lVar11 + 0x240) * dVar54;
        dVar29 = *(double *)(lVar11 + 600);
        dVar67 = dVar54 * dVar29;
        dVar69 = (dVar62 + dVar62) * *(double *)(lVar11 + 600);
        dVar29 = dVar39 * dVar29;
        local_208 = (dVar29 + dVar59) * (double)local_338._0_8_;
        local_228 = (dVar39 * dVar62 - dVar67) * dVar37;
        dStack_200 = (dVar54 * dVar53 - dVar69) * (double)local_338._0_8_;
        local_248 = ((double)DAT_149934d80 - (dVar56 * dVar54 + dVar53 * dVar39)) * dVar44;
        dStack_220 = (DAT_149934d80._8_8_ - (dVar56 * dVar54 + dVar26)) * dVar37;
        dStack_240 = (dVar39 * dVar62 + dVar67) * dVar44;
        local_218 = (dVar54 * dVar53 + dVar69) * dVar37;
        local_238 = (dVar59 - dVar29) * dVar44;
        uStack_230 = 0;
        uStack_210 = 0;
        auVar61._8_8_ = dVar55 * (double)local_338._8_8_;
        auVar61._0_8_ = dVar38;
        uStack_1f0 = 0;
        local_1e8 = *(double *)(lVar11 + 0x260);
        dStack_1e0 = *(double *)(lVar11 + 0x268);
        local_1d8 = *(double *)(lVar11 + 0x270);
        uStack_1d0 = 0x3ff0000000000000;
        local_158 = dVar50;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar20._8_8_ = -(ulonglong)(0.0 <= dVar51 * dVar37);
        auVar20._0_8_ = -(ulonglong)(0.0 <= dVar30 * dVar44);
        auVar31 = blendvpd(_DAT_149936790,auVar65,auVar20);
        uVar18 = -(ulonglong)(0.0 <= dVar38);
        dVar29 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
        dVar59 = auVar31._0_8_;
        dStack_140 = dStack_140 * dVar59;
        local_148 = local_148 * dVar59;
        local_138._0_8_ = (double)local_138._0_8_ * dVar59;
        dVar59 = auVar31._8_8_;
        local_118 = local_118 * dVar59;
        local_120 = local_120 * dVar59;
        local_128 = dVar59 * local_128;
        local_f8 = local_f8 * dVar29;
        local_100 = local_100 * dVar29;
        local_108 = dVar29 * local_108;
        pdVar14 = &local_268;
        lVar11 = FUN_14481fd10(pdVar14,&local_148);
        iVar13 = (int)pdVar14;
        dVar29 = local_258 * local_258 + local_268 * local_268;
        dVar59 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
        auVar35._0_8_ = dVar29 + dVar59;
        auVar35._8_8_ = dVar29 + dVar59;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar31 = sqrtpd(auVar35,auVar35);
        auVar65 = divpd(auVar65,auVar31);
        auVar41._0_8_ = auVar65._0_8_ * local_258;
        auVar41._8_8_ = auVar65._8_8_ * dStack_250;
        dVar47 = (double)((ulonglong)(local_268 * auVar65._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dVar49 = (double)((ulonglong)(dStack_260 * auVar65._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        auVar65 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar21);
        local_358 = local_d8;
        dStack_350 = 0.0;
        local_2c8 = local_e8;
        dStack_2c0 = dStack_e0;
      }
      auVar31 = _DAT_149934d80;
      dVar51 = dVar51 * dVar37;
      dVar30 = dVar30 * dVar44;
      local_338._8_8_ = dStack_2c0;
      local_338._0_8_ = local_2c8;
      auVar9._8_8_ = dStack_340;
      auVar9._0_8_ = local_348;
      auVar4._8_4_ = SUB84(dVar51,0);
      auVar4._0_8_ = dVar30;
      auVar4._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      auVar22 = minpd(auVar9,auVar4);
      dVar29 = local_2d8._0_8_;
      auVar40 = minpd(local_2d8,auVar61);
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar12 = movmskpd((int)lVar11,auVar23);
      auVar28._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar15 = movmskpd(iVar13,auVar28);
      dVar59 = auVar65._0_8_;
      dVar37 = auVar65._8_8_;
      dVar44 = auVar61._0_8_;
      if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
        local_148 = dStack_2e0 * dVar59 * -1.0 +
                    (double)local_308._0_8_ * dVar49 +
                    (double)local_308._8_8_ * dVar47 * 1.0 + local_2e8 * dVar37;
        dStack_140 = local_2e8 * dVar59 * 1.0 +
                     (double)local_308._8_8_ * dVar49 +
                     (double)local_308._0_8_ * dVar47 * -1.0 + dStack_2e0 * dVar37;
        local_138._0_8_ =
             (double)local_308._8_8_ * dVar59 * 1.0 +
             ((dVar47 * dStack_2e0 * 1.0 + (double)local_308._0_8_ * dVar37) - dVar49 * local_2e8);
        local_138._8_8_ =
             (double)local_308._0_8_ * dVar59 * -1.0 +
             ((dVar47 * local_2e8 * -1.0 + (double)local_308._8_8_ * dVar37) - dVar49 * dStack_2e0);
        dVar30 = local_318 * dVar30;
        dVar51 = dStack_310 * dVar51;
        dVar44 = local_328 * dVar44;
        dVar29 = dVar51 * dVar47 - dVar30 * dVar49;
        dVar38 = dVar44 * dVar49 - dVar51 * dVar59;
        dVar62 = dVar30 * dVar59 - dVar44 * dVar47;
        dVar38 = dVar38 + dVar38;
        dVar62 = dVar62 + dVar62;
        dVar29 = dVar29 + dVar29;
        local_2c8 = local_2c8 + (dVar29 * dVar49 - dVar59 * dVar62) + dVar37 * dVar38 + dVar30;
        dStack_2c0 = dStack_2c0 + (dVar38 * dVar59 - dVar29 * dVar47) + dVar37 * dVar62 + dVar51;
        local_2b8 = local_358 + (dVar62 * dVar47 - dVar49 * dVar38) + dVar37 * dVar29 + dVar44;
      }
      else {
        dVar56 = dVar49 + dVar49;
        dVar26 = dVar59 + dVar59;
        dVar53 = dVar47 * (dVar47 + dVar47);
        dVar39 = (dVar47 + dVar47) * dVar37;
        local_1a8 = (dVar56 * dVar47 - dVar26 * dVar37) * dVar51;
        dVar38 = local_348 * dVar30;
        dVar62 = dStack_340 * dVar51;
        local_1c8 = ((double)DAT_149934d80 - (dVar59 * dVar26 + dVar49 * dVar56)) * dVar30;
        dStack_1a0 = (DAT_149934d80._8_8_ - (dVar59 * dVar26 + dVar53)) * dVar51;
        dStack_1c0 = (dVar56 * dVar47 + dVar26 * dVar37) * dVar30;
        local_198 = (dVar26 * dVar49 + dVar39) * dVar51;
        local_1b8 = (dVar47 * dVar26 - dVar56 * dVar37) * dVar30;
        uStack_1b0 = 0;
        local_178 = (1.0 - (dVar53 + dVar49 * dVar56)) * dVar44;
        uStack_190 = 0;
        local_188._8_8_ = (dVar26 * dVar49 - dVar39) * dVar44;
        local_188._0_8_ = (dVar47 * dVar26 + dVar56 * dVar37) * dVar44;
        uStack_170 = 0;
        local_168._8_8_ = dStack_2c0;
        local_168._0_8_ = local_2c8;
        local_158 = local_358;
        uStack_150 = 0x3ff0000000000000;
        dVar37 = dStack_2e0 + dStack_2e0;
        dVar53 = (double)local_308._0_8_ + (double)local_308._0_8_;
        dVar59 = local_2e8 * (local_2e8 + local_2e8);
        dVar56 = (local_2e8 + local_2e8) * (double)local_308._8_8_;
        local_228 = (dVar37 * local_2e8 - dVar53 * (double)local_308._8_8_) * dStack_340;
        dStack_200 = (dVar53 * dStack_2e0 - dVar56) * dVar29;
        local_248 = ((double)DAT_149934d80 -
                    ((double)local_308._0_8_ * dVar53 + dStack_2e0 * dVar37)) * local_348;
        dStack_220 = (DAT_149934d80._8_8_ - ((double)local_308._0_8_ * dVar53 + dVar59)) *
                     dStack_340;
        dStack_240 = (dVar37 * local_2e8 + dVar53 * (double)local_308._8_8_) * local_348;
        local_218 = (dVar53 * dStack_2e0 + dVar56) * dStack_340;
        local_208 = (local_2e8 * dVar53 + dVar37 * (double)local_308._8_8_) * dVar29;
        local_238 = (local_2e8 * dVar53 - dVar37 * (double)local_308._8_8_) * local_348;
        uStack_230 = 0;
        uStack_210 = 0;
        local_1f8 = (1.0 - (dVar59 + dStack_2e0 * dVar37)) * dVar29;
        uStack_1f0 = 0;
        local_1e8 = local_318;
        dStack_1e0 = dStack_310;
        local_1d8 = local_328;
        uStack_1d0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_148);
        FUN_144a1c686(&local_148,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar62);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar38);
        auVar65 = blendvpd(_DAT_149936790,auVar31,auVar24);
        uVar18 = -(ulonglong)(0.0 <= dVar29 * dVar44);
        dVar29 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
        dVar44 = auVar65._0_8_;
        dStack_140 = dStack_140 * dVar44;
        local_148 = local_148 * dVar44;
        local_138._0_8_ = (double)local_138._0_8_ * dVar44;
        dVar44 = auVar65._8_8_;
        local_118 = local_118 * dVar44;
        local_120 = local_120 * dVar44;
        local_128 = dVar44 * local_128;
        local_f8 = local_f8 * dVar29;
        local_100 = local_100 * dVar29;
        local_108 = dVar29 * local_108;
        FUN_14481fd10(&local_268,&local_148);
        auVar36._0_8_ = local_268 * local_268;
        auVar36._8_8_ = dStack_260 * dStack_260;
        dVar29 = local_258 * local_258 + auVar36._0_8_;
        dVar44 = dStack_250 * dStack_250 + auVar36._8_8_;
        auVar42._0_8_ = dVar29 + dVar44;
        auVar42._8_8_ = dVar29 + dVar44;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
        auVar65 = sqrtpd(auVar36,auVar42);
        auVar65 = divpd(auVar31,auVar65);
        auVar68._0_8_ = auVar65._0_8_ * local_258;
        auVar68._8_8_ = auVar65._8_8_ * dStack_250;
        local_148 = (double)((ulonglong)(local_268 * auVar65._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
        dStack_140 = (double)((ulonglong)(dStack_260 * auVar65._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
        local_138 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar25);
        local_2b8 = local_d8;
        local_2c8 = local_e8;
        dStack_2c0 = dStack_e0;
      }
      lVar16 = *(longlong *)(lVar1 + 0x1c8);
      puVar17 = local_2b0;
      FUN_1448052ee(&local_148,puVar17);
      pdVar14 = &local_2c8;
    }
    else {
      if (cVar10 != '\0') goto LAB_14769d730;
      lVar16 = *param_1;
      puVar17 = local_280;
      local_148 = dVar38;
      dStack_140 = dVar62;
      local_138 = auVar31;
      FUN_1448052ee(&local_148,puVar17);
      pdVar14 = &local_298;
      local_298 = dVar53;
      dStack_290 = dVar56;
      local_288 = dVar26;
    }
    local_360 = 0;
    local_368 = 0;
    FUN_1401ca0e6(lVar16,pdVar14,puVar17,0);
  }
LAB_14769d730:
  if ((local_c0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769ec3e FUN_14769ec3e body=204 status=ok
// SIG undefined FUN_14769ec3e(void)

void FUN_14769ec3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476b0f84(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab6150);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x48) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14769ecfd;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_14769ecfd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769ed1c FUN_14769ed1c body=337 status=ok
// SIG undefined FUN_14769ed1c(void)

void FUN_14769ed1c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_168 [32];
  ushort *local_148;
  code **local_140;
  undefined8 *local_138;
  undefined1 local_12c [4];
  undefined8 local_128;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined1 local_117;
  undefined4 local_114;
  undefined1 local_110;
  ushort local_10c;
  undefined2 local_10a;
  undefined1 local_108 [4];
  undefined1 local_104;
  byte bStack_103;
  uint local_100;
  undefined1 local_f8 [80];
  longlong local_a8;
  code *local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_11c = *(undefined2 *)(lVar1 + 0x50);
  local_11a = *(undefined2 *)(lVar1 + 0xbc);
  local_117 = 0;
  local_114 = 0x6ff;
  local_110 = 0;
  local_10a = *(undefined2 *)(lVar2 + 0xf14);
  FUN_1476b1ee8(local_108);
  local_48 = (code *)&local_10a;
  local_40 = local_108;
  FUN_1447c44f6(local_f8,&local_48);
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_100 = *(uint *)(lVar1 + 0x290);
  bVar3 = bStack_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  _local_104 = CONCAT11(bVar3,local_104);
  local_128 = *(undefined8 *)(lVar1 + 0x548);
  local_138 = &local_128;
  local_148 = &local_10c;
  local_10c = CONCAT11(bVar3,local_104) | 0x200;
  local_48 = FUN_1476b21f4;
  local_40 = (undefined1 *)CONCAT71(local_40._1_7_,3);
  local_140 = &local_48;
  FUN_1476b1fa2(local_108,local_12c,lVar1 + 0x28,param_2);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769ee6e FUN_14769ee6e body=333 status=ok
// SIG undefined FUN_14769ee6e(void)

void FUN_14769ee6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined2 **local_140;
  undefined2 local_130;
  undefined2 local_12e;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 *local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined2 local_102;
  undefined1 local_100 [5];
  byte local_fb;
  uint local_f8;
  undefined1 local_f0 [80];
  longlong local_a0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  local_130 = *(undefined2 *)(lVar2 + 0x50);
  local_12e = *(undefined2 *)(lVar2 + 0xbc);
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_102 = *(undefined2 *)(lVar3 + 0xf14);
  FUN_1476b1ee8(local_100);
  local_118 = &local_102;
  local_110 = local_100;
  FUN_1447c44f6(local_f0,&local_118);
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_f8 = *(uint *)(lVar2 + 0x290);
  local_fb = local_fb & 0xfe | (local_f8 & 0xfffffeff) == 1;
  local_118 = *(undefined2 **)(lVar2 + 0x548);
  local_148 = param_3;
  local_140 = &local_118;
  FUN_14332234c(local_100,&local_120,lVar2 + 0x28,param_2);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769efbc FUN_14769efbc body=1228 status=ok
// SIG undefined FUN_14769efbc(void)

void FUN_14769efbc(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  char local_1c1;
  int local_1c0;
  int local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined2 *local_190;
  undefined1 *local_188;
  longlong local_180;
  longlong local_178;
  int local_170;
  longlong local_168;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined2 local_14a;
  undefined1 local_148 [2];
  undefined2 local_146;
  undefined1 local_143;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_138 [2];
  short local_136;
  undefined1 local_128 [80];
  longlong local_d8;
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6160) && (FUN_144b3d300(&DAT_14cab6160), DAT_14cab6160 == -1)) {
    lVar7 = DAT_14cab6370;
    if (DAT_14cab6370 == 0) {
      lVar7 = FUN_14570767c(&DAT_14cab6370,0);
    }
    DAT_14cab6158 = lVar7;
    _Init_thread_footer(&DAT_14cab6160);
    param_1 = local_1b8;
  }
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  local_1a0 = *(longlong *)(*(longlong *)(param_1 + -0x18) + 0x548);
  local_146 = *(undefined2 *)(lVar7 + 0x50);
  local_143 = 0;
  local_140 = 0x6ff;
  local_13c = 0;
  local_14a = *(undefined2 *)(lVar8 + 0xf14);
  local_190 = &local_14a;
  local_188 = local_148;
  local_1a8 = lVar7;
  FUN_14769f48a(local_148,local_138);
  if (local_136 != -1) {
    lVar7 = *(longlong *)(param_1 + -0x18);
    local_1c1 = *(char *)(lVar7 + 0x298);
    FUN_14150e78a(&local_180,lVar7 + 0x28,local_128);
    local_1c0 = *(int *)(lVar7 + 0x38);
    if (local_170 != local_1c0) {
      do {
        lVar8 = local_178;
        lVar14 = (longlong)local_170;
        lVar7 = *(longlong *)(*(longlong *)(local_178 + 0x60) + lVar14 * 8);
        if (local_1c1 == '\0') {
          *(undefined4 *)(lVar7 + 0x14) = 0;
          local_1b0 = lVar7;
        }
        else {
          local_1b0 = 0;
        }
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar7 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == local_136) goto LAB_14769f188;
            plVar13 = plVar13 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_14769f188:
        local_1bc = *(int *)(lVar7 + 0x14);
        if (local_1bc == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        UNLOCK();
        local_198 = *plVar13;
        lVar7 = *(longlong *)(lVar7 + 0x18);
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar14 * 8);
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          lVar14 = *(longlong *)(lVar8 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)(lVar14 + 0x1e) == *(short *)(local_1a8 + 0x10a)) goto LAB_14769f1e5;
            lVar14 = lVar14 + 0x20;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        lVar14 = 0;
LAB_14769f1e5:
        local_168 = DAT_14cab6158;
        uVar2 = *(ushort *)(lVar8 + 0xe);
        if ((ulonglong)uVar2 != 0) {
          uVar15 = 0;
          do {
            uVar3 = *(uint *)(local_198 + uVar15 * 4);
            lVar9 = (ulonglong)(uVar3 & 0xffff) * 0x128;
            lVar8 = *(longlong *)(*(longlong *)(local_1a0 + 8) + 0x100 + lVar9);
            plVar4 = *(longlong **)(*(longlong *)(local_1a0 + 8) + 0x108 + lVar9);
            if (plVar4 == (longlong *)0x0) {
              plVar10 = (longlong *)FUN_14479d2ce(lVar8 + 0x18);
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              plVar10 = (longlong *)FUN_14479d2ce(lVar8 + 0x18);
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar12 = (int *)((longlong)plVar4 + 0xc);
                *piVar12 = *piVar12 + -1;
                UNLOCK();
                if (*piVar12 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            lVar8 = local_1b8;
            local_1d8 = local_168;
            FUN_1476b274a(*(undefined8 *)(local_1b8 + 8),*(undefined2 *)(lVar7 + uVar15 * 2),
                          lVar14 != 0,uVar3);
            lVar8 = *(longlong *)(lVar8 + 8);
            cVar5 = FUN_1476b2a78(lVar8,&local_168);
            if (cVar5 != '\0') {
              FUN_1476b289a(lVar8,&local_150,&local_168);
              local_15c = 0xffffffff;
              local_158 = *(undefined4 *)(lVar8 + 0xc0);
              local_154 = local_150;
              piVar12 = *(int **)(lVar8 + 0xb0);
              if (*piVar12 != 0) {
                FUN_140adeba6(piVar12,&local_15c);
                piVar12 = *(int **)(lVar8 + 0xb0);
              }
              cVar5 = FUN_14115d04a(piVar12);
              cVar6 = FUN_1476b2b12(lVar8,local_154,cVar5 + '\x01');
              if (cVar6 == '\0') {
                uVar11 = (**(code **)(*plVar10 + 0x180))(plVar10);
                lVar9 = FUN_14494016c(uVar11,0,1);
                if (lVar9 == 0) {
                  local_78 = 0.0;
                  uStack_70 = 0;
                }
                else {
                  local_78 = (double)*(float *)(lVar9 + 0x4cc);
                }
                uStack_70 = CONCAT71(uStack_70._1_7_,lVar9 != 0);
                FUN_1476b2b9c(lVar8,local_150,cVar5 + '\x01',&local_78);
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar2 != uVar15);
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
          UNLOCK();
          if (local_1bc == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
          }
        }
        if (local_1b0 != 0) {
          *(undefined4 *)(local_1b0 + 0x14) = 1;
        }
        local_170 = FUN_1403b8464(&local_180,local_170 + 1);
      } while (local_170 != local_1c0);
    }
    if (local_180 != 0) {
      if (*(char *)(local_178 + 0x270) == '\0') {
        *(int *)(local_178 + 0x264) = *(int *)(local_178 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_178 + 0x264) = *(int *)(local_178 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769f48a FUN_14769f48a body=175 status=ok
// SIG undefined FUN_14769f48a(void)

undefined8 * FUN_14769f48a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)((longlong)param_2 + 2);
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 2,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769f54c FUN_14769f54c body=956 status=ok
// SIG undefined FUN_14769f54c(void)

void FUN_14769f54c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined2 **local_1e0;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  undefined2 *local_1b0;
  undefined8 **local_1a8;
  undefined1 local_1a0 [4];
  undefined8 local_19c;
  undefined4 local_194;
  undefined1 local_18f;
  undefined4 local_18c;
  undefined1 local_188;
  undefined2 local_184;
  undefined2 local_182;
  undefined2 local_180;
  undefined2 local_17e;
  undefined2 local_17c;
  undefined2 local_17a;
  undefined8 *local_178 [4];
  undefined1 local_158 [80];
  longlong local_108;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_1d8 = (undefined2 *)(param_1 + 0x40);
  local_1d0 = param_3;
  local_1c8 = param_2;
  local_1c0 = param_1;
  FUN_14012803a(local_1d8,*(int *)(lVar2 + 0x10) - *(int *)(lVar2 + 0x3c));
  if (0 < *(int *)(lVar2 + 0x10)) {
    lVar11 = 0x108;
    uVar12 = 0;
    do {
      if ((longlong)uVar12 < (longlong)*(int *)(lVar2 + 0x30)) {
        lVar6 = *(longlong *)(lVar2 + 0x28);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
          lVar6 = lVar2 + 0x18;
        }
        if ((*(uint *)(lVar6 + (uVar12 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar12 & 0x1f) & 1) != 0) {
          lVar6 = *(longlong *)(*(longlong *)(lVar2 + 8) + -8 + lVar11);
          plVar3 = *(longlong **)(*(longlong *)(lVar2 + 8) + lVar11);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
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
          plVar5 = (longlong *)FUN_140127e98(lVar6 + 0x38);
          if ((plVar5 != (longlong *)0x0) &&
             (lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), lVar6 != 0)) {
            uVar7 = FUN_140127f54();
            plVar5 = (longlong *)FUN_144718840(lVar6,uVar7);
            if (plVar5 == (longlong *)0x0) {
              uVar7 = *(undefined8 *)(lVar6 + 0x10);
              uVar8 = FUN_140127f54();
              cVar4 = FUN_144a7ff9e(uVar7,uVar8);
              if (cVar4 == '\0') goto LAB_14769f690;
              FUN_1475a1e7e(local_178,lVar6);
            }
            else {
              (**(code **)(*plVar5 + 0x10))(plVar5,local_178);
            }
            FUN_1401280b4(local_1d8,local_a8,uVar12 & 0xffffffff);
            ppuVar9 = local_178;
            puVar10 = local_a0;
            for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar10 = *ppuVar9;
              ppuVar9 = ppuVar9 + 1;
              puVar10 = puVar10 + 1;
            }
          }
LAB_14769f690:
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
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x128;
    } while ((longlong)uVar12 < (longlong)*(int *)(lVar2 + 0x10));
  }
  lVar2 = local_1c0;
  if (*(int *)(local_1c0 + 0x48) != *(int *)(local_1c0 + 0x74)) {
    lVar11 = FUN_14009d2a0();
    lVar6 = FUN_14038fb82();
    local_88 = 0x10000000000;
    local_60 = 0x10000000000;
    local_58 = 0;
    uStack_50 = 0;
    local_1a0._0_2_ = *(undefined2 *)(lVar6 + 0x84);
    local_178[1] = &local_19c;
    local_1a0._2_2_ = *(undefined2 *)(lVar11 + 0x110);
    local_178[0] = (undefined8 *)local_1a0;
    FUN_1447c44f6(local_a8,local_178);
    local_1a0._0_2_ = *(undefined2 *)(lVar11 + 0x5c);
    local_178[1] = (undefined8 *)(local_1a0 + 2);
    local_178[0] = (undefined8 *)local_1a0;
    FUN_1447c44f6(local_80,local_178);
    local_1a0._2_2_ = *(undefined2 *)(lVar11 + 0x4a);
    local_1a0._0_2_ = *(undefined2 *)(lVar11 + 0x4e);
    local_19c = *(undefined8 *)(lVar11 + 0xbc);
    local_194 = *(undefined4 *)(lVar11 + 0xc4);
    local_18f = 0;
    local_18c = 0x6ff;
    local_188 = 0;
    FUN_1406ac14e(local_178,local_1a0,local_a8);
    local_184 = *(undefined2 *)(lVar11 + 0xbc);
    local_1a8 = local_178;
    local_182 = *(undefined2 *)(lVar11 + 0xbe);
    local_180 = *(undefined2 *)(lVar11 + 0xc0);
    local_17e = *(undefined2 *)(lVar11 + 0xc2);
    local_17c = *(undefined2 *)(lVar11 + 0xc4);
    local_17a = *(undefined2 *)(lVar11 + 0xc6);
    local_1b0 = &local_184;
    FUN_1403b5126(local_158,&local_1b0,2);
    local_1b0 = local_1d8;
    local_1e8 = local_1d0;
    local_1e0 = &local_1b0;
    FUN_1433227ec(local_178,&local_1b8,*(longlong *)(lVar2 + 0x28) + 0x28,local_1c8);
    if (local_1b8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1b8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1b8)(local_1b8,1);
      }
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14769f92a FUN_14769f92a body=145 status=ok
// SIG undefined FUN_14769f92a(void)

undefined8 * FUN_14769f92a(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476b4860(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769f9c8 FUN_14769f9c8 body=81 status=ok
// SIG undefined FUN_14769f9c8(void)

void FUN_14769f9c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14769fa1a(*(undefined8 *)(param_1 + 0x28));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 200) = lVar1;
  FUN_1447ba426(*(longlong *)(param_1 + 0x28) + 0x3e0,*(undefined2 *)(param_1 + 0x34),
                *(undefined2 *)(lVar1 + 0x34));
  return;
}



// FUNCTION 14769fa1a FUN_14769fa1a body=98 status=ok
// SIG undefined FUN_14769fa1a(void)

void FUN_14769fa1a(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d4322();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14769fa88 FUN_14769fa88 body=3675 status=ok
// SIG undefined FUN_14769fa88(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14769fa88(longlong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 **ppuVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong **pplVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_1238 [32];
  longlong local_1218;
  char local_120d;
  uint local_120c;
  longlong local_1208;
  longlong local_1200;
  longlong local_11f8;
  undefined2 local_11ee;
  undefined2 local_11ec;
  undefined2 local_11ea;
  undefined2 local_11e8;
  undefined1 local_11e3;
  undefined4 local_11e0;
  undefined1 local_11dc;
  undefined2 local_11d8;
  undefined4 uStack_11d6;
  undefined2 uStack_11d2;
  undefined1 local_11d0;
  undefined1 uStack_11cf;
  undefined2 uStack_11ce;
  undefined4 uStack_11cc;
  uint local_11c8;
  undefined1 local_11bc [4];
  undefined8 local_11b8;
  longlong **local_11b0;
  undefined8 local_11a8;
  longlong *local_11a0;
  longlong *plStack_1198;
  undefined8 **local_1190;
  longlong local_1188;
  undefined1 local_1178 [40];
  longlong local_1150;
  undefined8 *local_10f0;
  longlong local_10e8;
  undefined8 local_10d0;
  undefined1 local_10c8 [32];
  undefined8 local_10a8;
  longlong local_10a0;
  undefined8 uStack_1098;
  undefined8 **local_370;
  ulonglong local_368;
  undefined1 local_360 [32];
  undefined8 local_340;
  undefined8 local_318;
  longlong local_310;
  undefined8 uStack_308;
  undefined1 local_300 [32];
  undefined8 local_2e0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0 [32];
  undefined8 local_280;
  undefined8 local_258;
  longlong local_250;
  undefined8 uStack_248;
  undefined1 local_240 [4];
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  longlong *local_238;
  uint local_230;
  longlong local_228;
  longlong *local_220;
  int local_218;
  longlong local_210;
  undefined8 local_208;
  longlong ***local_200;
  undefined8 local_1f8;
  longlong local_1f0 [3];
  undefined8 local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a0;
  longlong local_78;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14769fa9e;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1238;
  lVar8 = FUN_14009d2a0();
  ppuVar4 = *(undefined ***)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_280 = 0x10000000000;
  local_258 = 0x10000000000;
  local_250 = 0;
  uStack_248 = 0;
  local_10e8 = (longlong)&local_208 + 2;
  local_10f0 = &local_208;
  local_208._0_2_ = *(undefined2 *)(lVar8 + 0xf0);
  FUN_1447c44f6(local_2a0,&local_10f0);
  local_10f0 = &local_208;
  local_10e8 = (longlong)&local_208 + 4;
  local_208._0_4_ = *(undefined4 *)(lVar8 + 0x11a);
  FUN_1403b5126(local_2a0,&local_10f0,2);
  local_2e0 = 0x10000000000;
  local_2b8 = 0x10000000000;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_208._0_4_ = CONCAT22(*(undefined2 *)(lVar8 + 0x11a),*(undefined2 *)(lVar8 + 0x124));
  local_10f0 = &local_208;
  local_10e8 = (longlong)&local_208 + 4;
  FUN_1447c44f6(local_300,&local_10f0);
  uVar6 = local_208;
  local_340 = 0x10000000000;
  local_318 = 0x10000000000;
  local_310 = 0;
  uStack_308 = 0;
  local_208._0_4_ = CONCAT22(*(undefined2 *)(lVar8 + 0xee),*(undefined2 *)(lVar8 + 0x124));
  local_208._6_2_ = SUB82(uVar6,6);
  local_208._0_6_ = CONCAT24(*(undefined2 *)(lVar8 + 0x11c),(undefined4)local_208);
  local_10e8 = (longlong)&local_208 + 6;
  local_1208 = lVar8;
  local_10f0 = &local_208;
  FUN_1447c44f6(local_360,&local_10f0);
  cVar7 = FUN_14050a5e0(*(longlong *)(param_1 + 0x28) + 0x28,local_2a0);
  if ((cVar7 == '\0') &&
     (cVar7 = FUN_14050a5e0(*(longlong *)(param_1 + 0x28) + 0x28,local_300), cVar7 == '\0')) {
    cVar7 = FUN_14050a5e0(*(longlong *)(param_1 + 0x28) + 0x28,local_360);
    lVar8 = local_1208;
    *(char *)(param_1 + 0xd0) = cVar7;
    if (cVar7 == '\0') {
      local_10d0 = 0x10000000000;
      local_10a8 = 0x10000000000;
      local_10a0 = 0;
      uStack_1098 = 0;
      local_200 = (longlong ***)((longlong)&local_11b8 + 4);
      local_11b8._0_4_ =
           CONCAT22(*(undefined2 *)(local_1208 + 0x11a),*(undefined2 *)(local_1208 + 0x4e));
      local_208 = (undefined **)&local_11b8;
      FUN_1447c44f6(&local_10f0,&local_208);
      local_11b8._0_4_ = CONCAT22(*(undefined2 *)(lVar8 + 0xf0),*(undefined2 *)(lVar8 + 0x11c));
      local_11b8 = (undefined **)
                   CONCAT26(*(undefined2 *)(lVar8 + 0x122),
                            CONCAT24(*(undefined2 *)(lVar8 + 0xf2),(undefined4)local_11b8));
      local_200 = &local_11b0;
      local_208 = (undefined **)&local_11b8;
      FUN_1447c44f6(local_10c8,&local_208);
      lVar8 = *(longlong *)(param_1 + 0x28);
      local_1f0[0] = 0;
      local_1f0[1] = 0;
      local_200 = (longlong ***)FUN_14009d2a0();
      local_1f8 = *(undefined8 *)(lVar8 + 600);
      local_208 = &PTR_FUN_14a4e03b0;
      local_1d8 = 0;
      local_1f0[2] = param_1 + 0x40;
      FUN_1410fbbac(*(longlong *)(param_1 + 0x28) + 0x28,&local_10f0,&local_208,3);
      FUN_1476a08e4(&local_208,*(undefined8 *)(param_1 + 0x28));
      local_208 = &PTR_LAB_14a4e0390;
      if (local_1f0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_10a0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1476a018b;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  local_370 = (undefined8 **)0x0;
  local_368 = 0x800000000;
  local_11ea = *(undefined2 *)(local_1208 + 0x50);
  local_11e8 = *(undefined2 *)(local_1208 + 0xf0);
  local_11e3 = 0;
  local_11e0 = 0x6ff;
  local_11dc = 0;
  local_11ee = *(undefined2 *)(local_1208 + 0x11c);
  FUN_1476b5472(&local_11b8);
  local_208 = (undefined **)&local_11ee;
  local_200 = (longlong ***)&local_11ec;
  FUN_1447c44f6(local_1178);
  local_1200 = param_1;
  if ((local_11b8._2_2_ != -1) && (local_11b8._4_2_ != -1)) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_120d = *(char *)(lVar8 + 0x298);
    FUN_14150e78a(&local_11d8,lVar8 + 0x28,&local_11a0);
    local_120c = *(uint *)(lVar8 + 0x38);
    if (local_11c8 != local_120c) {
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)
                   (CONCAT44(uStack_11cc,CONCAT22(uStack_11ce,CONCAT11(uStack_11cf,local_11d0))) +
                   0x60) + (longlong)(int)local_11c8 * 8);
        if (local_120d == '\0') {
          *(undefined4 *)(lVar8 + 0x14) = 0;
          local_11f8 = lVar8;
        }
        else {
          local_11f8 = 0;
        }
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar23 = *(longlong **)(lVar8 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar23 + 0x1e) == local_11b8._4_2_) goto LAB_1476a03b0;
            plVar23 = plVar23 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar23 = (longlong *)0x0;
LAB_1476a03b0:
        iVar15 = *(int *)(lVar8 + 0x14);
        if (iVar15 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
        }
        LOCK();
        *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
        UNLOCK();
        lVar10 = *plVar23;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar18 = *(longlong **)(lVar8 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar18 + 0x1e) == local_11b8._2_2_) goto LAB_1476a03db;
            plVar18 = plVar18 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar18 = (longlong *)0x0;
LAB_1476a03db:
        uVar14 = *(uint *)(lVar8 + 0x14);
        if (uVar14 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
        }
        LOCK();
        *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
        UNLOCK();
        _local_240 = *(longlong *)(lVar8 + 0x18);
        local_238 = plVar18;
        local_230 = uVar14;
        local_228 = *plVar18;
        local_220 = plVar23;
        local_218 = iVar15;
        local_210 = lVar10;
        uVar1 = *(ushort *)(lVar8 + 0xe);
        if ((ulonglong)uVar1 != 0) {
          uVar24 = 0;
          do {
            uVar2 = *(undefined4 *)(local_210 + uVar24 * 4);
            local_11bc = *(undefined1 (*) [4])(local_228 + uVar24 * 4);
            uVar14 = (uint)local_11bc & 0xffff;
            if ((int)uVar14 < *(int *)(ppuVar4 + 6)) {
              ppuVar12 = (undefined **)ppuVar4[5];
              if ((undefined **)ppuVar4[5] == (undefined **)0x0) {
                ppuVar12 = ppuVar4 + 3;
              }
              if (((*(uint *)((longlong)ppuVar12 + (ulonglong)(uVar14 >> 5) * 4) >>
                    ((uint)local_11bc & 0x1f) & 1) != 0) &&
                 ((uint)local_11bc >> 0x10 ==
                  (uint)*(ushort *)(ppuVar4[1] + (ulonglong)uVar14 * 0x128 + 0x11c))) {
                ppuVar9 = local_370;
                if (local_370 == (undefined8 **)0x0) {
                  ppuVar9 = &local_10f0;
                }
                uVar20 = 0;
                if (0 < (int)(uint)local_368) {
                  uVar20 = 0;
                  uVar21 = local_368 & 0xffffffff;
                  uVar19 = (uint)local_368;
                  do {
                    uVar21 = uVar21 >> 1;
                    uVar13 = (uint)uVar21 + (int)uVar20;
                    if (*(ushort *)(ppuVar9 + (ulonglong)uVar13 * 0x36) < uVar14) {
                      uVar20 = (ulonglong)(uVar13 + (uVar19 & 1));
                    }
                    bVar5 = 1 < uVar19;
                    uVar19 = (uint)uVar21;
                  } while (bVar5);
                }
                if ((int)uVar20 < (int)(uint)local_368) {
                  if ((uVar14 < *(ushort *)(ppuVar9 + uVar20 * 0x36)) ||
                     (ppuVar9 = ppuVar9 + uVar20 * 0x36 + 1, ppuVar9 == (undefined8 **)0x0))
                  goto LAB_1476a05c1;
                }
                else {
LAB_1476a05c1:
                  local_200 = (longlong ***)0x0;
                  local_78 = 0;
                  local_70 = 0x2000000000;
                  local_208 = ppuVar4;
                  local_68 = (uint)local_11bc;
                  ppuVar9 = (undefined8 **)FUN_1476b558a(&local_10f0,local_11bc,&local_208);
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                }
                iVar15 = FUN_1476a4108(ppuVar9,uVar2);
                if (iVar15 == -1) {
                  FUN_1476b56ae(ppuVar9,uVar2,0);
                }
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar1);
        }
        FUN_1476b5532(local_240);
        if (local_11f8 != 0) {
          *(undefined4 *)(local_11f8 + 0x14) = 1;
        }
        local_11c8 = FUN_1403b8464(&local_11d8);
      } while (local_11c8 != local_120c);
    }
    if (CONCAT26(uStack_11d2,CONCAT42(uStack_11d6,local_11d8)) != 0) {
      lVar8 = CONCAT44(uStack_11cc,CONCAT22(uStack_11ce,CONCAT11(uStack_11cf,local_11d0)));
      if (*(char *)(lVar8 + 0x270) == '\0') {
        *(int *)(lVar8 + 0x264) = *(int *)(lVar8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar8 + 0x264) = *(int *)(lVar8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_1150 != 0) {
    FUN_1400020a8();
  }
  lVar8 = local_1208;
  uStack_11d6 = *(undefined4 *)(local_1208 + 0x50);
  uStack_11cf = 0;
  uStack_11cc = 0x6ff;
  local_11c8 = local_11c8 & 0xffffff00;
  local_11ec = *(undefined2 *)(local_1208 + 0x124);
  FUN_1476b5472(&local_208);
  local_11b8 = (undefined **)&local_11ec;
  local_11b0 = (longlong **)&local_11ea;
  FUN_1447c44f6(local_1f0,&local_11b8);
  local_11b0 = (longlong **)(local_11bc + 2);
  local_11bc._0_2_ = *(undefined2 *)(lVar8 + 0x11c);
  local_11b8 = (undefined **)local_11bc;
  FUN_1447c44f6(local_1c8,&local_11b8);
  if ((local_208._2_2_ != -1) && (local_208._4_2_ != -1)) {
    lVar8 = *(longlong *)(local_1200 + 0x28);
    local_120d = *(char *)(lVar8 + 0x298);
    FUN_14150e78a(local_240,lVar8 + 0x28,local_1f0);
    local_120c = *(uint *)(lVar8 + 0x38);
    if (local_230 != local_120c) {
      do {
        lVar8 = *(longlong *)(local_238[0xc] + (longlong)(int)local_230 * 8);
        if (local_120d == '\0') {
          *(undefined4 *)(lVar8 + 0x14) = 0;
          local_11f8 = lVar8;
        }
        else {
          local_11f8 = 0;
        }
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          plVar23 = *(longlong **)(lVar8 + 0x28);
          lVar10 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar23 + 0x1e) == local_208._4_2_) goto LAB_1476a0690;
            plVar23 = plVar23 + 4;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        plVar23 = (longlong *)0x0;
LAB_1476a0690:
        iVar15 = *(int *)(lVar8 + 0x14);
        if (iVar15 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
        }
        LOCK();
        *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
        UNLOCK();
        lVar10 = *plVar23;
        if (*(ushort *)(lVar8 + 0xc) != 0) {
          pplVar22 = *(longlong ***)(lVar8 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar8 + 0xc) << 5;
          do {
            if (*(short *)((longlong)pplVar22 + 0x1e) == local_208._2_2_) goto LAB_1476a06bc;
            pplVar22 = pplVar22 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        pplVar22 = (longlong **)0x0;
LAB_1476a06bc:
        iVar3 = *(int *)(lVar8 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(pplVar22 + 1));
        }
        LOCK();
        *(int *)(pplVar22 + 3) = *(int *)(pplVar22 + 3) + 1;
        UNLOCK();
        local_11a0 = *pplVar22;
        local_11b8 = *(undefined ***)(lVar8 + 0x18);
        local_11a8 = CONCAT44(local_11a8._4_4_,iVar3);
        local_1190 = (undefined8 **)CONCAT44(local_1190._4_4_,iVar15);
        uVar1 = *(ushort *)(lVar8 + 0xe);
        local_11b0 = pplVar22;
        plStack_1198 = plVar23;
        local_1188 = lVar10;
        if ((ulonglong)uVar1 != 0) {
          uVar24 = 0;
          iVar15 = DAT_14cab5ff4;
          do {
            if (iVar15 != *(int *)(local_1188 + uVar24 * 4)) {
              uVar14 = *(uint *)((longlong)local_11a0 + uVar24 * 4);
              uVar19 = uVar14 & 0xffff;
              if ((int)uVar19 < *(int *)(ppuVar4 + 6)) {
                ppuVar12 = (undefined **)ppuVar4[5];
                if ((undefined **)ppuVar4[5] == (undefined **)0x0) {
                  ppuVar12 = ppuVar4 + 3;
                }
                if (((*(uint *)((longlong)ppuVar12 + (ulonglong)(uVar19 >> 5) * 4) >>
                      (uVar14 & 0x1f) & 1) != 0) &&
                   (uVar14 >> 0x10 ==
                    (uint)*(ushort *)(ppuVar4[1] + (ulonglong)uVar19 * 0x128 + 0x11c))) {
                  uVar20 = local_368 & 0xffffffff;
                  ppuVar9 = local_370;
                  if (local_370 == (undefined8 **)0x0) {
                    ppuVar9 = &local_10f0;
                  }
                  uVar14 = 0;
                  if (0 < (int)(uint)local_368) {
                    do {
                      uVar13 = (int)(uVar20 >> 1) + uVar14;
                      uVar16 = (uint)uVar20;
                      if (*(ushort *)(ppuVar9 + (ulonglong)uVar13 * 0x36) < uVar19) {
                        uVar14 = uVar13 + (uVar16 & 1);
                      }
                      uVar20 = uVar20 >> 1;
                    } while (1 < uVar16);
                  }
                  if ((((int)uVar14 < (int)(uint)local_368) &&
                      (*(ushort *)(ppuVar9 + (ulonglong)uVar14 * 0x36) <= uVar19)) &&
                     (ppuVar9 + (ulonglong)uVar14 * 0x36 != (undefined8 **)&DAT_fffffffffffffff8)) {
                    FUN_1476b5ab4();
                    iVar15 = DAT_14cab5ff4;
                  }
                }
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar1);
        }
        FUN_1476b5532(&local_11b8);
        if (local_11f8 != 0) {
          *(undefined4 *)(local_11f8 + 0x14) = 1;
        }
        local_230 = FUN_1403b8464(local_240,local_230 + 1);
      } while (local_230 != local_120c);
    }
    if (_local_240 != 0) {
      if ((char)local_238[0x4e] == '\0') {
        *(int *)((longlong)local_238 + 0x264) = *(int *)((longlong)local_238 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_238 + 0x264) = *(int *)((longlong)local_238 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  lVar8 = local_1200;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  lVar10 = *(longlong *)(lVar8 + 200);
  *(undefined4 *)(lVar10 + 0x48) = 0;
  if (*(int *)(lVar10 + 0x4c) != 0) {
    FUN_1476b5364(lVar10 + 0x40);
  }
  *(undefined4 *)(lVar10 + 0x50) = 0xffffffff;
  lVar8 = lVar8 + 0x40;
  FUN_145cde45a(lVar8);
  ppuVar9 = local_370;
  if (local_370 == (undefined8 **)0x0) {
    ppuVar9 = &local_10f0;
  }
  if ((longlong)(int)(uint)local_368 != 0) {
    ppuVar17 = ppuVar9 + (longlong)(int)(uint)local_368 * 0x36;
    do {
      if (0 < *(int *)(ppuVar9 + 0x34)) {
        uVar1 = *(ushort *)(ppuVar9 + 0x35);
        lVar11 = ppuVar9[1][1];
        iVar15 = 0;
        do {
          local_1218 = lVar10 + 0x40;
          FUN_1476a3e14(ppuVar9 + 1,iVar15,(ulonglong)uVar1 * 0x128 + lVar11,lVar8);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(ppuVar9 + 0x34));
      }
      ppuVar9 = ppuVar9 + 0x36;
    } while (ppuVar9 != ppuVar17);
  }
  lVar10 = local_1208;
  local_1f0[1] = 0x10000000000;
  local_1c0 = 0x10000000000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_11b0 = (longlong **)(local_240 + 4);
  local_240 = (undefined1  [4])
              CONCAT22(*(undefined2 *)(local_1208 + 0xf0),*(undefined2 *)(local_1208 + 0x50));
  local_11b8 = (undefined **)local_240;
  FUN_1447c44f6(&local_208,&local_11b8);
  _local_240 = CONCAT62(stack0xfffffffffffffdc2,*(undefined2 *)(lVar10 + 0x11c));
  local_11b8 = (undefined **)local_240;
  local_11b0 = (longlong **)(local_240 + 2);
  FUN_1447c44f6(local_1f0 + 2,&local_11b8);
  lVar11 = local_1200;
  lVar10 = *(longlong *)(local_1200 + 0x28);
  local_11a0 = (longlong *)0x0;
  plStack_1198 = (longlong *)0x0;
  local_11b0 = (longlong **)FUN_14009d2a0();
  local_11a8 = *(undefined8 *)(lVar10 + 600);
  local_11b8 = &PTR_FUN_14a4e0370;
  local_1190 = &local_10f0;
  FUN_1410fbbac(*(longlong *)(lVar11 + 0x28) + 0x28,&local_208,&local_11b8,3);
  FUN_1476a08e4(&local_11b8,*(undefined8 *)(lVar11 + 0x28));
  local_11b8 = &PTR_LAB_14a4e0390;
  if (local_11a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  lVar10 = local_1208;
  local_1f0[1] = 0x10000000000;
  local_1c0 = 0x10000000000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  _local_240 = CONCAT62(stack0xfffffffffffffdc2,*(undefined2 *)(local_1208 + 0x4e));
  local_11b8 = (undefined **)local_240;
  local_11b0 = (longlong **)(local_240 + 2);
  FUN_1447c44f6(&local_208,&local_11b8);
  local_240 = (undefined1  [4])
              CONCAT22(*(undefined2 *)(lVar10 + 0xf0),*(undefined2 *)(lVar10 + 0x11c));
  _local_240 = CONCAT26(*(undefined2 *)(lVar10 + 0x122),
                        CONCAT24(*(undefined2 *)(lVar10 + 0xf2),local_240));
  local_11b8 = (undefined **)local_240;
  local_11b0 = &local_238;
  FUN_1447c44f6(local_1f0 + 2,&local_11b8);
  lVar11 = local_1200;
  lVar10 = *(longlong *)(local_1200 + 0x28);
  local_11a0 = (longlong *)0x0;
  plStack_1198 = (longlong *)0x0;
  local_11b0 = (longlong **)FUN_14009d2a0();
  local_11a8 = *(undefined8 *)(lVar10 + 600);
  local_11b8 = &PTR_FUN_14a4e03b0;
  local_1188 = 0;
  local_1190 = (undefined8 **)lVar8;
  FUN_1410fbbac(*(longlong *)(lVar11 + 0x28) + 0x28,&local_208,&local_11b8,3);
  FUN_1476a08e4(&local_11b8,*(undefined8 *)(lVar11 + 0x28));
  local_11b8 = &PTR_LAB_14a4e0390;
  if (local_11a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1476a545a(&local_10f0);
  param_1 = local_1200;
LAB_1476a018b:
  FUN_1476a09b2(param_1);
  if (local_310 != 0) {
    FUN_1400020a8();
  }
  if (local_2b0 != 0) {
    FUN_1400020a8();
  }
  if (local_250 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a08e4 FUN_1476a08e4 body=205 status=ok
// SIG undefined FUN_1476a08e4(void)

void FUN_1476a08e4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_38 = 0x10000000000;
    FUN_140dba9e6(local_58,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xf2));
    FUN_140dba9e6(local_58,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xee));
    FUN_140dba9e6(local_58,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xf4));
    iVar1 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = 0;
      do {
        FUN_147546fa0(param_2 + 0x28,*(undefined2 *)(lVar2 + lVar3),local_58);
        lVar3 = lVar3 + 2;
      } while ((longlong)iVar1 * 2 != lVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a09b2 FUN_1476a09b2 body=3390 status=ok
// SIG undefined FUN_1476a09b2(void)

void FUN_1476a09b2(longlong param_1)

{
  short sVar1;
  undefined2 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  short *psVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  uint uVar18;
  int iVar19;
  undefined8 ***pppuVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  short *psVar25;
  longlong *plVar26;
  undefined8 ***pppuVar27;
  longlong lVar28;
  undefined1 auStack_488 [46];
  undefined2 local_45a;
  longlong local_458;
  ulonglong local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_438;
  longlong local_430;
  undefined2 local_422;
  short *local_420;
  int local_418;
  undefined8 **local_410;
  longlong local_408;
  undefined1 local_3fc [4];
  undefined8 local_3f8;
  undefined2 *local_3f0;
  ulonglong local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined8 **local_3d8;
  undefined8 local_3d0;
  undefined2 *local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined2 *local_3a0;
  undefined8 local_398;
  ulonglong uStack_390;
  longlong local_388;
  longlong local_380;
  longlong local_350;
  undefined8 *local_2f0;
  longlong local_2e8;
  undefined8 local_2d0;
  undefined1 local_2c8 [32];
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 uStack_298;
  undefined8 local_170;
  undefined8 local_168;
  undefined2 local_160 [4];
  undefined8 local_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_120;
  undefined4 local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined1 local_10a [58];
  undefined2 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_488;
  lVar10 = FUN_14009d2a0();
  local_a0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_70 = 0;
  uStack_68 = 0;
  local_2e8 = (longlong)&local_3b0 + 4;
  local_3b0._0_4_ = CONCAT22(*(undefined2 *)(lVar10 + 0x11a),*(undefined2 *)(lVar10 + 0xf2));
  local_2f0 = &local_3b0;
  FUN_1447c44f6();
  bVar6 = *(byte *)(param_1 + 0xd0);
  if (bVar6 == 0) {
    cVar7 = FUN_14050a5e0(*(longlong *)(param_1 + 0x28) + 0x28,local_c0);
    if (cVar7 == '\0') goto LAB_1476a1064;
    bVar6 = *(byte *)(param_1 + 0xd0);
  }
  local_458 = *(longlong *)(param_1 + 200);
  plVar26 = (longlong *)(local_458 + 0x40);
  local_450 = (ulonglong)*(uint *)(local_458 + 0x48);
  local_d0 = (undefined2 *)0x0;
  local_c8 = 0x1000000000;
  local_170 = 0;
  local_168 = 0x1000000000;
  local_158 = 0;
  local_150 = 0;
  uStack_14c = 0x20;
  uStack_148 = 0xffffffff;
  uStack_144 = 0;
  local_120 = 0;
  local_118 = 0;
  if ((bVar6 & 1) != 0) {
    iVar19 = *(int *)(local_458 + 0x50);
    if (iVar19 != -1) {
      if (*(int *)(local_458 + 0x48) != iVar19) {
        *(int *)(local_458 + 0x48) = iVar19;
        FUN_1476b5394(plVar26);
      }
      *(undefined4 *)(local_458 + 0x50) = 0xffffffff;
    }
    FUN_1476b5d46(param_1 + 0x78);
  }
  ppuVar17 = local_3d8;
  local_3d8 = (undefined8 **)CONCAT62(local_3d8._2_6_,*(undefined2 *)(lVar10 + 0xf2));
  ppuVar5 = local_3d8;
  local_3d8._6_2_ = SUB82(ppuVar17,6);
  local_3d8._0_6_ = (uint6)(uint5)ppuVar5;
  local_3d0 = (undefined8 ***)CONCAT35(local_3d0._5_3_,0x6ff);
  local_438 = lVar10;
  local_410 = (undefined8 **)&local_3f8;
  local_408 = (longlong)&local_3f8 + 2;
  local_3f8._0_2_ = *(undefined2 *)(lVar10 + 0x11c);
  FUN_1476a16f2(&local_3d8,&local_3b0);
  if (*(char *)(param_1 + 0xd0) == '\0') {
    local_3f8._0_2_ = *(undefined2 *)(local_438 + 0x11a);
    local_3d8 = (undefined8 **)&local_3f8;
    local_3d0 = (undefined8 ***)((longlong)&local_3f8 + 2);
    FUN_1447c44f6(&local_3a0);
  }
  local_440 = plVar26;
  local_430 = param_1;
  if ((short)local_3b0 != -1) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    local_448 = CONCAT71(local_448._1_7_,*(undefined1 *)(lVar10 + 0x298));
    FUN_14150e78a(&local_3d8,lVar10 + 0x28,&local_3a0);
    iVar19 = *(int *)(lVar10 + 0x38);
    uVar12 = (ulonglong)local_3c8 & 0xffffffff;
    if ((int)local_3c8 != iVar19) {
      do {
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)local_3d0 + 0x60) + (longlong)(int)uVar12 * 8);
        if ((char)local_448 == '\0') {
          *(undefined4 *)(lVar10 + 0x14) = 0;
          lVar13 = lVar10;
        }
        else {
          lVar13 = 0;
        }
        if (*(ushort *)(lVar10 + 0xc) != 0) {
          plVar26 = *(longlong **)(lVar10 + 0x28);
          lVar28 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar26 + 0x1e) == (short)local_3b0) goto LAB_1476a1641;
            plVar26 = plVar26 + 4;
            lVar28 = lVar28 + -0x20;
          } while (lVar28 != 0);
        }
        plVar26 = (longlong *)0x0;
LAB_1476a1641:
        iVar8 = *(int *)(lVar10 + 0x14);
        if (iVar8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar26 + 1));
        }
        LOCK();
        *(int *)(plVar26 + 3) = (int)plVar26[3] + 1;
        UNLOCK();
        uVar12 = (ulonglong)*(ushort *)(lVar10 + 0xe);
        if (uVar12 != 0) {
          lVar10 = *plVar26;
          do {
            FUN_1476b60a0(&local_2f0,&local_3f8,lVar10);
            lVar10 = lVar10 + 0x10;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar26 + 3) = (int)plVar26[3] + -1;
          UNLOCK();
          if (iVar8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar26 + 1));
          }
        }
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x14) = 1;
        }
        uVar12 = FUN_1403b8464(&local_3d8,(int)local_3c8 + 1);
        local_3c8 = (undefined2 *)CONCAT44(local_3c8._4_4_,(int)uVar12);
      } while ((int)uVar12 != iVar19);
    }
    if (local_3d8 != (undefined8 **)0x0) {
      if (*(char *)((longlong)local_3d0 + 0x270) == '\0') {
        *(int *)((longlong)local_3d0 + 0x264) = *(int *)((longlong)local_3d0 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_3d0 + 0x264) = *(int *)((longlong)local_3d0 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  local_3f0 = local_160;
  local_3f8 = (undefined8 ***)&DAT_100000000;
  local_3e8 = 0xffffffff;
  local_3e0 = 0;
  iVar19 = 0;
  if (local_150 != 0) {
    FUN_144a81a4c(&local_3f8);
    iVar19 = local_150;
  }
  local_3c0 = local_3e8;
  uVar12 = local_3c0;
  local_3b8 = local_3e0;
  local_3b4 = local_3dc;
  local_3d0 = local_3f8;
  local_3c8 = local_3f0;
  local_3d8 = &local_2f0;
  local_3c0._4_4_ = (int)(local_3e8 >> 0x20);
  if ((local_3c0._4_4_ != iVar19) || (local_3f0 != local_160)) {
    iVar8 = local_3c0._4_4_;
    local_3c0 = uVar12;
    do {
      ppuVar17 = (undefined8 **)local_3d8[0x30];
      if ((undefined8 **)local_3d8[0x30] == (undefined8 **)0x0) {
        ppuVar17 = local_3d8;
      }
      FUN_1475455a0(ppuVar17 + (longlong)iVar8 * 3);
      if ((longlong)(int)local_3f0 != 0) {
        pppuVar20 = (undefined8 ***)((longlong)local_3f8 + (longlong)(int)local_3f0 * 2);
        pppuVar27 = local_3f8;
        do {
          uVar12 = local_c8;
          sVar1 = *(short *)pppuVar27;
          uVar18 = (uint)local_c8;
          puVar14 = local_d0;
          if (local_d0 == (undefined2 *)0x0) {
            puVar14 = &local_110;
          }
          uVar24 = 0;
          if (0 < (int)(uint)local_c8) {
            uVar23 = local_c8 & 0xffffffff;
            uVar21 = (uint)local_c8;
            do {
              uVar21 = uVar21 >> 1;
              uVar22 = (uint)uVar23;
              if (sVar1 < (short)puVar14[(ulonglong)(uVar21 + uVar24) * 2]) {
                uVar24 = uVar21 + uVar24 + (uVar22 & 1);
              }
              uVar23 = (ulonglong)uVar21;
            } while (1 < uVar22);
          }
          if ((((int)(uint)local_c8 <= (int)uVar24) ||
              ((short)puVar14[(ulonglong)uVar24 * 2] < sVar1)) ||
             (puVar14 + (ulonglong)uVar24 * 2 == (undefined2 *)0xfffffffffffffffe)) {
            uVar23 = 0;
            if ((int)(uint)local_c8 < 1) {
LAB_1476a0d7a:
              local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 + 1);
              if (local_c8._4_4_ == uVar18) {
                FUN_14332b5c2(&local_110,uVar12 & 0xffffffff);
              }
              puVar14 = local_d0;
              if (local_d0 == (undefined2 *)0x0) {
                puVar14 = &local_110;
              }
              memmove(puVar14 + uVar23 * 2 + 2,puVar14 + uVar23 * 2,
                      (ulonglong)(uVar18 - (int)uVar23) << 2);
              puVar14 = local_d0;
              if (local_d0 == (undefined2 *)0x0) {
                puVar14 = &local_110;
              }
              psVar11 = puVar14 + uVar23 * 2;
            }
            else {
              uVar16 = local_c8 & 0xffffffff;
              uVar24 = (uint)local_c8;
              do {
                uVar16 = uVar16 >> 1;
                uVar21 = (uint)uVar16 + (int)uVar23;
                if (sVar1 < (short)puVar14[(ulonglong)uVar21 * 2]) {
                  uVar23 = (ulonglong)(uVar21 + (uVar24 & 1));
                }
                bVar4 = 1 < uVar24;
                uVar24 = (uint)uVar16;
              } while (bVar4);
              if (((int)(uint)local_c8 <= (int)uVar23) || ((short)puVar14[uVar23 * 2] < sVar1))
              goto LAB_1476a0d7a;
              psVar11 = puVar14 + uVar23 * 2;
            }
            *psVar11 = sVar1;
            psVar11[1] = -1;
          }
          pppuVar27 = (undefined8 ***)((longlong)pppuVar27 + 2);
        } while (pppuVar27 != pppuVar20);
      }
      local_3c0 = CONCAT44(local_3c0._4_4_,(uint)local_3c0 & ~local_3d0._4_4_);
      FUN_144a81a4c(&local_3d0);
      iVar8 = local_3c0._4_4_;
      uVar12 = local_3c0;
    } while (local_3d8 != &local_2f0 || (local_3c8 != local_160 || local_3c0._4_4_ != iVar19));
  }
  local_3c0 = uVar12;
  if (local_350 != 0) {
    FUN_1400020a8();
  }
  plVar26 = local_440;
  puVar14 = local_d0;
  if (local_d0 == (undefined2 *)0x0) {
    puVar14 = &local_110;
  }
  lVar10 = (longlong)(int)(uint)local_c8;
  if (lVar10 != 0) {
    lVar28 = 0;
    lVar13 = local_458;
    do {
      iVar19 = *(int *)(lVar13 + 0x48);
      if (*(int *)(lVar13 + 0x50) == -1) {
        *(int *)(lVar13 + 0x50) = iVar19;
      }
      *(uint *)(lVar13 + 0x48) = iVar19 + 1U;
      if (*(uint *)(lVar13 + 0x4c) < iVar19 + 1U) {
        FUN_1476b52d0(plVar26,iVar19);
        lVar13 = local_458;
      }
      lVar15 = (longlong)iVar19;
      lVar3 = *plVar26;
      *(undefined8 *)(lVar3 + lVar15 * 0x18) = 0x3ff0000000000000;
      *(undefined8 *)(lVar3 + 8 + lVar15 * 0x18) = 0x3ff0000000000000;
      *(undefined8 *)(lVar3 + 0x10 + lVar15 * 0x18) = 0xffffffff;
      *(short *)((longlong)puVar14 + lVar28 + 2) = (short)iVar19;
      lVar28 = lVar28 + 4;
    } while (lVar10 * 4 != lVar28);
  }
  if (0 < (int)local_450) {
    uVar12 = 0;
    do {
      sVar1 = *(short *)(*plVar26 + 0x14 + uVar12 * 0x18);
      puVar14 = local_d0;
      if (local_d0 == (undefined2 *)0x0) {
        puVar14 = &local_110;
      }
      uVar18 = 0;
      if (0 < (int)(uint)local_c8) {
        uVar18 = 0;
        uVar24 = (uint)local_c8;
        do {
          uVar21 = (uVar24 >> 1) + uVar18;
          if (sVar1 < (short)puVar14[(ulonglong)uVar21 * 2]) {
            uVar18 = uVar21 + (uVar24 & 1);
          }
          bVar4 = 1 < uVar24;
          uVar24 = uVar24 >> 1;
        } while (bVar4);
      }
      if ((((int)uVar18 < (int)(uint)local_c8) && (sVar1 <= (short)puVar14[(ulonglong)uVar18 * 2]))
         && (puVar14 + (ulonglong)uVar18 * 2 + 1 != (undefined2 *)0x0)) {
        *(undefined2 *)(*plVar26 + uVar12 * 0x18 + 0x12) = puVar14[(ulonglong)uVar18 * 2 + 1];
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != local_450);
  }
  local_3d8 = (undefined8 **)0x100000000;
  local_3d0 = (undefined8 ***)local_160;
  local_3c8 = (undefined2 *)0xffffffff;
  local_3c0 = local_3c0 & 0xffffffff00000000;
  iVar19 = 0;
  if (local_150 != 0) {
    FUN_144a81a4c(&local_3d8);
    iVar19 = local_150;
  }
  local_398 = (ulonglong)local_3c8;
  uVar12 = local_398;
  uStack_390 = local_3c0;
  local_3a8 = local_3d8;
  local_3a0 = (undefined2 *)local_3d0;
  local_3b0 = (undefined **)&local_2f0;
  local_398._4_4_ = (int)((ulonglong)local_3c8 >> 0x20);
  if ((local_398._4_4_ != iVar19) || (local_3d0 != (undefined8 ***)local_160)) {
    local_448 = local_430 + 0x78;
    iVar8 = local_398._4_4_;
    local_398 = uVar12;
    do {
      ppuVar17 = (undefined8 **)local_3b0[0x30];
      if ((undefined8 **)local_3b0[0x30] == (undefined8 **)0x0) {
        ppuVar17 = (undefined8 **)local_3b0;
      }
      ppuVar17 = ppuVar17 + (longlong)iVar8 * 3;
      iVar8 = FUN_147545560(ppuVar17);
      FUN_1475455a0(ppuVar17,&local_420);
      if ((longlong)local_418 != 0) {
        psVar11 = local_420 + local_418;
        local_450 = CONCAT44(local_450._4_4_,iVar8);
        psVar25 = local_420;
        do {
          sVar1 = *psVar25;
          local_3d8 = (undefined8 **)CONCAT62(local_3d8._2_6_,sVar1);
          FUN_1475451a6(&local_3d0,ppuVar17);
          uVar18 = (uint)(short)local_3d8;
          iVar9 = FUN_1476a53cf(&local_3d0);
          iVar9 = FUN_1476a5300(local_448,
                                (uVar18 >> 2) + uVar18 * 0x40 + iVar9 + 0x9e3779b9 ^ uVar18,
                                &local_3d8);
          FUN_1432d4318(&local_3d0);
          if (iVar9 == -1) {
            puVar14 = local_d0;
            if (local_d0 == (undefined2 *)0x0) {
              puVar14 = &local_110;
            }
            uVar18 = 0;
            if (0 < (int)(uint)local_c8) {
              uVar18 = 0;
              uVar24 = (uint)local_c8;
              do {
                uVar21 = (uVar24 >> 1) + uVar18;
                if (sVar1 < (short)puVar14[(ulonglong)uVar21 * 2]) {
                  uVar18 = uVar21 + (uVar24 & 1);
                }
                bVar4 = 1 < uVar24;
                uVar24 = uVar24 >> 1;
              } while (bVar4);
            }
            if ((((int)uVar18 < (int)(uint)local_c8) && (uVar18 != 0xffffffff)) &&
               (sVar1 <= (short)puVar14[(ulonglong)uVar18 * 2])) {
              puVar14 = puVar14 + (longlong)(int)uVar18 * 2 + 1;
            }
            else {
              puVar14 = (undefined2 *)0x0;
            }
            uVar2 = *puVar14;
            iVar9 = *(int *)(local_458 + 0x48);
            if (*(int *)(local_458 + 0x50) == -1) {
              *(int *)(local_458 + 0x50) = iVar9;
            }
            *(uint *)(local_458 + 0x48) = iVar9 + 1U;
            if (*(uint *)(local_458 + 0x4c) < iVar9 + 1U) {
              local_45a = uVar2;
              FUN_1476b52d0(local_440,iVar9);
              uVar2 = local_45a;
            }
            lVar13 = (longlong)iVar9;
            lVar10 = *local_440;
            *(undefined8 *)(lVar10 + lVar13 * 0x18) = 0x3ff0000000000000;
            *(undefined8 *)(lVar10 + 8 + lVar13 * 0x18) = 0x3ff0000000000000;
            *(undefined2 *)(lVar10 + 0x10 + lVar13 * 0x18) = uVar2;
            *(undefined4 *)(lVar10 + 0x12 + lVar13 * 0x18) = 0xffff;
            *(undefined1 *)(lVar10 + 0x16 + lVar13 * 0x18) = 1;
            local_422 = (undefined2)iVar9;
            if (iVar8 != (int)local_450) {
              *(undefined2 *)
               (*(longlong *)(local_458 + 0x40) + -0x1e +
               (longlong)*(int *)(local_458 + 0x48) * 0x18) = local_422;
            }
            local_3d8 = (undefined8 **)CONCAT62(local_3d8._2_6_,sVar1);
            FUN_1475451a6(&local_3d0,ppuVar17);
            local_3f8 = &local_3d8;
            local_3f0 = &local_422;
            FUN_1476b66ca(local_448,local_3fc,&local_3f8);
            FUN_1432d4318(&local_3d0);
            local_450 = CONCAT44(local_450._4_4_,(int)local_450 + -1);
          }
          psVar25 = psVar25 + 1;
        } while (psVar25 != psVar11);
      }
      local_398 = CONCAT44(local_398._4_4_,(uint)local_398 & ~local_3a8._4_4_);
      FUN_144a81a4c(&local_3a8);
      iVar8 = local_398._4_4_;
      uVar12 = local_398;
    } while ((undefined8 **)local_3b0 != &local_2f0 ||
             (local_3a0 != local_160 || local_398._4_4_ != iVar19));
  }
  local_398 = uVar12;
  local_118 = 0;
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  FUN_1476b5bb6(&local_2f0);
  param_1 = local_430;
  lVar10 = local_438;
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1476a1064:
  local_2d0 = 0x10000000000;
  local_2a8 = 0x10000000000;
  local_2a0 = 0;
  uStack_298 = 0;
  local_110 = *(undefined2 *)(lVar10 + 0x4e);
  local_3a8 = (undefined8 **)&local_10c;
  local_10e = *(undefined2 *)(lVar10 + 0xf2);
  local_3b0 = (undefined **)&local_110;
  FUN_1447c44f6();
  if (*(char *)(param_1 + 0xd0) == '\0') {
    local_110 = *(undefined2 *)(lVar10 + 0x11a);
    local_3a8 = (undefined8 **)&local_10e;
    local_3b0 = (undefined **)&local_110;
    FUN_1447c44f6(&local_2f0);
  }
  local_110 = *(undefined2 *)(lVar10 + 0x11c);
  local_3a8 = (undefined8 **)local_10a;
  local_10e = *(undefined2 *)(lVar10 + 0xf0);
  local_10c = *(undefined2 *)(lVar10 + 0x122);
  local_3b0 = (undefined **)&local_110;
  FUN_1447c44f6(local_2c8,&local_3b0);
  lVar10 = *(longlong *)(param_1 + 0x28);
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = (undefined8 **)FUN_14009d2a0();
  local_3a0 = *(undefined2 **)(lVar10 + 600);
  local_3b0 = &PTR_FUN_14a4e03b0;
  local_388 = param_1 + 0x40;
  local_380 = param_1 + 0x78;
  FUN_1410fbbac(*(longlong *)(param_1 + 0x28) + 0x28,&local_2f0,&local_3b0,3);
  FUN_1476a08e4(&local_3b0,*(undefined8 *)(param_1 + 0x28));
  local_3b0 = &PTR_LAB_14a4e0390;
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  if (local_2a0 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a16f2 FUN_1476a16f2 body=170 status=ok
// SIG undefined FUN_1476a16f2(void)

undefined8 * FUN_1476a16f2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  ulonglong *puStack_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_22 = *(undefined2 *)param_2;
  puStack_30 = &local_20;
  local_38 = &local_22;
  FUN_1447c44f6(param_2 + 2,&local_38);
  local_38 = (undefined2 *)*param_3;
  puStack_30 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 7,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a179e FUN_1476a179e body=90 status=ok
// SIG undefined FUN_1476a179e(void)

void FUN_1476a179e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_140c608fc(param_1 + 0x80);
  if (iVar2 != -1) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8);
    iVar2 = *(int *)(param_4 + 0x10);
    *(uint *)(param_4 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_4 + 0x14) < iVar2 + 1U) {
      FUN_14571f162(param_4,iVar2);
    }
    lVar3 = *(longlong *)(param_4 + 8);
    if (*(longlong *)(param_4 + 8) == 0) {
      lVar3 = param_4;
    }
    *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = uVar1;
  }
  return;
}



// FUNCTION 1476a17f8 FUN_1476a17f8 body=104 status=ok
// SIG undefined FUN_1476a17f8(void)

void FUN_1476a17f8(longlong param_1,undefined4 *param_2,byte *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uint)*param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10;
        if (*(byte *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x10) == *param_3) {
          if (lVar3 != 0) {
            uVar1 = *(undefined4 *)(lVar3 + 4);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 8);
      } while (iVar2 != -1);
    }
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1476a1860 FUN_1476a1860 body=195 status=ok
// SIG undefined FUN_1476a1860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1476a1860(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab6398) && (FUN_144b3d300(&DAT_14cab6398), DAT_14cab6398 == -1)) {
    _DAT_14cab6388 = 0;
    uRam000000014cab6390 = 0;
    _DAT_14cab6378 = 0;
    uRam000000014cab6380 = 0;
    atexit((_func_5014 *)&LAB_14332c68f);
    _Init_thread_footer(&DAT_14cab6398);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x90))) {
    lVar1 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x88);
    }
    if (((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x24 + (ulonglong)param_2 * 0x28) & 1) != 0)) {
      return (undefined *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 0x28 + 4);
    }
  }
  return &DAT_14cab6378;
}



// FUNCTION 1476a192a FUN_1476a192a body=422 status=ok
// SIG undefined FUN_1476a192a(void)

void FUN_1476a192a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    local_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_30 = *(undefined8 *)(param_1 + 0x48);
    local_28 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = FUN_140083894();
  }
  else {
    local_48 = *(undefined8 *)(param_2 + 0x100);
    plVar3 = *(longlong **)(param_2 + 0x108);
    if (plVar3 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_40 = plVar3;
    }
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0x110));
    local_68 = *(undefined4 *)(param_1 + 4);
    uStack_64 = *(undefined4 *)(param_1 + 8);
    uStack_60 = *(undefined4 *)(param_1 + 0xc);
    uStack_5c = *(undefined4 *)(param_1 + 0x10);
    local_58 = *(undefined8 *)(param_1 + 0x14);
    lVar5 = FUN_1410cbbf6(&local_68,&local_38,&local_48);
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
    if (lVar5 == 0) goto LAB_1476a1987;
    lVar6 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1476a1987;
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 == 0) {
      local_28 = DAT_14c8464f0;
      local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_38 = *(undefined8 *)(lVar5 + 0x260);
      uStack_30 = *(undefined8 *)(lVar5 + 0x268);
      local_28 = *(undefined8 *)(lVar5 + 0x270);
    }
    uVar4 = FUN_140083894();
  }
  local_78 = 0;
  FUN_147a3539a(uVar4,&local_38,0x3f800000,0);
LAB_1476a1987:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a1ad2 FUN_1476a1ad2 body=228 status=ok
// SIG undefined FUN_1476a1ad2(void)

longlong * FUN_1476a1ad2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  
  lVar9 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *param_2;
    }
  }
  *param_1 = lVar9;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 1) = (int)param_2[1];
  lVar9 = param_2[3];
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  param_1[2] = param_2[2];
  param_1[3] = lVar9;
  param_1[4] = lVar1;
  param_1[5] = lVar2;
  param_1[6] = lVar3;
  param_1[7] = lVar4;
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  if (param_2 == param_1) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    goto LAB_1476a1b4c;
  }
  if (*(char *)((longlong)param_2 + 0x49) == '\x01') {
    *(char *)(param_1 + 9) = (char)param_2[9];
    uVar8 = 1;
LAB_1476a1b92:
    *(undefined1 *)((longlong)param_1 + 0x49) = uVar8;
  }
  else if (*(char *)((longlong)param_1 + 0x49) != '\0') {
    uVar8 = 0;
    goto LAB_1476a1b92;
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  if (*(char *)((longlong)param_2 + 0x51) == '\x01') {
    *(char *)(param_1 + 10) = (char)param_2[10];
    *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
LAB_1476a1b4c:
  *(undefined8 *)((longlong)param_1 + 0x71) = *(undefined8 *)((longlong)param_2 + 0x71);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x54);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x5c);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar6;
  return param_1;
}



// FUNCTION 1476a1bbc FUN_1476a1bbc body=50 status=ok
// SIG undefined FUN_1476a1bbc(void)

void FUN_1476a1bbc(longlong param_1)

{
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
    return;
  }
  FUN_141539c3e(param_1 + 0x50);
  FUN_14170af7a(param_1 + 0x50);
  return;
}



// FUNCTION 1476a1bf0 FUN_1476a1bf0 body=745 status=ok
// SIG undefined FUN_1476a1bf0(void)

void FUN_1476a1bf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [40];
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0x38);
  lVar4 = *param_2;
  FUN_1410cc13e(local_78,lVar6,param_2);
  if ((*(int *)(lVar6 + 0x430) != 0) || (local_48 == '\x01')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab62b8) {
      FUN_144b3d300(&DAT_14cab62b8);
      if (DAT_14cab62b8 == -1) {
        DAT_14cab62b4 = 0xffffffff;
        _Init_thread_footer(&DAT_14cab62b8);
      }
    }
    FUN_1476b8e38(lVar6 + 0x430,&local_c0,DAT_14cab62b0);
    FUN_1468b322a(lVar4 + 0x110,&local_98);
    iVar5 = *(int *)(lVar4 + 0x108);
    if ((longlong)iVar5 != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x100);
      lVar7 = 0;
      do {
        if ((*(longlong *)(lVar6 + lVar7) != 0) &&
           (plVar3 = *(longlong **)(lVar6 + 8 + lVar7), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(lVar6 + 0x10 + lVar7),&local_98);
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)iVar5 * 0x18 != lVar7);
    }
    if ((longlong)(int)uStack_90 == 0) {
      uStack_90 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_90 << 5;
      lVar6 = local_98;
      do {
        FUN_1476a1eda(local_c0,DAT_14cab62b4,lVar6);
        lVar6 = lVar6 + 0x20;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
      uStack_90 = uStack_90 & 0xffffffff;
    }
    FUN_141535be2(local_98,uStack_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)CONCAT44(uStack_b4,local_b8);
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
  }
  plVar3 = (longlong *)(lVar4 + 0x110);
  lVar6 = lVar4 + 0x120;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  uStack_80 = 0;
  uStack_90 = lVar6;
  if (*(int *)(lVar4 + 0x138) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar5 = *(int *)(lVar4 + 0x138);
  }
  uStack_a0 = CONCAT44(uStack_7c,uStack_80);
  local_a8 = local_88;
  iStack_a4 = iStack_84;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (int)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_c0 = plVar3;
  if ((iStack_84 != iVar5) || (uStack_90 != lVar6)) {
    do {
      FUN_14482b35e(param_1 + 0x50,&local_98,(longlong)iStack_a4 * 0x28 + *local_c0,0);
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != plVar3 || (CONCAT44(uStack_ac,uStack_b0) != lVar6 || iStack_a4 != iVar5));
  }
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8) =
       local_50;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a1eda FUN_1476a1eda body=205 status=ok
// SIG undefined FUN_1476a1eda(void)

void FUN_1476a1eda(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476ba864(param_1,&local_34);
  local_3c = *(undefined4 *)(param_1 + 0xc0);
  local_38 = local_34;
  local_40 = param_2;
  FUN_140274704(*(undefined8 *)(param_1 + 0xb0),&local_40);
  cVar1 = FUN_14115d04a(*(undefined8 *)(param_1 + 0xb0));
  cVar2 = FUN_1476ba994(param_1,local_38,cVar1 + '\x01');
  if (cVar2 == '\0') {
    FUN_1476a1fa8(local_50,param_3);
    FUN_1476baa1e(param_1,local_34,cVar1 + '\x01',local_50);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a1fa8 FUN_1476a1fa8 body=190 status=ok
// SIG undefined FUN_1476a1fa8(void)

undefined8 * FUN_1476a1fa8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab6350) {
    FUN_144b3d300(&DAT_14cab6350);
    if (DAT_14cab6350 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cab6348 = DAT_14c8407a8;
      _Init_thread_footer(&DAT_14cab6350);
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  plVar1 = (longlong *)(**(code **)(*DAT_14cab6348 + 200))(DAT_14cab6348,puVar2,1);
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1476a2066 FUN_1476a2066 body=295 status=ok
// SIG undefined FUN_1476a2066(void)

void FUN_1476a2066(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *param_2;
  plVar1 = (longlong *)(lVar3 + 0x110);
  lVar2 = lVar3 + 0x120;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(lVar3 + 0x138) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(lVar3 + 0x138);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      FUN_14482b35e(param_1 + 0x50,&local_58,(longlong)iStack_64 * 0x28 + *local_80,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2198 FUN_1476a2198 body=231 status=ok
// SIG undefined FUN_1476a2198(void)

longlong *
FUN_1476a2198(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1476a227f();
  FUN_1475b9b48(plVar4,param_6);
  uVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
  plVar1 = param_1 + 0x1f;
  (**(code **)(*plVar4 + 0x300))(plVar4,plVar1,param_2,param_3,uVar3);
  plVar4[0x25] = param_4;
  plVar4[0x26] = param_5;
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  iVar2 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar2 + 1U) {
    FUN_14759143a(plVar1,iVar2);
  }
  *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar4;
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  return plVar4;
}



// FUNCTION 1476a227f FUN_1476a227f body=182 status=ok
// SIG undefined FUN_1476a227f(void)

undefined8 FUN_1476a227f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b33da4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2336 FUN_1476a2336 body=75 status=ok
// SIG undefined FUN_1476a2336(void)

bool FUN_1476a2336(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476a236a;
    }
  }
  lVar2 = 0;
LAB_1476a236a:
  lVar1 = FUN_145b33da4();
  return lVar2 == lVar1;
}



// FUNCTION 1476a238c FUN_1476a238c body=75 status=ok
// SIG undefined FUN_1476a238c(void)

bool FUN_1476a238c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476a23c0;
    }
  }
  lVar2 = 0;
LAB_1476a23c0:
  lVar1 = FUN_1459907ea();
  return lVar2 == lVar1;
}



// FUNCTION 1476a23dd FUN_1476a23dd body=182 status=ok
// SIG undefined FUN_1476a23dd(void)

undefined8 FUN_1476a23dd(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459907ea();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a24ee FUN_1476a24ee body=132 status=ok
// SIG undefined FUN_1476a24ee(void)

void FUN_1476a24ee(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 1476a2572 FUN_1476a2572 body=106 status=ok
// SIG undefined FUN_1476a2572(void)

void FUN_1476a2572(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a25de FUN_1476a25de body=95 status=ok
// SIG undefined FUN_1476a25de(void)

void FUN_1476a25de(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 1476a264e FUN_1476a264e body=75 status=ok
// SIG undefined FUN_1476a264e(void)

bool FUN_1476a264e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476a2682;
    }
  }
  lVar2 = 0;
LAB_1476a2682:
  lVar1 = FUN_145b33e8e();
  return lVar2 == lVar1;
}



// FUNCTION 1476a269f FUN_1476a269f body=182 status=ok
// SIG undefined FUN_1476a269f(void)

undefined8 FUN_1476a269f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b33e8e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2756 FUN_1476a2756 body=122 status=ok
// SIG undefined FUN_1476a2756(void)

longlong FUN_1476a2756(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_188 [32];
  undefined **local_168 [7];
  undefined1 local_130 [280];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1475aadac(local_168,param_3);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1476badc8(param_2,local_168);
  local_168[0] = &PTR_FUN_14a4ab760;
  FUN_1404dbc70(local_130);
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a27d2 FUN_1476a27d2 body=198 status=ok
// SIG undefined FUN_1476a27d2(void)

longlong *
FUN_1476a27d2(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1476a269f();
  FUN_1475b9f7e(plVar4,param_6);
  uVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
  plVar1 = param_1 + 0x1f;
  (**(code **)(*plVar4 + 0x300))(plVar4,plVar1,param_2,param_3,uVar3);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  iVar2 = (int)param_1[0x20];
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar2 + 1U) {
    FUN_14759143a(plVar1,iVar2);
  }
  *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar4;
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  return plVar4;
}



// FUNCTION 1476a289c FUN_1476a289c body=75 status=ok
// SIG undefined FUN_1476a289c(void)

bool FUN_1476a289c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1476a28d5;
    }
  }
  lVar2 = 0;
LAB_1476a28d5:
  lVar1 = FUN_145b33f78();
  return lVar2 == lVar1;
}



// FUNCTION 1476a28e8 FUN_1476a28e8 body=40 status=ok
// SIG undefined FUN_1476a28e8(void)

void FUN_1476a28e8(undefined8 param_1)

{
  FUN_1476a2910(param_1,0,8,0,0,0);
  return;
}



// FUNCTION 1476a2910 FUN_1476a2910 body=246 status=ok
// SIG undefined FUN_1476a2910(void)

undefined8
FUN_1476a2910(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_145b33f78();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2a08 FUN_1476a2a08 body=119 status=ok
// SIG undefined FUN_1476a2a08(void)

void FUN_1476a2a08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_1476a2a3e:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_1405621bc();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_1476a2a3e;
    lVar2 = *param_2;
  }
  lVar1 = FUN_14099c56c();
  if (lVar2 == lVar1) {
    *param_2 = 0;
  }
  else {
    lVar2 = *param_2;
    if (DAT_14c950c29 == '\0') goto LAB_1476a2a6e;
    if (lVar2 != 0) {
      FUN_1456cec3c();
      lVar2 = *param_2;
      goto LAB_1476a2a6e;
    }
  }
  lVar2 = 0;
LAB_1476a2a6e:
  *(longlong *)(param_1 + 8) = lVar2;
  return;
}



// FUNCTION 1476a2a80 FUN_1476a2a80 body=210 status=ok
// SIG undefined FUN_1476a2a80(void)

void FUN_1476a2a80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145b366c6();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1476bae74(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  lVar2 = FUN_14099c56c();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1476bae74(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
    return;
  }
  return;
}



// FUNCTION 1476a2b7c FUN_1476a2b7c body=48 status=ok
// SIG undefined FUN_1476a2b7c(void)

longlong FUN_1476a2b7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140885ffc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a2bb4 FUN_1476a2bb4 body=52 status=ok
// SIG undefined FUN_1476a2bb4(void)

void FUN_1476a2bb4(longlong *param_1)

{
  FUN_1476a2be8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476a2be8 FUN_1476a2be8 body=89 status=ok
// SIG undefined FUN_1476a2be8(void)

void FUN_1476a2be8(longlong param_1)

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



// FUNCTION 1476a2c42 FUN_1476a2c42 body=49 status=ok
// SIG undefined FUN_1476a2c42(void)

undefined8 * FUN_1476a2c42(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a2c74 FUN_1476a2c74 body=78 status=ok
// SIG undefined FUN_1476a2c74(void)

undefined8 FUN_1476a2c74(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476a2d02();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2cc4 FUN_1476a2cc4 body=40 status=ok
// SIG undefined FUN_1476a2cc4(void)

void FUN_1476a2cc4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476a2d02 FUN_1476a2d02 body=324 status=ok
// SIG undefined FUN_1476a2d02(void)

undefined2 * FUN_1476a2d02(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_48 = (undefined1 *)0x0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xe) * '\x02' + '\x01',param_4,
                local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140dbdbb4(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  local_88 = local_78;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar2) + 8))
                (*(longlong **)(puVar1 + lVar2),&local_88,&local_60);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_68;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a2e48 FUN_1476a2e48 body=49 status=ok
// SIG undefined FUN_1476a2e48(void)

undefined8 * FUN_1476a2e48(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a2e7a FUN_1476a2e7a body=78 status=ok
// SIG undefined FUN_1476a2e7a(void)

undefined8 FUN_1476a2e7a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476a2f08();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a2eca FUN_1476a2eca body=40 status=ok
// SIG undefined FUN_1476a2eca(void)

void FUN_1476a2eca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476a2f08 FUN_1476a2f08 body=324 status=ok
// SIG undefined FUN_1476a2f08(void)

undefined2 * FUN_1476a2f08(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_48 = (undefined1 *)0x0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xe) * '\x02' + '\x01',param_4,
                local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140dbbd66(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  local_88 = local_78;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar2) + 8))
                (*(longlong **)(puVar1 + lVar2),&local_88,&local_60);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_68;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a304e FUN_1476a304e body=52 status=ok
// SIG undefined FUN_1476a304e(void)

undefined8 * FUN_1476a304e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e0290;
  FUN_140dbce18(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a3082 FUN_1476a3082 body=78 status=ok
// SIG undefined FUN_1476a3082(void)

undefined8 FUN_1476a3082(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476a3110();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a30d2 FUN_1476a30d2 body=40 status=ok
// SIG undefined FUN_1476a30d2(void)

void FUN_1476a30d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476a3110 FUN_1476a3110 body=324 status=ok
// SIG undefined FUN_1476a3110(void)

undefined2 * FUN_1476a3110(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_48 = (undefined1 *)0x0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140dbcd2e(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  local_88 = local_78;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar2) + 8))
                (*(longlong **)(puVar1 + lVar2),&local_88,&local_60);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_68;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a3256 FUN_1476a3256 body=49 status=ok
// SIG undefined FUN_1476a3256(void)

undefined8 * FUN_1476a3256(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a3288 FUN_1476a3288 body=78 status=ok
// SIG undefined FUN_1476a3288(void)

undefined8 FUN_1476a3288(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476a3328();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a32d8 FUN_1476a32d8 body=57 status=ok
// SIG undefined FUN_1476a32d8(void)

void FUN_1476a32d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476a3328 FUN_1476a3328 body=336 status=ok
// SIG undefined FUN_1476a3328(void)

undefined2 * FUN_1476a3328(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_48 = (undefined1 *)0x0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x12) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140dbd8a8(param_1 + 8,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  puVar1 = local_58;
  if (local_48 != (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  lVar3 = (longlong)(int)local_40;
  local_88 = local_78;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(puVar1 + lVar2) + 8))
                (*(longlong **)(puVar1 + lVar2),&local_88,&local_60);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  *param_2 = local_68;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a347a FUN_1476a347a body=69 status=ok
// SIG undefined FUN_1476a347a(void)

undefined8 * FUN_1476a347a(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a34c0 FUN_1476a34c0 body=78 status=ok
// SIG undefined FUN_1476a34c0(void)

undefined8 FUN_1476a34c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476a35ba();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3510 FUN_1476a3510 body=82 status=ok
// SIG undefined FUN_1476a3510(void)

void FUN_1476a3510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476a36ea(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3564 FUN_1476a3564 body=85 status=ok
// SIG undefined FUN_1476a3564(void)

void FUN_1476a3564(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140dbd8a8(param_1 + 8,lVar2,uVar1);
  FUN_140659bfa(param_1 + 0x10,lVar2,uVar1);
  FUN_1457abe70(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 1476a35ba FUN_1476a35ba body=302 status=ok
// SIG undefined FUN_1476a35ba(void)

undefined2 * FUN_1476a35ba(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_4;
  FUN_1476a36ea(local_58,param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x50) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  FUN_1476a3564(param_1);
  local_88 = local_78;
  local_80 = local_70;
  local_7c = 1;
  puVar2 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    puVar2 = local_58;
  }
  lVar3 = (longlong)(int)local_40;
  if (lVar3 != 0) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar2 + lVar1) + 8))
                (*(longlong **)((longlong)puVar2 + lVar1),&local_88,&local_60);
      lVar1 = lVar1 + 8;
    } while (lVar3 * 8 != lVar1);
  }
  *param_2 = local_68;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a36ea FUN_1476a36ea body=95 status=ok
// SIG undefined FUN_1476a36ea(void)

void FUN_1476a36ea(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  FUN_140dba9e6(*param_1,param_2[0x22]);
  FUN_140dba9e6(*param_1,param_2[0x23]);
  return;
}



// FUNCTION 1476a374a FUN_1476a374a body=79 status=ok
// SIG undefined FUN_1476a374a(void)

undefined8 * FUN_1476a374a(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a379a FUN_1476a379a body=78 status=ok
// SIG undefined FUN_1476a379a(void)

undefined8 FUN_1476a379a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14769bf80();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a37ea FUN_1476a37ea body=82 status=ok
// SIG undefined FUN_1476a37ea(void)

void FUN_1476a37ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476a3896(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a383e FUN_1476a383e body=86 status=ok
// SIG undefined FUN_1476a383e(void)

void FUN_1476a383e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476a3902(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3896 FUN_1476a3896 body=107 status=ok
// SIG undefined FUN_1476a3896(void)

void FUN_1476a3896(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  FUN_140dba9e6(*param_1,param_2[0x22]);
  FUN_140dba9e6(*param_1,param_2[0x23]);
  FUN_140dba9e6(*param_1,param_2[0x24]);
  return;
}



// FUNCTION 1476a3902 FUN_1476a3902 body=84 status=ok
// SIG undefined FUN_1476a3902(void)

void FUN_1476a3902(undefined8 *param_1,longlong param_2)

{
  FUN_140dbd8a8(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1457abe70(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbdbb4(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476a3956 FUN_1476a3956 body=79 status=ok
// SIG undefined FUN_1476a3956(void)

undefined8 * FUN_1476a3956(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a39a6 FUN_1476a39a6 body=78 status=ok
// SIG undefined FUN_1476a39a6(void)

undefined8 FUN_1476a39a6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1457abc42();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a39f6 FUN_1476a39f6 body=82 status=ok
// SIG undefined FUN_1476a39f6(void)

void FUN_1476a39f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1457abe02(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3a4a FUN_1476a3a4a body=86 status=ok
// SIG undefined FUN_1476a3a4a(void)

void FUN_1476a3a4a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1457abdae(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3aa2 FUN_1476a3aa2 body=82 status=ok
// SIG undefined FUN_1476a3aa2(void)

undefined8 * FUN_1476a3aa2(undefined8 *param_1,int param_2)

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



// FUNCTION 1476a3af4 FUN_1476a3af4 body=78 status=ok
// SIG undefined FUN_1476a3af4(void)

undefined8 FUN_1476a3af4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14769c1d2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3b44 FUN_1476a3b44 body=82 status=ok
// SIG undefined FUN_1476a3b44(void)

void FUN_1476a3b44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476a3bf0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3b98 FUN_1476a3b98 body=86 status=ok
// SIG undefined FUN_1476a3b98(void)

void FUN_1476a3b98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476a3c5c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a3bf0 FUN_1476a3bf0 body=107 status=ok
// SIG undefined FUN_1476a3bf0(void)

void FUN_1476a3bf0(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  FUN_140dba9e6(*param_1,param_2[0x22]);
  FUN_140dba9e6(*param_1,param_2[0x23]);
  FUN_140dba9e6(*param_1,param_2[0x24]);
  return;
}



// FUNCTION 1476a3c5c FUN_1476a3c5c body=84 status=ok
// SIG undefined FUN_1476a3c5c(void)

void FUN_1476a3c5c(undefined8 *param_1,longlong param_2)

{
  FUN_140dbd8a8(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1457abe70(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140dbcd2e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476a3cb0 FUN_1476a3cb0 body=80 status=ok
// SIG undefined FUN_1476a3cb0(void)

void FUN_1476a3cb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 4;
    return;
  }
  FUN_1476a3d00(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_1475653e1(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1476a3d00 FUN_1476a3d00 body=104 status=ok
// SIG undefined FUN_1476a3d00(void)

void FUN_1476a3d00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 5) {
      iVar3 = 4;
    }
    else {
      iVar2 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar3 = (int)(uVar1 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
      else if (iVar3 < 1) goto LAB_1476a3d39;
    }
    iVar2 = iVar3;
    FUN_14754fd60(param_1,0,iVar2,0x10);
  }
LAB_1476a3d39:
  *(int *)(param_1 + 0x4c) = iVar2;
  return;
}



// FUNCTION 1476a3d68 FUN_1476a3d68 body=52 status=ok
// SIG undefined FUN_1476a3d68(void)

void FUN_1476a3d68(longlong *param_1)

{
  FUN_1476a3d9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476a3d9c FUN_1476a3d9c body=89 status=ok
// SIG undefined FUN_1476a3d9c(void)

void FUN_1476a3d9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 1476a3df6 FUN_1476a3df6 body=29 status=ok
// SIG undefined FUN_1476a3df6(void)

undefined8 FUN_1476a3df6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a3e14 FUN_1476a3e14 body=754 status=ok
// SIG undefined FUN_1476a3e14(void)

ulonglong FUN_1476a3e14(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined6 uVar14;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  short local_6c [2];
  ulonglong local_68;
  uint local_60;
  undefined1 local_58 [8];
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar9 = (longlong *)param_1[0x32];
  if ((longlong *)param_1[0x32] == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  lVar12 = (longlong)param_2;
  uVar3 = *(ushort *)((longlong)plVar9 + lVar12 * 0xc + 4);
  uVar13 = (ulonglong)uVar3;
  if (uVar3 != 0xffff) goto LAB_1476a3e5c;
  local_60 = *(uint *)((longlong)plVar9 + lVar12 * 0xc + 8);
  local_68 = *(ulonglong *)((longlong)plVar9 + lVar12 * 0xc);
  if ((int)local_68 == DAT_14cab5ff4) {
    iVar7 = (int)param_5[1];
    uVar13 = (ulonglong)iVar7;
    *(uint *)(param_5 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
      FUN_1476b52d0(param_5,iVar7);
    }
    lVar11 = *param_5;
    *(undefined8 *)(lVar11 + uVar13 * 0x18) = 0x3ff0000000000000;
    *(undefined8 *)(lVar11 + 8 + uVar13 * 0x18) = 0x3ff0000000000000;
    *(undefined4 *)(lVar11 + 0x10 + uVar13 * 0x18) = 0xffffffff;
    *(undefined2 *)(lVar11 + 0x14 + uVar13 * 0x18) = 0;
    *(undefined1 *)(lVar11 + 0x16 + uVar13 * 0x18) = 0;
    local_6c[0] = (short)param_1[0x34];
LAB_1476a40b1:
    FUN_1476a416c(param_4,local_58,local_6c[0]);
    *local_50 = (short)uVar13;
  }
  else {
    lVar11 = param_1[1];
    if (lVar11 == 0) {
      uVar6 = *(undefined8 *)
               (*(longlong *)(*param_1 + 8) + 0x100 + (ulonglong)*(ushort *)(param_1 + 0x34) * 0x128
               );
      plVar9 = *(longlong **)
                (*(longlong *)(*param_1 + 8) + 0x108 +
                (ulonglong)*(ushort *)(param_1 + 0x34) * 0x128);
      if (plVar9 == (longlong *)0x0) {
        lVar11 = FUN_147552f3e(uVar6);
        param_1[1] = lVar11;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        lVar11 = FUN_147552f3e(uVar6);
        param_1[1] = lVar11;
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
        lVar11 = param_1[1];
      }
      if (lVar11 == 0) {
        uVar13 = CONCAT62((int6)((ulonglong)plVar9 >> 0x10),0xffff);
        goto LAB_1476a3e5c;
      }
    }
    puVar10 = (undefined4 *)FUN_1400a5d6e(lVar11,&local_68);
    lVar11 = FUN_1400d12c6(param_1[1],&local_68);
    uVar14 = (undefined6)((ulonglong)&local_68 >> 0x10);
    uVar13 = CONCAT62(uVar14,0xffff);
    if (lVar11 == 0 || puVar10 == (undefined4 *)0x0) goto LAB_1476a3e5c;
    do {
      iVar7 = FUN_1476a4108(param_1,*puVar10);
      if (iVar7 != -1) {
        local_78 = param_5;
        uVar8 = FUN_1476a3e14(param_1,iVar7,param_3,param_4);
        uVar13 = (ulonglong)uVar8;
        goto LAB_1476a3f25;
      }
      puVar10 = (undefined4 *)FUN_1400a5d6e(param_1[1],puVar10);
    } while (puVar10 != (undefined4 *)0x0);
    uVar13 = CONCAT62(uVar14,0xffff);
LAB_1476a3f25:
    FUN_1406ae69a(param_3,local_6c,local_68 & 0xffffffff);
    if (local_6c[0] == -1) goto LAB_1476a3e5c;
    if ((local_60 & 1) != 0) goto LAB_1476a40b1;
    uVar4 = *(undefined2 *)(lVar11 + 0xac);
    uVar8 = *(uint *)(param_5 + 1);
    lVar11 = (longlong)(int)uVar8;
    *(uint *)(param_5 + 1) = uVar8 + 1;
    if (*(uint *)((longlong)param_5 + 0xc) < uVar8 + 1) {
      FUN_1476b52d0(param_5,uVar8);
    }
    lVar5 = *param_5;
    *(undefined8 *)(lVar5 + lVar11 * 0x18) = 0x3ff0000000000000;
    *(undefined8 *)(lVar5 + 8 + lVar11 * 0x18) = 0x3ff0000000000000;
    *(short *)(lVar5 + 0x10 + lVar11 * 0x18) = (short)uVar13;
    *(undefined2 *)(lVar5 + 0x12 + lVar11 * 0x18) = 0xffff;
    *(undefined2 *)(lVar5 + 0x14 + lVar11 * 0x18) = uVar4;
    *(undefined1 *)(lVar5 + 0x16 + lVar11 * 0x18) = 0;
    FUN_1476a416c(param_4,local_58,local_6c[0]);
    *local_50 = (short)uVar8;
    uVar13 = (ulonglong)uVar8;
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[0x32] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[0x32];
  }
  *(short *)((longlong)plVar9 + lVar12 * 0xc + 4) = (short)uVar13;
LAB_1476a3e5c:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a4108 FUN_1476a4108 body=100 status=ok
// SIG undefined FUN_1476a4108(void)

ulonglong FUN_1476a4108(longlong param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  lVar5 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar5 = *(longlong *)(param_1 + 400);
  }
  if (0 < (int)uVar1) {
    uVar3 = 0;
    uVar4 = (ulonglong)uVar1;
    uVar6 = uVar1;
    do {
      uVar4 = uVar4 >> 1;
      uVar7 = (uint)uVar4 + (int)uVar3;
      if (*(uint *)(lVar5 + (ulonglong)uVar7 * 0xc) < param_2) {
        uVar3 = (ulonglong)(uVar7 + (uVar6 & 1));
      }
      bVar2 = 1 < uVar6;
      uVar6 = (uint)uVar4;
    } while (bVar2);
    if (((int)uVar3 < (int)uVar1) && (*(uint *)(lVar5 + uVar3 * 0xc) == param_2)) {
      return uVar3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1476a416c FUN_1476a416c body=308 status=ok
// SIG undefined FUN_1476a416c(void)

uint * FUN_1476a416c(longlong *param_1,uint *param_2,uint param_3)

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
      FUN_1476a42a0(param_1);
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



// FUNCTION 1476a42a0 FUN_1476a42a0 body=132 status=ok
// SIG undefined FUN_1476a42a0(void)

void FUN_1476a42a0(longlong param_1,int param_2)

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



// FUNCTION 1476a4326 FUN_1476a4326 body=57 status=ok
// SIG undefined FUN_1476a4326(void)

undefined8 * FUN_1476a4326(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4e0390;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a4360 FUN_1476a4360 body=56 status=ok
// SIG undefined FUN_1476a4360(void)

void FUN_1476a4360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xee));
  FUN_140dba9e6(param_3,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0x11a));
  return;
}



// FUNCTION 1476a4398 FUN_1476a4398 body=656 status=ok
// SIG undefined FUN_1476a4398(void)

void FUN_1476a4398(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ushort *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar15 = *(longlong **)(lVar5 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0x50))
      goto LAB_1476a43dc;
      plVar15 = plVar15 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476a43dc:
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar20 = *(longlong **)(lVar5 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar20 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0xf0))
      goto LAB_1476a4429;
      plVar20 = plVar20 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar20 = (longlong *)0x0;
LAB_1476a4429:
  lVar12 = *plVar15;
  iVar3 = *(int *)(lVar5 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
  }
  LOCK();
  *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar21 = *(longlong **)(lVar5 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar21 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0xee))
      goto LAB_1476a447f;
      plVar21 = plVar21 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar21 = (longlong *)0x0;
LAB_1476a447f:
  lVar13 = *plVar20;
  iVar4 = *(int *)(lVar5 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar21 + 1));
  }
  LOCK();
  *(int *)(plVar21 + 3) = (int)plVar21[3] + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar5 = *plVar21;
    iVar19 = 0;
    do {
      lVar14 = (longlong)iVar19 + (longlong)(int)param_2[1];
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar9 = *(uint *)(lVar6 + 0xd88);
      lVar10 = *(longlong *)(lVar6 + 0xd80);
      if (*(longlong *)(lVar6 + 0xd80) == 0) {
        lVar10 = lVar6;
      }
      uVar17 = 0;
      if (0 < (int)uVar9) {
        uVar17 = 0;
        uVar16 = uVar9;
        do {
          uVar1 = (uVar16 >> 1) + uVar17;
          if (*(ushort *)(lVar10 + (ulonglong)uVar1 * 0x1b0) < *(ushort *)(lVar12 + lVar14 * 4)) {
            uVar17 = uVar1 + (uVar16 & 1);
          }
          bVar7 = 1 < uVar16;
          uVar16 = uVar16 >> 1;
        } while (bVar7);
      }
      if ((int)uVar17 < (int)uVar9) {
        puVar11 = (ushort *)(lVar10 + (ulonglong)uVar17 * 0x1b0);
        puVar18 = (ushort *)0x0;
        if (*puVar11 <= *(ushort *)(lVar12 + lVar14 * 4)) {
          puVar18 = puVar11 + 4;
        }
      }
      else {
        puVar18 = (ushort *)0x0;
      }
      uVar9 = FUN_1476a4108(puVar18,*(undefined4 *)(lVar13 + lVar14 * 4));
      if (uVar9 == 0xffffffff) {
        uVar8 = 0xffff;
      }
      else {
        puVar11 = puVar18 + 8;
        if (*(ushort **)(puVar18 + 200) != (ushort *)0x0) {
          puVar11 = *(ushort **)(puVar18 + 200);
        }
        uVar8 = puVar11[(ulonglong)uVar9 * 6 + 2];
      }
      *(ushort *)(lVar5 + lVar14 * 2) = uVar8;
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)((longlong)param_2 + 0xc));
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 3) = (int)plVar21[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar21 + 1));
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 3) = (int)plVar20[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar20 + 1));
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476a460f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar15 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476a4628 FUN_1476a4628 body=822 status=ok
// SIG undefined FUN_1476a4628(void)

void FUN_1476a4628(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  int local_84;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0x50))
      goto LAB_1476a4661;
      plVar12 = plVar12 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1476a4661:
  local_70 = *(longlong *)(param_2 + 0x18);
  local_84 = *(int *)(param_2 + 0x14);
  local_90 = param_3;
  if (local_84 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0xf0))
      goto LAB_1476a4699;
      plVar16 = plVar16 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476a4699:
  lVar8 = *plVar12;
  local_88 = *(int *)(param_2 + 0x14);
  if (local_88 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  local_78 = *plVar16;
  FUN_1476a4962(param_2,&local_68,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xee));
  lVar5 = local_50;
  if (*(short *)(param_2 + 0xe) != 0) {
    local_80 = (longlong *)(param_1 + 0x18);
    uVar15 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x28);
      uVar6 = *(uint *)(lVar9 + 0xd88);
      lVar11 = *(longlong *)(lVar9 + 0xd80);
      if (*(longlong *)(lVar9 + 0xd80) == 0) {
        lVar11 = lVar9;
      }
      uVar14 = 0;
      if (0 < (int)uVar6) {
        uVar14 = 0;
        uVar13 = uVar6;
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(ushort *)(lVar11 + (ulonglong)uVar1 * 0x1b0) < *(ushort *)(lVar8 + uVar15 * 4)) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar4);
      }
      if (((int)uVar14 < (int)uVar6) &&
         (*(ushort *)(lVar11 + (ulonglong)uVar14 * 0x1b0) <= *(ushort *)(lVar8 + uVar15 * 4))) {
        lVar11 = lVar11 + (ulonglong)uVar14 * 0x1b0;
        if ((lVar11 + 8 == 0) ||
           (uVar6 = FUN_1476a4108(lVar11 + 8,*(undefined4 *)(local_78 + uVar15 * 4)),
           uVar6 == 0xffffffff)) goto LAB_1476a4778;
        lVar9 = lVar11 + 0x18;
        if (*(longlong *)(lVar11 + 0x198) != 0) {
          lVar9 = *(longlong *)(lVar11 + 0x198);
        }
        sVar3 = *(short *)(lVar9 + 4 + (ulonglong)uVar6 * 0xc);
        if (sVar3 == -1) goto LAB_1476a4778;
        if (lVar5 == 0) {
          iVar10 = ((int)uVar15 - *(int *)(local_90 + 0x18)) + 1;
          if (0 < iVar10) {
            uVar7 = FUN_144a54ea4(local_90,iVar10);
            FUN_1447c6044(local_90,uVar7,iVar10,0);
          }
          lVar9 = *(longlong *)(local_90 + 0x10);
          if (*(longlong *)(local_90 + 0x10) == 0) {
            lVar9 = local_90;
          }
          puVar2 = (uint *)(lVar9 + (uVar15 >> 5 & 0x7ffffff) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar15 & 0x1f);
        }
        else {
          *(short *)(local_50 + uVar15 * 2) = sVar3;
        }
      }
      else {
LAB_1476a4778:
        if (lVar5 != 0) {
          iVar10 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar10 + 1U) {
            FUN_1405e07ae(local_80,iVar10);
          }
          *(undefined2 *)(*local_80 + (longlong)iVar10 * 2) = *(undefined2 *)(local_70 + uVar15 * 2)
          ;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(ushort *)(param_2 + 0xe));
  }
  if (local_68 != 0) {
    uVar15 = *(ulonglong *)(local_68 + 0x10);
    if (*(ulonglong *)(local_68 + 0x10) < local_60) {
      uVar15 = local_60;
    }
    *(ulonglong *)(local_68 + 0x10) = uVar15;
    LOCK();
    *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_68 + 8));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_84 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a4962 FUN_1476a4962 body=88 status=ok
// SIG undefined FUN_1476a4962(void)

undefined8 * FUN_1476a4962(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1476a49ba(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
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



// FUNCTION 1476a49ba FUN_1476a49ba body=192 status=ok
// SIG undefined FUN_1476a49ba(void)

undefined8 * FUN_1476a49ba(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  local_30 = 0;
  local_38 = param_2;
  local_28 = param_3;
  if (param_3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
  UNLOCK();
  FUN_1475493a6(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    uVar1 = local_38[2];
    if ((ulonglong)local_38[2] < local_30) {
      uVar1 = local_30;
    }
    local_38[2] = uVar1;
    LOCK();
    *(int *)(local_38 + 3) = *(int *)(local_38 + 3) + -1;
    UNLOCK();
    if (local_28 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38 + 1));
    }
  }
  param_1[3] = *param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a4a7c FUN_1476a4a7c body=57 status=ok
// SIG undefined FUN_1476a4a7c(void)

undefined8 * FUN_1476a4a7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4e0390;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a4ab6 FUN_1476a4ab6 body=789 status=ok
// SIG undefined FUN_1476a4ab6(void)

void FUN_1476a4ab6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  int local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  undefined1 local_70 [16];
  short local_60 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar5 = *(longlong **)(lVar7 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0xee))
      goto LAB_1476a4af3;
      plVar5 = plVar5 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_1476a4af3:
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar9 = *(longlong **)(lVar7 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0x4e))
      goto LAB_1476a4b1c;
      plVar9 = plVar9 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476a4b1c:
  local_c0 = *plVar5;
  iVar6 = *(int *)(lVar7 + 0x14);
  if (iVar6 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar7 = *plVar9;
  FUN_1476a5246(*param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xf2));
  if (local_80 == 0) {
    if (0 < *(int *)((longlong)param_2 + 0xc)) {
      lVar10 = 0;
      do {
        lVar4 = (int)param_2[1] + lVar10;
        *(undefined2 *)(local_c0 + lVar4 * 2) =
             *(undefined2 *)
              (**(longlong **)(param_1 + 0x28) + (ulonglong)*(ushort *)(lVar7 + lVar4 * 4) * 8);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < *(int *)((longlong)param_2 + 0xc));
    }
  }
  else {
    local_b8 = iVar6;
    local_b4 = iVar3;
    FUN_1410fbae8(*param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0x5e));
    if (0 < *(int *)((longlong)param_2 + 0xc)) {
      lVar10 = 0;
      lVar7 = 0;
      local_b0 = param_1;
      do {
        lVar4 = local_b0;
        local_78 = 0;
        if (local_98 != 0) {
          local_78 = (int)*(short *)(local_98 + lVar7 * 2);
        }
        lVar2 = param_2[1];
        FUN_1475451a6(local_70,local_80 + lVar10);
        local_60[0] = (short)local_78;
        FUN_1475452b4(local_58,local_70);
        FUN_1432d4318(local_70);
        plVar1 = *(longlong **)(lVar4 + 0x30);
        uVar8 = (uint)local_60[0];
        iVar3 = FUN_1476a53cf(local_58);
        iVar3 = FUN_1476a5300(plVar1,(uVar8 >> 2) + uVar8 * 0x40 + iVar3 + 0x9e3779b9 ^ uVar8,
                              local_60);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x28 + *plVar1;
        }
        *(undefined2 *)(local_c0 + (longlong)((int)lVar2 + (int)lVar7) * 2) =
             *(undefined2 *)(lVar4 + 0x18);
        FUN_1432d4318(local_58);
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar7 < *(int *)((longlong)param_2 + 0xc));
    }
    iVar3 = local_b4;
    iVar6 = local_b8;
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
      UNLOCK();
      if (local_a0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
        iVar3 = local_b4;
        iVar6 = local_b8;
      }
    }
  }
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar6 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a4dcc FUN_1476a4dcc body=1145 status=ok
// SIG undefined FUN_1476a4dcc(void)

void FUN_1476a4dcc(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  int local_dc;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  undefined1 local_70 [16];
  short local_60 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 8) + 0x4e))
      goto LAB_1476a4e06;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476a4e06:
  lVar8 = *(longlong *)(param_2 + 0x18);
  local_dc = *(int *)(param_2 + 0x14);
  local_d0 = param_3;
  if (local_dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar15 = *plVar11;
  FUN_1476a4962(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xee));
  FUN_1476a5246(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0xf2));
  local_f0 = local_80;
  if (local_a0 == 0) {
    if (*(short *)(param_2 + 0xe) != 0) {
      uVar10 = 0;
      lVar12 = local_80;
      local_e8 = lVar8;
      do {
        lVar1 = local_d0;
        plVar4 = *(longlong **)(param_1 + 0x28);
        uVar3 = *(ushort *)(lVar15 + uVar10 * 4);
        if ((int)(uint)uVar3 < (int)plVar4[5]) {
          plVar9 = plVar4 + 2;
          if ((longlong *)plVar4[4] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar4[4];
          }
          if ((*(uint *)((longlong)plVar9 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0
             ) goto LAB_1476a51a1;
          if (lVar12 == 0) {
            uVar14 = uVar10 + (uint)-*(int *)(local_d0 + 0x18) + 1;
            if (0 < (int)uVar14) {
              uVar6 = FUN_144a54ea4(local_d0,uVar14 & 0xffffffff);
              FUN_1447c6044(lVar1,uVar6,uVar14 & 0xffffffff,0);
              lVar12 = local_f0;
            }
            lVar8 = *(longlong *)(lVar1 + 0x10);
            if (*(longlong *)(lVar1 + 0x10) == 0) {
              lVar8 = lVar1;
            }
            puVar2 = (uint *)(lVar8 + (uVar10 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
            lVar8 = local_e8;
          }
          else {
            *(undefined2 *)(local_80 + uVar10 * 2) =
                 *(undefined2 *)(*plVar4 + (ulonglong)(uint)uVar3 * 8);
          }
        }
        else {
LAB_1476a51a1:
          if (lVar12 != 0) {
            iVar5 = *(int *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
              FUN_1405e07ae((longlong *)(param_1 + 0x18),iVar5);
              lVar12 = local_f0;
            }
            *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 2) =
                 *(undefined2 *)(lVar8 + uVar10 * 2);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(param_2 + 0xe));
    }
  }
  else {
    FUN_1410fbae8(param_2,&local_c8,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0x5e));
    if (*(short *)(param_2 + 0xe) != 0) {
      local_d8 = (longlong *)(param_1 + 0x18);
      lVar15 = 0;
      uVar10 = 0;
      local_e8 = lVar8;
      do {
        local_78 = 0;
        if (local_b8 != 0) {
          local_78 = (int)*(short *)(local_b8 + uVar10 * 2);
        }
        FUN_1475451a6(local_70,local_a0 + lVar15);
        local_60[0] = (short)local_78;
        FUN_1475452b4(local_58,local_70);
        FUN_1432d4318(local_70);
        plVar4 = *(longlong **)(param_1 + 0x30);
        uVar13 = (uint)local_60[0];
        iVar5 = FUN_1476a53cf(local_58);
        iVar5 = FUN_1476a5300(plVar4,(uVar13 >> 2) + uVar13 * 0x40 + iVar5 + 0x9e3779b9 ^ uVar13,
                              local_60);
        lVar12 = local_d0;
        lVar8 = local_e8;
        if ((iVar5 == -1) ||
           (lVar1 = *plVar4 + (longlong)iVar5 * 0x28, puVar7 = (undefined2 *)(lVar1 + 0x18),
           puVar7 == (undefined2 *)0x0 || lVar1 == 0)) {
          if (local_f0 != 0) {
            iVar5 = *(int *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
              FUN_1405e07ae(local_d8,iVar5);
            }
            *(undefined2 *)(*local_d8 + (longlong)iVar5 * 2) = *(undefined2 *)(lVar8 + uVar10 * 2);
          }
        }
        else if (local_f0 == 0) {
          uVar14 = (uint)-*(int *)(local_d0 + 0x18) + uVar10 + 1;
          if (0 < (int)uVar14) {
            uVar6 = FUN_144a54ea4(local_d0,uVar14 & 0xffffffff);
            FUN_1447c6044(lVar12,uVar6,uVar14 & 0xffffffff,0);
          }
          lVar8 = *(longlong *)(lVar12 + 0x10);
          if (*(longlong *)(lVar12 + 0x10) == 0) {
            lVar8 = lVar12;
          }
          puVar2 = (uint *)(lVar8 + (uVar10 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar10 & 0x1f);
        }
        else {
          *(undefined2 *)(local_80 + uVar10 * 2) = *puVar7;
        }
        FUN_1432d4318(local_58);
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 0x10;
      } while (uVar10 < *(ushort *)(param_2 + 0xe));
    }
    if (local_c8 != 0) {
      LOCK();
      *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + -1;
      UNLOCK();
      if (local_c0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_c8 + 8));
      }
    }
  }
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
    }
  }
  if (local_98 != 0) {
    uVar10 = *(ulonglong *)(local_98 + 0x10);
    if (*(ulonglong *)(local_98 + 0x10) < local_90) {
      uVar10 = local_90;
    }
    *(ulonglong *)(local_98 + 0x10) = uVar10;
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_dc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476a5246 FUN_1476a5246 body=85 status=ok
// SIG undefined FUN_1476a5246(void)

undefined8 * FUN_1476a5246(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1476a529c(param_2,lVar2,*(undefined4 *)(param_1 + 0x14));
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



// FUNCTION 1476a529c FUN_1476a529c body=100 status=ok
// SIG undefined FUN_1476a529c(void)

longlong * FUN_1476a529c(longlong *param_1,longlong *param_2,int param_3)

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



// FUNCTION 1476a5300 FUN_1476a5300 body=135 status=ok
// SIG undefined FUN_1476a5300(void)

int FUN_1476a5300(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1;
        if (*(short *)(lVar4 + lVar5 * 0x28) == *param_3) {
          cVar2 = FUN_1476a5387(lVar4 + lVar5 * 0x28 + 8,param_3 + 4);
          if (cVar2 != '\0') {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476a5387 FUN_1476a5387 body=72 status=ok
// SIG undefined FUN_1476a5387(void)

undefined8 FUN_1476a5387(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  void *_Buf2;
  void *_Buf1;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 == *(ushort *)(param_2 + 0xe)) {
    _Buf2 = (void *)FUN_14754520a(param_2);
    _Buf1 = (void *)FUN_14754520a(param_1);
    iVar2 = memcmp(_Buf1,_Buf2,(ulonglong)((uint)uVar1 * 2));
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1476a53cf FUN_1476a53cf body=139 status=ok
// SIG undefined FUN_1476a53cf(void)

uint FUN_1476a53cf(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined4 *)FUN_14754520a();
  if (*(ushort *)(param_1 + 0xe) == 7) {
    uVar1 = FUN_144a78877(*puVar4,puVar4[1]);
    uVar2 = FUN_144a78877(puVar4[2],puVar4[3]);
    uVar2 = uVar2 ^ uVar1;
  }
  else {
    uVar2 = 0;
    if (3 < *(ushort *)(param_1 + 0xe)) {
      uVar5 = 0;
      uVar2 = 0;
      do {
        uVar1 = FUN_144a78877(puVar4[uVar5],puVar4[uVar5 + 1]);
        uVar3 = FUN_144a78877(puVar4[uVar5 + 2],puVar4[uVar5 + 3]);
        uVar2 = uVar1 ^ uVar2 ^ uVar3;
        uVar5 = uVar5 + 4;
      } while (uVar5 < *(ushort *)(param_1 + 0xe) >> 2);
    }
  }
  return uVar2;
}



// FUNCTION 1476a545a FUN_1476a545a body=62 status=ok
// SIG undefined FUN_1476a545a(void)

void FUN_1476a545a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd80);
  if (*(longlong *)(param_1 + 0xd80) == 0) {
    lVar1 = param_1;
  }
  FUN_1476a5498(lVar1,*(undefined4 *)(param_1 + 0xd88));
  if (*(longlong *)(param_1 + 0xd80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476a5498 FUN_1476a5498 body=53 status=ok
// SIG undefined FUN_1476a5498(void)

void FUN_1476a5498(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x198);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x36;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476a54ce FUN_1476a54ce body=48 status=ok
// SIG undefined FUN_1476a54ce(void)

void FUN_1476a54ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1476a550a FUN_1476a550a body=1 status=ok
// SIG undefined FUN_1476a550a(void)

void FUN_1476a550a(void)

{
  return;
}



// FUNCTION 1476a550c FUN_1476a550c body=29 status=ok
// SIG undefined FUN_1476a550c(void)

undefined8 FUN_1476a550c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a552a FUN_1476a552a body=29 status=ok
// SIG undefined FUN_1476a552a(void)

undefined8 FUN_1476a552a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476a5548 FUN_1476a5548 body=589 status=ok
// SIG undefined FUN_1476a5548(void)

int * FUN_1476a5548(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
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
     (cVar7 = FUN_1476961c4(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1476a5586;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4e03f0;
  plVar8[2] = (longlong)&PTR_FUN_14a4e0408;
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
  FUN_147696234(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476a5826;
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
      if (local_d4 != -1) goto LAB_1476a5722;
    }
  }
  else {
LAB_1476a5722:
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
LAB_1476a5586:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476a5796 FUN_1476a5796 body=80 status=ok
// SIG undefined FUN_1476a5796(void)

void FUN_1476a5796(undefined4 *param_1,undefined8 *param_2,longlong param_3)

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
  FUN_1476a583e(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476a57e8 FUN_1476a57e8 body=1 status=ok
// SIG undefined FUN_1476a57e8(void)

void FUN_1476a57e8(void)

{
  return;
}



// FUNCTION 1476a57ea FUN_1476a57ea body=29 status=ok
// SIG undefined FUN_1476a57ea(void)

undefined8 FUN_1476a57ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


