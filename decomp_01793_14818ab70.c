// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14818ab70 FUN_14818ab70 body=447 status=ok
// SIG undefined FUN_14818ab70(void)

void FUN_14818ab70(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x48);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x44 + lVar6 * 0x48) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar6 * 0x48) =
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



// FUNCTION 14818ad30 FUN_14818ad30 body=77 status=ok
// SIG undefined FUN_14818ad30(void)

void FUN_14818ad30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adced70;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14818ad7e(param_1 + 5);
  FUN_14818ad7e(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14818ad7e FUN_14818ad7e body=92 status=ok
// SIG undefined FUN_14818ad7e(void)

void FUN_14818ad7e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_1481746ea();
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



// FUNCTION 14818adea FUN_14818adea body=760 status=ok
// SIG undefined FUN_14818adea(void)

void FUN_14818adea(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3d058) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addcf30;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14818b0e4;
  }
  else if (lVar1 == DAT_14cb3d050) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addcf30;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_143a5bb80;
  }
  else if (lVar1 == DAT_14cb3d060) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addcf30;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14818b1d8;
  }
  else {
    if (lVar1 != DAT_14cb3d068) goto LAB_14818aebb;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addcf30;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_143a5bfbc;
  }
  puVar4[4] = pcVar2;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14818aebb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818b0e4 FUN_14818b0e4 body=242 status=ok
// SIG undefined FUN_14818b0e4(void)

void FUN_14818b0e4(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14818b976(local_20);
  FUN_144a76cd4(&local_30,param_2);
  FUN_144a76cd4(&local_40,param_2);
  FUN_144a76cd4(&local_50,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *local_18;
      puVar2 = local_40 + local_38;
      *local_40 = local_18[1];
      puVar3 = local_50 + local_48;
      *local_50 = local_18[2];
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818b1d8 FUN_14818b1d8 body=152 status=ok
// SIG undefined FUN_14818b1d8(void)

void FUN_14818b1d8(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14818b976(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = 1;
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818b272 FUN_14818b272 body=114 status=ok
// SIG undefined FUN_14818b272(void)

undefined4 FUN_14818b272(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1481192e4();
  uVar3 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if ((((*(longlong *)(param_1 + 0x50) == *(longlong *)(param_2 + 0x50)) &&
         (((*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58) &&
           (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40))) &&
          (*(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x44))))) &&
        (((*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x48) &&
          (*(char *)(param_2 + 0x4c) == *(char *)(param_1 + 0x4c))) &&
         (*(char *)(param_2 + 0x4d) == *(char *)(param_1 + 0x4d))))) &&
       (bVar2 = *(byte *)(param_1 + 0x4e) ^ *(byte *)(param_2 + 0x4e), (bVar2 & 1) == 0)) {
      uVar3 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x48) >> 8),(bVar2 & 2) == 0);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14818b2e4 FUN_14818b2e4 body=130 status=ok
// SIG undefined FUN_14818b2e4(void)

undefined8 FUN_14818b2e4(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined1 *)(param_2 + 0x4d) = *(undefined1 *)(param_1 + 0x4d);
    bVar3 = *(byte *)(param_1 + 0x4e) & 1;
    bVar1 = *(byte *)(param_2 + 0x4e);
    *(byte *)(param_2 + 0x4e) = bVar1 & 0xfe | bVar3;
    *(byte *)(param_2 + 0x4e) = bVar1 & 0xfc | bVar3 | *(byte *)(param_1 + 0x4e) & 2;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    FUN_1447a122a(param_2 + 0x60,param_1 + 0x60);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14818b388 FUN_14818b388 body=994 status=ok
// SIG undefined FUN_14818b388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14818b388(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  int local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined2 uStack_5d;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 local_56;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar6 = *(longlong *)(param_2[2] + 0x10);
    lVar7 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x50);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar7 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x50) == lVar6)
        goto LAB_14818b406;
        iVar10 = *(int *)(lVar7 + 0x48);
      } while (iVar10 != -1);
    }
  }
  lVar7 = 0;
LAB_14818b406:
  puVar12 = (undefined8 *)(lVar7 + 8);
  if (lVar7 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  lVar2 = *param_2;
  if ((puVar12[5] == 0) && (puVar12[4] != 0)) {
    local_50 = FUN_14473c272(lVar2,puVar12 + 4,0);
    puVar12[5] = local_50;
    local_60 = 0;
    uStack_5f = 0;
    local_56 = 0;
    uStack_59 = 0;
    uStack_58 = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    uStack_5e = *(undefined1 *)(local_50 + 0x90);
    if ((*(char *)(local_50 + 0x92) == '\x04') || (*(char *)(local_50 + 0x92) == '\x01')) {
      uStack_5a = (undefined1)*(undefined2 *)(local_50 + 0x8e);
      uStack_59 = (undefined1)((ushort)*(undefined2 *)(local_50 + 0x8e) >> 8);
    }
    uVar5 = FUN_144aaac76(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    puVar12[6] = uVar5;
    local_50 = puVar12[5];
    local_60 = *(undefined1 *)(local_50 + 0x94);
    uStack_58 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_a8 = &local_70;
    local_70 = 0;
    uVar5 = FUN_144a96e92(lVar2 + 0x198,lVar2 + 0x70,local_50 + 8,&local_60);
    puVar12[7] = uVar5;
    FUN_14022b18a(lVar2,puVar12[5]);
    lVar6 = puVar12[5];
    if (lVar6 != 0) {
      lVar7 = param_2[1];
      iVar10 = *(int *)(lVar7 + 0x260);
      *(uint *)(lVar7 + 0x260) = iVar10 + 1U;
      if (*(uint *)(lVar7 + 0x264) < iVar10 + 1U) {
        FUN_144904f42((longlong *)(lVar7 + 600),iVar10);
      }
      lVar7 = *(longlong *)(lVar7 + 600);
      lVar14 = (longlong)iVar10 * 0x10;
      *(longlong *)(lVar7 + lVar14) = lVar6;
      *(undefined4 *)(lVar7 + 8 + lVar14) = 0x70;
      *(undefined1 *)(lVar7 + 0xc + lVar14) = 1;
    }
  }
  uVar8 = (int)param_2[10] + 0xfU & 0xfffffff0;
  uVar9 = (ulonglong)uVar8;
  local_88 = lVar2;
  FUN_1481961aa();
  *(uint *)(param_2 + 10) = uVar8 + _DAT_14cb3d504;
  lVar2 = param_2[7];
  puVar1 = (undefined8 *)(lVar2 + uVar9);
  puVar13 = puVar1 + 2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar12 + 1);
  *puVar1 = *puVar12;
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar12 + 0xc);
  cVar3 = FUN_144b34a28(param_2,puVar13);
  cVar4 = FUN_144b34a28(param_2,lVar2 + uVar9 + 0x18);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') goto LAB_14818b59c;
    if (puVar12[4] == 0) goto LAB_14818b4b1;
    *(undefined1 *)((longlong)puVar12 + 0x11) = 1;
    uVar5 = puVar12[6];
  }
  else {
    if (puVar12[4] == 0) {
      uVar5 = FUN_1481c8846(param_2[1],local_88,0x13,2);
      *puVar13 = uVar5;
    }
    else {
      *puVar13 = puVar12[7];
      *(undefined1 *)(puVar12 + 2) = 1;
    }
    if (cVar4 == '\0') goto LAB_14818b59c;
LAB_14818b4b1:
    uVar5 = DAT_14cb0d2b0;
    FUN_148119330(param_2,&local_80);
    puVar15 = &DAT_149dfb77a;
    puVar11 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar11 = local_80;
    }
    FUN_140002266(&local_70,
                  L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                  ,puVar11);
    if (local_68 != 0) {
      puVar15 = (undefined2 *)CONCAT71(uStack_6f,local_70);
    }
    FUN_140056680(&local_60,puVar15);
    local_98 = &DAT_14c846320;
    local_a0 = 1;
    local_a8 = &local_60;
    FUN_147d80866(uVar5,param_1,0x3f800000,0xffffffff);
    if (CONCAT17(uStack_59,
                 CONCAT16(uStack_5a,
                          CONCAT15(uStack_5b,
                                   CONCAT23(uStack_5d,
                                            CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)))))) !=
        0) {
      FUN_1400020a8();
    }
    lVar6 = local_88;
    if (CONCAT71(uStack_6f,local_70) != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = FUN_1481c8764(param_2[1],lVar6,2);
  }
  *(undefined8 *)(lVar2 + uVar9 + 0x18) = uVar5;
  lVar6 = puVar12[3];
  if (puVar12[3] == 0) {
    lVar6 = DAT_14c9c0d80;
  }
  *(longlong *)(lVar2 + uVar9 + 0x20) = lVar6;
LAB_14818b59c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818b76c FUN_14818b76c body=69 status=ok
// SIG undefined FUN_14818b76c(void)

void FUN_14818b76c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3d0e0;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3d0d8;
  return;
}



// FUNCTION 14818b7b2 FUN_14818b7b2 body=93 status=ok
// SIG undefined FUN_14818b7b2(void)

undefined8
FUN_14818b7b2(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3d0d8) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3d0e0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x18);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14818b810 FUN_14818b810 body=158 status=ok
// SIG undefined FUN_14818b810(void)

longlong * FUN_14818b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 != 0) {
    if (DAT_14c7628a0 == 1) {
      plVar1 = (longlong *)FUN_14818b8af(param_2);
      (**(code **)(*plVar1 + 0x308))(plVar1,1);
      goto LAB_14818b83e;
    }
    if (DAT_14c762898 != 0) {
      plVar1 = (longlong *)FUN_14817dc25(param_2);
      if (DAT_14c76289c == 0) {
        uVar2 = 0;
      }
      else {
        FUN_1401a700c(&local_1c,0x105);
        uVar2 = (ulonglong)local_1c;
      }
      plVar1[5] = uVar2;
      goto LAB_14818b83e;
    }
  }
  plVar1 = (longlong *)0x0;
LAB_14818b83e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818b8af FUN_14818b8af body=148 status=ok
// SIG undefined FUN_14818b8af(void)

undefined8 FUN_14818b8af(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b52fce();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818b944 FUN_14818b944 body=49 status=ok
// SIG undefined FUN_14818b944(void)

undefined8 FUN_14818b944(undefined8 param_1,longlong *param_2)

{
  if (DAT_14c7628a0 == 1) {
    (**(code **)(*param_2 + 0x318))(param_2);
    (**(code **)(*param_2 + 0xa8))(param_2);
  }
  return 1;
}



// FUNCTION 14818b976 FUN_14818b976 body=148 status=ok
// SIG undefined FUN_14818b976(void)

void FUN_14818b976(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14818ba0a FUN_14818ba0a body=138 status=ok
// SIG undefined FUN_14818ba0a(void)

undefined8 * FUN_14818ba0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  _Src = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 14818ba94 FUN_14818ba94 body=198 status=ok
// SIG undefined FUN_14818ba94(void)

void FUN_14818ba94(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = param_2[2];
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50) == lVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (*(char *)(lVar1 + 0x18) == '\x01') {
            (**(code **)(*(longlong *)param_2[1] + 0x128))
                      ((longlong *)param_2[1],*param_2,
                       *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 8),
                       CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar1 + 0x19)),1);
          }
          *(undefined2 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined8 *)(lVar1 + 0x38) = 0;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x48);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14818bc24 FUN_14818bc24 body=324 status=ok
// SIG undefined FUN_14818bc24(void)

void FUN_14818bc24(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  FUN_14818bd6a(local_38[3],local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818bd6a FUN_14818bd6a body=465 status=ok
// SIG undefined FUN_14818bd6a(void)

/* WARNING: Removing unreachable block (ram,0x00014818bf18) */

void FUN_14818bd6a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = FUN_145b6e94c();
  lVar9 = FUN_140584a5e(uVar8,param_1,param_2);
  if (lVar9 != 0) {
    plVar1 = (longlong *)(lVar9 + 0x58);
    FUN_14818fdde(plVar1,(int)param_3[1]);
    lVar6 = param_3[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = *param_3;
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar5 + lVar11);
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        if (lVar12 == 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
        }
        else {
          FUN_1400bbfae(&local_80,lVar12);
          uStack_a0 = CONCAT44(uStack_7c,local_80);
          local_98 = CONCAT44(uStack_74,uStack_78);
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          uStack_90 = CONCAT44(uStack_6c,local_70);
          local_88 = CONCAT44(uStack_64,uStack_68);
          cVar7 = (*(code *)PTR_FUN_14c758760)();
          if (cVar7 != '\0') {
            uVar3 = *(uint *)(lVar12 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
              local_a8 = 0;
              goto LAB_14818bec2;
            }
          }
          FUN_14485c47a(&local_a8,lVar12);
        }
LAB_14818bec2:
        iVar4 = *(int *)(lVar9 + 0x60);
        lVar12 = (longlong)iVar4;
        *(uint *)(lVar9 + 0x60) = iVar4 + 1U;
        if (*(uint *)(lVar9 + 100) < iVar4 + 1U) {
          FUN_14819da54(plVar1,iVar4);
        }
        lVar10 = *plVar1;
        *(undefined8 *)(lVar10 + lVar12 * 0x28) = local_a8;
        puVar2 = (undefined4 *)(lVar10 + 8 + lVar12 * 0x28);
        *puVar2 = (undefined4)uStack_a0;
        puVar2[1] = uStack_a0._4_4_;
        puVar2[2] = (undefined4)local_98;
        puVar2[3] = local_98._4_4_;
        *(longlong *)(lVar10 + 0x18 + lVar12 * 0x28) = uStack_90;
        uStack_90 = 0;
        *(undefined4 *)(lVar10 + 0x20 + lVar12 * 0x28) = (undefined4)local_88;
        *(undefined4 *)(lVar10 + 0x24 + lVar12 * 0x28) = local_88._4_4_;
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)lVar6 * 8 != lVar11);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818bf3f FUN_14818bf3f body=739 status=ok
// SIG undefined FUN_14818bf3f(void)

void FUN_14818bf3f(double *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  double dVar3;
  longlong lVar4;
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
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar8 = *param_1;
  dVar9 = param_1[1];
  dVar10 = param_1[2];
  dVar5 = dVar9 + dVar9;
  dVar15 = dVar10 + dVar10;
  dVar6 = dVar8 * (dVar8 + dVar8);
  dVar11 = param_1[8];
  dVar12 = param_1[9];
  dVar13 = param_1[10];
  dVar3 = param_1[3];
  dVar7 = dVar3 * (dVar8 + dVar8);
  local_e8 = (float)((1.0 - (dVar10 * dVar15 + dVar9 * dVar5)) * dVar11);
  local_b8 = (float)param_1[4];
  fStack_b4 = (float)param_1[5];
  fStack_b0 = (float)param_1[6];
  fStack_e4 = (float)((dVar5 * dVar8 + dVar3 * dVar15) * dVar11);
  fStack_e0 = (float)((*param_1 * dVar15 - dVar5 * dVar3) * dVar11);
  uStack_dc = 0;
  local_d8 = (float)((dVar5 * dVar8 - dVar3 * dVar15) * dVar12);
  fStack_d4 = (float)((1.0 - (dVar10 * dVar15 + dVar6)) * dVar12);
  fStack_d0 = (float)((dVar15 * dVar9 + dVar7) * dVar12);
  local_c8 = (float)((dVar5 * dVar3 + *param_1 * dVar15) * dVar13);
  uStack_cc = 0;
  fStack_c4 = (float)((dVar15 * dVar9 - dVar7) * dVar13);
  fStack_c0 = (float)((1.0 - (dVar6 + dVar9 * dVar5)) * dVar13);
  uStack_bc = 0;
  uStack_ac = 0x3f800000;
  FUN_144906bb6(&local_e8,&local_128);
  lVar4 = *param_3;
  lVar14 = (longlong)(param_2 * 3) * 0x10;
  pfVar1 = (float *)(lVar4 + lVar14);
  *pfVar1 = local_e8;
  pfVar1[1] = local_d8;
  pfVar1[2] = local_c8;
  pfVar1[3] = local_b8;
  pfVar1 = (float *)(lVar4 + 0x10 + lVar14);
  *pfVar1 = fStack_e4;
  pfVar1[1] = fStack_d4;
  pfVar1[2] = fStack_c4;
  pfVar1[3] = fStack_b4;
  pfVar1 = (float *)(lVar4 + 0x20 + lVar14);
  *pfVar1 = fStack_e0;
  pfVar1[1] = fStack_d0;
  pfVar1[2] = fStack_c0;
  pfVar1[3] = fStack_b0;
  lVar4 = *param_4;
  puVar2 = (undefined4 *)(lVar4 + lVar14);
  *puVar2 = local_128;
  puVar2[1] = local_118;
  puVar2[2] = local_108._0_4_;
  puVar2[3] = local_f8._0_4_;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar14);
  *puVar2 = uStack_124;
  puVar2[1] = uStack_114;
  puVar2[2] = local_108._4_4_;
  puVar2[3] = local_f8._4_4_;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar14);
  *puVar2 = uStack_120;
  puVar2[1] = uStack_110;
  puVar2[2] = local_108._8_4_;
  puVar2[3] = local_f8._8_4_;
  if ((local_a0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_148,local_128,local_108._8_8_,local_f8._0_8_);
}



// FUNCTION 14818c223 FUN_14818c223 body=686 status=ok
// SIG undefined FUN_14818c223(void)

