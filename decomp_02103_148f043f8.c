// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f043f8 FUN_148f043f8 body=510 status=ok
// SIG undefined FUN_148f043f8(void)

void FUN_148f043f8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x10;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0xc) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 8) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f045f8 FUN_148f045f8 body=90 status=ok
// SIG undefined FUN_148f045f8(void)

void FUN_148f045f8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_148f04386();
  return;
}



// FUNCTION 148f046a4 FUN_148f046a4 body=89 status=ok
// SIG undefined FUN_148f046a4(void)

int FUN_148f046a4(longlong param_1,uint param_2,uint param_3,byte param_4,byte param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 <= param_3) {
    iVar5 = 0;
    do {
      uVar1 = (longlong)(int)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar1;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar1 & 0xffffffff;
      }
      if (param_2 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0x70)) {
        bVar2 = param_4;
        if ((*(byte *)(uVar4 * 0x70 + *(longlong *)(param_1 + 0x10) + 0x15) & 1) != 0) {
          bVar2 = param_5;
        }
        iVar5 = iVar5 + (uint)bVar2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return iVar5;
}



// FUNCTION 148f04754 FUN_148f04754 body=101 status=ok
// SIG undefined FUN_148f04754(void)

void FUN_148f04754(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (param_2 <= param_3) {
    do {
      uVar1 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar2 = -(int)uVar1;
      uVar3 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = uVar1 & 0xffffffff;
      }
      if ((param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar3 * 0x70)) &&
         ((plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 0x70), param_5 == '\0' ||
          (*(char *)((longlong)plVar4 + 0x15) == '\x01')))) {
        (**(code **)(*plVar4 + 8))(plVar4,param_4);
      }
      param_2 = param_2 + 1;
    } while (param_3 + 1 != param_2);
  }
  return;
}



// FUNCTION 148f047ba FUN_148f047ba body=521 status=ok
// SIG undefined FUN_148f047ba(void)

undefined8 *
FUN_148f047ba(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  int local_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar10 = 0;
  if (param_3 < param_4) {
    iVar10 = 0;
    uVar9 = param_3;
    do {
      uVar3 = (longlong)(int)uVar9 % (longlong)*(int *)(param_1 + 0x2c);
      uVar5 = -(int)uVar3;
      uVar6 = (ulonglong)uVar5;
      if ((int)uVar5 < 0) {
        uVar6 = uVar3 & 0xffffffff;
      }
      iVar10 = iVar10 + (uint)(uVar9 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar6 * 0x70
                                                 ));
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *plVar7 = (longlong)&PTR_LAB_14b9dd360;
  *(undefined1 *)(plVar7 + 1) = uVar1;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0xffffffff;
  *(undefined4 *)(plVar7 + 5) = 0;
  *(int *)((longlong)plVar7 + 0x2c) = iVar10;
  FUN_140bed800(plVar7 + 2,iVar10,1);
  *plVar7 = (longlong)&PTR_FUN_14b9dd220;
  local_c8 = -1;
  uStack_c4 = 0xffff;
  uStack_c2 = 0xffff;
  local_c0 = 0xffffffff;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ab = 0;
  uStack_a8 = 0;
  uStack_a3 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_9b = 1;
  uStack_9a = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  uStack_90 = 0;
  local_d0 = &PTR_FUN_14b8fbe20;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = (uint)uStack_80._3_1_ << 0x18;
  local_78 = (undefined4)DAT_14c8464e0;
  uStack_74 = DAT_14c8464e0._4_4_;
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_68 = DAT_14c8464f0;
  if (param_3 < param_4) {
    do {
      uVar3 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar9 = -(int)uVar3;
      uVar6 = (ulonglong)uVar9;
      if ((int)uVar9 < 0) {
        uVar6 = uVar3 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar6 * 0x70)) {
        lVar8 = *(longlong *)(param_1 + 0x10) + uVar6 * 0x70;
        uVar2 = *(undefined8 *)(lVar8 + 8);
        local_c0 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0xe) >> 0x10);
        local_bc = (undefined2)((ulonglong)*(undefined8 *)(lVar8 + 0xe) >> 0x30);
        uStack_c4 = (undefined2)((ulonglong)uVar2 >> 0x20);
        uStack_c2 = (undefined2)((ulonglong)uVar2 >> 0x30);
        local_b8 = *(undefined8 *)(lVar8 + 0x18);
        uVar4 = *(undefined8 *)(lVar8 + 0x30);
        uStack_98 = *(undefined4 *)(lVar8 + 0x38);
        uStack_90 = *(undefined4 *)(lVar8 + 0x40);
        uStack_94 = (undefined2)*(undefined4 *)(lVar8 + 0x3c);
        uStack_92 = (undefined2)((uint)*(undefined4 *)(lVar8 + 0x3c) >> 0x10);
        uStack_a8 = (undefined5)*(undefined8 *)(lVar8 + 0x28);
        uStack_a3 = (undefined3)((ulonglong)*(undefined8 *)(lVar8 + 0x28) >> 0x28);
        uStack_a0 = (undefined4)uVar4;
        local_9c = (undefined1)((ulonglong)uVar4 >> 0x20);
        uStack_9b = (undefined1)((ulonglong)uVar4 >> 0x28);
        uStack_9a = (undefined2)((ulonglong)uVar4 >> 0x30);
        uStack_b0 = (undefined5)*(undefined8 *)(lVar8 + 0x20);
        uStack_ab = (undefined3)((ulonglong)*(undefined8 *)(lVar8 + 0x20) >> 0x28);
        local_68 = *(undefined8 *)(lVar8 + 0x68);
        local_88 = *(undefined4 *)(lVar8 + 0x48);
        uStack_84 = *(undefined4 *)(lVar8 + 0x4c);
        uStack_80 = *(int *)(lVar8 + 0x50);
        uStack_7c = *(undefined4 *)(lVar8 + 0x54);
        local_78 = *(undefined4 *)(lVar8 + 0x58);
        uStack_74 = *(undefined4 *)(lVar8 + 0x5c);
        uStack_70 = *(undefined4 *)(lVar8 + 0x60);
        uStack_6c = *(undefined4 *)(lVar8 + 100);
        local_c8 = (int)((ulonglong)uVar2 >> 0x20) + param_5;
        (**(code **)(*plVar7 + 0x70))(plVar7,param_3,&local_d0);
      }
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
  }
  *param_2 = plVar7;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f049c4 FUN_148f049c4 body=146 status=ok
// SIG undefined FUN_148f049c4(void)

void FUN_148f049c4(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (-1 < *(int *)(param_2 + 0x2c)) {
    FUN_144a1a59e(param_3,*(int *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_4,*(undefined4 *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_5,*(undefined4 *)(param_2 + 0x2c),1);
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar4 = 4;
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(lVar3 + -8 + lVar4 * 4);
        uVar2 = *(undefined4 *)(lVar3 + lVar4 * 4);
        *(undefined4 *)(*param_3 + lVar5 * 4) = *(undefined4 *)(lVar3 + -4 + lVar4 * 4);
        *(undefined4 *)(*param_4 + lVar5 * 4) = uVar1;
        *(undefined4 *)(*param_5 + lVar5 * 4) = uVar2;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x1c;
      } while (lVar5 < *(int *)(param_2 + 0x2c));
    }
  }
  return;
}



// FUNCTION 148f04aac FUN_148f04aac body=78 status=ok
// SIG undefined FUN_148f04aac(void)

ulonglong FUN_148f04aac(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  uVar5 = (longlong)iVar1 % (longlong)*(int *)(param_1 + 0x2c);
  uVar3 = -(int)uVar5;
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = uVar5 & 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar6 = uVar4 * 0x70;
  if (*(int *)(lVar2 + 0xc + lVar6) == iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x28) = (int)uVar4;
    if (*(char *)(lVar2 + 0x14 + lVar6) == '\0') {
      uVar5 = (**(code **)(*param_2 + 0x38))(param_2,lVar2 + lVar6);
      return uVar5 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 148f04afc FUN_148f04afc body=92 status=ok
// SIG undefined FUN_148f04afc(void)

void FUN_148f04afc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x70 + *param_1);
  FUN_140d08d87(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x70 + (longlong)_Dst),(longlong)iVar2 * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148f04b58 FUN_148f04b58 body=62 status=ok
// SIG undefined FUN_148f04b58(void)

void FUN_148f04b58(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f04b96(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 148f04b96 FUN_148f04b96 body=104 status=ok
// SIG undefined FUN_148f04b96(void)

ulonglong FUN_148f04b96(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f04bcc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_148f04bcc:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f04c58 FUN_148f04c58 body=277 status=ok
// SIG undefined FUN_148f04c58(void)

int FUN_148f04c58(longlong param_1,uint param_2,uint param_3,byte param_4,byte param_5)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [144];
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  iVar5 = 0;
  local_e4 = 0;
  memset(local_e0,0,0x8c);
  local_f8 = &PTR_FUN_14b8fbe80;
  local_50 = 0;
  if (param_2 <= param_3) {
    iVar5 = 0;
    do {
      uVar1 = (longlong)(int)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar1;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar1 & 0xffffffff;
      }
      if (param_2 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xb0)) {
        lVar6 = *(longlong *)(param_1 + 0x10) + uVar4 * 0xb0;
        FUN_14098bcca(&local_f8,lVar6);
        local_50 = *(undefined2 *)(lVar6 + 0xa8);
        bVar2 = param_4;
        if (local_e4._1_1_ != '\0') {
          bVar2 = param_5;
        }
        iVar5 = iVar5 + (uint)bVar2;
      }
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  FUN_1411d537c(&local_f8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f04dc8 FUN_148f04dc8 body=104 status=ok
// SIG undefined FUN_148f04dc8(void)

void FUN_148f04dc8(longlong param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (param_2 <= param_3) {
    do {
      uVar1 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar2 = -(int)uVar1;
      uVar3 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = uVar1 & 0xffffffff;
      }
      if ((param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar3 * 0xb0)) &&
         ((plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 0xb0), param_5 == '\0' ||
          (*(char *)((longlong)plVar4 + 0x15) == '\x01')))) {
        (**(code **)(*plVar4 + 8))(plVar4,param_4);
      }
      param_2 = param_2 + 1;
    } while (param_3 + 1 != param_2);
  }
  return;
}



// FUNCTION 148f04e30 FUN_148f04e30 body=88 status=ok
// SIG undefined FUN_148f04e30(void)

void FUN_148f04e30(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (param_2 < iVar1) {
    do {
      uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xb0)) {
        (**(code **)(*param_3 + 0x28))(param_3,*(longlong *)(param_1 + 0x10) + uVar4 * 0xb0);
        *(undefined4 *)(param_3 + 2) = 0xffffffff;
      }
      param_2 = param_2 + 1;
    } while (iVar1 != param_2);
  }
  return;
}



// FUNCTION 148f04e88 FUN_148f04e88 body=432 status=ok
// SIG undefined FUN_148f04e88(void)

undefined8 *
FUN_148f04e88(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [144];
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar7 = 0;
  if (param_3 < param_4) {
    iVar7 = 0;
    uVar6 = param_3;
    do {
      uVar2 = (longlong)(int)uVar6 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      iVar7 = iVar7 + (uint)(uVar6 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xb0))
      ;
      uVar6 = uVar6 + 1;
    } while (param_4 != uVar6);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *plVar5 = (longlong)&PTR_LAB_14b9dd5f0;
  *(undefined1 *)(plVar5 + 1) = uVar1;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0xffffffff;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(int *)((longlong)plVar5 + 0x2c) = iVar7;
  FUN_140df7f36(plVar5 + 2,iVar7,1);
  *plVar5 = (longlong)&PTR_FUN_14b9dd4b0;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  memset(local_e0,0,0x8c);
  local_f8 = &PTR_FUN_14b8fbe80;
  local_50 = 0;
  if (param_3 < param_4) {
    do {
      uVar2 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar6 = -(int)uVar2;
      uVar4 = (ulonglong)uVar6;
      if ((int)uVar6 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0xb0)) {
        lVar8 = *(longlong *)(param_1 + 0x10) + uVar4 * 0xb0;
        FUN_14098bcca(&local_f8,lVar8);
        local_50 = *(undefined2 *)(lVar8 + 0xa8);
        local_f0 = CONCAT44(local_f0._4_4_,local_f0._4_4_ + param_5);
        (**(code **)(*plVar5 + 0x70))(plVar5,param_3,&local_f8);
      }
      param_3 = param_3 + 1;
    } while (param_4 != param_3);
  }
  *param_2 = plVar5;
  FUN_1411d537c(&local_f8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0503a FUN_148f0503a body=72 status=ok
// SIG undefined FUN_148f0503a(void)

void FUN_148f0503a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar1) + 0x30))
                (*(longlong *)(param_1 + 0x10) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xb0;
    } while (lVar2 < *(int *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 148f05082 FUN_148f05082 body=324 status=ok
// SIG undefined FUN_148f05082(void)

void FUN_148f05082(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [144];
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (-1 < *(int *)(param_2 + 0x2c)) {
    FUN_144a1a59e(param_3,*(int *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_4,*(undefined4 *)(param_2 + 0x2c),1);
    FUN_144a1a59e(param_5,*(undefined4 *)(param_2 + 0x2c),1);
    local_f0 = 0xffffffffffffffff;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    memset(local_e0,0,0x8c);
    local_f8 = &PTR_FUN_14b8fbe80;
    local_50 = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(param_2 + 0x10);
        FUN_14098bcca(&local_f8,lVar2 + lVar1);
        local_50 = *(undefined2 *)(lVar1 + 0xa8 + lVar2);
        *(undefined4 *)(*param_3 + lVar3 * 4) = local_f0._4_4_;
        *(undefined4 *)(*param_4 + lVar3 * 4) = (undefined4)local_f0;
        *(undefined4 *)(*param_5 + lVar3 * 4) = local_e8;
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0xb0;
      } while (lVar3 < *(int *)(param_2 + 0x2c));
    }
    FUN_1411d537c(&local_f8);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f05226 FUN_148f05226 body=81 status=ok
// SIG undefined FUN_148f05226(void)

ulonglong FUN_148f05226(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  uVar5 = (longlong)iVar1 % (longlong)*(int *)(param_1 + 0x2c);
  uVar3 = -(int)uVar5;
  uVar4 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = uVar5 & 0xffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar6 = uVar4 * 0xb0;
  if (*(int *)(lVar2 + 0xc + lVar6) == iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x28) = (int)uVar4;
    if (*(char *)(lVar2 + 0x14 + lVar6) == '\0') {
      uVar5 = (**(code **)(*param_2 + 0x38))(param_2,lVar2 + lVar6);
      return uVar5 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 148f0527a FUN_148f0527a body=101 status=ok
// SIG undefined FUN_148f0527a(void)

void FUN_148f0527a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xb0 + *param_1);
  FUN_140d08dcd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xb0 + (longlong)_Dst),(longlong)iVar2 * 0xb0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148f052e0 FUN_148f052e0 body=62 status=ok
// SIG undefined FUN_148f052e0(void)

void FUN_148f052e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f0531e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,8);
  }
  return;
}



// FUNCTION 148f0531e FUN_148f0531e body=110 status=ok
// SIG undefined FUN_148f0531e(void)

ulonglong FUN_148f0531e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f05357;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb0,8);
      param_2 = param_2 / 0xb0;
    }
  }
LAB_148f05357:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f0538c FUN_148f0538c body=147 status=ok
// SIG undefined FUN_148f0538c(void)

void FUN_148f0538c(longlong param_1,int param_2)

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



// FUNCTION 148f05420 FUN_148f05420 body=29 status=ok
// SIG undefined FUN_148f05420(void)

undefined8 FUN_148f05420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f05458 FUN_148f05458 body=29 status=ok
// SIG undefined FUN_148f05458(void)