void FUN_14818c223(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_3;
  if ((longlong)(int)param_1[1] != 0) {
    local_a8 = (longlong *)*param_2;
    plVar11 = (longlong *)*param_1;
    local_98 = plVar11 + (int)param_1[1];
    local_a0 = (longlong)(int)param_2[1];
    plVar2 = local_a8 + local_a0;
    do {
      lVar8 = *plVar11;
      if (lVar8 != 0) {
        lVar1 = lVar8 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar8 + 0x268) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = *(int *)(lVar8 + 0x268);
        }
        plVar9 = (longlong *)(lVar8 + 0x240);
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar4 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar5 = local_78._4_4_;
        local_90 = plVar9;
        if ((local_78._4_4_ != iVar10) || (local_78 = uVar4, uStack_60 != lVar1)) {
          do {
            local_78 = uVar4;
            plVar3 = *(longlong **)(*local_90 + (longlong)iVar5 * 0x10);
            if (plVar3 != (longlong *)0x0) {
              lVar8 = FUN_144a74fb4();
              if ((((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) &&
                 (lVar8 = (**(code **)(*plVar3 + 0xb98))(plVar3), lVar8 != 0)) {
                lVar6 = FUN_144a81888(plVar3);
                if (lVar6 == 0) {
                  plVar7 = (longlong *)
                           (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x20))(lVar8 + 0x28);
                }
                else {
                  plVar7 = (longlong *)FUN_144a81888(plVar3);
                }
                if ((plVar7 != (longlong *)0x0) &&
                   (lVar8 = (**(code **)(*plVar7 + 0x310))(plVar7), *(int *)(lVar8 + 0x28) != 0)) {
                  plVar7 = local_a8;
                  if ((int)local_a0 == 0) {
LAB_14818c3d9:
                    iVar5 = *(int *)(local_b0 + 200);
                    *(uint *)(local_b0 + 200) = iVar5 + 1U;
                    if (*(uint *)(local_b0 + 0xcc) < iVar5 + 1U) {
                      FUN_148197012(local_b0,iVar5);
                    }
                    lVar8 = *(longlong *)(local_b0 + 0xc0);
                    if (*(longlong *)(local_b0 + 0xc0) == 0) {
                      lVar8 = local_b0;
                    }
                    *(longlong **)(lVar8 + (longlong)iVar5 * 8) = plVar3;
                  }
                  else {
                    do {
                      if (*plVar7 == 0) {
LAB_14818c3d4:
                        if (plVar7 != (longlong *)0x0) goto LAB_14818c3d9;
                        break;
                      }
                      if ((longlong)(int)plVar3[0xf] != 0) {
                        lVar8 = 0;
                        do {
                          if (*(longlong *)(plVar3[0xe] + lVar8) == *plVar7) goto LAB_14818c3d4;
                          lVar8 = lVar8 + 8;
                        } while ((longlong)(int)plVar3[0xf] * 8 != lVar8);
                      }
                      plVar7 = plVar7 + 1;
                    } while (plVar7 != plVar2);
                  }
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar5 = local_78._4_4_;
            uVar4 = local_78;
          } while (local_90 != plVar9 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar10));
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818c4d2 FUN_14818c4d2 body=112 status=ok
// SIG undefined FUN_14818c4d2(void)

ulonglong FUN_14818c4d2(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  if (param_1 != 0) {
    uVar3 = FUN_144a81888();
    uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_144a78877(uVar1,uVar2 >> 0x10 ^ uVar2);
    return uVar3;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14818c542 FUN_14818c542 body=618 status=ok
// SIG undefined FUN_14818c542(void)

void FUN_14818c542(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_3;
  if ((longlong)(int)param_1[1] != 0) {
    local_a0 = (longlong *)*param_2;
    plVar10 = (longlong *)*param_1;
    plVar11 = plVar10 + (int)param_1[1];
    local_98 = (longlong)(int)param_2[1];
    plVar2 = local_a0 + local_98;
    local_a8 = plVar11;
    do {
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        lVar1 = lVar7 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar1;
        if (*(int *)(lVar7 + 0x268) == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar9 = *(int *)(lVar7 + 0x268);
        }
        plVar8 = (longlong *)(lVar7 + 0x240);
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar4 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar5 = local_78._4_4_;
        local_90 = plVar8;
        if ((local_78._4_4_ != iVar9) || (local_78 = uVar4, uStack_60 != lVar1)) {
          do {
            local_78 = uVar4;
            plVar3 = *(longlong **)(*local_90 + (longlong)iVar5 * 0x10);
            if (plVar3 != (longlong *)0x0) {
              lVar7 = FUN_144a7a726();
              if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                    lVar7 + 0x30)) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) &&
                 (lVar7 = (**(code **)(*plVar3 + 0x7a0))(plVar3), lVar7 != 0)) {
                plVar6 = local_a0;
                if ((int)local_98 == 0) {
LAB_14818c6b1:
                  iVar5 = *(int *)(local_b0 + 200);
                  *(uint *)(local_b0 + 200) = iVar5 + 1U;
                  if (*(uint *)(local_b0 + 0xcc) < iVar5 + 1U) {
                    FUN_14819711e(local_b0,iVar5);
                  }
                  lVar7 = *(longlong *)(local_b0 + 0xc0);
                  if (*(longlong *)(local_b0 + 0xc0) == 0) {
                    lVar7 = local_b0;
                  }
                  *(longlong **)(lVar7 + (longlong)iVar5 * 8) = plVar3;
                  plVar11 = local_a8;
                }
                else {
                  do {
                    if (*plVar6 == 0) {
LAB_14818c6ac:
                      if (plVar6 != (longlong *)0x0) goto LAB_14818c6b1;
                      break;
                    }
                    if ((longlong)(int)plVar3[0xf] != 0) {
                      lVar7 = 0;
                      do {
                        if (*(longlong *)(plVar3[0xe] + lVar7) == *plVar6) goto LAB_14818c6ac;
                        lVar7 = lVar7 + 8;
                      } while ((longlong)(int)plVar3[0xf] * 8 != lVar7);
                    }
                    plVar6 = plVar6 + 1;
                  } while (plVar6 != plVar2);
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar5 = local_78._4_4_;
            uVar4 = local_78;
          } while (local_90 != plVar8 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar9));
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818c7ad FUN_14818c7ad body=143 status=ok
// SIG undefined FUN_14818c7ad(void)

ulonglong FUN_14818c7ad(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  if (param_1 != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x660);
    if ((uVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar3);
    }
    uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_144a78877(uVar1,uVar2 >> 0x10 ^ uVar2);
    return uVar3;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14818c83c FUN_14818c83c body=167 status=ok
// SIG undefined FUN_14818c83c(void)

undefined8 * FUN_14818c83c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_144a81888(param_2);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x310))(plVar3);
    iVar1 = *(int *)(lVar4 + 0x28);
    if (0 < iVar1) {
      local_30 = *(undefined8 *)(param_3 + 0x28);
      iVar2 = FUN_144a750a0(lVar4);
      if (iVar2 != -1 && iVar2 < iVar1) {
        FUN_144ae2166(param_2,param_1,iVar2);
        goto LAB_14818c8c1;
      }
    }
  }
  puVar5 = (undefined8 *)(param_2 + 0x240);
  puVar6 = param_1;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_14818c8c1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818c8e4 FUN_14818c8e4 body=1894 status=ok
// SIG undefined FUN_14818c8e4(void)

ulonglong FUN_14818c8e4(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                       char param_5,longlong *param_6,undefined4 *param_7,int *param_8,int *param_9,
                       int *param_10)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_288 [32];
  int *local_268;
  int *local_260;
  undefined8 *local_258;
  longlong local_250;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined4 local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  int local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 uStack_160;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_dc;
  undefined8 local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar5 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  if (param_7 != (undefined4 *)0x0) {
    if ((uint)param_7[3] < (uint)param_7[0x2e]) {
      local_250 = param_1;
      if (param_5 == '\0') {
        uVar2 = *(undefined8 *)(param_7 + 0xc);
        uVar3 = *(undefined8 *)(param_7 + 0xe);
        *(undefined8 *)(param_7 + 0xc) = *(undefined8 *)(param_7 + 4);
        *(undefined8 *)(param_7 + 0xe) = *(undefined8 *)(param_7 + 6);
        *(undefined8 *)(param_7 + 4) = uVar2;
        *(undefined8 *)(param_7 + 6) = uVar3;
        local_d8 = *(undefined8 *)(param_7 + 0x10);
        dStack_d0 = *(double *)(param_7 + 0x12);
        *(undefined8 *)(param_7 + 0x10) = *(undefined8 *)(param_7 + 8);
        *(undefined8 *)(param_7 + 0x12) = *(undefined8 *)(param_7 + 10);
        *(undefined8 *)(param_7 + 8) = local_d8;
        *(double *)(param_7 + 10) = dStack_d0;
        local_198 = *param_7;
        local_1f4 = param_7[1];
        local_dc = param_7[2];
        *(undefined8 *)(param_7 + 0x28) = 0x7f7fffff7f7fffff;
        *(undefined8 *)(param_7 + 0x2a) = 0xff7fffff7f7fffff;
        *(undefined1 **)(param_7 + 0x2c) = &DAT_ff7fffffff7fffff;
        local_a0 = '\0';
        local_f8 = *param_2;
        uStack_f4 = param_2[1];
        uStack_f0 = param_2[2];
        uStack_ec = param_2[3];
        local_268 = &local_1f4;
        local_260 = &local_dc;
        local_258 = &local_d8;
        FUN_14818d04b(&local_f8,param_4,param_7,&local_198);
        local_108 = *param_3;
        uStack_104 = param_3[1];
        uStack_100 = param_3[2];
        uStack_fc = param_3[3];
        local_268 = &local_1f4;
        local_260 = &local_dc;
        local_258 = &local_d8;
        FUN_14818d43b(&local_108,param_4,param_7,&local_198);
        if (local_a0 == '\0') {
          uVar7 = 0;
          uVar8 = 0;
          local_c8 = 0.0;
          local_c0 = 0.0;
          local_b8 = 0.0;
          local_b0 = 0.0;
          dVar4 = 0.0;
        }
        else {
          uVar7 = (undefined4)local_d8;
          uVar8 = (undefined4)((ulonglong)local_d8 >> 0x20);
          dVar4 = dStack_d0;
        }
        dVar1 = (double)CONCAT44(uVar8,uVar7) + local_c0;
        local_128 = local_c8 - local_b0;
        local_130 = dVar4 - local_b8;
        local_138 = (double)CONCAT44(uVar8,uVar7) - local_c0;
        param_7[0x28] = (float)local_138;
        param_7[0x29] = (float)local_130;
        param_7[0x2a] = (float)local_128;
        param_7[0x2b] = (float)dVar1;
        param_7[0x2c] = (float)(dVar4 + local_b8);
        param_7[0x2d] = (float)(local_c8 + local_b0);
        local_110 = (double)*(float *)(local_250 + 0x14) * 65536.0;
        local_118 = (double)*(float *)(local_250 + 0x10) * 65536.0;
        local_120 = (double)*(float *)(local_250 + 0xc) * 65536.0;
        FUN_1481f8bca(&local_120,&local_168);
        param_7[0x2a] = (undefined4)uStack_160;
        *(longlong *)(param_7 + 0x28) = local_168;
        local_150 = dVar1;
        local_148 = dVar4 + local_b8;
        local_140 = local_c8 + local_b0;
        FUN_1481f8bca(&local_120,&local_168);
        param_7[0x2d] = (undefined4)uStack_160;
        *(longlong *)(param_7 + 0x2b) = local_168;
        uVar5 = CONCAT71((int7)((ulonglong)&local_168 >> 8),1);
      }
      else {
        local_168 = 0;
        uStack_160 = 0;
        local_178 = *param_2;
        uStack_174 = param_2[1];
        uStack_170 = param_2[2];
        uStack_16c = param_2[3];
        local_268 = param_10;
        FUN_14818d81b(&local_178,&local_168,param_8,param_9);
        local_188 = *param_3;
        uStack_184 = param_3[1];
        uStack_180 = param_3[2];
        uStack_17c = param_3[3];
        local_268 = param_10;
        FUN_14818d90d(&local_188,&local_168,param_8,param_9);
        bVar6 = (uint)(*param_9 + *param_8 + *param_10) < (uint)param_7[0x2e];
        uVar5 = CONCAT71((int7)((ulonglong)&local_168 >> 8),bVar6);
        if (bVar6) {
          local_198 = *param_7;
          uStack_194 = param_7[1];
          uStack_190 = param_7[2];
          uStack_18c = param_7[3];
          *param_7 = 0;
          local_19c = *param_8;
          param_7[1] = local_19c;
          local_1a0 = *param_9 + local_19c;
          param_7[2] = local_1a0;
          param_7[3] = *param_10 + local_1a0;
          local_dc = 0;
          local_1b0 = local_168;
          local_1a8 = (undefined4)uStack_160;
          local_1c0 = *param_6;
          local_1b8 = (undefined4)param_6[1];
          local_268 = param_7;
          FUN_14818d9bb(&local_1c0,&local_1b0,&local_198,param_7);
          *(undefined8 *)(param_7 + 0x28) = 0x7f7fffff7f7fffff;
          *(undefined8 *)(param_7 + 0x2a) = 0xff7fffff7f7fffff;
          *(undefined1 **)(param_7 + 0x2c) = &DAT_ff7fffffff7fffff;
          local_a0 = '\0';
          local_1d8 = *param_2;
          uStack_1d4 = param_2[1];
          uStack_1d0 = param_2[2];
          uStack_1cc = param_2[3];
          local_268 = &local_19c;
          local_260 = &local_1a0;
          local_258 = &local_d8;
          FUN_14818d04b(&local_1d8,param_4,param_7,&local_dc);
          local_1e8 = *param_3;
          uStack_1e4 = param_3[1];
          uStack_1e0 = param_3[2];
          uStack_1dc = param_3[3];
          local_268 = &local_19c;
          local_260 = &local_1a0;
          local_258 = &local_d8;
          FUN_14818d43b(&local_1e8,param_4,param_7,&local_dc);
          if (local_a0 == '\0') {
            uVar7 = 0;
            uVar8 = 0;
            local_c8 = 0.0;
            local_c0 = 0.0;
            local_b8 = 0.0;
            local_b0 = 0.0;
            dVar4 = 0.0;
          }
          else {
            uVar7 = (undefined4)local_d8;
            uVar8 = (undefined4)((ulonglong)local_d8 >> 0x20);
            dVar4 = dStack_d0;
          }
          dVar1 = (double)CONCAT44(uVar8,uVar7) + local_c0;
          local_200 = local_c8 - local_b0;
          local_208 = dVar4 - local_b8;
          local_210 = (double)CONCAT44(uVar8,uVar7) - local_c0;
          param_7[0x28] = (float)local_210;
          param_7[0x29] = (float)local_208;
          param_7[0x2a] = (float)local_200;
          param_7[0x2b] = (float)dVar1;
          param_7[0x2c] = (float)(dVar4 + local_b8);
          param_7[0x2d] = (float)(local_c8 + local_b0);
          local_110 = (double)*(float *)(local_250 + 0x14) * 65536.0;
          local_118 = (double)*(float *)(local_250 + 0x10) * 65536.0;
          local_120 = (double)*(float *)(local_250 + 0xc) * 65536.0;
          FUN_1481f8bca(&local_120,&local_1f4);
          param_7[0x2a] = local_1ec;
          *(ulonglong *)(param_7 + 0x28) = CONCAT44(uStack_1f0,local_1f4);
          local_228 = dVar1;
          local_220 = dVar4 + local_b8;
          local_218 = local_c8 + local_b0;
          FUN_1481f8bca(&local_120,&local_1f4);
          param_7[0x2d] = local_1ec;
          *(ulonglong *)(param_7 + 0x2b) = CONCAT44(uStack_1f0,local_1f4);
          local_238 = local_168;
          local_230 = (undefined4)uStack_160;
          local_248 = *param_6;
          local_240 = (undefined4)param_6[1];
          FUN_14818db31(&local_248,&local_238,param_7,param_7);
          if (&local_168 != param_6) {
            if (*param_6 != 0) {
              FUN_1400020a8();
            }
            *param_6 = local_168;
            local_168 = 0;
            *(undefined4 *)(param_6 + 1) = (undefined4)uStack_160;
            *(undefined4 *)((longlong)param_6 + 0xc) = uStack_160._4_4_;
            uStack_160 = 0;
          }
        }
        if (local_168 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14818d04b FUN_14818d04b body=1007 status=ok
// SIG undefined FUN_14818d04b(void)

void FUN_14818d04b(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [56];
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = param_1[1];
  local_f8 = param_3;
  if ((longlong)(int)lVar10 != 0) {
    lVar3 = *param_1;
    lVar12 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar12);
      FUN_14487e4ca(plVar4,local_130);
      FUN_144a80a4c(local_130,&local_168,plVar4 + 0x48);
      if (*(char *)(param_7 + 7) == '\x01') {
        dVar17 = *param_7;
        dVar1 = param_7[1];
        dVar14 = dVar17 + param_7[3];
        dVar16 = dVar1 + param_7[4];
        dVar2 = param_7[2];
        dVar9 = dVar2 + param_7[5];
        dVar5 = dVar17 - param_7[3];
        dVar15 = dVar1 - param_7[4];
        dVar13 = dVar2 - param_7[5];
        dVar6 = dVar5;
        if (dVar14 <= dVar5) {
          dVar6 = dVar14;
        }
        dVar7 = dVar15;
        if (dVar16 <= dVar15) {
          dVar7 = dVar16;
        }
        dVar8 = dVar13;
        if (dVar9 <= dVar13) {
          dVar8 = dVar9;
        }
        if (dVar5 <= dVar14) {
          dVar5 = dVar14;
        }
        if (dVar15 <= dVar16) {
          dVar15 = dVar16;
        }
        if (dVar13 <= dVar9) {
          dVar13 = dVar9;
        }
        dVar16 = (double)CONCAT44(uStack_164,local_168);
        dVar9 = (double)CONCAT44(uStack_15c,uStack_160);
        dVar14 = dVar16 - dStack_150;
        if (dVar14 <= dVar6) {
          dVar6 = dVar14;
        }
        if (dVar5 <= dVar14) {
          dVar5 = dVar14;
        }
        dVar14 = dVar9 - local_148;
        if (dVar14 <= dVar7) {
          dVar7 = dVar14;
        }
        if (dVar15 <= dVar14) {
          dVar15 = dVar14;
        }
        dVar14 = local_158 - dStack_140;
        if (dVar14 <= dVar8) {
          dVar8 = dVar14;
        }
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        dVar14 = dStack_150 + dVar16;
        if (dVar14 <= dVar6) {
          dVar6 = dVar14;
        }
        if (dVar5 <= dVar14) {
          dVar5 = dVar14;
        }
        dVar14 = local_148 + dVar9;
        if (dVar14 <= dVar7) {
          dVar7 = dVar14;
        }
        if (dVar15 <= dVar14) {
          dVar15 = dVar14;
        }
        dVar14 = dStack_140 + local_158;
        if (dVar14 <= dVar8) {
          dVar8 = dVar14;
        }
        if (dVar13 <= dVar14) {
          dVar13 = dVar14;
        }
        dVar15 = (dVar15 - dVar7) * 0.5;
        dVar5 = (dVar5 - dVar6) * 0.5;
        dVar7 = dVar7 + dVar15;
        dVar6 = dVar6 + dVar5;
        dVar14 = (dVar13 - dVar8) * 0.5;
        dVar8 = dVar8 + dVar14;
        dVar16 = SQRT((local_158 - dVar8) * (local_158 - dVar8) +
                      (dVar16 - dVar6) * (dVar16 - dVar6) + (dVar9 - dVar7) * (dVar9 - dVar7)) +
                 local_138;
        dVar17 = SQRT((dVar2 - dVar8) * (dVar2 - dVar8) +
                      (dVar17 - dVar6) * (dVar17 - dVar6) + (dVar1 - dVar7) * (dVar1 - dVar7)) +
                 param_7[6];
        *param_7 = dVar6;
        param_7[1] = dVar7;
        param_7[2] = dVar8;
        param_7[3] = dVar5;
        param_7[4] = dVar15;
        param_7[5] = dVar14;
        if (dVar17 <= dVar16) {
          dVar17 = dVar16;
        }
        dVar1 = SQRT(dVar14 * dVar14 + dVar5 * dVar5 + dVar15 * dVar15);
        if (dVar17 <= dVar1) {
          dVar1 = dVar17;
        }
        param_7[6] = dVar1;
      }
      else {
        param_7[6] = local_138;
        param_7[4] = local_148;
        param_7[5] = dStack_140;
        param_7[2] = local_158;
        param_7[3] = dStack_150;
        *(undefined4 *)param_7 = local_168;
        *(undefined4 *)((longlong)param_7 + 4) = uStack_164;
        *(undefined4 *)(param_7 + 1) = uStack_160;
        *(undefined4 *)((longlong)param_7 + 0xc) = uStack_15c;
        *(undefined1 *)(param_7 + 7) = 1;
      }
      local_188 = &local_f8;
      local_178 = param_5;
      local_170 = param_6;
      local_190 = param_2;
      local_180 = param_4;
      uVar11 = (**(code **)(*plVar4 + 0x7a0))(plVar4);
      FUN_14819722a(&local_190,plVar4,uVar11);
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar12);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818d43b FUN_14818d43b body=991 status=ok
// SIG undefined FUN_14818d43b(void)

void FUN_14818d43b(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [56];
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = param_1[1];
  local_f8 = param_3;
  if ((longlong)(int)lVar10 != 0) {
    lVar3 = *param_1;
    lVar11 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar11);
      FUN_14487e4ca(lVar4,local_130);
      FUN_144a80a4c(local_130,&local_168,lVar4 + 0x240);
      if (*(char *)(param_7 + 7) == '\x01') {
        dVar16 = *param_7;
        dVar1 = param_7[1];
        dVar13 = dVar16 + param_7[3];
        dVar15 = dVar1 + param_7[4];
        dVar2 = param_7[2];
        dVar9 = dVar2 + param_7[5];
        dVar5 = dVar16 - param_7[3];
        dVar14 = dVar1 - param_7[4];
        dVar12 = dVar2 - param_7[5];
        dVar6 = dVar5;
        if (dVar13 <= dVar5) {
          dVar6 = dVar13;
        }
        dVar7 = dVar14;
        if (dVar15 <= dVar14) {
          dVar7 = dVar15;
        }
        dVar8 = dVar12;
        if (dVar9 <= dVar12) {
          dVar8 = dVar9;
        }
        if (dVar5 <= dVar13) {
          dVar5 = dVar13;
        }
        if (dVar14 <= dVar15) {
          dVar14 = dVar15;
        }
        if (dVar12 <= dVar9) {
          dVar12 = dVar9;
        }
        dVar15 = (double)CONCAT44(uStack_164,local_168);
        dVar9 = (double)CONCAT44(uStack_15c,uStack_160);
        dVar13 = dVar15 - dStack_150;
        if (dVar13 <= dVar6) {
          dVar6 = dVar13;
        }
        if (dVar5 <= dVar13) {
          dVar5 = dVar13;
        }
        dVar13 = dVar9 - local_148;
        if (dVar13 <= dVar7) {
          dVar7 = dVar13;
        }
        if (dVar14 <= dVar13) {
          dVar14 = dVar13;
        }
        dVar13 = local_158 - dStack_140;
        if (dVar13 <= dVar8) {
          dVar8 = dVar13;
        }
        if (dVar12 <= dVar13) {
          dVar12 = dVar13;
        }
        dVar13 = dStack_150 + dVar15;
        if (dVar13 <= dVar6) {
          dVar6 = dVar13;
        }
        if (dVar5 <= dVar13) {
          dVar5 = dVar13;
        }
        dVar13 = local_148 + dVar9;
        if (dVar13 <= dVar7) {
          dVar7 = dVar13;
        }
        if (dVar14 <= dVar13) {
          dVar14 = dVar13;
        }
        dVar13 = dStack_140 + local_158;
        if (dVar13 <= dVar8) {
          dVar8 = dVar13;
        }
        if (dVar12 <= dVar13) {
          dVar12 = dVar13;
        }
        dVar14 = (dVar14 - dVar7) * 0.5;
        dVar5 = (dVar5 - dVar6) * 0.5;
        dVar7 = dVar7 + dVar14;
        dVar6 = dVar6 + dVar5;
        dVar13 = (dVar12 - dVar8) * 0.5;
        dVar8 = dVar8 + dVar13;
        dVar15 = SQRT((local_158 - dVar8) * (local_158 - dVar8) +
                      (dVar15 - dVar6) * (dVar15 - dVar6) + (dVar9 - dVar7) * (dVar9 - dVar7)) +
                 local_138;
        dVar16 = SQRT((dVar2 - dVar8) * (dVar2 - dVar8) +
                      (dVar16 - dVar6) * (dVar16 - dVar6) + (dVar1 - dVar7) * (dVar1 - dVar7)) +
                 param_7[6];
        *param_7 = dVar6;
        param_7[1] = dVar7;
        param_7[2] = dVar8;
        param_7[3] = dVar5;
        param_7[4] = dVar14;
        param_7[5] = dVar13;
        if (dVar16 <= dVar15) {
          dVar16 = dVar15;
        }
        dVar1 = SQRT(dVar13 * dVar13 + dVar5 * dVar5 + dVar14 * dVar14);
        if (dVar16 <= dVar1) {
          dVar1 = dVar16;
        }
        param_7[6] = dVar1;
      }
      else {
        param_7[6] = local_138;
        param_7[4] = local_148;
        param_7[5] = dStack_140;
        param_7[2] = local_158;
        param_7[3] = dStack_150;
        *(undefined4 *)param_7 = local_168;
        *(undefined4 *)((longlong)param_7 + 4) = uStack_164;
        *(undefined4 *)(param_7 + 1) = uStack_160;
        *(undefined4 *)((longlong)param_7 + 0xc) = uStack_15c;
        *(undefined1 *)(param_7 + 7) = 1;
      }
      local_188 = &local_f8;
      local_178 = param_5;
      local_170 = param_6;
      local_190 = param_2;
      local_180 = param_4;
      FUN_148199967(lVar4,&local_190);
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar11);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818d81b FUN_14818d81b body=240 status=ok
// SIG undefined FUN_14818d81b(void)

void FUN_14818d81b(longlong *param_1,longlong param_2,int *param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)(param_2 + 0xc) < iVar6) {
    FUN_14819c1e4(param_2);
    iVar6 = (int)param_1[1];
  }
  if (iVar6 != 0) {
    lVar1 = *param_1;
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar7);
      puVar4 = (undefined4 *)FUN_14819c1a8(param_2);
      uVar3 = FUN_14818c7ad(plVar2);
      *puVar4 = uVar3;
      local_50 = puVar4;
      uVar5 = (**(code **)(*plVar2 + 0x7a0))(plVar2);
      FUN_14819c2d0(&local_50,uVar5);
      *param_3 = *param_3 + puVar4[1];
      *param_4 = *param_4 + puVar4[2];
      *param_5 = *param_5 + puVar4[3];
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818d90d FUN_14818d90d body=173 status=ok
// SIG undefined FUN_14818d90d(void)

void FUN_14818d90d(longlong *param_1,longlong param_2,int *param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (int)param_1[1];
  if (-1 < iVar5) {
    if (*(int *)(param_2 + 0xc) < iVar5) {
      FUN_14819c1e4(param_2);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != 0) {
      lVar1 = *param_1;
      lVar6 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        puVar4 = (undefined4 *)FUN_14819c1a8(param_2);
        uVar3 = FUN_14818c4d2(uVar2);
        *puVar4 = uVar3;
        FUN_14819c3a8(uVar2,puVar4);
        *param_3 = *param_3 + puVar4[1];
        *param_4 = *param_4 + puVar4[2];
        *param_5 = *param_5 + puVar4[3];
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 14818d9bb FUN_14818d9bb body=374 status=ok
// SIG undefined FUN_14818d9bb(void)

void FUN_14818d9bb(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar8 = (int *)*param_2;
    piVar6 = piVar8 + (longlong)*(int *)(param_2 + 1) * 4;
    iVar3 = 0;
    iVar4 = 0;
    iVar9 = 0;
    do {
      if (0 < (longlong)(int)param_1[1]) {
        lVar1 = *param_1;
        lVar5 = 0;
        iVar7 = 0;
        iVar2 = 0;
        iVar10 = 0;
        do {
          if (*(int *)(lVar1 + lVar5) == *piVar8) {
            FUN_14819c576(param_5 + 0x10,param_5 + 0x30,iVar10,iVar2,iVar7,iVar3,iVar4,iVar9,param_3
                          ,param_4,piVar8);
            FUN_14819c576(param_5 + 0x20,param_5 + 0x40,iVar10,iVar2,iVar7,iVar3,iVar4,iVar9,param_3
                          ,param_4,piVar8);
            break;
          }
          iVar10 = iVar10 + *(int *)(lVar1 + 4 + lVar5);
          iVar2 = iVar2 + *(int *)(lVar1 + 8 + lVar5);
          iVar7 = iVar7 + *(int *)(lVar1 + 0xc + lVar5);
          lVar5 = lVar5 + 0x10;
        } while ((longlong)(int)param_1[1] * 0x10 != lVar5);
      }
      iVar3 = iVar3 + piVar8[1];
      iVar4 = iVar4 + piVar8[2];
      iVar9 = iVar9 + piVar8[3];
      piVar8 = piVar8 + 4;
    } while (piVar8 != piVar6);
  }
  return;
}



// FUNCTION 14818db31 FUN_14818db31 body=274 status=ok
// SIG undefined FUN_14818db31(void)

void FUN_14818db31(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar6 = (int *)*param_2;
    piVar5 = piVar6 + (longlong)*(int *)(param_2 + 1) * 4;
    iVar4 = 0;
    iVar1 = 0;
    iVar3 = 0;
    do {
      if (0 < (longlong)(int)param_1[1]) {
        lVar2 = 0;
        do {
          if (*(int *)(*param_1 + lVar2) == *piVar6) goto LAB_14818dc19;
          lVar2 = lVar2 + 0x10;
        } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
      }
      FUN_14819c6b8(param_4 + 0x10,param_4 + 0x30,iVar4,iVar1,iVar3,iVar4,iVar1,iVar3,param_3,
                    param_3,piVar6);
      FUN_14819c6b8(param_4 + 0x20,param_4 + 0x40,iVar4,iVar1,iVar3,iVar4,iVar1,iVar3,param_3,
                    param_3,piVar6);
LAB_14818dc19:
      iVar4 = iVar4 + piVar6[1];
      iVar1 = iVar1 + piVar6[2];
      iVar3 = iVar3 + piVar6[3];
      piVar6 = piVar6 + 4;
    } while (piVar6 != piVar5);
  }
  return;
}



// FUNCTION 14818dc44 FUN_14818dc44 body=406 status=ok
// SIG undefined FUN_14818dc44(void)

void FUN_14818dc44(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_140661c88(param_1 + 0x10,param_2,L"FNDIRigidMeshCollisionBuffer",0x10,
                  *(int *)(param_1 + 0xa4) * 3,1,1,0);
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_140661c88(param_1 + 0x28,param_2,L"FNDIRigidMeshCollisionBuffer",0x10,
                    *(int *)(param_1 + 0xa4) * 3,1,1,0);
    }
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_140661c88(param_1 + 0x40,param_2,L"FNDIRigidMeshCollisionBuffer",0x10,
                  *(int *)(param_1 + 0xa0),1,1,0);
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_140661c88(param_1 + 0x58,param_2,L"FNDIRigidMeshCollisionBuffer",0x10,
                    *(int *)(param_1 + 0xa0),1,1,0);
      if (*(int *)(param_1 + 0xa0) != 0) {
        FUN_140661c88(param_1 + 0x70,param_2,L"FNDIRigidMeshCollisionBuffer",4,
                      *(int *)(param_1 + 0xa0),0x1c,1,0);
        if (*(int *)(param_1 + 0xa0) != 0) {
          FUN_140661c88(param_1 + 0x88,param_2,L"FNDIRigidMeshCollisionBuffer",4,
                        *(int *)(param_1 + 0xa0),0x1c,1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 14818ddda FUN_14818ddda body=73 status=ok
// SIG undefined FUN_14818ddda(void)

void FUN_14818ddda(longlong param_1)

{
  FUN_14011fb0c(param_1 + 0x10);
  FUN_14011fb0c(param_1 + 0x28);
  FUN_14011fb0c(param_1 + 0x40);
  FUN_14011fb0c(param_1 + 0x58);
  FUN_14011fb0c(param_1 + 0x70);
  FUN_14011fb0c(param_1 + 0x88);
  return;
}



// FUNCTION 14818de24 FUN_14818de24 body=243 status=ok
// SIG undefined FUN_14818de24(void)

void FUN_14818de24(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x38) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_2 + 0x8c) < iVar2) {
    FUN_14819c7fa(param_2);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar4 = (longlong)iVar1 << 3;
    do {
      local_38 = FUN_14479d2ce(lVar3);
      if (local_38 != 0) {
        FUN_14819c868(param_2,&local_38);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = (longlong)*(int *)(param_1 + 0x38) << 3;
    do {
      local_38 = FUN_14479d2ce(lVar3);
      if (local_38 != 0) {
        FUN_14819c868(param_2,&local_38);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818df1a FUN_14818df1a body=59 status=ok
// SIG undefined FUN_14818df1a(void)

void FUN_14818df1a(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a5e808(param_1 + 0x10);
  FUN_14818df56(param_1 + 0x10,uVar1);
  uVar1 = FUN_143a5e808(param_1 + 0x30);
  FUN_14818df56(param_1 + 0x30,uVar1);
  return;
}



// FUNCTION 14818df56 FUN_14818df56 body=116 status=ok
// SIG undefined FUN_14818df56(void)

void FUN_14818df56(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140155462(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14819c8f6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14818dfcc FUN_14818dfcc body=390 status=ok
// SIG undefined FUN_14818dfcc(void)

void FUN_14818dfcc(undefined8 *param_1,int param_2)

{
  void *_Dst;
  undefined8 *_Dst_00;
  longlong lVar1;
  
  if (*(int *)(param_1 + 3) == 0) {
    lVar1 = param_1[1];
    if (*(int *)(param_1 + 7) == 0) {
      if (lVar1 != 0) {
        param_1[1] = 0;
        FUN_148196f7a(lVar1);
        FUN_1400020a8(lVar1);
        FUN_143a5e34a(param_1);
      }
      goto LAB_14818dff7;
    }
  }
  else {
    lVar1 = param_1[1];
  }
  if (lVar1 == 0) {
    _Dst = (void *)FUN_14001cc68(0xc0);
    memset(_Dst,0,0xa0);
    *(int *)((longlong)_Dst + 0xb8) = param_2;
    FUN_14818e152(_Dst);
    lVar1 = param_1[1];
    param_1[1] = _Dst;
    if (lVar1 != 0) {
      FUN_148196f7a(lVar1);
      FUN_1400020a8(lVar1);
    }
    _Dst_00 = (undefined8 *)FUN_14001cc68(0xa8);
    memset(_Dst_00,0,0xa0);
    *(undefined4 *)(_Dst_00 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst_00 + 0xc) = 0x105;
    *_Dst_00 = &PTR_FUN_14addc630;
    _Dst_00[2] = 0;
    _Dst_00[3] = 0;
    *(undefined4 *)(_Dst_00 + 4) = 0;
    _Dst_00[5] = 0;
    _Dst_00[6] = 0;
    *(undefined4 *)(_Dst_00 + 7) = 0;
    _Dst_00[8] = 0;
    _Dst_00[9] = 0;
    *(undefined4 *)(_Dst_00 + 10) = 0;
    _Dst_00[0xb] = 0;
    _Dst_00[0xc] = 0;
    *(undefined4 *)(_Dst_00 + 0xd) = 0;
    _Dst_00[0xe] = 0;
    _Dst_00[0xf] = 0;
    *(undefined4 *)(_Dst_00 + 0x10) = 0;
    *(undefined4 *)(_Dst_00 + 0x13) = 0;
    _Dst_00[0x11] = 0;
    _Dst_00[0x12] = 0;
    *param_1 = _Dst_00;
    *(int *)(_Dst_00 + 0x14) = param_2;
    *(int *)((longlong)_Dst_00 + 0xa4) = param_2 * 2;
    FUN_140308182(_Dst_00,0);
    lVar1 = param_1[1];
  }
  FUN_14818e152(lVar1);
LAB_14818dff7:
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_14819c1e4(param_1 + 4,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  return;
}



// FUNCTION 14818e152 FUN_14818e152 body=351 status=ok
// SIG undefined FUN_14818e152(void)

void FUN_14818e152(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  ulonglong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 2,local_48,*(int *)(param_1 + 0x17) * 3);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 4,local_48,*(int *)(param_1 + 0x17) * 3);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 6,local_48,*(int *)(param_1 + 0x17) * 3);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 8,local_48,*(int *)(param_1 + 0x17) * 3);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 10,local_48,*(undefined4 *)(param_1 + 0x17));
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146bff226(param_1 + 0xc,local_48,*(undefined4 *)(param_1 + 0x17));
  local_48[0] = local_48[0] & 0xffffffff00000000;
  FUN_146f37e98(param_1 + 0xe,local_48,*(undefined4 *)(param_1 + 0x17));
  local_48[0] = CONCAT44(local_48[0]._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 0x10,local_48,*(undefined4 *)(param_1 + 0x17));
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    FUN_14177d6f6(param_1 + 0x12,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818e2b2 FUN_14818e2b2 body=214 status=ok
// SIG undefined FUN_14818e2b2(void)

void FUN_14818e2b2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x58);
    lVar5 = (longlong)*(int *)(param_1 + 0x60) * 0x28;
    do {
      lVar4 = FUN_1404101e2(lVar6);
      if (lVar4 != 0) {
        local_48 = 0;
        FUN_14485c47a(&local_48,lVar4);
        FUN_1407a297a((undefined8 *)(param_2 + 0x10),&local_48);
      }
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    iVar3 = *(int *)(param_2 + 0x18);
  }
  if (iVar3 == iVar1) {
    FUN_14819d966(*(undefined8 *)(param_2 + 0x10),lVar2,iVar1);
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818e38a FUN_14818e38a body=349 status=ok
// SIG undefined FUN_14818e38a(void)

void FUN_14818e38a(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [28];
  char local_84;
  longlong local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_3 + 0x30);
  iVar1 = *(int *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    local_b0 = FUN_144a6c4d8();
    if ((local_b0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_b0);
    }
    FUN_14146ff3c(local_a8,param_2,&local_b0,5);
    if (local_84 == '\0') {
      do {
        lVar3 = local_78;
        if ((local_78 != 0) && (cVar4 = FUN_14818f566(param_1,local_78), cVar4 == '\0')) {
          local_b8 = 0;
          FUN_14485c47a(&local_b8,lVar3);
          FUN_1407a297a((undefined8 *)(param_3 + 0x30),&local_b8);
        }
        FUN_14146ffc0(local_a8);
      } while (local_84 == '\0');
    }
    if (local_50 == '\x01') {
      FUN_14024445c(local_a0);
    }
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_3 + 0x30);
  }
  FUN_14819d59b(uVar5,uVar6);
  if (iVar1 == *(int *)(param_3 + 0x38)) {
    FUN_14819d966(lVar2,*(undefined8 *)(param_3 + 0x30),iVar1);
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818e4e8 FUN_14818e4e8 body=786 status=ok
// SIG undefined FUN_14818e4e8(void)

undefined8 FUN_14818e4e8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar1 = *(longlong *)(param_3 + 0x38);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar1 + 0xd8);
    cVar2 = FUN_143abbf4c(lVar8 + 0x1d8);
    if ((cVar2 != '\0') && ((longlong)*(int *)(lVar8 + 0x2a8) != 0)) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0x2a0) + lVar3) == DAT_14cb3d120) {
          uVar4 = 1;
          goto LAB_14818e5af;
        }
        lVar3 = lVar3 + 0x58;
      } while ((longlong)*(int *)(lVar8 + 0x2a8) * 0x58 - lVar3 != 0);
    }
    uVar4 = 0;
LAB_14818e5af:
    lVar8 = *(longlong *)(lVar1 + 0xe0);
    cVar2 = FUN_143abbf4c(lVar8 + 0x1d8);
    if ((cVar2 != '\0') && ((longlong)*(int *)(lVar8 + 0x2a8) != 0)) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0x2a0) + lVar3) == DAT_14cb3d120) {
          uVar4 = 1;
          break;
        }
        lVar3 = lVar3 + 0x58;
      } while ((longlong)*(int *)(lVar8 + 0x2a8) * 0x58 - lVar3 != 0);
    }
    if ((longlong)*(int *)(lVar1 + 0xc0) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0xb8);
      lVar1 = lVar8 + (longlong)*(int *)(lVar1 + 0xc0) * 0x48;
      do {
        cVar2 = FUN_144b35680(lVar8);
        if ((cVar2 != '\0') && (lVar3 = FUN_14040f60c(lVar8), lVar3 != 0)) {
          lVar6 = *(longlong *)(lVar3 + 0x118);
          cVar2 = FUN_143abbf4c(lVar6 + 0x1d8);
          if ((cVar2 != '\0') && ((longlong)*(int *)(lVar6 + 0x2a8) != 0)) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0x2a0) + lVar5) == DAT_14cb3d120) {
                uVar4 = 1;
                break;
              }
              lVar5 = lVar5 + 0x58;
            } while ((longlong)*(int *)(lVar6 + 0x2a8) * 0x58 - lVar5 != 0);
          }
          lVar6 = *(longlong *)(lVar3 + 0xf0);
          cVar2 = FUN_143abbf4c(lVar6 + 0x1d8);
          if ((cVar2 != '\0') && ((longlong)*(int *)(lVar6 + 0x2a8) != 0)) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0x2a0) + lVar5) == DAT_14cb3d120) {
                uVar4 = 1;
                break;
              }
              lVar5 = lVar5 + 0x58;
            } while ((longlong)*(int *)(lVar6 + 0x2a8) * 0x58 - lVar5 != 0);
          }
          lVar6 = *(longlong *)(lVar3 + 0x268);
          if (((lVar6 != 0) && (cVar2 = FUN_143abbf4c(lVar6 + 0x1d8), cVar2 != '\0')) &&
             ((longlong)*(int *)(lVar6 + 0x2a8) != 0)) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar6 + 0x2a0) + lVar5) == DAT_14cb3d120) {
                uVar4 = 1;
                break;
              }
              lVar5 = lVar5 + 0x58;
            } while ((longlong)*(int *)(lVar6 + 0x2a8) * 0x58 - lVar5 != 0);
          }
          if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
            plVar9 = *(longlong **)(lVar3 + 0x80);
            plVar7 = plVar9 + (longlong)*(int *)(lVar3 + 0x88) * 0xb;
            do {
              lVar3 = *plVar9;
              cVar2 = FUN_143abbf4c(lVar3 + 0x1d8);
              if ((cVar2 != '\0') && ((longlong)*(int *)(lVar3 + 0x2a8) != 0)) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0x2a0) + lVar6) == DAT_14cb3d120) {
                    uVar4 = 1;
                    break;
                  }
                  lVar6 = lVar6 + 0x58;
                } while ((longlong)*(int *)(lVar3 + 0x2a8) * 0x58 - lVar6 != 0);
              }
              plVar9 = plVar9 + 0xb;
            } while (plVar9 != plVar7);
          }
        }
        lVar8 = lVar8 + 0x48;
      } while (lVar8 != lVar1);
    }
  }
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = param_3;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined1 *)((longlong)param_2 + 0x4c) = uVar4;
  *(undefined2 *)((longlong)param_2 + 0x4d) = 0;
  FUN_14818e2b2(param_1,param_2);
  if ((*(char *)(param_1 + 0x6b) == '\x01') &&
     ((*(char *)(param_1 + 0x6c) != '\0' ||
      ((*(char *)(param_1 + 0x6d) == '\x01' && (*(char *)((longlong)param_2 + 0x4c) == '\0')))))) {
    FUN_14818e38a(param_1,*(undefined8 *)(param_3 + 0x30),param_2);
  }
  FUN_14818dfcc(param_2,*(undefined4 *)(param_1 + 0x70));
  return 1;
}



// FUNCTION 14818e7fa FUN_14818e7fa body=546 status=ok
// SIG undefined FUN_14818e7fa(void)

byte FUN_14818e7fa(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_2c8 [40];
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined1 *local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined1 local_260 [128];
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [192];
  undefined1 *local_110;
  undefined8 local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  bVar4 = 0;
  if (param_2 != 0) {
    bVar4 = 0;
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    local_110 = (undefined1 *)0x0;
    local_108 = 0x1800000000;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = 0x1000000000;
    FUN_14818de24(param_2,local_260);
    local_270 = *(undefined8 *)(param_1 + 0x48);
    local_268 = *(undefined4 *)(param_1 + 0x50);
    local_280 = local_1e0;
    if (local_1e0 == (undefined1 *)0x0) {
      local_280 = local_260;
    }
    local_278 = (undefined4)local_1d8;
    FUN_14818c542(&local_280,&local_270,local_100);
    local_290 = *(undefined8 *)(param_1 + 0x48);
    local_288 = *(undefined4 *)(param_1 + 0x50);
    local_2a0 = local_1e0;
    if (local_1e0 == (undefined1 *)0x0) {
      local_2a0 = local_260;
    }
    local_298 = (undefined4)local_1d8;
    FUN_14818c223(&local_2a0,&local_290,local_1d0);
    puVar2 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar2 = local_100;
    }
    if ((longlong)(int)local_38 != 0) {
      lVar3 = 0;
      bVar4 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)(puVar2 + lVar3) + 0x49);
        bVar5 = (byte)*(undefined4 *)(*(longlong *)(puVar2 + lVar3) + 0x48);
        if (bVar5 < bVar1) {
          bVar5 = bVar1;
        }
        if (4 < bVar5) {
          bVar5 = 5;
        }
        if (bVar4 < (byte)(bVar5 + 1)) {
          bVar4 = bVar5 + 1;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)local_38 * 8 != lVar3);
    }
    puVar2 = local_1d0;
    if (local_110 != (undefined1 *)0x0) {
      puVar2 = local_110;
    }
    if ((longlong)(int)local_108 != 0) {
      lVar3 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)(puVar2 + lVar3) + 0x49);
        bVar5 = (byte)*(undefined4 *)(*(longlong *)(puVar2 + lVar3) + 0x48);
        if (bVar5 < bVar1) {
          bVar5 = bVar1;
        }
        if (4 < bVar5) {
          bVar5 = 5;
        }
        if (bVar4 < (byte)(bVar5 + 1)) {
          bVar4 = bVar5 + 1;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)local_108 * 8 != lVar3);
    }
    if (local_1e0 != (undefined1 *)0x0) {
      FUN_1400020a8(local_1e0);
    }
    if (local_110 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818ea1e FUN_14818ea1e body=86 status=ok
// SIG undefined FUN_14818ea1e(void)

void FUN_14818ea1e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  FUN_148196f7a(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14818ea74 FUN_14818ea74 body=110 status=ok
// SIG undefined FUN_14818ea74(void)

undefined8 FUN_14818ea74(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_3 != 0 && param_2 != 0) {
    lVar3 = *(longlong *)(param_3 + 0x20);
    plVar4 = *(longlong **)(param_3 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (*(int *)(lVar3 + 0x574) == 0) {
      FUN_143a5e900(param_2,param_1);
    }
  }
  return 0;
}



// FUNCTION 14818eae2 FUN_14818eae2 body=121 status=ok
// SIG undefined FUN_14818eae2(void)

undefined8 FUN_14818eae2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    FUN_1406fa324(param_2 + 0x38,param_1 + 0x38);
    FUN_1406fa324(param_2 + 0x48,param_1 + 0x48);
    FUN_14818eb5c(param_2 + 0x58,param_1 + 0x58);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_1 + 0x68);
    *(undefined1 *)(param_2 + 0x69) = *(undefined1 *)(param_1 + 0x69);
    *(undefined1 *)(param_2 + 0x6a) = *(undefined1 *)(param_1 + 0x6a);
    *(undefined1 *)(param_2 + 0x6b) = *(undefined1 *)(param_1 + 0x6b);
    *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
    *(undefined1 *)(param_2 + 0x6d) = *(undefined1 *)(param_1 + 0x6d);
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x70) = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 14818eb5c FUN_14818eb5c body=95 status=ok
// SIG undefined FUN_14818eb5c(void)

undefined8 * FUN_14818eb5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aa5a03(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14819caf0(param_1,iVar1);
      FUN_14819cb63(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14818ebbc FUN_14818ebbc body=170 status=ok
// SIG undefined FUN_14818ebbc(void)

undefined4 FUN_14818ebbc(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if (((((cVar1 != '\0') && (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40))) &&
       (cVar1 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x38)),
       cVar1 != '\0')) &&
      (((*(int *)(param_2 + 0x50) == *(int *)(param_1 + 0x50) &&
        (cVar1 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x48)),
        cVar1 != '\0')) &&
       ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x60) &&
        ((cVar1 = FUN_14819cbe9(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x58)),
         cVar1 != '\0' && (*(char *)(param_2 + 0x68) == *(char *)(param_1 + 0x68))))))))) &&
     ((*(char *)(param_2 + 0x69) == *(char *)(param_1 + 0x69) &&
      ((((*(char *)(param_2 + 0x6a) == *(char *)(param_1 + 0x6a) &&
         (*(char *)(param_2 + 0x6b) == *(char *)(param_1 + 0x6b))) &&
        (*(char *)(param_2 + 0x6c) == *(char *)(param_1 + 0x6c))) &&
       (*(char *)(param_2 + 0x6d) == *(char *)(param_1 + 0x6d))))))) {
    return CONCAT31((int3)((uint)*(int *)(param_2 + 0x70) >> 8),
                    *(int *)(param_2 + 0x70) == *(int *)(param_1 + 0x70));
  }
  return 0;
}



// FUNCTION 14818ec6c FUN_14818ec6c body=202 status=ok
// SIG undefined FUN_14818ec6c(void)

void FUN_14818ec6c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14addc710;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818ed38 FUN_14818ed38 body=202 status=ok
// SIG undefined FUN_14818ed38(void)

void FUN_14818ed38(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14addc780;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818ee04 FUN_14818ee04 body=202 status=ok
// SIG undefined FUN_14818ee04(void)

void FUN_14818ee04(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14addc7f0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818eed0 FUN_14818eed0 body=75 status=ok
// SIG undefined FUN_14818eed0(void)

void FUN_14818eed0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)*param_2;
  }
  FUN_14819cc36(param_2[3],puVar2);
  uVar1 = thunk_FUN_1401ab454();
  FUN_14096837e(param_2,uVar1);
  uVar1 = thunk_FUN_1401d6c66();
  FUN_14096837e(param_2,uVar1);
  return;
}



// FUNCTION 14818ef1c FUN_14818ef1c body=807 status=ok
// SIG undefined FUN_14818ef1c(void)

void FUN_14818ef1c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_2[9];
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(param_2[2] + 0x10);
    lVar8 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar1 + 0x50);
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(lVar1 + 0x58) - 1U &
                              (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar11 * 0xb8;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar11 * 0xb8) == lVar2)
        goto LAB_14818ef90;
        iVar11 = *(int *)(lVar8 + 0xb0);
      } while (iVar11 != -1);
    }
  }
  lVar8 = 0;
LAB_14818ef90:
  piVar14 = (int *)(lVar8 + 8);
  if (lVar8 == 0) {
    piVar14 = (int *)0x0;
  }
  uVar12 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_14819ccce();
  *(uint *)(param_2 + 10) = DAT_14cb3d5a4 + uVar12;
  piVar13 = (int *)((ulonglong)uVar12 + param_2[7]);
  lVar8 = thunk_FUN_1401ab454();
  lVar9 = thunk_FUN_1401d6c66();
  uVar6 = FUN_144b34ab6(param_2,lVar8);
  lVar1 = param_2[7];
  uVar7 = FUN_144b34ab6(param_2,lVar9);
  lVar2 = param_2[7];
  cVar4 = FUN_144944d68(param_2,(ulonglong)uVar6 + lVar1,*(undefined4 *)(lVar8 + 0x3c));
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    cVar5 = FUN_144944d68(param_2,(ulonglong)uVar7 + lVar2,*(undefined4 *)(lVar9 + 0x3c));
  }
  lVar8 = DAT_14cb42830;
  if (((piVar14 == (int *)0x0) || (lVar9 = *(longlong *)(piVar14 + 0x22), lVar9 == 0)) ||
     (*(int *)(lVar9 + 8) == -1)) {
    *(longlong *)(piVar13 + 8) = DAT_14cb42830;
    *(longlong *)(piVar13 + 10) = lVar8;
    lVar8 = DAT_14cb42830;
    *(longlong *)(piVar13 + 0xc) = DAT_14cb42830;
    *(longlong *)(piVar13 + 0xe) = lVar8;
    lVar8 = DAT_14cb428f0;
    *(longlong *)(piVar13 + 0x10) = DAT_14cb428f0;
    *(longlong *)(piVar13 + 0x12) = lVar8;
    bVar3 = false;
    piVar13[0] = 0;
    piVar13[1] = 0;
    piVar13[2] = 0;
    piVar13[0x18] = 0;
    piVar13[0x19] = 0;
    piVar13[0x1a] = 0;
    piVar13[0x1c] = 0;
    piVar13[0x1d] = 0;
    piVar13[0x1e] = 0;
    piVar13[4] = 0;
    piVar13[5] = 0;
    piVar13[6] = 0;
    piVar13[7] = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar9 + 0x18);
    if (*(longlong *)(lVar9 + 0x18) == 0) {
      lVar8 = DAT_14cb42830;
    }
    *(longlong *)(piVar13 + 8) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x30);
    if (*(longlong *)(lVar9 + 0x30) == 0) {
      lVar8 = DAT_14cb42830;
    }
    *(longlong *)(piVar13 + 10) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x48);
    if (*(longlong *)(lVar9 + 0x48) == 0) {
      lVar8 = DAT_14cb42830;
    }
    *(longlong *)(piVar13 + 0xc) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x60);
    if (*(longlong *)(lVar9 + 0x60) == 0) {
      lVar8 = DAT_14cb42830;
    }
    *(longlong *)(piVar13 + 0xe) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x78);
    if (*(longlong *)(lVar9 + 0x78) == 0) {
      lVar8 = DAT_14cb428f0;
    }
    *(longlong *)(piVar13 + 0x10) = lVar8;
    lVar8 = *(longlong *)(lVar9 + 0x90);
    if (*(longlong *)(lVar9 + 0x90) == 0) {
      lVar8 = DAT_14cb428f0;
    }
    *(longlong *)(piVar13 + 0x12) = lVar8;
    *piVar13 = piVar14[0x1c] * 2;
    piVar13[1] = 0;
    piVar13[2] = piVar14[0x1c] * 3;
    piVar13[4] = *piVar14;
    piVar13[5] = piVar14[1];
    piVar13[6] = piVar14[2];
    piVar13[7] = piVar14[3];
    *(undefined8 *)(piVar13 + 0x18) = *(undefined8 *)(piVar14 + 0x24);
    piVar13[0x1a] = piVar14[0x26];
    *(undefined8 *)(piVar13 + 0x1c) = *(undefined8 *)(piVar14 + 0x27);
    piVar13[0x1e] = piVar14[0x29];
    bVar3 = true;
  }
  if (cVar5 != '\0') {
    uVar10 = 0;
    if (0 < *(int *)(param_2[1] + 0x1cc)) {
      uVar10 = *(undefined8 *)(param_2[1] + 0x1c0);
    }
    uVar15 = 0;
    if (bVar3) {
      uVar15 = uVar10;
    }
    FUN_1471599e3(*param_2,(ulonglong)uVar6 + lVar1,uVar15);
    FUN_147159afa(*param_2,(ulonglong)uVar7 + lVar2,uVar15);
  }
  FUN_144b34a0e(param_2,&local_4c);
  piVar13[0x16] = local_44;
  *(undefined8 *)(piVar13 + 0x14) = local_4c;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818f244 FUN_14818f244 body=624 status=ok
// SIG undefined FUN_14818f244(void)

void FUN_14818f244(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_2,0,0xa8);
  if ((param_2 == (undefined4 *)0x0 || param_3 == (undefined8 *)0x0) ||
     (puVar3 = (undefined4 *)param_3[1], puVar3 == (undefined4 *)0x0)) goto LAB_14818f294;
  uVar1 = puVar3[3];
  lVar9 = (longlong)(int)uVar1;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *param_2 = *puVar3;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  local_4c = uVar1 * 3;
  local_58 = &local_4c;
  FUN_143a5fec8(&local_58,param_3[1] + 0x10,param_3[1] + 0x30,param_2 + 4);
  FUN_143a5fec8(&local_58,param_3[1] + 0x20,param_3[1] + 0x40,param_2 + 8);
  pvVar4 = *(void **)(param_3[1] + 0x50);
  iVar2 = param_2[0xe];
  param_2[0xe] = iVar2 + uVar1;
  if ((uint)(param_2[0xf] - iVar2) < uVar1) {
    FUN_1449e2712(param_2 + 0xc,iVar2);
LAB_14818f33e:
    memcpy((void *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0xc)),pvVar4,lVar9 << 4);
    bVar8 = false;
  }
  else {
    bVar8 = true;
    if (uVar1 != 0) goto LAB_14818f33e;
  }
  pvVar4 = *(void **)(param_3[1] + 0x60);
  iVar2 = param_2[0x12];
  param_2[0x12] = iVar2 + uVar1;
  if ((uint)(param_2[0x13] - iVar2) < uVar1) {
    FUN_1449e2712(param_2 + 0x10,iVar2);
  }
  if (!bVar8) {
    memcpy((void *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x10)),pvVar4,lVar9 << 4);
  }
  pvVar4 = *(void **)(param_3[1] + 0x70);
  iVar2 = param_2[0x16];
  param_2[0x16] = iVar2 + uVar1;
  if ((uint)(param_2[0x17] - iVar2) < uVar1) {
    FUN_1447808da(param_2 + 0x14,iVar2);
  }
  if (!bVar8) {
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(param_2 + 0x14)),pvVar4,lVar9 * 4);
  }
  pvVar4 = *(void **)(param_3[1] + 0x80);
  iVar2 = param_2[0x1a];
  param_2[0x1a] = iVar2 + uVar1;
  if ((uint)(param_2[0x1b] - iVar2) < uVar1) {
    FUN_1446f48e2(param_2 + 0x18,iVar2);
  }
  if (!bVar8) {
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(param_2 + 0x18)),pvVar4,lVar9 << 2);
  }
  FUN_14818f4b6(param_2 + 0x1e,param_3[1] + 0x90);
  param_2[0x1c] = uVar1;
  *(undefined8 *)(param_2 + 0x22) = *param_3;
  lVar9 = param_3[1];
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(lVar9 + 0xa0);
  param_2[0x26] = *(undefined4 *)(lVar9 + 0xa8);
  lVar9 = param_3[1];
  param_2[0x29] = *(undefined4 *)(lVar9 + 0xb4);
  *(undefined8 *)(param_2 + 0x27) = *(undefined8 *)(lVar9 + 0xac);
LAB_14818f294:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818f4b6 FUN_14818f4b6 body=88 status=ok
// SIG undefined FUN_14818f4b6(void)

undefined8 * FUN_14818f4b6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14819c998(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14818f50e FUN_14818f50e body=88 status=ok
// SIG undefined FUN_14818f50e(void)

ulonglong FUN_14818f50e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_144a74fb4();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x30),
     *(longlong *)(lVar2 + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
    lVar1 = FUN_144a7a726();
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                       *(longlong *)(lVar2 + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14818f566 FUN_14818f566 body=129 status=ok
// SIG undefined FUN_14818f566(void)

undefined8 FUN_14818f566(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x68) == '\x01') && (cVar2 = FUN_1433b813c(param_2), cVar2 == '\0')) {
    return 1;
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
LAB_14818f5da:
    uVar4 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x38);
    plVar1 = plVar3 + *(int *)(param_1 + 0x40);
    do {
      if (*plVar3 == 0) {
LAB_14818f5d5:
        if (plVar3 != (longlong *)0x0) goto LAB_14818f5da;
        break;
      }
      if ((longlong)*(int *)(param_2 + 0x1f8) != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0x1f0) + lVar5) == *plVar3) goto LAB_14818f5d5;
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(param_2 + 0x1f8) * 8 != lVar5);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14818f5e8 FUN_14818f5e8 body=1273 status=ok
// SIG undefined FUN_14818f5e8(void)

void FUN_14818f5e8(undefined8 param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_2b8 [32];
  undefined1 *local_298;
  double *local_290;
  double *local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238 [24];
  double local_220;
  double local_218;
  double local_210;
  int *local_208;
  int local_200;
  int *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined4 *local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  float *local_1c0 [2];
  int local_1b0;
  float *local_1a8;
  int local_198;
  float *local_190;
  int local_180;
  float *local_178;
  undefined8 uStack_170;
  int local_168;
  float *local_160;
  undefined8 uStack_158;
  int local_150;
  float *local_148;
  undefined8 uStack_140;
  int local_138;
  float *local_130;
  undefined8 uStack_128;
  int local_120;
  undefined4 *local_118 [2];
  int local_108;
  undefined4 *local_100;
  int local_f0;
  undefined4 *local_e8;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_14818fae2(local_d0);
  FUN_1405f76c0(local_118,param_2);
  local_168 = 0;
  local_178 = (float *)0x0;
  uStack_170 = 0;
  FUN_144a98dce(&local_178,param_2);
  local_150 = 0;
  local_160 = (float *)0x0;
  uStack_158 = 0;
  FUN_144a98dce(&local_160,param_2);
  local_138 = 0;
  local_148 = (float *)0x0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_120 = 0;
  local_130 = (float *)0x0;
  uStack_128 = 0;
  FUN_144a98dce(&local_130,param_2);
  FUN_1448a432c(local_1c0,param_2);
  local_1c8 = 0;
  local_1d8 = (undefined4 *)0x0;
  uStack_1d0 = 0;
  FUN_1405f75fe(&local_1d8,param_2);
  local_1e8 = 0;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  FUN_144a76d88(&local_1f8,param_2);
  FUN_140126e42(&local_208,param_2);
  lVar9 = *(longlong *)(local_c8 + 0x40);
  if (lVar9 != 0) {
    local_210 = (double)*(float *)(lVar9 + 0x14) * 65536.0;
    local_218 = (double)*(float *)(lVar9 + 0x10) * 65536.0;
    local_220 = (double)*(float *)(lVar9 + 0xc) * 65536.0;
    lVar9 = *(longlong *)(lVar9 + 0x30);
    if (lVar9 != 0) {
      piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar11 = (int *)(param_2 + 0x3c);
      }
      if (0 < *piVar11) {
        iVar13 = 0;
        do {
          fVar1 = *local_130;
          fVar2 = *local_148;
          fVar3 = *local_160;
          fVar4 = *local_178;
          fVar5 = *local_190;
          fVar6 = *local_1a8;
          fVar7 = *local_1c0[0];
          uVar8 = *local_1d8;
          if (*local_1f8 == 0) {
            local_244 = *local_118[0];
            local_240 = *local_100;
            local_23c = *local_e8;
            local_1f8 = local_1f8 + local_1e8;
            local_1d8 = local_1d8 + local_1c8;
            local_1c0[0] = local_1c0[0] + local_1b0;
            local_1a8 = local_1a8 + local_198;
            local_190 = local_190 + local_180;
            local_178 = local_178 + local_168;
            local_160 = local_160 + local_150;
            local_148 = local_148 + local_138;
            local_130 = local_130 + local_120;
            local_118[0] = local_118[0] + local_108;
            local_100 = local_100 + local_f0;
            local_e8 = local_e8 + local_d8;
            FUN_144b38fb2(&local_220,local_238,&local_244);
            local_250 = (double)fVar1;
            local_258 = (double)fVar2;
            local_260 = (double)fVar3;
            local_268 = (double)fVar4;
            local_270 = (double)fVar5;
            local_278 = (double)fVar6;
            local_280 = (double)fVar7;
            local_288 = &local_268;
            local_298 = local_238;
            local_290 = &local_280;
            bVar10 = FUN_143a5ffa8(param_1,lVar9,local_c8,uVar8);
          }
          else {
            bVar10 = 0;
            local_1f8 = local_1f8 + local_1e8;
            local_1d8 = local_1d8 + local_1c8;
            local_1c0[0] = local_1c0[0] + local_1b0;
            local_1a8 = local_1a8 + local_198;
            local_190 = local_190 + local_180;
            local_178 = local_178 + local_168;
            local_160 = local_160 + local_150;
            local_148 = local_148 + local_138;
            local_130 = local_130 + local_120;
            local_118[0] = local_118[0] + local_108;
            local_100 = local_100 + local_f0;
            local_e8 = local_e8 + local_d8;
          }
          piVar11 = local_208 + local_200;
          *local_208 = -(uint)bVar10;
          iVar13 = iVar13 + 1;
          piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
          if (*param_2 != '\0') {
            piVar12 = (int *)(param_2 + 0x3c);
          }
          local_208 = piVar11;
        } while (iVar13 < *piVar12);
      }
      goto LAB_14818fa77;
    }
  }
  piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar11 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar13 = 0;
    do {
      piVar11 = local_208 + local_200;
      *local_208 = 0;
      iVar13 = iVar13 + 1;
      piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar12 = (int *)(param_2 + 0x3c);
      }
      local_208 = piVar11;
    } while (iVar13 < *piVar12);
  }
LAB_14818fa77:
  if ((local_c0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14818fae2 FUN_14818fae2 body=148 status=ok
// SIG undefined FUN_14818fae2(void)

void FUN_14818fae2(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14818fb76 FUN_14818fb76 body=125 status=ok
// SIG undefined FUN_14818fb76(void)

void FUN_14818fb76(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14818fae2(local_28,param_1);
  FUN_144a76cd4(local_38,param_1);
  if ((*(longlong *)(local_20 + 0x40) == 0) || (*(longlong *)(local_20 + 8) == 0)) {
    *local_38[0] = 0;
  }
  else {
    *local_38[0] = *(undefined4 *)(*(longlong *)(local_20 + 8) + 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818fbf4 FUN_14818fbf4 body=489 status=ok
// SIG undefined FUN_14818fbf4(void)

void FUN_14818fbf4(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_f8 [36];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  int *local_98 [2];
  undefined4 *local_88 [2];
  int local_78;
  undefined4 *local_70;
  int local_60;
  undefined4 *local_58;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14818fae2(local_40,param_1);
  FUN_1405f76c0(local_88,param_1);
  FUN_140126e42(local_98,param_1);
  lVar1 = *(longlong *)(local_38 + 0x40);
  if ((lVar1 == 0) || (*(longlong *)(local_38 + 8) == 0)) {
    *local_98[0] = 0;
  }
  else {
    local_cc = *local_58;
    local_d0 = *local_70;
    local_d4 = *local_88[0];
    local_a0 = (double)*(float *)(lVar1 + 0x14) * 65536.0;
    local_a8 = (double)*(float *)(lVar1 + 0x10) * 65536.0;
    local_b0 = (double)*(float *)(lVar1 + 0xc) * 65536.0;
    local_88[0] = local_88[0] + local_78;
    local_70 = local_70 + local_60;
    local_58 = local_58 + local_48;
    FUN_144b38fb2(&local_b0,&local_c8);
    lVar1 = *(longlong *)(local_38 + 8);
    iVar2 = 0;
    iVar3 = 0;
    if ((double)*(float *)(lVar1 + 0xa0) <= local_c8) {
      iVar3 = iVar2;
      if (((((double)*(float *)(lVar1 + 0xa4) <= local_c0) &&
           ((double)*(float *)(lVar1 + 0xa8) <= local_b8)) &&
          (local_c8 <= (double)*(float *)(lVar1 + 0xac))) &&
         (local_c0 <= (double)*(float *)(lVar1 + 0xb0))) {
        iVar3 = ((double)*(float *)(lVar1 + 0xb4) < local_b8) - 1;
      }
    }
    *local_98[0] = iVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818fdde FUN_14818fdde body=61 status=ok
// SIG undefined FUN_14818fdde(void)

void FUN_14818fdde(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_14819d9aa(param_1);
    return;
  }
  FUN_145aa5a03(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14818fe46 FUN_14818fe46 body=410 status=ok
// SIG undefined FUN_14818fe46(void)

longlong * FUN_14818fe46(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_1[4];
  if (lVar7 == 0) {
    lVar7 = *param_1;
    puVar1 = (ulonglong *)(lVar7 + 0x70);
    uVar6 = *(longlong *)(lVar7 + 0x70) + 3U & 0xfffffffffffffffc;
    uVar8 = uVar6 + 0x380;
    if (*(ulonglong *)(lVar7 + 0x78) < uVar8) {
      FUN_140023dd8(puVar1,900);
      uVar6 = *puVar1 + 3 & 0xfffffffffffffffc;
      uVar8 = uVar6 + 0x380;
    }
    *puVar1 = uVar8;
    param_1[5] = uVar6;
    *(undefined4 *)(param_1 + 6) = 0;
    local_58 = &local_29;
    local_29 = 0;
    local_38 = L"NiagaraIndirectBuffer";
    uStack_48 = 0x4189;
    uVar9 = 0x20;
    if (DAT_14ca84e48 < 0x20) {
      uVar9 = DAT_14ca84e48;
    }
    uStack_40 = 0;
    uStack_3c = 0;
    iVar10 = uVar9 + (uVar9 == 0);
    local_50 = CONCAT44(iVar10,iVar10);
    lVar7 = FUN_144738de6(*param_1 + 0x188,*param_1 + 0x70);
    param_1[4] = lVar7;
  }
  *(longlong *)(param_1[3] + 0x20) = lVar7;
  *(int *)(param_1[3] + 0x28) = (int)param_1[6] << 5;
  *param_2 = param_1[4];
  iVar10 = (int)param_1[6];
  *(int *)(param_2 + 1) = iVar10;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  uVar3 = *param_3;
  uStack_3c = *(undefined4 *)(*(longlong *)(param_1[3] + 0x90) + 0xa0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1[3] + 0x90) + 0x98);
  uStack_44 = (undefined4)uVar4;
  uStack_40 = (undefined4)((ulonglong)uVar4 >> 0x20);
  lVar7 = param_1[5];
  *(int *)(param_1 + 6) = iVar10 + 1;
  lVar5 = (longlong)iVar10 * 0x1c;
  local_50._0_4_ = (undefined4)uVar3;
  local_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  puVar2 = (undefined4 *)(lVar7 + lVar5);
  *puVar2 = (undefined4)local_50;
  puVar2[1] = local_50._4_4_;
  puVar2[2] = uStack_48;
  puVar2[3] = uStack_44;
  *(ulonglong *)(lVar7 + 0x10 + lVar5) = CONCAT44(uStack_3c,uStack_40);
  *(int *)(lVar7 + 0x18 + lVar5) = iVar10;
  local_50 = uVar3;
  if ((int)param_1[6] == 0x20) {
    FUN_143a604c0(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14818ffe2 FUN_14818ffe2 body=212 status=ok
// SIG undefined FUN_14818ffe2(void)

undefined8 * FUN_14818ffe2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 == (undefined8 *)0x0) {
    lVar2 = *param_1;
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 0xc;
    if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(lVar2 + 0x70),0x70);
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    *(undefined8 **)(lVar2 + 0x70) = puVar3;
    *puVar4 = &PTR_FUN_14addd2a8;
    puVar3 = puVar4 + 2;
    puVar4[2] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    iVar1 = *(int *)(lVar2 + 0xa0);
    *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
    }
    *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
    param_1[9] = (longlong)puVar3;
  }
  return puVar3;
}



// FUNCTION 1481900b6 FUN_1481900b6 body=53 status=ok
// SIG undefined FUN_1481900b6(void)

void FUN_1481900b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481900ec FUN_1481900ec body=123 status=ok
// SIG undefined FUN_1481900ec(void)

void FUN_1481900ec(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,*(undefined8 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0x78))(param_1,&local_34,*(undefined8 *)(param_2 + 0x10));
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(undefined4 *)(lVar1 + 0x18) = local_2c;
  *(undefined8 *)(lVar1 + 0x10) = local_34;
  *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x1c) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148190168 FUN_148190168 body=1 status=ok
// SIG undefined FUN_148190168(void)

void FUN_148190168(void)

{
  return;
}



// FUNCTION 14819016a FUN_14819016a body=211 status=ok
// SIG undefined FUN_14819016a(void)

undefined4 FUN_14819016a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((((((cVar1 == '\0') || (*(char *)(param_2 + 0x38) != *(char *)(param_1 + 0x38))) ||
        (*(int *)(param_2 + 0x3c) != *(int *)(param_1 + 0x3c))) ||
       ((*(int *)(param_2 + 0x40) != *(int *)(param_1 + 0x40) ||
        (*(int *)(param_2 + 0x44) != *(int *)(param_1 + 0x44))))) ||
      ((1e-08 < ABS(*(float *)(param_2 + 0x48) - *(float *)(param_1 + 0x48)) ||
       ((9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x58) - *(double *)(param_1 + 0x58)) ||
        (9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x60) - *(double *)(param_1 + 0x60)))))))
      ) || ((9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x68) - *(double *)(param_1 + 0x68))
            || (*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x50))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x4c) >> 8),
                     *(int *)(param_2 + 0x4c) == *(int *)(param_1 + 0x4c));
  }
  return uVar2;
}



// FUNCTION 14819023e FUN_14819023e body=80 status=ok
// SIG undefined FUN_14819023e(void)

undefined8 FUN_14819023e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 0x60) = uVar2;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 14819028e FUN_14819028e body=129 status=ok
// SIG undefined FUN_14819028e(void)

undefined4 FUN_14819028e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((((cVar1 == '\0') || (*(char *)(param_2 + 0x38) != *(char *)(param_1 + 0x38))) ||
      (*(int *)(param_2 + 0x3c) != *(int *)(param_1 + 0x3c))) ||
     (((*(int *)(param_2 + 0x40) != *(int *)(param_1 + 0x40) ||
       (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x48))) ||
      ((*(int *)(param_2 + 0x44) != *(int *)(param_1 + 0x44) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x50) - *(double *)(param_1 + 0x50))))))))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x44) >> 8),
                     ABS(*(double *)(param_2 + 0x58) - *(double *)(param_1 + 0x58)) <=
                     9.999999747378752e-05);
  }
  return uVar2;
}



// FUNCTION 148190310 FUN_148190310 body=66 status=ok
// SIG undefined FUN_148190310(void)

undefined8 FUN_148190310(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_2 + 0x44) = uVar1;
    *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 0x58) = uVar2;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 148190352 FUN_148190352 body=218 status=ok
// SIG undefined FUN_148190352(void)

void FUN_148190352(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14819042e(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819042e FUN_14819042e body=125 status=ok
// SIG undefined FUN_14819042e(void)

void FUN_14819042e(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  lVar2 = FUN_1404101e2((undefined8 *)(param_1 + 0x48));
  if (lVar2 != 0) {
    FUN_147a91426(lVar2 + 0x20f,param_1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x60);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1481904c6 FUN_1481904c6 body=417 status=ok
// SIG undefined FUN_1481904c6(void)

void FUN_1481904c6(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar7 = *(ulonglong *)(param_2 + 8);
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  uVar8 = param_2 + 8 + ((longlong)uVar7 >> 0x18);
  if ((uVar7 & 1) == 0) {
    uVar8 = uVar7;
  }
  uVar7 = param_2 + 0x18 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar7 = uVar2;
  }
  plVar3 = (longlong *)FUN_144a7eae6();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  cVar1 = *(char *)(lVar4 + 0xef);
  if (cVar1 == '\0') {
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar4 = 0;
      do {
        iVar5 = *(int *)(uVar7 + lVar4 * 4);
        *(undefined4 *)(param_1 + lVar4 * 8) = *(undefined4 *)(uVar8 + lVar4 * 4);
        *(int *)(param_1 + 4 + lVar4 * 8) = iVar5 + param_3;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_2 + 0x10));
    }
  }
  else if (cVar1 == '\x01') {
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar4 = 0;
      do {
        iVar5 = *(int *)(uVar7 + lVar4 * 4) + param_3;
        uVar6 = 0;
        if (iVar5 < 0x1000000) {
          fVar9 = *(float *)(uVar8 + lVar4 * 4);
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          uVar6 = (int)(fVar9 * 255.0) & 0xffU | iVar5 * 0x100;
        }
        *(uint *)(param_1 + lVar4 * 4) = uVar6;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_2 + 0x10));
    }
  }
  else if (cVar1 == '\x02') {
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar4 = 0;
      do {
        iVar5 = *(int *)(uVar7 + lVar4 * 4) + param_3;
        uVar6 = 0;
        if (iVar5 < 0x800000) {
          fVar9 = *(float *)(uVar8 + lVar4 * 4);
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          if (fVar9 <= 0.0) {
            fVar9 = 0.0;
          }
          uVar6 = (int)(fVar9 * 511.0) & 0x1ffU | iVar5 * 0x200;
        }
        *(uint *)(param_1 + lVar4 * 4) = uVar6;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_2 + 0x10));
    }
  }
  else {
    FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterfaceSkeletalMesh.cpp"
                  ,0xd4,L"GpuUniformSamplingFormat %d is invalid");
  }
  return;
}



// FUNCTION 148190668 FUN_148190668 body=243 status=ok
// SIG undefined FUN_148190668(void)

float FUN_148190668(longlong param_1,longlong *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x30) + 0x50);
  if (lVar5 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0xa8);
    *(undefined4 *)(param_2 + 1) = 0;
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
    if (1 < (int)uVar2) {
      if (uVar3 != uVar2) {
        FUN_14482f6fa(param_2,(ulonglong)uVar2);
      }
      fVar7 = 0.0;
      uVar6 = 0;
      do {
        fVar1 = *(float *)(*(longlong *)(lVar5 + 0x4c0) + 0x58 +
                          (longlong)
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xa0) + uVar6 * 4)
                          * 0x78);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_14475e4ac(param_2,iVar4);
        }
        *(float *)(*param_2 + (longlong)iVar4 * 4) = fVar1;
        fVar7 = fVar7 + fVar1;
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      return fVar7;
    }
  }
  if (uVar3 != 0) {
    FUN_14482f6fa(param_2,0);
  }
  return 0.0;
}



// FUNCTION 14819075c FUN_14819075c body=518 status=ok
// SIG undefined FUN_14819075c(void)

undefined8 *
FUN_14819075c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,undefined2 param_6)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  cVar4 = FUN_1480d0c02(param_3,param_4,param_5);
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    SRWLock = (PSRWLOCK)(param_1 + 0x60);
    AcquireSRWLockShared(SRWLock);
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x68);
      lVar6 = (longlong)*(int *)(param_1 + 0x70) << 4;
      do {
        cVar4 = FUN_1480d0c7e(*puVar7,param_3,param_4,param_5);
        if (cVar4 != '\0') {
          if (puVar7 != (undefined8 *)0x0) {
            FUN_1408e0fde(param_2,param_6,puVar7,1);
            ReleaseSRWLockShared(SRWLock);
            return param_2;
          }
          break;
        }
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0x68);
      lVar6 = (longlong)*(int *)(param_1 + 0x70) << 4;
      do {
        cVar4 = FUN_1480d0c7e(*puVar7,param_3,param_4,param_5);
        if (cVar4 != '\0') {
          if (puVar7 != (undefined8 *)0x0) {
            FUN_1408e0fde(param_2,param_6,puVar7,1);
            goto LAB_148190947;
          }
          break;
        }
        puVar7 = puVar7 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14addd490;
    FUN_1480d0b72(plVar5 + 2,*param_3,param_4,param_5);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
      FUN_14819e88e((longlong *)(param_1 + 0x68),iVar3);
    }
    lVar6 = *(longlong *)(param_1 + 0x68);
    lVar8 = (longlong)iVar3 * 0x10;
    *(longlong **)(lVar6 + lVar8) = plVar5 + 2;
    *(longlong **)(lVar6 + 8 + lVar8) = plVar5;
    FUN_1408e0fde(param_2,param_6,lVar6 + lVar8,1);
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
LAB_148190947:
    ReleaseSRWLockExclusive(SRWLock);
  }
  return param_2;
}



// FUNCTION 148190962 FUN_148190962 body=602 status=ok
// SIG undefined FUN_148190962(void)

undefined2 *
FUN_148190962(longlong param_1,undefined2 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined2 param_5)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = param_4;
  cVar6 = FUN_148190bbe(param_3,param_4);
  if (cVar6 == '\0') {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockShared(SRWLock);
  plVar2 = (longlong *)(param_1 + 0x80);
  local_60 = param_3;
  local_58 = &local_4c;
  plVar7 = (longlong *)FUN_143a61ec4(plVar2);
  if (plVar7 == (longlong *)0x0) {
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    local_70 = param_3;
    local_68 = &local_4c;
    plVar7 = (longlong *)FUN_143a61ec4(plVar2);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14addd4b0;
      uVar5 = *param_3;
      *(undefined4 *)(plVar7 + 2) = local_4c;
      *(undefined8 *)((longlong)plVar7 + 0x14) = uVar5;
      plVar7[4] = 0;
      *(undefined4 *)(plVar7 + 5) = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      plVar9 = plVar7 + 2;
      iVar3 = *(int *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
        FUN_14819e966(plVar2,iVar3);
      }
      lVar8 = *plVar2;
      *(longlong **)(lVar8 + (longlong)iVar3 * 0x10) = plVar9;
      *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = plVar7;
      *param_2 = param_5;
      *(longlong **)(param_2 + 4) = plVar9;
      *(longlong **)(param_2 + 8) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar9 = *(longlong **)(param_2 + 4);
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_14819104e(plVar9,*param_2);
      }
      if (plVar7 != (longlong *)0x0) {
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
      }
    }
    else {
      *param_2 = param_5;
      lVar8 = *plVar7;
      *(longlong *)(param_2 + 4) = lVar8;
      lVar4 = plVar7[1];
      *(longlong *)(param_2 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        lVar8 = *(longlong *)(param_2 + 4);
      }
      if (lVar8 != 0) {
        FUN_14819104e(lVar8,*param_2);
      }
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  else {
    *param_2 = param_5;
    lVar8 = *plVar7;
    *(longlong *)(param_2 + 4) = lVar8;
    lVar4 = plVar7[1];
    *(longlong *)(param_2 + 8) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar8 = *(longlong *)(param_2 + 4);
    }
    if (lVar8 != 0) {
      FUN_14819104e(lVar8,*param_2);
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148190bbe FUN_148190bbe body=105 status=ok
// SIG undefined FUN_148190bbe(void)

undefined8 FUN_148190bbe(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce();
  if ((((plVar1 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*plVar1 + 800))(plVar1,param_2), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0xd0) & 4) != 0)) &&
     ((plVar1 = (longlong *)(**(code **)(*plVar1 + 0x388))(plVar1),
      -1 < (int)param_2 && plVar1 != (longlong *)0x0 && ((int)param_2 < (int)plVar1[1])))) {
    return CONCAT71((int7)((ulonglong)*plVar1 >> 8),
                    *(longlong *)(*plVar1 + (ulonglong)param_2 * 8) != 0);
  }
  return 0;
}



// FUNCTION 148190c28 FUN_148190c28 body=479 status=ok
// SIG undefined FUN_148190c28(void)

undefined4 FUN_148190c28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if ((cVar2 != '\0') && (*(char *)(param_2 + 0x38) == *(char *)(param_1 + 0x38))) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((((*(longlong *)(param_2 + 0x40) == lVar1) &&
          (cVar2 = FUN_144a7afa6(param_2 + 0x50,param_1 + 0x50), cVar2 != '\0')) &&
         (*(longlong *)(param_1 + 0x88) == *(longlong *)(param_2 + 0x88))) &&
        ((*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90) &&
         (*(int *)(param_2 + 0x78) == *(int *)(param_1 + 0x78))))) &&
       (cVar2 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x70)),
       cVar2 != '\0')) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (((((*(longlong *)(param_2 + 0x80) == lVar1) &&
            (*(char *)(param_2 + 0xa8) == *(char *)(param_1 + 0xa8))) &&
           ((*(int *)(param_2 + 0xb8) == *(int *)(param_1 + 0xb8) &&
            (((cVar2 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_1 + 0xb0)
                                    ), cVar2 != '\0' &&
              (*(int *)(param_2 + 0xc0) == *(int *)(param_1 + 0xc0))) &&
             (*(int *)(param_2 + 0xd0) == *(int *)(param_1 + 0xd0))))))) &&
          ((cVar2 = FUN_14000b9e1(*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_1 + 200)),
           cVar2 != '\0' && (*(int *)(param_2 + 0xe0) == *(int *)(param_1 + 0xe0))))) &&
         ((cVar2 = FUN_14000b9e1(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_1 + 0xd8)),
          cVar2 != '\0' &&
          (((((*(byte *)(param_1 + 0xf0) ^ *(byte *)(param_2 + 0xf0)) & 1) == 0 &&
            (*(longlong *)(param_2 + 0xe8) == *(longlong *)(param_1 + 0xe8))) &&
           ((*(int *)(param_2 + 0xf4) == *(int *)(param_1 + 0xf4) &&
            (*(char *)(param_2 + 0xf8) == *(char *)(param_1 + 0xf8))))))))) {
        return CONCAT31((int3)((uint)*(int *)(param_2 + 0xf4) >> 8),
                        *(char *)(param_2 + 0xf9) == *(char *)(param_1 + 0xf9));
      }
    }
  }
  return 0;
}



// FUNCTION 148190e0a FUN_148190e0a body=137 status=ok
// SIG undefined FUN_148190e0a(void)

void FUN_148190e0a(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148190e94 FUN_148190e94 body=440 status=ok
// SIG undefined FUN_148190e94(void)

void FUN_148190e94(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar5 = FUN_1404101e2(puVar1);
  if (lVar5 != 0) {
    FUN_147a91426(lVar5 + 0x20f,param_1);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x80) = param_2;
    if (param_2 != 0) goto LAB_148190eef;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x80) = param_2;
LAB_148190eef:
    lVar5 = *(longlong *)(param_2 + 0xa8);
    if (lVar5 != 0) {
      FUN_1400bbfae(&local_48,lVar5);
      *(undefined4 *)(param_1 + 0x50) = local_48;
      *(undefined4 *)(param_1 + 0x54) = uStack_44;
      *(undefined4 *)(param_1 + 0x58) = uStack_40;
      *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
      if ((undefined4 *)(param_1 + 0x50) == &local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x60) = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x68) = local_30;
        *(undefined4 *)(param_1 + 0x6c) = local_2c;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 != '\0') {
        uVar2 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0x48) = 0;
          goto LAB_148190fbf;
        }
      }
      FUN_14485c47a(puVar1,lVar5);
      goto LAB_148190fbf;
    }
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar3 = *(undefined2 **)(param_1 + 0x60);
  if (puVar3 != (undefined2 *)0x0) {
    *puVar3 = 0;
  }
LAB_148190fbf:
  FUN_140ca8d0a(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819104e FUN_14819104e body=216 status=ok
// SIG undefined FUN_14819104e(void)

void FUN_14819104e(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((param_2 >> 8 & 1) != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x18);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
      *puVar5 = &PTR_FUN_14addcbd0;
      *(undefined4 *)(puVar5 + 2) = 8;
      puVar5[3] = &PTR_FUN_14a3d4750;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      puVar6 = puVar3;
      if ((puVar3 != puVar5) &&
         (*(undefined8 **)(param_1 + 0x10) = puVar5, puVar6 = puVar5, puVar3 != (undefined8 *)0x0))
      {
        (**(code **)*puVar3)(puVar3,1);
        puVar6 = *(undefined8 **)(param_1 + 0x10);
      }
      cVar4 = FUN_143a69a9e(puVar6,param_1);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if (cVar4 != '\0') {
        FUN_140308182(puVar3,0);
        return;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014819111e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148191126 FUN_148191126 body=77 status=ok
// SIG undefined FUN_148191126(void)

undefined8 FUN_148191126(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 1);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *param_1;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x388))(plVar2);
    if ((plVar2 != (longlong *)0x0 && -1 < (longlong)iVar1) && (iVar1 < (int)plVar2[1])) {
      return *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 14819117e FUN_14819117e body=103 status=ok
// SIG undefined FUN_14819117e(void)

void FUN_14819117e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481911e6 FUN_1481911e6 body=99 status=ok
// SIG undefined FUN_1481911e6(void)

void FUN_1481911e6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148191250 FUN_148191250 body=753 status=ok
// SIG undefined FUN_148191250(void)

void FUN_148191250(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3d390) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addde40;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_148191542;
  }
  else if (lVar1 == DAT_14cb3d398) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addde40;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14819169e;
  }
  else if (lVar1 == DAT_14cb3d3a0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addde40;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14819173c;
  }
  else {
    if (lVar1 != DAT_14cb3d3a8) goto LAB_14819131a;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar4 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14addde40;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    pcVar2 = FUN_14819185a;
  }
  puVar4[4] = pcVar2;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_14819131a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148191542 FUN_148191542 body=346 status=ok
// SIG undefined FUN_148191542(void)