bool FUN_148f05458(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f05476 FUN_148f05476 body=26 status=ok
// SIG undefined FUN_148f05476(void)

bool FUN_148f05476(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f05490 FUN_148f05490 body=24 status=ok
// SIG undefined FUN_148f05490(void)

bool FUN_148f05490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f054a8 FUN_148f054a8 body=101 status=ok
// SIG undefined FUN_148f054a8(void)

void FUN_148f054a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f0550e FUN_148f0550e body=101 status=ok
// SIG undefined FUN_148f0550e(void)

void FUN_148f0550e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f05574 FUN_148f05574 body=134 status=ok
// SIG undefined FUN_148f05574(void)

void FUN_148f05574(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd720;
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
                    /* WARNING: Could not recover jumptable at 0x000148f055eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f055fa FUN_148f055fa body=39 status=ok
// SIG undefined FUN_148f055fa(void)

void FUN_148f055fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f0561d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f05622 FUN_148f05622 body=146 status=ok
// SIG undefined FUN_148f05622(void)

bool FUN_148f05622(longlong param_1)

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



// FUNCTION 148f056b6 FUN_148f056b6 body=62 status=ok
// SIG undefined FUN_148f056b6(void)

void FUN_148f056b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f056f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148f056f4 FUN_148f056f4 body=93 status=ok
// SIG undefined FUN_148f056f4(void)

ulonglong FUN_148f056f4(uint param_1,uint param_2)

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



// FUNCTION 148f05752 FUN_148f05752 body=62 status=ok
// SIG undefined FUN_148f05752(void)

void FUN_148f05752(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f05790(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 148f05790 FUN_148f05790 body=112 status=ok
// SIG undefined FUN_148f05790(void)

ulonglong FUN_148f05790(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f057ca;
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
LAB_148f057ca:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f058a2 FUN_148f058a2 body=31 status=ok
// SIG undefined FUN_148f058a2(void)

undefined8 FUN_148f058a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f058de FUN_148f058de body=93 status=ok
// SIG undefined FUN_148f058de(void)

void FUN_148f058de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f0593c FUN_148f0593c body=126 status=ok
// SIG undefined FUN_148f0593c(void)

void FUN_148f0593c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148f059ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f059c6 FUN_148f059c6 body=145 status=ok
// SIG undefined FUN_148f059c6(void)

void FUN_148f059c6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + 0x28;
  local_28 = param_3;
  cVar2 = FUN_14136dfde(lVar1);
  if ((char)param_2 == '\0') {
    if (cVar2 == '\0') goto LAB_148f05a39;
    FUN_1400bc8c2(lVar1,&local_28);
  }
  else {
    if (cVar2 != '\0') goto LAB_148f05a39;
    FUN_1400bc96c(lVar1,&local_28);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_148cbf230(*(longlong *)(param_1 + 0x18) + 0x7580,param_2,local_28);
  }
LAB_148f05a39:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f05a58 FUN_148f05a58 body=7 status=ok
// SIG undefined FUN_148f05a58(void)

undefined1 FUN_148f05a58(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x148);
}



// FUNCTION 148f05a60 FUN_148f05a60 body=7 status=ok
// SIG undefined FUN_148f05a60(void)

undefined1 FUN_148f05a60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x149);
}



// FUNCTION 148f05a68 FUN_148f05a68 body=325 status=ok
// SIG undefined FUN_148f05a68(void)

void FUN_148f05a68(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
      lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (lVar3 != 0) {
        lVar4 = FUN_14070560c();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x398) + 0x18))(lVar3 + 0x398);
          if (*(longlong *)(lVar3 + 0x18) != 0) {
            cVar1 = FUN_144729dda(lVar3 + 0x10);
            if (cVar1 != '\0') {
              local_28 = (float)*(double *)(lVar2 + 0x6d0);
              local_24 = 1;
              local_38 = DAT_14c9a63f8;
              local_30 = 0xffffffff;
              local_48 = DAT_14cbe7398;
              local_40 = 0xffffffff;
              FUN_140f8b8f2(lVar3);
              if (param_1 != (longlong *)0x0) {
                if (*(longlong *)(lVar2 + 0x1f0) == 0) {
                  puVar5 = (undefined8 *)(lVar2 + 0x458);
                }
                else {
                  puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
                }
                FUN_1410d4dde(*puVar5,param_1);
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f05bbe FUN_148f05bbe body=102 status=ok
// SIG undefined FUN_148f05bbe(void)

void FUN_148f05bbe(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_14070560c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_14497e828(lVar1);
      if (lVar2 != 0) {
        lVar2 = FUN_140704886(lVar2);
        if (lVar2 != 0) {
          FUN_14126e4e0(lVar2,lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148f05c24 FUN_148f05c24 body=87 status=ok
// SIG undefined FUN_148f05c24(void)

void FUN_148f05c24(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1460753f6();
  lVar1 = param_2 + 0x18;
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbe7398,0);
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbe7058,0);
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbe7060,0);
  return;
}



// FUNCTION 148f05c7c FUN_148f05c7c body=50 status=ok
// SIG undefined FUN_148f05c7c(void)

void FUN_148f05c7c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    FUN_14434a2e8(param_1,(float)*(double *)(lVar1 + 0x6d0));
    return;
  }
  return;
}



// FUNCTION 148f05cae FUN_148f05cae body=451 status=ok
// SIG undefined FUN_148f05cae(void)

void FUN_148f05cae(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x2b40);
    if ((longlong)iVar5 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2b38);
      uVar6 = 0;
      do {
        cVar3 = FUN_14088ccfe(lVar2 + uVar6,param_2);
        if (cVar3 != '\0') {
          iVar5 = (int)(uVar6 >> 3) * -0x55555555;
          if (iVar5 != -1) goto LAB_148f05d61;
          break;
        }
        uVar6 = uVar6 + 0x18;
      } while ((longlong)iVar5 * 0x18 != uVar6);
    }
    iVar5 = *(int *)(param_1 + 0x2b40);
    *(uint *)(param_1 + 0x2b40) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x2b44) < iVar5 + 1U) {
      FUN_148f1382a((longlong *)(param_1 + 0x2b38),iVar5);
    }
    lVar2 = *(longlong *)(param_1 + 0x2b38);
    puVar1 = (undefined8 *)(lVar2 + (longlong)iVar5 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar5 * 0x18) = 0;
    iVar5 = *(int *)(param_1 + 0x2b40) + -1;
LAB_148f05d61:
    lVar4 = FUN_14011c349();
    lVar2 = *(longlong *)(param_1 + 0x2b38) + (longlong)iVar5 * 0x18;
    FUN_14485c47a(lVar2,param_2);
    *(undefined1 *)(lVar2 + 8) = 1;
    if (param_3 == 0) {
      FUN_140212f8e(&local_58);
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      FUN_14021300e(&local_50,0x7b2,1,1);
      param_3 = (ulonglong)(uint)(*(int *)(lVar4 + 0x804) * 0x3c) + (local_58 - local_50) / 10000000
      ;
    }
    *(longlong *)(lVar2 + 0x10) = param_3;
    lVar4 = FUN_1402a1246(param_2);
    if ((lVar4 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
      *(undefined8 *)(lVar4 + 0xf20) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f05e72 FUN_148f05e72 body=161 status=ok
// SIG undefined FUN_148f05e72(void)

void FUN_148f05e72(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) &&
      (lVar1 = (**(code **)(*param_1 + 0x180))(param_1), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_14070560c();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar1 = FUN_140704886(lVar1);
        if (lVar1 == 0) {
          return;
        }
        FUN_148f0645c(lVar1);
        return;
      }
    }
    FUN_140704886(lVar1);
    return;
  }
  return;
}



// FUNCTION 148f05f14 FUN_148f05f14 body=263 status=ok
// SIG undefined FUN_148f05f14(void)

void FUN_148f05f14(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_14070560c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x398) + 0x18))(lVar3 + 0x398);
        if (*(longlong *)(lVar3 + 0x18) != 0) {
          cVar1 = FUN_144729dda(lVar3 + 0x10);
          if (cVar1 != '\0') {
            local_28 = (float)*(double *)(lVar2 + 0x6d0);
            local_24 = 1;
            puVar5 = &DAT_14c9a63f8;
            if (param_2 != '\0') {
              puVar5 = &DAT_14c9a6400;
            }
            local_38 = *puVar5;
            local_30 = 0xffffffff;
            local_48 = DAT_14cbe7058;
            local_40 = 0xffffffff;
            FUN_140f8b8f2(lVar3);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0601c FUN_148f0601c body=405 status=ok
// SIG undefined FUN_148f0601c(void)

void FUN_148f0601c(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (lVar4 != 0) {
        lVar5 = FUN_14070560c();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x398) + 0x18))(lVar4 + 0x398);
          if (*(longlong *)(lVar4 + 0x18) != 0) {
            cVar2 = FUN_144729dda(lVar4 + 0x10);
            if ((cVar2 != '\0') && (*(longlong *)(lVar3 + 0x178) != 0)) {
              lVar6 = FUN_14030d660();
              lVar5 = *(longlong *)(lVar3 + 0x178);
              if (((lVar5 != 0) &&
                  (((lVar6 != 0 && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
                   (*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
                 ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30 && (lVar5 = *(longlong *)(lVar5 + 0x488), lVar5 != 0)))) {
                lVar6 = FUN_144a7b4ca();
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                  local_28 = (float)*(double *)(lVar3 + 0x6d0);
                  local_24 = 1;
                  local_38 = DAT_14c9a6400;
                  local_30 = 0xffffffff;
                  local_48 = DAT_14cbe7060;
                  local_40 = 0xffffffff;
                  FUN_140f8b8f2(lVar4);
                  *(undefined1 *)(lVar5 + 0xf28) = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f061b8 FUN_148f061b8 body=675 status=ok
// SIG undefined FUN_148f061b8(void)

longlong FUN_148f061b8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  int local_74;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  float local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) &&
       (lVar8 = *(longlong *)(lVar4 + 0x1f0), lVar8 != 0)) {
      lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar7 = FUN_14070560c();
        lVar5 = lVar7;
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (lVar5 = lVar7 + 0x30,
            *(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar5)) && (*(int *)(lVar6 + 0x2ac0) != 0)) {
          lVar7 = (**(code **)(*(longlong *)(lVar6 + 0x398) + 0x18))(lVar6 + 0x398);
          lVar5 = lVar7;
          if (*(longlong *)(lVar7 + 0x18) != 0) {
            lVar5 = FUN_144729dda(lVar7 + 0x10);
            if ((char)lVar5 != '\0') {
              lVar8 = FUN_140704886(lVar8);
              lVar5 = 0;
              if (lVar8 != 0) {
                lVar5 = FUN_14011c349();
                local_74 = *(int *)(lVar5 + 0x804) * 0x3c;
                FUN_1402160b8(&local_70);
                lVar9 = local_70;
                local_80 = 0;
                local_88 = 0;
                local_90 = 0;
                local_98 = 0;
                FUN_14021300e(&local_60,0x7b2,1,1);
                lVar9 = lVar9 - local_60;
                lVar5 = lVar9 * -0x29406b2a1a85bd43;
                if (*(longlong *)(lVar4 + 0x178) != 0) {
                  lVar5 = FUN_14030d660();
                  lVar2 = *(longlong *)(lVar4 + 0x178);
                  if (((lVar2 != 0) && (lVar5 != 0)) &&
                     ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
                      (piVar1 = (int *)(lVar5 + 0x38), *piVar1 <= *(int *)(lVar3 + 0x38))))) {
                    lVar5 = lVar5 + 0x30;
                    if ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*piVar1 * 8) == lVar5
                        ) && (lVar2 = *(longlong *)(lVar2 + 0x488), lVar2 != 0)) {
                      lVar5 = FUN_144a7b4ca();
                      piVar1 = (int *)(lVar5 + 0x38);
                      if ((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                         (lVar5 = lVar5 + 0x30,
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8
                          ) == lVar5)) {
                        local_50 = (float)*(double *)(lVar4 + 0x6d0);
                        *(ulonglong *)(lVar2 + 0xf20) =
                             (ulonglong)
                             (uint)(local_74 +
                                   ((int)(SUB168(SEXT816(lVar9) * ZEXT816(0xd6bf94d5e57a42bd),8) >>
                                         0x17) -
                                   ((int)(lVar9 / -0x6769800000000000) + (int)(lVar9 >> 0x3f))));
                        local_4c = 1;
                        local_60 = DAT_14c9a6400;
                        local_58 = 0xffffffff;
                        local_70 = DAT_14cbe7398;
                        local_68 = 0xffffffff;
                        FUN_140f8b8f2(lVar7);
                        FUN_148f0658c(lVar8);
                        FUN_1411b8283(*(undefined8 *)(lVar6 + 11000),*(undefined4 *)(lVar6 + 0x2b00)
                                     );
                        *(undefined4 *)(lVar6 + 0x2b00) = 0;
                        if (*(int *)(lVar6 + 0x2b04) != 0) {
                          FUN_148f113aa(lVar6 + 11000);
                        }
                        lVar5 = FUN_148bf1cc2(param_1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0645c FUN_148f0645c body=180 status=ok
// SIG undefined FUN_148f0645c(void)

void FUN_148f0645c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if ((lVar2 != 0) &&
       ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30 && (lVar2 = *(longlong *)(lVar2 + 0x488), lVar2 != 0)))))) {
      lVar3 = FUN_144a7b4ca();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          (*(char *)(lVar2 + 0x178) == '\x03')))) {
        FUN_1441feb12(lVar2);
        FUN_1447f69b6(param_1 + 0x50);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f06510 FUN_148f06510 body=123 status=ok
// SIG undefined FUN_148f06510(void)

undefined2 * FUN_148f06510(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0xa0) + 0x2b8))(param_1 + -0xa0);
  if (lVar1 != 0) {
    lVar2 = FUN_14070560c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1411b80d0(lVar1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 148f0658c FUN_148f0658c body=444 status=ok
// SIG undefined FUN_148f0658c(void)

void FUN_148f0658c(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    lVar4 = FUN_14011c349();
    iVar1 = *(int *)(lVar4 + 0x804);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar5 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar4;
    *local_b0 = &PTR_FUN_14b9de7f0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[4] = FUN_148f06ec4;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar2,param_1 + 0x59,&local_98,(float)(uint)(iVar1 * 0x3c));
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
    FUN_148f06f46(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0674a FUN_148f0674a body=185 status=ok
// SIG undefined FUN_148f0674a(void)

void FUN_148f0674a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x19] == 0) {
    *(undefined1 *)((longlong)param_1 + 0xc3) = 0;
    lVar1 = (**(code **)(*param_1 + 0x2b8))();
    if (lVar1 != 0) {
      lVar2 = FUN_14070560c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        local_38 = &LAB_148f0684c;
        local_30 = 0;
        FUN_148f069d0(lVar1 + 0x2ac8,&local_28,param_1);
        param_1[0x19] = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f06824 FUN_148f06824 body=40 status=ok
// SIG undefined FUN_148f06824(void)

void FUN_148f06824(undefined8 param_1,longlong param_2)

{
  FUN_1460753f6();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbe73b8,0);
  return;
}



// FUNCTION 148f06866 FUN_148f06866 body=361 status=ok
// SIG undefined FUN_148f06866(void)

void FUN_148f06866(longlong param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_2 == 0) {
    return;
  }
  if ((longlong)(int)param_2[3] != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(param_2[2] + lVar8) == 0) {
        return;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)param_2[3] * 8 != lVar8);
  }
  lVar8 = FUN_14087dee0(param_2);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)*(byte *)(param_1 + 0xc3)) == param_3) {
    plVar1 = (longlong *)
             (*(longlong *)(param_1 + 0xb0) + (ulonglong)*(byte *)(param_1 + 0xc3) * 0x18);
    lVar6 = plVar1[1];
    if (lVar6 == 0) {
      uVar5 = FUN_141227ea0();
      lVar6 = FUN_14477b664(uVar5);
      plVar1[1] = lVar6;
    }
    lVar7 = plVar1[2];
    if (lVar7 == 0) {
      if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_148f0691e;
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0'))
      {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      plVar1[2] = lVar7;
    }
    if (lVar8 == lVar7) {
      bVar4 = *(char *)(param_1 + 0xc3) + 1;
      *(byte *)(param_1 + 0xc3) = bVar4;
      if (bVar4 < *(byte *)(param_1 + 0xc4)) {
        return;
      }
      FUN_148c02936(param_1,param_4);
      return;
    }
  }
LAB_148f0691e:
  if (*(char *)((param_1 - (ulonglong)(param_3 == '\0')) + 0xc2) == '\x01') {
    FUN_148c02994(param_1,param_4);
  }
  *(undefined1 *)(param_1 + 0xc3) = 0;
  return;
}



// FUNCTION 148f069d0 FUN_148f069d0 body=254 status=ok
// SIG undefined FUN_148f069d0(void)

undefined8
FUN_148f069d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9de6a0;
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
  *local_48 = &PTR_FUN_14b9de630;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148f11660(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f06af8 FUN_148f06af8 body=241 status=ok
// SIG undefined FUN_148f06af8(void)

undefined8 FUN_148f06af8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b9de4e0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9de780;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148f112a8(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f06bea FUN_148f06bea body=272 status=ok
// SIG undefined FUN_148f06bea(void)

void FUN_148f06bea(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 auStack_80 [2];
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70[0] = 0;
  local_48 = 0;
  if (**(longlong **)(param_1 + 0x278) != 0) {
    do {
      local_88 = 0;
      auStack_80[0] = 0;
      lVar1 = **(longlong **)(param_1 + 0x278);
      if (lVar1 == 0) break;
      local_88 = *(undefined8 *)(lVar1 + 8);
      auStack_80[0] = *(undefined8 *)(lVar1 + 0x10);
      lVar2 = *(longlong *)(param_1 + 0x278);
      *(longlong *)(param_1 + 0x278) = lVar1;
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_144729dda(&local_88);
      if (cVar3 != '\0') {
        cVar3 = FUN_144729dda(auStack_80);
        if (cVar3 != '\0') {
          uVar4 = FUN_14479d2ce(&local_88);
          uVar5 = FUN_14479d2ce(auStack_80);
          FUN_14126eb88(param_1,uVar5,uVar4);
        }
      }
    } while (**(longlong **)(param_1 + 0x278) != 0);
  }
  FUN_1447a1747(0,0);
  FUN_144a5ac3a(local_70);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f06cfc FUN_148f06cfc body=455 status=ok
// SIG undefined FUN_148f06cfc(void)

void FUN_148f06cfc(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x150);
    local_40 = 0;
    FUN_14485c47a(&local_40);
    local_38 = local_40;
    iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
    if (iVar1 != -1) {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_2);
      local_38 = local_48;
      iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
      if (iVar1 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0x60 + *plVar2;
      }
      local_50 = 0;
      FUN_14485c47a(&local_50,param_3);
      local_38 = local_50;
      iVar1 = FUN_1411b8176(lVar3 + 8,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
      if (iVar1 != -1) {
        local_58 = 0;
        FUN_14485c47a(&local_58,param_2);
        local_38 = local_58;
        iVar1 = FUN_14088c684(plVar2,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58);
        if (iVar1 == -1) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)iVar1 * 0x60 + *plVar2;
        }
        local_60 = 0;
        FUN_14485c47a(&local_60,param_3);
        local_38 = local_60;
        iVar1 = FUN_1411b8176((longlong *)(lVar3 + 8),
                              (uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60);
        if (iVar1 == -1) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)iVar1 * 0x18 + *(longlong *)(lVar3 + 8);
        }
        *(undefined1 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0xc) = 0;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f06ec4 FUN_148f06ec4 body=129 status=ok
// SIG undefined FUN_148f06ec4(void)

void FUN_148f06ec4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        iVar1 = *(int *)(lVar4 + 0x38);
        if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
            == lVar4 + 0x30)) {
          FUN_148c35ff6(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        }
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  return;
}



// FUNCTION 148f06f46 FUN_148f06f46 body=129 status=ok
// SIG undefined FUN_148f06f46(void)

void FUN_148f06f46(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_144a5dd5e();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_148c35ff6(lVar2,0);
        }
      }
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 148f06fc7 FUN_148f06fc7 body=410 status=ok
// SIG undefined FUN_148f06fc7(void)

void FUN_148f06fc7(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_98 [44];
  undefined1 local_6c [8];
  uint local_64;
  undefined1 *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = FUN_14011c349();
  local_64 = 0;
  do {
    if ((-1 < (int)local_64) && ((int)local_64 < *(int *)(lVar6 + 0x7e0))) {
      plVar2 = (longlong *)(*(longlong *)(lVar6 + 0x7d8) + (ulonglong)local_64 * 0x18);
      lVar8 = plVar2[1];
      if (lVar8 == 0) {
        uVar7 = FUN_141227ea0();
        lVar8 = FUN_14477b664(uVar7);
        plVar2[1] = lVar8;
      }
      lVar9 = plVar2[2];
      if (lVar9 == 0) {
        if ((lVar8 != 0) && (*plVar2 != 0)) {
          plVar3 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            plVar2[2] = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar9 = FUN_144aff482(uVar7,plVar2);
            plVar2[2] = lVar9;
            if (lVar9 != 0) goto LAB_148f0705c;
          }
        }
      }
      else {
LAB_148f0705c:
        puVar10 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(lVar9 + 8);
        }
        FUN_1447325ac(puVar10,local_6c,1);
        local_60 = local_6c;
        local_58 = &local_64;
        FUN_14001ac2c(&DAT_14cbe7460,local_4c,&local_60,0);
      }
    }
    uVar1 = local_64 + 1;
    bVar4 = 3 < (int)local_64;
    local_64 = uVar1;
    if (bVar4) {
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 148f07162 FUN_148f07162 body=309 status=ok
// SIG undefined FUN_148f07162(void)

undefined4 FUN_148f07162(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (DAT_14cbe7468 == DAT_14cbe7494) {
      FUN_148f06fc7();
    }
    puVar5 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar5,&local_18,1);
    uVar3 = 0;
    if (DAT_14cbe7468 != DAT_14cbe7494) {
      uVar2 = (uint)((ulonglong)local_18 >> 0x10);
      uVar6 = (uint)local_18 & 0xffff;
      puVar8 = &DAT_14cbe7498;
      if (DAT_14cbe74a0 != (undefined *)0x0) {
        puVar8 = DAT_14cbe74a0;
      }
      iVar7 = *(int *)(puVar8 + (ulonglong)
                                (DAT_14cbe74a8 - 1U &
                                (int)((ulonglong)local_18 >> 0x20) +
                                ((uint)local_18 << 0x10 | uVar6) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                + (uVar6 >> 4)) * 4);
      for (iVar1 = iVar7; iVar1 != -1;
          iVar1 = *(int *)(DAT_14cbe7460 + (longlong)iVar1 * 0x14 + 0xc)) {
        if (*(longlong *)(DAT_14cbe7460 + (longlong)iVar1 * 0x14) == local_18) goto LAB_148f07256;
      }
    }
  }
  goto LAB_148f0726a;
  while (iVar7 = *(int *)((longlong)plVar4 + 0xc), iVar7 != -1) {
LAB_148f07256:
    plVar4 = (longlong *)(DAT_14cbe7460 + (longlong)iVar7 * 0x14);
    if (*plVar4 == local_18) goto LAB_148f07289;
  }
  plVar4 = (longlong *)0x0;
LAB_148f07289:
  uVar3 = (undefined4)plVar4[1];
LAB_148f0726a:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f07298 FUN_148f07298 body=232 status=ok
// SIG undefined FUN_148f07298(void)

void FUN_148f07298(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  
  FUN_145d73658();
  if ((*(longlong *)(param_1 + 0x2238) != 0) && (lVar2 = *param_2, lVar2 != 0)) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = param_1 + -0x3c0;
      lVar3 = *(longlong *)(param_1 + 0x2238);
      if (*(char *)((longlong)param_2 + 0x11) == '\x01' && (char)param_2[2] == '\0') {
        pcVar5 = (char *)(lVar3 + 0x459);
      }
      else if ((char)param_2[2] == '\0') {
        pcVar5 = (char *)(lVar3 + 0x458);
      }
      else if (*(char *)((longlong)param_2 + 0x11) == '\0') {
        pcVar5 = (char *)(lVar3 + 0x45a);
      }
      else {
        pcVar5 = (char *)(lVar3 + 0x45b);
      }
      cVar1 = *pcVar5;
      if (cVar1 == '\x01') {
        FUN_148c36da6(lVar2,lVar4,0);
        return;
      }
      if (cVar1 == '\x02') {
        FUN_148c36da6(lVar2,lVar4,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        return;
      }
      if (cVar1 != '\0') {
        return;
      }
      FUN_148f07380(lVar4,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148f07380 FUN_148f07380 body=93 status=ok
// SIG undefined FUN_148f07380(void)

void FUN_148f07380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0xe50) + 0x10))(param_2 + 0xe50);
  if (lVar1 != 0) {
    FUN_14121574a(lVar1,param_1 + 0x1a98,0,0);
  }
  lVar1 = FUN_1458730d4(param_2);
  if (lVar1 != 0) {
    FUN_148e39598(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 148f073de FUN_148f073de body=313 status=ok
// SIG undefined FUN_148f073de(void)

void FUN_148f073de(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_49;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar2 = FUN_1402a1246(param_2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xf78), lVar2 != 0)) {
      local_48 = 0;
      iVar3 = *(int *)(lVar2 + 0xe8);
      uVar1 = *(undefined8 *)(lVar2 + 0xe0);
      local_40 = iVar3;
      if (iVar3 == 0) {
        local_3c = 0;
        iVar3 = 0;
      }
      else {
        FUN_14587343e(&local_48,iVar3);
        FUN_14587326a(local_48,uVar1,iVar3);
        iVar3 = 0;
        if ((longlong)local_40 != 0) {
          lVar4 = (longlong)local_40 * 0xf0;
          lVar2 = local_48 + 0xec;
          do {
            local_58 = 0;
            FUN_14434ae40(param_1,param_2,lVar2,param_3);
            lVar2 = lVar2 + 0xf0;
            lVar4 = lVar4 + -0xf0;
          } while (lVar4 != 0);
          local_49 = 0;
          FUN_148c37c56(param_2,&local_49,param_1,0);
          FUN_1447f69b6(param_1 + 0x2620);
          iVar3 = local_40;
        }
      }
      FUN_1411b79c1(local_48,iVar3);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f07518 FUN_148f07518 body=51 status=ok
// SIG undefined FUN_148f07518(void)

undefined4 FUN_148f07518(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 6;
  if (param_2 != 0) {
    lVar1 = FUN_1402a1246(param_2);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xf78) != 0)) {
      uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0xf78) + 0x34);
    }
  }
  return uVar2;
}



// FUNCTION 148f0754c FUN_148f0754c body=51 status=ok
// SIG undefined FUN_148f0754c(void)

undefined4 FUN_148f0754c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_1402a1246(param_2);
    uVar2 = 0;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xf78) != 0)) {
      uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0xf78) + 0xe8);
    }
  }
  return uVar2;
}



// FUNCTION 148f07580 FUN_148f07580 body=103 status=ok
// SIG undefined FUN_148f07580(void)

void FUN_148f07580(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x26c0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x26b8);
    lVar4 = (longlong)*(int *)(param_1 + 0x26c0) * 0x14;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        uVar2 = FUN_14479d2ce(lVar3);
        FUN_1458734a4(param_1,uVar2,param_2);
        *(undefined1 *)(lVar3 + 0x10) = 1;
      }
      lVar3 = lVar3 + 0x14;
      lVar4 = lVar4 + -0x14;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 148f075e8 FUN_148f075e8 body=1129 status=ok
// SIG undefined FUN_148f075e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148f075e8(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar20;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong lVar31;
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar42 [16];
  
  auVar15 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x26c0) != 0) {
    uVar1 = (longlong)*(int *)(param_1 + 0x26c0) * 0x14 - 0x14;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar1;
    uVar18 = SUB164(auVar21 * ZEXT816(0xcccccccccccccccd),8);
    uVar20 = (undefined4)(uVar1 / 0x140000000);
    auVar22._0_8_ = CONCAT44(uVar20,uVar18);
    auVar22._8_4_ = uVar18;
    auVar22._12_4_ = uVar20;
    auVar19._0_8_ = auVar22._0_8_ >> 4;
    auVar19._8_8_ = auVar22._8_8_ >> 4;
    puVar16 = (undefined1 *)(*(longlong *)(param_1 + 0x26b8) + 0x13c);
    uVar17 = 0;
    auVar21 = pmovsxbq(in_XMM1,0xf0e);
    auVar22 = pmovsxbq(in_XMM2,0xd0c);
    auVar23 = pmovsxbq(in_XMM3,0xb0a);
    auVar24 = pmovsxbq(in_XMM4,0x908);
    auVar25 = pmovsxbq(in_XMM5,0x706);
    auVar26 = pmovsxbq(unaff_XMM6,0x504);
    auVar27 = pmovsxbq(unaff_XMM7,0x302);
    auVar28 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar29._8_4_ = (int)uVar17;
      auVar29._0_8_ = uVar17;
      auVar29._12_4_ = (int)(uVar17 >> 0x20);
      auVar32 = auVar19 | auVar15;
      auVar34 = (auVar29 | auVar28) ^ auVar15;
      lVar31 = auVar32._0_8_;
      auVar35._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      lVar33 = auVar32._8_8_;
      auVar35._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar42 = pshuflw(unaff_XMM14,auVar35,0xe8);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar42 ^ auVar34,auVar42 ^ auVar34);
      if ((auVar34._0_4_ & 1) != 0) {
        puVar16[-300] = 0;
      }
      auVar35 = packssdw(auVar35,auVar35);
      auVar42._8_4_ = 0xffffffff;
      auVar42._0_8_ = 0xffffffffffffffff;
      auVar42._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar42,auVar35 ^ auVar42);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[1] & 1) != 0) {
        puVar16[-0x118] = 0;
      }
      auVar35 = (auVar29 | auVar27) ^ auVar15;
      auVar36._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar36);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar2,auVar34 ^ auVar2);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[2] & 1) != 0) {
        puVar16[-0x104] = 0;
      }
      auVar35 = pshufhw(auVar36,auVar36,0x84);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar3,auVar35 ^ auVar3);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[3] & 1) != 0) {
        puVar16[-0xf0] = 0;
      }
      auVar35 = (auVar29 | auVar26) ^ auVar15;
      auVar37._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar37,0xe8);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar4,auVar34 ^ auVar4);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[4] & 1) != 0) {
        puVar16[-0xdc] = 0;
      }
      auVar35 = packssdw(auVar37,auVar37);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar5,auVar35 ^ auVar5);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[5] & 1) != 0) {
        puVar16[-200] = 0;
      }
      auVar35 = (auVar29 | auVar25) ^ auVar15;
      auVar38._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar38);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar6,auVar34 ^ auVar6);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[6] & 1) != 0) {
        puVar16[-0xb4] = 0;
      }
      auVar35 = pshufhw(auVar38,auVar38,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar7,auVar35 ^ auVar7);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[7] & 1) != 0) {
        puVar16[-0xa0] = 0;
      }
      auVar35 = (auVar29 | auVar24) ^ auVar15;
      auVar39._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar39,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar8,auVar34 ^ auVar8);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[8] & 1) != 0) {
        puVar16[-0x8c] = 0;
      }
      auVar35 = packssdw(auVar39,auVar39);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar9,auVar35 ^ auVar9);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[9] & 1) != 0) {
        puVar16[-0x78] = 0;
      }
      auVar35 = (auVar29 | auVar23) ^ auVar15;
      auVar40._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar40);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar10,auVar34 ^ auVar10);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[10] & 1) != 0) {
        puVar16[-100] = 0;
      }
      auVar35 = pshufhw(auVar40,auVar40,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar11,auVar35 ^ auVar11);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xb] & 1) != 0) {
        puVar16[-0x50] = 0;
      }
      auVar35 = (auVar29 | auVar22) ^ auVar15;
      auVar41._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar41,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar12,auVar34 ^ auVar12);
      unaff_XMM14 = packsswb(auVar34,auVar34);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar16[-0x3c] = 0;
      }
      auVar34 = packssdw(auVar41,auVar41);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar13,auVar34 ^ auVar13);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xd] & 1) != 0) {
        puVar16[-0x28] = 0;
      }
      auVar34 = (auVar29 | auVar21) ^ auVar15;
      auVar30._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      auVar30._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar34 = packssdw(auVar32,auVar30);
      auVar32._8_4_ = 0xffffffff;
      auVar32._0_8_ = 0xffffffffffffffff;
      auVar32._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar32,auVar34 ^ auVar32);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xe] & 1) != 0) {
        puVar16[-0x14] = 0;
      }
      auVar34 = pshufhw(auVar30,auVar30,0x84);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar14,auVar34 ^ auVar14);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xf] & 1) != 0) {
        *puVar16 = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar16 = puVar16 + 0x140;
    } while ((uVar1 / 0x14 + 0x10 & 0xfffffffffffffff0) != uVar17);
  }
  FUN_1412806ea();
  return;
}



// FUNCTION 148f07a52 FUN_148f07a52 body=130 status=ok
// SIG undefined FUN_148f07a52(void)

void FUN_148f07a52(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148cd5d78();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148c2e908(param_1 + 0xbb0,lVar1);
        lVar1 = FUN_1458730d4(lVar1);
        if (lVar1 != 0) {
          FUN_148e39598(lVar1,param_1 + -0x1a98);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148f07ad4 FUN_148f07ad4 body=130 status=ok
// SIG undefined FUN_148f07ad4(void)

void FUN_148f07ad4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148cd62ee();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148c2e908(param_1 + 0xbc0,lVar1);
        lVar1 = FUN_1458730d4(lVar1);
        if (lVar1 != 0) {
          FUN_148e39640(lVar1,param_1 + -0x1a98);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148f07b56 FUN_148f07b56 body=21 status=ok
// SIG undefined FUN_148f07b56(void)

void FUN_148f07b56(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_14c7640d0 + 1;
  *param_1 = DAT_14c7640d0;
  DAT_14c7640d0 = iVar1;
  return;
}



// FUNCTION 148f07b6c FUN_148f07b6c body=511 status=ok
// SIG undefined FUN_148f07b6c(void)

ulonglong FUN_148f07b6c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 auStack_168 [40];
  uint *local_140;
  undefined4 *local_138;
  undefined1 local_12c [4];
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar1 = (longlong *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_2 + 0xec);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar3 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x80);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x100) == uVar2) {
          uVar5 = 0;
          goto LAB_148f07bad;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x100 + *plVar1 + 0xf8);
      } while (iVar4 != -1);
    }
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    local_128[0] = 0;
    local_c0 = 0;
    local_b8 = 0x8000000000;
    uStack_b0 = 0xffffffff;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0xf;
    local_60 = 1;
    local_48 = 0;
    local_40 = 0;
    local_5c = 0;
    uStack_54 = 0;
    FUN_1407b25f0(&local_120,param_2);
    local_128[0] = *(undefined4 *)(param_2 + 0xe8);
    local_48 = CONCAT44(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74),
                        *(undefined4 *)(param_2 + 0xec));
    local_138 = local_128;
    local_140 = (uint *)(param_2 + 0xec);
    FUN_148f12b8a(plVar1,local_12c);
    uVar6 = FUN_1412fc308(param_1,*(undefined4 *)(param_2 + 0xec));
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      uVar2 = *(uint *)(param_2 + 0xec);
      lVar3 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar2) * 4);
      if (iVar4 != -1) {
        do {
          uVar5 = *plVar1 + (longlong)iVar4 * 0x100;
          if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x100) == uVar2) goto LAB_148f07d07;
          iVar4 = *(int *)(uVar5 + 0xf8);
        } while (iVar4 != -1);
      }
      uVar5 = 0;
    }
LAB_148f07d07:
    *(undefined4 *)(uVar5 + 0xf0) = uVar6;
    FUN_140368b56(&local_120);
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
LAB_148f07bad:
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148f07d6c FUN_148f07d6c body=163 status=ok
// SIG undefined FUN_148f07d6c(void)

void FUN_148f07d6c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar2) == 0) goto LAB_148f07e00;
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar2);
    }
    uVar1 = FUN_14087dee0(param_2);
    local_28 = *param_3;
    local_24 = 1;
    FUN_1412fbb12(param_1,param_2,&local_28,uVar1);
    if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
LAB_148f07e00:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f07e20 FUN_148f07e20 body=533 status=ok
// SIG undefined FUN_148f07e20(void)

uint * FUN_148f07e20(longlong param_1,uint *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_d8 [40];
  int *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  uVar8 = 0;
  iVar7 = 0;
  local_b0 = param_3;
  local_78 = lVar2;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1449c0562(&local_80);
    iVar7 = *(int *)(param_1 + 0x68);
  }
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_a8 = plVar1;
  if ((iStack_6c == iVar7) && (local_78 == lVar2)) {
LAB_148f07ee0:
    *param_2 = uVar8;
    if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  uVar8 = 0;
  fVar9 = 999.0;
LAB_148f07f31:
  fVar3 = *(float *)(*local_a8 + 0xf0 + (longlong)iStack_8c * 0x100);
  if ((fVar3 < fVar9) &&
     (uVar8 = *(uint *)(*local_a8 + (longlong)iStack_8c * 0x100), fVar9 = fVar3,
     *(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124))) {
    lVar5 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar5 = param_1 + 0x128;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & uVar8) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar4 * 0xc) == uVar8) {
          iVar4 = -1;
          if ((longlong)*(int *)(param_1 + 0xe8) == 0) goto LAB_148f08024;
          uVar6 = 0;
          goto LAB_148f08002;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
    }
  }
  goto LAB_148f07f5f;
  while (uVar6 = uVar6 + 0xf0, (longlong)*(int *)(param_1 + 0xe8) * 0xf0 - uVar6 != 0) {
LAB_148f08002:
    if (*(uint *)(*(longlong *)(param_1 + 0xe0) + 0xec + uVar6) == uVar8) {
      iVar4 = (int)(uVar6 >> 4) * -0x11111111;
      break;
    }
  }
LAB_148f08024:
  *local_b0 = iVar4;
LAB_148f07f5f:
  local_90 = local_90 & ~local_a0._4_4_;
  FUN_1449c0562(&local_a0);
  if (local_a8 == plVar1 && (local_98 == lVar2 && iStack_8c == iVar7)) goto LAB_148f07ee0;
  goto LAB_148f07f31;
}



// FUNCTION 148f08052 FUN_148f08052 body=98 status=ok
// SIG undefined FUN_148f08052(void)

undefined8 FUN_148f08052(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a815a6(param_3);
  if ((((lVar2 != 0) && (lVar2 = FUN_1402a1246(lVar2), lVar2 != 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0xf78), lVar2 != 0)) && (*(char *)(param_1 + 8) == '\0')) {
    uVar1 = FUN_14005fbd2(param_4,6);
    FUN_14119f284(lVar2 + 0x30,uVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 148f080b4 FUN_148f080b4 body=287 status=ok
// SIG undefined FUN_148f080b4(void)

undefined8
FUN_148f080b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_1412cbf0e(param_5);
  if (cVar1 == '\0') {
    local_68 = param_8;
    local_70 = CONCAT44(local_70._4_4_,param_7);
    local_78 = CONCAT31(local_78._1_3_,param_6);
    FUN_145d6cea6(param_1,param_2);
  }
  else {
    lVar2 = FUN_144a815a6(param_4);
    if (lVar2 != 0) {
      lVar2 = FUN_1402a1246(lVar2);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xf78), lVar2 != 0)) {
        FUN_1414ff806(local_58);
        if (*(char *)(param_1 + 8) == '\0') {
          local_70 = param_8;
          local_78 = param_7;
          FUN_1470b0d80(lVar2 + 0x30,param_2,param_5,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff);
        }
        else {
          FUN_14162be86(param_2,0);
        }
        if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
    FUN_14162be86(param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
}



// FUNCTION 148f081d4 FUN_148f081d4 body=132 status=ok
// SIG undefined FUN_148f081d4(void)

void FUN_148f081d4(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148e9a5d8(param_2,0);
  }
  if (param_1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14b9dea90;
    local_58 = FUN_14435416e;
    local_30 = param_2;
    FUN_14100973a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0825a FUN_148f0825a body=118 status=ok
// SIG undefined FUN_148f0825a(void)

void FUN_148f0825a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_1447210f0();
    if (((lVar2 != 0) && (*(char *)(param_1 + 0x2b30) == '\0')) &&
       (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_140704886();
      if (lVar2 != 0) {
        cVar1 = FUN_148e04756(param_1 + 0x1a98);
        if (cVar1 == '\0') {
          *(undefined1 *)(param_1 + 0x2ae1) = 1;
          FUN_14126e4e0(lVar2,param_1);
          return;
        }
        *(undefined1 *)(param_1 + 0x2ae0) = 1;
      }
    }
  }
  return;
}



// FUNCTION 148f082d0 FUN_148f082d0 body=557 status=ok
// SIG undefined FUN_148f082d0(void)

void FUN_148f082d0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = param_1 + -0x1a98;
        FUN_148cd5d78(param_1,param_2);
        FUN_148ca0a8f(param_1 + 0xca0,lVar2);
        FUN_144203c8e(&DAT_00001100 + param_1,lVar2);
        lVar4 = FUN_1447210f0(lVar3);
        if ((lVar4 != 0) && (*(char *)(param_1 + 0x1098) == '\0')) {
          if (*(longlong *)(lVar4 + 0x1f0) == 0) {
            puVar5 = (undefined8 *)(lVar4 + 0x458);
          }
          else {
            puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
          }
          uVar1 = *puVar5;
          local_b0 = (undefined8 *)0x0;
          local_a8 = 0;
          FUN_1446efa72(&local_b0,0,3,0x10);
          puVar5 = local_b0;
          local_a8 = 3;
          *local_b0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_b0[2] = lVar6;
          *local_b0 = &PTR_FUN_14b9deb20;
          local_b0[3] = 0;
          FUN_14485c47a(local_b0 + 3,lVar3);
          *(undefined4 *)(puVar5 + 5) = 0;
          puVar5[4] = FUN_148f084fe;
          local_98 = 0;
          local_90 = 0;
          FUN_14487d8d8(&local_98,&local_b0);
          local_58 = 1;
          local_b8 = local_a0;
          local_a0[0] = 1;
          local_9c = 0;
          FUN_1406f4044(uVar1,param_1 + 0x1090,&local_98,0x3f800000);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
          FUN_1449db362(&local_b0);
        }
        lVar2 = FUN_145d182e6(lVar2);
        if (lVar2 != 0) {
          FUN_148e5c456(lVar2,lVar3);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f084fe FUN_148f084fe body=35 status=ok
// SIG undefined FUN_148f084fe(void)

void FUN_148f084fe(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_145830e94();
  FUN_1401861f4(param_1 + 0x2aa8,uVar1);
  return;
}



// FUNCTION 148f08522 FUN_148f08522 body=264 status=ok
// SIG undefined FUN_148f08522(void)

void FUN_148f08522(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148cd62ee();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148ca0ace(param_1 + 0xcb0,lVar1);
        local_48 = &local_51;
        local_40 = &local_50;
        local_50 = &LAB_144354374;
        local_30 = &local_40;
        local_38 = FUN_148f1318e;
        uVar3 = FUN_145b8d510();
        FUN_140e0b95c(param_1 + -0x1460,uVar3,&local_38);
        FUN_1412ea7ae(param_1 + -0x1a98,lVar1);
        lVar1 = FUN_145d182e6(lVar1);
        if (lVar1 != 0) {
          FUN_148e5c6d8(lVar1,param_1 + -0x1a98);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0862c FUN_148f0862c body=258 status=ok
// SIG undefined FUN_148f0862c(void)

void FUN_148f0862c(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + -0x1a98;
  FUN_148e04754();
  lVar2 = FUN_1447210f0(lVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_140704886();
    if (lVar2 != 0) {
      FUN_1411b80d0(lVar1,local_60);
      if (*(char *)(param_1 + -0x1920) == '\x03') {
        if (param_2 == '\0') {
          FUN_14434a8e2(lVar2,local_60,0);
          if ((*(char *)(param_1 + 0x1048) == '\x01') && (*(char *)(param_1 + -0x1920) == '\x03')) {
            *(undefined1 *)(param_1 + 0x1048) = 0;
            FUN_148f0825a(lVar1);
          }
          FUN_148ca0b9c(param_1 + 0xd50,0 < *(int *)(param_1 + 0x1028));
          *(undefined4 *)(param_1 + 0x1028) = 0;
        }
        else {
          FUN_14434a8e2(lVar2,local_60,1);
        }
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f08730 FUN_148f08730 body=46 status=ok
// SIG undefined FUN_148f08730(void)

longlong * FUN_148f08730(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x2af0) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x2ae8);
    lVar2 = (longlong)*(int *)(param_1 + 0x2af0) << 6;
    do {
      if (*plVar1 == param_2) {
        return plVar1;
      }
      plVar1 = plVar1 + 8;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 148f08760 FUN_148f08760 body=606 status=ok
// SIG undefined FUN_148f08760(void)

double * FUN_148f08760(longlong param_1,double *param_2)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_1 + 0x1c8);
  if (lVar9 == 0) {
    pdVar8 = (double *)&DAT_14c8464e0;
    uVar12 = (undefined4)DAT_14c8464f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
    pdVar8 = (double *)(lVar9 + 0x260);
  }
  dVar3 = pdVar8[1];
  dVar4 = *pdVar8;
  lVar9 = FUN_14011c349();
  fVar2 = *(float *)(lVar9 + 0x6a8);
  uVar5 = local_b0;
  if (*(int *)(param_1 + 0x2810) != *(int *)(param_1 + 0x283c)) {
    plVar1 = (longlong *)(param_1 + 0x2808);
    lVar9 = param_1 + 0x2818;
    local_a0 = 0x100000000;
    local_90 = 0xffffffff;
    uStack_88 = 0;
    uStack_98 = lVar9;
    if (*(int *)(param_1 + 0x2830) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_a0);
      iVar11 = *(int *)(param_1 + 0x2830);
    }
    local_c0 = (undefined4)local_a0;
    uStack_bc = local_a0._4_4_;
    uStack_b8 = (undefined4)uStack_98;
    uStack_b4 = uStack_98._4_4_;
    uStack_a8 = CONCAT44(uStack_84,uStack_88);
    local_b0 = local_90;
    uVar5 = local_b0;
    local_b0._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    local_c8 = plVar1;
    if ((local_b0._4_4_ != iVar11) || (uStack_98 != lVar9)) {
      iVar7 = local_b0._4_4_;
      local_b0 = uVar5;
      do {
        lVar10 = *local_c8 + (longlong)iVar7 * 0x18 + 8;
        cVar6 = FUN_144729dda(lVar10);
        if (cVar6 != '\0') {
          lVar9 = FUN_14479d2ce(lVar10);
          lVar9 = *(longlong *)(lVar9 + 0x1c8);
          if (lVar9 == 0) {
            pdVar8 = (double *)&DAT_14c8464e0;
            uVar12 = (undefined4)DAT_14c8464f0;
            uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
            uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
            pdVar8 = (double *)(lVar9 + 0x260);
          }
          dVar3 = pdVar8[1];
          dVar4 = *pdVar8;
          lVar9 = FUN_14011c349();
          fVar2 = *(float *)(lVar9 + 0x6a8);
          *param_2 = dVar4 + 0.0;
          param_2[1] = dVar3 + 0.0;
          param_2[2] = (double)fVar2 + (double)CONCAT44(uVar13,uVar12);
          goto LAB_148f08808;
        }
        local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_bc);
        FUN_1449c0562(&local_c0);
        iVar7 = local_b0._4_4_;
        uVar5 = local_b0;
      } while (local_c8 != plVar1 ||
               (CONCAT44(uStack_b4,uStack_b8) != lVar9 || local_b0._4_4_ != iVar11));
    }
  }
  local_b0 = uVar5;
  *param_2 = dVar4 + 0.0;
  param_2[1] = dVar3 + 0.0;
  param_2[2] = (double)fVar2 + (double)CONCAT44(uVar13,uVar12);
LAB_148f08808:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f089c0 FUN_148f089c0 body=731 status=ok
// SIG undefined FUN_148f089c0(void)

void FUN_148f089c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_d0[2] = lVar4;
      *local_d0 = &PTR_FUN_14b9deb20;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_148f0825a;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      local_d8 = local_c0;
      FUN_1406f4044(uVar1,param_1 + 0x2b20,&local_b8,param_2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar3 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_d0[2] = lVar5;
      *local_d0 = &PTR_FUN_14b9deb20;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_148f084fe;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_c0[0] = 1;
      local_bc = 0;
      local_d8 = local_c0;
      FUN_1406f4044(uVar1,param_1 + 0x2b28,&local_b8,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f08c9c FUN_148f08c9c body=17 status=ok
// SIG undefined FUN_148f08c9c(void)

void FUN_148f08c9c(undefined8 param_1,longlong param_2)

{
  FUN_14654aa2c(*(longlong *)(param_2 + 0xf40) + 0x4780);
  return;
}



// FUNCTION 148f08cae FUN_148f08cae body=617 status=ok
// SIG undefined FUN_148f08cae(void)

void FUN_148f08cae(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x2968);
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = local_38;
  iVar3 = FUN_141303122(plVar1,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar3 != -1) {
    local_40 = 0;
    FUN_14485c47a(&local_40,param_2);
    local_30 = local_40;
    iVar3 = FUN_141303122(plVar1,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
    if (iVar3 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
    }
    if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
      lVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar4 + 8) + 0xe4 + lVar6) != '\0') {
          iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 0xd8 + lVar6);
          local_30 = CONCAT44(local_30._4_4_,iVar3);
          if (iVar3 == 0) break;
          FUN_148f09418(param_1,&local_30,param_2,0);
          FUN_1412ea1b8(param_1,param_2);
          lVar4 = *(longlong *)(param_1 + 10000);
          if (lVar4 == 0) break;
          lVar6 = *(longlong *)(lVar4 + 0x558);
          if (lVar6 == 0) {
            uVar5 = FUN_140067708();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar4 + 0x558) = lVar6;
          }
          if (*(longlong *)(lVar4 + 0x560) == 0) {
            if ((lVar6 == 0) || (*(longlong *)(lVar4 + 0x550) == 0)) break;
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              *(undefined8 *)(lVar4 + 0x560) = 0;
              break;
            }
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x550));
            *(longlong *)(lVar4 + 0x560) = lVar6;
            if (lVar6 == 0) break;
          }
          lVar4 = *(longlong *)(param_1 + 10000);
          lVar6 = *(longlong *)(lVar4 + 0x558);
          if (lVar6 == 0) {
            uVar5 = FUN_140067708();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar4 + 0x558) = lVar6;
          }
          if (((*(longlong *)(lVar4 + 0x560) == 0) && (lVar6 != 0)) &&
             (*(longlong *)(lVar4 + 0x550) != 0)) {
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
              uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x550));
            }
            *(undefined8 *)(lVar4 + 0x560) = uVar5;
          }
          FUN_14434c2bc();
          break;
        }
        lVar6 = lVar6 + 0xf0;
      } while ((longlong)*(int *)(lVar4 + 0x10) * 0xf0 - lVar6 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f08f18 FUN_148f08f18 body=1278 status=ok
// SIG undefined FUN_148f08f18(void)

void FUN_148f08f18(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  PSRWLOCK local_a8;
  uint local_9c;
  void *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = FUN_144a7ba4c(param_2);
  if (uVar7 == 0) goto LAB_148f08f52;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  local_9c = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_9c = local_9c >> 0x10 ^ local_9c;
  FUN_1448d5e3c(&local_98);
  lVar10 = *(longlong *)((longlong)local_98 + 0x1b0);
  local_a8 = (PSRWLOCK)(lVar10 + 0x1c0);
  AcquireSRWLockShared(local_a8);
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)uStack_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*uStack_90 + 0x10))(uStack_90);
      }
    }
  }
  local_98 = (void *)0x0;
  uStack_90 = (longlong *)0x0;
  if ((longlong)*(int *)(lVar10 + 0x88) != 0) {
    lVar12 = *(longlong *)(lVar10 + 0x80);
    lVar9 = (longlong)*(int *)(lVar10 + 0x88) * 0x430;
    do {
      cVar5 = FUN_144240e04(lVar12);
      plVar2 = uStack_90;
      if (cVar5 != '\0') {
        lVar11 = (longlong)(int)(uint)uStack_90;
        uVar6 = (uint)uStack_90 + 1;
        uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar6);
        if (uStack_90._4_4_ < uVar6) {
          FUN_145917388(&local_98,(ulonglong)plVar2 & 0xffffffff);
        }
        FUN_1413505e4((void *)(lVar11 * 0x430 + (longlong)local_98),lVar12);
      }
      lVar12 = lVar12 + 0x430;
      lVar9 = lVar9 + -0x430;
    } while (lVar9 != 0);
  }
  FUN_148f0a04e(&local_88,&local_98);
  FUN_141286eab(local_98,(ulonglong)uStack_90 & 0xffffffff);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_80 != 0) {
    lVar9 = (longlong)(int)uStack_80 * 0x430 + local_88;
    lVar12 = local_88;
    do {
      cVar5 = FUN_144240dfe(lVar12);
      uVar4 = uStack_70;
      if (cVar5 != '\0') {
        FUN_148f0a09c(param_1,uVar7,&local_88);
        ReleaseSRWLockShared(local_a8);
        goto LAB_148f0923b;
      }
      lVar11 = (longlong)(int)uStack_70;
      uVar6 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
      if (uStack_70._4_4_ < uVar6) {
        FUN_148d699d4(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined4 *)(local_78 + lVar11 * 4) = *(undefined4 *)(lVar12 + 8);
      lVar12 = lVar12 + 0x430;
    } while (lVar12 != lVar9);
  }
  local_98 = (void *)0x0;
  uStack_90 = (longlong *)0x0;
  if ((longlong)*(int *)(lVar10 + 0x40) != 0) {
    lVar12 = *(longlong *)(lVar10 + 0x38);
    lVar10 = (longlong)*(int *)(lVar10 + 0x40) * 0x430;
    do {
      cVar5 = FUN_144240e04(lVar12);
      plVar2 = uStack_90;
      if (cVar5 != '\0') {
        lVar9 = (longlong)(int)(uint)uStack_90;
        uVar6 = (uint)uStack_90 + 1;
        uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar6);
        if (uStack_90._4_4_ < uVar6) {
          FUN_145917388(&local_98,(ulonglong)plVar2 & 0xffffffff);
        }
        FUN_1413505e4((void *)(lVar9 * 0x430 + (longlong)local_98),lVar12);
      }
      uVar7 = uStack_80;
      lVar12 = lVar12 + 0x430;
      lVar10 = lVar10 + -0x430;
    } while (lVar10 != 0);
    lVar10 = (longlong)(int)(uint)uStack_90;
    if (lVar10 != 0) {
      iVar3 = (int)uStack_80;
      lVar12 = (longlong)(int)uStack_80;
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + (uint)uStack_90);
      if ((uint)(uStack_80._4_4_ - iVar3) < (uint)uStack_90) {
        FUN_145917388(&local_88,uVar7 & 0xffffffff);
      }
      memmove((void *)(lVar12 * 0x430 + local_88),local_98,lVar10 * 0x430);
      uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
    }
  }
  FUN_141286eab(local_98,0);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(local_a8);
  lVar10 = FUN_140254ee4(param_2);
  if (lVar10 != 0) {
    FUN_148f0a792(param_1,&local_78,param_2,lVar10);
  }
  bVar13 = (longlong)uStack_70 < 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (bVar13) {
    FUN_148e9a5d8(&local_78,0);
  }
  lVar10 = *(longlong *)(param_1 + 10000);
  if (lVar10 != 0) {
    lVar12 = *(longlong *)(lVar10 + 0x5b8);
    if (lVar12 == 0) {
      uVar8 = FUN_140067708();
      lVar12 = FUN_14477b664(uVar8);
      *(longlong *)(lVar10 + 0x5b8) = lVar12;
    }
    if (*(longlong *)(lVar10 + 0x5c0) == 0) {
      if ((lVar12 != 0) && (*(longlong *)(lVar10 + 0x5b0) != 0)) {
        plVar2 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          *(undefined8 *)(lVar10 + 0x5c0) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar12 = FUN_144aff482(uVar8,(longlong *)(lVar10 + 0x5b0));
          *(longlong *)(lVar10 + 0x5c0) = lVar12;
          if (lVar12 != 0) goto LAB_148f091ff;
        }
      }
    }
    else {
LAB_148f091ff:
      lVar10 = *(longlong *)(param_1 + 10000);
      lVar12 = *(longlong *)(lVar10 + 0x5b8);
      if (lVar12 == 0) {
        uVar8 = FUN_140067708();
        lVar12 = FUN_14477b664(uVar8);
        *(longlong *)(lVar10 + 0x5b8) = lVar12;
      }
      if (((*(longlong *)(lVar10 + 0x5c0) == 0) && (lVar12 != 0)) &&
         (*(longlong *)(lVar10 + 0x5b0) != 0)) {
        plVar2 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar2 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar2 + 0x108))(), cVar5 == '\0')
           ) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar8 = FUN_144aff482(uVar8,(longlong *)(lVar10 + 0x5b0));
        }
        *(undefined8 *)(lVar10 + 0x5c0) = uVar8;
      }
      FUN_14434c2bc();
    }
  }
LAB_148f0923b:
  FUN_141286eab(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_148f08f52:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f09418 FUN_148f09418 body=1687 status=ok
// SIG undefined FUN_148f09418(void)

void FUN_148f09418(longlong param_1,int *param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  char local_c8;
  char local_b1;
  longlong *local_b0;
  int *local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_84;
  ulonglong local_78 [5];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar17 = *(longlong *)(param_1 + 0x26b0);
  local_a8 = param_2;
  if (lVar17 == 0) {
    uVar10 = FUN_1457512de();
    lVar17 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0x26b0) = lVar17;
  }
  plVar15 = (longlong *)(param_1 + 0x26a8);
  if (*(longlong *)(param_1 + 0x26b8) == 0) {
    if ((lVar17 == 0) || (*plVar15 == 0)) goto LAB_148f094fb;
    plVar8 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x26b8) = 0;
      goto LAB_148f094fb;
    }
    uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar17 = FUN_144aff482(uVar10,plVar15);
    *(longlong *)(param_1 + 0x26b8) = lVar17;
    if (lVar17 == 0) goto LAB_148f094fb;
  }
  local_78[0] = 0;
  FUN_14485c47a(local_78,param_3);
  plVar8 = (longlong *)
           FUN_1412e3d70(param_1 + 0x2968,(uint)(local_78[0] >> 0x20) ^ (uint)local_78[0],local_78);
  local_78[0] = local_78[0] & 0xffffffffffffff00;
  local_50 = 0;
  if (0 < (longlong)(int)plVar8[1]) {
    iVar18 = 0;
    lVar17 = 0;
    do {
      if (*local_a8 == *(int *)(*plVar8 + 0xd8 + lVar17)) {
        lVar9 = FUN_140254ee4(param_3);
        if ((*(char *)(lVar9 + 0x138) != '\0') || (*(int *)(lVar9 + 0x9c) < *(int *)(lVar9 + 0x94)))
        {
          lVar9 = *(longlong *)(param_1 + 0x26b0);
          local_b1 = param_4;
          if (lVar9 == 0) {
            uVar10 = FUN_1457512de();
            lVar9 = FUN_14477b664(uVar10);
            *(longlong *)(param_1 + 0x26b0) = lVar9;
          }
          lVar14 = *(longlong *)(param_1 + 0x26b8);
          if (((lVar14 == 0) && (lVar14 = 0, lVar9 != 0)) && (*plVar15 != 0)) {
            plVar4 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
              lVar14 = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar14 = FUN_144aff482(uVar10,plVar15);
            }
            *(longlong *)(param_1 + 0x26b8) = lVar14;
          }
          lVar9 = *(longlong *)(lVar14 + 0x180);
          if (lVar9 == 0) {
            uVar10 = FUN_145d10a46();
            lVar9 = FUN_14477b664(uVar10);
            *(longlong *)(lVar14 + 0x180) = lVar9;
          }
          if (*(longlong *)(lVar14 + 0x188) == 0) {
            plVar4 = (longlong *)(lVar14 + 0x178);
            if ((*plVar4 != 0) && (lVar9 != 0)) {
              plVar3 = *(longlong **)(lVar9 + 0xb8);
              local_b0 = plVar4;
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                *(undefined8 *)(lVar14 + 0x188) = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar9 = FUN_144aff482(uVar10,local_b0);
                *(longlong *)(lVar14 + 0x188) = lVar9;
                if (lVar9 != 0) goto LAB_148f095fb;
              }
            }
            plVar15 = (longlong *)&DAT_14cbe75e8;
            cVar5 = local_b1;
          }
          else {
LAB_148f095fb:
            lVar9 = *(longlong *)(param_1 + 0x26b0);
            if (lVar9 == 0) {
              uVar10 = FUN_1457512de();
              lVar9 = FUN_14477b664(uVar10);
              *(longlong *)(param_1 + 0x26b0) = lVar9;
            }
            cVar5 = local_b1;
            lVar14 = *(longlong *)(param_1 + 0x26b8);
            if (((lVar14 == 0) && (lVar14 = 0, lVar9 != 0)) && (*plVar15 != 0)) {
              plVar4 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                lVar14 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar14 = FUN_144aff482(uVar10,plVar15);
              }
              *(longlong *)(param_1 + 0x26b8) = lVar14;
            }
            local_98 = *(longlong *)(lVar14 + 0x178);
            plVar15 = &local_98;
          }
          puVar16 = &local_84;
          FUN_1401533ba(puVar16,plVar15,1);
          uVar11 = (**(code **)(*(longlong *)(param_3 + 0x9b0) + 0x18))(param_3 + 0x9b0,puVar16);
          if (cVar5 != '\x01' || (ulonglong)(longlong)*(int *)(*plVar8 + 0xdc + lVar17) <= uVar11) {
            local_98 = 0;
            uStack_90 = 0;
            cVar5 = *(char *)(*plVar8 + 0xe5 + lVar17);
            local_b0 = (longlong *)CONCAT71(local_b0._1_7_,cVar5);
            if (cVar5 == '\x01') {
              FUN_148c38c02(param_3,param_1,local_a8,&local_84);
              goto LAB_148f096bc;
            }
            cVar5 = FUN_140baf362(*plVar8 + lVar17,&local_98,0);
            if (((param_3 == 0) || (cVar5 == '\0')) || ((longlong)*(int *)(param_1 + 0x2af0) == 0))
            goto LAB_148f096bc;
            plVar15 = *(longlong **)(param_1 + 0x2ae8);
            lVar9 = (longlong)*(int *)(param_1 + 0x2af0) << 6;
            goto LAB_148f09982;
          }
        }
        local_98 = CONCAT71(local_98._1_7_,2);
        FUN_148c37e0c(param_3,&local_98,param_1,0);
        break;
      }
      lVar17 = lVar17 + 0xf0;
      iVar18 = iVar18 + 1;
    } while ((longlong)(int)plVar8[1] * 0xf0 - lVar17 != 0);
  }
  goto LAB_148f094f1;
  while( true ) {
    plVar15 = plVar15 + 8;
    lVar9 = lVar9 + -0x40;
    if (lVar9 == 0) break;
LAB_148f09982:
    if (*plVar15 == param_3) {
      if ((plVar15 != (longlong *)0x0) && (iVar7 = (int)plVar15[3], 0 < iVar7)) {
        lVar9 = 8;
        puVar16 = (ulonglong *)0x0;
        goto LAB_148f099e8;
      }
      break;
    }
  }
  goto LAB_148f096bc;
LAB_148f099e8:
  do {
    iVar1 = *(int *)(plVar15[2] + lVar9);
    if (iVar1 == (int)uStack_90) {
      if ((iVar1 < 2) ||
         (iVar7 = FUN_144a80a00(*(undefined8 *)(plVar15[2] + -8 + lVar9),local_98), iVar7 == 0))
      goto LAB_148f09a44;
      iVar7 = (int)plVar15[3];
    }
    else if ((int)uStack_90 + iVar1 == 1) {
LAB_148f09a44:
      local_c8 = local_b1;
      FUN_148c38dca(param_3,param_1,(ulonglong)puVar16 & 0xffffffff,&local_84);
      break;
    }
    puVar16 = (ulonglong *)((longlong)puVar16 + 1);
    lVar9 = lVar9 + 0x10;
  } while ((longlong)puVar16 < (longlong)iVar7);
LAB_148f096bc:
  if (*(char *)(*plVar8 + 0xe4 + lVar17) == '\x01') {
    local_a0 = 0;
    FUN_14485c47a(&local_a0,param_3);
    puVar12 = (undefined1 *)
              FUN_141121064(param_1 + 0x28c0,(uint)(local_a0 >> 0x20) ^ (uint)local_a0,&local_a0);
    *puVar12 = 0;
    FUN_148c38618(param_3,param_1);
    local_a0 = 0;
    puVar16 = &local_a0;
    FUN_14485c47a(puVar16,param_3);
    puVar13 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar13 = 0;
    puVar13[1] = local_a0;
    if (puVar13 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x2670);
      *(undefined8 **)(param_1 + 0x2670) = puVar13;
      *puVar2 = puVar13;
    }
  }
  cVar5 = (char)local_b0;
  if (local_b1 != '\0') {
    local_a0 = local_a0 & 0xffffffffffffff00;
    FUN_148c37e0c(param_3,&local_a0,param_1,
                  CONCAT71((int7)((ulonglong)puVar16 >> 8),(char)local_b0) & 0xffffffff);
  }
  if ((cVar5 == '\0') && (*(char *)(param_1 + 0x2b30) == '\x01')) {
    cVar5 = FUN_144729dda(param_1 + 0x2718);
    if ((cVar5 != '\0') &&
       (((lVar9 = FUN_14479d2ce(param_1 + 0x2718), *(char *)(lVar9 + 0xe8) == '\x01' &&
         (*(longlong *)(param_1 + 10000) != 0)) &&
        (*(char *)(*(longlong *)(param_1 + 10000) + 0x548) == '\x01')))) {
      FUN_14434d95a(param_1,param_3);
      FUN_148f05cae(param_1,param_3,0);
    }
  }
  if (*(char *)(*plVar8 + 0xe6 + lVar17) == '\0') {
    FUN_145872da4(plVar8,iVar18);
  }
  FUN_1447f69b6(param_1 + 0x2a18);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_148f094f1:
  FUN_144a5ac3a(local_78);
LAB_148f094fb:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f09ab0 FUN_148f09ab0 body=1436 status=ok
// SIG undefined FUN_148f09ab0(void)

void FUN_148f09ab0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x26b0);
  if (lVar6 == 0) {
    uVar5 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x26b0) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x26a8);
  bVar10 = true;
  if (*(longlong *)(param_1 + 0x26b8) == 0) {
    lVar8 = 0;
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x26b8) = lVar8;
    }
    bVar10 = lVar8 != 0;
  }
  if ((param_2 == 0) || (!bVar10)) goto LAB_148f09b08;
  iVar4 = FUN_148f0b12e(param_1,param_2);
  lVar6 = *(longlong *)(param_1 + 0x26b0);
  if (lVar6 == 0) {
    uVar5 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x26b0) = lVar6;
  }
  lVar8 = *(longlong *)(param_1 + 0x26b8);
  if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar5,plVar1);
    }
    *(longlong *)(param_1 + 0x26b8) = lVar8;
  }
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x180));
  FUN_14477b664(uVar5);
  lVar6 = *(longlong *)(param_1 + 0x26b0);
  if (lVar6 == 0) {
    uVar5 = FUN_1457512de();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x26b0) = lVar6;
  }
  lVar8 = *(longlong *)(param_1 + 0x26b8);
  if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar5,plVar1);
    }
    *(longlong *)(param_1 + 0x26b8) = lVar8;
  }
  lVar6 = *(longlong *)(lVar8 + 0x180);
  if (lVar6 == 0) {
    uVar5 = FUN_145d10a46();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar8 + 0x180) = lVar6;
  }
  if (*(longlong *)(lVar8 + 0x188) == 0) {
    if ((*(longlong *)(lVar8 + 0x178) != 0) && (lVar6 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar8 + 0x188) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x178));
        *(longlong *)(lVar8 + 0x188) = lVar6;
        if (lVar6 != 0) goto LAB_148f09c19;
      }
    }
    puVar9 = (undefined8 *)&DAT_14cbe75e8;
  }
  else {
LAB_148f09c19:
    lVar6 = *(longlong *)(param_1 + 0x26b0);
    if (lVar6 == 0) {
      uVar5 = FUN_1457512de();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x26b0) = lVar6;
    }
    lVar8 = *(longlong *)(param_1 + 0x26b8);
    if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar5,plVar1);
      }
      *(longlong *)(param_1 + 0x26b8) = lVar8;
    }
    local_60 = *(undefined8 *)(lVar8 + 0x178);
    puVar9 = &local_60;
  }
  FUN_1401533ba(local_54,puVar9,1);
  uVar7 = (**(code **)(*(longlong *)(param_2 + 0x9b0) + 0x18))(param_2 + 0x9b0,local_54);
  if ((uVar7 < (ulonglong)(longlong)iVar4 & (byte)param_3) == 0) {
    FUN_1447f69b6(&DAT_00002a60 + param_1);
    FUN_148c38984(param_2,param_1,local_54,param_3);
    local_60 = CONCAT71(local_60._1_7_,4);
    FUN_148c37e0c(param_2,&local_60,param_1,0);
    lVar6 = *(longlong *)(param_1 + 10000);
    if (lVar6 != 0) {
      lVar8 = *(longlong *)(lVar6 + 0x570);
      if (lVar8 == 0) {
        uVar5 = FUN_140067708();
        lVar8 = FUN_14477b664(uVar5);
        *(longlong *)(lVar6 + 0x570) = lVar8;
      }
      if (*(longlong *)(lVar6 + 0x578) == 0) {
        if ((lVar8 == 0) || (*(longlong *)(lVar6 + 0x568) == 0)) goto LAB_148f09b08;
        plVar1 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          *(undefined8 *)(lVar6 + 0x578) = 0;
          goto LAB_148f09b08;
        }
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar8 = FUN_144aff482(uVar5,(longlong *)(lVar6 + 0x568));
        *(longlong *)(lVar6 + 0x578) = lVar8;
        if (lVar8 == 0) goto LAB_148f09b08;
      }
      lVar6 = *(longlong *)(param_1 + 10000);
      lVar8 = *(longlong *)(lVar6 + 0x570);
      if (lVar8 == 0) {
        uVar5 = FUN_140067708();
        lVar8 = FUN_14477b664(uVar5);
        *(longlong *)(lVar6 + 0x570) = lVar8;
      }
      if (((*(longlong *)(lVar6 + 0x578) == 0) && (lVar8 != 0)) &&
         (*(longlong *)(lVar6 + 0x568) != 0)) {
        plVar1 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar1 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar1 + 0x108))(), cVar3 == '\0')
           ) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar6 + 0x568));
        }
        *(undefined8 *)(lVar6 + 0x578) = uVar5;
      }
      FUN_14434c2bc();
    }
  }
  else {
    local_60 = CONCAT71(local_60._1_7_,2);
    FUN_148c37e0c(param_2,&local_60,param_1,0);
  }
LAB_148f09b08:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0a04e FUN_148f0a04e body=78 status=ok
// SIG undefined FUN_148f0a04e(void)

longlong * FUN_148f0a04e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141286eab(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148f0a09c FUN_148f0a09c body=1781 status=ok
// SIG undefined FUN_148f0a09c(void)

void FUN_148f0a09c(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 auStack_198 [40];
  longlong *local_170;
  undefined8 local_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  longlong local_108;
  uint local_100;
  uint local_fc;
  undefined1 local_f8 [32];
  undefined8 *local_d8;
  undefined1 local_cc;
  undefined8 *local_78;
  longlong *plStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar9 = FUN_145da44aa(param_2);
  if (lVar9 != 0) {
    local_170 = param_3;
    FUN_145be44b4(local_140);
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"SellEquippedItemTitle",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_140008f88(local_138,&local_160);
    if ((longlong *)CONCAT44(uStack_15c,local_160) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_15c,local_160) + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"SellEquippedItemDescription",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_140008f88(local_128,&local_160);
    if ((longlong *)CONCAT44(uStack_15c,local_160) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_15c,local_160) + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"SellEquippedItemConfirm",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_1446ddc76(&local_150,&DAT_14b417acb,1);
    uVar7 = local_100;
    local_148 = 1;
    lVar12 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar7);
    }
    lVar11 = local_108;
    lVar12 = lVar12 * 0x20;
    FUN_14023423e(local_108 + lVar12,&local_160);
    *(undefined1 *)(lVar11 + 0x18 + lVar12) = local_148;
    *(undefined8 *)(lVar11 + 0x10 + lVar12) = local_150;
    if ((longlong *)CONCAT44(uStack_15c,local_160) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_15c,local_160) + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    local_160 = uVar7;
    FUN_1448d5e3c(&local_78);
    lVar12 = local_78[0x42];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x1f0));
    *(int *)(lVar12 + 0x1e8) = *(int *)(lVar12 + 0x1e8) + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x1f0));
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    local_160 = uVar7;
    FUN_1448d5e3c(&local_78);
    lVar11 = local_78[0x42];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x1f0));
    *(int *)(lVar11 + 0x1e8) = *(int *)(lVar11 + 0x1e8) + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x1f0));
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = (longlong *)(lVar12 + 0x50);
    plVar3 = (longlong *)(lVar11 + 0x68);
    *(undefined4 *)(lVar11 + 0x70) = 0;
    if (*(int *)(lVar11 + 0x74) < 0) {
      FUN_148e9a5d8(plVar3,0);
    }
    plVar4 = local_170;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    FUN_148e9a5ae(plVar2,(int)local_170[1]);
    *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 1;
    lVar10 = (longlong)(int)plVar4[1];
    iVar8 = 0;
    if (lVar10 != 0) {
      lVar13 = *plVar4;
      lVar10 = lVar10 * 0x430;
      local_168 = param_1;
      do {
        iVar8 = *(int *)(lVar12 + 0x58);
        *(uint *)(lVar12 + 0x58) = iVar8 + 1U;
        if (*(uint *)(lVar12 + 0x5c) < iVar8 + 1U) {
          FUN_148d699d4(plVar2,iVar8);
          *(undefined4 *)(*plVar2 + (longlong)iVar8 * 4) = *(undefined4 *)(lVar13 + 8);
LAB_148f0a415:
          *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 1;
        }
        else {
          *(undefined4 *)(*plVar2 + (longlong)iVar8 * 4) = *(undefined4 *)(lVar13 + 8);
          if (iVar8 != -1) goto LAB_148f0a415;
        }
        cVar6 = FUN_144240dfe(lVar13);
        if (cVar6 == '\0') {
          iVar8 = *(int *)(lVar11 + 0x70);
          *(uint *)(lVar11 + 0x70) = iVar8 + 1U;
          if (*(uint *)(lVar11 + 0x74) < iVar8 + 1U) {
            FUN_148d699d4(plVar3,iVar8);
            *(undefined4 *)(*plVar3 + (longlong)iVar8 * 4) = *(undefined4 *)(lVar13 + 8);
          }
          else {
            *(undefined4 *)(*plVar3 + (longlong)iVar8 * 4) = *(undefined4 *)(lVar13 + 8);
            if (iVar8 == -1) goto LAB_148f0a425;
          }
          *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
        }
LAB_148f0a425:
        lVar13 = lVar13 + 0x430;
        lVar10 = lVar10 + -0x430;
      } while (lVar10 != 0);
      iVar8 = (int)local_170[1];
      param_1 = local_168;
    }
    pcVar14 = "all";
    if (iVar8 != *(int *)(lVar11 + 0x70) && *(int *)(lVar11 + 0x70) != 0) {
      local_78 = (undefined8 *)0x0;
      plStack_70 = (longlong *)0x0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"SellEquippedItemOnlyUnequipped",0);
      FUN_1410d1eba(&local_160,&local_78);
      pcVar14 = "partial";
      FUN_1446ddc76(&local_150,"partial",1);
      uVar7 = local_100;
      local_148 = 1;
      lVar12 = (longlong)(int)local_100;
      local_100 = local_100 + 1;
      if (local_fc < local_100) {
        FUN_145da4fc8(&local_108,uVar7);
      }
      lVar11 = local_108;
      lVar12 = lVar12 * 0x20;
      FUN_14023423e(local_108 + lVar12,&local_160);
      *(undefined1 *)(lVar11 + 0x18 + lVar12) = local_148;
      *(undefined8 *)(lVar11 + 0x10 + lVar12) = local_150;
      if ((longlong *)CONCAT44(uStack_15c,local_160) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_15c,local_160) + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"SellEquippedItemCancel",0);
    FUN_1410d1eba(&local_160,&local_78);
    FUN_1446ddc76(&local_150,"cancel",1);
    uVar7 = local_100;
    local_148 = 1;
    lVar12 = (longlong)(int)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      FUN_145da4fc8(&local_108,uVar7);
    }
    lVar12 = lVar12 * 0x20;
    FUN_14023423e(local_108 + lVar12,&local_160);
    *(undefined1 *)(local_108 + 0x18 + lVar12) = local_148;
    *(undefined8 *)(local_108 + 0x10 + lVar12) = local_150;
    if ((longlong *)CONCAT44(uStack_15c,local_160) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_15c,local_160) + 0x10))();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78 = (undefined8 *)0x0;
    plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar5 = local_78;
    plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,3);
    *local_78 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_78[2] = lVar11;
    *local_78 = &PTR_FUN_14b9dec20;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_1);
    puVar5[4] = FUN_148f0a88e;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_144a450dc(local_f8,&local_78);
    FUN_1449db362(&local_78);
    FUN_1446ddc76(&local_78,pcVar14,1);
    local_d8 = local_78;
    local_cc = 1;
    FUN_1459dda8e(lVar9,local_140);
    FUN_1459ddea2(local_140);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0a792 FUN_148f0a792 body=251 status=ok
// SIG undefined FUN_148f0a792(void)

void FUN_148f0a792(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_4 == 0) {
      param_4 = FUN_140254ee4(param_3);
    }
    FUN_14136cf00(local_44,param_3,param_1,2);
    lVar2 = param_2[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_2;
      lVar3 = 0;
      do {
        local_48 = *(undefined4 *)(lVar1 + lVar3);
        local_58 = 0;
        FUN_148f0ad9e(param_1,&local_48,param_3,param_4);
        lVar3 = lVar3 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar3);
    }
    if (*(char *)(param_1 + 0x178) == '\x03') {
      FUN_14434cbe2(param_1);
    }
    FUN_1447f69b6(param_1 + 0x2a48);
    local_48 = CONCAT31(local_48._1_3_,3);
    FUN_148c37e0c(param_3,&local_48,param_1,0);
    FUN_14136cce2(local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0a88e FUN_148f0a88e body=952 status=ok
// SIG undefined FUN_148f0a88e(void)

void FUN_148f0a88e(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_1447210f0();
  if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x238))) {
    iVar11 = 0;
    lVar12 = 0;
    do {
      lVar7 = FUN_14479d2ce(*(longlong *)(lVar6 + 0x230) + lVar12);
      if (lVar7 != 0) {
        lVar8 = FUN_144a5dd5e();
        if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
            (uVar9 = FUN_144a7ba4c(lVar7), uVar9 != 0)) && (*(int *)(uVar9 + 0xe0) == param_3)) {
          uVar5 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          local_5c = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          local_5c = local_5c >> 0x10 ^ local_5c;
          FUN_1448d5e3c(&local_58);
          lVar6 = *(longlong *)(local_58 + 0x210);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1f0));
          plVar3 = plStack_50;
          *(int *)(lVar6 + 0x1e8) = *(int *)(lVar6 + 0x1e8) + 1;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          cVar4 = FUN_144709e00(*param_2,"partial");
          if (cVar4 == '\0') {
            cVar4 = FUN_144709e00(*param_2,&DAT_14b417acb);
            if (cVar4 != '\0') {
              uVar10 = FUN_140254ee4(lVar7);
              lVar12 = lVar6 + 0x50;
              goto LAB_148f0aa59;
            }
          }
          else {
            uVar10 = FUN_140254ee4(lVar7);
            lVar12 = lVar6 + 0x68;
LAB_148f0aa59:
            FUN_148f0a792(param_1,lVar12,lVar7,uVar10);
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            uVar10 = FUN_1414213c4(lVar7);
            FUN_148f081d4(uVar10,&local_58);
            uVar10 = FUN_1414213c4(lVar7);
            FUN_148f0a792(param_1,&local_58,lVar7,uVar10);
            lVar12 = *(longlong *)(param_1 + 10000);
            if (lVar12 != 0) {
              lVar7 = *(longlong *)(lVar12 + 0x5b8);
              if (lVar7 == 0) {
                uVar10 = FUN_140067708();
                lVar7 = FUN_14477b664(uVar10);
                *(longlong *)(lVar12 + 0x5b8) = lVar7;
              }
              if (*(longlong *)(lVar12 + 0x5c0) == 0) {
                if ((lVar7 != 0) && (*(longlong *)(lVar12 + 0x5b0) != 0)) {
                  plVar3 = *(longlong **)(lVar7 + 0xb8);
                  if ((plVar3 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                    *(undefined8 *)(lVar12 + 0x5c0) = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                    lVar7 = FUN_144aff482(uVar10,(longlong *)(lVar12 + 0x5b0));
                    *(longlong *)(lVar12 + 0x5c0) = lVar7;
                    if (lVar7 != 0) goto LAB_148f0aad9;
                  }
                }
              }
              else {
LAB_148f0aad9:
                lVar12 = *(longlong *)(param_1 + 10000);
                lVar7 = *(longlong *)(lVar12 + 0x5b8);
                if (lVar7 == 0) {
                  uVar10 = FUN_140067708();
                  lVar7 = FUN_14477b664(uVar10);
                  *(longlong *)(lVar12 + 0x5b8) = lVar7;
                }
                if (((*(longlong *)(lVar12 + 0x5c0) == 0) && (lVar7 != 0)) &&
                   (*(longlong *)(lVar12 + 0x5b0) != 0)) {
                  plVar3 = *(longlong **)(lVar7 + 0xb8);
                  if ((plVar3 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x108))(), cVar4 == '\0')) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                    uVar10 = FUN_144aff482(uVar10,(longlong *)(lVar12 + 0x5b0));
                  }
                  *(undefined8 *)(lVar12 + 0x5c0) = uVar10;
                }
                FUN_14434c2bc();
              }
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          if (*(int *)(lVar6 + 0x74) < 0) {
            *(undefined4 *)(lVar6 + 0x70) = 0;
            FUN_148e9a5d8(lVar6 + 0x68,0);
          }
          else {
            *(undefined4 *)(lVar6 + 0x70) = 0;
          }
          *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
          if (*(int *)(lVar6 + 0x5c) < 0) {
            *(undefined4 *)(lVar6 + 0x58) = 0;
            FUN_148e9a5d8(lVar6 + 0x50,0);
          }
          else {
            *(undefined4 *)(lVar6 + 0x58) = 0;
          }
          *(int *)(lVar6 + 0x60) = *(int *)(lVar6 + 0x60) + 1;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1f0));
          break;
        }
      }
      lVar12 = lVar12 + 8;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lVar6 + 0x238));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0ac48 FUN_148f0ac48 body=275 status=ok
// SIG undefined FUN_148f0ac48(void)

undefined8 FUN_148f0ac48(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = local_38;
  iVar1 = FUN_141303122(param_1 + 0x2968,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
  if (iVar1 != -1) {
    plVar4 = (longlong *)(param_1 + 0x2808);
    local_40 = 0;
    FUN_14485c47a(&local_40,param_2);
    local_30 = local_40;
    iVar1 = FUN_1412ea6f2(plVar4,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
    if (iVar1 != -1) {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_2);
      local_30 = local_48;
      iVar1 = FUN_1412ea6f2(plVar4,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
      if (iVar1 == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0x18 + *plVar4;
      }
      uVar2 = FUN_14479d2ce(lVar3 + 8);
      goto LAB_148f0ad37;
    }
  }
  uVar2 = 0;
LAB_148f0ad37:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0ad5c FUN_148f0ad5c body=65 status=ok
// SIG undefined FUN_148f0ad5c(void)

void FUN_148f0ad5c(longlong param_1,undefined8 param_2)

{
  if ((*(longlong *)(param_1 + 10000) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 10000) + 0x548) == '\x01')) {
    FUN_14434d95a();
    FUN_148f05cae(param_1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 148f0ad9e FUN_148f0ad9e body=911 status=ok
// SIG undefined FUN_148f0ad9e(void)

void FUN_148f0ad9e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  byte param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x26b0);
  if (lVar5 == 0) {
    uVar4 = FUN_1457512de();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x26b0) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x26a8);
  if (*(longlong *)(param_1 + 0x26b8) == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_148f0aee6;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x26b8) = 0;
      goto LAB_148f0aee6;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x26b8) = lVar5;
    if (lVar5 == 0) goto LAB_148f0aee6;
  }
  if (param_4 == 0) {
    param_4 = FUN_140254ee4(param_3);
  }
  *(byte *)(param_1 + 0x2b08) = *(byte *)(param_1 + 0x2b08) | param_5;
  lVar5 = *(longlong *)(param_1 + 0x26b0);
  if (lVar5 == 0) {
    uVar4 = FUN_1457512de();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x26b0) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x26b8);
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x26b8) = lVar6;
  }
  lVar5 = *(longlong *)(lVar6 + 0x168);
  if (lVar5 == 0) {
    uVar4 = FUN_145d10a46();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar6 + 0x168) = lVar5;
  }
  if (*(longlong *)(lVar6 + 0x170) == 0) {
    if ((*(longlong *)(lVar6 + 0x160) != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar6 + 0x170) = 0;
        puVar7 = (undefined8 *)&DAT_14cbe75e8;
        goto LAB_148f0ae8d;
      }
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x160));
      *(longlong *)(lVar6 + 0x170) = lVar5;
      if (lVar5 != 0) goto LAB_148f0ae5e;
    }
    puVar7 = (undefined8 *)&DAT_14cbe75e8;
  }
  else {
LAB_148f0ae5e:
    lVar5 = *(longlong *)(param_1 + 0x26b0);
    if (lVar5 == 0) {
      uVar4 = FUN_1457512de();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x26b0) = lVar5;
    }
    lVar6 = *(longlong *)(param_1 + 0x26b8);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x26b8) = lVar6;
    }
    local_60 = *(undefined8 *)(lVar6 + 0x160);
    puVar7 = &local_60;
  }
LAB_148f0ae8d:
  FUN_1401533ba(local_54,puVar7,1);
  local_68 = local_54;
  FUN_148c39826(param_3,param_1,param_2,param_4 + 0xb8);
  if (param_5 != 0) {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      FUN_14434cbe2(param_1);
    }
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_148c37e0c(param_3,&local_60,param_1,0);
  }
LAB_148f0aee6:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0b12e FUN_148f0b12e body=64 status=ok
// SIG undefined FUN_148f0b12e(void)

undefined8 FUN_148f0b12e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140704886();
    if (lVar1 != 0) {
      uVar2 = FUN_140704a22(lVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148f0b16e FUN_148f0b16e body=345 status=ok
// SIG undefined FUN_148f0b16e(void)

void FUN_148f0b16e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 10000);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar1 + 0x5b8);
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x5b8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x5c0) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(lVar1 + 0x5b0) == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar1 + 0x5c0) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x5b0));
    *(longlong *)(lVar1 + 0x5c0) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 10000);
  lVar5 = *(longlong *)(lVar1 + 0x5b8);
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x5b8) = lVar5;
  }
  if (((*(longlong *)(lVar1 + 0x5c0) == 0) && (lVar5 != 0)) && (*(longlong *)(lVar1 + 0x5b0) != 0))
  {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x5b0));
    }
    *(undefined8 *)(lVar1 + 0x5c0) = uVar4;
  }
  FUN_14434c2bc();
  return;
}



// FUNCTION 148f0b2c8 FUN_148f0b2c8 body=7 status=ok
// SIG undefined FUN_148f0b2c8(void)

void FUN_148f0b2c8(longlong param_1)

{
  *(int *)(param_1 + 0x2ac0) = *(int *)(param_1 + 0x2ac0) + 1;
  return;
}



// FUNCTION 148f0b2d0 FUN_148f0b2d0 body=174 status=ok
// SIG undefined FUN_148f0b2d0(void)

undefined4 FUN_148f0b2d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if ((longlong)(int)param_2[3] != 0) {
      uVar3 = 0;
      lVar4 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar4) == 0) goto LAB_148f0b357;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar4);
    }
    FUN_140c65c56(param_2,&local_28);
    if (local_28 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(local_28 + 0x40);
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
  }
LAB_148f0b357:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0b380 FUN_148f0b380 body=82 status=ok
// SIG undefined FUN_148f0b380(void)

void FUN_148f0b380(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_1418d1fc2(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148f136e0(param_1);
  return;
}



// FUNCTION 148f0b3d2 FUN_148f0b3d2 body=445 status=ok
// SIG undefined FUN_148f0b3d2(void)

int FUN_148f0b3d2(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140212f8e(&local_58);
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14021300e(&local_50,0x7b2,1,1);
  uVar2 = (local_58 - local_50) / 10000000;
  iVar5 = *(int *)(param_1 + 0x2b40);
  if ((longlong)iVar5 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b38);
    lVar9 = 0;
    do {
      cVar3 = FUN_14088ccfe(lVar9 + lVar7,param_2);
      if (cVar3 != '\0') {
        uVar4 = (int)(lVar9 >> 3) * -0x55555555;
        if (uVar4 != 0xffffffff) {
          lVar7 = *(longlong *)(param_1 + 0x2b38);
          uVar1 = *(ulonglong *)(lVar7 + 0x10 + (longlong)(int)uVar4 * 0x18);
          if (uVar2 < uVar1) {
            iVar5 = (int)uVar1 - (int)uVar2;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x2b40);
            iVar6 = ~uVar4 + iVar5;
            if (iVar6 != 0) {
              iVar8 = 1;
              if (iVar6 < 1) {
                iVar8 = iVar6;
              }
              memmove((void *)(lVar7 + (longlong)(int)uVar4 * 0x18),
                      (void *)(lVar7 + (longlong)(iVar5 - iVar8) * 0x18),(longlong)iVar8 * 0x18);
              iVar5 = *(int *)(param_1 + 0x2b40);
            }
            *(int *)(param_1 + 0x2b40) = iVar5 + -1;
            FUN_148f1377c((longlong *)(param_1 + 0x2b38));
            FUN_148c39726(param_2,param_1);
            iVar5 = 0;
          }
          goto LAB_148f0b4b5;
        }
        break;
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar5 * 0x18 != lVar9);
  }
  lVar7 = FUN_1402a1246(param_2);
  iVar5 = 0;
  if ((lVar7 != 0) && (iVar5 = 0, uVar2 < *(ulonglong *)(lVar7 + 0xf20))) {
    FUN_148f05cae(param_1,param_2);
    iVar5 = FUN_148f0b3d2(param_1,param_2);
  }
LAB_148f0b4b5:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0b590 FUN_148f0b590 body=357 status=ok
// SIG undefined FUN_148f0b590(void)

void FUN_148f0b590(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  lVar1 = FUN_1447210f0();
  if ((((lVar1 != 0) && (plVar2 = (longlong *)FUN_14007a5e6(lVar1), plVar2 != (longlong *)0x0)) &&
      (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x78))(plVar2,param_2), plVar2 != (longlong *)0x0
      )) && (lVar3 = (**(code **)(*plVar2 + 8))(plVar2), lVar3 != 0)) {
    lVar4 = FUN_144a7ddba();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(longlong *)(lVar3 + 0x3f0) != 0)) {
      if ((longlong)*(int *)(lVar3 + 0x408) != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x400) + lVar4) == 0) goto LAB_148f0b60e;
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar3 + 0x408) * 8 != lVar4);
      }
      if (0 < *(int *)(lVar1 + 0x238)) {
        lVar7 = 0;
        lVar4 = 0;
        do {
          lVar5 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar7);
          if (lVar5 != 0) {
            lVar6 = FUN_144a5dd5e();
            if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
               ((lVar5 = FUN_1402a1246(lVar5), lVar5 != 0 && (*(longlong *)(lVar5 + 0xf78) != 0))))
            {
              FUN_148f07d6c(*(longlong *)(lVar5 + 0xf78),lVar3 + 0x3f0,&local_3c);
            }
          }
          lVar4 = lVar4 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar4 < *(int *)(lVar1 + 0x238));
      }
    }
  }
LAB_148f0b60e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0b6f6 FUN_148f0b6f6 body=157 status=ok
// SIG undefined FUN_148f0b6f6(void)

undefined8 FUN_148f0b6f6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (lVar2 = *(longlong *)(lVar2 + 0x488), lVar2 != 0)) {
        lVar3 = FUN_144a7b4ca();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),*(undefined1 *)(lVar2 + 0xf28));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148f0b794 FUN_148f0b794 body=1774 status=ok
// SIG undefined FUN_148f0b794(void)

void FUN_148f0b794(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined1 local_260;
  ulonglong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined1 local_200 [24];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_160 [24];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  code *local_128;
  undefined8 local_118;
  undefined **local_108;
  longlong *local_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (*param_2 == 0) goto LAB_148f0be16;
  lVar9 = *(longlong *)(*param_2 + 0x38);
  if (lVar9 == 0) {
LAB_148f0b7fc:
    lVar9 = *(longlong *)(*param_2 + 0x38);
    if (lVar9 == 0) goto LAB_148f0be16;
    uVar7 = FUN_141262f1a();
    plVar8 = (longlong *)FUN_144718840(lVar9,uVar7);
    if (plVar8 == (longlong *)0x0) goto LAB_148f0be16;
    lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (*(int *)(lVar9 + 0xa8) < 1) goto LAB_148f0be16;
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar9 != 0)) {
      FUN_1456cec3c(lVar9);
    }
    else if (lVar9 == 0) goto LAB_148f0be16;
  }
  else {
    lVar6 = FUN_144a7d050();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148f0b7fc;
  }
  if ((*(char *)(param_1 + 0x38) == '\x01') &&
     (plVar8 = (longlong *)FUN_143eca4da(lVar9,*(undefined1 *)(lVar9 + 0xbd8)),
     plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x2e0))(plVar8);
  }
  if (((*(char *)(lVar9 + 0x178) == '\x03') && (lVar6 = FUN_1447210f0(lVar9), lVar6 != 0)) &&
     (uVar14 = *(ulonglong *)(lVar9 + 0x1b0), uVar14 != 0)) {
    iVar3 = *(int *)(lVar9 + 0x4f8);
    if ((longlong)iVar3 == 0) {
      uVar7 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar9 + 0x4f0);
      uVar7 = 0;
      lVar15 = 0;
      local_258 = uVar14;
      local_250 = lVar6;
      do {
        plVar8 = *(longlong **)(lVar11 + lVar15);
        if (plVar8 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar8 + 8))(plVar8);
          lVar10 = FUN_140932c46();
          if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
               lVar10 + 0x30 &&
              (((int)plVar8[6] == 0 && (*(char *)((longlong)plVar8 + 0x3c) == '\0')))))) {
            FUN_1414afec6(plVar8 + 8,&local_e8);
            plVar8 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
            uVar7 = *(undefined8 *)(CONCAT44(uStack_e4,local_e8) + 0x58);
            uVar14 = local_258;
            lVar6 = local_250;
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
                uVar14 = local_258;
                lVar6 = local_250;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                  uVar14 = local_258;
                  lVar6 = local_250;
                }
              }
            }
            break;
          }
        }
        lVar15 = lVar15 + 0x10;
        uVar14 = local_258;
        lVar6 = local_250;
      } while ((longlong)iVar3 * 0x10 != lVar15);
    }
    local_1c8 = uVar7;
    FUN_1446dcdd4(&local_e8);
    lVar11 = FUN_140a4bd48(&local_e8);
    if (uStack_d0 != 0) {
      FUN_1400020a8();
    }
    if (lVar11 != 0) {
      lVar15 = lVar11 + 0x90;
      lVar10 = FUN_14479d2ce(lVar15);
      if (lVar10 == 0) {
        if (*(longlong *)(lVar11 + 0x98) == 0) goto LAB_148f0be16;
        lVar10 = FUN_140007850();
        cVar5 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar10 == 0) || (cVar5 == '\0')) {
          FUN_14485c47a(lVar15,lVar10);
          if (lVar10 == 0) goto LAB_148f0be16;
        }
        else {
          uVar4 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar15,lVar10);
          }
        }
        if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0) goto LAB_148f0be16;
      }
      lVar15 = FUN_144a797b2();
      if (((((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) &&
           (lVar15 = FUN_140d12354(), lVar15 != 0)) &&
          ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar10 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
            lVar15 + 0x30)))) &&
         ((lVar15 = FUN_140f1f93e(), lVar15 != 0 &&
          ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar10 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
            lVar15 + 0x30)))))) {
        local_138 = DAT_14c8464f0;
        local_148 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_140 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        lVar15 = *(longlong *)(*param_2 + 0x38);
        if (lVar15 != 0) {
          lVar12 = FUN_144a2f878();
          if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
             (*(char *)(lVar15 + 0x178) == '\x03')) {
            local_138 = *(undefined8 *)(lVar15 + 0x9c70);
            local_148 = *(undefined8 *)(lVar15 + 0x9c60);
            uStack_140 = *(undefined8 *)(lVar15 + 0x9c68);
          }
        }
        if ((*(int *)(lVar9 + 0xd10) < 1) || (**(longlong **)(lVar9 + 0xd08) == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(**(longlong **)(lVar9 + 0xd08) + 0xc);
        }
        local_e8 = CONCAT31(local_e8._1_3_,1);
        uStack_e4 = (undefined4)uVar7;
        uStack_e0 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_d8 = local_d8 & 0xffffffffffff0000;
        uStack_d0 = DAT_14c8464f8;
        uStack_c8 = DAT_14c846500;
        uStack_c0 = DAT_14c846508;
        local_b8 = 0;
        local_b4 = 0;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_a0 = (undefined4)DAT_14c8464e0;
        uStack_9c = DAT_14c8464e0._4_4_;
        uStack_98 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_90 = DAT_14c8464f0;
        FUN_14121405a(local_160,uVar14,&local_e8,&local_148);
        local_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        local_260 = 0;
        local_268 = 0xf;
        FUN_143e0f36e(&local_1c8,uVar14,local_160,&local_e8);
        if (CONCAT44(uStack_e4,local_e8) != 0) {
          FUN_1400020a8();
        }
        local_1e8 = (undefined4)local_1c8;
        uStack_1e4 = local_1c8._4_4_;
        uStack_1e0 = uStack_1c0;
        uStack_1dc = uStack_1bc;
        local_1d8 = local_1b8;
        uStack_1d0 = uStack_1b0;
        lVar15 = FUN_140eebb02(lVar9,1,0);
        if (lVar15 != 0) {
          local_1c8 = *(undefined8 *)(lVar15 + 0x240);
          uStack_1c0 = *(undefined4 *)(lVar15 + 0x248);
          uStack_1bc = *(undefined4 *)(lVar15 + 0x24c);
          local_1b8 = *(undefined8 *)(lVar15 + 0x250);
          uStack_1b0 = *(undefined8 *)(lVar15 + 600);
        }
        uStack_c8 = 0;
        uStack_c0 = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        local_b4 = CONCAT44(local_b4._4_4_,8);
        local_a8 = 0;
        uStack_98 = (longlong *)0x0;
        local_b8._0_3_ = CONCAT12(local_b8._2_1_,0x100) & 0xe0ffff | 0x60000;
        local_b8 = (uint)(uint3)local_b8;
        puVar13 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar11 + 8) != (undefined4 *)0x0) {
          puVar13 = *(undefined4 **)(lVar11 + 8);
        }
        local_d8 = uVar14;
        uStack_d0 = uVar14;
        FUN_1447325ac(puVar13,&local_e8,1);
        local_b8 = CONCAT13(3,(uint3)local_b8);
        local_b8 = CONCAT31(local_b8._1_3_,1);
        plVar8 = (longlong *)FUN_141037e38(lVar6,lVar10,&local_1c8,&local_e8);
        if (plVar8 != (longlong *)0x0) {
          FUN_144a76660(lVar11 + 200,&local_230);
          fVar16 = (float)FUN_140b536be(lVar11);
          local_218 = (double)fVar16;
          local_208 = local_220 * local_218;
          local_210 = local_228 * local_218;
          local_218 = local_218 * local_230;
          FUN_14276fa40(&local_1e8,local_200);
          thunk_FUN_140b3d268(plVar8,local_200);
          (**(code **)(*plVar8 + 0x6e8))(plVar8,lVar9 + 0x3b0);
          local_248 = 0;
          uStack_240 = 0;
          local_118 = 0;
          local_108 = &PTR_LAB_14b9dec90;
          local_128 = FUN_144354d9e;
          local_100 = plVar8;
          FUN_1410672ce(plVar8,lVar11);
        }
        if (local_a8 != 0) {
          plVar8 = uStack_98;
          if (uStack_98 == (longlong *)0x0) {
            plVar8 = local_88;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
  }
LAB_148f0be16:
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0be8c FUN_148f0be8c body=182 status=ok
// SIG undefined FUN_148f0be8c(void)

void FUN_148f0be8c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_2;
  uVar5 = FUN_140082ff6();
  cVar4 = FUN_1448093f4(uVar3,uVar5);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
    local_30 = *param_2;
    local_28 = (longlong *)param_2[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)FUN_144a792bc(param_1 + 0x30);
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_30);
    plVar6 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0bf44 FUN_148f0bf44 body=168 status=ok
// SIG undefined FUN_148f0bf44(void)

void FUN_148f0bf44(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_3 & 1) != 0) && (param_2 != 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar1 = FUN_144a7d050();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_14018fb7e(param_2);
      if (lVar1 != 0) {
        FUN_148f138be(param_1 + 0x30,&local_40);
        local_30 = local_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        FUN_148f0bfee(lVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0bfee FUN_148f0bfee body=280 status=ok
// SIG undefined FUN_148f0bfee(void)

void FUN_148f0bfee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148f0c257(&local_38);
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*local_38 + 0x10))(local_38,param_1,&local_48);
  iVar3 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
    FUN_148f1418a((longlong *)(param_1 + 0x80),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_38;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0c10c FUN_148f0c10c body=331 status=ok
// SIG undefined FUN_148f0c10c(void)

void FUN_148f0c10c(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_145d847d4();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x38) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x40) = lVar5;
    bVar7 = lVar5 == 0;
  }
  else {
    bVar7 = false;
  }
  if (param_2 == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    if (bVar7) {
      return;
    }
    lVar5 = FUN_144a7a5f4();
    if (*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30) {
        lVar5 = *(longlong *)(param_1 + 0x38);
        if (lVar5 == 0) {
          uVar4 = FUN_145d847d4();
          lVar5 = FUN_14477b664(uVar4);
          *(longlong *)(param_1 + 0x38) = lVar5;
        }
        lVar6 = *(longlong *)(param_1 + 0x40);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x40) = lVar6;
        }
        *(longlong *)(param_2 + 0xe30) = lVar6;
        return;
      }
      return;
    }
    return;
  }
  return;
}



// FUNCTION 148f0c257 FUN_148f0c257 body=131 status=ok
// SIG undefined FUN_148f0c257(void)

undefined8 * FUN_148f0c257(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  uVar2 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)plVar1 + 0x5c) &
                             ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U));
  (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar2,1);
  *param_1 = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b9decb0;
  puVar3[2] = uVar2;
  param_1[1] = puVar3;
  return param_1;
}



// FUNCTION 148f0c2da FUN_148f0c2da body=67 status=ok
// SIG undefined FUN_148f0c2da(void)

void FUN_148f0c2da(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000148f0c312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f0c328 FUN_148f0c328 body=567 status=ok
// SIG undefined FUN_148f0c328(void)

longlong FUN_148f0c328(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1403e5e94(param_4);
  if (lVar4 != 0) goto LAB_148f0c369;
  plVar5 = (longlong *)FUN_1447262c2(param_4);
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_141262f1a();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_141262f1a();
      plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
      if (((plVar7 != (longlong *)0x0 && plVar5 != plVar7) &&
          (lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7), 0 < *(int *)(lVar4 + 0xa8))) &&
         (lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7), 0 < *(int *)(lVar4 + 0xa8))) {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x20);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        else if (lVar4 == 0) goto LAB_148f0c401;
LAB_148f0c369:
        if (*(longlong *)(param_1 + 8) != 0) {
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x38) = 0x100000000;
          lVar4 = FUN_14018fb7e(lVar4);
          if (lVar4 != 0) {
            if ((longlong)*(int *)(lVar4 + 0x88) != 0) {
              lVar8 = 0;
              do {
                local_48 = *(longlong *)(*(longlong *)(lVar4 + 0x80) + lVar8);
                if (*(longlong *)(local_48 + 8) == *(longlong *)(param_1 + 8)) {
                  plStack_40 = *(longlong **)(*(longlong *)(lVar4 + 0x80) + 8 + lVar8);
                  if (plStack_40 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
                    UNLOCK();
                  }
                  if (local_48 != 0) {
                    iVar2 = *(int *)(param_2 + 0x38);
                    *(uint *)(param_2 + 0x38) = iVar2 + 1U;
                    if (*(uint *)(param_2 + 0x3c) < iVar2 + 1U) {
                      FUN_1400832a0(param_2,iVar2);
                    }
                    lVar4 = *(longlong *)(param_2 + 0x30);
                    if (*(longlong *)(param_2 + 0x30) == 0) {
                      lVar4 = param_2;
                    }
                    lVar8 = (longlong)iVar2 * 0x30;
                    *(undefined1 *)(lVar4 + lVar8) = 0;
                    *(undefined4 *)(lVar4 + 0x28 + lVar8) = 0;
                    FUN_148f13948(lVar4 + lVar8,&local_48);
                  }
                  goto LAB_148f0c3c6;
                }
                lVar8 = lVar8 + 0x10;
              } while ((longlong)*(int *)(lVar4 + 0x88) * 0x10 != lVar8);
            }
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
LAB_148f0c3c6:
            plVar5 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_40 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plStack_40)(plStack_40);
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
          cVar3 = FUN_144b0893e(param_2);
          if (cVar3 == '\0') goto LAB_148f0c40d;
          FUN_1446fdf24(param_2);
        }
      }
    }
  }
LAB_148f0c401:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_148f0c40d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148f0c566 FUN_148f0c566 body=316 status=ok
// SIG undefined FUN_148f0c566(void)

void FUN_148f0c566(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
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
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 == (longlong *)0x0) goto LAB_148f0c627;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_148f0c5e6:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148f0c627;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == plVar5) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148f0c5e6;
    }
  }
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
LAB_148f0c627:
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148f0c653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148f0c6a2 FUN_148f0c6a2 body=196 status=ok
// SIG undefined FUN_148f0c6a2(void)

void FUN_148f0c6a2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x18)) && (*(int *)(param_1 + 0x28) == 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,uVar1);
    local_68[0] = 0;
    local_40 = 0;
    local_b0 = &local_99;
    local_b8 = 0;
    FUN_140c3fc86(*(longlong *)(param_1 + 0x10) + 0x10,param_1 + 0x20,uVar1,local_98);
    FUN_144a5ac3a(local_68);
    FUN_144a5ac3a(local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0c780 FUN_148f0c780 body=297 status=ok
// SIG undefined FUN_148f0c780(void)

void FUN_148f0c780(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_2;
  local_98[0] = 0;
  local_70 = 0;
  FUN_14083c332(local_98);
  FUN_1448729ea(param_1 + 0x10,local_68,local_98);
  uVar6 = FUN_144a7b41a(local_68,0);
  uVar4 = FUN_148b7d6db();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,0);
  }
  local_a8 = 0;
  FUN_14083c276(lVar1,uVar4,uVar6,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_68;
    if (0x18 < local_50) {
      pppuVar5 = (undefined8 ***)local_68[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0c8aa FUN_148f0c8aa body=638 status=ok
// SIG undefined FUN_148f0c8aa(void)

void FUN_148f0c8aa(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar9 == (longlong *)0x0) goto LAB_148f0c986;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_148f0c943:
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar4 == (longlong *)0x0) goto LAB_148f0c986;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar9 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == plVar9) {
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar4;
      if (plVar9 != (longlong *)0x0) goto LAB_148f0c943;
    }
  }
  LOCK();
  plVar9 = plVar4 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148f0c986:
  FUN_140c65c56(*(longlong *)(param_2 + 0x30) + 0x3f0,&local_58);
  pppuVar7 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
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
  uVar8 = FUN_148b7d6db();
  pppuVar5 = (undefined8 ***)pppuVar7[0x40];
  if (pppuVar5 == (undefined8 ***)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(pppuVar5,uVar8,0);
  }
  FUN_140ccc900(pppuVar7,&local_58,uVar8,0);
  uVar11 = FUN_144a7b41a(&local_58,0);
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  FUN_14020a6cc(param_1 + 0x20,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar10 = &local_58;
    if (0x18 < local_40) {
      ppppuVar10 = (undefined8 ****)local_58;
    }
    (*pcVar6)(ppppuVar10);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0cb2a FUN_148f0cb2a body=813 status=ok
// SIG undefined FUN_148f0cb2a(void)

void FUN_148f0cb2a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x2c) == '\0') goto LAB_148f0cb49;
  *(char *)(param_1 + 0x2d) = *(char *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    plVar4 = (longlong *)FUN_14001cc68(0x228);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b9decd0;
    plVar8 = plVar4 + 2;
    memset(plVar8,0,0x218);
    FUN_1410364e6(plVar8);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0x10;
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
LAB_148f0cbe8:
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
        if (plVar4 != (longlong *)0x0) goto LAB_148f0cc47;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x30) = plVar8;
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (plVar4 == plVar8) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
        *(longlong **)(param_1 + 0x38) = plVar4;
        if (plVar8 != (longlong *)0x0) goto LAB_148f0cbe8;
      }
LAB_148f0cc47:
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_148f0ce58(*(longlong *)(param_1 + 0x30) + 0xe8);
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    uVar5 = FUN_141845ccc();
    FUN_148f0ceca(uVar7,uVar5);
    lVar6 = *(longlong *)(param_1 + 0x30);
  }
  FUN_148f13ba0(*(undefined8 *)(lVar6 + 0xe8),&local_38);
  fVar3 = *(float *)(param_1 + 0x24);
  *(float *)(local_38 + 0x2a0) = fVar3;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) == '\x01') {
    *(float *)(local_38 + 0x2a0) = fVar3 * *(float *)(param_2 + 0x68);
  }
  lVar6 = FUN_1405831b2();
  lVar6 = lVar6 + (ulonglong)*(byte *)(param_1 + 0x2d) * 0x18;
  if ((*(longlong *)(local_38 + 0x228) != *(longlong *)(lVar6 + 0xd18)) ||
     (*(int *)(local_38 + 0x230) != *(int *)(lVar6 + 0xd20))) {
    *(longlong *)(local_38 + 0x228) = *(longlong *)(lVar6 + 0xd18);
    *(undefined4 *)(local_38 + 0x230) = *(undefined4 *)(lVar6 + 0xd20);
    *(undefined8 *)(local_38 + 0x238) = 0;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x1b0);
  if (lVar6 != 0) {
    uVar7 = FUN_1403ec9c0();
    plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
      if (plVar8 == (longlong *)0x0) {
LAB_148f0cd76:
        plVar4 = (longlong *)0x0;
      }
      else {
        lVar6 = (**(code **)(*plVar8 + 8))(plVar8);
        lVar9 = FUN_14049e780();
        if ((lVar9 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar9 + 0x38))) goto LAB_148f0cd76;
        plVar4 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30) {
          plVar4 = plVar8;
        }
      }
      local_48 = *(undefined8 *)(param_1 + 0x30);
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (plVar8 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_40 = plVar8;
      }
      FUN_1458d2ad6(plVar4,&local_48,0,0);
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_148f0cb49:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0ce58 FUN_148f0ce58 body=113 status=ok
// SIG undefined FUN_148f0ce58(void)

void FUN_148f0ce58(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 1U - iVar1) {
      FUN_148f13a0a(param_1,iVar1);
    }
    FUN_148f139f9((longlong)iVar1 * 0x18 + *param_1,1U - iVar1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_148f13a9e(param_1,iVar1 + -1);
  FUN_148f13af2(param_1);
  return;
}



// FUNCTION 148f0ceca FUN_148f0ceca body=78 status=ok
// SIG undefined FUN_148f0ceca(void)

void FUN_148f0ceca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 == 0) || (lVar1 = FUN_145dec6d0(), lVar1 == 0)) ||
     (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 148f0cf18 FUN_148f0cf18 body=333 status=ok
// SIG undefined FUN_148f0cf18(void)

void FUN_148f0cf18(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x2d) == '\0') goto LAB_148f0d01d;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x1b0);
  if (lVar5 == 0) goto LAB_148f0d01d;
  uVar3 = FUN_1403ec9c0();
  plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_148f0d01d;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
  if (plVar4 == (longlong *)0x0) {
LAB_148f0cfa0:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    lVar6 = FUN_14049e780();
    if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_148f0cfa0;
    plVar7 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      plVar7 = plVar4;
    }
  }
  local_30 = *(undefined8 *)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_28 = plVar4;
  }
  FUN_145a508ea(plVar7,&local_30,0);
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_148f0d01d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0d066 FUN_148f0d066 body=41 status=ok
// SIG undefined FUN_148f0d066(void)

void FUN_148f0d066(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_3 + 0xf8))(param_3);
  cVar1 = FUN_140ca96da(uVar2);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x2c) = cVar1;
  }
  return;
}



// FUNCTION 148f0d096 FUN_148f0d096 body=596 status=ok
// SIG undefined FUN_148f0d096(void)

void FUN_148f0d096(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  lVar3 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (plVar7 == (longlong *)0x0) goto LAB_148f0d178;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_148f0d135:
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
    if (plVar5 == (longlong *)0x0) goto LAB_148f0d178;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_148f0d135;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_148f0d178:
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x30) + 0x178) == '\x03')) {
    FUN_140db960a(*(longlong *)(param_1 + 0x10) + 0x10,&local_58);
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    plVar5 = (longlong *)FUN_141348b72();
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    *(longlong **)(param_1 + 0x20) = plVar5;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
      plVar5 = *(longlong **)(param_1 + 0x20);
    }
    local_68 = CONCAT44(uStack_44,local_48);
    local_60 = CONCAT44(uStack_3c,uStack_40);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_2 + 0x30),&local_68);
    plVar5 = *(longlong **)(param_1 + 0x20);
    uVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x8c8) + 0x18))
                      (*(longlong *)(param_2 + 0x30) + 0x8c8);
    (**(code **)(*plVar5 + 0x38))(plVar5,uVar6);
    plVar5 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0d2ec FUN_148f0d2ec body=95 status=ok
// SIG undefined FUN_148f0d2ec(void)

void FUN_148f0d2ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x1b0);
  if (lVar3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148f0d32d;
  }
  lVar3 = 0;
LAB_148f0d32d:
                    /* WARNING: Could not recover jumptable at 0x000148f0d340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
  return;
}



// FUNCTION 148f0d34c FUN_148f0d34c body=95 status=ok
// SIG undefined FUN_148f0d34c(void)

void FUN_148f0d34c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x1b0);
  if (lVar3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148f0d38d;
  }
  lVar3 = 0;
LAB_148f0d38d:
                    /* WARNING: Could not recover jumptable at 0x000148f0d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,lVar3);
  return;
}



// FUNCTION 148f0d3b2 FUN_148f0d3b2 body=702 status=ok
// SIG undefined FUN_148f0d3b2(void)

void FUN_148f0d3b2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar3 + 8);
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
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
LAB_148f0d451:
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
      if (plVar4 != (longlong *)0x0) goto LAB_148f0d475;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x10) = lVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == plVar5) {
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
    else {
      *(longlong **)(param_1 + 0x18) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148f0d451;
    }
LAB_148f0d475:
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
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) == 0) goto LAB_148f0d4a3;
  FUN_148f138be(*(longlong *)(param_1 + 0x10) + 0x48,&local_68);
  local_58 = local_68;
  plStack_50 = plStack_60;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_148f0c257(&local_48);
  plVar5 = uStack_40;
  *(undefined8 *)(param_1 + 0x30) = local_48;
  local_48 = 0;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (uStack_40 == plVar4) {
LAB_148f0d584:
    plVar4 = uStack_40;
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = uStack_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*uStack_40)(uStack_40);
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
  else {
    uStack_40 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x38) = plVar5;
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
      goto LAB_148f0d584;
    }
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  FUN_148f138be(*(longlong *)(param_1 + 0x10) + 0x48,&local_48);
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
LAB_148f0d4a3:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0d672 FUN_148f0d672 body=304 status=ok
// SIG undefined FUN_148f0d672(void)

void FUN_148f0d672(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((0 < *(int *)(param_1 + 0x20)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88,*(undefined8 *)(param_2 + 0x30));
    FUN_1448729ea(lVar2 + 0x60,local_58,local_88);
    uVar5 = FUN_144a7b41a(local_58);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar4 = local_58;
      if (0x18 < local_40) {
        pppuVar4 = (undefined8 ***)local_58[0];
      }
      (*pcVar3)(pppuVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    if (0.0 < fVar1) {
      fVar6 = *(float *)(param_1 + 0x24);
      if (fVar1 <= *(float *)(param_1 + 0x24)) {
        fVar6 = fVar1;
      }
      *(float *)(param_1 + 0x24) = fVar6;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0d7a4 FUN_148f0d7a4 body=46 status=ok
// SIG undefined FUN_148f0d7a4(void)

void FUN_148f0d7a4(longlong param_1)

{
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0))
  {
    *(undefined1 *)(param_1 + 0x28) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 148f0d7d2 FUN_148f0d7d2 body=27 status=ok
// SIG undefined FUN_148f0d7d2(void)

void FUN_148f0d7d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 148f0d7ee FUN_148f0d7ee body=234 status=ok
// SIG undefined FUN_148f0d7ee(void)

void FUN_148f0d7ee(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = (**(code **)(*param_3 + 0xf8))(param_3);
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,uVar4);
  FUN_140168de2(lVar1 + 0x10,local_50,local_80);
  cVar3 = FUN_140168b7a(local_50,0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar5 = local_50;
    if (0x18 < local_38) {
      pppuVar5 = (undefined8 ***)local_50[0];
    }
    (*pcVar2)(pppuVar5);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0d8da FUN_148f0d8da body=1399 status=ok
// SIG undefined FUN_148f0d8da(void)

void FUN_148f0d8da(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1407db7c8();
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 0x1b8,local_88,local_b8);
  uVar6 = 0;
  iVar4 = FUN_14005fbd2(local_88,0);
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 != 0) {
    uVar6 = FUN_1403f69f4(lVar2,uVar5,0);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar6,(float)iVar4,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 0x208,local_88,local_b8);
  uVar8 = FUN_144a7b41a(local_88,0);
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar2,uVar5,1);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar5,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 600,local_88,local_b8);
  uVar8 = FUN_144a7b41a(local_88,0x3e4ccccd);
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar2,uVar5,2);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar5,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 0x2a8,local_88,local_b8);
  uVar8 = FUN_144a7b41a(local_88,0);
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar2,uVar5,3);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar5,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 0x100,local_88,local_b8);
  uVar8 = FUN_144a7b41a(local_88,*(undefined4 *)(param_1 + 0x100));
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar2,uVar5,4);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar5,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  lVar1 = *param_2;
  local_b8[0] = 0;
  local_90 = 0;
  FUN_14083c332(local_b8,param_2);
  FUN_1448729ea(param_1 + 0x158,local_88,local_b8);
  uVar8 = FUN_144a7b41a(local_88,*(undefined4 *)(param_1 + 0x158));
  uVar5 = FUN_148cbf28e();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar2,uVar5,5);
  }
  local_c8 = 0;
  FUN_14083c276(lVar1,uVar5,uVar8,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_88;
    if (0x18 < local_70) {
      pppuVar7 = (undefined8 ***)local_88[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_144a5ac3a(local_b8);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0de54 FUN_148f0de54 body=95 status=ok
// SIG undefined FUN_148f0de54(void)

undefined8 * FUN_148f0de54(undefined8 *param_1)

{
  FUN_140d71ca0();
  *param_1 = &PTR_FUN_14b9ddc00;
  param_1[0x1b] = 0x3f333333;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3c23d70a40a00000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3d4ccccd;
  return param_1;
}



// FUNCTION 148f0deb4 FUN_148f0deb4 body=84 status=ok
// SIG undefined FUN_148f0deb4(void)

void FUN_148f0deb4(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x91) & 8) != 0)) {
    iVar2 = (**(code **)(*param_2 + 0x2c0))(param_2);
    iVar1 = *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0x11c) = iVar2;
    *(int *)(param_1 + 0x100) = iVar2;
    if (iVar1 != iVar2) {
      FUN_140a429bc(param_1);
    }
  }
  FUN_148a195ca(param_1,param_2);
  return;
}



// FUNCTION 148f0df08 FUN_148f0df08 body=68 status=ok
// SIG undefined FUN_148f0df08(void)

int FUN_148f0df08(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2b8))();
  iVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
  iVar3 = iVar2;
  if ((0 < iVar1) && (iVar3 = (**(code **)(*param_1 + 0x2b8))(param_1), iVar2 <= iVar3)) {
    iVar3 = iVar2;
  }
  return iVar3;
}



// FUNCTION 148f0df72 FUN_148f0df72 body=1400 status=ok
// SIG undefined FUN_148f0df72(void)

void FUN_148f0df72(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 ***pppuVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 **local_68;
  undefined8 local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar8 = *param_2;
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    plVar10 = *(longlong **)(param_1 + 0x90);
    if (plVar10 == (longlong *)0x0) goto LAB_148f0e020;
    *(undefined8 *)(param_1 + 0x90) = 0;
LAB_148f0dfd9:
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
    if (plVar9 == (longlong *)0x0) goto LAB_148f0e020;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    plVar10 = *(longlong **)(param_1 + 0x90);
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x90) = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_148f0dfd9;
    }
  }
  LOCK();
  plVar10 = plVar9 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_148f0e020:
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_140f8305a(param_1,&local_78,param_3,param_4);
  lVar3 = *param_3;
  if (lVar3 != 0) {
    uVar8 = FUN_148cbf28e();
    if (*(longlong *)(lVar3 + 0x200) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(*(longlong *)(lVar3 + 0x200),uVar8,0);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_14005fbd2(&local_68,0);
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    lVar3 = *param_3;
    uVar8 = FUN_148cbf28e();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,1);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_144a7b41a(&local_68,0);
    *(undefined4 *)(param_1 + 0xb4) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    lVar3 = *param_3;
    uVar8 = FUN_148cbf28e();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,2);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_144a7b41a(&local_68,0x3e4ccccd);
    *(undefined4 *)(param_1 + 0xb8) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    lVar3 = *param_3;
    uVar8 = FUN_148cbf28e();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,3);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_144a7b41a(&local_68,0);
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    lVar3 = *param_3;
    uVar8 = FUN_148cbf28e();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,4);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_144a7b41a(&local_68,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
    lVar3 = *param_3;
    uVar8 = FUN_148cbf28e();
    lVar5 = *(longlong *)(lVar3 + 0x200);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1403f69f4(lVar5,uVar8,5);
    }
    FUN_140ccc900(lVar3,&local_68,uVar8,param_4);
    uVar7 = FUN_144a7b41a(&local_68,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppuVar11 = &local_68;
      if (0x18 < local_50) {
        pppuVar11 = (undefined8 ***)local_68;
      }
      (*pcVar4)(pppuVar11);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_140f82cba(&local_80);
    local_68 = (undefined8 ***)0x0;
    FUN_14485c47a(&local_68,param_1);
    local_60 = local_80;
    FUN_14113f0c0(&local_68);
    FUN_14053c012(lVar3 + 0x998,&local_68);
    plVar9 = (longlong *)FUN_1401901a6(lVar3);
    if (plVar9 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x6c8))(plVar9);
    }
    *(undefined1 *)(param_1 + 0x98) = uVar6;
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0e4ec FUN_148f0e4ec body=26 status=ok
// SIG undefined FUN_148f0e4ec(void)

void FUN_148f0e4ec(undefined8 param_1)

{
  FUN_148f0ec6c();
  FUN_148f0ee44(param_1);
  return;
}



// FUNCTION 148f0e506 FUN_148f0e506 body=742 status=ok
// SIG undefined FUN_148f0e506(void)

void FUN_148f0e506(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1412f8e70();
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) goto LAB_148f0e541;
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      puVar1 = (undefined8 *)(param_1 + 0xe0);
      uVar3 = FUN_1401b4c98(lVar6);
      lVar4 = FUN_144a61814(uVar3,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
    fVar8 = *(float *)(param_1 + 0xb4);
    if (fVar8 <= 0.01) {
      fVar8 = 0.01;
    }
    uVar5 = FUN_1401b4c98(lVar6);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3);
    puVar1 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_c0[2] = lVar7;
    *local_c0 = &PTR_FUN_14b9dee80;
    local_c0[3] = 0;
    FUN_14485c47a(local_c0 + 3,uVar3);
    puVar1[4] = param_1;
    local_a8 = 0;
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_138 = (undefined1 **)local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar5,param_1 + 0xd8,&local_a8,fVar8);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_c0);
    if (*(char *)(lVar6 + 0x178) != '\x03') goto LAB_148f0e6e6;
  }
  else {
LAB_148f0e6e6:
    if (*(longlong **)(lVar6 + 0x1b0) == (longlong *)0x0) goto LAB_148f0e541;
    cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x1b0) + 0x700))();
    if (cVar2 == '\0') goto LAB_148f0e541;
  }
  lVar6 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x88) + 0x378);
  if (lVar6 != 0) {
    *(undefined1 *)(param_1 + 0x99) = 1;
    local_138 = &local_d0;
    local_d0 = &DAT_4030000000000000;
    local_c8 = 0x4022000000000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_d8 = 1;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 1;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_118 = 1;
    local_120 = 1;
    local_110 = 0;
    local_128 = 4;
    local_130 = 0x42c80000;
    FUN_141530594(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0),lVar6,
                  CONCAT71((int7)((ulonglong)local_138 >> 8),1),&local_a8);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_148f0e541:
  FUN_148f0e7ee(param_1);
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0e7ee FUN_148f0e7ee body=624 status=ok
// SIG undefined FUN_148f0e7ee(void)

void FUN_148f0e7ee(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x98) == '\x01') && (lVar2 = *(longlong *)(param_1 + 0x30), lVar2 != 0))
  {
    (**(code **)(*(longlong *)(lVar2 + 0x520) + 0x10))(lVar2 + 0x520,&local_c8);
    lVar2 = local_c8;
    if ((local_c8 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0x3ff0000000000000;
      uStack_60 = 0;
      local_58 = 0x3f800000;
      local_50 = 0;
      local_4c = 0;
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x358);
      FUN_140056680(&local_100,L"WeaponAtlasLock");
      local_120 = 0;
      local_128 = &local_b8;
      FUN_14071b0f2(lVar2,local_d0,&local_100,uVar5);
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      cVar4 = FUN_144b2f49a(local_d0);
      if (cVar4 != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x88);
        local_e0 = local_c8;
        local_d8 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140206ee8(lVar2 + 0x2f8,&local_e0);
        FUN_141505908(local_108,local_d0);
        local_118 = local_c8;
        local_110 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
          UNLOCK();
        }
        FUN_140c72376(&local_100,&local_118,local_108,uVar5);
        if ((longlong *)(param_1 + 0xe8) != &local_100) {
          *(longlong *)(param_1 + 0xe8) = local_100;
          local_100 = 0;
          plVar3 = *(longlong **)(param_1 + 0xf0);
          *(longlong **)(param_1 + 0xf0) = local_f8;
          local_f8 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
        }
        *(undefined4 *)(param_1 + 0xf8) = local_f0;
        *(undefined4 *)(param_1 + 0xfc) = uStack_ec;
        *(undefined4 *)(param_1 + 0x100) = uStack_e8;
        *(undefined4 *)(param_1 + 0x104) = uStack_e4;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
      }
      FUN_144a61ac8(local_d0);
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0ea60 FUN_148f0ea60 body=523 status=ok
// SIG undefined FUN_148f0ea60(void)

void FUN_148f0ea60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140cc1fbe();
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    plVar4 = *(longlong **)(param_1 + 0xd0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
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
    if (*(float *)(param_1 + 0xbc) <= 0.0) {
      FUN_148f0ec6c(param_1);
    }
    else {
      uVar8 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x30));
      uVar3 = *(undefined4 *)(param_1 + 0xbc);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar6 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
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
      local_c0[2] = lVar9;
      *local_c0 = &PTR_FUN_14b9deef0;
      local_c0[3] = 0;
      FUN_14485c47a(local_c0 + 3,uVar5);
      puVar6[4] = param_1;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(uVar8,param_1 + 0xe0,&local_a8,uVar3);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_c0);
    }
    FUN_148f0ee44(param_1);
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_148f0ee9e(param_1);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0ec6c FUN_148f0ec6c body=471 status=ok
// SIG undefined FUN_148f0ec6c(void)

void FUN_148f0ec6c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[0x19] = 0;
  plVar8 = (longlong *)param_1[0x1a];
  if (plVar8 != (longlong *)0x0) {
    param_1[0x1a] = 0;
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
  uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_148a19d84(&local_48,uVar6);
  if (local_40 != (longlong *)0x0) {
    iVar5 = (int)local_40[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_40[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(local_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = local_40;
    } while (!bVar10);
    LOCK();
    piVar2 = (int *)((longlong)local_40 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if ((local_48 != 0) && (lVar7 = param_1[0x15], (longlong)(int)lVar7 != 0)) {
        lVar3 = param_1[0x14];
        lVar9 = 0;
        do {
          FUN_148a24f7e(local_48,*(undefined4 *)(lVar3 + 8 + lVar9));
          lVar9 = lVar9 + 0xc;
        } while ((longlong)(int)lVar7 * 0xc != lVar9);
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
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_148f140c6(param_1 + 0x14);
  }
  if (param_1[0x1c] != 0) {
    plVar8 = param_1 + 0x1c;
    uVar6 = FUN_1401b4c98(param_1[6]);
    lVar7 = FUN_144a61814(uVar6,plVar8);
    if (lVar7 != 0) {
      FUN_1405a424c(uVar6,*plVar8);
    }
    *plVar8 = 0;
  }
  if (param_1[0x1b] != 0) {
    plVar8 = param_1 + 0x1b;
    uVar6 = FUN_1401b4c98(param_1[6]);
    lVar7 = FUN_144a61814(uVar6,plVar8);
    if (lVar7 != 0) {
      FUN_1405a424c(uVar6,*plVar8);
    }
    *plVar8 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0ee44 FUN_148f0ee44 body=90 status=ok
// SIG undefined FUN_148f0ee44(void)

void FUN_148f0ee44(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x99) == '\x01') {
    *(undefined1 *)(param_1 + 0x99) = 0;
    lVar1 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x88) + 0x378);
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x99) = 1;
      FUN_1405832a8(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0),lVar1,0,1,0);
    }
  }
  return;
}



// FUNCTION 148f0ee9e FUN_148f0ee9e body=190 status=ok
// SIG undefined FUN_148f0ee9e(void)

void FUN_148f0ee9e(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1404fa388(param_1 + 0xe8);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x98) != '\x01')) goto LAB_148f0ef3e;
  lVar3 = *(longlong *)(param_1 + 0x30);
  if ((lVar3 == 0) || (lVar4 = *(longlong *)(param_1 + 0x88), lVar4 == 0)) {
LAB_148f0ef31:
    lVar4 = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,local_30);
    lVar3 = FUN_140206ee8(lVar4 + 0x328,local_30);
    iVar2 = _finite((double)*(float *)(lVar3 + 0x48));
    if (iVar2 == 0) goto LAB_148f0ef31;
    lVar4 = 0;
    if (*(char *)(lVar3 + 0x41) == '\0') {
      lVar4 = lVar3;
    }
  }
  FUN_140bd765a(param_1 + 0xe8,lVar4,0);
LAB_148f0ef3e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0ef5e FUN_148f0ef5e body=1353 status=ok
// SIG undefined FUN_148f0ef5e(void)

void FUN_148f0ef5e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  longlong local_308;
  undefined8 **local_300;
  undefined1 local_2f4 [4];
  undefined8 *local_2f0;
  longlong *local_2e8;
  undefined2 local_2d0;
  undefined1 local_2c8;
  char local_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined4 local_188;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if ((param_1[0x19] == 0) && (lVar9 = FUN_1407a0dc0(param_1[0x11] + 0xd8), lVar9 != 0)) {
    uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1409e0c66(&local_2b8,uVar10);
    if (plStack_2b0 != (longlong *)0x0) {
      iVar8 = (int)plStack_2b0[1];
      do {
        if (iVar8 == 0) {
          plVar12 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)plStack_2b0[1];
        bVar13 = iVar8 == iVar6;
        if (bVar13) {
          *(int *)(plStack_2b0 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
        plVar12 = plStack_2b0;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2b0 + 0x10))();
      }
      lVar7 = local_2b8;
      if (plVar12 != (longlong *)0x0) {
        if (local_2b8 != 0) {
          local_290 = 0;
          local_288 = 0;
          local_2b8 = 0;
          plStack_2b0 = (longlong *)0x0;
          local_2a8 = 0;
          local_284 = 0xffffffff00000080;
          local_27c = 0;
          local_270 = 0;
          local_268 = 0;
          local_240 = 0;
          local_238 = 0;
          local_260 = 0;
          uStack_258 = 0;
          local_234 = 0xffffffff00000080;
          local_22c = 0;
          local_220 = 0;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0xffffffff00000000;
          local_1e0 = 0;
          local_1d8 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          local_1d4 = 0xffffffff00000080;
          local_1cc = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_188 = 0;
          local_160 = 0;
          local_158 = 0x200000000;
          local_148 = 0;
          local_140 = 0;
          uStack_13c = 0x20;
          uStack_138 = 0xffffffff;
          uStack_134 = 0;
          local_128 = 0;
          local_120 = 0;
          local_f8 = 0;
          local_f0 = 0x200000000;
          local_e0 = 0;
          local_d8 = 0;
          uStack_d4 = 0x20;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_90 = 0;
          local_88 = 0x200000000;
          local_78 = 0;
          local_70 = 0;
          uStack_6c = 0x20;
          uStack_68 = 0xffffffff;
          uStack_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar9);
          }
          local_48 = *(undefined8 *)(param_1[6] + 0x18);
          lVar11 = param_1[0x11];
          local_2b8 = lVar9;
          if (*(longlong *)(lVar11 + 0x150) != 0) {
            local_308 = lVar11 + 0x150;
            local_2f0 = (undefined8 *)0x0;
            local_2d0 = 4;
            local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,(int)param_1[0x18]);
            local_2c8 = 3;
            local_2c0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
            local_300 = &local_2f0;
            FUN_1410f809a(&plStack_2b0,local_2f4,&local_308,0);
            FUN_144a2da94(&local_2f0);
            lVar11 = param_1[0x11];
          }
          if (*(longlong *)(lVar11 + 0x1a8) != 0) {
            local_308 = lVar11 + 0x1a8;
            local_2f0 = (undefined8 *)0x0;
            local_2d0 = 4;
            local_2e8 = (longlong *)
                        CONCAT44(local_2e8._4_4_,*(undefined4 *)((longlong)param_1 + 0xc4));
            local_2c8 = 3;
            local_2c0 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
            local_300 = &local_2f0;
            FUN_1410f809a(&plStack_2b0,local_2f4,&local_308,0);
            FUN_144a2da94(&local_2f0);
          }
          FUN_140ff15b2(&local_2b8);
          if (param_1[6] != 0) {
            local_318 = 0;
            FUN_140a41f04(lVar7,&local_2f0,*(undefined8 *)(param_1[6] + 0x1b0),&local_2b8);
            plVar2 = local_2e8;
            if ((undefined8 **)(param_1 + 0x19) != &local_2f0) {
              param_1[0x19] = (longlong)local_2f0;
              local_2f0 = (undefined8 *)0x0;
              plVar3 = (longlong *)param_1[0x1a];
              if (local_2e8 != plVar3) {
                local_2e8 = (longlong *)0x0;
                param_1[0x1a] = (longlong)plVar2;
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
              }
            }
            plVar2 = local_2e8;
            if (local_2e8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_2e8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_2e8)(local_2e8);
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
          puVar4 = (undefined8 *)param_1[0x19];
          if (puVar4 != (undefined8 *)0x0) {
            lVar9 = param_1[6];
            local_2f0 = (undefined8 *)0x0;
            local_2e8 = (longlong *)((ulonglong)local_2e8 & 0xffffffff00000000);
            FUN_1446efa72(&local_2f0,0,3,0x10);
            puVar5 = local_2f0;
            local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,3);
            *local_2f0 = &PTR_LAB_14ac8b4c0;
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar11 == 0) {
              LOCK();
              UNLOCK();
              lVar11 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_2f0[2] = lVar11;
            *local_2f0 = &PTR_FUN_14b9def60;
            local_2f0[3] = 0;
            FUN_14485c47a(local_2f0 + 3,lVar9);
            puVar5[4] = param_1;
            FUN_140e0aeb0(puVar4 + 0x26,&local_308,&local_2f0);
            FUN_1449db362(&local_2f0);
          }
          FUN_14076ba26(&local_2b8);
        }
        LOCK();
        plVar2 = plVar12 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0f4a8 FUN_148f0f4a8 body=1464 status=ok
// SIG undefined FUN_148f0f4a8(void)

void FUN_148f0f4a8(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined8 **local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined2 local_180 [2];
  undefined4 local_17c;
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  byte local_138;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_1[0x19] != 0) {
    uVar12 = *(undefined8 *)(param_1[6] + 0x1b0);
    uVar8 = (**(code **)(*param_1 + 0x180))();
    FUN_148a19d84(&local_178,uVar8);
    plVar15 = (longlong *)CONCAT44(uStack_16c,local_170);
    if (plVar15 != (longlong *)0x0) {
      iVar16 = (int)plVar15[1];
      do {
        if (iVar16 == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)plVar15[1];
        bVar18 = iVar16 == iVar7;
        if (bVar18) {
          *(int *)(plVar15 + 1) = iVar16 + 1;
          iVar7 = iVar16;
        }
        iVar16 = iVar7;
        UNLOCK();
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_16c,local_170) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_16c,local_170) + 0x10))();
      }
      if (plVar15 != (longlong *)0x0) {
        local_1b8 = local_178;
        if (local_178 != 0) {
          local_78 = (longlong *)0x0;
          local_70 = 0x2000000000;
          lVar9 = FUN_1412e3d68(param_1[0x19]);
          lVar17 = *(longlong *)(lVar9 + 0x380);
          if (*(longlong *)(lVar9 + 0x380) == 0) {
            lVar17 = lVar9;
          }
          local_1b0 = uVar12;
          if ((longlong)*(int *)(lVar9 + 0x388) != 0) {
            lVar9 = (longlong)*(int *)(lVar9 + 0x388) * 0x38;
            do {
              if (((*(byte *)(lVar17 + 0x34) & 1) == 0) &&
                 (lVar10 = FUN_14030a32e(lVar17), uVar13 = local_70, lVar10 != 0)) {
                lVar14 = (longlong)(int)local_70;
                uVar6 = (int)local_70 + 1;
                local_70 = CONCAT44(local_70._4_4_,uVar6);
                if (local_70._4_4_ < uVar6) {
                  FUN_1478dc29e(&local_178,uVar13 & 0xffffffff);
                }
                plVar11 = local_78;
                if (local_78 == (longlong *)0x0) {
                  plVar11 = &local_178;
                }
                plVar11[lVar14] = lVar10;
              }
              lVar17 = lVar17 + 0x38;
              lVar9 = lVar9 + -0x38;
            } while (lVar9 != 0);
          }
          if ((*(char *)(param_1[0x11] + 0x1b0) != '\0') &&
             (uVar13 = (ulonglong)(int)param_1[0x15], 0 < (longlong)uVar13)) {
            do {
              uVar2 = uVar13 - 1;
              lVar17 = FUN_14479d2ce(uVar2 * 0xc + param_1[0x14]);
              if (lVar17 != 0) {
                plVar11 = local_78;
                if (local_78 == (longlong *)0x0) {
                  plVar11 = &local_178;
                }
                if ((longlong)(int)local_70 != 0) {
                  lVar9 = 0;
                  do {
                    if (*(longlong *)((longlong)plVar11 + lVar9) == lVar17) goto LAB_148f0f722;
                    lVar9 = lVar9 + 8;
                  } while ((longlong)(int)local_70 * 8 != lVar9);
                }
              }
              FUN_148a24f7e(local_1b8,*(undefined4 *)(param_1[0x14] + 8 + uVar2 * 0xc));
              uVar6 = *(uint *)(param_1 + 0x15);
              if (uVar13 != uVar6) {
                iVar16 = uVar6 - (int)uVar13;
                if (0 < iVar16) {
                  iVar16 = 1;
                }
                memmove((void *)(param_1[0x14] + uVar2 * 0xc),
                        (void *)(param_1[0x14] + (longlong)(int)(uVar6 - iVar16) * 0xc),
                        (longlong)iVar16 * 0xc);
                uVar6 = *(uint *)(param_1 + 0x15);
              }
              *(uint *)(param_1 + 0x15) = uVar6 - 1;
LAB_148f0f722:
              bVar18 = 1 < (longlong)uVar13;
              uVar13 = uVar2;
            } while (bVar18);
          }
          plVar11 = &local_178;
          if (local_78 != (longlong *)0x0) {
            plVar11 = local_78;
          }
          if ((longlong)(int)local_70 != 0) {
            local_198 = param_1 + 0x14;
            lVar17 = (longlong)(int)local_70 << 3;
            lVar9 = 0;
            iVar16 = 0;
            uVar12 = local_1b0;
            local_1a8 = plVar11;
            local_1a0 = lVar17;
            do {
              lVar10 = *(longlong *)((longlong)plVar11 + lVar9);
              cVar5 = FUN_148a1f4ea(local_1b8,uVar12,0,lVar10);
              if (cVar5 == '\0') {
                if (lVar10 != 0) {
                  uVar8 = FUN_14069ce7c();
                  lVar17 = FUN_144718840(lVar10,uVar8);
                  if (lVar17 != 0) {
                    uVar8 = FUN_144b2f384(lVar17);
                    FUN_147f5de74(uVar8,&local_190);
                  }
                }
                lVar17 = param_1[0x11];
                FUN_1446f470e(&local_190,L"SnapZoom");
                local_1c0 = 1;
                local_1c8 = 1;
                local_1e8 = &DAT_14c8464e0;
                local_1d8 = 0x7f7fffff;
                local_1e0 = &local_190;
                local_1d0 = lVar17 + 0x360;
                iVar7 = FUN_148a24852(local_1b8,uVar12,0,lVar10);
                lVar17 = local_1a0;
                plVar11 = local_1a8;
                if (iVar7 != -1) {
                  iVar4 = (int)param_1[0x15];
                  *(uint *)(param_1 + 0x15) = iVar4 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xac) < iVar4 + 1U) {
                    FUN_148f140f6(local_198,iVar4);
                  }
                  iVar16 = iVar16 + 1;
                  puVar3 = (undefined8 *)(param_1[0x14] + (longlong)iVar4 * 0xc);
                  *puVar3 = 0;
                  FUN_14485c47a(puVar3,lVar10);
                  *(int *)(puVar3 + 1) = iVar7;
                  lVar17 = local_1a0;
                  uVar12 = local_1b0;
                  plVar11 = local_1a8;
                  if ((int)param_1[0x16] <= iVar16 && 0 < (int)param_1[0x16]) break;
                }
              }
              lVar9 = lVar9 + 8;
            } while (lVar17 != lVar9);
          }
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        LOCK();
        plVar11 = plVar15 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar15)(plVar15);
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
    param_1[0x19] = 0;
    plVar15 = (longlong *)param_1[0x1a];
    if (plVar15 != (longlong *)0x0) {
      param_1[0x1a] = 0;
      LOCK();
      plVar11 = plVar15 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    fVar19 = *(float *)(param_1 + 0x17);
    if (fVar19 <= 0.01) {
      fVar19 = 0.01;
    }
    uVar12 = FUN_1401b4c98(param_1[6]);
    lVar17 = param_1[6];
    local_190 = (undefined8 *)0x0;
    local_188 = 0;
    FUN_1446efa72(&local_190,0,3,0x10);
    puVar3 = local_190;
    local_188 = 3;
    *local_190 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_190[2] = lVar10;
    *local_190 = &PTR_FUN_14b9defd0;
    local_190[3] = 0;
    FUN_14485c47a(local_190 + 3,lVar17);
    puVar3[4] = param_1;
    local_178 = 0;
    local_170 = 0;
    FUN_14487d8d8(&local_178,&local_190);
    local_138 = 1;
    local_1e8 = (undefined8 *)local_180;
    local_180[0] = 0;
    local_17c = 0xbf800000;
    FUN_1406f4044(uVar12,param_1 + 0x1b,&local_178,fVar19);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_138])(&local_178);
    FUN_1449db362(&local_190);
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f0fa62 FUN_148f0fa62 body=161 status=ok
// SIG undefined FUN_148f0fa62(void)

void FUN_148f0fa62(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_42();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"Energy";
  local_40 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"Kills";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0fb04 FUN_148f0fb04 body=478 status=ok
// SIG undefined FUN_148f0fb04(void)

void FUN_148f0fb04(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x60);
    if (plVar6 == (longlong *)0x0) goto LAB_148f0fb9b;
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_148f0fb5a:
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
    if (plVar4 == (longlong *)0x0) goto LAB_148f0fb9b;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x60);
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
      *(longlong **)(param_1 + 0x60) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148f0fb5a;
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
LAB_148f0fb9b:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  lVar5 = *(longlong *)(param_1 + 0x30);
  FUN_141103af8(&local_58);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = local_58;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(lVar5 + 0x988,&local_50);
  FUN_14114569c(&local_60);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = local_60;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(lVar5 + 0x998,&local_50);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0fce4 FUN_148f0fce4 body=206 status=ok
// SIG undefined FUN_148f0fce4(void)

void FUN_148f0fce4(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0x90);
    if (((bVar1 & 1) == 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0), lVar4 != 0)) {
      uVar2 = FUN_1403ec9c0();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 == (longlong *)0x0) {
        bVar1 = *(byte *)(param_1 + 0x90);
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_148f101fe(lVar4 + 0x20,local_20,param_1);
        bVar1 = *(byte *)(param_1 + 0x90) | 1;
        *(byte *)(param_1 + 0x90) = bVar1;
      }
    }
    if ((bVar1 & 2) == 0) {
      lVar4 = FUN_143eca4da(*(undefined8 *)(param_1 + 0x30),0);
      if (lVar4 != 0) {
        FUN_148f10460(lVar4 + 0x70,local_20,param_1);
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 2;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f0fdb4 FUN_148f0fdb4 body=441 status=ok
// SIG undefined FUN_148f0fdb4(void)

void FUN_148f0fdb4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  
  bVar3 = *(byte *)(param_1 + 0x90);
  if ((bVar3 & 1) != 0) {
    *(byte *)(param_1 + 0x90) = bVar3 & 0xfe;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    if (lVar6 != 0) {
      uVar4 = FUN_1403ec9c0();
      plVar5 = (longlong *)FUN_144718840(lVar6,uVar4);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_140457ffc(lVar6 + 0x20,param_1);
      }
    }
    fVar9 = *(float *)(param_1 + 0x68);
    if (0.0 < fVar9) {
      if (0 < *(int *)(param_1 + 0x78)) {
        FUN_1401073f6(*(longlong *)(param_1 + 0x30) + 0xa10,param_1);
        FUN_14053d8da(param_1 + 0x70,1);
      }
      if ((longlong)*(int *)(param_1 + 0x88) != 0) {
        puVar8 = *(undefined8 **)(param_1 + 0x80);
        puVar7 = puVar8 + (longlong)*(int *)(param_1 + 0x88) * 2;
        do {
          plVar5 = (longlong *)*puVar8;
          plVar2 = (longlong *)puVar8[1];
          if (plVar2 == (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
          }
          else {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
            LOCK();
            plVar5 = plVar2 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar7);
      }
      fVar9 = *(float *)(param_1 + 0x68);
    }
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0);
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),1);
    }
    if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfb;
      FUN_14588b636(*(undefined8 *)(param_1 + 0x30),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8));
    }
    FUN_1447f69b6(param_1 + 0x40);
    bVar3 = *(byte *)(param_1 + 0x90);
  }
  if ((bVar3 & 2) != 0) {
    *(byte *)(param_1 + 0x90) = bVar3 & 0xfd;
    lVar6 = FUN_143eca4da(*(undefined8 *)(param_1 + 0x30),0);
    if (lVar6 != 0) {
      FUN_140457ffc(lVar6 + 0x70,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148f0ff6e FUN_148f0ff6e body=278 status=ok
// SIG undefined FUN_148f0ff6e(void)

void FUN_148f0ff6e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 *local_c0;
  undefined1 local_a9;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_78;
  undefined1 local_70 [40];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (((*(char *)(lVar1 + 0x178) == '\x03') && (0 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x38)))
     && (*(int *)(param_1 + 0x78) == 0)) {
    FUN_148f10086(&local_a8);
    local_a0 = 0;
    FUN_14485c47a(&local_a0,param_1);
    local_98 = local_a8;
    FUN_14113f0c0(&local_a0);
    FUN_14053c012(lVar1 + 0xa10,&local_a0);
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_78 = 0;
    FUN_1456bb102(&local_a0,lVar1);
    local_70[0] = 0;
    local_48 = 0;
    local_c0 = &local_a9;
    local_c8 = 0;
    FUN_140c3fc86(*(longlong *)(param_1 + 0x58) + 0x30,param_1 + 0x70,lVar1,&local_a0);
    FUN_144a5ac3a(local_70);
    FUN_144a5ac3a(&local_a0);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10086 FUN_148f10086 body=190 status=ok
// SIG undefined FUN_148f10086(void)

undefined8 * FUN_148f10086(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe77d0) {
    FUN_144b3d300(&DAT_14cbe77d0);
    if (DAT_14cbe77d0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"Effects",8);
      builtin_wcsncpy(local_48 + 8,L"ttribute",8);
      builtin_wcsncpy(local_48,L"RefreshA",8);
      FUN_1446f470e(&DAT_14cbe77c8,local_48,1);
      _Init_thread_footer(&DAT_14cbe77d0);
    }
  }
  *param_1 = DAT_14cbe77c8;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10146 FUN_148f10146 body=183 status=ok
// SIG undefined FUN_148f10146(void)

void FUN_148f10146(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      local_98[0] = 0;
      local_70 = 0;
      FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x30));
      local_68[0] = 0;
      local_40 = 0;
      FUN_1470dc690(*(longlong *)(param_1 + 0x70) + lVar2,local_98);
      FUN_144a5ac3a(local_68);
      FUN_144a5ac3a(local_98);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < *(int *)(param_1 + 0x78));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f101fe FUN_148f101fe body=244 status=ok
// SIG undefined FUN_148f101fe(void)

undefined8 FUN_148f101fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b3e9ef0;
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
  *local_38 = &PTR_FUN_14b9df070;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148f102f4;
  FUN_1403524de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f102f4 FUN_148f102f4 body=363 status=ok
// SIG undefined FUN_148f102f4(void)

void FUN_148f102f4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe76e0) && (FUN_144b3d300(&DAT_14cbe76e0), DAT_14cbe76e0 == -1)) {
    FUN_1446f470e(&DAT_14cbe76d8,L"Bullet",1);
    _Init_thread_footer(&DAT_14cbe76e0);
  }
  plVar3 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (0 < (int)plVar3[7]) {
    plVar4 = (longlong *)plVar3[6];
    if ((longlong *)plVar3[6] == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    if (((*plVar4 != 0) && ((int)plVar4[1] - 1U < 0xfffffffe)) &&
       (cVar2 = FUN_1403343e8(*(longlong *)(param_1 + 0x58) + 0x98,plVar3), cVar2 == '\0')) {
      return;
    }
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),1);
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x80);
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0x88) * 2;
    do {
      plVar3 = (longlong *)*puVar6;
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_2);
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  FUN_1447f69b6(param_1 + 0x40);
  return;
}



// FUNCTION 148f10460 FUN_148f10460 body=244 status=ok
// SIG undefined FUN_148f10460(void)

undefined8 FUN_148f10460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_FUN_14b9df0e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148f10556;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10556 FUN_148f10556 body=766 status=ok
// SIG undefined FUN_148f10556(void)

void FUN_148f10556(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar11 = *(float *)(param_1 + 0x68);
  if (0.0 < fVar11) {
    if (0 < *(int *)(param_1 + 0x78)) {
      FUN_1401073f6(*(longlong *)(param_1 + 0x30) + 0xa10,param_1);
      FUN_14053d8da(param_1 + 0x70,1);
    }
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x80);
      puVar8 = puVar10 + (longlong)*(int *)(param_1 + 0x88) * 2;
      do {
        plVar3 = (longlong *)*puVar10;
        plVar4 = (longlong *)puVar10[1];
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar8);
    }
    FUN_14588b636(*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8));
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfb;
    fVar11 = *(float *)(param_1 + 0x68);
  }
  if ((fVar11 != 0.0) || (NAN(fVar11))) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0);
  }
  iVar7 = *(int *)(param_1 + 0x6c);
  if (0 < iVar7) {
    lVar5 = *(longlong *)(param_1 + 0x58);
    local_98[0] = 0;
    local_70 = 0;
    FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x30));
    FUN_1448729ea(lVar5 + 0x40,local_68,local_98);
    fVar11 = (float)FUN_144a7b41a(local_68,0);
    if ((*(float *)(param_1 + 0x68) != fVar11) || (NAN(*(float *)(param_1 + 0x68)) || NAN(fVar11)))
    {
      *(float *)(param_1 + 0x68) = fVar11;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0);
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppuVar9 = local_68;
      if (0x18 < local_50) {
        ppppuVar9 = (undefined8 ****)local_68[0];
      }
      (*pcVar6)(ppppuVar9);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    FUN_144a5ac3a(local_98);
    fVar11 = *(float *)(*(longlong *)(param_1 + 0x58) + 0x90);
    if (0.0 < fVar11) {
      fVar2 = *(float *)(param_1 + 0x68);
      fVar12 = fVar2;
      if (fVar11 <= fVar2) {
        fVar12 = fVar11;
      }
      if ((fVar2 != fVar12) || (NAN(fVar2) || NAN(fVar12))) {
        *(float *)(param_1 + 0x68) = fVar12;
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),0);
      }
    }
    iVar7 = *(int *)(param_1 + 0x6c);
  }
  if (iVar7 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),1);
  }
  FUN_1447f69b6(param_1 + 0x40);
  if (0.0 < *(float *)(param_1 + 0x68)) {
    FUN_148f0ff6e(param_1);
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x80);
      puVar8 = puVar10 + (longlong)*(int *)(param_1 + 0x88) * 2;
      do {
        plVar3 = (longlong *)*puVar10;
        plVar4 = (longlong *)puVar10[1];
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar8);
    }
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 4;
    local_a8 = 0;
    FUN_140980406(*(longlong *)(param_1 + 0x30),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xbd8),0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10856 FUN_148f10856 body=103 status=ok
// SIG undefined FUN_148f10856(void)

void FUN_148f10856(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
    FUN_14588b636(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8));
  }
  if (0.0 < *(float *)(param_1 + 0x68)) {
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 4;
    FUN_140980406(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0xb8),
                  *(undefined1 *)(lVar1 + 0xbd8),0,0);
  }
  return;
}



// FUNCTION 148f108c8 FUN_148f108c8 body=97 status=ok
// SIG undefined FUN_148f108c8(void)

void FUN_148f108c8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_143eca4b6(*(longlong *)(param_1 + 0x30),
                        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xbd8));
  if (lVar1 != 0) {
    local_20 = *(undefined8 *)(param_1 + 0x18);
    FUN_148a197ec(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1092a FUN_148f1092a body=251 status=ok
// SIG undefined FUN_148f1092a(void)

void FUN_148f1092a(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_2 + 5);
  if (bVar1 - 1 < 2) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 1 << (*(byte *)(param_1 + 0xe6) & 0x1f);
    local_30 = param_3;
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x8c0) + 0x40))
              (*(longlong *)(param_1 + 0x30) + 0x8c0,*(undefined8 *)(param_2 + 8),
               CONCAT31((int3)((uint)local_20 >> 8),bVar1 == 1));
  }
  else if ((bVar1 == 0) && (plVar3 = *(longlong **)(param_1 + 0x30), plVar3 != (longlong *)0x0)) {
    uVar2 = FUN_140d4a144();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140d4a144();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10a3a FUN_148f10a3a body=128 status=ok
// SIG undefined FUN_148f10a3a(void)

void FUN_148f10a3a(longlong *param_1)

{
  byte bVar1;
  
  if (((char)param_1[0x1c] == '\0') && ((*(byte *)(param_1[0xe] + 0x1c8) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x18) = 4;
    bVar1 = *(char *)((longlong)param_1 + 0xc4) << 3 | 4;
    if (*(byte *)((longlong)param_1 + 0xc1) != bVar1) {
      *(byte *)((longlong)param_1 + 0xc1) = bVar1;
      FUN_144a62f0c(param_1,param_1[0xd],1);
    }
    FUN_141074ab4(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148f10a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x368))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148f10ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x338))(param_1);
  return;
}



// FUNCTION 148f10aba FUN_148f10aba body=121 status=ok
// SIG undefined FUN_148f10aba(void)

void FUN_148f10aba(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c41468(param_1,iVar1);
    }
    FUN_148f14709((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148f1471c(param_1,param_2,iVar1 - param_2);
    FUN_148f14776(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f10b34 FUN_148f10b34 body=353 status=ok
// SIG undefined FUN_148f10b34(void)

void FUN_148f10b34(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,float param_5
                  ,longlong param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_6c = 0;
  local_68 = 1 << (*(byte *)(param_1 + 0xe6) & 0x1f);
  lVar3 = param_2[1];
  local_78 = param_3;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      cVar1 = *(char *)(lVar2 + 5 + lVar4);
      if ((byte)(cVar1 - 1U) < 2) {
        switch(*(undefined1 *)(lVar2 + 4 + lVar4)) {
        case 0:
          bVar5 = -(param_4 < *(float *)(lVar2 + lVar4));
          bVar6 = -(*(float *)(lVar2 + lVar4) <= param_5);
          break;
        case 1:
          bVar5 = -(param_4 <= *(float *)(lVar2 + lVar4));
          bVar6 = -(*(float *)(lVar2 + lVar4) < param_5);
          break;
        case 2:
          bVar5 = -(param_5 <= *(float *)(lVar2 + lVar4));
          bVar6 = -(*(float *)(lVar2 + lVar4) < param_4);
          break;
        case 3:
          bVar5 = -(param_5 < *(float *)(lVar2 + lVar4));
          bVar6 = -(*(float *)(lVar2 + lVar4) <= param_4);
          break;
        default:
          bVar6 = 0;
          goto LAB_148f10c36;
        }
        bVar6 = bVar6 & bVar5;
LAB_148f10c36:
        (**(code **)(*(longlong *)(param_6 + 0x8c0) + 0x40))
                  ((longlong *)(param_6 + 0x8c0),*(undefined8 *)(lVar2 + 8 + lVar4),
                   (cVar1 == '\x02' ^ bVar6) & 1,&local_78);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f10c96 FUN_148f10c96 body=592 status=ok
// SIG undefined FUN_148f10c96(void)

void FUN_148f10c96(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  lVar6 = *(longlong *)(param_1 + 0x30);
  local_38 = DAT_14cbe7760;
  local_40 = lVar6;
  FUN_1447cd2ec(lVar6 + 0xaf0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x220) & 2) != 0) {
    FUN_140994e4c(lVar6,DAT_14cbe7708,*(undefined1 *)(param_1 + 0xe6),0);
    FUN_140994e4c(lVar6,DAT_14cbe7710,*(undefined1 *)(param_1 + 0xe6),0);
    (**(code **)(*(longlong *)(lVar6 + 0x520) + 0x10))(lVar6 + 0x520,&local_40);
    plVar4 = local_38;
    lVar3 = local_40;
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
      FUN_1408f4152(lVar3,0,*(undefined1 *)(param_1 + 0xe6));
      FUN_1408f4152(lVar3,1,*(undefined1 *)(param_1 + 0xe6));
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
  }
  local_58 = 0;
  FUN_140980406(lVar6,DAT_14cbe7718,*(undefined1 *)(param_1 + 0xe6),*(undefined4 *)(param_1 + 0xec))
  ;
  local_50 = 0;
  local_58 = 0;
  cVar5 = FUN_140dd024a(lVar6,DAT_14cbe76f8,0x3f800000,0);
  if (cVar5 != '\0') {
    *(char *)(param_1 + 200) = cVar5;
  }
  *(undefined1 *)(param_1 + 0xe2) = 0;
  lVar6 = *(longlong *)(param_1 + 0x70);
  if ((*(longlong *)(lVar6 + 0x278) == 0) || (0xfffffffd < *(int *)(lVar6 + 0x280) - 1U)) {
    if ((*(longlong *)(lVar6 + 0x260) == 0) ||
       ((0xfffffffd < *(int *)(lVar6 + 0x268) - 1U || (*(char *)(lVar6 + 0x290) == '\0'))))
    goto LAB_148f10de2;
LAB_148f10d98:
    FUN_14115ae20(param_1,lVar6 + 0x260);
    *(undefined1 *)(param_1 + 0xe3) = 0;
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(lVar6 + 0x278) == 0) goto LAB_148f10de2;
LAB_148f10dbc:
    if (0xfffffffd < *(int *)(lVar6 + 0x280) - 1U) goto LAB_148f10de2;
  }
  else if (*(longlong *)(lVar6 + 0x260) != 0) {
    if (*(int *)(lVar6 + 0x268) - 1U < 0xfffffffe) goto LAB_148f10d98;
    goto LAB_148f10dbc;
  }
  FUN_1410750a6(param_1,lVar6 + 0x278,1);
  *(undefined1 *)(param_1 + 0xe4) = 1;
LAB_148f10de2:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f10ee8 FUN_148f10ee8 body=130 status=ok
// SIG undefined FUN_148f10ee8(void)

undefined8 * FUN_148f10ee8(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x368) == 0) {
    local_20 = 0;
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x368) + 8);
    puVar3 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    FUN_1447325ac(puVar3,&local_20,1);
    uVar2 = 0x34002;
  }
  *param_2 = local_20;
  *(undefined4 *)(param_2 + 1) = uVar2;
  param_2[2] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f10f6c FUN_148f10f6c body=183 status=ok
// SIG undefined FUN_148f10f6c(void)

undefined8 * FUN_148f10f6c(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x368) == 0) {
    if (*(longlong *)(param_1 + 0x370) == 0) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_148f10fba;
    }
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x370) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    puVar5 = &local_28;
    FUN_1447325ac(puVar4,puVar5,1);
    uVar3 = 0x4000;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x368) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    puVar5 = &local_20;
    FUN_1447325ac(puVar4,puVar5,1);
    uVar3 = 0x34001;
  }
  uVar2 = *puVar5;
LAB_148f10fba:
  *param_2 = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  param_2[2] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f11024 FUN_148f11024 body=61 status=ok
// SIG undefined FUN_148f11024(void)

undefined8 * FUN_148f11024(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f11062 FUN_148f11062 body=38 status=ok
// SIG undefined FUN_148f11062(void)

undefined8 FUN_148f11062(undefined8 param_1,int param_2)

{
  FUN_140cf001e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f1108e FUN_148f1108e body=31 status=ok
// SIG undefined FUN_148f1108e(void)

undefined8 FUN_148f1108e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f110c8 FUN_148f110c8 body=29 status=ok
// SIG undefined FUN_148f110c8(void)

bool FUN_148f110c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f110e6 FUN_148f110e6 body=26 status=ok
// SIG undefined FUN_148f110e6(void)

bool FUN_148f110e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f11100 FUN_148f11100 body=101 status=ok
// SIG undefined FUN_148f11100(void)

void FUN_148f11100(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f11166 FUN_148f11166 body=134 status=ok
// SIG undefined FUN_148f11166(void)

void FUN_148f11166(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de400;
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
                    /* WARNING: Could not recover jumptable at 0x000148f111dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f111ec FUN_148f111ec body=39 status=ok
// SIG undefined FUN_148f111ec(void)

void FUN_148f111ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f1120f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f11214 FUN_148f11214 body=146 status=ok
// SIG undefined FUN_148f11214(void)

bool FUN_148f11214(longlong param_1)

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



// FUNCTION 148f112a8 FUN_148f112a8 body=243 status=ok
// SIG undefined FUN_148f112a8(void)

undefined8 * FUN_148f112a8(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cbd0a68,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14cbd0a70;
      lVar6 = (longlong)(int)DAT_14cbd0a70;
      DAT_14cbd0a70 = DAT_14cbd0a70 + 1;
      if (DAT_14cbd0a74 < DAT_14cbd0a70) {
        FUN_1447a71f6(&DAT_14cbd0a68,uVar3);
      }
      lVar2 = DAT_14cbd0a68;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cbd0a68 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f113aa FUN_148f113aa body=48 status=ok
// SIG undefined FUN_148f113aa(void)

void FUN_148f113aa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe8,8);
  }
  return;
}



// FUNCTION 148f113da FUN_148f113da body=31 status=ok
// SIG undefined FUN_148f113da(void)

undefined8 FUN_148f113da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f11414 FUN_148f11414 body=29 status=ok
// SIG undefined FUN_148f11414(void)

bool FUN_148f11414(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f11432 FUN_148f11432 body=101 status=ok
// SIG undefined FUN_148f11432(void)

void FUN_148f11432(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f11498 FUN_148f11498 body=101 status=ok
// SIG undefined FUN_148f11498(void)

void FUN_148f11498(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f114fe FUN_148f114fe body=134 status=ok
// SIG undefined FUN_148f114fe(void)

void FUN_148f114fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de5c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f11575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f11584 FUN_148f11584 body=52 status=ok
// SIG undefined FUN_148f11584(void)

void FUN_148f11584(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f115b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f115b8 FUN_148f115b8 body=167 status=ok
// SIG undefined FUN_148f115b8(void)

bool FUN_148f115b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f11660 FUN_148f11660 body=230 status=ok
// SIG undefined FUN_148f11660(void)

undefined8 * FUN_148f11660(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 148f11748 FUN_148f11748 body=29 status=ok
// SIG undefined FUN_148f11748(void)

undefined8 FUN_148f11748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f11780 FUN_148f11780 body=29 status=ok
// SIG undefined FUN_148f11780(void)

bool FUN_148f11780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1179e FUN_148f1179e body=26 status=ok
// SIG undefined FUN_148f1179e(void)

bool FUN_148f1179e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f117b8 FUN_148f117b8 body=24 status=ok
// SIG undefined FUN_148f117b8(void)

bool FUN_148f117b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f117dc FUN_148f117dc body=101 status=ok
// SIG undefined FUN_148f117dc(void)

void FUN_148f117dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de6a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f11842 FUN_148f11842 body=101 status=ok
// SIG undefined FUN_148f11842(void)

void FUN_148f11842(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de6a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f118a8 FUN_148f118a8 body=134 status=ok
// SIG undefined FUN_148f118a8(void)

void FUN_148f118a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9de6a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de630;
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
                    /* WARNING: Could not recover jumptable at 0x000148f1191f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f1192e FUN_148f1192e body=62 status=ok
// SIG undefined FUN_148f1192e(void)

void FUN_148f1192e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f11969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148f1196c FUN_148f1196c body=188 status=ok
// SIG undefined FUN_148f1196c(void)

bool FUN_148f1196c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
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
    local_48 = param_5;
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



// FUNCTION 148f11a2c FUN_148f11a2c body=114 status=ok
// SIG undefined FUN_148f11a2c(void)

void FUN_148f11a2c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148f11a9e FUN_148f11a9e body=114 status=ok
// SIG undefined FUN_148f11a9e(void)

void FUN_148f11a9e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148f11b10 FUN_148f11b10 body=93 status=ok
// SIG undefined FUN_148f11b10(void)

ulonglong FUN_148f11b10(uint param_1,uint param_2)

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



// FUNCTION 148f11b6e FUN_148f11b6e body=31 status=ok
// SIG undefined FUN_148f11b6e(void)

undefined8 FUN_148f11b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f11ba8 FUN_148f11ba8 body=29 status=ok
// SIG undefined FUN_148f11ba8(void)

bool FUN_148f11ba8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f11bc6 FUN_148f11bc6 body=26 status=ok
// SIG undefined FUN_148f11bc6(void)

bool FUN_148f11bc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f11be0 FUN_148f11be0 body=101 status=ok
// SIG undefined FUN_148f11be0(void)

void FUN_148f11be0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9aba80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f11c46 FUN_148f11c46 body=101 status=ok
// SIG undefined FUN_148f11c46(void)

void FUN_148f11c46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9aba80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f11cac FUN_148f11cac body=134 status=ok
// SIG undefined FUN_148f11cac(void)

void FUN_148f11cac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9aba80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de710;
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
                    /* WARNING: Could not recover jumptable at 0x000148f11d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f11d32 FUN_148f11d32 body=62 status=ok
// SIG undefined FUN_148f11d32(void)

void FUN_148f11d32(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f11d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148f11d70 FUN_148f11d70 body=114 status=ok
// SIG undefined FUN_148f11d70(void)

void FUN_148f11d70(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148f11de2 FUN_148f11de2 body=263 status=ok
// SIG undefined FUN_148f11de2(void)

void FUN_148f11de2(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_1407052fc();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_148f11e06;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1407052fc(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_148f11eea(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_148f11e06:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f11eea FUN_148f11eea body=87 status=ok
// SIG undefined FUN_148f11eea(void)

void FUN_148f11eea(longlong *param_1,int param_2)

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
  FUN_148f11f42();
  return;
}



// FUNCTION 148f11f42 FUN_148f11f42 body=114 status=ok
// SIG undefined FUN_148f11f42(void)

void FUN_148f11f42(longlong *param_1,int param_2)

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



// FUNCTION 148f11fb4 FUN_148f11fb4 body=272 status=ok
// SIG undefined FUN_148f11fb4(void)

undefined4 * FUN_148f11fb4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14586788e(param_1,local_48);
  FUN_145867626(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1458677d2(param_1,param_3,local_40,local_48);
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
      FUN_145867d52(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f120c6 FUN_148f120c6 body=29 status=ok
// SIG undefined FUN_148f120c6(void)

undefined8 FUN_148f120c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f120fe FUN_148f120fe body=29 status=ok
// SIG undefined FUN_148f120fe(void)

bool FUN_148f120fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1211c FUN_148f1211c body=26 status=ok
// SIG undefined FUN_148f1211c(void)

bool FUN_148f1211c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f12136 FUN_148f12136 body=24 status=ok
// SIG undefined FUN_148f12136(void)

bool FUN_148f12136(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f1214e FUN_148f1214e body=101 status=ok
// SIG undefined FUN_148f1214e(void)

void FUN_148f1214e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de4e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f121b4 FUN_148f121b4 body=101 status=ok
// SIG undefined FUN_148f121b4(void)

void FUN_148f121b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de4e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1221a FUN_148f1221a body=134 status=ok
// SIG undefined FUN_148f1221a(void)

void FUN_148f1221a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9de4e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de780;
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
                    /* WARNING: Could not recover jumptable at 0x000148f12291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f122a0 FUN_148f122a0 body=44 status=ok
// SIG undefined FUN_148f122a0(void)

void FUN_148f122a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f122c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148f122cc FUN_148f122cc body=156 status=ok
// SIG undefined FUN_148f122cc(void)

bool FUN_148f122cc(longlong param_1,undefined8 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f1236a FUN_148f1236a body=114 status=ok
// SIG undefined FUN_148f1236a(void)

void FUN_148f1236a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148f123dc FUN_148f123dc body=60 status=ok
// SIG undefined FUN_148f123dc(void)

void FUN_148f123dc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148dbfb5e(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 148f12418 FUN_148f12418 body=29 status=ok
// SIG undefined FUN_148f12418(void)

undefined8 FUN_148f12418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f12450 FUN_148f12450 body=29 status=ok
// SIG undefined FUN_148f12450(void)

bool FUN_148f12450(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f1246e FUN_148f1246e body=26 status=ok
// SIG undefined FUN_148f1246e(void)

bool FUN_148f1246e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f12488 FUN_148f12488 body=24 status=ok
// SIG undefined FUN_148f12488(void)

bool FUN_148f12488(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148f124a0 FUN_148f124a0 body=101 status=ok
// SIG undefined FUN_148f124a0(void)

void FUN_148f124a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f12506 FUN_148f12506 body=101 status=ok
// SIG undefined FUN_148f12506(void)

void FUN_148f12506(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f1256c FUN_148f1256c body=134 status=ok
// SIG undefined FUN_148f1256c(void)

void FUN_148f1256c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f125e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f125f2 FUN_148f125f2 body=39 status=ok
// SIG undefined FUN_148f125f2(void)

void FUN_148f125f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f12615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f1261a FUN_148f1261a body=146 status=ok
// SIG undefined FUN_148f1261a(void)

bool FUN_148f1261a(longlong param_1)

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



// FUNCTION 148f126ae FUN_148f126ae body=31 status=ok
// SIG undefined FUN_148f126ae(void)

undefined8 FUN_148f126ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f126e8 FUN_148f126e8 body=26 status=ok
// SIG undefined FUN_148f126e8(void)

bool FUN_148f126e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148f12702 FUN_148f12702 body=101 status=ok
// SIG undefined FUN_148f12702(void)

void FUN_148f12702(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de9b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f12768 FUN_148f12768 body=101 status=ok
// SIG undefined FUN_148f12768(void)

void FUN_148f12768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9de9b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9de940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f127ce FUN_148f127ce body=134 status=ok
// SIG undefined FUN_148f127ce(void)

void FUN_148f127ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9de9b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9de940;
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
                    /* WARNING: Could not recover jumptable at 0x000148f12845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f12854 FUN_148f12854 body=52 status=ok
// SIG undefined FUN_148f12854(void)

void FUN_148f12854(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f12885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148f1288a FUN_148f1288a body=114 status=ok
// SIG undefined FUN_148f1288a(void)

void FUN_148f1288a(longlong *param_1,int param_2)

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



// FUNCTION 148f128fc FUN_148f128fc body=62 status=ok
// SIG undefined FUN_148f128fc(void)

void FUN_148f128fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148f1293a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 148f1293a FUN_148f1293a body=112 status=ok
// SIG undefined FUN_148f1293a(void)

ulonglong FUN_148f1293a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148f12974;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_148f12974:
  return param_2 & 0xffffffff;
}



// FUNCTION 148f129aa FUN_148f129aa body=285 status=ok
// SIG undefined FUN_148f129aa(void)

void FUN_148f129aa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar3 = *param_1;
    iVar12 = 0;
    bVar8 = *(int *)(lVar3 + 0xd8) == *(int *)(*param_2 + 0xd8);
    iVar5 = 0;
    do {
      lVar10 = (longlong)iVar5;
      iVar9 = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        iVar9 = iVar1;
      }
      lVar4 = lVar10 * 0xf0;
      piVar11 = (int *)(lVar3 + 0x1c8 + lVar4);
      iVar6 = iVar5;
      do {
        lVar10 = lVar10 + 1;
        iVar7 = iVar9;
        if (lVar13 <= lVar10) break;
        iVar2 = *piVar11;
        iVar6 = iVar6 + 1;
        piVar11 = piVar11 + 0x3c;
        iVar7 = iVar6;
      } while (bVar8 == (iVar2 == *(int *)(*param_2 + 0xd8)));
      iVar9 = iVar7 - iVar5;
      if (bVar8 == false) {
        if (iVar12 != iVar5) {
          memmove((void *)((longlong)iVar12 * 0xf0 + lVar3),(void *)(lVar4 + lVar3),
                  (longlong)iVar9 * 0xf0);
        }
        iVar12 = iVar12 + iVar9;
      }
      else {
        FUN_1411b79c1(lVar4 + lVar3,iVar9);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar7;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 148f12ac7 FUN_148f12ac7 body=47 status=ok
// SIG undefined FUN_148f12ac7(void)

void FUN_148f12ac7(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140368b56(param_1);
      param_1 = param_1 + 0xf0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148f12af6 FUN_148f12af6 body=146 status=ok
// SIG undefined FUN_148f12af6(void)

void FUN_148f12af6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148f12b8a FUN_148f12b8a body=330 status=ok
// SIG undefined FUN_148f12b8a(void)

undefined4 * FUN_148f12b8a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412fc4a2(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  *local_40 = *(uint *)*param_3;
  local_40[2] = *puVar1;
  FUN_140d8ebf0(local_40 + 4,puVar1 + 2);
  *(undefined8 *)(local_40 + 0x3a) = *(undefined8 *)(puVar1 + 0x38);
  local_40[0x3c] = puVar1[0x3a];
  local_40[0x3e] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1412fc26a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x3f] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x3e] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1412fc684(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f12cf0 FUN_148f12cf0 body=101 status=ok
// SIG undefined FUN_148f12cf0(void)

void FUN_148f12cf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9deab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f12d56 FUN_148f12d56 body=101 status=ok
// SIG undefined FUN_148f12d56(void)

void FUN_148f12d56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9deab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148f12dbc FUN_148f12dbc body=134 status=ok
// SIG undefined FUN_148f12dbc(void)

void FUN_148f12dbc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9deab0;
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
                    /* WARNING: Could not recover jumptable at 0x000148f12e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f12e42 FUN_148f12e42 body=39 status=ok
// SIG undefined FUN_148f12e42(void)

void FUN_148f12e42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148f12e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148f12e6a FUN_148f12e6a body=193 status=ok
// SIG undefined FUN_148f12e6a(void)

void FUN_148f12e6a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148f12f01;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148f12f01:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148f12f2c FUN_148f12f2c body=114 status=ok
// SIG undefined FUN_148f12f2c(void)

void FUN_148f12f2c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 148f12fae FUN_148f12fae body=29 status=ok
// SIG undefined FUN_148f12fae(void)

bool FUN_148f12fae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148f12fcc FUN_148f12fcc body=26 status=ok
// SIG undefined FUN_148f12fcc(void)

bool FUN_148f12fcc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