void FUN_148191542(undefined8 param_1,char *param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  int local_50;
  int *local_48;
  int local_40;
  byte *local_38;
  undefined8 uStack_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148191c5e(local_20);
  local_38 = (byte *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a98d08(&local_38,param_2);
  FUN_144a76cd4(&local_48,param_2);
  FUN_144a76cd4(&local_58,param_2);
  FUN_144a76cd4(&local_68);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar7 = 0;
    do {
      pbVar1 = local_38 + (longlong)local_28 * 4;
      bVar4 = *local_38;
      iVar8 = *(int *)(local_18 + 0x10) >> (bVar4 & 0x1f);
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      piVar5 = local_48 + local_40;
      *local_48 = iVar8;
      iVar8 = *(int *)(local_18 + 0x14) >> (bVar4 & 0x1f);
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      piVar2 = local_58 + local_50;
      *local_58 = iVar8;
      iVar8 = *(int *)(local_18 + 0x18) >> (bVar4 & 0x1f);
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      piVar3 = local_68 + local_60;
      *local_68 = iVar8;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_68 = piVar3;
      local_58 = piVar2;
      local_48 = piVar5;
      local_38 = pbVar1;
    } while (iVar7 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819169e FUN_14819169e body=157 status=ok
// SIG undefined FUN_14819169e(void)

void FUN_14819169e(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148191c5e(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1c);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819173c FUN_14819173c body=285 status=ok
// SIG undefined FUN_14819173c(void)

void FUN_14819173c(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148191c5e(local_50);
  iVar3 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98dce(&local_68,param_2);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  FUN_140126e42(&local_98,param_2);
  *(undefined4 *)(local_48 + 0x5c) = *local_68;
  *(undefined4 *)(local_48 + 0x58) = *local_88;
  piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar2 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar2) {
    do {
      puVar1 = local_98 + local_90;
      *local_98 = 0xffffffff;
      iVar3 = iVar3 + 1;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar2 = (int *)(param_2 + 0x3c);
      }
      local_98 = puVar1;
    } while (iVar3 < *piVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
  local_88 = local_88 + local_78;
  local_68 = local_68 + local_58;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819185a FUN_14819185a body=157 status=ok
// SIG undefined FUN_14819185a(void)

void FUN_14819185a(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148191c5e(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x60);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481918fe FUN_1481918fe body=94 status=ok
// SIG undefined FUN_1481918fe(void)

undefined1 FUN_1481918fe(longlong param_1,undefined8 *param_2,longlong param_3)

{
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  FUN_14819195c(param_2);
  FUN_1404e5848(param_2 + 4,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 14819195c FUN_14819195c body=109 status=ok
// SIG undefined FUN_14819195c(void)

undefined8 * FUN_14819195c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 3) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff00000000;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_144830b78(param_1 + 7,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x41f00000;
  return param_1;
}



// FUNCTION 1481919ca FUN_1481919ca body=118 status=ok
// SIG undefined FUN_1481919ca(void)

ulonglong FUN_1481919ca(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148191a42 FUN_148191a42 body=97 status=ok
// SIG undefined FUN_148191a42(void)

undefined4 FUN_148191a42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (((*(longlong *)(param_2 + 0x38) == lVar1) &&
        (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) &&
       (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(char *)(param_2 + 0x60) == *(char *)(param_1 + 0x60));
    }
  }
  return 0;
}



// FUNCTION 148191ac6 FUN_148191ac6 body=407 status=ok
// SIG undefined FUN_148191ac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148191ac6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar14;
  ulonglong uVar13;
  
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar14 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar14 = *(longlong *)(lVar4 + 0x50);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(lVar4 + 0x58) - 1U &
                               (int)lVar11 + (int)((ulonglong)lVar11 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar14 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar10 * 0x30;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar10 * 0x30) == lVar11)
        goto LAB_148191b24;
        iVar10 = *(int *)(lVar14 + 0x28);
      } while (iVar10 != -1);
    }
  }
  lVar14 = 0;
LAB_148191b24:
  uVar12 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar13 = (ulonglong)uVar12;
  FUN_1481a1588();
  lVar4 = *(longlong *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x50) = uVar12 + _DAT_14cb3d75c;
  *(undefined8 *)(lVar4 + uVar13) = DAT_14c9c0de0;
  lVar11 = *(longlong *)(DAT_14ca94dc0 + 0x10);
  *(longlong *)(lVar4 + 8 + uVar13) = lVar11;
  lVar9 = *(longlong *)(DAT_14ca94db8 + 0x10);
  *(longlong *)(lVar4 + 0x10 + uVar13) = lVar9;
  lVar8 = *(longlong *)(DAT_14ca94db8 + 0x10);
  *(longlong *)(lVar4 + 0x18 + uVar13) = lVar8;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + uVar13);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar4 + 0x30 + uVar13);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar4 + 0x40 + uVar13) = DAT_14c9a5298;
  *(undefined4 *)(lVar4 + 0x48 + uVar13) = DAT_14c9a52a0;
  *(undefined8 *)(lVar4 + 0x4c + uVar13) = 0;
  if ((lVar14 != 0) && (lVar5 = *(longlong *)(lVar14 + 8), lVar5 != 0)) {
    lVar1 = lVar4 + uVar13;
    lVar2 = lVar4 + uVar13;
    lVar6 = *(longlong *)(lVar5 + 0xa8);
    lVar7 = *(longlong *)(lVar5 + 0xb0);
    if (*(longlong *)(lVar5 + 0xa0) != 0) {
      lVar11 = *(longlong *)(lVar5 + 0xa0);
    }
    *(longlong *)(lVar1 + 8) = lVar11;
    if (lVar6 != 0) {
      lVar9 = lVar6;
    }
    *(longlong *)(lVar1 + 0x10) = lVar9;
    if (lVar7 != 0) {
      lVar8 = lVar7;
    }
    *(longlong *)(lVar1 + 0x18) = lVar8;
    FUN_14013e790(*(undefined8 *)(lVar14 + 8),lVar2 + 0x20,lVar4 + 0x30 + uVar13);
    *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar14 + 0x18);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar14 + 0x10);
    *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(lVar14 + 0x1c);
    *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar14 + 0x20);
  }
  return;
}



// FUNCTION 148191c5e FUN_148191c5e body=148 status=ok
// SIG undefined FUN_148191c5e(void)

void FUN_148191c5e(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148191cf2 FUN_148191cf2 body=108 status=ok
// SIG undefined FUN_148191cf2(void)

undefined8 FUN_148191cf2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_1 + 0x60);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 148191d6a FUN_148191d6a body=537 status=ok
// SIG undefined FUN_148191d6a(void)

void FUN_148191d6a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3d3e0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d3e8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d3f0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d3f8) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d400) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d408) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d410) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d418) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d420) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d428) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d430) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d438) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d440) {
    if ((*(char *)(param_1 + 0x80) == '\x01') && (DAT_14cb3d470 == '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (lVar1 == DAT_14cb3d450) {
    pcVar2 = FUN_148192490;
  }
  else if (lVar1 == DAT_14cb3d458) {
    pcVar2 = FUN_1481924f4;
  }
  else {
    if (lVar1 != DAT_14cb3d448) goto LAB_148191e5c;
    pcVar2 = FUN_148192558;
  }
  FUN_1481923ec(local_30,param_1,pcVar2);
  FUN_144a450dc(param_4,local_30);
  FUN_1449db362(local_30);
LAB_148191e5c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481923ec FUN_1481923ec body=163 status=ok
// SIG undefined FUN_1481923ec(void)

longlong * FUN_1481923ec(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad81180;
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
  *puVar1 = &PTR_FUN_14addf650;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 148192490 FUN_148192490 body=98 status=ok
// SIG undefined FUN_148192490(void)

void FUN_148192490(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481938a0(local_68);
  FUN_144a928e2(local_58,local_60 + 0x70);
  FUN_14819351a(local_58,param_2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481924f4 FUN_1481924f4 body=99 status=ok
// SIG undefined FUN_1481924f4(void)

void FUN_1481924f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481938a0(local_68);
  FUN_144a928e2(local_58,local_60 + 0xf0);
  FUN_14819351a(local_58,param_2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148192558 FUN_148192558 body=212 status=ok
// SIG undefined FUN_148192558(void)

void FUN_148192558(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481938a0(local_30);
  FUN_144a76c20(&local_40,param_2);
  cVar2 = FUN_144729dda(local_28);
  uVar5 = 0;
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar5 = *(undefined4 *)(local_28 + 0x298);
    }
    else {
      uVar5 = FUN_147a27760(local_28 + 0x200);
    }
  }
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_40 + local_38;
      *local_40 = uVar5;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819262e FUN_14819262e body=156 status=ok
// SIG undefined FUN_14819262e(void)

ulonglong FUN_14819262e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  if ((param_2 == (longlong *)0x0) || (param_2[2] != *(longlong *)(param_1 + 0x10))) {
    uVar5 = 0;
  }
  else {
    param_2[7] = *(longlong *)(param_1 + 0x38);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar2;
    *(undefined4 *)(param_2 + 9) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x4c) = uVar4;
    FUN_144a787a6(param_2 + 10,param_1 + 0x50);
    param_2[0xc] = *(longlong *)(param_1 + 0x60);
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    FUN_1447a122a(param_2 + 0xe,param_1 + 0x70);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_1 + 0x80);
    *(undefined4 *)((longlong)param_2 + 0x84) = *(undefined4 *)(param_1 + 0x84);
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1481926ec FUN_1481926ec body=795 status=ok
// SIG undefined FUN_1481926ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481926ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  uVar13 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1481b3d80();
  *(uint *)(param_2 + 0x50) = DAT_14cb3d7e4 + uVar13;
  uVar3 = _DAT_14c846288;
  puVar14 = (undefined8 *)((ulonglong)uVar13 + *(longlong *)(param_2 + 0x38));
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar12 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar12 = *(longlong *)(lVar1 + 0x50);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar1 + 0x58) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar10 * 0x1a0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar10 * 0x1a0) == lVar2) {
          if ((undefined8 *)(lVar12 + 0x10) != (undefined8 *)0x0 && lVar12 != 0) {
            uVar3 = *(undefined8 *)(lVar12 + 0x10);
            uVar4 = *(undefined8 *)(lVar12 + 0x18);
            uVar5 = *(undefined8 *)(lVar12 + 0x20);
            uVar6 = *(undefined8 *)(lVar12 + 0x28);
            uVar7 = *(undefined8 *)(lVar12 + 0x30);
            uVar8 = *(undefined8 *)(lVar12 + 0x38);
            uVar9 = *(undefined8 *)(lVar12 + 0x48);
            puVar14[6] = *(undefined8 *)(lVar12 + 0x40);
            puVar14[7] = uVar9;
            puVar14[4] = uVar7;
            puVar14[5] = uVar8;
            puVar14[2] = uVar5;
            puVar14[3] = uVar6;
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
            uVar3 = *(undefined8 *)(lVar12 + 0x50);
            uVar4 = *(undefined8 *)(lVar12 + 0x58);
            uVar5 = *(undefined8 *)(lVar12 + 0x60);
            uVar6 = *(undefined8 *)(lVar12 + 0x68);
            uVar7 = *(undefined8 *)(lVar12 + 0x70);
            uVar8 = *(undefined8 *)(lVar12 + 0x78);
            uVar9 = *(undefined8 *)(lVar12 + 0x88);
            puVar14[0xe] = *(undefined8 *)(lVar12 + 0x80);
            puVar14[0xf] = uVar9;
            puVar14[0xc] = uVar7;
            puVar14[0xd] = uVar8;
            puVar14[10] = uVar5;
            puVar14[0xb] = uVar6;
            puVar14[8] = uVar3;
            puVar14[9] = uVar4;
            uVar3 = *(undefined8 *)(lVar12 + 0x98);
            uVar4 = *(undefined8 *)(lVar12 + 0xa0);
            uVar5 = *(undefined8 *)(lVar12 + 0xa8);
            uVar6 = *(undefined8 *)(lVar12 + 0xb0);
            uVar7 = *(undefined8 *)(lVar12 + 0xb8);
            uVar8 = *(undefined8 *)(lVar12 + 0xc0);
            uVar9 = *(undefined8 *)(lVar12 + 200);
            puVar14[0x10] = *(undefined8 *)(lVar12 + 0x90);
            puVar14[0x11] = uVar3;
            puVar14[0x12] = uVar4;
            puVar14[0x13] = uVar5;
            puVar14[0x14] = uVar6;
            puVar14[0x15] = uVar7;
            puVar14[0x16] = uVar8;
            puVar14[0x17] = uVar9;
            uVar3 = *(undefined8 *)(lVar12 + 0xd8);
            uVar4 = *(undefined8 *)(lVar12 + 0xe0);
            uVar5 = *(undefined8 *)(lVar12 + 0xe8);
            uVar6 = *(undefined8 *)(lVar12 + 0xf0);
            uVar7 = *(undefined8 *)(lVar12 + 0xf8);
            uVar8 = *(undefined8 *)(lVar12 + 0x100);
            uVar9 = *(undefined8 *)(lVar12 + 0x108);
            puVar14[0x18] = *(undefined8 *)(lVar12 + 0xd0);
            puVar14[0x19] = uVar3;
            puVar14[0x1a] = uVar4;
            puVar14[0x1b] = uVar5;
            puVar14[0x1c] = uVar6;
            puVar14[0x1d] = uVar7;
            puVar14[0x1e] = uVar8;
            puVar14[0x1f] = uVar9;
            uVar3 = *(undefined8 *)(lVar12 + 0x118);
            puVar14[0x20] = *(undefined8 *)(lVar12 + 0x110);
            puVar14[0x21] = uVar3;
            puVar14[0x22] = *(undefined8 *)(lVar12 + 0x120);
            *(undefined4 *)(puVar14 + 0x23) = *(undefined4 *)(lVar12 + 0x128);
            *(undefined4 *)((longlong)puVar14 + 0x11c) = *(undefined4 *)(lVar12 + 300);
            *(undefined4 *)(puVar14 + 0x24) = *(undefined4 *)(lVar12 + 0x130);
            *(undefined4 *)((longlong)puVar14 + 0x124) = *(undefined4 *)(lVar12 + 0x134);
            *(undefined4 *)(puVar14 + 0x25) = *(undefined4 *)(lVar12 + 0x138);
            puVar14[0x26] = *(undefined8 *)(lVar12 + 0x148);
            puVar14[0x27] = *(undefined8 *)(lVar12 + 0x160);
            puVar11 = (undefined8 *)(lVar12 + 0x178);
            goto LAB_148192838;
          }
          break;
        }
        iVar10 = *(int *)(lVar12 + 400);
      } while (iVar10 != -1);
    }
  }
  puVar14[6] = _DAT_14c846280;
  puVar14[7] = uVar3;
  uVar3 = _DAT_14c846278;
  puVar14[4] = _DAT_14c846270;
  puVar14[5] = uVar3;
  uVar3 = _DAT_14c846268;
  puVar14[2] = _DAT_14c846260;
  puVar14[3] = uVar3;
  uVar3 = DAT_14c846258;
  *puVar14 = _DAT_14c846250;
  puVar14[1] = uVar3;
  uVar3 = _DAT_14c846288;
  puVar14[0xe] = _DAT_14c846280;
  puVar14[0xf] = uVar3;
  uVar3 = _DAT_14c846278;
  puVar14[0xc] = _DAT_14c846270;
  puVar14[0xd] = uVar3;
  uVar3 = _DAT_14c846268;
  puVar14[10] = _DAT_14c846260;
  puVar14[0xb] = uVar3;
  uVar3 = DAT_14c846258;
  puVar14[8] = _DAT_14c846250;
  puVar14[9] = uVar3;
  uVar3 = DAT_14c846258;
  puVar14[0x10] = _DAT_14c846250;
  puVar14[0x11] = uVar3;
  uVar3 = _DAT_14c846268;
  puVar14[0x12] = _DAT_14c846260;
  puVar14[0x13] = uVar3;
  uVar3 = _DAT_14c846278;
  puVar14[0x14] = _DAT_14c846270;
  puVar14[0x15] = uVar3;
  uVar3 = _DAT_14c846288;
  puVar14[0x16] = _DAT_14c846280;
  puVar14[0x17] = uVar3;
  uVar3 = DAT_14c846258;
  puVar14[0x18] = _DAT_14c846250;
  puVar14[0x19] = uVar3;
  uVar3 = _DAT_14c846268;
  puVar14[0x1a] = _DAT_14c846260;
  puVar14[0x1b] = uVar3;
  uVar3 = _DAT_14c846278;
  puVar14[0x1c] = _DAT_14c846270;
  puVar14[0x1d] = uVar3;
  uVar3 = _DAT_14c846288;
  puVar14[0x1e] = _DAT_14c846280;
  puVar14[0x1f] = uVar3;
  uVar3 = _DAT_14c846348;
  puVar14[0x20] = ram0x00014c846340;
  puVar14[0x21] = uVar3;
  uVar3 = DAT_14c846364;
  *(undefined4 *)(puVar14 + 0x23) = DAT_14c84636c;
  puVar14[0x22] = uVar3;
  *(undefined8 *)((longlong)puVar14 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x124) = 0;
  uVar3 = DAT_14cb42830;
  puVar11 = &DAT_14cb42830;
  puVar14[0x26] = DAT_14cb42830;
  puVar14[0x27] = uVar3;
LAB_148192838:
  puVar14[0x28] = *puVar11;
  return;
}



// FUNCTION 148192a08 FUN_148192a08 body=96 status=ok
// SIG undefined FUN_148192a08(void)

undefined4 FUN_148192a08(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1481192e4();
  if ((((cVar1 != '\0') && (cVar1 = FUN_144a7afa6(param_2 + 0x40,param_1 + 0x40), cVar1 != '\0')) &&
      (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60))) &&
     ((*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68) &&
      (*(char *)(param_2 + 0x80) == *(char *)(param_1 + 0x80))))) {
    return CONCAT31((int3)((uint)*(int *)(param_2 + 0x84) >> 8),
                    *(int *)(param_2 + 0x84) == *(int *)(param_1 + 0x84));
  }
  return 0;
}



// FUNCTION 148192a6e FUN_148192a6e body=286 status=ok
// SIG undefined FUN_148192a6e(void)

undefined8 FUN_148192a6e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148192b8e(param_2);
  local_38 = &local_48;
  local_50 = *(undefined8 *)(param_3 + 0x100);
  local_40 = &local_50;
  local_48 = param_2;
  FUN_1481b464e(param_1 + 0x88,local_2c);
  *local_48 = 0;
  uVar4 = DAT_14c8463e8;
  local_48[0xc] = DAT_14c8463e0;
  local_48[0xd] = uVar4;
  uVar4 = DAT_14c8463d8;
  local_48[10] = DAT_14c8463d0;
  local_48[0xb] = uVar4;
  puVar6 = &DAT_14c846400;
  puVar7 = local_48 + 0xe;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846400;
  puVar7 = local_48 + 0x1e;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846480;
  puVar7 = local_48 + 0x2e;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_48[0x3f] = DAT_14c8462d0;
  uVar3 = DAT_14c8462c8._4_4_;
  uVar2 = (undefined4)DAT_14c8462c8;
  uVar1 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(local_48 + 0x3d) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)local_48 + 0x1ec) = uVar1;
  *(undefined4 *)(local_48 + 0x3e) = uVar2;
  *(undefined4 *)((longlong)local_48 + 500) = uVar3;
  *(undefined1 *)(local_48 + 0x55) = 0;
  *(undefined4 *)((longlong)local_48 + 0x2ac) = 0xffffffff;
  FUN_148192ca6(local_48 + 0x4d);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148192b8e FUN_148192b8e body=279 status=ok
// SIG undefined FUN_148192b8e(void)

undefined8 * FUN_148192b8e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = FUN_144830b78(param_1 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 5) = uVar2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0x3ff0000000000000;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x39] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3a] = DAT_14c8464e0;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x221) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x239) = 0;
  *(undefined8 *)((longlong)param_1 + 0x251) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x55) = 0;
  return param_1;
}



// FUNCTION 148192ca6 FUN_148192ca6 body=96 status=ok
// SIG undefined FUN_148192ca6(void)

void FUN_148192ca6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a8aa0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1447a8aa0(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1401017f4(param_1 + 0x20,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff00000000;
  return;
}



// FUNCTION 148192d06 FUN_148192d06 body=58 status=ok
// SIG undefined FUN_148192d06(void)

void FUN_148192d06(longlong param_1)

{
  FUN_148195d96(param_1 + 0x268);
  FUN_14179b8cc(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148192d40 FUN_148192d40 body=816 status=ok
// SIG undefined FUN_148192d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148192d40(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = param_2;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1447a8aa0(param_1,param_3);
  }
  local_100 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != param_3) {
    FUN_1447a8aa0(local_100,param_3);
  }
  plVar1 = param_1 + 4;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != param_3) {
    FUN_1401017f4(plVar1,param_3);
  }
  *(int *)((longlong)param_1 + 0x3c) = param_3 + -1;
  fVar17 = (float)FUN_147a27760(local_108);
  fVar22 = 0.0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    fVar22 = (1.0 / (float)*(int *)((longlong)param_1 + 0x3c)) * fVar17;
  }
  *(float *)(param_1 + 6) = fVar17;
  *(float *)((longlong)param_1 + 0x34) = fVar22;
  *(float *)(param_1 + 7) = 1.0 / fVar22;
  auVar13 = _DAT_149934d80;
  if (param_3 != 0) {
    local_f0 = local_108 + 0x48;
    local_f8 = local_108 + 0x30;
    lVar2 = local_108 + 0x18;
    iVar15 = 0;
    do {
      local_e8 = 0;
      uVar18 = FUN_140753fde(local_f0,(float)iVar15 * *(float *)((longlong)param_1 + 0x34),&local_e8
                            );
      FUN_140703ce0(local_108,&local_e8,uVar18,&DAT_14c8464e0);
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_1403e3958(param_1,iVar4);
      }
      lVar5 = *param_1;
      *(double *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = local_d8;
      puVar3 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x18);
      *puVar3 = CONCAT44(uStack_e4,local_e8);
      puVar3[1] = dStack_e0;
      FUN_140703ce0(local_f8,&local_e8,uVar18,&DAT_14c8464e0);
      iVar4 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
        FUN_1403e3958(local_100,iVar4);
      }
      lVar5 = param_1[2];
      *(double *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = local_d8;
      puVar3 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x18);
      *puVar3 = CONCAT44(uStack_e4,local_e8);
      puVar3[1] = dStack_e0;
      FUN_14099e59e(lVar2,&local_e8,uVar18,&DAT_14c8463d0);
      dVar14 = dStack_e0;
      dVar12 = (double)CONCAT44(uStack_e4,local_e8);
      auVar19._0_8_ = dVar12 * dVar12;
      auVar19._8_8_ = dStack_e0 * dStack_e0;
      dVar7 = local_d8 * local_d8 + auVar19._0_8_;
      dVar8 = dStack_d0 * dStack_d0 + auVar19._8_8_;
      auVar23._8_4_ = SUB84(dVar8,0);
      auVar23._0_8_ = dVar7;
      auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar9 = dVar7 + auVar23._8_8_;
      uVar16 = -(ulonglong)(9.99999993922529e-09 <= dVar7 + dVar8);
      auVar6._8_4_ = SUB84(dVar9,0);
      auVar6._0_8_ = dVar7 + dVar8;
      auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar20 = sqrtpd(auVar19,auVar6);
      auVar23 = divpd(auVar13,auVar20);
      dVar7 = dStack_d0 * auVar23._8_8_;
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar9);
      auVar21._0_8_ = uVar16;
      auVar20._8_4_ = SUB84(dVar7,0);
      auVar20._0_8_ = local_d8 * auVar23._0_8_;
      auVar20._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar21);
      iVar4 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar4 + 1U) {
        FUN_140e16be0(plVar1,iVar4);
      }
      uVar11 = -(ulonglong)(9.99999993922529e-09 <= dVar9) & (ulonglong)(dVar14 * auVar23._8_8_);
      lVar5 = *plVar1;
      auVar10._8_4_ = (int)uVar11;
      auVar10._0_8_ = uVar16 & (ulonglong)(dVar12 * auVar23._0_8_);
      auVar10._12_4_ = (int)(uVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar5 + (longlong)iVar4 * 0x20) = auVar10;
      *(undefined1 (*) [16])(lVar5 + 0x10 + (longlong)iVar4 * 0x20) = auVar20;
      iVar15 = iVar15 + 1;
    } while (param_3 != iVar15);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193072 FUN_148193072 body=248 status=ok
// SIG undefined FUN_148193072(void)

undefined8 * FUN_148193072(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1405b70fe(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14735390a(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 5);
  }
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 14819316a FUN_14819316a body=271 status=ok
// SIG undefined FUN_14819316a(void)

void FUN_14819316a(longlong param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  
  fVar16 = (float)param_3 * *(float *)(param_1 + 0x2a0);
  uVar7 = *(uint *)(param_1 + 0x2a4);
  uVar10 = (int)ROUND(fVar16 + fVar16 + -0.5) >> 1;
  if ((int)uVar7 <= (int)uVar10) {
    uVar10 = uVar7;
  }
  if ((int)uVar10 < 1) {
    uVar10 = 0;
  }
  uVar12 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
  if ((int)uVar7 <= (int)uVar12) {
    uVar12 = uVar7;
  }
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  if (uVar12 == uVar10) {
    lVar8 = *(longlong *)(param_1 + 0x268);
    param_2[2] = *(double *)(lVar8 + 0x10 + (ulonglong)uVar10 * 0x18);
    pdVar1 = (double *)(lVar8 + (ulonglong)uVar10 * 0x18);
    dVar2 = pdVar1[1];
    *param_2 = *pdVar1;
    param_2[1] = dVar2;
  }
  else {
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    auVar15._4_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar15._0_4_ = fVar16;
    auVar15._8_4_ = in_XMM2_Dc;
    auVar15._12_4_ = in_XMM2_Dd;
    auVar15 = roundss(auVar14,auVar15,9);
    lVar8 = *(longlong *)(param_1 + 0x268);
    uVar13 = (ulonglong)uVar12;
    uVar11 = (ulonglong)uVar10;
    dVar2 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
    dVar3 = *(double *)(lVar8 + 0x10 + uVar11 * 0x18);
    dVar4 = *(double *)(lVar8 + 8 + uVar13 * 0x18);
    dVar5 = *(double *)(lVar8 + uVar11 * 0x18);
    dVar6 = *(double *)(lVar8 + 8 + uVar11 * 0x18);
    dVar9 = (double)(fVar16 - auVar15._0_4_);
    *param_2 = (*(double *)(lVar8 + uVar13 * 0x18) - dVar5) * dVar9 + dVar5;
    param_2[1] = (dVar4 - dVar6) * dVar9 + dVar6;
    param_2[2] = (dVar2 - dVar3) * dVar9 + dVar3;
  }
  return;
}



// FUNCTION 14819327a FUN_14819327a body=297 status=ok
// SIG undefined FUN_14819327a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14819327a(longlong param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  
  fVar12 = (float)param_3 * *(float *)(param_1 + 0x2a0);
  uVar2 = *(uint *)(param_1 + 0x2a4);
  uVar7 = (int)ROUND(fVar12 + fVar12 + -0.5) >> 1;
  if ((int)uVar2 <= (int)uVar7) {
    uVar7 = uVar2;
  }
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  uVar8 = -((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
  if ((int)uVar2 <= (int)uVar8) {
    uVar8 = uVar2;
  }
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  if (uVar8 == uVar7) {
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x288) + (ulonglong)uVar7 * 0x20);
    dVar3 = *pdVar1;
    dVar4 = pdVar1[1];
    pdVar1 = (double *)(*(longlong *)(param_1 + 0x288) + 0x10 + (ulonglong)uVar7 * 0x20);
    dVar5 = pdVar1[1];
    param_2[2] = *pdVar1;
    param_2[3] = dVar5;
    *param_2 = dVar3;
    param_2[1] = dVar4;
  }
  else {
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    auVar10._4_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = in_XMM2_Dc;
    auVar10._12_4_ = in_XMM2_Dd;
    auVar10 = roundss(auVar9,auVar10,9);
    FUN_144a44da6(param_2,(ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x288),
                  (ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x288),
                  (double)(fVar12 - auVar10._0_4_));
    dVar3 = *param_2;
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    dVar13 = dVar5 * dVar5 + dVar3 * dVar3;
    dVar15 = dVar6 * dVar6 + dVar4 * dVar4;
    auVar14._0_8_ = dVar13 + dVar15;
    auVar14._8_8_ = dVar13 + dVar15;
    auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
    auVar10 = sqrtpd(auVar14,auVar14);
    auVar10 = divpd(_DAT_149934d80,auVar10);
    auVar16._0_8_ = auVar10._0_8_ * dVar5;
    auVar16._8_8_ = auVar10._8_8_ * dVar6;
    *param_2 = (double)((ulonglong)(dVar3 * auVar10._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
    param_2[1] = (double)((ulonglong)(dVar4 * auVar10._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
    auVar10 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar11);
    *(undefined1 (*) [16])(param_2 + 2) = auVar10;
  }
  return param_2;
}



// FUNCTION 1481933a4 FUN_1481933a4 body=217 status=ok
// SIG undefined FUN_1481933a4(void)

void FUN_1481933a4(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  param_3 = param_3 * *(float *)(param_1 + 0x2a0);
  uVar5 = *(uint *)(param_1 + 0x2a4);
  param_3 = param_3 + param_3;
  uVar10 = (int)ROUND(param_3 + -0.5) >> 1;
  if ((int)uVar5 <= (int)uVar10) {
    uVar10 = uVar5;
  }
  uVar8 = 0;
  if (0 < (int)uVar10) {
    uVar8 = (ulonglong)uVar10;
  }
  iVar7 = (int)uVar8;
  uVar11 = -((int)ROUND(-0.5 - param_3) >> 1);
  if ((int)uVar5 <= (int)uVar11) {
    uVar11 = uVar5;
  }
  uVar12 = (ulonglong)uVar11;
  if ((int)uVar11 < 1) {
    uVar12 = 0;
  }
  if ((int)uVar12 == iVar7) {
    if (iVar7 < (int)uVar5) {
      uVar12 = (ulonglong)(iVar7 + 1);
    }
    else {
      if ((int)uVar10 < 1) {
        param_2[2] = DAT_14c8464f0;
        dVar1 = DAT_14c8464e8;
        *param_2 = DAT_14c8464e0;
        param_2[1] = dVar1;
        return;
      }
      iVar7 = iVar7 + -1;
      uVar12 = uVar8;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x268);
  lVar9 = (longlong)iVar7;
  dVar1 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar6 + 0x10 + lVar9 * 0x18);
  dVar3 = *(double *)(lVar6 + 8 + uVar12 * 0x18);
  dVar4 = *(double *)(lVar6 + 8 + lVar9 * 0x18);
  *param_2 = *(double *)(lVar6 + uVar12 * 0x18) - *(double *)(lVar6 + lVar9 * 0x18);
  param_2[1] = dVar3 - dVar4;
  param_2[2] = dVar1 - dVar2;
  return;
}



// FUNCTION 14819347e FUN_14819347e body=156 status=ok
// SIG undefined FUN_14819347e(void)

float FUN_14819347e(longlong param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x270);
  if (0 < (longlong)iVar1) {
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x268) + 0x10);
    uVar4 = 0;
    fVar5 = 3.4028235e+38;
    uVar3 = 0;
    do {
      fVar6 = (float)((*pdVar2 - param_2[2]) * (*pdVar2 - param_2[2]) +
                     (pdVar2[-1] - param_2[1]) * (pdVar2[-1] - param_2[1]) +
                     (pdVar2[-2] - *param_2) * (pdVar2[-2] - *param_2));
      if (fVar6 < fVar5) {
        uVar3 = uVar4 & 0xffffffff;
        fVar5 = fVar6;
      }
      uVar4 = uVar4 + 1;
      pdVar2 = pdVar2 + 3;
    } while ((longlong)iVar1 != uVar4);
    if (0 < (int)uVar3) {
      return (float)(int)uVar3 / (float)(iVar1 + -1);
    }
  }
  return 0.0;
}



// FUNCTION 14819351a FUN_14819351a body=901 status=ok
// SIG undefined FUN_14819351a(void)

void FUN_14819351a(undefined4 *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int local_110;
  undefined4 *local_108;
  int local_100;
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined4 *local_38;
  int local_30;
  undefined4 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144a76c20(&local_28);
  FUN_144a76c20(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_118,param_2);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar2 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      *local_28 = *param_1;
      local_28 = local_28 + local_20;
      *local_38 = param_1[1];
      local_38 = local_38 + local_30;
      *local_48 = param_1[2];
      local_48 = local_48 + local_40;
      *local_58 = param_1[3];
      local_58 = local_58 + local_50;
      *local_68 = param_1[4];
      local_68 = local_68 + local_60;
      *local_78 = param_1[5];
      local_78 = local_78 + local_70;
      *local_88 = param_1[6];
      local_88 = local_88 + local_80;
      *local_98 = param_1[7];
      local_98 = local_98 + local_90;
      *local_a8 = param_1[8];
      local_a8 = local_a8 + local_a0;
      *local_b8 = param_1[9];
      local_b8 = local_b8 + local_b0;
      *local_c8 = param_1[10];
      local_c8 = local_c8 + local_c0;
      *local_d8 = param_1[0xb];
      local_d8 = local_d8 + local_d0;
      *local_e8 = param_1[0xc];
      local_e8 = local_e8 + local_e0;
      *local_f8 = param_1[0xd];
      local_f8 = local_f8 + local_f0;
      *local_108 = param_1[0xe];
      local_108 = local_108 + local_100;
      *local_118 = param_1[0xf];
      local_118 = local_118 + local_110;
      iVar1 = iVar1 + 1;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar2 = (int *)(param_2 + 0x3c);
      }
    } while (iVar1 < *piVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481938a0 FUN_1481938a0 body=148 status=ok
// SIG undefined FUN_1481938a0(void)

void FUN_1481938a0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148193938 FUN_148193938 body=153 status=ok
// SIG undefined FUN_148193938(void)

void FUN_148193938(longlong param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140126e42(&local_28);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    lVar1 = *(longlong *)(param_1 + 0x38);
    do {
      piVar3 = local_28 + local_20;
      *local_28 = -(uint)(lVar1 != 0);
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_28 = piVar3;
    } while (iVar2 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481939d2 FUN_1481939d2 body=207 status=ok
// SIG undefined FUN_1481939d2(void)

void FUN_1481939d2(longlong param_1,char *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_48 [32];
  uint *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1481b5836(&local_28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    plVar3 = (longlong *)FUN_145aa793e();
    lVar2 = plVar3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar2 = plVar3[0x22];
    }
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_28 + local_20;
      *local_28 = (uint)*(byte *)(lVar2 + 0xe0);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_28 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193aa2 FUN_148193aa2 body=207 status=ok
// SIG undefined FUN_148193aa2(void)

void FUN_148193aa2(longlong param_1,char *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_48 [32];
  uint *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1481b5836(&local_28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    plVar3 = (longlong *)FUN_145aa793e();
    lVar2 = plVar3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar2 = plVar3[0x22];
    }
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_28 + local_20;
      *local_28 = (uint)*(byte *)(lVar2 + 0xe1);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_28 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193b72 FUN_148193b72 body=207 status=ok
// SIG undefined FUN_148193b72(void)

void FUN_148193b72(longlong param_1,char *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_48 [32];
  uint *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1481b5836(&local_28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    plVar3 = (longlong *)FUN_145aa793e();
    lVar2 = plVar3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar2 = plVar3[0x22];
    }
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      puVar1 = local_28 + local_20;
      *local_28 = (uint)*(byte *)(lVar2 + 0xe2);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_28 = puVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193c42 FUN_148193c42 body=69 status=ok
// SIG undefined FUN_148193c42(void)

undefined8 FUN_148193c42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_1481192e4();
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x38) == lVar1);
  }
  return uVar2;
}



// FUNCTION 148193c88 FUN_148193c88 body=150 status=ok
// SIG undefined FUN_148193c88(void)

ulonglong FUN_148193c88(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 == (longlong *)0x0) || (param_2[2] != *(longlong *)(param_1 + 0x10))) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 6);
    uVar2 = uVar1 | 1;
    *(uint *)(param_2 + 6) = uVar2;
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      uVar2 = *(uint *)(param_2 + 6) & 0xfffffffe;
      *(uint *)(param_2 + 6) = uVar2;
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_1 + 0x38);
        uVar2 = *(uint *)(param_2 + 6);
      }
    }
    param_2[7] = lVar3;
    *(uint *)(param_2 + 6) = uVar2 | 1;
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((~uVar2 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148193d1e FUN_148193d1e body=47 status=ok
// SIG undefined FUN_148193d1e(void)

undefined8 *
FUN_148193d1e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1480d0bc4(param_1,param_3,param_4);
  *param_1 = &PTR_FUN_14addc588;
  param_1[9] = param_2;
  return param_1;
}



// FUNCTION 148193d4e FUN_148193d4e body=60 status=ok
// SIG undefined FUN_148193d4e(void)

bool FUN_148193d4e(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_14479d2ce();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x195) & 2) == 0)) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_148193d8a(lVar1,param_2,param_3);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 148193d8a FUN_148193d8a body=74 status=ok
// SIG undefined FUN_148193d8a(void)

undefined8 FUN_148193d8a(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_144b2abf6();
  if (((int)param_2 < 0 || plVar3 == (longlong *)0x0) || ((int)plVar3[1] <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*plVar3 + (ulonglong)param_2 * 8);
    iVar2 = FUN_147d51a98(uVar1);
    uVar4 = 0;
    if (param_3 < iVar2) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 148193dd4 FUN_148193dd4 body=48 status=ok
// SIG undefined FUN_148193dd4(void)

bool FUN_148193dd4(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 8) == param_3) && (cVar1 = FUN_148193e04(param_1 + 0x48), cVar1 != '\0'))
  {
    return *(int *)(param_1 + 0xc) == param_4;
  }
  return false;
}



// FUNCTION 148193e04 FUN_148193e04 body=53 status=ok
// SIG undefined FUN_148193e04(void)

ulonglong FUN_148193e04(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148193e3a FUN_148193e3a body=280 status=ok
// SIG undefined FUN_148193e3a(void)

undefined4 FUN_148193e3a(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong local_b0 [3];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    lVar1 = FUN_148193d8a(lVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (lVar1 != 0) {
      local_b0[0] = lVar1;
      FUN_1461c3a4c(lVar1 + 0x198);
      local_b8 = *(undefined4 *)(param_1 + 0xc);
      local_c8 = param_1 + 0x10;
      local_68 = &local_c8;
      local_c0 = local_b0;
      local_58 = &local_6c;
      local_50 = &local_70;
      local_70 = 0xffffffff;
      local_98 = *param_2;
      uStack_90 = param_2[1];
      local_88 = *(undefined4 *)param_2;
      uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_80 = *(undefined4 *)(param_2 + 1);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_78 = 1;
      local_6c = param_3;
      local_60 = param_2;
      local_48 = param_4;
      FUN_1481b5d10(*(undefined8 *)(param_1 + 0x18));
      uVar2 = local_70;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193f54 FUN_148193f54 body=169 status=ok
// SIG undefined FUN_148193f54(void)

undefined4 FUN_148193f54(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  longlong local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14479d2ce(param_1 + 0x48);
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    lVar2 = FUN_148193d8a(lVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (lVar2 != 0) {
      local_40[0] = lVar2;
      FUN_1461c3a4c(lVar2 + 0x198);
      local_48 = *(undefined4 *)(param_1 + 0xc);
      local_58 = param_1 + 0x10;
      local_50 = local_40;
      uVar1 = FUN_148193ffe(&local_58,param_2,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148193ffe FUN_148193ffe body=313 status=ok
// SIG undefined FUN_148193ffe(void)

undefined4 FUN_148193ffe(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  longlong *local_70;
  double *local_68;
  double *local_60;
  undefined8 local_58;
  double *local_50;
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = &local_74;
  local_74 = 0xffffffff;
  dVar1 = param_2[3];
  dVar2 = param_2[2];
  local_80 = 1.0 / (dVar1 - param_2[1]);
  local_88 = 1.0 / (dVar2 - *param_2);
  local_68 = &local_88;
  local_90 = 1.0 - local_80 * dVar1;
  local_98 = 1.0 - local_88 * dVar2;
  local_60 = &local_98;
  local_a8 = (dVar1 + param_2[1]) * 0.5;
  local_b0 = (dVar2 + *param_2) * 0.5;
  local_50 = &local_b0;
  local_a0 = 0;
  local_70 = param_1;
  local_58 = param_3;
  FUN_1481b5f5e(*(undefined8 *)(*param_1 + 8),*param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_74;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148194138 FUN_148194138 body=142 status=ok
// SIG undefined FUN_148194138(void)

void FUN_148194138(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  longlong local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar1 = FUN_148193d8a(lVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (lVar1 != 0) {
      local_28[0] = lVar1;
      FUN_1461c3a4c(lVar1 + 0x198);
      local_38 = *(undefined4 *)(param_1 + 0xc);
      local_30 = param_1 + 0x10;
      local_40 = local_28;
      FUN_1481941c8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481941c8 FUN_1481941c8 body=1387 status=ok
// SIG undefined FUN_1481941c8(void)

void FUN_1481941c8(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 local_128 [32];
  ulonglong local_108;
  longlong *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8;
  double local_c8 [7];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)local_128;
  lVar15 = *(longlong *)*param_1;
  uVar16 = *(uint *)(lVar15 + 0x1d0);
  if ((int)uVar16 < 0) {
    iVar8 = *(int *)(lVar15 + 0x1c0);
    if (*(char *)(lVar15 + 0x1d4) == '\x01') {
      iVar13 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar13 = iVar8;
      }
      uVar16 = iVar13 >> 2;
    }
    else {
      uVar16 = iVar8 / 2;
    }
  }
  if (2 < (int)uVar16) {
    local_108 = (ulonglong)uVar16 / 3;
    uVar19 = 0;
    local_100 = param_1;
    do {
      plVar11 = local_100;
      plVar9 = (longlong *)*param_1;
      lVar15 = plVar9[1];
      cVar4 = *(char *)((longlong)plVar9 + 0x14);
      if (cVar4 == '\x01') {
        uVar16 = *(uint *)(lVar15 + uVar19 * 0xc);
      }
      else {
        uVar16 = (uint)*(ushort *)(lVar15 + uVar19 * 6);
      }
      uVar14 = (ulonglong)*(uint *)(param_1 + 1);
      lVar10 = *plVar9;
      cVar5 = *(char *)(lVar10 + 0x110);
      uVar20 = (ulonglong)*(uint *)(lVar10 + 0x108);
      lVar10 = *(longlong *)(lVar10 + 0xf8);
      if (cVar5 == '\x01') {
        lVar1 = lVar10 + uVar16 * uVar20 * 8;
        fVar22 = *(float *)(lVar1 + uVar14 * 8);
        fVar21 = *(float *)(lVar1 + 4 + uVar14 * 8);
      }
      else {
        lVar1 = lVar10 + uVar16 * uVar20 * 4;
        uVar6 = *(ushort *)(lVar1 + 2 + uVar14 * 4);
        uVar16 = (uint)uVar6 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar21 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar21 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar21 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        uVar7 = *(ushort *)(lVar1 + uVar14 * 4);
        uVar16 = (uint)uVar7 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar22 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar22 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar22 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        fVar21 = (float)((uint)fVar21 | (int)(short)uVar6 & 0x80000000U);
        fVar22 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar22);
      }
      local_c8[1] = (double)fVar21;
      local_c8[0] = (double)fVar22;
      if (cVar4 == '\0') {
        uVar16 = (uint)*(ushort *)(lVar15 + 2 + uVar19 * 6);
      }
      else {
        uVar16 = *(uint *)(lVar15 + 4 + uVar19 * 0xc);
      }
      if (cVar5 == '\0') {
        lVar1 = lVar10 + uVar16 * uVar20 * 4;
        uVar6 = *(ushort *)(lVar1 + 2 + uVar14 * 4);
        uVar16 = (uint)uVar6 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar21 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar21 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar21 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        uVar7 = *(ushort *)(lVar1 + uVar14 * 4);
        uVar16 = (uint)uVar7 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar22 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar22 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar22 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        fVar21 = (float)((uint)fVar21 | (int)(short)uVar6 & 0x80000000U);
        fVar22 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar22);
      }
      else {
        lVar1 = lVar10 + uVar16 * uVar20 * 8;
        fVar22 = *(float *)(lVar1 + uVar14 * 8);
        fVar21 = *(float *)(lVar1 + 4 + uVar14 * 8);
      }
      local_c8[2] = (double)fVar22;
      local_c8[3] = (double)fVar21;
      if (cVar4 == '\0') {
        uVar16 = (uint)*(ushort *)(lVar15 + 4 + uVar19 * 6);
      }
      else {
        uVar16 = *(uint *)(lVar15 + 8 + uVar19 * 0xc);
      }
      if (cVar5 == '\0') {
        lVar10 = lVar10 + uVar20 * uVar16 * 4;
        uVar6 = *(ushort *)(lVar10 + 2 + uVar14 * 4);
        uVar16 = (uint)uVar6 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar17 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar17 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar17 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        uVar7 = *(ushort *)(lVar10 + uVar14 * 4);
        uVar16 = (uint)uVar7 << 0xd;
        if ((uVar16 & 0xf800000) == 0xf800000) {
          fVar12 = (float)(uVar16 | 0x70000000);
        }
        else if ((uVar16 & 0xf800000) == 0) {
          fVar12 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar12 = (float)((uVar16 & 0xfffe000) + 0x38000000);
        }
        fVar17 = (float)((uint)fVar17 | (int)(short)uVar6 & 0x80000000U);
        fVar12 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar12);
      }
      else {
        lVar10 = lVar10 + uVar20 * uVar16 * 8;
        fVar12 = *(float *)(lVar10 + uVar14 * 8);
        fVar17 = *(float *)(lVar10 + 4 + uVar14 * 8);
      }
      local_c8[4] = (double)fVar12;
      local_c8[5] = (double)fVar17;
      if (9.99999993922529e-09 <=
          ABS(((double)fVar17 - local_c8[1]) * ((double)fVar22 - local_c8[0]) -
              ((double)fVar12 - local_c8[0]) * ((double)fVar21 - local_c8[1]))) {
        local_e8 = 0.0;
        dStack_e0 = 0.0;
        local_f8 = 0.0;
        dStack_f0 = 0.0;
        local_d8 = 0;
        lVar15 = 0;
        bVar18 = false;
        do {
          if (bVar18) {
            dVar2 = *(double *)((longlong)local_c8 + lVar15);
            dVar3 = *(double *)((longlong)local_c8 + lVar15 + 8);
            if (dVar2 <= local_f8) {
              local_f8 = dVar2;
            }
            if (dVar3 <= dStack_f0) {
              dStack_f0 = dVar3;
            }
            if (local_e8 <= dVar2) {
              local_e8 = dVar2;
            }
            if (dStack_e0 <= dVar3) {
              dStack_e0 = dVar3;
            }
          }
          else {
            local_e8 = *(double *)((longlong)local_c8 + lVar15);
            local_f8 = *(double *)((longlong)local_c8 + lVar15);
            dStack_f0 = *(double *)((longlong)local_c8 + lVar15 + 8);
            local_d8 = 1;
            dStack_e0 = *(double *)((longlong)local_c8 + lVar15 + 8);
          }
          lVar15 = lVar15 + 0x10;
          bVar18 = true;
        } while (lVar15 != 0x30);
        FUN_1481fa4a8(local_100[2],uVar19 & 0xffffffff,&local_f8);
      }
      uVar19 = uVar19 + 1;
      param_1 = plVar11;
    } while (uVar19 != local_108);
  }
  if ((local_90 ^ (ulonglong)local_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148194776 FUN_148194776 body=38 status=ok
// SIG undefined FUN_148194776(void)

undefined8 FUN_148194776(undefined8 param_1,int param_2)

{
  FUN_140296a6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14819479c FUN_14819479c body=32 status=ok
// SIG undefined FUN_14819479c(void)

undefined8 FUN_14819479c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSkeletalMeshGpuSpawnStaticBuffers");
  return param_2;
}



// FUNCTION 1481947d4 FUN_1481947d4 body=38 status=ok
// SIG undefined FUN_1481947d4(void)

undefined8 FUN_1481947d4(undefined8 param_1,int param_2)

{
  FUN_14810c008();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481947fe FUN_1481947fe body=38 status=ok
// SIG undefined FUN_1481947fe(void)

undefined8 FUN_1481947fe(undefined8 param_1,int param_2)

{
  FUN_148194844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148194824 FUN_148194824 body=32 status=ok
// SIG undefined FUN_148194824(void)

undefined8 FUN_148194824(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNDIRigidMeshCollisionBuffer");
  return param_2;
}



// FUNCTION 148194844 FUN_148194844 body=88 status=ok
// SIG undefined FUN_148194844(void)

void FUN_148194844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14addc630;
  FUN_140038ae8(param_1 + 0x11);
  FUN_140038ae8(param_1 + 0xe);
  FUN_140038ae8(param_1 + 0xb);
  FUN_140038ae8(param_1 + 8);
  FUN_140038ae8(param_1 + 5);
  FUN_140038ae8(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1481948a2 FUN_1481948a2 body=74 status=ok
// SIG undefined FUN_1481948a2(void)

void FUN_1481948a2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148194d72(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  if (param_2 == 0) {
    return;
  }
  FUN_148194cd8(uVar1,param_2);
  FUN_148194c62(param_2);
  return;
}



// FUNCTION 1481948ec FUN_1481948ec body=883 status=ok
// SIG undefined FUN_1481948ec(void)

void FUN_1481948ec(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_144b34998(param_2);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar10 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x50);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x58) - 1U &
                              (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xb8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xb8) == lVar5) {
          if ((((lVar10 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(lVar10 + 0x90) != 0)) &&
             ((*(byte *)param_2[4] & 1) != 0)) {
            lVar5 = *(longlong *)(*param_2 + 0x18);
            FUN_1481954d9(lVar5,lVar10 + 0x18,*(longlong *)(lVar10 + 0x90) + 0x10);
            FUN_1481954d9(lVar5,lVar10 + 0x28,*(longlong *)(lVar10 + 0x90) + 0x28);
            FUN_1481954d9(lVar5,lVar10 + 0x38,*(longlong *)(lVar10 + 0x90) + 0x40);
            FUN_1481954d9(lVar5,lVar10 + 0x48,*(longlong *)(lVar10 + 0x90) + 0x58);
            FUN_1481955d3(lVar5,lVar10 + 0x58,*(longlong *)(lVar10 + 0x90) + 0x70);
            uVar8 = (ulonglong)*(uint *)(lVar10 + 0x70);
            if ((uVar8 != 0) &&
               (lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x90) + 0x88), lVar2 != 0)) {
              uVar12 = *(uint *)(lVar10 + 0x70) * 4;
              cVar1 = *(char *)(lVar5 + 0x69);
              if (cVar1 == '\0') {
                FUN_14002049c(lVar5,1);
              }
              local_70 = 1;
              lVar11 = lVar5;
              local_78 = uVar12;
              _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar5,lVar2,0);
              if (cVar1 == '\0') {
                lVar11 = 0;
                FUN_14002049c(lVar5,0);
              }
              plVar3 = *(longlong **)(param_2[1] + 0x10);
              if (plVar3 != (longlong *)0x0) {
                iVar9 = *(int *)(lVar10 + 0x88);
                lVar11 = 0;
                if (iVar9 != 0) {
                  local_58 = 0;
                  uStack_50 = 0;
                  local_68 = _Dst;
                  local_60 = uVar8;
                  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar9);
                  }
                  FUN_14480809c();
                  iVar9 = *(int *)(lVar10 + 0x88);
                  if ((longlong)iVar9 != 0) {
                    lVar2 = *(longlong *)(lVar10 + 0x80);
                    lVar11 = 0;
                    do {
                      lVar6 = (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(lVar2 + lVar11));
                      uVar8 = uStack_50;
                      uVar13 = 0xffffffff;
                      if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0xe8))) {
                        puVar7 = (undefined4 *)(lVar6 + 0xd8);
                        if (*(undefined4 **)(lVar6 + 0xe0) != (undefined4 *)0x0) {
                          puVar7 = *(undefined4 **)(lVar6 + 0xe0);
                        }
                        uVar13 = *puVar7;
                      }
                      lVar6 = (longlong)(int)uStack_50;
                      uVar12 = (int)uStack_50 + 1;
                      uStack_50 = CONCAT44(uStack_50._4_4_,uVar12);
                      if (uStack_50._4_4_ < uVar12) {
                        FUN_1447808da(&local_58,uVar8 & 0xffffffff);
                      }
                      *(undefined4 *)(local_58 + lVar6 * 4) = uVar13;
                      lVar11 = lVar11 + 4;
                    } while ((longlong)iVar9 * 4 != lVar11);
                  }
                  if (0 < (int)local_60) {
                    uVar8 = 0;
                    do {
                      iVar9 = *(int *)(*(longlong *)(lVar10 + 0x68) + uVar8 * 4);
                      uVar13 = 0xffffffff;
                      if ((-1 < (longlong)iVar9) && (iVar9 < (int)uStack_50)) {
                        uVar13 = *(undefined4 *)(local_58 + (longlong)iVar9 * 4);
                      }
                      *(undefined4 *)((longlong)local_68 + uVar8 * 4) = uVar13;
                      uVar8 = uVar8 + 1;
                    } while (local_60 != uVar8);
                  }
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
LAB_148194bf9:
                  uVar4 = *(undefined8 *)(*(longlong *)(lVar10 + 0x90) + 0x88);
                  if (*(char *)(lVar5 + 0x69) == '\0') {
                    FUN_14002049c(lVar5,1);
                    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar4);
                    FUN_14002049c(lVar5,0);
                  }
                  else {
                    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar5,uVar4);
                  }
                  break;
                }
              }
              memset(_Dst,(int)CONCAT71((int7)((ulonglong)lVar11 >> 8),0xff),(ulonglong)uVar12);
              goto LAB_148194bf9;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 0xb0);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148194c62 FUN_148194c62 body=118 status=ok
// SIG undefined FUN_148194c62(void)

void FUN_148194c62(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
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



// FUNCTION 148194cd8 FUN_148194cd8 body=153 status=ok
// SIG undefined FUN_148194cd8(void)

undefined4 * FUN_148194cd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_146bff298(param_1 + 4,param_2 + 4);
  FUN_146bff298(param_1 + 8,param_2 + 8);
  FUN_146bff298(param_1 + 0xc,param_2 + 0xc);
  FUN_146bff298(param_1 + 0x10,param_2 + 0x10);
  FUN_1447bdc4c(param_1 + 0x14,param_2 + 0x14);
  FUN_14054c6c4(param_1 + 0x18,param_2 + 0x18);
  param_1[0x1c] = param_2[0x1c];
  FUN_14818f4b6(param_1 + 0x1e,param_2 + 0x1e);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  return param_1;
}



// FUNCTION 148194d72 FUN_148194d72 body=189 status=ok
// SIG undefined FUN_148194d72(void)

longlong FUN_148194d72(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xb8;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xb8) == *param_3) {
          if (lVar3 != 0) goto LAB_148194e12;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xb0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148194e30(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xb8 + *param_1;
LAB_148194e12:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148194e30 FUN_148194e30 body=281 status=ok
// SIG undefined FUN_148194e30(void)

undefined4 * FUN_148194e30(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_148194f4a(param_1,local_48);
  FUN_1481950da(param_4,local_40);
  *(undefined4 *)(local_40 + 0xb0) = 0xffffffff;
  cVar1 = FUN_148195036(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0xb4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb0) =
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
      FUN_148195310(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148194f4a FUN_148194f4a body=235 status=ok
// SIG undefined FUN_148194f4a(void)

int * FUN_148194f4a(longlong *param_1,int *param_2)

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
      FUN_140d69e26(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 148195036 FUN_148195036 body=164 status=ok
// SIG undefined FUN_148195036(void)

undefined8 FUN_148195036(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb8);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb8) == *param_3) {
          FUN_148194c62((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xb0);
          FUN_148195296(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481950da FUN_1481950da body=126 status=ok
// SIG undefined FUN_1481950da(void)

undefined8 * FUN_1481950da(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [168];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa8);
  *param_2 = *(undefined8 *)*param_1;
  FUN_14819515a(param_2 + 1,local_c8);
  FUN_148194c62(local_c8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819515a FUN_14819515a body=315 status=ok
// SIG undefined FUN_14819515a(void)

void FUN_14819515a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar3;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  return;
}



// FUNCTION 148195296 FUN_148195296 body=122 status=ok
// SIG undefined FUN_148195296(void)

void FUN_148195296(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
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



// FUNCTION 148195310 FUN_148195310 body=456 status=ok
// SIG undefined FUN_148195310(void)

void FUN_148195310(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xb8;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xb4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar7) =
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



// FUNCTION 1481954d9 FUN_1481954d9 body=250 status=ok
// SIG undefined FUN_1481954d9(void)

void FUN_1481954d9(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  uint uVar3;
  
  if ((*(int *)(param_2 + 1) == 0) || (lVar2 = *param_3, lVar2 == 0)) {
    return;
  }
  uVar3 = *(int *)(param_2 + 1) << 4;
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar2,0,uVar3,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(_Dst,(void *)*param_2,(ulonglong)uVar3);
  lVar2 = *param_3;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014819558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 1481955d3 FUN_1481955d3 body=250 status=ok
// SIG undefined FUN_1481955d3(void)

void FUN_1481955d3(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  uint uVar3;
  
  if ((*(int *)(param_2 + 1) == 0) || (lVar2 = *param_3, lVar2 == 0)) {
    return;
  }
  uVar3 = *(int *)(param_2 + 1) << 2;
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar2,0,uVar3,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy(_Dst,(void *)*param_2,(ulonglong)uVar3);
  lVar2 = *param_3;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148195686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 1481956ce FUN_1481956ce body=29 status=ok
// SIG undefined FUN_1481956ce(void)

undefined8 FUN_1481956ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148195700 FUN_148195700 body=93 status=ok
// SIG undefined FUN_148195700(void)

void FUN_148195700(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14819575e FUN_14819575e body=93 status=ok
// SIG undefined FUN_14819575e(void)

void FUN_14819575e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481957bc FUN_1481957bc body=126 status=ok
// SIG undefined FUN_1481957bc(void)

void FUN_1481957bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addc710;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014819582b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148195844 FUN_148195844 body=20 status=ok
// SIG undefined FUN_148195844(void)

undefined1 FUN_148195844(longlong param_1)

{
  FUN_14818f5e8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148195858 FUN_148195858 body=29 status=ok
// SIG undefined FUN_148195858(void)

undefined8 FUN_148195858(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14819588a FUN_14819588a body=93 status=ok
// SIG undefined FUN_14819588a(void)

void FUN_14819588a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481958e8 FUN_1481958e8 body=93 status=ok
// SIG undefined FUN_1481958e8(void)

void FUN_1481958e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc780;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148195946 FUN_148195946 body=126 status=ok
// SIG undefined FUN_148195946(void)

void FUN_148195946(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addc780;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481959b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481959cc FUN_1481959cc body=19 status=ok
// SIG undefined FUN_1481959cc(void)

undefined1 FUN_1481959cc(undefined8 param_1,undefined8 param_2)

{
  FUN_14818fb76(param_2);
  return 1;
}



// FUNCTION 1481959e0 FUN_1481959e0 body=29 status=ok
// SIG undefined FUN_1481959e0(void)

undefined8 FUN_1481959e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148195a12 FUN_148195a12 body=93 status=ok
// SIG undefined FUN_148195a12(void)

void FUN_148195a12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148195a70 FUN_148195a70 body=93 status=ok
// SIG undefined FUN_148195a70(void)

void FUN_148195a70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addc7f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148195ace FUN_148195ace body=126 status=ok
// SIG undefined FUN_148195ace(void)

void FUN_148195ace(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addc7f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148195b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148195b54 FUN_148195b54 body=19 status=ok
// SIG undefined FUN_148195b54(void)

undefined1 FUN_148195b54(undefined8 param_1,undefined8 param_2)

{
  FUN_14818fbf4(param_2);
  return 1;
}



// FUNCTION 148195b68 FUN_148195b68 body=38 status=ok
// SIG undefined FUN_148195b68(void)

undefined8 FUN_148195b68(undefined8 param_1,int param_2)

{
  FUN_148195b8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148195b8e FUN_148195b8e body=122 status=ok
// SIG undefined FUN_148195b8e(void)

void FUN_148195b8e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14addcbd0;
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0 && (param_1[4] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 148195c60 FUN_148195c60 body=88 status=ok
// SIG undefined FUN_148195c60(void)

undefined1 FUN_148195c60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405b70a4(param_2,param_3);
    FUN_1405b70a4(param_2 + 0x10,param_3 + 0x10);
    FUN_140472d9a(param_2 + 0x20,param_3 + 0x20);
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



// FUNCTION 148195ce0 FUN_148195ce0 body=59 status=ok
// SIG undefined FUN_148195ce0(void)

undefined8 FUN_148195ce0(longlong *param_1)

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



// FUNCTION 148195d26 FUN_148195d26 body=34 status=ok
// SIG undefined FUN_148195d26(void)

void FUN_148195d26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148195d96(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148195d96 FUN_148195d96 body=61 status=ok
// SIG undefined FUN_148195d96(void)

void FUN_148195d96(longlong *param_1)

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



// FUNCTION 148195dda FUN_148195dda body=48 status=ok
// SIG undefined FUN_148195dda(void)

void FUN_148195dda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1a0,0x10);
  }
  return;
}



// FUNCTION 148195e7a FUN_148195e7a body=29 status=ok
// SIG undefined FUN_148195e7a(void)

undefined8 FUN_148195e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148195eb2 FUN_148195eb2 body=29 status=ok
// SIG undefined FUN_148195eb2(void)

bool FUN_148195eb2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148195ed0 FUN_148195ed0 body=26 status=ok
// SIG undefined FUN_148195ed0(void)

bool FUN_148195ed0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148195eea FUN_148195eea body=24 status=ok
// SIG undefined FUN_148195eea(void)

bool FUN_148195eea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148195f02 FUN_148195f02 body=101 status=ok
// SIG undefined FUN_148195f02(void)

void FUN_148195f02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addcf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148195f68 FUN_148195f68 body=101 status=ok
// SIG undefined FUN_148195f68(void)

void FUN_148195f68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addcf30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148195fce FUN_148195fce body=134 status=ok
// SIG undefined FUN_148195fce(void)

void FUN_148195fce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addcf30;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148196045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148196054 FUN_148196054 body=44 status=ok
// SIG undefined FUN_148196054(void)

void FUN_148196054(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014819607d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148196080 FUN_148196080 body=144 status=ok
// SIG undefined FUN_148196080(void)

bool FUN_148196080(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148196112 FUN_148196112 body=151 status=ok
// SIG undefined FUN_148196112(void)

void FUN_148196112(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1481961aa();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3d4c8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x30;
  return;
}



// FUNCTION 1481961aa FUN_1481961aa body=258 status=ok
// SIG undefined FUN_1481961aa(void)

void FUN_1481961aa(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d548) {
    FUN_144b3d300(&DAT_14cb3d548);
    if (DAT_14cb3d548 == -1) {
      FUN_1481962ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x2c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3d4c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a6d47a);
      _Init_thread_footer(&DAT_14cb3d548);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481962ae FUN_1481962ae body=226 status=ok
// SIG undefined FUN_1481962ae(void)

longlong * FUN_1481962ae(longlong *param_1)

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
  pcVar13 = FUN_148196392;
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



// FUNCTION 148196392 FUN_148196392 body=136 status=ok
// SIG undefined FUN_148196392(void)

code * FUN_148196392(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819641a;
}



// FUNCTION 14819641a FUN_14819641a body=136 status=ok
// SIG undefined FUN_14819641a(void)

code * FUN_14819641a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481964a2;
}



// FUNCTION 1481964a2 FUN_1481964a2 body=136 status=ok
// SIG undefined FUN_1481964a2(void)

code * FUN_1481964a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819652a;
}



// FUNCTION 14819652a FUN_14819652a body=136 status=ok
// SIG undefined FUN_14819652a(void)

code * FUN_14819652a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481965b2;
}



// FUNCTION 1481965b2 FUN_1481965b2 body=130 status=ok
// SIG undefined FUN_1481965b2(void)

undefined1 * FUN_1481965b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148196634;
}



// FUNCTION 148196638 FUN_148196638 body=106 status=ok
// SIG undefined FUN_148196638(void)

void FUN_148196638(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x50) == param_2) {
          FUN_1481966a2(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x50 + *param_1 + 0x48);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481966a2 FUN_1481966a2 body=95 status=ok
// SIG undefined FUN_1481966a2(void)

void FUN_1481966a2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_148196702();
  return;
}



// FUNCTION 148196702 FUN_148196702 body=97 status=ok
// SIG undefined FUN_148196702(void)

void FUN_148196702(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x28 + (longlong)param_2 * 0x50);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  lVar3 = *(longlong *)(lVar3 + (longlong)param_2 * 0x50 + 0x20);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_148196764(param_1,param_2);
  return;
}



// FUNCTION 148196764 FUN_148196764 body=122 status=ok
// SIG undefined FUN_148196764(void)

void FUN_148196764(longlong *param_1,int param_2)

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



// FUNCTION 1481967de FUN_1481967de body=29 status=ok
// SIG undefined FUN_1481967de(void)

undefined8 FUN_1481967de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481967fb FUN_1481967fb body=163 status=ok
// SIG undefined FUN_1481967fb(void)

void FUN_1481967fb(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143a6e4a6();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143a6e58e(param_1,param_2);
  return;
}



// FUNCTION 14819689e FUN_14819689e body=374 status=ok
// SIG undefined FUN_14819689e(void)

void FUN_14819689e(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148196a14 FUN_148196a14 body=188 status=ok
// SIG undefined FUN_148196a14(void)

longlong FUN_148196a14(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x50;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x50) == *param_3) {
          if (lVar3 != 0) goto LAB_148196ab3;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x48);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148196ad2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x50 + *param_1;
LAB_148196ab3:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148196ad2 FUN_148196ad2 body=299 status=ok
// SIG undefined FUN_148196ad2(void)

undefined4 * FUN_148196ad2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148196bfe(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined2 *)(local_40 + 3) = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  cVar1 = FUN_148196cec(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
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
      FUN_148196db6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148196bfe FUN_148196bfe body=238 status=ok
// SIG undefined FUN_148196bfe(void)

int * FUN_148196bfe(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 148196cec FUN_148196cec body=202 status=ok
// SIG undefined FUN_148196cec(void)

undefined8 FUN_148196cec(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar4 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x50) == *param_3) {
          if (*(longlong **)((longlong)_Dst + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)_Dst + 0x28) + 0x38))();
          }
          if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)((longlong)_Dst + 0x20) + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          memmove(_Dst,param_3,0x48);
          FUN_148196764(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 148196db6 FUN_148196db6 body=451 status=ok
// SIG undefined FUN_148196db6(void)

void FUN_148196db6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 148196f7a FUN_148196f7a body=152 status=ok
// SIG undefined FUN_148196f7a(void)

void FUN_148196f7a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
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



// FUNCTION 148197012 FUN_148197012 body=125 status=ok
// SIG undefined FUN_148197012(void)

void FUN_148197012(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_148197090(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148197090 FUN_148197090 body=142 status=ok
// SIG undefined FUN_148197090(void)

void FUN_148197090(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14819711e FUN_14819711e body=125 status=ok
// SIG undefined FUN_14819711e(void)

void FUN_14819711e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_14819719c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14819719c FUN_14819719c body=142 status=ok
// SIG undefined FUN_14819719c(void)

void FUN_14819719c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14819722a FUN_14819722a body=9943 status=ok
// SIG undefined FUN_14819722a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14819722a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 unaff_EBX;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  double *pdVar14;
  double *unaff_R12;
  ulonglong unaff_R13;
  undefined4 unaff_R15D;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  undefined1 auStack_478 [32];
  float local_458;
  undefined4 local_454;
  float local_450;
  float local_44c;
  double local_448;
  double dStack_440;
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  longlong local_350;
  double local_348;
  undefined8 uStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double local_310;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
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
  double local_1d8;
  double dStack_1d0;
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
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  dVar58 = *(double *)(param_2 + 0x240);
  dVar64 = *(double *)(param_2 + 0x248);
  local_448 = *(double *)(param_2 + 0x280);
  dStack_440 = *(double *)*(undefined1 (*) [12])(param_2 + 0x288);
  pdVar14 = (double *)*param_1;
  local_3f8 = *pdVar14 * -65536.0 + *(double *)(param_2 + 0x260);
  dStack_3f0 = pdVar14[1] * -65536.0 + *(double *)(param_2 + 0x268);
  local_408 = pdVar14[2] * -65536.0 + *(double *)(param_2 + 0x270);
  dStack_400 = *(double *)(param_2 + 0x278) + 0.0;
  auVar19 = *(undefined1 (*) [16])(param_2 + 0x290);
  auVar6 = *(undefined1 (*) [12])(param_2 + 0x288);
  local_450 = (float)*(double *)(param_2 + 0x288);
  local_44c = (float)auVar19._0_8_;
  local_458 = (float)local_448;
  auVar35 = *(undefined1 (*) [16])(param_2 + 0x250);
  dVar68 = auVar35._0_8_;
  dVar69 = auVar35._8_8_;
  local_178 = (double)CONCAT44(local_178._4_4_,*(undefined4 *)(param_2 + 0x3d0));
  local_350 = param_2;
  local_454 = FUN_148199902(*(longlong *)param_1[1] + 0x90);
  auVar48 = _DAT_149934d80;
  local_3b8._12_4_ = auVar19._4_4_;
  local_3b8._0_12_ = auVar6;
  pdVar14 = (double *)0x0;
  local_438 = auVar19;
  local_428 = dVar69;
  dStack_420 = dVar69;
  local_418 = auVar35;
  local_3e8 = dVar58;
  dStack_3e0 = dVar58;
  local_3a8 = dVar64;
  dStack_3a0 = dVar68;
  local_398 = dVar58;
  dStack_390 = dVar69;
  local_388 = dVar64;
  dStack_380 = dVar64;
  local_378 = dVar68;
  dStack_370 = dVar68;
  local_368 = dVar58;
  dStack_360 = dVar64;
  if ((longlong)*(int *)(param_3 + 0x70) != 0) {
    lVar12 = *(longlong *)(param_3 + 0x68);
    local_438._8_8_ = auVar19._8_8_;
    dVar68 = auVar19._0_8_ * 1.0;
    dVar69 = (double)local_438._8_8_ * 0.0;
    pdVar14 = (double *)((longlong)*(int *)(param_3 + 0x70) * 0x100);
    auVar19._8_8_ = dStack_440;
    auVar19._0_8_ = local_448;
    auVar19 = minpd(_DAT_149934d80,auVar19);
    auVar35._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    iVar15 = movmskpd(unaff_R15D,auVar35);
    unaff_R12 = (double *)0x0;
    do {
      if (*(char *)(lVar12 + 0x19 + (longlong)unaff_R12) != '\0') {
        dVar42 = *(double *)(lVar12 + 0x50 + (longlong)unaff_R12);
        dVar52 = *(double *)(lVar12 + 0x58 + (longlong)unaff_R12);
        dVar57 = *(double *)(lVar12 + 0x60 + (longlong)unaff_R12);
        dVar59 = *(double *)(lVar12 + 0x68 + (longlong)unaff_R12);
        dVar51 = *(double *)(lVar12 + 0x70 + (longlong)unaff_R12);
        dVar18 = *(double *)(lVar12 + 0x78 + (longlong)unaff_R12);
        lVar16 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar9 = (longlong)*(int *)param_1[2] * 0x10;
        *(float *)(lVar16 + lVar9) = (float)(dVar59 - dVar42);
        *(float *)(lVar16 + 4 + lVar9) = (float)(dVar51 - dVar52);
        *(float *)(lVar16 + 8 + lVar9) = (float)(dVar18 - dVar57);
        *(undefined4 *)(lVar16 + 0xc + lVar9) = 0;
        lVar16 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar9 = (longlong)*(int *)param_1[2] * 0x10;
        *(float *)(lVar16 + lVar9) = local_458;
        *(float *)(lVar16 + 4 + lVar9) = local_450;
        *(float *)(lVar16 + 8 + lVar9) = local_44c;
        *(undefined4 *)(lVar16 + 0xc + lVar9) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4)
             = (uint)(*(char *)(lVar12 + 0x19 + (longlong)unaff_R12) == '\x03');
        lVar16 = *(longlong *)(*(longlong *)param_1[1] + 0x80);
        *(undefined4 *)(lVar16 + (longlong)*(int *)param_1[2] * 4) = local_454;
        dVar57 = (dVar57 + dVar18) * 0.5;
        dVar52 = (dVar52 + dVar51) * 0.5;
        dVar42 = (dVar42 + dVar59) * 0.5;
        auVar19 = minpd(ZEXT816(0x3ff0000000000000),local_438);
        auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
        auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
        uVar13 = movmskpd((int)lVar16,auVar20);
        if ((uVar13 & 0x3fffffff) == 0 && iVar15 == 0) {
          local_2f8 = (double)local_418._0_8_ * 0.0 * -1.0 +
                      local_388 * 0.0 + local_3e8 * 1.0 * 1.0 + local_428 * 0.0;
          dStack_2f0 = (double)local_418._0_8_ * 0.0 * 1.0 +
                       dStack_380 * 1.0 + dStack_3e0 * 0.0 * -1.0 + dStack_420 * 0.0;
          local_2e8._0_8_ =
               local_378 * 1.0 * 1.0 + ((local_3e8 * 0.0 * 1.0 + local_428 * 0.0) - local_388 * 0.0)
          ;
          local_2e8._8_8_ =
               dStack_370 * 0.0 * -1.0 +
               ((dStack_3e0 * 0.0 * -1.0 + dStack_420 * 1.0) - dStack_380 * 0.0);
          dVar42 = dVar42 * local_448;
          dVar52 = dVar52 * dStack_440;
          dVar57 = dVar57 * (double)local_438._0_8_;
          dVar34 = (double)local_438._8_8_ * 0.0;
          dVar59 = dVar52 * dVar58 - local_3a8 * dVar42;
          dVar51 = dVar57 * dVar64 - dStack_3a0 * dVar52;
          dVar18 = dVar42 * (double)local_418._0_8_ - local_398 * dVar57;
          dVar43 = dVar34 * (double)local_418._8_8_ - dStack_390 * dVar34;
          dVar51 = dVar51 + dVar51;
          dVar18 = dVar18 + dVar18;
          dVar59 = dVar59 + dVar59;
          dVar43 = dVar43 + dVar43;
          local_2c8._8_8_ =
               (dVar43 * (double)local_418._8_8_ - dVar43 * dStack_390) +
               dStack_420 * dVar43 + dVar34 + dStack_400;
          local_2d8 = (dVar59 * dVar64 - dStack_3a0 * dVar18) + local_428 * dVar51 + dVar42 +
                      local_3f8;
          dStack_2d0 = (dVar51 * (double)local_418._0_8_ - dVar59 * local_398) +
                       dStack_420 * dVar18 + dVar52 + dStack_3f0;
          local_2c8._0_8_ =
               (dVar18 * dVar58 - local_3a8 * dVar51) + local_428 * dVar59 + dVar57 + local_408;
        }
        else {
          dVar51 = dVar64 + dVar64;
          dVar34 = (double)local_418._0_8_ + (double)local_418._0_8_;
          dVar18 = dVar58 * (dVar58 + dVar58);
          dStack_1d0 = (auVar48._8_8_ - ((double)local_418._0_8_ * dVar34 + dVar18)) * dStack_440;
          dVar43 = (dVar58 + dVar58) * dStack_420;
          local_1b8 = (dVar51 * local_428 + local_3e8 * dVar34) * (double)local_438._0_8_;
          local_1d8 = (dVar51 * dVar58 - dVar34 * local_428) * (double)local_3b8._0_8_;
          dStack_1b0 = (dVar34 * dVar64 - dVar43) * (double)local_3b8._8_8_;
          auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_440);
          auVar21._0_8_ = -(ulonglong)(0.0 <= local_448);
          auVar19 = blendvpd(_DAT_149936790,auVar48,auVar21);
          uVar17 = -(ulonglong)(0.0 <= dVar68);
          dVar59 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
          local_1c8 = (dVar34 * dVar64 + dVar43) * dStack_440;
          local_1f8._8_8_ = (dVar51 * dVar58 + dVar34 * local_428) * local_448;
          local_1f8._0_8_ =
               (auVar48._0_8_ - ((double)local_418._0_8_ * dVar34 + dVar64 * dVar51)) * local_448;
          local_1e8 = (local_3e8 * dVar34 - dVar51 * local_428) * local_448;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar18 + dVar64 * dVar51)) * (double)local_438._0_8_;
          uStack_1a0 = 0;
          local_198 = local_3f8;
          dStack_190 = dStack_3f0;
          local_188 = local_408;
          uStack_180 = 0x3ff0000000000000;
          local_278 = 1.0;
          dStack_270 = 0.0;
          local_268 = 0.0;
          uStack_260 = 0;
          local_248 = 0.0;
          uStack_240 = 0;
          local_238 = 0.0;
          dStack_230 = 0.0;
          local_228 = 1.0;
          uStack_220 = 0;
          uStack_200 = 0x3ff0000000000000;
          dVar51 = auVar19._0_8_;
          dVar18 = auVar19._8_8_;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_218 = dVar42;
          dStack_210 = dVar52;
          local_208 = dVar57;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          dVar64 = dStack_360;
          dVar58 = local_368;
          local_168 = local_168 * dVar51;
          dStack_170 = dStack_170 * dVar51;
          local_178 = local_178 * dVar51;
          local_148 = local_148 * dVar18;
          local_150 = local_150 * dVar18;
          local_158 = dVar18 * local_158;
          local_128 = local_128 * dVar59;
          local_130 = local_130 * dVar59;
          local_138 = dVar59 * local_138;
          FUN_14481fd10(&local_338,&local_178);
          dVar42 = local_328 * local_328 + local_338 * local_338;
          dVar52 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
          auVar44._0_8_ = dVar42 + dVar52;
          auVar44._8_8_ = dVar42 + dVar52;
          auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
          auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
          auVar19 = sqrtpd(auVar44,auVar44);
          auVar19 = divpd(auVar48,auVar19);
          auVar53._0_8_ = auVar19._0_8_ * local_328;
          auVar53._8_8_ = auVar19._8_8_ * dStack_320;
          local_2f8 = (double)((ulonglong)(local_338 * auVar19._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
          dStack_2f0 = (double)((ulonglong)(dStack_330 * auVar19._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar22);
          local_2c8._8_8_ = 0.0;
          local_2d8 = local_118;
          dStack_2d0 = dStack_110;
          local_2c8._0_8_ = local_108;
        }
        local_2b8 = local_448;
        dStack_2b0 = dStack_440;
        local_2a8._8_8_ = dVar69;
        local_2a8._0_8_ = dVar68;
        FUN_14818bf3f(&local_2f8,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
      }
      unaff_R13 = 0;
      unaff_R12 = unaff_R12 + 0x20;
    } while (pdVar14 != unaff_R12);
  }
  if ((longlong)*(int *)(param_3 + 0x50) != 0) {
    dVar68 = local_438._0_8_ * 1.0;
    dVar69 = local_438._8_8_ * 0.0;
    lVar12 = (longlong)*(int *)(param_3 + 0x50) * 0x70;
    lVar16 = *(longlong *)(param_3 + 0x48) + 0x48;
    unaff_R12 = &local_178;
    uVar60 = (undefined4)DAT_149934d80;
    uVar61 = DAT_149934d80._4_4_;
    uVar62 = DAT_149934d80._8_4_;
    uVar63 = DAT_149934d80._12_4_;
    auVar48._8_8_ = dStack_440;
    auVar48._0_8_ = local_448;
    auVar19 = minpd(_DAT_149934d80,auVar48);
    auVar35 = minpd(ZEXT816(0x3ff0000000000000),local_438);
    auVar23._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    uVar13 = movmskpd((int)pdVar14,auVar23);
    pdVar14 = (double *)(ulonglong)uVar13;
    auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
    auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
    iVar15 = movmskpd((int)unaff_R13,auVar36);
    unaff_R13 = (ulonglong)(uint)(iVar15 << 2);
    do {
      if (*(char *)(lVar16 + -0x2f) != '\0') {
        uVar2 = *(undefined4 *)(lVar16 + 0x20);
        lVar9 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar10 = (longlong)*(int *)param_1[2] * 0x10;
        *(undefined8 *)(lVar9 + lVar10) = *(undefined8 *)(lVar16 + 0x18);
        *(undefined4 *)(lVar9 + 8 + lVar10) = uVar2;
        *(undefined4 *)(lVar9 + 0xc + lVar10) = 0;
        lVar9 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar10 = (longlong)*(int *)param_1[2] * 0x10;
        *(float *)(lVar9 + lVar10) = local_458;
        *(float *)(lVar9 + 4 + lVar10) = local_450;
        *(float *)(lVar9 + 8 + lVar10) = local_44c;
        *(undefined4 *)(lVar9 + 0xc + lVar10) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4)
             = (uint)(*(char *)(lVar16 + -0x2f) == '\x03');
        *(undefined4 *)
         (*(longlong *)(*(longlong *)param_1[1] + 0x80) + (longlong)*(int *)param_1[2] * 4) =
             local_454;
        FUN_144a7484c(lVar16,unaff_R12);
        dVar57 = dStack_360;
        dVar52 = local_368;
        auVar19 = _DAT_149934d80;
        dVar42 = *(double *)*(undefined1 (*) [16])(lVar16 + -0x18);
        if (iVar15 << 2 == 0 && uVar13 == 0) {
          local_2f8 = dStack_170 * local_378 * -1.0 +
                      local_3e8 * dStack_160 * 1.0 + local_428 * local_178 + local_388 * local_168;
          dStack_2f0 = local_178 * dStack_370 * 1.0 +
                       dStack_3e0 * local_168 * -1.0 + dStack_420 * dStack_170 +
                       dStack_380 * dStack_160;
          local_2e8._8_8_ =
               local_168 * dStack_370 * -1.0 +
               ((dStack_3e0 * local_178 * -1.0 + dStack_420 * dStack_160) - dStack_380 * dStack_170)
          ;
          local_2e8._0_8_ =
               dStack_160 * local_378 * 1.0 +
               ((local_3e8 * dStack_170 * 1.0 + local_428 * local_168) - local_388 * local_178);
          dVar42 = dVar42 * local_448;
          dVar34 = *(double *)(lVar16 + -0x10) * dStack_440;
          dVar52 = *(double *)(lVar16 + -8) * (double)local_438._0_8_;
          dVar57 = (double)local_438._8_8_ * 0.0;
          dVar59 = dVar34 * dVar58 - local_3a8 * dVar42;
          dVar51 = dVar52 * dVar64 - dStack_3a0 * dVar34;
          dVar18 = dVar42 * (double)local_418._0_8_ - local_398 * dVar52;
          dVar43 = dVar57 * local_418._8_8_ - dStack_390 * dVar57;
          dVar51 = dVar51 + dVar51;
          dVar18 = dVar18 + dVar18;
          dVar59 = dVar59 + dVar59;
          dVar43 = dVar43 + dVar43;
          local_2c8._0_8_ =
               (dVar18 * dVar58 - local_3a8 * dVar51) + local_428 * dVar59 + dVar52 + local_408;
          local_2c8._8_8_ =
               (dVar43 * local_418._8_8_ - dVar43 * dStack_390) + dStack_420 * dVar43 + dVar57 +
               dStack_400;
          dVar52 = dVar58;
          dVar57 = dVar64;
          local_2d8 = (dVar59 * dVar64 - dStack_3a0 * dVar18) + local_428 * dVar51 + dVar42 +
                      local_3f8;
          dStack_2d0 = (dVar51 * (double)local_418._0_8_ - dVar59 * local_398) +
                       dStack_420 * dVar18 + dVar34 + dStack_3f0;
        }
        else {
          dVar51 = dVar64 + dVar64;
          dVar34 = (double)local_418._0_8_ + (double)local_418._0_8_;
          dVar18 = dVar58 * (dVar58 + dVar58);
          dStack_1d0 = ((double)CONCAT44(uVar63,uVar62) -
                       ((double)local_418._0_8_ * dVar34 + dVar18)) * dStack_440;
          dVar43 = (dVar58 + dVar58) * dStack_420;
          local_3d8._8_8_ = dVar69;
          local_3d8._0_8_ = dVar68;
          local_1b8 = (dVar51 * local_428 + local_3e8 * dVar34) * (double)local_438._0_8_;
          local_1d8 = (dVar51 * dVar58 - dVar34 * local_428) * (double)local_3b8._0_8_;
          dStack_1b0 = (dVar34 * dVar64 - dVar43) * (double)local_3b8._8_8_;
          auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_440);
          auVar24._0_8_ = -(ulonglong)(0.0 <= local_448);
          auVar35 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
          dVar59 = (double)(~-(ulonglong)(0.0 <= dVar68) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar68) & 0x3ff0000000000000);
          local_1c8 = (dVar34 * dVar64 + dVar43) * dStack_440;
          local_1f8._8_8_ = (dVar51 * dVar58 + dVar34 * local_428) * local_448;
          local_1f8._0_8_ =
               ((double)CONCAT44(uVar61,uVar60) -
               ((double)local_418._0_8_ * dVar34 + dVar64 * dVar51)) * local_448;
          local_1a8 = (1.0 - (dVar18 + dVar64 * dVar51)) * (double)local_438._0_8_;
          local_1e8 = (local_3e8 * dVar34 - dVar51 * local_428) * local_448;
          uVar60 = (undefined4)DAT_149934d80;
          uVar61 = DAT_149934d80._4_4_;
          uVar62 = DAT_149934d80._8_4_;
          uVar63 = DAT_149934d80._12_4_;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_3f8;
          dStack_190 = dStack_3f0;
          local_188 = local_408;
          uStack_180 = 0x3ff0000000000000;
          dVar58 = dStack_170 + dStack_170;
          dVar51 = local_168 + local_168;
          dVar64 = local_178 * (local_178 + local_178);
          local_278 = (double)DAT_149934d80 - (local_168 * dVar51 + dStack_170 * dVar58);
          local_228 = 1.0 - (dVar64 + dStack_170 * dVar58);
          dStack_230 = (local_178 + local_178) * dStack_160;
          dStack_270 = dVar58 * local_178 + dVar51 * dStack_160;
          local_248 = dVar51 * dStack_170 + dStack_230;
          dStack_230 = dVar51 * dStack_170 - dStack_230;
          local_238 = dVar58 * dStack_160 + local_178 * dVar51;
          local_268 = local_178 * dVar51 - dVar58 * dStack_160;
          uStack_260 = 0;
          local_258._8_8_ = DAT_149934d80._8_8_ - (local_168 * dVar51 + dVar64);
          local_258._0_8_ = dVar58 * local_178 - dVar51 * dStack_160;
          uStack_240 = 0;
          uStack_220 = 0;
          uStack_200 = 0x3ff0000000000000;
          dVar58 = auVar35._0_8_;
          dVar64 = auVar35._8_8_;
          local_3c8 = *(undefined1 (*) [16])(lVar16 + -0x18);
          local_218 = dVar42;
          dStack_210 = *(double *)(lVar16 + -0x10);
          local_208 = *(double *)(lVar16 + -8);
          FUN_1447fea8d(unaff_R12,&local_278,0);
          FUN_144a1c686(unaff_R12,0x3e45798ee0000000);
          local_168 = local_168 * dVar58;
          dStack_170 = dStack_170 * dVar58;
          local_178 = local_178 * dVar58;
          local_148 = local_148 * dVar64;
          local_150 = local_150 * dVar64;
          local_158 = dVar64 * local_158;
          local_128 = local_128 * dVar59;
          local_130 = local_130 * dVar59;
          local_138 = dVar59 * local_138;
          FUN_14481fd10(&local_338,unaff_R12);
          dVar58 = local_328 * local_328 + local_338 * local_338;
          dVar64 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
          auVar45._0_8_ = dVar58 + dVar64;
          auVar45._8_8_ = dVar58 + dVar64;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
          auVar35 = sqrtpd(auVar45,auVar45);
          auVar19 = divpd(auVar19,auVar35);
          auVar54._0_8_ = auVar19._0_8_ * local_328;
          auVar54._8_8_ = auVar19._8_8_ * dStack_320;
          local_2f8 = (double)((ulonglong)(local_338 * auVar19._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
          dStack_2f0 = (double)((ulonglong)(dStack_330 * auVar19._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar25);
          local_2c8._8_8_ = 0;
          local_2c8._0_8_ = local_108;
          local_2d8 = local_118;
          dStack_2d0 = dStack_110;
        }
        local_2b8 = local_448;
        dStack_2b0 = dStack_440;
        local_2a8._8_8_ = dVar69;
        local_2a8._0_8_ = dVar68;
        FUN_14818bf3f(&local_2f8,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
        dVar58 = dVar52;
        dVar64 = dVar57;
      }
      lVar16 = lVar16 + 0x70;
      lVar12 = lVar12 + -0x70;
    } while (lVar12 != 0);
  }
  iVar15 = *(int *)(param_3 + 0x40);
  if ((longlong)iVar15 != 0) {
    pdVar14 = *(double **)(param_3 + 0x38);
    auVar67._0_8_ = local_438._0_8_ * 1.0;
    auVar67._8_8_ = local_438._8_8_ * 0.0;
    auVar3._8_8_ = dStack_440;
    auVar3._0_8_ = local_448;
    auVar19 = minpd(_DAT_149934d80,auVar3);
    auVar35 = minpd(ZEXT816(0x3ff0000000000000),local_438);
    auVar26._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar26._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    iVar11 = movmskpd(unaff_EBX,auVar26);
    auVar37._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
    uVar13 = movmskpd((int)unaff_R12,auVar37);
    dVar68 = (double)DAT_149931170;
    dVar69 = DAT_149931170._8_8_;
    dVar42 = local_388 * 0.0 + local_3e8 * 1.0 * dVar68 + local_428 * 0.0;
    dVar52 = dStack_380 * 1.0 + dStack_3e0 * 0.0 * dVar69 + dStack_420 * 0.0;
    auVar65._0_8_ =
         local_378 * 1.0 * dVar68 + ((local_3e8 * 0.0 * dVar68 + local_428 * 0.0) - local_388 * 0.0)
    ;
    auVar65._8_8_ =
         dStack_370 * 0.0 * dVar69 +
         ((dStack_3e0 * 0.0 * dVar69 + dStack_420 * 1.0) - dStack_380 * 0.0);
    unaff_R13 = 0;
    auVar19 = _DAT_149934d80;
    do {
      auVar35 = auVar19;
      auVar48 = auVar65;
      if (*(char *)((longlong)pdVar14 + unaff_R13 + 0x19) != '\0') {
        lVar12 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar16 = (longlong)*(int *)param_1[3] * 0x10;
        *(undefined4 *)(lVar12 + lVar16) = *(undefined4 *)((longlong)pdVar14 + unaff_R13 + 0x48);
        *(undefined8 *)(lVar12 + 4 + lVar16) = 0;
        *(undefined4 *)(lVar12 + 0xc + lVar16) = 0;
        lVar12 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar16 = (longlong)*(int *)param_1[3] * 0x10;
        *(float *)(lVar12 + lVar16) = local_458;
        *(float *)(lVar12 + 4 + lVar16) = local_450;
        *(float *)(lVar12 + 8 + lVar16) = local_44c;
        *(undefined4 *)(lVar12 + 0xc + lVar16) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[3] * 4)
             = (uint)(*(char *)((longlong)pdVar14 + unaff_R13 + 0x19) == '\x03');
        *(undefined4 *)
         (*(longlong *)(*(longlong *)param_1[1] + 0x80) + (longlong)*(int *)param_1[3] * 4) =
             local_454;
        auVar35 = _DAT_149934d80;
        pdVar1 = (double *)((longlong)pdVar14 + unaff_R13 + 0x30);
        dVar69 = *pdVar1;
        dVar57 = pdVar1[1];
        dVar68 = *(double *)((longlong)pdVar14 + unaff_R13 + 0x40);
        if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
          local_2f8 = (double)local_418._0_8_ * 0.0 * -1.0 + dVar42;
          dStack_2f0 = (double)local_418._0_8_ * 0.0 * 1.0 + dVar52;
          dVar69 = dVar69 * local_448;
          dVar57 = dVar57 * dStack_440;
          dVar68 = dVar68 * (double)local_438._0_8_;
          dVar34 = (double)local_438._8_8_ * 0.0;
          dVar59 = dVar57 * dVar58 - local_3a8 * dVar69;
          dVar51 = dVar68 * dVar64 - dStack_3a0 * dVar57;
          dVar18 = dVar69 * (double)local_418._0_8_ - local_398 * dVar68;
          dVar43 = dVar34 * (double)local_418._8_8_ - dStack_390 * dVar34;
          dVar51 = dVar51 + dVar51;
          dVar18 = dVar18 + dVar18;
          dVar59 = dVar59 + dVar59;
          dVar43 = dVar43 + dVar43;
          local_2c8._8_8_ =
               (dVar43 * (double)local_418._8_8_ - dVar43 * dStack_390) +
               dStack_420 * dVar43 + dVar34 + dStack_400;
          auVar35 = auVar19;
          local_2d8 = (dVar59 * dVar64 - dStack_3a0 * dVar18) + local_428 * dVar51 + dVar69 +
                      local_3f8;
          dStack_2d0 = (dVar51 * (double)local_418._0_8_ - dVar59 * local_398) +
                       dStack_420 * dVar18 + dVar57 + dStack_3f0;
          local_2c8._0_8_ =
               (dVar18 * dVar58 - local_3a8 * dVar51) + local_428 * dVar59 + dVar68 + local_408;
        }
        else {
          dVar51 = dVar64 + dVar64;
          dVar34 = (double)local_418._0_8_ + (double)local_418._0_8_;
          dVar18 = dVar58 * (dVar58 + dVar58);
          dStack_1d0 = (auVar19._8_8_ - ((double)local_418._0_8_ * dVar34 + dVar18)) * dStack_440;
          dVar43 = (dVar58 + dVar58) * dStack_420;
          local_1b8 = (dVar51 * local_428 + local_3e8 * dVar34) * (double)local_438._0_8_;
          local_1d8 = (dVar51 * dVar58 - dVar34 * local_428) * (double)local_3b8._0_8_;
          dStack_1b0 = (dVar34 * dVar64 - dVar43) * (double)local_3b8._8_8_;
          local_3d8._8_4_ = SUB84(dVar52,0);
          local_3d8._0_8_ = dVar42;
          local_3d8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          auVar27._8_8_ = -(ulonglong)(0.0 <= dStack_440);
          auVar27._0_8_ = -(ulonglong)(0.0 <= local_448);
          auVar48 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar27);
          dVar59 = (double)(~-(ulonglong)(0.0 <= auVar67._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar67._0_8_) & 0x3ff0000000000000);
          dVar58 = (dVar51 * dVar58 + dVar34 * local_428) * local_448;
          local_1c8 = (dVar34 * dVar64 + dVar43) * dStack_440;
          local_1f8._8_4_ = SUB84(dVar58,0);
          local_1f8._0_8_ =
               (auVar19._0_8_ - ((double)local_418._0_8_ * dVar34 + dVar64 * dVar51)) * local_448;
          local_1f8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          local_1e8 = (local_3e8 * dVar34 - dVar51 * local_428) * local_448;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar18 + dVar64 * dVar51)) * (double)local_438._0_8_;
          uStack_1a0 = 0;
          local_198 = local_3f8;
          dStack_190 = dStack_3f0;
          local_188 = local_408;
          uStack_180 = 0x3ff0000000000000;
          local_278 = 1.0;
          dStack_270 = 0.0;
          local_268 = 0.0;
          uStack_260 = 0;
          local_248 = 0.0;
          uStack_240 = 0;
          local_238 = 0.0;
          dStack_230 = 0.0;
          dVar52 = (double)local_3d8._8_8_;
          local_228 = 1.0;
          uStack_220 = 0;
          uStack_200 = 0x3ff0000000000000;
          dVar51 = auVar48._0_8_;
          dVar18 = auVar48._8_8_;
          local_3c8 = auVar65;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_218 = dVar69;
          dStack_210 = dVar57;
          local_208 = dVar68;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          dVar64 = dStack_360;
          dVar58 = local_368;
          auVar48 = local_3c8;
          local_168 = local_168 * dVar51;
          dStack_170 = dStack_170 * dVar51;
          local_178 = local_178 * dVar51;
          local_148 = local_148 * dVar18;
          local_150 = local_150 * dVar18;
          local_158 = dVar18 * local_158;
          local_128 = local_128 * dVar59;
          local_130 = local_130 * dVar59;
          local_138 = dVar59 * local_138;
          FUN_14481fd10(&local_338,&local_178);
          dVar68 = local_328 * local_328 + local_338 * local_338;
          dVar69 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
          auVar46._0_8_ = dVar68 + dVar69;
          auVar46._8_8_ = dVar68 + dVar69;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          auVar19 = sqrtpd(auVar46,auVar46);
          auVar19 = divpd(auVar35,auVar19);
          auVar55._0_8_ = auVar19._0_8_ * local_328;
          auVar55._8_8_ = auVar19._8_8_ * dStack_320;
          local_2f8 = (double)((ulonglong)(local_338 * auVar19._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_));
          dStack_2f0 = (double)((ulonglong)(dStack_330 * auVar19._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_));
          auVar65 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar28);
          local_2c8._8_8_ = 0.0;
          local_2d8 = local_118;
          dStack_2d0 = dStack_110;
          local_2c8._0_8_ = local_108;
        }
        local_2b8 = local_448;
        dStack_2b0 = dStack_440;
        local_2e8 = auVar65;
        local_2a8 = auVar67;
        FUN_14818bf3f(&local_2f8,*(undefined4 *)param_1[3],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[3] = *(int *)param_1[3] + 1;
      }
      unaff_R13 = unaff_R13 + 0x50;
      auVar19 = auVar35;
      auVar65 = auVar48;
    } while ((longlong)iVar15 * 0x50 != unaff_R13);
  }
  if ((longlong)*(int *)(param_3 + 0x60) != 0) {
    dVar42 = local_438._0_8_ * 1.0;
    dVar52 = local_438._8_8_ * 0.0;
    lVar12 = (longlong)*(int *)(param_3 + 0x60) * 0x68;
    lVar16 = *(longlong *)(param_3 + 0x58) + 0x48;
    dVar68 = (double)DAT_149934d80;
    dVar69 = DAT_149934d80._8_8_;
    auVar4._8_8_ = dStack_440;
    auVar4._0_8_ = local_448;
    auVar19 = minpd(_DAT_149934d80,auVar4);
    auVar35 = minpd(ZEXT816(0x3ff0000000000000),local_438);
    auVar29._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    iVar15 = movmskpd((int)pdVar14,auVar29);
    auVar38._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
    uVar13 = movmskpd((int)unaff_R13,auVar38);
    do {
      if (*(char *)(lVar16 + -0x2f) != '\0') {
        iVar11 = *(int *)param_1[4];
        lVar9 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        *(undefined8 *)(lVar9 + (longlong)iVar11 * 0x10) = *(undefined8 *)(lVar16 + 0x18);
        *(undefined8 *)(lVar9 + 8 + (longlong)iVar11 * 0x10) = 0;
        lVar9 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar10 = (longlong)*(int *)param_1[4] * 0x10;
        *(float *)(lVar9 + lVar10) = local_458;
        *(float *)(lVar9 + 4 + lVar10) = local_450;
        *(float *)(lVar9 + 8 + lVar10) = local_44c;
        *(undefined4 *)(lVar9 + 0xc + lVar10) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[4] * 4)
             = (uint)(*(char *)(lVar16 + -0x2f) == '\x03');
        *(undefined4 *)
         (*(longlong *)(*(longlong *)param_1[1] + 0x80) + (longlong)*(int *)param_1[4] * 4) =
             local_454;
        FUN_144a7484c(lVar16,&local_178);
        dVar51 = dStack_360;
        dVar59 = local_368;
        auVar19 = _DAT_149934d80;
        local_3d8 = *(undefined1 (*) [16])(lVar16 + -0x18);
        dVar57 = *(double *)(lVar16 + -8);
        if ((uVar13 & 0x3fffffff) == 0 && iVar15 == 0) {
          local_2f8 = dStack_170 * local_378 * -1.0 +
                      local_3e8 * dStack_160 * 1.0 + local_428 * local_178 + local_388 * local_168;
          dStack_2f0 = local_178 * dStack_370 * 1.0 +
                       dStack_3e0 * local_168 * -1.0 + dStack_420 * dStack_170 +
                       dStack_380 * dStack_160;
          local_2e8._8_8_ =
               local_168 * dStack_370 * -1.0 +
               ((dStack_3e0 * local_178 * -1.0 + dStack_420 * dStack_160) - dStack_380 * dStack_170)
          ;
          local_2e8._0_8_ =
               dStack_160 * local_378 * 1.0 +
               ((local_3e8 * dStack_170 * 1.0 + local_428 * local_168) - local_388 * local_178);
          dVar39 = (double)local_3d8._0_8_ * local_448;
          dVar41 = (double)local_3d8._8_8_ * dStack_440;
          dVar57 = dVar57 * (double)local_438._0_8_;
          dVar59 = (double)local_438._8_8_ * 0.0;
          dVar18 = dVar41 * dVar58 - local_3a8 * dVar39;
          dVar34 = dVar57 * dVar64 - dStack_3a0 * dVar41;
          dVar43 = dVar39 * (double)local_418._0_8_ - local_398 * dVar57;
          dVar51 = dVar59 * local_418._8_8_ - dStack_390 * dVar59;
          dVar34 = dVar34 + dVar34;
          dVar43 = dVar43 + dVar43;
          dVar18 = dVar18 + dVar18;
          dVar51 = dVar51 + dVar51;
          local_2c8._0_8_ =
               (dVar43 * dVar58 - local_3a8 * dVar34) + local_428 * dVar18 + dVar57 + local_408;
          local_2c8._8_8_ =
               (dVar51 * local_418._8_8_ - dVar51 * dStack_390) + dStack_420 * dVar51 + dVar59 +
               dStack_400;
          dVar59 = dVar58;
          dVar51 = dVar64;
          local_2d8 = (dVar18 * dVar64 - dStack_3a0 * dVar43) + local_428 * dVar34 + dVar39 +
                      local_3f8;
          dStack_2d0 = (dVar34 * (double)local_418._0_8_ - dVar18 * local_398) +
                       dStack_420 * dVar43 + dVar41 + dStack_3f0;
        }
        else {
          dVar34 = dVar64 + dVar64;
          dVar39 = (double)local_418._0_8_ + (double)local_418._0_8_;
          dVar43 = dVar58 * (dVar58 + dVar58);
          dStack_1d0 = (dVar69 - ((double)local_418._0_8_ * dVar39 + dVar43)) * dStack_440;
          dVar69 = (dVar58 + dVar58) * dStack_420;
          local_3c8._8_4_ = SUB84(dVar52,0);
          local_3c8._0_8_ = dVar42;
          local_3c8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          local_1b8 = (dVar34 * local_428 + local_3e8 * dVar39) * (double)local_438._0_8_;
          local_1d8 = (dVar34 * dVar58 - dVar39 * local_428) * (double)local_3b8._0_8_;
          dStack_1b0 = (dVar39 * dVar64 - dVar69) * (double)local_3b8._8_8_;
          auVar30._8_8_ = -(ulonglong)(0.0 <= dStack_440);
          auVar30._0_8_ = -(ulonglong)(0.0 <= local_448);
          auVar35 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
          uStack_340 = 0;
          dVar18 = (double)(~-(ulonglong)(0.0 <= dVar42) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar42) & 0x3ff0000000000000);
          local_1c8 = (dVar39 * dVar64 + dVar69) * dStack_440;
          local_1f8._8_8_ = (dVar34 * dVar58 + dVar39 * local_428) * local_448;
          local_1f8._0_8_ =
               (dVar68 - ((double)local_418._0_8_ * dVar39 + dVar64 * dVar34)) * local_448;
          local_1a8 = (1.0 - (dVar43 + dVar64 * dVar34)) * (double)local_438._0_8_;
          local_1e8 = (local_3e8 * dVar39 - dVar34 * local_428) * local_448;
          dVar68 = (double)DAT_149934d80;
          dVar69 = DAT_149934d80._8_8_;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_3f8;
          dStack_190 = dStack_3f0;
          local_188 = local_408;
          uStack_180 = 0x3ff0000000000000;
          dVar58 = dStack_170 + dStack_170;
          dVar34 = local_168 + local_168;
          dVar64 = local_178 * (local_178 + local_178);
          local_278 = dVar68 - (local_168 * dVar34 + dStack_170 * dVar58);
          dVar52 = (double)local_3c8._8_8_;
          local_228 = 1.0 - (dVar64 + dStack_170 * dVar58);
          dStack_230 = (local_178 + local_178) * dStack_160;
          dStack_270 = dVar58 * local_178 + dVar34 * dStack_160;
          local_248 = dVar34 * dStack_170 + dStack_230;
          dStack_230 = dVar34 * dStack_170 - dStack_230;
          local_238 = dVar58 * dStack_160 + local_178 * dVar34;
          local_268 = local_178 * dVar34 - dVar58 * dStack_160;
          uStack_260 = 0;
          local_258._8_8_ = dVar69 - (local_168 * dVar34 + dVar64);
          local_258._0_8_ = dVar58 * local_178 - dVar34 * dStack_160;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = (double)local_3d8._0_8_;
          dStack_210 = (double)local_3d8._8_8_;
          uStack_200 = 0x3ff0000000000000;
          dVar58 = auVar35._0_8_;
          dVar64 = auVar35._8_8_;
          local_348 = dVar57;
          local_208 = dVar57;
          FUN_1447fea8d(&local_178,&local_278,0);
          FUN_144a1c686(&local_178);
          local_168 = local_168 * dVar58;
          dStack_170 = dStack_170 * dVar58;
          local_178 = local_178 * dVar58;
          local_148 = local_148 * dVar64;
          local_150 = local_150 * dVar64;
          local_158 = dVar64 * local_158;
          local_128 = local_128 * dVar18;
          local_130 = local_130 * dVar18;
          local_138 = dVar18 * local_138;
          FUN_14481fd10(&local_338,&local_178);
          dVar58 = local_328 * local_328 + local_338 * local_338;
          dVar64 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
          auVar47._0_8_ = dVar58 + dVar64;
          auVar47._8_8_ = dVar58 + dVar64;
          auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
          auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
          auVar35 = sqrtpd(auVar47,auVar47);
          auVar19 = divpd(auVar19,auVar35);
          auVar56._0_8_ = auVar19._0_8_ * local_328;
          auVar56._8_8_ = auVar19._8_8_ * dStack_320;
          local_2f8 = (double)((ulonglong)(local_338 * auVar19._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
          dStack_2f0 = (double)((ulonglong)(dStack_330 * auVar19._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar31);
          local_2c8._8_8_ = 0;
          local_2c8._0_8_ = local_108;
          local_2d8 = local_118;
          dStack_2d0 = dStack_110;
        }
        local_2b8 = local_448;
        dStack_2b0 = dStack_440;
        local_2a8._8_4_ = SUB84(dVar52,0);
        local_2a8._0_8_ = dVar42;
        local_2a8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        FUN_14818bf3f(&local_2f8,*(undefined4 *)param_1[4],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
        dVar58 = dVar59;
        dVar64 = dVar51;
      }
      lVar16 = lVar16 + 0x68;
      lVar12 = lVar12 + -0x68;
    } while (lVar12 != 0);
  }
  if ((((*(int *)(param_3 + 0x70) == 0) && (*(int *)(param_3 + 0x50) == 0)) &&
      (*(int *)(param_3 + 0x40) == 0)) && (*(int *)(param_3 + 0x60) == 0)) {
    FUN_14487e4ca(local_350);
    dVar69 = dStack_440;
    dVar68 = local_448;
    lVar12 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
    lVar16 = (longlong)*(int *)param_1[2] * 0x10;
    *(float *)(lVar12 + lVar16) = (float)(dStack_320 + dStack_320);
    *(float *)(lVar12 + 4 + lVar16) = (float)(local_318 + local_318);
    *(float *)(lVar12 + 8 + lVar16) = (float)(local_310 + local_310);
    *(undefined4 *)(lVar12 + 0xc + lVar16) = 0;
    lVar12 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
    lVar16 = (longlong)*(int *)param_1[2] * 0x10;
    *(float *)(lVar12 + lVar16) = local_458;
    *(float *)(lVar12 + 4 + lVar16) = local_450;
    *(float *)(lVar12 + 8 + lVar16) = local_44c;
    *(undefined4 *)(lVar12 + 0xc + lVar16) = 0;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4) = 1;
    iVar15 = *(int *)param_1[2];
    lVar12 = *(longlong *)(*(longlong *)param_1[1] + 0x80);
    *(undefined4 *)(lVar12 + (longlong)iVar15 * 4) = local_454;
    auVar19 = _DAT_149934d80;
    local_2c8 = ZEXT816(0);
    local_2d8 = 0.0;
    dStack_2d0 = 0.0;
    auVar5._8_8_ = dStack_440;
    auVar5._0_8_ = local_448;
    auVar35 = minpd(_DAT_149934d80,auVar5);
    auVar48 = minpd(ZEXT816(0x3ff0000000000000),local_438);
    auVar40._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
    iVar11 = movmskpd((int)lVar12,auVar40);
    auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar13 = movmskpd(iVar15,auVar49);
    uVar7 = local_438._0_8_;
    uVar8 = local_438._8_8_;
    if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
      local_2f8 = (double)local_418._0_8_ * 0.0 * -1.0 +
                  local_388 * 0.0 + local_3e8 * 1.0 * 1.0 + local_428 * 0.0;
      dStack_2f0 = (double)local_418._0_8_ * 0.0 * 1.0 +
                   dStack_380 * 1.0 + dStack_3e0 * 0.0 * -1.0 + dStack_420 * 0.0;
      local_2e8._8_8_ =
           dStack_370 * 0.0 * -1.0 + ((dVar58 * 0.0 * -1.0 + dStack_420 * 1.0) - dStack_380 * 0.0);
      local_2e8._0_8_ =
           local_378 * 1.0 * 1.0 + ((dVar58 * 0.0 * 1.0 + local_428 * 0.0) - local_388 * 0.0);
      local_338 = local_338 * local_448;
      dStack_330 = dStack_330 * dStack_440;
      local_328 = local_328 * (double)local_438._0_8_;
      dVar68 = (double)local_438._8_8_ * 0.0;
      dVar69 = dStack_330 * dVar58 - local_3a8 * local_338;
      dVar42 = local_328 * dVar64 - dStack_3a0 * dStack_330;
      dVar52 = local_338 * (double)local_418._0_8_ - local_398 * local_328;
      dVar57 = dVar68 * (double)local_418._8_8_ - dStack_390 * dVar68;
      dVar42 = dVar42 + dVar42;
      dVar52 = dVar52 + dVar52;
      dVar69 = dVar69 + dVar69;
      dVar57 = dVar57 + dVar57;
      local_2d8 = local_3f8 +
                  (dVar69 * dVar64 - dStack_3a0 * dVar52) + local_428 * dVar42 + local_338;
      dStack_2d0 = dStack_3f0 +
                   (dVar42 * (double)local_418._0_8_ - dVar69 * local_398) +
                   dStack_420 * dVar52 + dStack_330;
      local_2c8._8_8_ =
           dStack_400 +
           (dVar57 * (double)local_418._8_8_ - dVar57 * dStack_390) + dStack_420 * dVar57 + dVar68;
      local_2c8._0_8_ =
           local_408 + (dVar52 * dVar58 - local_3a8 * dVar42) + local_428 * dVar69 + local_328;
    }
    else {
      dVar52 = dVar64 + dVar64;
      dVar57 = (double)local_418._0_8_ + (double)local_418._0_8_;
      dVar42 = dVar58 * (dVar58 + dVar58);
      dVar59 = (dVar58 + dVar58) * dStack_420;
      dStack_1d0 = (DAT_149934d80._8_8_ - ((double)local_418._0_8_ * dVar57 + dVar42)) * dStack_440;
      local_1b8 = (dVar52 * local_428 + local_3e8 * dVar57) * (double)local_438._0_8_;
      local_1d8 = (dVar52 * dVar58 - dVar57 * local_428) * (double)local_3b8._0_8_;
      dStack_1b0 = (dVar57 * dVar64 - dVar59) * (double)local_3b8._8_8_;
      local_1c8 = (dVar57 * dVar64 + dVar59) * dStack_440;
      local_1f8._8_8_ = (dVar52 * dVar58 + dVar57 * local_428) * local_448;
      local_1f8._0_8_ =
           ((double)DAT_149934d80 - ((double)local_418._0_8_ * dVar57 + dVar64 * dVar52)) *
           local_448;
      local_1e8 = (local_3e8 * dVar57 - dVar52 * local_428) * local_448;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      local_1a8 = (1.0 - (dVar42 + dVar64 * dVar52)) * (double)local_438._0_8_;
      uStack_1a0 = 0;
      local_198 = local_3f8;
      dStack_190 = dStack_3f0;
      local_188 = local_408;
      uStack_180 = 0x3ff0000000000000;
      local_278 = 1.0;
      dStack_270 = 0.0;
      local_268 = 0.0;
      uStack_260 = 0;
      local_248 = 0.0;
      uStack_240 = 0;
      local_238 = 0.0;
      dStack_230 = 0.0;
      local_228 = 1.0;
      uStack_220 = 0;
      local_218 = local_338;
      dStack_210 = dStack_330;
      local_208 = local_328;
      uStack_200 = 0x3ff0000000000000;
      dVar58 = (double)local_438._0_8_ * 1.0;
      local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar32._8_8_ = -(ulonglong)(0.0 <= dVar69);
      auVar32._0_8_ = -(ulonglong)(0.0 <= dVar68);
      auVar35 = blendvpd(_DAT_149936790,auVar19,auVar32);
      uVar17 = -(ulonglong)(0.0 <= dVar58);
      dVar68 = (double)(~uVar17 & 0xbff0000000000000 | uVar17 & 0x3ff0000000000000);
      dVar69 = auVar35._0_8_;
      local_168 = local_168 * dVar69;
      dStack_170 = dStack_170 * dVar69;
      local_178 = local_178 * dVar69;
      dVar69 = auVar35._8_8_;
      local_148 = local_148 * dVar69;
      local_150 = local_150 * dVar69;
      local_158 = dVar69 * local_158;
      local_128 = local_128 * dVar68;
      local_130 = local_130 * dVar68;
      local_138 = dVar68 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar68 = local_288 * local_288 + local_298 * local_298;
      dVar69 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar50._0_8_ = dVar68 + dVar69;
      auVar50._8_8_ = dVar68 + dVar69;
      auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
      auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
      auVar35 = sqrtpd(auVar50,auVar50);
      auVar19 = divpd(auVar19,auVar35);
      auVar66._0_8_ = auVar19._0_8_ * local_288;
      auVar66._8_8_ = auVar19._8_8_ * dStack_280;
      local_2f8 = (double)((ulonglong)(local_298 * auVar19._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
      dStack_2f0 = (double)((ulonglong)(dStack_290 * auVar19._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar33);
      local_2d8 = local_118;
      dStack_2d0 = dStack_110;
      local_2c8._8_8_ = 0;
      local_2c8._0_8_ = local_108;
    }
    local_2b8 = local_448;
    dStack_2b0 = dStack_440;
    local_2a8._8_8_ = (double)uVar8 * 0.0;
    local_2a8._0_8_ = (double)uVar7 * 1.0;
    FUN_14818bf3f(&local_2f8,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                  *(longlong *)param_1[1] + 0x20);
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148199902 FUN_148199902 body=101 status=ok
// SIG undefined FUN_148199902(void)

ulonglong FUN_148199902(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_148199945;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1472d81d8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_148199945:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148199967 FUN_148199967 body=243 status=ok
// SIG undefined FUN_148199967(void)

void FUN_148199967(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (**(code **)(*param_1 + 0xb98))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a81888(param_1);
    if (lVar5 == 0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28);
    }
    else {
      plVar6 = (longlong *)FUN_144a81888(param_1);
    }
    lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
    iVar1 = *(int *)(lVar4 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        local_50 = *(undefined8 *)(lVar2 + 0x28);
        iVar3 = FUN_144a750a0(lVar5,&local_50);
        if ((iVar3 != -1) && (iVar3 < *(int *)(lVar5 + 0x28))) {
          FUN_148199a5c(param_2,param_1,lVar2);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148199a5c FUN_148199a5c body=10058 status=ok
// SIG undefined FUN_148199a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148199a5c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auStack_428 [32];
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [12];
  undefined4 uStack_3cc;
  longlong local_3c0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_370;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
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
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  FUN_14818c83c(&local_2f8);
  pdVar1 = (double *)*param_1;
  local_2d8 = *pdVar1 * -65536.0 + local_2d8;
  dStack_2d0 = pdVar1[1] * -65536.0 + dStack_2d0;
  local_2c8 = pdVar1[2] * -65536.0 + local_2c8;
  dStack_2c0 = dStack_2c0 + 0.0;
  local_3e8._0_4_ = (float)local_2a8;
  local_3f8._0_4_ = (float)dStack_2b0;
  local_408 = (double)CONCAT44(local_408._4_4_,(float)local_2b8);
  local_178 = (double)CONCAT44(local_178._4_4_,*(undefined4 *)(param_2 + 0x3d0));
  local_3c0 = param_2;
  uVar12 = FUN_148199902(*(longlong *)param_1[1] + 0x90);
  iVar15 = *(int *)(param_3 + 0x70);
  if ((longlong)iVar15 != 0) {
    lVar20 = *(longlong *)(param_3 + 0x68);
    lVar21 = 0;
    do {
      dVar66 = dStack_2a0;
      dVar42 = local_2a8;
      dVar55 = dStack_2b0;
      dVar23 = local_2b8;
      auVar70 = _local_3d8;
      auVar31 = ZEXT816(0x3ff0000000000000);
      if (*(char *)(lVar20 + 0x19 + lVar21) != '\0') {
        dVar54 = *(double *)(lVar20 + 0x50 + lVar21);
        dVar35 = *(double *)(lVar20 + 0x58 + lVar21);
        dVar36 = *(double *)(lVar20 + 0x60 + lVar21);
        dVar40 = *(double *)(lVar20 + 0x68 + lVar21);
        dVar53 = *(double *)(lVar20 + 0x70 + lVar21);
        dVar72 = *(double *)(lVar20 + 0x78 + lVar21);
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar19 = (longlong)*(int *)param_1[2] * 0x10;
        *(float *)(lVar18 + lVar19) = (float)(dVar40 - dVar54);
        *(float *)(lVar18 + 4 + lVar19) = (float)(dVar53 - dVar35);
        *(float *)(lVar18 + 8 + lVar19) = (float)(dVar72 - dVar36);
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar19 = (longlong)*(int *)param_1[2] * 0x10;
        *(undefined4 *)(lVar18 + lVar19) = local_408._0_4_;
        *(undefined4 *)(lVar18 + 4 + lVar19) = local_3f8._0_4_;
        *(undefined4 *)(lVar18 + 8 + lVar19) = local_3e8._0_4_;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4)
             = (uint)(*(char *)(lVar20 + 0x19 + lVar21) == '\x03');
        iVar16 = *(int *)param_1[2];
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x80);
        *(undefined4 *)(lVar18 + (longlong)iVar16 * 4) = uVar12;
        dVar36 = (dVar36 + dVar72) * 0.5;
        dVar35 = (dVar35 + dVar53) * 0.5;
        dVar54 = (dVar54 + dVar40) * 0.5;
        local_328 = ZEXT816(0);
        local_338 = ZEXT816(0);
        auVar50._8_8_ = dStack_2b0;
        auVar50._0_8_ = local_2b8;
        auVar56._8_8_ = dStack_2a0;
        auVar56._0_8_ = local_2a8;
        auVar43._8_8_ = 0x3ff0000000000000;
        auVar43._0_8_ = 0x3ff0000000000000;
        auVar43 = minpd(auVar43,auVar50);
        auVar56 = minpd(auVar31,auVar56);
        auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
        auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
        iVar13 = movmskpd((int)lVar18,auVar44);
        auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
        auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
        uVar17 = movmskpd(iVar16,auVar57);
        local_3d8._8_4_ = SUB84(dStack_2b0,0);
        uVar14 = local_3d8._8_4_;
        uStack_3cc = (undefined4)((ulonglong)dStack_2b0 >> 0x20);
        uVar11 = uStack_3cc;
        if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar54 = dVar54 * local_2b8;
          dVar35 = dVar35 * dStack_2b0;
          dVar36 = dVar36 * local_2a8;
          dVar39 = dStack_2a0 * 0.0;
          dVar55 = dVar35 * local_2f8 - dVar54 * dStack_2f0;
          dVar40 = dVar36 * dStack_2f0 - dVar35 * local_2e8;
          dVar53 = dVar54 * local_2e8 - dVar36 * local_2f8;
          dVar72 = dVar39 * dStack_2e0 - dVar39 * dStack_2e0;
          dVar40 = dVar40 + dVar40;
          dVar53 = dVar53 + dVar53;
          dVar55 = dVar55 + dVar55;
          dVar72 = dVar72 + dVar72;
          local_358._0_8_ =
               local_2e8 * 0.0 * -1.0 + dStack_2f0 * 0.0 + local_2f8 * 1.0 * 1.0 + dStack_2e0 * 0.0;
          local_358._8_8_ =
               local_2e8 * 0.0 * 1.0 + dStack_2f0 * 1.0 + local_2f8 * 0.0 * -1.0 + dStack_2e0 * 0.0;
          local_348._8_8_ =
               local_2e8 * 0.0 * -1.0 +
               ((local_2f8 * 0.0 * -1.0 + dStack_2e0 * 1.0) - dStack_2f0 * 0.0);
          local_348._0_8_ =
               local_2e8 * 1.0 * 1.0 +
               ((local_2f8 * 0.0 * 1.0 + dStack_2e0 * 0.0) - dStack_2f0 * 0.0);
          dVar35 = (dVar40 * local_2e8 - dVar55 * local_2f8) + dStack_2e0 * dVar53 + dVar35 +
                   dStack_2d0;
          local_338._8_4_ = SUB84(dVar35,0);
          local_338._0_8_ =
               (dVar55 * dStack_2f0 - local_2e8 * dVar53) + dStack_2e0 * dVar40 + dVar54 + local_2d8
          ;
          local_338._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          local_328._8_8_ =
               (dVar72 * dStack_2e0 - dVar72 * dStack_2e0) + dStack_2e0 * dVar72 + dVar39 +
               dStack_2c0;
          local_328._0_8_ =
               (dVar53 * local_2f8 - dStack_2f0 * dVar40) + dStack_2e0 * dVar55 + dVar36 + local_2c8
          ;
          _local_3d8 = auVar50;
        }
        else {
          dVar53 = dStack_2f0 + dStack_2f0;
          dVar72 = local_2e8 + local_2e8;
          dVar41 = local_2f8 * (local_2f8 + local_2f8);
          local_1f8 = (1.0 - (local_2e8 * dVar72 + dStack_2f0 * dVar53)) * local_2b8;
          dVar40 = (1.0 - (local_2e8 * dVar72 + dVar41)) * dStack_2b0;
          dVar39 = (local_2f8 + local_2f8) * dStack_2e0;
          dStack_1b0 = (dVar72 * dStack_2f0 - dVar39) * local_2a8;
          local_1b8 = (dVar53 * dStack_2e0 + local_2f8 * dVar72) * local_2a8;
          dStack_1f0 = (dVar53 * local_2f8 + dVar72 * dStack_2e0) * local_2b8;
          local_1c8 = (dVar72 * dStack_2f0 + dVar39) * dStack_2b0;
          local_1e8 = (local_2f8 * dVar72 - dVar53 * dStack_2e0) * local_2b8;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar40,0);
          local_1d8._0_8_ = (dVar53 * local_2f8 - dVar72 * dStack_2e0) * dStack_2b0;
          local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar41 + dStack_2f0 * dVar53)) * local_2a8;
          uStack_1a0 = 0;
          local_198 = local_2d8;
          dStack_190 = dStack_2d0;
          local_188 = local_2c8;
          uStack_180 = 0x3ff0000000000000;
          local_268 = ZEXT816(0);
          local_248 = ZEXT816(0);
          local_238 = ZEXT816(0);
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = dVar36;
          dVar36 = local_2a8 * 1.0;
          _local_3d8 = auVar70;
          local_278 = auVar31;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_228 = auVar31;
          local_218 = dVar54;
          dStack_210 = dVar35;
          FUN_1447fea8d(&local_178,local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar31._8_8_ = -(ulonglong)(0.0 <= dVar55);
          auVar31._0_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar70._12_4_ = 0x3ff00000;
          auVar70._0_12_ = ZEXT812(0x3ff0000000000000);
          auVar70 = blendvpd(_DAT_149936790,auVar70,auVar31);
          uVar22 = -(ulonglong)(0.0 <= dVar36);
          dVar55 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar54 = auVar70._0_8_;
          local_168 = local_168 * dVar54;
          dStack_170 = dStack_170 * dVar54;
          local_178 = local_178 * dVar54;
          dVar54 = auVar70._8_8_;
          local_148 = local_148 * dVar54;
          local_150 = local_150 * dVar54;
          local_158 = dVar54 * local_158;
          local_128 = local_128 * dVar55;
          local_130 = local_130 * dVar55;
          local_138 = dVar55 * local_138;
          FUN_14481fd10(&local_398,&local_178);
          dVar55 = local_388 * local_388 + local_398 * local_398;
          dVar54 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
          auVar45._0_8_ = dVar55 + dVar54;
          auVar45._8_8_ = dVar55 + dVar54;
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
          auVar70 = sqrtpd(auVar45,auVar45);
          auVar58._8_8_ = 0x3ff0000000000000;
          auVar58._0_8_ = 0x3ff0000000000000;
          auVar70 = divpd(auVar58,auVar70);
          auVar59._0_8_ = auVar70._0_8_ * local_388;
          auVar59._8_8_ = auVar70._8_8_ * dStack_380;
          local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar24);
          local_358._8_8_ =
               (ulonglong)(dStack_390 * auVar70._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
          local_358._0_8_ =
               (ulonglong)(local_398 * auVar70._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
          local_338._8_8_ = uStack_110;
          local_338._0_8_ = local_118;
          local_328._8_8_ = 0;
          local_328._0_8_ = local_108;
        }
        local_318._8_4_ = uVar14;
        local_318._0_8_ = dVar23;
        local_318._12_4_ = uVar11;
        local_308._8_4_ = SUB84(dVar66 * 0.0,0);
        local_308._0_8_ = dVar42 * 1.0;
        local_308._12_4_ = (int)((ulonglong)(dVar66 * 0.0) >> 0x20);
        FUN_14818bf3f(local_358,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
      }
      lVar21 = lVar21 + 0x100;
    } while ((longlong)iVar15 * 0x100 != lVar21);
  }
  auVar70 = _DAT_149934d80;
  if ((longlong)*(int *)(param_3 + 0x50) != 0) {
    lVar20 = (longlong)*(int *)(param_3 + 0x50) * 0x70;
    lVar21 = *(longlong *)(param_3 + 0x48) + 0x48;
    do {
      if (*(char *)(lVar21 + -0x2f) != '\0') {
        uVar14 = *(undefined4 *)(lVar21 + 0x20);
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar19 = (longlong)*(int *)param_1[2] * 0x10;
        *(undefined8 *)(lVar18 + lVar19) = *(undefined8 *)(lVar21 + 0x18);
        *(undefined4 *)(lVar18 + 8 + lVar19) = uVar14;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar19 = (longlong)*(int *)param_1[2] * 0x10;
        *(undefined4 *)(lVar18 + lVar19) = local_408._0_4_;
        *(undefined4 *)(lVar18 + 4 + lVar19) = local_3f8._0_4_;
        *(undefined4 *)(lVar18 + 8 + lVar19) = local_3e8._0_4_;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4)
             = (uint)(*(char *)(lVar21 + -0x2f) == '\x03');
        *(undefined4 *)
         (*(longlong *)(*(longlong *)param_1[1] + 0x80) + (longlong)*(int *)param_1[2] * 4) = uVar12
        ;
        lVar18 = lVar21;
        uVar14 = FUN_144a7484c(lVar21,&local_178);
        dVar66 = dStack_2a0;
        dVar42 = local_2a8;
        dVar55 = dStack_2b0;
        dVar23 = local_2b8;
        local_338 = ZEXT816(0);
        local_328 = ZEXT816(0);
        auVar3._8_8_ = dStack_2b0;
        auVar3._0_8_ = local_2b8;
        auVar7._8_8_ = dStack_2a0;
        auVar7._0_8_ = local_2a8;
        auVar31 = minpd(auVar70,auVar3);
        auVar50 = minpd(ZEXT816(0x3ff0000000000000),auVar7);
        auVar64._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar64._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar15 = movmskpd(uVar14,auVar64);
        auVar67._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
        auVar67._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
        uVar17 = movmskpd((int)lVar18,auVar67);
        if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar23 = local_178 * local_2e8 * 1.0 +
                   dStack_160 * dStack_2f0 + local_168 * local_2f8 * -1.0 + dStack_170 * dStack_2e0;
          local_358._8_4_ = SUB84(dVar23,0);
          local_358._0_8_ =
               dStack_170 * local_2e8 * -1.0 +
               local_168 * dStack_2f0 + dStack_160 * local_2f8 * 1.0 + local_178 * dStack_2e0;
          local_358._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          local_348._8_8_ =
               local_168 * local_2e8 * -1.0 +
               ((local_2f8 * local_178 * -1.0 + dStack_160 * dStack_2e0) - dStack_170 * dStack_2f0);
          local_348._0_8_ =
               dStack_160 * local_2e8 * 1.0 +
               ((local_2f8 * dStack_170 * 1.0 + local_168 * dStack_2e0) - local_178 * dStack_2f0);
          dVar36 = *(double *)(lVar21 + -0x18) * local_2b8;
          dVar40 = *(double *)(lVar21 + -0x10) * dStack_2b0;
          dVar54 = *(double *)(lVar21 + -8) * local_2a8;
          dVar35 = dStack_2a0 * 0.0;
          dVar23 = dVar40 * local_2f8 - dVar36 * dStack_2f0;
          dVar53 = dVar54 * dStack_2f0 - dVar40 * local_2e8;
          dVar72 = dVar36 * local_2e8 - dVar54 * local_2f8;
          dVar55 = dVar35 * dStack_2e0 - dVar35 * dStack_2e0;
          dVar53 = dVar53 + dVar53;
          dVar72 = dVar72 + dVar72;
          dVar23 = dVar23 + dVar23;
          dVar55 = dVar55 + dVar55;
          local_338._0_8_ =
               (dVar23 * dStack_2f0 - local_2e8 * dVar72) + dStack_2e0 * dVar53 + dVar36 + local_2d8
          ;
          local_338._8_8_ =
               (dVar53 * local_2e8 - dVar23 * local_2f8) + dStack_2e0 * dVar72 + dVar40 + dStack_2d0
          ;
          local_328._0_8_ =
               (dVar72 * local_2f8 - dStack_2f0 * dVar53) + dStack_2e0 * dVar23 + dVar54 + local_2c8
          ;
          local_328._8_8_ =
               (dVar55 * dStack_2e0 - dVar55 * dStack_2e0) + dStack_2e0 * dVar55 + dVar35 +
               dStack_2c0;
        }
        else {
          dVar53 = dStack_2f0 + dStack_2f0;
          dVar54 = local_2e8 + local_2e8;
          dVar36 = local_2f8 * (local_2f8 + local_2f8);
          local_1f8 = (auVar70._0_8_ - (local_2e8 * dVar54 + dStack_2f0 * dVar53)) * local_2b8;
          dVar40 = (auVar70._8_8_ - (local_2e8 * dVar54 + dVar36)) * dStack_2b0;
          dVar35 = (local_2f8 + local_2f8) * dStack_2e0;
          dStack_1b0 = (dVar54 * dStack_2f0 - dVar35) * local_2a8;
          local_1b8 = (dVar53 * dStack_2e0 + local_2f8 * dVar54) * local_2a8;
          dStack_1f0 = (dVar53 * local_2f8 + dVar54 * dStack_2e0) * local_2b8;
          local_1c8 = (dVar54 * dStack_2f0 + dVar35) * dStack_2b0;
          local_1e8 = (local_2f8 * dVar54 - dVar53 * dStack_2e0) * local_2b8;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar40,0);
          local_1d8._0_8_ = (dVar53 * local_2f8 - dVar54 * dStack_2e0) * dStack_2b0;
          local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_1a8 = (1.0 - (dVar36 + dStack_2f0 * dVar53)) * local_2a8;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_2d8;
          dStack_190 = dStack_2d0;
          local_188 = local_2c8;
          uStack_180 = 0x3ff0000000000000;
          dVar40 = dStack_170 + dStack_170;
          dVar35 = local_168 + local_168;
          dVar53 = local_178 * (local_178 + local_178);
          dVar54 = auVar70._8_8_ - (local_168 * dVar35 + dVar53);
          dVar36 = (local_178 + local_178) * dStack_160;
          local_278._8_8_ = dVar40 * local_178 + dVar35 * dStack_160;
          local_278._0_8_ = auVar70._0_8_ - (local_168 * dVar35 + dStack_170 * dVar40);
          local_268._8_8_ = 0;
          local_268._0_8_ = local_178 * dVar35 - dVar40 * dStack_160;
          local_258._8_4_ = SUB84(dVar54,0);
          local_258._0_8_ = dVar40 * local_178 - dVar35 * dStack_160;
          local_258._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          local_248._8_8_ = 0;
          local_248._0_8_ = dVar35 * dStack_170 + dVar36;
          local_238._8_8_ = dVar35 * dStack_170 - dVar36;
          local_238._0_8_ = dVar40 * dStack_160 + local_178 * dVar35;
          local_228._8_8_ = 0;
          local_228._0_8_ = 1.0 - (dVar53 + dStack_170 * dVar40);
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = *(double *)(lVar21 + -8);
          dVar54 = local_2a8 * 1.0;
          local_218 = *(double *)(lVar21 + -0x18);
          dStack_210 = *(double *)(lVar21 + -0x10);
          FUN_1447fea8d(&local_178,local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar25._8_8_ = -(ulonglong)(0.0 <= dVar55);
          auVar25._0_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar31 = blendvpd(_DAT_149936790,auVar70,auVar25);
          uVar22 = -(ulonglong)(0.0 <= dVar54);
          dVar23 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar55 = auVar31._0_8_;
          local_168 = local_168 * dVar55;
          dStack_170 = dStack_170 * dVar55;
          local_178 = local_178 * dVar55;
          dVar55 = auVar31._8_8_;
          local_148 = local_148 * dVar55;
          local_150 = local_150 * dVar55;
          local_158 = dVar55 * local_158;
          local_128 = local_128 * dVar23;
          local_130 = local_130 * dVar23;
          local_138 = dVar23 * local_138;
          FUN_14481fd10(&local_398,&local_178);
          dVar23 = local_388 * local_388 + local_398 * local_398;
          dVar55 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
          auVar46._0_8_ = dVar23 + dVar55;
          auVar46._8_8_ = dVar23 + dVar55;
          auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          auVar31 = sqrtpd(auVar46,auVar46);
          auVar31 = divpd(auVar70,auVar31);
          auVar60._0_8_ = auVar31._0_8_ * local_388;
          auVar60._8_8_ = auVar31._8_8_ * dStack_380;
          local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar26);
          local_358._8_8_ =
               (ulonglong)(dStack_390 * auVar31._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar46._8_8_);
          local_358._0_8_ =
               (ulonglong)(local_398 * auVar31._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar46._0_8_);
          local_338._8_8_ = uStack_110;
          local_338._0_8_ = local_118;
          local_328._8_8_ = 0;
          local_328._0_8_ = local_108;
        }
        local_308._8_4_ = SUB84(dVar66 * 0.0,0);
        local_308._0_8_ = dVar42 * 1.0;
        local_308._12_4_ = (int)((ulonglong)(dVar66 * 0.0) >> 0x20);
        local_318 = auVar3;
        FUN_14818bf3f(local_358,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
      }
      lVar21 = lVar21 + 0x70;
      lVar20 = lVar20 + -0x70;
    } while (lVar20 != 0);
  }
  iVar15 = *(int *)(param_3 + 0x40);
  if ((longlong)iVar15 != 0) {
    lVar20 = *(longlong *)(param_3 + 0x38);
    _local_3d8 = ZEXT816(0x3ff0000000000000) << 0x40;
    dVar23 = DAT_149931160;
    dVar55 = DAT_149931160._8_8_;
    lVar21 = 0;
    do {
      dVar35 = dStack_2a0;
      dVar54 = local_2a8;
      dVar66 = dStack_2b0;
      dVar42 = local_2b8;
      if (*(char *)(lVar20 + 0x19 + lVar21) != '\0') {
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        lVar19 = (longlong)*(int *)param_1[3] * 0x10;
        *(undefined4 *)(lVar18 + lVar19) = *(undefined4 *)(lVar20 + 0x48 + lVar21);
        *(undefined8 *)(lVar18 + 4 + lVar19) = 0;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar19 = (longlong)*(int *)param_1[3] * 0x10;
        *(undefined4 *)(lVar18 + lVar19) = local_408._0_4_;
        *(undefined4 *)(lVar18 + 4 + lVar19) = local_3f8._0_4_;
        *(undefined4 *)(lVar18 + 8 + lVar19) = local_3e8._0_4_;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[3] * 4)
             = (uint)(*(char *)(lVar20 + 0x19 + lVar21) == '\x03');
        iVar16 = *(int *)param_1[3];
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x80);
        *(undefined4 *)(lVar18 + (longlong)iVar16 * 4) = uVar12;
        pdVar1 = (double *)(lVar20 + 0x30 + lVar21);
        dVar40 = *pdVar1;
        dVar53 = pdVar1[1];
        dVar36 = *(double *)(lVar20 + 0x40 + lVar21);
        local_338 = ZEXT816(0);
        local_328 = ZEXT816(0);
        auVar4._8_8_ = dStack_2b0;
        auVar4._0_8_ = local_2b8;
        auVar8._8_8_ = dStack_2a0;
        auVar8._0_8_ = local_2a8;
        auVar37._8_8_ = 0x3ff0000000000000;
        auVar37._0_8_ = 0x3ff0000000000000;
        auVar70 = minpd(auVar37,auVar4);
        auVar31 = minpd(ZEXT816(0x3ff0000000000000),auVar8);
        auVar38._8_8_ = -(ulonglong)(auVar70._8_8_ < 0.0);
        auVar38._0_8_ = -(ulonglong)(auVar70._0_8_ < 0.0);
        iVar13 = movmskpd((int)lVar18,auVar38);
        auVar47._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar47._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        uVar17 = movmskpd(iVar16,auVar47);
        if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar40 = dVar40 * local_2b8;
          dVar53 = dVar53 * dStack_2b0;
          dVar36 = dVar36 * local_2a8;
          dVar72 = dStack_2a0 * 0.0;
          dVar42 = dVar53 * local_2f8 - dVar40 * dStack_2f0;
          dVar39 = dVar36 * dStack_2f0 - dVar53 * local_2e8;
          dVar41 = dVar40 * local_2e8 - dVar36 * local_2f8;
          dVar66 = dVar72 * dStack_2e0 - dVar72 * dStack_2e0;
          dVar39 = dVar39 + dVar39;
          dVar41 = dVar41 + dVar41;
          dVar42 = dVar42 + dVar42;
          dVar66 = dVar66 + dVar66;
          local_358._8_8_ =
               local_2e8 * 0.0 * dVar55 +
               dStack_2f0 * stack0xfffffffffffffc30 + local_2f8 * 0.0 * -1.0 + dStack_2e0 * 0.0;
          local_358._0_8_ =
               local_2e8 * 0.0 * dVar23 +
               dStack_2f0 * (double)local_3d8._0_8_ + local_2f8 * 1.0 * 1.0 + dStack_2e0 * 0.0;
          local_348._8_8_ =
               local_2e8 * 0.0 * -1.0 +
               ((local_2f8 * 0.0 * -1.0 + dStack_2e0 * stack0xfffffffffffffc30) - dStack_2f0 * 0.0);
          local_348._0_8_ =
               local_2e8 * 1.0 * 1.0 +
               ((local_2f8 * 0.0 * 1.0 + dStack_2e0 * (double)local_3d8._0_8_) - dStack_2f0 * 0.0);
          local_338._0_8_ =
               (dVar42 * dStack_2f0 - local_2e8 * dVar41) + dStack_2e0 * dVar39 + dVar40 + local_2d8
          ;
          local_338._8_8_ =
               (dVar39 * local_2e8 - dVar42 * local_2f8) + dStack_2e0 * dVar41 + dVar53 + dStack_2d0
          ;
          local_328._8_8_ =
               (dVar66 * dStack_2e0 - dVar66 * dStack_2e0) + dStack_2e0 * dVar66 + dVar72 +
               dStack_2c0;
          local_328._0_8_ =
               (dVar41 * local_2f8 - dStack_2f0 * dVar39) + dStack_2e0 * dVar42 + dVar36 + local_2c8
          ;
        }
        else {
          dVar72 = dStack_2f0 + dStack_2f0;
          dVar39 = local_2e8 + local_2e8;
          dVar69 = local_2f8 * (local_2f8 + local_2f8);
          local_1f8 = (1.0 - (local_2e8 * dVar39 + dStack_2f0 * dVar72)) * local_2b8;
          dVar41 = (local_2f8 + local_2f8) * dStack_2e0;
          dStack_1b0 = (dVar39 * dStack_2f0 - dVar41) * local_2a8;
          local_1b8 = (dVar72 * dStack_2e0 + local_2f8 * dVar39) * local_2a8;
          dStack_1f0 = (dVar72 * local_2f8 + dVar39 * dStack_2e0) * local_2b8;
          local_1c8 = (dVar39 * dStack_2f0 + dVar41) * dStack_2b0;
          local_1e8 = (local_2f8 * dVar39 - dVar72 * dStack_2e0) * local_2b8;
          uStack_1e0 = 0;
          local_1d8._8_8_ = (1.0 - (local_2e8 * dVar39 + dVar69)) * dStack_2b0;
          local_1d8._0_8_ = (dVar72 * local_2f8 - dVar39 * dStack_2e0) * dStack_2b0;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar69 + dStack_2f0 * dVar72)) * local_2a8;
          uStack_1a0 = 0;
          local_198 = local_2d8;
          dStack_190 = dStack_2d0;
          local_188 = local_2c8;
          uStack_180 = 0x3ff0000000000000;
          local_278 = ZEXT816(0x3ff0000000000000);
          local_268 = ZEXT816(0);
          local_248 = ZEXT816(0);
          local_238 = ZEXT816(0);
          local_228 = ZEXT816(0x3ff0000000000000);
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = dVar36;
          dVar36 = local_2a8 * 1.0;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_218 = dVar40;
          dStack_210 = dVar53;
          FUN_1447fea8d(&local_178,local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar27._8_8_ = -(ulonglong)(0.0 <= dVar66);
          auVar27._0_8_ = -(ulonglong)(0.0 <= dVar42);
          auVar2._12_4_ = 0x3ff00000;
          auVar2._0_12_ = ZEXT812(0x3ff0000000000000);
          auVar70 = blendvpd(_DAT_149936790,auVar2,auVar27);
          uVar22 = -(ulonglong)(0.0 <= dVar36);
          dVar42 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar66 = auVar70._0_8_;
          local_168 = local_168 * dVar66;
          dStack_170 = dStack_170 * dVar66;
          local_178 = local_178 * dVar66;
          dVar66 = auVar70._8_8_;
          local_148 = local_148 * dVar66;
          local_150 = local_150 * dVar66;
          local_158 = dVar66 * local_158;
          local_128 = local_128 * dVar42;
          local_130 = local_130 * dVar42;
          local_138 = dVar42 * local_138;
          FUN_14481fd10(&local_398,&local_178);
          dVar42 = local_388 * local_388 + local_398 * local_398;
          dVar66 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
          auVar48._0_8_ = dVar42 + dVar66;
          auVar48._8_8_ = dVar42 + dVar66;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
          auVar70 = sqrtpd(auVar48,auVar48);
          auVar61._8_8_ = 0x3ff0000000000000;
          auVar61._0_8_ = 0x3ff0000000000000;
          auVar70 = divpd(auVar61,auVar70);
          auVar62._0_8_ = auVar70._0_8_ * local_388;
          auVar62._8_8_ = auVar70._8_8_ * dStack_380;
          local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar62,auVar28);
          local_358._8_8_ =
               (ulonglong)(dStack_390 * auVar70._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
          local_358._0_8_ =
               (ulonglong)(local_398 * auVar70._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
          local_338._8_8_ = uStack_110;
          local_338._0_8_ = local_118;
          local_328._8_8_ = 0;
          local_328._0_8_ = local_108;
        }
        local_308._8_4_ = SUB84(dVar35 * 0.0,0);
        local_308._0_8_ = dVar54 * 1.0;
        local_308._12_4_ = (int)((ulonglong)(dVar35 * 0.0) >> 0x20);
        local_318 = auVar4;
        FUN_14818bf3f(local_358,*(undefined4 *)param_1[3],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[3] = *(int *)param_1[3] + 1;
      }
      lVar21 = lVar21 + 0x50;
    } while ((longlong)iVar15 * 0x50 != lVar21);
  }
  auVar70 = _DAT_149934d80;
  if ((longlong)*(int *)(param_3 + 0x60) != 0) {
    lVar20 = (longlong)*(int *)(param_3 + 0x60) * 0x68;
    lVar21 = *(longlong *)(param_3 + 0x58) + 0x48;
    do {
      if (*(char *)(lVar21 + -0x2f) != '\0') {
        iVar15 = *(int *)param_1[4];
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
        *(undefined8 *)(lVar18 + (longlong)iVar15 * 0x10) = *(undefined8 *)(lVar21 + 0x18);
        *(undefined8 *)(lVar18 + 8 + (longlong)iVar15 * 0x10) = 0;
        lVar18 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
        lVar19 = (longlong)*(int *)param_1[4] * 0x10;
        *(undefined4 *)(lVar18 + lVar19) = local_408._0_4_;
        *(undefined4 *)(lVar18 + 4 + lVar19) = local_3f8._0_4_;
        *(undefined4 *)(lVar18 + 8 + lVar19) = local_3e8._0_4_;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 0;
        *(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[4] * 4)
             = (uint)(*(char *)(lVar21 + -0x2f) == '\x03');
        *(undefined4 *)
         (*(longlong *)(*(longlong *)param_1[1] + 0x80) + (longlong)*(int *)param_1[4] * 4) = uVar12
        ;
        lVar18 = lVar21;
        uVar14 = FUN_144a7484c(lVar21,&local_178);
        dVar66 = dStack_2a0;
        dVar42 = local_2a8;
        dVar55 = dStack_2b0;
        dVar23 = local_2b8;
        local_338 = ZEXT816(0);
        local_328 = ZEXT816(0);
        auVar5._8_8_ = dStack_2b0;
        auVar5._0_8_ = local_2b8;
        auVar9._8_8_ = dStack_2a0;
        auVar9._0_8_ = local_2a8;
        auVar31 = minpd(auVar70,auVar5);
        auVar50 = minpd(ZEXT816(0x3ff0000000000000),auVar9);
        auVar65._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar65._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar15 = movmskpd(uVar14,auVar65);
        auVar68._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
        auVar68._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
        uVar17 = movmskpd((int)lVar18,auVar68);
        if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar23 = local_178 * local_2e8 * 1.0 +
                   dStack_160 * dStack_2f0 + local_168 * local_2f8 * -1.0 + dStack_170 * dStack_2e0;
          local_358._8_4_ = SUB84(dVar23,0);
          local_358._0_8_ =
               dStack_170 * local_2e8 * -1.0 +
               local_168 * dStack_2f0 + dStack_160 * local_2f8 * 1.0 + local_178 * dStack_2e0;
          local_358._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          local_348._8_8_ =
               local_168 * local_2e8 * -1.0 +
               ((local_2f8 * local_178 * -1.0 + dStack_160 * dStack_2e0) - dStack_170 * dStack_2f0);
          local_348._0_8_ =
               dStack_160 * local_2e8 * 1.0 +
               ((local_2f8 * dStack_170 * 1.0 + local_168 * dStack_2e0) - local_178 * dStack_2f0);
          dVar36 = *(double *)(lVar21 + -0x18) * local_2b8;
          dVar40 = *(double *)(lVar21 + -0x10) * dStack_2b0;
          dVar54 = *(double *)(lVar21 + -8) * local_2a8;
          dVar35 = dStack_2a0 * 0.0;
          dVar23 = dVar40 * local_2f8 - dVar36 * dStack_2f0;
          dVar53 = dVar54 * dStack_2f0 - dVar40 * local_2e8;
          dVar72 = dVar36 * local_2e8 - dVar54 * local_2f8;
          dVar55 = dVar35 * dStack_2e0 - dVar35 * dStack_2e0;
          dVar53 = dVar53 + dVar53;
          dVar72 = dVar72 + dVar72;
          dVar23 = dVar23 + dVar23;
          dVar55 = dVar55 + dVar55;
          local_338._0_8_ =
               (dVar23 * dStack_2f0 - local_2e8 * dVar72) + dStack_2e0 * dVar53 + dVar36 + local_2d8
          ;
          local_338._8_8_ =
               (dVar53 * local_2e8 - dVar23 * local_2f8) + dStack_2e0 * dVar72 + dVar40 + dStack_2d0
          ;
          local_328._0_8_ =
               (dVar72 * local_2f8 - dStack_2f0 * dVar53) + dStack_2e0 * dVar23 + dVar54 + local_2c8
          ;
          local_328._8_8_ =
               (dVar55 * dStack_2e0 - dVar55 * dStack_2e0) + dStack_2e0 * dVar55 + dVar35 +
               dStack_2c0;
        }
        else {
          dVar53 = dStack_2f0 + dStack_2f0;
          dVar54 = local_2e8 + local_2e8;
          dVar36 = local_2f8 * (local_2f8 + local_2f8);
          local_1f8 = (auVar70._0_8_ - (local_2e8 * dVar54 + dStack_2f0 * dVar53)) * local_2b8;
          dVar40 = (auVar70._8_8_ - (local_2e8 * dVar54 + dVar36)) * dStack_2b0;
          dVar35 = (local_2f8 + local_2f8) * dStack_2e0;
          dStack_1b0 = (dVar54 * dStack_2f0 - dVar35) * local_2a8;
          local_1b8 = (dVar53 * dStack_2e0 + local_2f8 * dVar54) * local_2a8;
          dStack_1f0 = (dVar53 * local_2f8 + dVar54 * dStack_2e0) * local_2b8;
          local_1c8 = (dVar54 * dStack_2f0 + dVar35) * dStack_2b0;
          local_1e8 = (local_2f8 * dVar54 - dVar53 * dStack_2e0) * local_2b8;
          uStack_1e0 = 0;
          local_1d8._8_4_ = SUB84(dVar40,0);
          local_1d8._0_8_ = (dVar53 * local_2f8 - dVar54 * dStack_2e0) * dStack_2b0;
          local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
          local_1a8 = (1.0 - (dVar36 + dStack_2f0 * dVar53)) * local_2a8;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_2d8;
          dStack_190 = dStack_2d0;
          local_188 = local_2c8;
          uStack_180 = 0x3ff0000000000000;
          dVar40 = dStack_170 + dStack_170;
          dVar35 = local_168 + local_168;
          dVar53 = local_178 * (local_178 + local_178);
          dVar54 = auVar70._8_8_ - (local_168 * dVar35 + dVar53);
          dVar36 = (local_178 + local_178) * dStack_160;
          local_278._8_8_ = dVar40 * local_178 + dVar35 * dStack_160;
          local_278._0_8_ = auVar70._0_8_ - (local_168 * dVar35 + dStack_170 * dVar40);
          local_268._8_8_ = 0;
          local_268._0_8_ = local_178 * dVar35 - dVar40 * dStack_160;
          local_258._8_4_ = SUB84(dVar54,0);
          local_258._0_8_ = dVar40 * local_178 - dVar35 * dStack_160;
          local_258._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          local_248._8_8_ = 0;
          local_248._0_8_ = dVar35 * dStack_170 + dVar36;
          local_238._8_8_ = dVar35 * dStack_170 - dVar36;
          local_238._0_8_ = dVar40 * dStack_160 + local_178 * dVar35;
          local_228._8_8_ = 0;
          local_228._0_8_ = 1.0 - (dVar53 + dStack_170 * dVar40);
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = *(double *)(lVar21 + -8);
          dVar54 = local_2a8 * 1.0;
          local_218 = *(double *)(lVar21 + -0x18);
          dStack_210 = *(double *)(lVar21 + -0x10);
          FUN_1447fea8d(&local_178,local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar29._8_8_ = -(ulonglong)(0.0 <= dVar55);
          auVar29._0_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar31 = blendvpd(_DAT_149936790,auVar70,auVar29);
          uVar22 = -(ulonglong)(0.0 <= dVar54);
          dVar23 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar55 = auVar31._0_8_;
          local_168 = local_168 * dVar55;
          dStack_170 = dStack_170 * dVar55;
          local_178 = local_178 * dVar55;
          dVar55 = auVar31._8_8_;
          local_148 = local_148 * dVar55;
          local_150 = local_150 * dVar55;
          local_158 = dVar55 * local_158;
          local_128 = local_128 * dVar23;
          local_130 = local_130 * dVar23;
          local_138 = dVar23 * local_138;
          FUN_14481fd10(&local_398,&local_178);
          dVar23 = local_388 * local_388 + local_398 * local_398;
          dVar55 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
          auVar49._0_8_ = dVar23 + dVar55;
          auVar49._8_8_ = dVar23 + dVar55;
          auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
          auVar31 = sqrtpd(auVar49,auVar49);
          auVar31 = divpd(auVar70,auVar31);
          auVar63._0_8_ = auVar31._0_8_ * local_388;
          auVar63._8_8_ = auVar31._8_8_ * dStack_380;
          local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar30);
          local_358._8_8_ =
               (ulonglong)(dStack_390 * auVar31._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
          local_358._0_8_ =
               (ulonglong)(local_398 * auVar31._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
          local_338._8_8_ = uStack_110;
          local_338._0_8_ = local_118;
          local_328._8_8_ = 0;
          local_328._0_8_ = local_108;
        }
        local_308._8_4_ = SUB84(dVar66 * 0.0,0);
        local_308._0_8_ = dVar42 * 1.0;
        local_308._12_4_ = (int)((ulonglong)(dVar66 * 0.0) >> 0x20);
        local_318 = auVar5;
        FUN_14818bf3f(local_358,*(undefined4 *)param_1[4],*(longlong *)param_1[1] + 0x10,
                      *(longlong *)param_1[1] + 0x20);
        *(int *)param_1[4] = *(int *)param_1[4] + 1;
      }
      lVar21 = lVar21 + 0x68;
      lVar20 = lVar20 + -0x68;
    } while (lVar20 != 0);
  }
  if ((((*(int *)(param_3 + 0x70) == 0) && (*(int *)(param_3 + 0x50) == 0)) &&
      (*(int *)(param_3 + 0x40) == 0)) && (*(int *)(param_3 + 0x60) == 0)) {
    FUN_14487e4ca(local_3c0);
    lVar20 = *(longlong *)(*(longlong *)param_1[1] + 0x50);
    lVar21 = (longlong)*(int *)param_1[2] * 0x10;
    *(float *)(lVar20 + lVar21) = (float)(dStack_380 + dStack_380);
    *(float *)(lVar20 + 4 + lVar21) = (float)(local_378 + local_378);
    *(float *)(lVar20 + 8 + lVar21) = (float)(local_370 + local_370);
    *(undefined4 *)(lVar20 + 0xc + lVar21) = 0;
    lVar20 = *(longlong *)(*(longlong *)param_1[1] + 0x60);
    lVar21 = (longlong)*(int *)param_1[2] * 0x10;
    *(undefined4 *)(lVar20 + lVar21) = local_408._0_4_;
    *(undefined4 *)(lVar20 + 4 + lVar21) = local_3f8._0_4_;
    *(undefined4 *)(lVar20 + 8 + lVar21) = local_3e8._0_4_;
    *(undefined4 *)(lVar20 + 0xc + lVar21) = 0;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)param_1[1] + 0x70) + (longlong)*(int *)param_1[2] * 4) = 1;
    iVar15 = *(int *)param_1[2];
    lVar20 = *(longlong *)(*(longlong *)param_1[1] + 0x80);
    *(undefined4 *)(lVar20 + (longlong)iVar15 * 4) = uVar12;
    auVar70 = _DAT_149934d80;
    local_328 = (undefined1  [16])0x0;
    local_338 = (undefined1  [16])0x0;
    auVar6._8_8_ = dStack_2b0;
    auVar6._0_8_ = local_2b8;
    auVar10._8_8_ = dStack_2a0;
    auVar10._0_8_ = local_2a8;
    auVar31 = minpd(_DAT_149934d80,auVar6);
    auVar50 = minpd(ZEXT816(0x3ff0000000000000),auVar10);
    auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    iVar16 = movmskpd((int)lVar20,auVar32);
    auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
    auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
    uVar17 = movmskpd(iVar15,auVar51);
    if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
      local_398 = local_398 * local_2b8;
      dStack_390 = dStack_390 * dStack_2b0;
      local_408 = local_388 * local_2a8;
      dStack_400 = dStack_2a0 * 0.0;
      local_3f8._8_4_ = SUB84(dStack_390,0);
      local_3f8._0_8_ = local_398;
      local_3f8._12_4_ = (int)((ulonglong)dStack_390 >> 0x20);
      dVar23 = dStack_390 * local_2f8 - local_398 * dStack_2f0;
      dVar55 = local_408 * dStack_2f0 - dStack_390 * local_2e8;
      dVar42 = local_398 * local_2e8 - local_408 * local_2f8;
      dVar54 = dStack_400 * dStack_2e0 - dStack_400 * dStack_2e0;
      dVar55 = dVar55 + dVar55;
      dVar42 = dVar42 + dVar42;
      dVar23 = dVar23 + dVar23;
      dVar54 = dVar54 + dVar54;
      local_358._8_8_ =
           local_2e8 * 0.0 * 1.0 + dStack_2f0 * 1.0 + local_2f8 * 0.0 * -1.0 + dStack_2e0 * 0.0;
      local_358._0_8_ =
           local_2e8 * 0.0 * -1.0 + dStack_2f0 * 0.0 + local_2f8 * 1.0 * 1.0 + dStack_2e0 * 0.0;
      local_348._8_8_ =
           local_2e8 * 0.0 * -1.0 + ((local_2f8 * 0.0 * -1.0 + dStack_2e0 * 1.0) - dStack_2f0 * 0.0)
      ;
      local_348._0_8_ =
           local_2e8 * 1.0 * 1.0 + ((local_2f8 * 0.0 * 1.0 + dStack_2e0 * 0.0) - dStack_2f0 * 0.0);
      dVar66 = (dVar55 * local_2e8 - dVar23 * local_2f8) +
               dStack_2e0 * dVar42 + (double)local_3f8._8_8_ + dStack_2d0;
      local_338._8_4_ = SUB84(dVar66,0);
      local_338._0_8_ =
           (dVar23 * dStack_2f0 - local_2e8 * dVar42) + dStack_2e0 * dVar55 + local_398 + local_2d8;
      local_338._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
      local_328._8_8_ =
           (dVar54 * dStack_2e0 - dVar54 * dStack_2e0) + dStack_2e0 * dVar54 + dStack_400 +
           dStack_2c0;
      local_328._0_8_ =
           (dVar42 * local_2f8 - dStack_2f0 * dVar55) + dStack_2e0 * dVar23 + local_408 + local_2c8;
      local_3e8 = auVar6;
    }
    else {
      dVar55 = dStack_2f0 + dStack_2f0;
      dVar42 = local_2e8 + local_2e8;
      dVar54 = local_2f8 * (local_2f8 + local_2f8);
      local_1f8 = ((double)DAT_149934d80 - (local_2e8 * dVar42 + dStack_2f0 * dVar55)) * local_2b8;
      dVar23 = (DAT_149934d80._8_8_ - (local_2e8 * dVar42 + dVar54)) * dStack_2b0;
      dVar66 = (local_2f8 + local_2f8) * dStack_2e0;
      dStack_1b0 = (dVar42 * dStack_2f0 - dVar66) * local_2a8;
      local_1b8 = (dVar55 * dStack_2e0 + local_2f8 * dVar42) * local_2a8;
      dStack_1f0 = (dVar55 * local_2f8 + dVar42 * dStack_2e0) * local_2b8;
      local_1c8 = (dVar42 * dStack_2f0 + dVar66) * dStack_2b0;
      local_1e8 = (local_2f8 * dVar42 - dVar55 * dStack_2e0) * local_2b8;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar23,0);
      local_1d8._0_8_ = (dVar55 * local_2f8 - dVar42 * dStack_2e0) * dStack_2b0;
      local_1d8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      uStack_1c0 = 0;
      local_1a8 = (1.0 - (dVar54 + dStack_2f0 * dVar55)) * local_2a8;
      uStack_1a0 = 0;
      local_198 = local_2d8;
      dStack_190 = dStack_2d0;
      local_188 = local_2c8;
      uStack_180 = 0x3ff0000000000000;
      local_278 = ZEXT816(0x3ff0000000000000);
      local_268 = (undefined1  [16])0x0;
      local_248 = (undefined1  [16])0x0;
      local_238 = (undefined1  [16])0x0;
      local_228 = ZEXT816(0x3ff0000000000000);
      local_218 = local_398;
      dStack_210 = dStack_390;
      local_208._8_8_ = 0x3ff0000000000000;
      local_208._0_8_ = local_388;
      local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= dStack_2b0);
      auVar33._0_8_ = -(ulonglong)(0.0 <= local_2b8);
      auVar31 = blendvpd(_DAT_149936790,auVar70,auVar33);
      uVar22 = -(ulonglong)(0.0 <= local_2a8 * 1.0);
      dVar23 = (double)(~uVar22 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar22 >> 0x20) & 0x3ff00000) << 0x20);
      dVar55 = auVar31._0_8_;
      local_168 = local_168 * dVar55;
      dStack_170 = dStack_170 * dVar55;
      local_178 = local_178 * dVar55;
      dVar55 = auVar31._8_8_;
      local_148 = local_148 * dVar55;
      local_150 = local_150 * dVar55;
      local_158 = dVar55 * local_158;
      local_128 = local_128 * dVar23;
      local_130 = local_130 * dVar23;
      local_138 = dVar23 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar23 = local_288 * local_288 + local_298 * local_298;
      dVar55 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar52._0_8_ = dVar23 + dVar55;
      auVar52._8_8_ = dVar23 + dVar55;
      auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
      auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
      auVar31 = sqrtpd(auVar52,auVar52);
      auVar70 = divpd(auVar70,auVar31);
      auVar71._0_8_ = auVar70._0_8_ * local_288;
      auVar71._8_8_ = auVar70._8_8_ * dStack_280;
      local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar34);
      local_358._8_8_ =
           (ulonglong)(dStack_290 * auVar70._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
      local_358._0_8_ =
           (ulonglong)(local_298 * auVar70._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
      local_338._8_8_ = uStack_110;
      local_338._0_8_ = local_118;
      local_328._8_8_ = 0;
      local_328._0_8_ = local_108;
    }
    local_318._8_4_ = SUB84(dStack_2b0,0);
    local_318._0_8_ = local_2b8;
    local_318._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
    local_308._8_4_ = SUB84(dStack_2a0 * 0.0,0);
    local_308._0_8_ = local_2a8 * 1.0;
    local_308._12_4_ = (int)((ulonglong)(dStack_2a0 * 0.0) >> 0x20);
    FUN_14818bf3f(local_358,*(undefined4 *)param_1[2],*(longlong *)param_1[1] + 0x10,
                  *(longlong *)param_1[1] + 0x20);
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14819c1a8 FUN_14819c1a8 body=59 status=ok
// SIG undefined FUN_14819c1a8(void)

longlong FUN_14819c1a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14819c24a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14819c243(lVar2);
  return lVar2;
}



// FUNCTION 14819c1e4 FUN_14819c1e4 body=95 status=ok
// SIG undefined FUN_14819c1e4(void)

void FUN_14819c1e4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14819c243 FUN_14819c243 body=7 status=ok
// SIG undefined FUN_14819c243(void)

void FUN_14819c243(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14819c24a FUN_14819c24a body=132 status=ok
// SIG undefined FUN_14819c24a(void)

void FUN_14819c24a(longlong param_1,int param_2)

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



// FUNCTION 14819c2d0 FUN_14819c2d0 body=216 status=ok
// SIG undefined FUN_14819c2d0(void)

void FUN_14819c2d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x68);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
      lVar3 = lVar3 + 0x100;
    } while ((longlong)iVar1 * 0x100 != lVar3);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x48);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
      lVar3 = lVar3 + 0x70;
    } while ((longlong)iVar1 * 0x70 - lVar3 != 0);
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      }
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x58);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
      }
      lVar3 = lVar3 + 0x68;
    } while ((longlong)iVar1 * 0x68 - lVar3 != 0);
  }
  if ((((*(int *)(param_2 + 0x70) == 0) && (*(int *)(param_2 + 0x50) == 0)) &&
      (*(int *)(param_2 + 0x40) == 0)) && (*(int *)(param_2 + 0x60) == 0)) {
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  }
  return;
}



// FUNCTION 14819c3a8 FUN_14819c3a8 body=244 status=ok
// SIG undefined FUN_14819c3a8(void)

void FUN_14819c3a8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  lVar4 = (**(code **)(*param_1 + 0xb98))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a81888(param_1);
    if (lVar5 == 0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28);
    }
    else {
      plVar6 = (longlong *)FUN_144a81888(param_1);
    }
    lVar5 = (**(code **)(*plVar6 + 0x310))(plVar6);
    iVar1 = *(int *)(lVar4 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        local_50 = *(undefined8 *)(lVar2 + 0x28);
        iVar3 = FUN_144a750a0(lVar5,&local_50);
        if ((iVar3 != -1) && (iVar3 < *(int *)(lVar5 + 0x28))) {
          FUN_14819c49e(&local_48,lVar2);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14819c49e FUN_14819c49e body=216 status=ok
// SIG undefined FUN_14819c49e(void)

void FUN_14819c49e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x68);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
      lVar3 = lVar3 + 0x100;
    } while ((longlong)iVar1 * 0x100 != lVar3);
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x48);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
      }
      lVar3 = lVar3 + 0x70;
    } while ((longlong)iVar1 * 0x70 - lVar3 != 0);
  }
  iVar1 = *(int *)(param_2 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
      }
      lVar3 = lVar3 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar3);
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x58);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x19 + lVar3) != '\0') {
        *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
      }
      lVar3 = lVar3 + 0x68;
    } while ((longlong)iVar1 * 0x68 - lVar3 != 0);
  }
  if ((((*(int *)(param_2 + 0x70) == 0) && (*(int *)(param_2 + 0x50) == 0)) &&
      (*(int *)(param_2 + 0x40) == 0)) && (*(int *)(param_2 + 0x60) == 0)) {
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  }
  return;
}



// FUNCTION 14819c576 FUN_14819c576 body=322 status=ok
// SIG undefined FUN_14819c576(void)

void FUN_14819c576(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int *param_9,int *param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (*(int *)(param_11 + 4) != 0) {
    iVar3 = *param_9;
    iVar4 = *param_10;
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_3 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_6 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 4) * 3));
  }
  if (*(int *)(param_11 + 8) != 0) {
    iVar3 = param_9[1];
    iVar4 = param_10[1];
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_4 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_7 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 8) * 3));
  }
  if (*(int *)(param_11 + 0xc) != 0) {
    iVar3 = param_9[2];
    iVar4 = param_10[2];
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_5 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_8 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 0xc) * 3));
  }
  return;
}



// FUNCTION 14819c6b8 FUN_14819c6b8 body=322 status=ok
// SIG undefined FUN_14819c6b8(void)

void FUN_14819c6b8(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int *param_9,int *param_10,longlong param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (*(int *)(param_11 + 4) != 0) {
    iVar3 = *param_9;
    iVar4 = *param_10;
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_3 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_6 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 4) * 3));
  }
  if (*(int *)(param_11 + 8) != 0) {
    iVar3 = param_9[1];
    iVar4 = param_10[1];
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_4 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_7 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 8) * 3));
  }
  if (*(int *)(param_11 + 0xc) != 0) {
    iVar3 = param_9[2];
    iVar4 = param_10[2];
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)(param_5 * 3 + iVar3 * 3 + uVar6) * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)(param_8 * 3 + iVar4 * 3 + uVar6) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_11 + 0xc) * 3));
  }
  return;
}



// FUNCTION 14819c7fa FUN_14819c7fa body=109 status=ok
// SIG undefined FUN_14819c7fa(void)

void FUN_14819c7fa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_147e2173e(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 14819c868 FUN_14819c868 body=141 status=ok
// SIG undefined FUN_14819c868(void)

void FUN_14819c868(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_147e216c0(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 14819c8f6 FUN_14819c8f6 body=63 status=ok
// SIG undefined FUN_14819c8f6(void)

void FUN_14819c8f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14819c936(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14819c936 FUN_14819c936 body=97 status=ok
// SIG undefined FUN_14819c936(void)

ulonglong FUN_14819c936(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14819c998 FUN_14819c998 body=98 status=ok
// SIG undefined FUN_14819c998(void)

void FUN_14819c998(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14819c9fa FUN_14819c9fa body=108 status=ok
// SIG undefined FUN_14819c9fa(void)

void FUN_14819c9fa(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xb8) == param_2) {
          FUN_14819ca66(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xb8 + *param_1 + 0xb0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14819ca66 FUN_14819ca66 body=138 status=ok
// SIG undefined FUN_14819ca66(void)

void FUN_14819ca66(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xb8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xb4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xb0 + lVar6 * 0xb8);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xb8 + 0xb0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xb0);
  FUN_148194c62(*param_1 + lVar2 + 8);
  FUN_148195296(param_1,param_2);
  return;
}



// FUNCTION 14819caf0 FUN_14819caf0 body=115 status=ok
// SIG undefined FUN_14819caf0(void)

void FUN_14819caf0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14819cb63 FUN_14819cb63 body=134 status=ok
// SIG undefined FUN_14819cb63(void)

void FUN_14819cb63(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14819cbe9 FUN_14819cbe9 body=76 status=ok
// SIG undefined FUN_14819cbe9(void)

char FUN_14819cbe9(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_144a7afa6(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 14819cc36 FUN_14819cc36 body=151 status=ok
// SIG undefined FUN_14819cc36(void)

void FUN_14819cc36(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14819ccce();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3d568;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x80;
  return;
}



// FUNCTION 14819ccce FUN_14819ccce body=258 status=ok
// SIG undefined FUN_14819ccce(void)

void FUN_14819ccce(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d5e8) {
    FUN_144b3d300(&DAT_14cb3d5e8);
    if (DAT_14cb3d5e8 == -1) {
      FUN_14819cdd2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x44;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3d568,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a6f4e7);
      _Init_thread_footer(&DAT_14cb3d5e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819cdd2 FUN_14819cdd2 body=226 status=ok
// SIG undefined FUN_14819cdd2(void)

longlong * FUN_14819cdd2(longlong *param_1)

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
  pcVar13 = FUN_14819ceb6;
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



// FUNCTION 14819ceb6 FUN_14819ceb6 body=136 status=ok
// SIG undefined FUN_14819ceb6(void)

code * FUN_14819ceb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CombinedBBoxWorldMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819cf3e;
}



// FUNCTION 14819cf3e FUN_14819cf3e body=136 status=ok
// SIG undefined FUN_14819cf3e(void)

code * FUN_14819cf3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CombinedBBoxWorldMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819cfc6;
}



// FUNCTION 14819cfc6 FUN_14819cfc6 body=136 status=ok
// SIG undefined FUN_14819cfc6(void)

code * FUN_14819cfc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d04e;
}



// FUNCTION 14819d04e FUN_14819d04e body=136 status=ok
// SIG undefined FUN_14819d04e(void)

code * FUN_14819d04e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DFIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d0d6;
}



// FUNCTION 14819d0d6 FUN_14819d0d6 body=136 status=ok
// SIG undefined FUN_14819d0d6(void)

code * FUN_14819d0d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicsTypeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d15e;
}



// FUNCTION 14819d15e FUN_14819d15e body=136 status=ok
// SIG undefined FUN_14819d15e(void)

code * FUN_14819d15e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshScaleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d1e6;
}



// FUNCTION 14819d1e6 FUN_14819d1e6 body=136 status=ok
// SIG undefined FUN_14819d1e6(void)

code * FUN_14819d1e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementExtentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d26e;
}



// FUNCTION 14819d26e FUN_14819d26e body=136 status=ok
// SIG undefined FUN_14819d26e(void)

code * FUN_14819d26e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InverseTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d2f6;
}



// FUNCTION 14819d2f6 FUN_14819d2f6 body=136 status=ok
// SIG undefined FUN_14819d2f6(void)

code * FUN_14819d2f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d37e;
}



// FUNCTION 14819d37e FUN_14819d37e body=136 status=ok
// SIG undefined FUN_14819d37e(void)

code * FUN_14819d37e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ElementOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d406;
}



// FUNCTION 14819d406 FUN_14819d406 body=136 status=ok
// SIG undefined FUN_14819d406(void)

code * FUN_14819d406(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d48e;
}



// FUNCTION 14819d48e FUN_14819d48e body=136 status=ok
// SIG undefined FUN_14819d48e(void)

code * FUN_14819d48e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurrentOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819d516;
}



// FUNCTION 14819d516 FUN_14819d516 body=130 status=ok
// SIG undefined FUN_14819d516(void)

undefined1 * FUN_14819d516(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTransforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x45;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14819d598;
}



// FUNCTION 14819d59b FUN_14819d59b body=611 status=ok
// SIG undefined FUN_14819d59b(void)

void FUN_14819d59b(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar11 = &local_348;
    do {
      puVar4 = (uint *)*plVar11;
      puVar12 = (uint *)plVar11[1];
      iVar14 = (int)plVar11[2];
      iVar6 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar4) >> 3);
      puVar10 = puVar4;
      puVar9 = puVar12;
      if (iVar14 != 0) {
LAB_14819d660:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar1 = *(undefined8 *)(puVar4 + uVar7 * 2);
          *(undefined8 *)(puVar4 + uVar7 * 2) = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = uVar1;
          puVar8 = puVar12 + 2;
          puVar5 = puVar4;
          do {
            puVar2 = puVar5 + 2;
            puVar13 = puVar5 + 2;
            do {
              puVar5 = puVar13;
              puVar16 = puVar2;
              if (puVar12 < puVar5) break;
              puVar2 = puVar16 + 2;
              puVar13 = puVar5 + 2;
            } while ((puVar5[1] ^ *puVar5) <= (puVar4[1] ^ *puVar4));
            puVar2 = puVar8 + -4;
            do {
              puVar13 = puVar8;
              puVar17 = puVar2;
              puVar8 = puVar13 + -2;
              if (puVar8 <= puVar4) break;
              puVar2 = puVar17 + -2;
            } while ((puVar4[1] ^ *puVar4) <= (puVar13[-1] ^ *puVar8));
            if (puVar8 < puVar5) goto LAB_14819d6f0;
            uVar1 = *(undefined8 *)puVar5;
            *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = uVar1;
          } while( true );
        }
        if (puVar4 < puVar12) {
          do {
            puVar10 = puVar4;
            if (puVar4 + 2 <= puVar12) {
              uVar15 = *puVar4;
              puVar9 = puVar4 + 2;
              puVar8 = puVar4;
              do {
                puVar10 = puVar9;
                uVar3 = *puVar9;
                if ((puVar9[1] ^ *puVar9) <= (puVar8[1] ^ uVar15)) {
                  puVar10 = puVar8;
                  uVar3 = uVar15;
                }
                uVar15 = uVar3;
                puVar9 = puVar9 + 2;
                puVar8 = puVar10;
              } while (puVar9 <= puVar12);
            }
            uVar1 = *(undefined8 *)puVar10;
            *(undefined8 *)puVar10 = *(undefined8 *)puVar12;
            *(undefined8 *)puVar12 = uVar1;
            puVar12 = puVar12 + -2;
          } while (puVar4 < puVar12);
        }
        goto LAB_14819d7dd;
      }
LAB_14819d7f2:
      FUN_14819d7ff(puVar4);
LAB_14819d7dd:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14819d6f0:
  uVar1 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar4 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar8 = uVar1;
  iVar14 = iVar14 + -1;
  puVar13 = puVar13 + -4;
  if ((longlong)puVar17 - (longlong)puVar10 < (longlong)puVar9 - (longlong)puVar16) {
    if (puVar5 < puVar12) {
      *plVar11 = (longlong)puVar5;
      plVar11[1] = (longlong)puVar12;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    puVar16 = puVar4;
    if (puVar8 <= puVar4 + 2) goto LAB_14819d7dd;
  }
  else {
    if (puVar4 + 2 < puVar8) {
      *plVar11 = (longlong)puVar4;
      plVar11[1] = (longlong)puVar13;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    puVar4 = puVar5;
    puVar13 = puVar12;
    puVar17 = puVar12;
    if (puVar12 <= puVar5) goto LAB_14819d7dd;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar16) >> 3);
  puVar10 = puVar16;
  puVar12 = puVar13;
  puVar9 = puVar17;
  if (iVar14 == 0) goto LAB_14819d7f2;
  goto LAB_14819d660;
}



// FUNCTION 14819d7ff FUN_14819d7ff body=359 status=ok
// SIG undefined FUN_14819d7ff(void)

void FUN_14819d7ff(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x00014819d821:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((*(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4) ^ *(uint *)(param_1 + iVar5)) <=
            (*(uint *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) ^ *(uint *)(param_1 + iVar7))))
        {
          iVar5 = iVar7;
        }
        lVar9 = (longlong)iVar2;
        lVar6 = (longlong)iVar5;
        if ((*(uint *)((longlong)param_1 + lVar9 * 8 + 4) ^ *(uint *)(param_1 + lVar9)) <
            (*(uint *)((longlong)param_1 + lVar6 * 8 + 4) ^ *(uint *)(param_1 + lVar6))) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x00014819d821;
        }
      }
      bVar10 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            lVar6 = (longlong)(iVar2 + 2);
            iVar7 = iVar5;
            if ((lVar6 < (longlong)uVar4) &&
               ((*(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4) ^ *(uint *)(param_1 + iVar5)
                ) <= (*(uint *)((longlong)param_1 + lVar6 * 8 + 4) ^ *(uint *)(param_1 + lVar6)))) {
              iVar7 = iVar2 + 2;
            }
            lVar6 = (longlong)iVar8;
            lVar9 = (longlong)iVar7;
            if ((*(uint *)((longlong)param_1 + lVar9 * 8 + 4) ^ *(uint *)(param_1 + lVar9)) <=
                (*(uint *)((longlong)param_1 + lVar6 * 8 + 4) ^ *(uint *)(param_1 + lVar6))) break;
            uVar1 = param_1[lVar6];
            param_1[lVar6] = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}


