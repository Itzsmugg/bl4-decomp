// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146cb09b0 FUN_146cb09b0 body=97 status=ok
// SIG undefined FUN_146cb09b0(void)

ulonglong FUN_146cb09b0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 146cb0a12 FUN_146cb0a12 body=307 status=ok
// SIG undefined FUN_146cb0a12(void)

void FUN_146cb0a12(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d03e72(param_2,param_1);
  FUN_146cae532(param_2,(longlong *)(param_1 + 0x30));
  FUN_146caf9ea(param_2,(longlong *)(param_1 + 0x38));
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0xd < iVar4) {
    iVar4 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (iVar4 < 0x22) {
      puVar1 = (ulonglong *)param_2[1];
      if (puVar1[1] < *puVar1 + 4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_34,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_34);
        }
      }
      else {
        *puVar1 = *puVar1 + 4;
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 == 0) goto LAB_146cb0af9;
    puVar5 = (undefined4 *)(lVar3 + 0x58);
  }
  else {
    puVar5 = (undefined4 *)((longlong)(int)plVar2[1] * 4 + *(longlong *)(*plVar2 + 0x80));
  }
  *(undefined4 *)(param_1 + 0x40) = *puVar5;
LAB_146cb0af9:
  FUN_146caa7ea(param_2,param_1 + 0x68);
  FUN_146caa7ea(param_2,param_1 + 0x74);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb0b46 FUN_146cb0b46 body=209 status=ok
// SIG undefined FUN_146cb0b46(void)

void FUN_146cb0b46(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_146c9d76c(param_2,&local_48);
    lVar2 = local_48;
    lVar3 = (longlong)(int)uStack_40;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4);
        if ((int)param_1[1] <= iVar1) {
          FUN_146cab80a(param_1,(iVar1 - (int)param_1[1]) + 1);
        }
        *(undefined1 *)(*param_1 + 0x20 + (longlong)iVar1 * 0x24) = 1;
        FUN_146caaeb8((longlong)iVar1 * 0x24 + *param_1,param_2);
        lVar4 = lVar4 + 0x38;
      } while (lVar3 * 0x38 - lVar4 != 0);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cb0c18 FUN_146cb0c18 body=109 status=ok
// SIG undefined FUN_146cb0c18(void)

void FUN_146cb0c18(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146cb0c86 FUN_146cb0c86 body=403 status=ok
// SIG undefined FUN_146cb0c86(void)

longlong * FUN_146cb0c86(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_144716727(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1403b10bc(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1403b0476(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1403b0d30(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140bfc2d4(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1403b0476(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cb0e1a FUN_146cb0e1a body=151 status=ok
// SIG undefined FUN_146cb0e1a(void)

ulonglong FUN_146cb0e1a(longlong *param_1,int param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar4;
  
  uVar4 = param_1[4];
  iVar8 = (int)*(short *)(uVar4 + (longlong)param_2 * 2);
  if (iVar8 != -0x8000) {
    piVar9 = (int *)param_3[3];
    iVar10 = *piVar9;
    iVar7 = iVar8;
    while( true ) {
      lVar5 = param_3[1];
      sVar1 = *(short *)(*(longlong *)(*param_3 + 0x10) + (longlong)iVar7 * 6);
      *piVar9 = iVar10 + 1;
      *(int *)(lVar5 + (longlong)iVar10 * 4) = (int)sVar1;
      uVar2 = (uint)*(short *)(param_1[2] + 4 + (longlong)iVar7 * 6);
      uVar4 = (ulonglong)uVar2;
      if (uVar2 == 0xffff8000) break;
      piVar9 = (int *)param_3[3];
      iVar10 = *piVar9;
      if ((int)param_3[2] <= iVar10) {
        return uVar4;
      }
      lVar5 = (longlong)*(short *)(param_1[2] + (longlong)(int)uVar2 * 6);
      iVar7 = (int)*(short *)(*param_1 + lVar5 * 4);
      iVar3 = (uVar2 - iVar7) + 1;
      iVar6 = (int)*(short *)(*param_1 + 2 + lVar5 * 4);
      uVar4 = (longlong)iVar3 / (longlong)iVar6 & 0xffffffff;
      iVar7 = iVar3 % iVar6 + iVar7;
      if (iVar7 == iVar8) {
        return uVar4;
      }
      if (iVar7 == -0x8000) {
        return uVar4;
      }
    }
  }
  return uVar4;
}



// FUNCTION 146cb0eb2 FUN_146cb0eb2 body=115 status=ok
// SIG undefined FUN_146cb0eb2(void)

void FUN_146cb0eb2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146cb0f25 FUN_146cb0f25 body=155 status=ok
// SIG undefined FUN_146cb0f25(void)

void FUN_146cb0f25(longlong param_1,undefined4 *param_2,int param_3)

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
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  
  if (param_3 != 0) {
    puVar13 = (undefined8 *)(param_1 + 0x38);
    do {
      *(undefined4 *)(puVar13 + -1) = param_2[0xc];
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = param_2[9];
      uVar11 = param_2[10];
      uVar12 = param_2[0xb];
      *(undefined4 *)(puVar13 + -3) = param_2[8];
      *(undefined4 *)((longlong)puVar13 + -0x14) = uVar10;
      *(undefined4 *)(puVar13 + -2) = uVar11;
      *(undefined4 *)((longlong)puVar13 + -0xc) = uVar12;
      *(undefined4 *)(puVar13 + -5) = uVar6;
      *(undefined4 *)((longlong)puVar13 + -0x24) = uVar7;
      *(undefined4 *)(puVar13 + -4) = uVar8;
      *(undefined4 *)((longlong)puVar13 + -0x1c) = uVar9;
      *(undefined4 *)(puVar13 + -7) = uVar2;
      *(undefined4 *)((longlong)puVar13 + -0x34) = uVar3;
      *(undefined4 *)(puVar13 + -6) = uVar4;
      *(undefined4 *)((longlong)puVar13 + -0x2c) = uVar5;
      *puVar13 = 0;
      iVar1 = param_2[0x10];
      _Src = *(void **)(param_2 + 0xe);
      *(int *)(puVar13 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar13,iVar1,0);
        memcpy((void *)*puVar13,_Src,(longlong)iVar1 << 2);
      }
      *(undefined4 *)(puVar13 + 2) = param_2[0x12];
      param_2 = param_2 + 0x14;
      puVar13 = puVar13 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146cb0fc0 FUN_146cb0fc0 body=131 status=ok
// SIG undefined FUN_146cb0fc0(void)

longlong FUN_146cb0fc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146cb1043();
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
      FUN_146cb1614(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146cb1043 FUN_146cb1043 body=882 status=ok
// SIG undefined FUN_146cb1043(void)

longlong * FUN_146cb1043(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined4 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar5 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar7 = local_98._4_4_;
      local_98 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0x60 + *local_b0);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        (**(code **)(*(longlong *)(puVar6 + 2) + 0xf8))(puVar6 + 2,param_1);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar7 = local_98._4_4_;
        uVar5 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined4 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_146cb13b6(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar5 = local_98;
    if (0 < (int)local_80) {
      iVar7 = 0;
      do {
        FUN_146cb1526(param_2,&local_b0);
        puVar6 = local_a8;
        *local_a8 = 0;
        *(undefined8 *)(local_a8 + 4) = 0;
        *(undefined8 *)(local_a8 + 6) = 0;
        *(undefined2 *)(local_a8 + 8) = 0x101;
        *(undefined1 *)((longlong)local_a8 + 0x22) = 1;
        *(undefined2 *)(local_a8 + 9) = 0x101;
        *(undefined ***)(local_a8 + 2) = &PTR_FUN_149f489d0;
        *(undefined8 *)(local_a8 + 10) = 0x7fefffffffffffff;
        *(undefined8 *)(local_a8 + 0xc) = 0x7fefffffffffffff;
        *(undefined8 *)(local_a8 + 0xe) = 0x7fefffffffffffff;
        *(undefined8 *)(local_a8 + 0x10) = 0xffefffffffffffff;
        *(undefined8 *)(local_a8 + 0x12) = 0xffefffffffffffff;
        *(undefined8 *)(local_a8 + 0x14) = 0xffefffffffffffff;
        local_a8[0x16] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_a8,4);
          }
          else {
            thunk_FUN_14572512c(param_1,local_a8);
          }
        }
        else {
          *local_a8 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        (**(code **)(*(longlong *)(puVar6 + 2) + 0xf8))(puVar6 + 2,param_1);
        iVar7 = iVar7 + 1;
        uVar5 = local_98;
      } while (iVar7 < (int)local_80);
    }
  }
  local_98 = uVar5;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cb13b6 FUN_146cb13b6 body=365 status=ok
// SIG undefined FUN_146cb13b6(void)

void FUN_146cb13b6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      *(undefined ***)(*local_78 + 8 + (longlong)iStack_5c * 0x60) = &PTR_FUN_149f553e0;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cb1526 FUN_146cb1526 body=238 status=ok
// SIG undefined FUN_146cb1526(void)

int * FUN_146cb1526(longlong *param_1,int *param_2)

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



// FUNCTION 146cb1614 FUN_146cb1614 body=423 status=ok
// SIG undefined FUN_146cb1614(void)

void FUN_146cb1614(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146cb17bc FUN_146cb17bc body=311 status=ok
// SIG undefined FUN_146cb17bc(void)

undefined4 * FUN_146cb17bc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146cb18f4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar8 = *(uint *)*param_3;
  *local_40 = uVar8;
  uVar4 = puVar1[1];
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = uVar4;
  *(undefined8 *)(local_40 + 6) = puVar1[2];
  uVar7 = *(uint *)((longlong)puVar1 + 0x1c);
  uVar2 = *(uint *)(puVar1 + 4);
  uVar3 = *(uint *)((longlong)puVar1 + 0x24);
  local_40[8] = *(uint *)(puVar1 + 3);
  local_40[9] = uVar7;
  local_40[10] = uVar2;
  local_40[0xb] = uVar3;
  *(undefined8 *)(local_40 + 0xc) = puVar1[5];
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  cVar6 = FUN_146cb19da(param_1,uVar8,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      local_40[0xf] = uVar8;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146cb1aea(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb18f4 FUN_146cb18f4 body=229 status=ok
// SIG undefined FUN_146cb18f4(void)

int * FUN_146cb18f4(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 146cb19da FUN_146cb19da body=157 status=ok
// SIG undefined FUN_146cb19da(void)

undefined8 FUN_146cb19da(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146cb1a78(iVar2,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 146cb1a78 FUN_146cb1a78 body=114 status=ok
// SIG undefined FUN_146cb1a78(void)

void FUN_146cb1a78(longlong *param_1,int param_2)

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



// FUNCTION 146cb1aea FUN_146cb1aea body=422 status=ok
// SIG undefined FUN_146cb1aea(void)

void FUN_146cb1aea(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 146cb1c92 FUN_146cb1c92 body=54 status=ok
// SIG undefined FUN_146cb1c92(void)

void FUN_146cb1c92(longlong *param_1)

{
  FUN_146cb13b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146cb1cc8 FUN_146cb1cc8 body=131 status=ok
// SIG undefined FUN_146cb1cc8(void)

longlong FUN_146cb1cc8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146cb1d4b();
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
      FUN_146cb1aea(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146cb1d4b FUN_146cb1d4b body=837 status=ok
// SIG undefined FUN_146cb1d4b(void)

longlong * FUN_146cb1d4b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined4 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar5 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar7 = local_78._4_4_;
      local_78 = uVar5;
      do {
        puVar6 = (undefined4 *)((longlong)iVar7 * 0x40 + *local_90);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        uVar5 = FUN_141724e7a(param_1,puVar6 + 2);
        FUN_141724e7a(uVar5,puVar6 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar7 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined4 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined4 *)CONCAT44(uVar4,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_140191eac(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar5 = local_78;
    if (0 < (int)local_60) {
      iVar7 = 0;
      do {
        FUN_146cb18f4(param_2,&local_90);
        puVar6 = local_88;
        *local_88 = 0;
        *(undefined8 *)(local_88 + 2) = 0x7fefffffffffffff;
        *(undefined8 *)(local_88 + 4) = 0x7fefffffffffffff;
        *(undefined8 *)(local_88 + 6) = 0x7fefffffffffffff;
        *(undefined8 *)(local_88 + 8) = 0xffefffffffffffff;
        *(undefined8 *)(local_88 + 10) = 0xffefffffffffffff;
        *(undefined8 *)(local_88 + 0xc) = 0xffefffffffffffff;
        local_88[0xe] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_88,4);
          }
          else {
            thunk_FUN_14572512c(param_1,local_88);
          }
        }
        else {
          *local_88 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        uVar5 = FUN_141724e7a(param_1,puVar6 + 2);
        FUN_141724e7a(uVar5,puVar6 + 8);
        iVar7 = iVar7 + 1;
        uVar5 = local_78;
      } while (iVar7 < (int)local_60);
    }
  }
  local_78 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cb2092 FUN_146cb2092 body=366 status=ok
// SIG undefined FUN_146cb2092(void)

longlong * FUN_146cb2092(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140191e42(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146cb2342(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146cb223b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146cb2202(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146cb22fe(param_2);
        FUN_146cb223b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cb2202 FUN_146cb2202 body=57 status=ok
// SIG undefined FUN_146cb2202(void)

void FUN_146cb2202(undefined8 *param_1,int param_2)

{
  FUN_140191e42(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146cb2342(param_1,param_2);
  return;
}



// FUNCTION 146cb223b FUN_146cb223b body=195 status=ok
// SIG undefined FUN_146cb223b(void)

void FUN_146cb223b(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x48),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar2 = FUN_1403b0476(param_1,param_2 + 0x38);
  uVar2 = FUN_141724e7a(uVar2,param_2 + 0x18);
  FUN_141724e7a(uVar2,param_2);
  return;
}



// FUNCTION 146cb22fe FUN_146cb22fe body=68 status=ok
// SIG undefined FUN_146cb22fe(void)

longlong FUN_146cb22fe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146cb23c6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_146cb23b2(lVar2,1);
  return lVar2;
}



// FUNCTION 146cb2342 FUN_146cb2342 body=112 status=ok
// SIG undefined FUN_146cb2342(void)

void FUN_146cb2342(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146cb23b2 FUN_146cb23b2 body=19 status=ok
// SIG undefined FUN_146cb23b2(void)

void FUN_146cb23b2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x38);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 146cb23c6 FUN_146cb23c6 body=147 status=ok
// SIG undefined FUN_146cb23c6(void)

void FUN_146cb23c6(longlong param_1,int param_2)

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



// FUNCTION 146cb245a FUN_146cb245a body=226 status=ok
// SIG undefined FUN_146cb245a(void)

void FUN_146cb245a(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (uint *)*param_2;
    puVar1 = puVar9 + *(int *)(param_2 + 1);
    do {
      uVar4 = *puVar9;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar7 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar7 = param_4 + 7;
        }
        iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_4[9] - 1U & uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *param_4 + (longlong)iVar5 * 0x40;
            if (*(uint *)(*param_4 + (longlong)iVar5 * 0x40) == uVar4) goto LAB_146cb2498;
            iVar5 = *(int *)(lVar6 + 0x38);
          } while (iVar5 != -1);
        }
      }
      lVar6 = 0;
LAB_146cb2498:
      lVar8 = -3;
      do {
        dVar3 = *(double *)(lVar6 + 0x20 + lVar8 * 8);
        pdVar2 = (double *)(param_3 + 0x30 + lVar8 * 8);
        if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
           (dVar3 = *(double *)(param_3 + 0x18 + lVar8 * 8),
           pdVar2 = (double *)(lVar6 + 0x38 + lVar8 * 8), *pdVar2 <= dVar3 && dVar3 != *pdVar2))
        goto LAB_146cb24e2;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(param_1,iVar5);
      }
      *(uint *)(*param_1 + (longlong)iVar5 * 4) = uVar4;
LAB_146cb24e2:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



// FUNCTION 146cb253c FUN_146cb253c body=322 status=ok
// SIG undefined FUN_146cb253c(void)

void FUN_146cb253c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 146cb2688 FUN_146cb2688 body=572 status=ok
// SIG undefined FUN_146cb2688(void)

void FUN_146cb2688(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  void **ppvVar19;
  ulonglong uVar20;
  longlong lVar21;
  void *_Src;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined1 local_58;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1[4];
  lVar14 = *param_1;
  lVar6 = param_1[1];
  lVar21 = (longlong)param_2;
  lVar18 = lVar21 * 0x10;
  lVar7 = lVar21 * 0x30;
  lVar8 = lVar21 * 0x50;
  *(undefined8 *)(lVar14 + 0x10 + lVar8) = *(undefined8 *)(lVar6 + 0x10 + lVar7);
  puVar1 = (undefined8 *)(lVar6 + lVar7);
  uVar12 = puVar1[1];
  puVar2 = (undefined8 *)(lVar14 + lVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  lVar14 = *param_1;
  lVar6 = param_1[1];
  *(undefined8 *)(lVar14 + 0x28 + lVar8) = *(undefined8 *)(lVar6 + 0x28 + lVar7);
  puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar7);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (undefined4 *)(lVar14 + 0x18 + lVar8);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  *(undefined4 *)(*param_1 + 0x30 + lVar8) = 0xffffffff;
  lVar14 = param_1[2];
  iVar13 = *(int *)(lVar14 + 8 + lVar18);
  if ((longlong)iVar13 < 6) {
    local_48 = (void *)0x0;
    _Src = *(void **)(lVar14 + lVar18);
    if (iVar13 != 0) goto LAB_146cb2741;
    local_40 = 0;
  }
  else {
    if ((*(int *)param_1[3] < *(int *)(lVar5 + 0x88)) && (iVar13 < *(int *)(param_1[5] + 8))) {
      lVar14 = lVar21 * 0x18 + param_1[6];
      uVar20 = 0;
      uVar16 = 0;
      iVar13 = 0;
      do {
        iVar17 = *(int *)(lVar14 + uVar20 * 4);
        iVar15 = *(int *)(lVar14 + 0xc + uVar20 * 4);
        if (iVar17 < iVar15) {
          iVar15 = iVar17;
        }
        if (iVar13 < iVar15) {
          uVar16 = uVar20 & 0xffffffff;
          iVar13 = iVar15;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 3);
      iVar15 = (int)uVar16;
      *(int *)(*param_1 + 0x30 + lVar8) = iVar15;
      local_58 = *(undefined1 *)param_1[7];
      local_60 = *(int *)param_1[3] + 1;
      local_68 = iVar15;
      iVar13 = FUN_146c9ee8a(lVar5,*param_1 + lVar8,*param_1 + lVar8 + 0x18,lVar18 + param_1[2]);
      iVar17 = 2;
      if (iVar15 == -1) {
        iVar17 = 8;
      }
      do {
        lVar5 = *param_1 + lVar21 * 0x50;
        iVar15 = *(int *)(lVar5 + 0x40);
        *(uint *)(lVar5 + 0x40) = iVar15 + 1U;
        if (*(uint *)(lVar5 + 0x44) < iVar15 + 1U) {
          FUN_1446f48e2((longlong *)(lVar5 + 0x38),iVar15);
        }
        *(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar15 * 4) = iVar13;
        iVar13 = iVar13 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      goto LAB_146cb27b1;
    }
    _Src = *(void **)(lVar14 + lVar18);
LAB_146cb2741:
    local_40 = CONCAT44(local_40._4_4_,iVar13);
    local_48 = (void *)0x0;
    FUN_144a06ca8(&local_48,iVar13,0);
    memcpy(local_48,_Src,(longlong)iVar13 << 2);
  }
  ppvVar19 = (void **)(lVar18 + param_1[8]);
  if (ppvVar19 != &local_48) {
    if (*ppvVar19 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar19 = local_48;
    local_48 = (void *)0x0;
    *(undefined4 *)(ppvVar19 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)ppvVar19 + 0xc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146cb27b1:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb28c6 FUN_146cb28c6 body=88 status=ok
// SIG undefined FUN_146cb28c6(void)

void FUN_146cb28c6(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x280);
  FUN_140191e42(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 8);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 146cb291e FUN_146cb291e body=62 status=ok
// SIG undefined FUN_146cb291e(void)

void FUN_146cb291e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb295c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 146cb295c FUN_146cb295c body=112 status=ok
// SIG undefined FUN_146cb295c(void)

ulonglong FUN_146cb295c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146cb2996;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_146cb2996:
  return param_2 & 0xffffffff;
}



// FUNCTION 146cb29d4 FUN_146cb29d4 body=806 status=ok
// SIG undefined FUN_146cb29d4(void)

void FUN_146cb29d4(undefined8 *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  void **ppvVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *_Src;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined1 local_58;
  void *local_50;
  undefined8 local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar4 = (double *)*param_1;
  if ((param_2 & 1) == 0) {
    pdVar8 = (double *)param_1[1];
    pdVar12 = pdVar8;
    pdVar13 = pdVar4;
  }
  else {
    pdVar12 = pdVar4 + 3;
    pdVar8 = (double *)param_1[1];
    pdVar13 = pdVar8;
  }
  iVar7 = (int)param_2;
  if ((((uint)(param_2 >> 0x1f) & 1) + iVar7 >> 1 & 1) == 0) {
    dVar19 = pdVar4[1];
    dVar18 = pdVar8[1];
  }
  else {
    dVar18 = pdVar4[4];
    dVar19 = pdVar8[1];
  }
  dVar1 = *pdVar13;
  dVar2 = *pdVar12;
  if (iVar7 < 4) {
    dVar21 = pdVar4[2];
    dVar20 = pdVar8[2];
  }
  else {
    dVar20 = pdVar4[5];
    dVar21 = pdVar8[2];
  }
  lVar5 = param_1[5];
  lVar17 = *(longlong *)param_1[2];
  lVar15 = (longlong)iVar7;
  lVar10 = lVar15 * 0x10;
  lVar6 = lVar15 * 0x50;
  *(double *)(lVar17 + lVar6) = dVar1;
  *(double *)(lVar17 + 8 + lVar6) = dVar19;
  *(double *)(lVar17 + 0x10 + lVar6) = dVar21;
  lVar17 = *(longlong *)param_1[2];
  *(double *)(lVar17 + 0x18 + lVar6) = dVar2;
  *(double *)(lVar17 + 0x20 + lVar6) = dVar18;
  *(double *)(lVar17 + 0x28 + lVar6) = dVar20;
  *(undefined4 *)(*(longlong *)param_1[2] + 0x30 + lVar6) = 0xffffffff;
  lVar17 = *(longlong *)param_1[3];
  uVar3 = *(uint *)(lVar17 + 8 + lVar10);
  if ((longlong)(int)uVar3 < 6) {
    local_50 = (void *)0x0;
    _Src = *(void **)(lVar17 + lVar10);
    if (uVar3 != 0) goto LAB_146cb2af5;
    local_48 = 0.0;
  }
  else {
    if ((*(int *)param_1[4] < *(int *)(lVar5 + 0x88)) && ((int)uVar3 < *(int *)(param_1[6] + 8))) {
      local_40 = dVar20 - dVar21;
      local_48 = dVar18 - dVar19;
      local_50 = (void *)(dVar2 - dVar1);
      iVar7 = -1;
      if ((local_40 <= (double)local_50) || (lVar17 = 2, local_40 <= local_48)) {
        if (local_48 <= (double)local_50) {
          lVar17 = 0;
          iVar7 = 2;
        }
        else {
          lVar17 = 1;
        }
      }
      iVar16 = (int)lVar17;
      uVar14 = 0;
      if (iVar16 + 1U != 3) {
        uVar14 = (ulonglong)(iVar16 + 1U);
      }
      if ((((double)(&local_50)[lVar17] < (double)(&local_50)[uVar14] * 1.25) &&
          ((double)(&local_50)[lVar17] < (double)(&local_50)[(uint)(iVar7 + iVar16)] * 1.25)) &&
         (0x14 < uVar3)) {
        iVar16 = -1;
      }
      *(int *)(*(longlong *)param_1[2] + 0x30 + lVar6) = iVar16;
      local_60 = *(int *)param_1[4] + 1;
      local_58 = 1;
      local_68 = iVar16;
      iVar7 = FUN_146c9ee8a(lVar5,*(longlong *)param_1[2] + lVar6,
                            *(longlong *)param_1[2] + lVar6 + 0x18,lVar10 + *(longlong *)param_1[3])
      ;
      iVar9 = 2;
      if (iVar16 == -1) {
        iVar9 = 8;
      }
      do {
        lVar5 = *(longlong *)param_1[2] + lVar15 * 0x50;
        iVar16 = *(int *)(lVar5 + 0x40);
        *(uint *)(lVar5 + 0x40) = iVar16 + 1U;
        if (*(uint *)(lVar5 + 0x44) < iVar16 + 1U) {
          FUN_1446f48e2((longlong *)(lVar5 + 0x38),iVar16);
        }
        *(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar16 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      goto LAB_146cb2b68;
    }
    _Src = *(void **)(lVar17 + lVar10);
LAB_146cb2af5:
    local_48 = (double)CONCAT44(local_48._4_4_,uVar3);
    local_50 = (void *)0x0;
    FUN_144a06ca8(&local_50,uVar3,0);
    memcpy(local_50,_Src,(longlong)(int)uVar3 << 2);
  }
  ppvVar11 = (void **)(lVar10 + *(longlong *)param_1[7]);
  if (ppvVar11 != &local_50) {
    if (*ppvVar11 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar11 = local_50;
    local_50 = (void *)0x0;
    *(undefined4 *)(ppvVar11 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)ppvVar11 + 0xc) = local_48._4_4_;
    local_48 = 0.0;
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146cb2b68:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cb2cfc FUN_146cb2cfc body=413 status=ok
// SIG undefined FUN_146cb2cfc(void)

void FUN_146cb2cfc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140b7ce44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1406cd6a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x40 + lVar2 + -0x3c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 146cb2e9a FUN_146cb2e9a body=181 status=ok
// SIG undefined FUN_146cb2e9a(void)

longlong FUN_146cb2e9a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_146cb2f32;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146cb2f50(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_146cb2f32:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146cb2f50 FUN_146cb2f50 body=312 status=ok
// SIG undefined FUN_146cb2f50(void)

undefined4 * FUN_146cb2f50(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146cb18f4(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0x7fefffffffffffff;
  *(undefined8 *)(local_40 + 4) = 0x7fefffffffffffff;
  *(undefined8 *)(local_40 + 6) = 0x7fefffffffffffff;
  *(undefined8 *)(local_40 + 8) = 0xffefffffffffffff;
  *(undefined8 *)(local_40 + 10) = 0xffefffffffffffff;
  *(undefined8 *)(local_40 + 0xc) = 0xffefffffffffffff;
  local_40[0xe] = 0xffffffff;
  cVar1 = FUN_146cb19da(param_1,param_3,local_40,local_48);
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
      local_40[0xf] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0xe] =
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
      FUN_146cb1aea(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb308a FUN_146cb308a body=325 status=ok
// SIG undefined FUN_146cb308a(void)

void FUN_146cb308a(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  
  if (DAT_14c75ef9c == 0) {
    uVar4 = *(uint *)(param_2 + 1);
    if ((longlong)(int)uVar4 != 0) {
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + uVar4;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar5) < uVar4) {
        FUN_1446f48e2(param_1,iVar5);
      }
      memcpy((void *)((longlong)iVar5 * 4 + *param_1),(void *)*param_2,(longlong)(int)uVar4 << 2);
      return;
    }
  }
  else if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (uint *)*param_2;
    puVar1 = puVar9 + *(int *)(param_2 + 1);
    do {
      uVar4 = *puVar9;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar7 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar7 = param_4 + 7;
        }
        iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_4[9] - 1U & uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *param_4 + (longlong)iVar5 * 0x40;
            if (*(uint *)(*param_4 + (longlong)iVar5 * 0x40) == uVar4) goto LAB_146cb30d8;
            iVar5 = *(int *)(lVar6 + 0x38);
          } while (iVar5 != -1);
        }
      }
      lVar6 = 0;
LAB_146cb30d8:
      lVar8 = -3;
      do {
        dVar3 = *(double *)(lVar6 + 0x20 + lVar8 * 8);
        pdVar2 = (double *)(param_3 + 0x30 + lVar8 * 8);
        if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
           (dVar3 = *(double *)(param_3 + 0x18 + lVar8 * 8),
           pdVar2 = (double *)(lVar6 + 0x38 + lVar8 * 8), *pdVar2 <= dVar3 && dVar3 != *pdVar2))
        goto LAB_146cb3122;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(param_1,iVar5);
      }
      *(uint *)(*param_1 + (longlong)iVar5 * 4) = uVar4;
LAB_146cb3122:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



// FUNCTION 146cb31d8 FUN_146cb31d8 body=572 status=ok
// SIG undefined FUN_146cb31d8(void)

void FUN_146cb31d8(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  void **ppvVar19;
  ulonglong uVar20;
  longlong lVar21;
  void *_Src;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined1 local_58;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1[4];
  lVar14 = *param_1;
  lVar6 = param_1[1];
  lVar21 = (longlong)param_2;
  lVar18 = lVar21 * 0x10;
  lVar7 = lVar21 * 0x30;
  lVar8 = lVar21 * 0x50;
  *(undefined8 *)(lVar14 + 0x10 + lVar8) = *(undefined8 *)(lVar6 + 0x10 + lVar7);
  puVar1 = (undefined8 *)(lVar6 + lVar7);
  uVar12 = puVar1[1];
  puVar2 = (undefined8 *)(lVar14 + lVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  lVar14 = *param_1;
  lVar6 = param_1[1];
  *(undefined8 *)(lVar14 + 0x28 + lVar8) = *(undefined8 *)(lVar6 + 0x28 + lVar7);
  puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar7);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (undefined4 *)(lVar14 + 0x18 + lVar8);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  *(undefined4 *)(*param_1 + 0x30 + lVar8) = 0xffffffff;
  lVar14 = param_1[2];
  iVar13 = *(int *)(lVar14 + 8 + lVar18);
  if ((longlong)iVar13 < 6) {
    local_48 = (void *)0x0;
    _Src = *(void **)(lVar14 + lVar18);
    if (iVar13 != 0) goto LAB_146cb3291;
    local_40 = 0;
  }
  else {
    if ((*(int *)param_1[3] < *(int *)(lVar5 + 0x88)) && (iVar13 < *(int *)(param_1[5] + 8))) {
      lVar14 = lVar21 * 0x18 + param_1[6];
      uVar20 = 0;
      uVar16 = 0;
      iVar13 = 0;
      do {
        iVar17 = *(int *)(lVar14 + uVar20 * 4);
        iVar15 = *(int *)(lVar14 + 0xc + uVar20 * 4);
        if (iVar17 < iVar15) {
          iVar15 = iVar17;
        }
        if (iVar13 < iVar15) {
          uVar16 = uVar20 & 0xffffffff;
          iVar13 = iVar15;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != 3);
      iVar15 = (int)uVar16;
      *(int *)(*param_1 + 0x30 + lVar8) = iVar15;
      local_58 = *(undefined1 *)param_1[7];
      local_60 = *(int *)param_1[3] + 1;
      local_68 = iVar15;
      iVar13 = FUN_146ca06dc(lVar5,*param_1 + lVar8,*param_1 + lVar8 + 0x18,lVar18 + param_1[2]);
      iVar17 = 2;
      if (iVar15 == -1) {
        iVar17 = 8;
      }
      do {
        lVar5 = *param_1 + lVar21 * 0x50;
        iVar15 = *(int *)(lVar5 + 0x40);
        *(uint *)(lVar5 + 0x40) = iVar15 + 1U;
        if (*(uint *)(lVar5 + 0x44) < iVar15 + 1U) {
          FUN_1446f48e2((longlong *)(lVar5 + 0x38),iVar15);
        }
        *(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar15 * 4) = iVar13;
        iVar13 = iVar13 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      goto LAB_146cb3301;
    }
    _Src = *(void **)(lVar14 + lVar18);
LAB_146cb3291:
    local_40 = CONCAT44(local_40._4_4_,iVar13);
    local_48 = (void *)0x0;
    FUN_144a06ca8(&local_48,iVar13,0);
    memcpy(local_48,_Src,(longlong)iVar13 << 2);
  }
  ppvVar19 = (void **)(lVar18 + param_1[8]);
  if (ppvVar19 != &local_48) {
    if (*ppvVar19 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar19 = local_48;
    local_48 = (void *)0x0;
    *(undefined4 *)(ppvVar19 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)ppvVar19 + 0xc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146cb3301:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb341e FUN_146cb341e body=806 status=ok
// SIG undefined FUN_146cb341e(void)

void FUN_146cb341e(undefined8 *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  longlong lVar10;
  void **ppvVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  void *_Src;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined1 local_58;
  void *local_50;
  undefined8 local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar4 = (double *)*param_1;
  if ((param_2 & 1) == 0) {
    pdVar8 = (double *)param_1[1];
    pdVar12 = pdVar8;
    pdVar13 = pdVar4;
  }
  else {
    pdVar12 = pdVar4 + 3;
    pdVar8 = (double *)param_1[1];
    pdVar13 = pdVar8;
  }
  iVar7 = (int)param_2;
  if ((((uint)(param_2 >> 0x1f) & 1) + iVar7 >> 1 & 1) == 0) {
    dVar19 = pdVar4[1];
    dVar18 = pdVar8[1];
  }
  else {
    dVar18 = pdVar4[4];
    dVar19 = pdVar8[1];
  }
  dVar1 = *pdVar13;
  dVar2 = *pdVar12;
  if (iVar7 < 4) {
    dVar21 = pdVar4[2];
    dVar20 = pdVar8[2];
  }
  else {
    dVar20 = pdVar4[5];
    dVar21 = pdVar8[2];
  }
  lVar5 = param_1[5];
  lVar17 = *(longlong *)param_1[2];
  lVar15 = (longlong)iVar7;
  lVar10 = lVar15 * 0x10;
  lVar6 = lVar15 * 0x50;
  *(double *)(lVar17 + lVar6) = dVar1;
  *(double *)(lVar17 + 8 + lVar6) = dVar19;
  *(double *)(lVar17 + 0x10 + lVar6) = dVar21;
  lVar17 = *(longlong *)param_1[2];
  *(double *)(lVar17 + 0x18 + lVar6) = dVar2;
  *(double *)(lVar17 + 0x20 + lVar6) = dVar18;
  *(double *)(lVar17 + 0x28 + lVar6) = dVar20;
  *(undefined4 *)(*(longlong *)param_1[2] + 0x30 + lVar6) = 0xffffffff;
  lVar17 = *(longlong *)param_1[3];
  uVar3 = *(uint *)(lVar17 + 8 + lVar10);
  if ((longlong)(int)uVar3 < 6) {
    local_50 = (void *)0x0;
    _Src = *(void **)(lVar17 + lVar10);
    if (uVar3 != 0) goto LAB_146cb353f;
    local_48 = 0.0;
  }
  else {
    if ((*(int *)param_1[4] < *(int *)(lVar5 + 0x88)) && ((int)uVar3 < *(int *)(param_1[6] + 8))) {
      local_40 = dVar20 - dVar21;
      local_48 = dVar18 - dVar19;
      local_50 = (void *)(dVar2 - dVar1);
      iVar7 = -1;
      if ((local_40 <= (double)local_50) || (lVar17 = 2, local_40 <= local_48)) {
        if (local_48 <= (double)local_50) {
          lVar17 = 0;
          iVar7 = 2;
        }
        else {
          lVar17 = 1;
        }
      }
      iVar16 = (int)lVar17;
      uVar14 = 0;
      if (iVar16 + 1U != 3) {
        uVar14 = (ulonglong)(iVar16 + 1U);
      }
      if ((((double)(&local_50)[lVar17] < (double)(&local_50)[uVar14] * 1.25) &&
          ((double)(&local_50)[lVar17] < (double)(&local_50)[(uint)(iVar7 + iVar16)] * 1.25)) &&
         (0x14 < uVar3)) {
        iVar16 = -1;
      }
      *(int *)(*(longlong *)param_1[2] + 0x30 + lVar6) = iVar16;
      local_60 = *(int *)param_1[4] + 1;
      local_58 = 1;
      local_68 = iVar16;
      iVar7 = FUN_146ca06dc(lVar5,*(longlong *)param_1[2] + lVar6,
                            *(longlong *)param_1[2] + lVar6 + 0x18,lVar10 + *(longlong *)param_1[3])
      ;
      iVar9 = 2;
      if (iVar16 == -1) {
        iVar9 = 8;
      }
      do {
        lVar5 = *(longlong *)param_1[2] + lVar15 * 0x50;
        iVar16 = *(int *)(lVar5 + 0x40);
        *(uint *)(lVar5 + 0x40) = iVar16 + 1U;
        if (*(uint *)(lVar5 + 0x44) < iVar16 + 1U) {
          FUN_1446f48e2((longlong *)(lVar5 + 0x38),iVar16);
        }
        *(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar16 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      goto LAB_146cb35b2;
    }
    _Src = *(void **)(lVar17 + lVar10);
LAB_146cb353f:
    local_48 = (double)CONCAT44(local_48._4_4_,uVar3);
    local_50 = (void *)0x0;
    FUN_144a06ca8(&local_50,uVar3,0);
    memcpy(local_50,_Src,(longlong)(int)uVar3 << 2);
  }
  ppvVar11 = (void **)(lVar10 + *(longlong *)param_1[7]);
  if (ppvVar11 != &local_50) {
    if (*ppvVar11 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar11 = local_50;
    local_50 = (void *)0x0;
    *(undefined4 *)(ppvVar11 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)ppvVar11 + 0xc) = local_48._4_4_;
    local_48 = 0.0;
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146cb35b2:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cb3746 FUN_146cb3746 body=226 status=ok
// SIG undefined FUN_146cb3746(void)

void FUN_146cb3746(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (uint *)*param_2;
    puVar1 = puVar9 + *(int *)(param_2 + 1);
    do {
      uVar4 = *puVar9;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar7 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar7 = param_4 + 7;
        }
        iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_4[9] - 1U & uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *param_4 + (longlong)iVar5 * 0x40;
            if (*(uint *)(*param_4 + (longlong)iVar5 * 0x40) == uVar4) goto LAB_146cb3784;
            iVar5 = *(int *)(lVar6 + 0x38);
          } while (iVar5 != -1);
        }
      }
      lVar6 = 0;
LAB_146cb3784:
      lVar8 = -3;
      do {
        dVar3 = *(double *)(lVar6 + 0x20 + lVar8 * 8);
        pdVar2 = (double *)(param_3 + 0x30 + lVar8 * 8);
        if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
           (dVar3 = *(double *)(param_3 + 0x18 + lVar8 * 8),
           pdVar2 = (double *)(lVar6 + 0x38 + lVar8 * 8), *pdVar2 <= dVar3 && dVar3 != *pdVar2))
        goto LAB_146cb37ce;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(param_1,iVar5);
      }
      *(uint *)(*param_1 + (longlong)iVar5 * 4) = uVar4;
LAB_146cb37ce:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



// FUNCTION 146cb3828 FUN_146cb3828 body=206 status=ok
// SIG undefined FUN_146cb3828(void)

longlong * FUN_146cb3828(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  FUN_146cb38f8(param_2,local_2c,1);
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_146cb3aa8(param_1,*param_2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb38f8 FUN_146cb38f8 body=134 status=ok
// SIG undefined FUN_146cb38f8(void)

void FUN_146cb38f8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146cb3980(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146cb3a06(param_1);
    return;
  }
  return;
}



// FUNCTION 146cb3980 FUN_146cb3980 body=132 status=ok
// SIG undefined FUN_146cb3980(void)

void FUN_146cb3980(longlong param_1,int param_2)

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



// FUNCTION 146cb3a06 FUN_146cb3a06 body=63 status=ok
// SIG undefined FUN_146cb3a06(void)

void FUN_146cb3a06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb3a46(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146cb3a46 FUN_146cb3a46 body=97 status=ok
// SIG undefined FUN_146cb3a46(void)

ulonglong FUN_146cb3a46(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cb3aa8 FUN_146cb3aa8 body=956 status=ok
// SIG undefined FUN_146cb3aa8(void)

void FUN_146cb3aa8(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146cb3c9a;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar10 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18) == local_58) goto LAB_146cb3c81;
            iVar10 = *(int *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      FUN_146cb3e66(param_1,param_2);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cb3c9a;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar10 = (int)plVar9[1];
    uVar5 = iVar6 - iVar10;
    if (uVar5 != 0 && iVar10 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar10) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar10 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146cb3dba;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar10 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar10) {
      uVar4 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        FUN_146cb3e66(param_1,param_2);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146cb3c9a;
    }
  }
LAB_146cb3dba:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cb3c9a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146cb3c81:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146cb3cf6;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146cb3cf6:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146cb3c9a;
}



// FUNCTION 146cb3e66 FUN_146cb3e66 body=93 status=ok
// SIG undefined FUN_146cb3e66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cb3e66(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *_DAT_000001e8 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = puVar1;
      puVar2 = puVar1;
    }
  }
  FUN_146cafe06(puVar2,param_1);
  return;
}



// FUNCTION 146cb3ec4 FUN_146cb3ec4 body=571 status=ok
// SIG undefined FUN_146cb3ec4(void)

void FUN_146cb3ec4(double *param_1,double *param_2,double *param_3,double *param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  param_1[5] = param_3[2];
  dVar1 = param_3[1];
  param_1[3] = *param_3;
  param_1[4] = dVar1;
  param_1[6] = *param_4;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  dVar1 = param_1[3];
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (((((dVar1 != -1.79769313486232e+308) || (NAN(dVar1))) ||
       (param_1[4] != -1.79769313486232e+308)) ||
      ((((NAN(param_1[4]) || (param_1[5] != -1.79769313486232e+308)) ||
        ((NAN(param_1[5]) || ((*param_1 != 1.79769313486232e+308 || (NAN(*param_1))))))) ||
       (param_1[1] != 1.79769313486232e+308)))) ||
     (((NAN(param_1[1]) || (param_1[2] != 1.79769313486232e+308)) || (NAN(param_1[2]))))) {
    lVar4 = 0;
    do {
      if (param_1[lVar4 + 3] < param_1[lVar4]) goto LAB_146cb3fa9;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    dVar7 = param_1[5];
    dVar10 = param_1[2];
    dVar8 = param_1[4];
    dVar2 = *param_1;
    uVar14 = SUB84(dVar2,0);
    uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar11 = param_1[1];
    uVar12 = SUB84(dVar11,0);
    uVar13 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar9 = (dVar7 - dVar10) / (double)*(int *)(param_1 + 7);
    dVar11 = (dVar8 - dVar11) / (double)*(int *)((longlong)param_1 + 0x34);
    dVar1 = (dVar1 - dVar2) / (double)*(int *)(param_1 + 6);
    param_1[8] = dVar1;
    param_1[9] = dVar11;
    param_1[10] = dVar9;
  }
  else {
LAB_146cb3fa9:
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    uVar5 = 0;
    uVar6 = 0;
    dVar10 = 0.0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    dVar1 = 0.0;
    dVar11 = 0.0;
    dVar9 = 0.0;
  }
  if (param_5 != 0) {
    dVar2 = (double)param_5;
    *param_1 = (double)CONCAT44(uVar15,uVar14) - dVar1 * dVar2;
    param_1[1] = (double)CONCAT44(uVar13,uVar12) - dVar11 * dVar2;
    param_1[2] = dVar10 - dVar9 * dVar2;
    param_1[3] = (double)CONCAT44(uVar6,uVar5) + dVar1 * dVar2;
    param_1[4] = dVar8 + dVar11 * dVar2;
    iVar3 = (int)(dVar2 + dVar2);
    param_1[5] = dVar7 + dVar9 * dVar2;
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + iVar3;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + iVar3;
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + iVar3;
  }
  return;
}



// FUNCTION 146cb4100 FUN_146cb4100 body=63 status=ok
// SIG undefined FUN_146cb4100(void)

void FUN_146cb4100(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb4140(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146cb4140 FUN_146cb4140 body=97 status=ok
// SIG undefined FUN_146cb4140(void)

ulonglong FUN_146cb4140(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cb41a2 FUN_146cb41a2 body=226 status=ok
// SIG undefined FUN_146cb41a2(void)

void FUN_146cb41a2(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (uint *)*param_2;
    puVar1 = puVar9 + *(int *)(param_2 + 1);
    do {
      uVar4 = *puVar9;
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar7 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar7 = param_4 + 7;
        }
        iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_4[9] - 1U & uVar4) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *param_4 + (longlong)iVar5 * 0x40;
            if (*(uint *)(*param_4 + (longlong)iVar5 * 0x40) == uVar4) goto LAB_146cb41e0;
            iVar5 = *(int *)(lVar6 + 0x38);
          } while (iVar5 != -1);
        }
      }
      lVar6 = 0;
LAB_146cb41e0:
      lVar8 = -3;
      do {
        dVar3 = *(double *)(lVar6 + 0x20 + lVar8 * 8);
        pdVar2 = (double *)(param_3 + 0x30 + lVar8 * 8);
        if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
           (dVar3 = *(double *)(param_3 + 0x18 + lVar8 * 8),
           pdVar2 = (double *)(lVar6 + 0x38 + lVar8 * 8), *pdVar2 <= dVar3 && dVar3 != *pdVar2))
        goto LAB_146cb422a;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(param_1,iVar5);
      }
      *(uint *)(*param_1 + (longlong)iVar5 * 4) = uVar4;
LAB_146cb422a:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



// FUNCTION 146cb4284 FUN_146cb4284 body=63 status=ok
// SIG undefined FUN_146cb4284(void)

void FUN_146cb4284(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb42c4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 146cb42c4 FUN_146cb42c4 body=97 status=ok
// SIG undefined FUN_146cb42c4(void)

ulonglong FUN_146cb42c4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,2);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146cb4326 FUN_146cb4326 body=63 status=ok
// SIG undefined FUN_146cb4326(void)

void FUN_146cb4326(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb4366(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,6,2);
  }
  return;
}



// FUNCTION 146cb4366 FUN_146cb4366 body=115 status=ok
// SIG undefined FUN_146cb4366(void)

ulonglong FUN_146cb4366(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 6) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 6,2);
      uVar1 = uVar1 / 6;
    }
  }
  return uVar1;
}



// FUNCTION 146cb43da FUN_146cb43da body=63 status=ok
// SIG undefined FUN_146cb43da(void)

void FUN_146cb43da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb441a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146cb441a FUN_146cb441a body=95 status=ok
// SIG undefined FUN_146cb441a(void)

ulonglong FUN_146cb441a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146cb447a FUN_146cb447a body=63 status=ok
// SIG undefined FUN_146cb447a(void)

void FUN_146cb447a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb44ba(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146cb44ba FUN_146cb44ba body=95 status=ok
// SIG undefined FUN_146cb44ba(void)

ulonglong FUN_146cb44ba(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146cb451a FUN_146cb451a body=63 status=ok
// SIG undefined FUN_146cb451a(void)

void FUN_146cb451a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb455a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,2);
  }
  return;
}



// FUNCTION 146cb455a FUN_146cb455a body=97 status=ok
// SIG undefined FUN_146cb455a(void)

ulonglong FUN_146cb455a(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,2);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146cb45bc FUN_146cb45bc body=38 status=ok
// SIG undefined FUN_146cb45bc(void)

undefined8 FUN_146cb45bc(undefined8 param_1,int param_2)

{
  FUN_140191d2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cb45e2 FUN_146cb45e2 body=89 status=ok
// SIG undefined FUN_146cb45e2(void)

undefined8 * FUN_146cb45e2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cb467e FUN_146cb467e body=87 status=ok
// SIG undefined FUN_146cb467e(void)

void FUN_146cb467e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x18 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar1 * 0x18);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146cb46dc FUN_146cb46dc body=47 status=ok
// SIG undefined FUN_146cb46dc(void)

longlong FUN_146cb46dc(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cb470c FUN_146cb470c body=368 status=ok
// SIG undefined FUN_146cb470c(void)

longlong * FUN_146cb470c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140268ec4(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_141724e7a(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_140268ec4(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146cb487e(param_2);
        FUN_141724e7a(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cb487e FUN_146cb487e body=68 status=ok
// SIG undefined FUN_146cb487e(void)

longlong FUN_146cb487e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14026a4e8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_144a0693a(lVar2,1);
  return lVar2;
}



// FUNCTION 146cb48c2 FUN_146cb48c2 body=132 status=ok
// SIG undefined FUN_146cb48c2(void)

void FUN_146cb48c2(longlong param_1,int param_2)

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



// FUNCTION 146cb4948 FUN_146cb4948 body=114 status=ok
// SIG undefined FUN_146cb4948(void)

void FUN_146cb4948(longlong *param_1,int param_2)

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



// FUNCTION 146cb49ba FUN_146cb49ba body=132 status=ok
// SIG undefined FUN_146cb49ba(void)

void FUN_146cb49ba(longlong param_1,int param_2)

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



// FUNCTION 146cb4a4a FUN_146cb4a4a body=243 status=ok
// SIG undefined FUN_146cb4a4a(void)

longlong FUN_146cb4a4a(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = FUN_146cb4b3e(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_146ce5c6e((longlong *)(param_1 + 0x40),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = lVar3;
  FUN_1407fc8b2(*param_4,param_4 + 1,lVar3);
  if (param_5 != (undefined8 *)0x0) {
    FUN_1407fc8b2(*param_5,param_5 + 1,lVar3);
  }
  *(longlong **)(lVar3 + 0x108) = param_4;
  *(undefined8 **)(lVar3 + 0x110) = param_5;
  puVar5 = (undefined8 *)(lVar3 + 0x18);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined8 *)(lVar3 + 0x78);
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(longlong *)(lVar3 + 8) = param_1;
  uVar2 = 0;
  if ((param_4 != (longlong *)0x0) && (uVar2 = 0, 1 < *(byte *)((longlong)param_4 + 0xc))) {
    uVar2 = *(undefined1 *)
             (*(longlong *)(*param_4 + 0x2c0) + 0xd + (longlong)(int)param_4[1] * 0x10);
  }
  *(undefined1 *)(lVar3 + 0x118) = uVar2;
  return lVar3;
}



// FUNCTION 146cb4b3e FUN_146cb4b3e body=258 status=ok
// SIG undefined FUN_146cb4b3e(void)

longlong FUN_146cb4b3e(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[3] == 0) {
    lVar8 = FUN_146ce597c(param_1);
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (*(int *)((longlong)puVar2 + 0x14) == 0) {
      lVar8 = -1;
      if (0 < (longlong)(int)param_1[1]) {
        piVar9 = (int *)((longlong)puVar2 + 0x14);
        iVar11 = 0x7fffffff;
        uVar10 = 0xffffffff;
        uVar12 = 0;
        do {
          iVar1 = *piVar9;
          if (0 < iVar1 && iVar1 < iVar11) {
            uVar10 = uVar12 & 0xffffffff;
            iVar11 = iVar1;
          }
          uVar12 = uVar12 + 1;
          piVar9 = piVar9 + 8;
        } while ((longlong)(int)param_1[1] != uVar12);
        lVar8 = (longlong)(int)uVar10;
      }
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      local_38 = puVar2[2];
      uStack_30 = puVar2[3];
      uVar5 = puVar2[lVar8 * 4];
      uVar6 = (puVar2 + lVar8 * 4)[1];
      uVar7 = (puVar2 + lVar8 * 4 + 2)[1];
      puVar2[2] = puVar2[lVar8 * 4 + 2];
      puVar2[3] = uVar7;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      local_48._0_4_ = (undefined4)uVar3;
      local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar4;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar2[lVar8 * 4 + 2] = local_38;
      (puVar2 + lVar8 * 4 + 2)[1] = uStack_30;
      puVar2 = puVar2 + lVar8 * 4;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
      local_48 = uVar3;
      uStack_40 = uVar4;
    }
    lVar8 = *param_1;
  }
  lVar8 = FUN_146ce5a9a(lVar8);
  FUN_146ce5b00(lVar8);
  *(byte *)(lVar8 + 0x124) = *(byte *)(lVar8 + 0x124) | 1;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 146cb4c42 FUN_146cb4c42 body=73 status=ok
// SIG undefined FUN_146cb4c42(void)

undefined8 * FUN_146cb4c42(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f49700;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146cb4c96 FUN_146cb4c96 body=93 status=ok
// SIG undefined FUN_146cb4c96(void)

undefined8 FUN_146cb4c96(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(char *)(param_1 + 0x118) == '\0') &&
      (plVar1 = *(longlong **)(param_1 + 0x108), plVar1 != (longlong *)0x0)) &&
     (1 < *(byte *)((longlong)plVar1 + 0xc))) {
    lVar2 = *(longlong *)(*plVar1 + 0x2c0);
    lVar3 = (longlong)(int)plVar1[1] * 0x10;
    if (((*(char *)(lVar2 + 0xd + lVar3) == '\0') && (*(char *)(lVar2 + 0xb + lVar3) == '\x04')) &&
       (lVar2 = *(longlong *)(*plVar1 + 0x3c8),
       0.0 < *(double *)(lVar2 + (longlong)(int)plVar1[1] * 8))) {
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 146cb4d0c FUN_146cb4d0c body=186 status=ok
// SIG undefined FUN_146cb4d0c(void)

void FUN_146cb4d0c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != param_2) {
    if (plVar1 != (longlong *)0x0) {
      local_30 = param_1;
      FUN_14081b998((longlong)(int)plVar1[1] * 0x10 + *(longlong *)(*plVar1 + 0x1b8),&local_30,
                    CONCAT71((int7)((ulonglong)*plVar1 >> 8),1));
    }
    *(longlong **)(param_1 + 0x110) = param_2;
    if (param_2 != (longlong *)0x0) {
      FUN_1407fc8b2(*param_2,param_2 + 1,param_1);
    }
    FUN_146cc33b8(param_1,&local_30);
    *(undefined8 *)(param_1 + 0x100) = local_20;
    *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_30;
    *(undefined4 *)(param_1 + 0xf4) = local_30._4_4_;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
    *(undefined1 *)(param_1 + 0x11a) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb4dc8 FUN_146cb4dc8 body=109 status=ok
// SIG undefined FUN_146cb4dc8(void)

void FUN_146cb4dc8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ce5dee(param_1,iVar1);
    }
    FUN_146ce5dc4((longlong)iVar1 * 0x160 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146ce5f18(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cb4e36 FUN_146cb4e36 body=123 status=ok
// SIG undefined FUN_146cb4e36(void)

void FUN_146cb4e36(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_144b02266(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x48));
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x48);
  if (lVar5 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_146ce5c6e((longlong *)(param_1 + 0x18),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar3;
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146cb4ec2 FUN_146cb4ec2 body=117 status=ok
// SIG undefined FUN_146cb4ec2(void)

void FUN_146cb4ec2(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x30)) {
    FUN_146cb4dc8(param_1 + 0x28);
  }
  iVar3 = param_4 - param_3;
  if (iVar3 != 0 && param_3 <= param_4) {
    lVar2 = (longlong)param_3;
    lVar4 = lVar2 * 0x160;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar2 * 8);
      FUN_146cb4f38(*(longlong *)(param_1 + 0x28) + lVar4,param_2,lVar1 + 0x18,lVar1 + 0x78);
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x160;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146cb4f38 FUN_146cb4f38 body=6021 status=ok
// SIG undefined FUN_146cb4f38(void)

void FUN_146cb4f38(longlong *param_1,double param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
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
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 *puVar18;
  longlong lVar19;
  code *pcVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 local_360;
  double local_358;
  double local_350;
  undefined8 local_348;
  double local_340;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined1 local_308 [16];
  undefined8 local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  *(undefined4 *)(param_1 + 7) = DAT_14c846338;
  param_1[6] = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_14c846338;
  *(longlong *)((longlong)param_1 + 0x3c) = DAT_14c846330;
  param_1[9] = 0;
  lVar4 = *param_1;
  local_2a8 = *(double *)(lVar4 + 0xf8);
  local_2b0 = *(double *)(lVar4 + 0x100);
  dVar1 = *(double *)(lVar4 + 0x108);
  local_2a0 = *(double *)(lVar4 + 0x110);
  local_298 = *(double *)(lVar4 + 0x118);
  local_290 = *(double *)(lVar4 + 0x120);
  dVar8 = *(double *)(lVar4 + 0xa0);
  dVar30 = *(double *)(lVar4 + 0xa8);
  local_188 = *(double *)(lVar4 + 0xc0);
  dStack_180 = *(double *)(lVar4 + 200);
  local_178 = *(double *)(lVar4 + 0xd0);
  dStack_170 = *(double *)(lVar4 + 0xd8);
  dVar2 = param_3[3];
  dVar15 = dVar1 - dVar2 * param_3[2];
  dVar14 = local_2b0 - dVar2 * param_3[1];
  dVar13 = local_2a8 - dVar2 * *param_3;
  dVar2 = param_4[7];
  dVar32 = dVar1 - param_3[2] * dVar2;
  dVar33 = local_2b0 - param_3[1] * dVar2;
  dVar12 = local_2a8 - *param_3 * dVar2;
  dVar2 = *(double *)(lVar4 + 0xb0) * -1.0;
  dVar5 = *(double *)(lVar4 + 0xb8) * 1.0;
  dVar31 = (dVar5 * dStack_180 + (dVar2 * local_188 * -1.0 - dStack_170 * dVar30)) -
           dVar8 * local_178 * 1.0;
  dVar6 = dVar2 * local_178 * -1.0 +
          dVar30 * dStack_180 + (dVar5 * dStack_170 - local_188 * dVar8 * -1.0);
  local_1a8._8_4_ = SUB84(dVar31,0);
  local_1a8._0_8_ =
       (dVar2 * dStack_180 + (dVar5 * local_188 * 1.0 - dStack_170 * dVar8)) -
       dVar30 * local_178 * -1.0;
  local_1a8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  local_198._8_4_ = SUB84(dVar6,0);
  local_198._0_8_ =
       dVar5 * local_178 * 1.0 +
       dVar8 * dStack_180 + (dVar2 * dStack_170 - local_188 * dVar30 * 1.0);
  local_198._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_240 = param_2;
  FUN_14093ab46(local_1a8,&local_168);
  local_258 = local_158;
  local_260 = local_168;
  local_250 = local_160;
  local_270 = *param_3;
  local_268 = param_3[1];
  local_278 = param_3[2];
  local_308._0_8_ = dVar15;
  local_2b8 = dVar15 - dVar32;
  dVar36 = dVar14 - dVar33;
  local_30c = *(float *)(param_1 + 2) * *(float *)(param_1 + 1) * *(float *)(*param_1 + 0x134);
  dVar2 = *param_4;
  dVar5 = param_4[1];
  dVar8 = 0.0;
  local_358 = param_4[2];
  local_1b8._8_8_ = DAT_14c8463e8;
  local_1b8._0_8_ = DAT_14c8463e0;
  local_1c8._8_8_ = DAT_14c8463d8;
  local_1c8._0_8_ = DAT_14c8463d0;
  dVar34 = dVar13 - dVar12;
  dVar6 = (local_290 - dVar1) + local_2b8;
  dVar30 = (local_298 - local_2b0) + dVar36;
  dVar31 = (local_2a0 - local_2a8) + dVar34;
  lVar4 = param_1[3];
  local_248 = dVar1;
  if (lVar4 == 0) {
    fVar24 = 0.0;
    fVar21 = 1.0;
    local_218 = ZEXT816(0x3ff0000000000000);
    local_238 = ZEXT816(0x3ff0000000000000);
    local_228 = ZEXT816(0x3ff0000000000000);
    local_308._0_4_ = 0x3f800000;
    local_360._4_4_ = (undefined4)((ulonglong)dVar13 >> 0x20);
    local_360 = (double)CONCAT44(local_360._4_4_,0x3f800000);
    local_328 = 1.0;
    fVar25 = 0.0;
    local_2f0 = (double)((ulonglong)local_2f0._4_4_ << 0x20);
    local_310 = 0.0;
    local_320 = 0.0;
    local_348 = (double)((ulonglong)dVar14 & 0xffffffff00000000);
    local_314 = 0.0;
    local_368 = (double)((ulonglong)local_368._4_4_ << 0x20);
    local_334 = 0.0;
    local_350 = (double)((ulonglong)dVar32 & 0xffffffff00000000);
    local_330 = 0.0;
    local_2e8 = (double)((ulonglong)dVar33 & 0xffffffff00000000);
    local_32c = 0.0;
    local_318 = 0.0;
    local_324 = 0.0;
    auVar17._12_4_ = 0;
    auVar17._0_12_ = local_2c8._4_12_;
    local_2c8 = auVar17 << 0x20;
    local_31c = 0.0;
  }
  else {
    dVar1 = *(double *)(lVar4 + 0xf8);
    dVar3 = *(double *)(lVar4 + 0x100);
    local_350 = *(double *)(lVar4 + 0x108);
    local_2f0 = *(double *)(lVar4 + 0x110);
    dVar35 = *(double *)(lVar4 + 0xa0);
    dVar16 = *(double *)(lVar4 + 0xa8);
    local_1e8 = *(double *)(lVar4 + 0xc0);
    dStack_1e0 = *(double *)(lVar4 + 200);
    local_1d8 = *(double *)(lVar4 + 0xd0);
    dStack_1d0 = *(double *)(lVar4 + 0xd8);
    dVar8 = *(double *)(lVar4 + 0xb0) * -1.0;
    dVar10 = *(double *)(lVar4 + 0xb8) * 1.0;
    dVar9 = (dVar8 * dStack_1e0 + (dVar10 * local_1e8 * 1.0 - dStack_1d0 * dVar35)) -
            dVar16 * local_1d8 * -1.0;
    dVar11 = (dVar10 * dStack_1e0 + (dVar8 * local_1e8 * -1.0 - dStack_1d0 * dVar16)) -
             dVar35 * local_1d8 * 1.0;
    uVar26 = SUB84(dVar11,0);
    uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar7 = dVar10 * local_1d8 * 1.0 +
            dVar35 * dStack_1e0 + (dVar8 * dStack_1d0 - local_1e8 * dVar16 * 1.0);
    dVar8 = dVar8 * local_1d8 * -1.0 +
            dVar16 * dStack_1e0 + (dVar10 * dStack_1d0 - local_1e8 * dVar35 * -1.0);
    uVar22 = SUB84(dVar8,0);
    uVar23 = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar15 = dVar15 - local_350;
    dVar32 = dVar32 - local_350;
    local_350 = *(double *)(lVar4 + 0x120) - local_350;
    dVar10 = dVar14 - dVar3;
    local_360 = dVar13 - dVar1;
    local_2e0 = dVar33 - dVar3;
    dVar12 = dVar12 - dVar1;
    local_368 = *(double *)(lVar4 + 0x118) - dVar3;
    dVar3 = dVar9 * local_2e0 - dVar12 * dVar11;
    dVar35 = dVar7 * dVar12 - dVar32 * dVar9;
    dVar13 = dVar11 * dVar32 - local_2e0 * dVar7;
    dVar35 = dVar35 + dVar35;
    dVar13 = dVar13 + dVar13;
    dVar3 = dVar3 + dVar3;
    dVar32 = ((dVar9 * dVar35 - dVar13 * dVar11) + dVar8 * dVar3 + dVar32 + local_350) - dVar32;
    local_2e0 = ((dVar7 * dVar13 - dVar3 * dVar9) + dVar8 * dVar35 + local_2e0 + local_368) -
                local_2e0;
    dVar12 = ((dVar11 * dVar3 - dVar35 * dVar7) + dVar8 * dVar13 + dVar12 + (local_2f0 - dVar1)) -
             dVar12;
    dVar1 = dVar9 * dVar10 - local_360 * dVar11;
    dVar13 = dVar7 * local_360 - dVar15 * dVar9;
    dVar35 = dVar11 * dVar15 - dVar10 * dVar7;
    dVar1 = dVar1 + dVar1;
    dVar13 = dVar13 + dVar13;
    dVar35 = dVar35 + dVar35;
    dVar3 = (dVar9 * dVar13 - dVar35 * dVar11) + dVar8 * dVar1 + dVar15;
    local_308._8_4_ = uVar22;
    local_308._0_8_ = (dVar7 * dVar35 - dVar1 * dVar9) + dVar8 * dVar13 + dVar10;
    local_308._12_4_ = uVar23;
    dVar10 = (dVar11 * dVar1 - dVar13 * dVar7) + dVar8 * dVar35 + local_360;
    dVar15 = dVar9 * dVar5 - dVar2 * dVar11;
    dVar1 = dVar7 * dVar2 - local_358 * dVar9;
    dVar1 = dVar1 + dVar1;
    dVar35 = dVar11 * local_358 - dVar5 * dVar7;
    dVar15 = dVar15 + dVar15;
    local_1c8._8_4_ = uVar26;
    local_1c8._0_8_ = dVar9;
    local_1c8._12_4_ = uVar27;
    dVar35 = dVar35 + dVar35;
    dVar13 = (dVar9 * dVar1 - dVar35 * dVar11) + dVar8 * dVar15 + local_358;
    local_1b8._8_4_ = uVar22;
    local_1b8._0_8_ = dVar7;
    local_1b8._12_4_ = uVar23;
    dVar9 = (dVar7 * dVar35 - dVar15 * dVar9) + dVar8 * dVar1 + dVar5;
    dVar2 = (dVar11 * dVar15 - dVar1 * dVar7) + dVar8 * dVar35 + dVar2;
    local_2c8._0_4_ = *(float *)(param_1 + 4) * *(float *)(param_1 + 5) * *(float *)(lVar4 + 0x134);
    local_2c8._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_2c8._8_8_ = 0;
    local_340 = (double)(float)local_2c8._0_4_ + (double)local_30c;
    fVar24 = *(float *)(param_1 + 5) * *(float *)((longlong)param_1 + 0x24);
    local_200 = (double)(*(float *)(lVar4 + 0x128) * fVar24);
    local_1f8 = (double)(*(float *)(lVar4 + 300) * fVar24);
    local_1f0 = (double)(fVar24 * *(float *)(lVar4 + 0x130));
    local_238._8_4_ = uVar26;
    local_238._0_8_ = dVar12;
    local_238._12_4_ = uVar27;
    local_2d8 = dVar31 - dVar12;
    local_218._8_4_ = uVar22;
    local_218._0_8_ = local_2e0;
    local_218._12_4_ = uVar23;
    local_2e0 = dVar30 - local_2e0;
    local_228._8_4_ = uVar26;
    local_228._0_8_ = dVar32;
    local_228._12_4_ = uVar27;
    local_2d0 = dVar6 - dVar32;
    local_348 = dVar14;
    local_2e8 = dVar33;
    local_288 = dVar34;
    local_280 = dVar36;
    FUN_140933eae(&local_168);
    dVar1 = dVar10 * dVar9 - dVar2 * (double)local_308._0_8_;
    dVar15 = dVar3 * dVar2 - dVar13 * dVar10;
    dVar5 = (double)local_308._0_8_ * dVar13 - dVar9 * dVar3;
    local_324 = (float)local_168;
    local_318 = (float)local_158;
    local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)local_148);
    local_350 = (double)CONCAT44(local_350._4_4_,(float)local_138);
    local_368._4_4_ = (uint)((ulonglong)local_128 >> 0x20);
    local_368 = (double)CONCAT44(local_368._4_4_,(float)local_128);
    local_32c = (float)local_150;
    local_348 = (double)CONCAT44((int)((ulonglong)local_148 >> 0x20),(float)local_118);
    local_31c = (float)(1.0 / ((local_118 * dVar1 + local_128 * dVar5 + dVar15 * local_120) * dVar1
                               + (local_158 * dVar1 + local_168 * dVar5 + dVar15 * local_160) *
                                 dVar5 + (local_138 * dVar1 + local_148 * dVar5 + dVar15 * local_140
                                         ) * dVar15 + local_340));
    fVar25 = (float)local_160;
    local_330 = (float)local_140;
    local_314 = (float)local_120;
    local_360._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
    local_360 = (double)CONCAT44(local_360._4_4_,(float)dVar3);
    fVar24 = (float)(double)local_308._0_8_;
    local_308._0_4_ = fVar24;
    fVar21 = (float)dVar10;
    local_334 = (float)local_130;
    local_320 = (float)local_110;
    local_310 = (float)local_108;
    local_2f0 = (double)CONCAT44(local_2f0._4_4_,(float)local_100);
    fVar24 = (float)local_f8;
    local_328 = (float)local_f0;
    dVar30 = local_2e0;
    dVar34 = local_288;
    dVar36 = local_280;
    dVar6 = local_2d0;
    dVar31 = local_2d8;
    local_358 = dVar13;
    dVar5 = dVar9;
  }
  dVar1 = dVar6 * local_358 + dVar31 * dVar2 + dVar5 * dVar30;
  dVar15 = local_2b8;
  if (dVar1 < 0.0) {
    dVar15 = param_3[9];
    uVar22 = SUB84(dVar15,0);
    uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (1.0 <= dVar15) {
      uVar22 = 0;
      uVar23 = 0x3ff00000;
    }
    if ((double)CONCAT44(uVar23,uVar22) <= 0.0) {
      uVar22 = 0;
      uVar23 = 0;
    }
    dVar15 = (double)CONCAT44(uVar23,uVar22) * -dVar1;
    dVar34 = dVar34 + dVar2 * dVar15;
    dVar36 = dVar36 + dVar5 * dVar15;
    dVar31 = dVar31 + dVar2 * dVar15;
    dVar30 = dVar30 + dVar5 * dVar15;
    dVar6 = dVar6 + dVar15 * local_358;
    dVar15 = local_2b8 + dVar15 * local_358;
  }
  puVar18 = &LAB_146cb6960;
  if (0.0 <= dVar15 * local_358 + dVar34 * dVar2 + dVar5 * dVar36) {
    puVar18 = &DAT_146cb6a66;
  }
  if (0.0 <= dVar1) {
    puVar18 = &DAT_146cb6a66;
  }
  param_1[0x2b] = (longlong)puVar18;
  *(float *)(param_1 + 0x25) = local_30c;
  *(undefined4 *)(param_1 + 0x26) = local_2c8._0_4_;
  *(float *)(param_1 + 0x12) = local_324;
  *(float *)((longlong)param_1 + 0x94) = fVar25;
  *(float *)(param_1 + 0x13) = local_318;
  *(float *)((longlong)param_1 + 0x9c) = local_32c;
  *(undefined4 *)(param_1 + 0x14) = local_2e8._0_4_;
  *(float *)((longlong)param_1 + 0xa4) = local_330;
  *(undefined4 *)(param_1 + 0x15) = local_350._0_4_;
  *(float *)((longlong)param_1 + 0xac) = local_334;
  *(undefined4 *)(param_1 + 0x16) = (undefined4)local_368;
  *(float *)((longlong)param_1 + 0xb4) = local_314;
  *(undefined4 *)(param_1 + 0x17) = (undefined4)local_348;
  *(float *)((longlong)param_1 + 0xbc) = local_320;
  *(float *)(param_1 + 0x18) = local_310;
  *(undefined4 *)((longlong)param_1 + 0xc4) = (undefined4)local_2f0;
  *(float *)(param_1 + 0x19) = fVar24;
  *(float *)((longlong)param_1 + 0xcc) = local_328;
  *(float *)(param_1 + 0x27) = 1.0 / local_30c;
  *(float *)((longlong)param_1 + 0x134) = local_31c;
  local_2c8._8_4_ = SUB84(dVar8,0);
  local_2c8._0_8_ = dVar5;
  local_2c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(float *)((longlong)param_1 + 0xf4) = (float)dVar2;
  *(float *)(param_1 + 0x1f) = (float)dVar5;
  *(float *)((longlong)param_1 + 0xfc) = (float)local_358;
  *(float *)(param_1 + 0x1a) = fVar21;
  *(undefined4 *)((longlong)param_1 + 0xd4) = local_308._0_4_;
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)local_360;
  *(float *)((longlong)param_1 + 0xdc) = (float)dVar34;
  *(float *)(param_1 + 0x1c) = (float)dVar36;
  *(float *)((longlong)param_1 + 0xe4) = (float)dVar15;
  *(float *)(param_1 + 0x1d) = (float)dVar31;
  *(float *)((longlong)param_1 + 0xec) = (float)dVar30;
  *(float *)(param_1 + 0x1e) = (float)dVar6;
  lVar19 = *param_1;
  fVar24 = *(float *)(param_1 + 2) * *(float *)((longlong)param_1 + 0xc);
  local_1e8 = (double)(*(float *)(lVar19 + 0x128) * fVar24);
  dStack_1e0 = (double)(*(float *)(lVar19 + 300) * fVar24);
  local_1d8 = (double)(fVar24 * *(float *)(lVar19 + 0x130));
  local_340 = dVar2;
  FUN_140933eae(&local_168,&local_188);
  *(float *)(param_1 + 10) = (float)local_168;
  *(float *)((longlong)param_1 + 0x54) = (float)local_160;
  *(float *)(param_1 + 0xb) = (float)local_158;
  *(float *)((longlong)param_1 + 0x5c) = (float)local_150;
  *(float *)(param_1 + 0xc) = (float)local_148;
  *(float *)((longlong)param_1 + 100) = (float)local_140;
  *(float *)(param_1 + 0xd) = (float)local_138;
  *(float *)((longlong)param_1 + 0x6c) = (float)local_130;
  *(float *)(param_1 + 0xe) = (float)local_128;
  *(float *)((longlong)param_1 + 0x74) = (float)local_120;
  *(float *)(param_1 + 0xf) = (float)local_118;
  *(float *)((longlong)param_1 + 0x7c) = (float)local_110;
  *(float *)(param_1 + 0x10) = (float)local_108;
  *(float *)((longlong)param_1 + 0x84) = (float)local_100;
  *(float *)(param_1 + 0x11) = (float)local_f8;
  *(float *)((longlong)param_1 + 0x8c) = (float)local_f0;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar5 = param_3[2];
  dVar31 = dStack_180 * dVar5 - dVar2 * local_178;
  dVar31 = dVar31 + dVar31;
  dVar6 = local_188 * dVar2 - dVar1 * dStack_180;
  dVar6 = dVar6 + dVar6;
  dVar15 = local_178 * dVar1 - dVar5 * local_188;
  dVar15 = dVar15 + dVar15;
  *(float *)((longlong)param_1 + 0x10c) =
       (float)((dStack_180 * dVar6 - dVar15 * local_178) + dVar31 * dStack_170 + dVar1);
  *(float *)(param_1 + 0x22) =
       (float)((local_178 * dVar31 - dVar6 * local_188) + dStack_170 * dVar15 + dVar2);
  *(float *)((longlong)param_1 + 0x114) =
       (float)((local_188 * dVar15 - dVar31 * dStack_180) + dStack_170 * dVar6 + dVar5);
  dVar1 = param_4[3];
  dVar2 = param_4[4];
  dVar5 = param_4[5];
  dVar15 = param_4[6];
  if (param_1[3] == 0) {
    uVar26 = SUB84(*param_3,0);
    uVar27 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar22 = SUB84(param_3[1],0);
    uVar23 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    uVar28 = SUB84(param_3[2],0);
    uVar29 = (undefined4)((ulonglong)param_3[2] >> 0x20);
  }
  else {
    dVar32 = (double)local_1c8._0_8_ * dVar2 - dVar1 * (double)local_1c8._8_8_;
    dVar31 = (double)local_1b8._0_8_ * dVar1 - dVar5 * (double)local_1c8._0_8_;
    dVar6 = (double)local_1c8._8_8_ * dVar5 - dVar2 * (double)local_1b8._0_8_;
    dVar32 = dVar32 + dVar32;
    dVar31 = dVar31 + dVar31;
    dVar6 = dVar6 + dVar6;
    dVar5 = (double)local_228._0_8_ +
            ((double)local_1c8._0_8_ * dVar31 - dVar6 * (double)local_1c8._8_8_) +
            (double)local_1b8._8_8_ * dVar32 + dVar5;
    dVar2 = (double)local_218._0_8_ +
            ((double)local_1b8._0_8_ * dVar6 - dVar32 * (double)local_1c8._0_8_) +
            (double)local_1b8._8_8_ * dVar31 + dVar2;
    dVar1 = (double)local_238._0_8_ +
            ((double)local_1c8._8_8_ * dVar32 - dVar31 * (double)local_1b8._0_8_) +
            dVar6 * (double)local_1b8._8_8_ + dVar1;
    FUN_14093ab46(local_1c8,&local_168);
    dVar31 = *param_3;
    uVar26 = SUB84(dVar31,0);
    uVar27 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar6 = param_3[1];
    uVar22 = SUB84(dVar6,0);
    uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar32 = param_3[2];
    uVar28 = SUB84(dVar32,0);
    uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
    dVar15 = dVar15 + (local_158 + local_158) * dVar32 +
                      (local_168 + local_168) * dVar31 + (local_160 + local_160) * dVar6;
  }
  dVar31 = (double)CONCAT44(uVar29,uVar28) * local_358 +
           (double)CONCAT44(uVar27,uVar26) * local_340 +
           (double)local_2c8._0_8_ * (double)CONCAT44(uVar23,uVar22);
  lVar19 = 0x20;
  if (dVar31 <= param_4[8]) {
    dVar32 = (double)CONCAT44(uVar29,uVar28) - local_358 * dVar31;
    dVar6 = (double)CONCAT44(uVar23,uVar22) - (double)local_2c8._0_8_ * dVar31;
    dVar31 = (double)CONCAT44(uVar27,uVar26) - local_340 * dVar31;
    dVar33 = dVar32 * dVar32 + dVar31 * dVar31 + dVar6 * dVar6;
    if (9.99999993922529e-09 < dVar33) {
      dVar33 = 1.0 / SQRT(dVar33);
      dVar31 = dVar31 * dVar33;
      dVar6 = dVar6 * dVar33;
      dVar32 = dVar32 * dVar33;
    }
    dVar33 = dVar5 * dVar32 + dVar1 * dVar31 + dVar2 * dVar6;
    lVar19 = 0x28;
    if (0.0 < dVar33) {
      dVar1 = dVar1 - dVar31 * dVar33;
      dVar2 = dVar2 - dVar6 * dVar33;
      dVar5 = dVar5 - dVar32 * dVar33;
    }
  }
  dVar33 = local_240 * local_240;
  *(float *)(param_1 + 0x29) = (float)(*(double *)((longlong)param_3 + lVar19) * dVar33);
  lVar19 = *param_1;
  fVar24 = *(float *)(param_1 + 2) * *(float *)((longlong)param_1 + 0xc);
  local_1d8 = (double)(fVar24 * *(float *)(lVar19 + 0x130));
  dStack_1e0 = (double)(*(float *)(lVar19 + 300) * fVar24);
  local_1e8 = (double)(*(float *)(lVar19 + 0x128) * fVar24);
  FUN_140933eae(&local_168,lVar19 + 0xc0);
  dVar31 = *param_3;
  dVar6 = param_3[1];
  dVar32 = param_3[2];
  *(float *)(param_1 + 0x28) = (float)(param_3[6] * dVar33);
  *(float *)((longlong)param_1 + 0x144) = (float)(dVar33 * param_3[7]);
  dVar33 = param_3[2];
  dVar12 = param_3[1];
  *(float *)(param_1 + 0x20) = (float)*param_3;
  *(float *)((longlong)param_1 + 0x104) = (float)dVar12;
  *(float *)(param_1 + 0x21) = (float)dVar33;
  *(float *)((longlong)param_1 + 0x14c) = (float)param_3[10];
  fVar24 = (float)((local_118 * dVar32 + local_128 * dVar31 + local_120 * dVar6) * dVar32 +
                  (local_158 * dVar32 + local_168 * dVar31 + local_160 * dVar6) * dVar31 +
                  (local_138 * dVar32 + local_148 * dVar31 + local_140 * dVar6) * dVar6);
  *(float *)((longlong)param_1 + 300) = fVar24;
  *(float *)((longlong)param_1 + 0x13c) = 1.0 / fVar24;
  *(float *)(param_1 + 0x23) = (float)(local_2a0 - (local_2a8 + dVar1));
  *(float *)((longlong)param_1 + 0x11c) = (float)(local_298 - (local_2b0 + dVar2));
  *(float *)(param_1 + 0x24) = (float)(local_290 - (local_248 + dVar5));
  *(float *)((longlong)param_1 + 0x124) =
       (float)(((local_250 + local_250) * local_268 + (local_260 + local_260) * local_270 +
               (local_258 + local_258) * local_278) - dVar15);
  pcVar20 = FUN_146cb6a68;
  if (lVar4 == 0) {
    pcVar20 = FUN_146cb7498;
  }
  param_1[0x2a] = (longlong)pcVar20;
  if ((local_e0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cb66be FUN_146cb66be body=197 status=ok
// SIG undefined FUN_146cb66be(void)

void FUN_146cb66be(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      FUN_146cb684e(*(longlong *)(param_1 + 0x28) + lVar4,param_2,&local_68,&local_80);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
      *(undefined8 *)(lVar2 + 0xd0) = local_58;
      *(undefined8 *)(lVar2 + 0xc0) = local_68;
      *(undefined8 *)(lVar2 + 200) = uStack_60;
      *(undefined4 *)(lVar2 + 0xd8) = local_80;
      *(undefined4 *)(lVar2 + 0xdc) = uStack_7c;
      *(undefined4 *)(lVar2 + 0xe0) = uStack_78;
      *(undefined4 *)(lVar2 + 0xe4) = uStack_74;
      *(undefined8 *)(lVar2 + 0xe8) = local_70;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x160;
    } while (iVar1 != lVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb6784 FUN_146cb6784 body=200 status=ok
// SIG undefined FUN_146cb6784(void)

void FUN_146cb6784(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 < param_4) {
    lVar3 = (longlong)param_3;
    lVar2 = lVar3 * 0x160;
    do {
      FUN_146cb684e(*(longlong *)(param_1 + 0x28) + lVar2,param_2,&local_68,&local_80);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
      *(undefined8 *)(lVar1 + 0xd0) = local_58;
      *(undefined8 *)(lVar1 + 0xc0) = local_68;
      *(undefined8 *)(lVar1 + 200) = uStack_60;
      *(undefined4 *)(lVar1 + 0xd8) = local_80;
      *(undefined4 *)(lVar1 + 0xdc) = uStack_7c;
      *(undefined4 *)(lVar1 + 0xe0) = uStack_78;
      *(undefined4 *)(lVar1 + 0xe4) = uStack_74;
      *(undefined8 *)(lVar1 + 0xe8) = local_70;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x160;
    } while (param_4 != lVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb684e FUN_146cb684e body=274 status=ok
// SIG undefined FUN_146cb684e(void)

void FUN_146cb684e(undefined8 *param_1,double param_2,double *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = DAT_14c8464e8;
  dVar6 = DAT_14c8464e0;
  if (param_2 <= 9.99999993922529e-09) {
    param_3[2] = DAT_14c8464f0;
    *param_3 = dVar6;
    param_3[1] = dVar7;
    dVar7 = DAT_14c8464e8;
    dVar6 = DAT_14c8464e0;
    param_4[2] = DAT_14c8464f0;
    *param_4 = dVar6;
    param_4[1] = dVar7;
  }
  else {
    dVar6 = 1.0 / (param_2 * param_2);
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    fVar2 = *(float *)(param_1 + 0x1f);
    fVar3 = *(float *)((longlong)param_1 + 0xfc);
    fVar4 = *(float *)(param_1 + 7);
    fVar5 = *(float *)((longlong)param_1 + 0x34);
    *param_3 = (double)(*(float *)((longlong)param_1 + 0xf4) * fVar1 + *(float *)(param_1 + 6)) *
               dVar6;
    param_3[1] = (double)(fVar2 * fVar1 + fVar5) * dVar6;
    param_3[2] = (double)(fVar1 * fVar3 + fVar4) * dVar6;
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)((longlong)param_1 + 0x104);
    fVar3 = *(float *)(param_1 + 0x21);
    fVar4 = *(float *)((longlong)param_1 + 0x44);
    fVar5 = *(float *)(param_1 + 8);
    *param_4 = (double)(*(float *)(param_1 + 0x20) * fVar1 + *(float *)((longlong)param_1 + 0x3c)) *
               dVar6;
    param_4[1] = (double)(fVar2 * fVar1 + fVar5) * dVar6;
    param_4[2] = (double)(fVar1 * fVar3 + fVar4) * dVar6;
  }
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 146cb6a68 FUN_146cb6a68 body=2607 status=ok
// SIG undefined FUN_146cb6a68(void)

void FUN_146cb6a68(float *param_1,longlong *param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar4 = (float *)*param_2;
  pfVar1 = (float *)param_2[3];
  fVar13 = (((param_1[0x28] + pfVar4[2]) - pfVar1[2]) -
           (pfVar1[4] * param_1[0x21] - param_1[0x20] * pfVar1[5])) * param_1[0x2b] +
           (((param_1[0x26] + *pfVar4) - *pfVar1) -
           (pfVar1[5] * param_1[0x22] - param_1[0x21] * pfVar1[6])) * param_1[0x29] +
           (((param_1[0x27] + pfVar4[1]) - pfVar1[1]) -
           (param_1[0x20] * pfVar1[6] - pfVar1[4] * param_1[0x22])) * param_1[0x2a];
  if (fVar13 < 0.0) {
    fVar11 = -param_1[0x39] * fVar13;
    fVar5 = param_1[0x29] * fVar11;
    fVar9 = param_1[0x2a] * fVar11;
    fVar11 = param_1[0x2b] * fVar11;
    *param_3 = *param_3 + fVar5;
    param_3[1] = param_3[1] + fVar9;
    param_3[2] = param_3[2] + fVar11;
    fVar7 = param_1[0x36];
    pfVar4 = (float *)*param_2;
    *pfVar4 = fVar5 * fVar7 + *pfVar4;
    pfVar4[1] = fVar9 * fVar7 + pfVar4[1];
    pfVar4[2] = fVar7 * fVar11 + pfVar4[2];
    fVar7 = param_1[0x38];
    pfVar4 = (float *)param_2[3];
    *pfVar4 = *pfVar4 - fVar5 * fVar7;
    pfVar4[1] = pfVar4[1] - fVar9 * fVar7;
    pfVar4[2] = pfVar4[2] - fVar7 * fVar11;
    fVar7 = param_1[0x14];
    fVar10 = param_1[0x18];
    fVar15 = param_1[0x20] * fVar9 - fVar5 * param_1[0x21];
    fVar6 = fVar5 * param_1[0x22] - fVar11 * param_1[0x20];
    fVar12 = param_1[0x21] * fVar11 - fVar9 * param_1[0x22];
    fVar5 = param_1[0x19];
    fVar9 = param_1[0x1a];
    fVar11 = param_1[0x15];
    fVar17 = param_1[0x16];
    lVar2 = param_2[3];
    *(float *)(lVar2 + 0x10) =
         ((fVar12 * -param_1[0x10] - fVar6 * param_1[0x11]) - fVar15 * param_1[0x12]) +
         *(float *)(lVar2 + 0x10);
    *(float *)(lVar2 + 0x14) =
         ((-fVar7 * fVar12 - fVar11 * fVar6) - fVar17 * fVar15) + *(float *)(lVar2 + 0x14);
    *(float *)(lVar2 + 0x18) =
         ((-fVar10 * fVar12 - fVar5 * fVar6) - fVar9 * fVar15) + *(float *)(lVar2 + 0x18);
    pfVar4 = (float *)*param_2;
  }
  fVar7 = param_1[0x2f];
  fVar10 = param_1[0x30];
  fVar5 = param_1[0x31];
  fVar9 = (pfVar4[4] * fVar10 - fVar7 * pfVar4[5]) + fVar5;
  fVar11 = (pfVar4[6] * fVar7 - pfVar4[4] * fVar5) + fVar10;
  fVar7 = (pfVar4[5] * fVar5 - fVar10 * pfVar4[6]) + fVar7;
  fVar10 = fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11;
  if (1e-08 < fVar10) {
    fVar10 = 1.0 / SQRT(fVar10);
    fVar7 = fVar7 * fVar10;
    fVar11 = fVar11 * fVar10;
    fVar9 = fVar9 * fVar10;
  }
  fVar17 = fVar7 * param_1[0x2d] - param_1[0x2c] * fVar11;
  fVar5 = fVar9 * param_1[0x2c] - fVar7 * param_1[0x2e];
  fVar10 = fVar11 * param_1[0x2e] - param_1[0x2d] * fVar9;
  fVar7 = fVar17 * fVar17 + fVar10 * fVar10 + fVar5 * fVar5;
  if (1e-08 < fVar7) {
    fVar7 = SQRT(fVar7);
    fVar9 = 1.0 / fVar7;
    fVar17 = fVar17 * fVar9;
    fVar5 = fVar5 * fVar9;
    fVar10 = fVar10 * fVar9;
    fVar9 = param_1[9];
    fVar11 = param_1[8];
    fVar6 = param_1[10];
    fVar12 = param_1[5];
    fVar15 = param_1[4];
    fVar14 = param_1[6];
    fVar16 = param_1[1];
    fVar18 = *param_1;
    fVar19 = param_1[2];
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    fVar8 = asinf(fVar7);
    fVar8 = fVar8 * (1.0 / ((fVar6 * fVar17 + fVar11 * fVar10 + fVar9 * fVar5) * fVar17 +
                           (fVar19 * fVar17 + fVar18 * fVar10 + fVar16 * fVar5) * fVar10 +
                           (fVar14 * fVar17 + fVar15 * fVar10 + fVar12 * fVar5) * fVar5));
    fVar7 = param_3[5];
    fVar12 = fVar8 * fVar17 + fVar7;
    fVar9 = param_3[3];
    fVar11 = param_3[4];
    fVar16 = fVar5 * fVar8 + fVar11;
    fVar14 = fVar10 * fVar8 + fVar9;
    fVar15 = fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16;
    fVar10 = param_1[0x3d];
    fVar5 = fVar14;
    fVar17 = fVar16;
    fVar6 = fVar12;
    if ((fVar10 * fVar10 < fVar15) &&
       (fVar5 = (float)DAT_14c846330, fVar17 = DAT_14c846330._4_4_, fVar6 = DAT_14c846338,
       1e-08 < fVar10 * fVar10)) {
      fVar6 = 1.0 / SQRT(fVar15);
      fVar5 = fVar14 * fVar6 * fVar10;
      fVar17 = fVar16 * fVar6 * fVar10;
      fVar6 = fVar12 * fVar6 * fVar10;
    }
    param_3[3] = fVar5;
    fVar5 = fVar5 - fVar9;
    param_3[4] = fVar17;
    fVar17 = fVar17 - fVar11;
    param_3[5] = fVar6;
    fVar6 = fVar6 - fVar7;
    fVar7 = param_1[9];
    fVar10 = param_1[8];
    fVar9 = param_1[10];
    fVar11 = param_1[5];
    fVar12 = param_1[4];
    fVar15 = param_1[6];
    lVar2 = *param_2;
    *(float *)(lVar2 + 0x10) =
         fVar6 * param_1[2] + fVar5 * *param_1 + fVar17 * param_1[1] + *(float *)(lVar2 + 0x10);
    *(float *)(lVar2 + 0x14) =
         fVar15 * fVar6 + fVar12 * fVar5 + fVar11 * fVar17 + *(float *)(lVar2 + 0x14);
    *(float *)(lVar2 + 0x18) =
         fVar9 * fVar6 + fVar10 * fVar5 + fVar7 * fVar17 + *(float *)(lVar2 + 0x18);
  }
  fVar7 = *param_3;
  fVar10 = param_3[1];
  fVar5 = param_1[0x29];
  fVar9 = param_1[0x2a];
  fVar11 = param_3[2];
  fVar17 = param_1[0x2b];
  fVar6 = fVar11 * fVar17 + fVar7 * fVar5 + fVar10 * fVar9;
  if ((0.0 < param_3[7] + fVar6) || (fVar13 < param_1[0x3f])) {
    pfVar4 = (float *)*param_2;
    pfVar1 = (float *)param_2[3];
    fVar12 = (param_1[0x34] + pfVar4[2]) - pfVar1[2];
    fVar14 = (param_1[0x33] + pfVar4[1]) - pfVar1[1];
    fVar13 = (param_1[0x32] + *pfVar4) - *pfVar1;
    fVar15 = fVar13 - (pfVar1[5] * fVar12 - pfVar1[6] * fVar14);
    fVar16 = fVar14 - (pfVar1[6] * fVar13 - fVar12 * pfVar1[4]);
    fVar12 = fVar12 - (pfVar1[4] * fVar14 - fVar13 * pfVar1[5]);
    fVar18 = fVar12 * fVar17 + fVar15 * fVar5 + fVar9 * fVar16;
    fVar14 = fVar11 - fVar17 * fVar6;
    fVar19 = fVar10 - fVar9 * fVar6;
    fVar8 = fVar7 - fVar5 * fVar6;
    fVar13 = param_1[0x3a];
    fVar6 = fVar14 - (fVar12 - fVar18 * fVar17) * fVar13;
    fVar12 = fVar19 - (fVar16 - fVar9 * fVar18) * fVar13;
    fVar15 = fVar8 - (fVar15 - fVar5 * fVar18) * fVar13;
    fVar16 = fVar6 * fVar6 + fVar15 * fVar15 + fVar12 * fVar12;
    fVar13 = param_1[0x3e];
    fVar5 = fVar6;
    fVar9 = fVar12;
    fVar17 = fVar15;
    if ((fVar13 * fVar13 < fVar16) &&
       (fVar5 = DAT_14c846338, fVar9 = DAT_14c846330._4_4_, fVar17 = (float)DAT_14c846330,
       1e-08 < fVar13 * fVar13)) {
      fVar17 = 1.0 / SQRT(fVar16);
      fVar5 = fVar6 * fVar17 * fVar13;
      fVar9 = fVar12 * fVar17 * fVar13;
      fVar17 = fVar15 * fVar17 * fVar13;
    }
    fVar5 = fVar5 - fVar14;
    fVar9 = fVar9 - fVar19;
    fVar17 = fVar17 - fVar8;
    *param_3 = fVar7 + fVar17;
    param_3[1] = fVar10 + fVar9;
    param_3[2] = fVar11 + fVar5;
    fVar13 = param_1[0x36];
    pfVar4 = (float *)*param_2;
    *pfVar4 = fVar17 * fVar13 + *pfVar4;
    pfVar4[1] = fVar9 * fVar13 + pfVar4[1];
    pfVar4[2] = fVar5 * fVar13 + pfVar4[2];
    lVar2 = *param_2;
    lVar3 = param_2[3];
    fVar13 = param_3[6];
    fVar5 = fVar13 - ((*(float *)(lVar2 + 0x18) - *(float *)(lVar3 + 0x18)) * param_1[0x2e] +
                      (*(float *)(lVar2 + 0x10) - *(float *)(lVar3 + 0x10)) * param_1[0x2c] +
                      (*(float *)(lVar2 + 0x14) - *(float *)(lVar3 + 0x14)) * param_1[0x2d] +
                     param_1[0x35]) * param_1[0x3b];
    fVar7 = param_1[0x3c];
    fVar10 = -fVar7;
    if (-fVar7 <= fVar5) {
      fVar10 = fVar5;
    }
    fVar15 = (float)(-(uint)(fVar7 < fVar5) & (uint)fVar7 | ~-(uint)(fVar7 < fVar5) & (uint)fVar10)
             - fVar13;
    param_3[6] = fVar13 + fVar15;
    fVar13 = param_1[10];
    fVar7 = param_1[6];
    fVar10 = param_1[9];
    fVar5 = param_1[5];
    fVar9 = param_1[8];
    fVar11 = param_1[4];
    fVar17 = param_1[0x2c];
    fVar6 = param_1[0x2d];
    fVar12 = param_1[0x2e];
    lVar2 = *param_2;
    *(float *)(lVar2 + 0x10) =
         param_1[2] * fVar15 * fVar12 + fVar15 * *param_1 * fVar17 + param_1[1] * fVar15 * fVar6 +
         *(float *)(lVar2 + 0x10);
    *(float *)(lVar2 + 0x14) =
         fVar7 * fVar15 * fVar12 + fVar11 * fVar15 * fVar17 + fVar5 * fVar15 * fVar6 +
         *(float *)(lVar2 + 0x14);
    *(float *)(lVar2 + 0x18) =
         fVar13 * fVar15 * fVar12 + fVar9 * fVar15 * fVar17 + fVar10 * fVar15 * fVar6 +
         *(float *)(lVar2 + 0x18);
  }
  return;
}



// FUNCTION 146cb7498 FUN_146cb7498 body=2028 status=ok
// SIG undefined FUN_146cb7498(void)

void FUN_146cb7498(float *param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar2 = (float *)*param_2;
  fVar10 = (pfVar2[2] + param_1[0x28]) * param_1[0x2b] +
           (*pfVar2 + param_1[0x26]) * param_1[0x29] + (pfVar2[1] + param_1[0x27]) * param_1[0x2a];
  if (fVar10 < 0.0) {
    fVar8 = -param_1[0x3a] * fVar10;
    fVar7 = param_1[0x29] * fVar8;
    fVar3 = param_1[0x2a] * fVar8;
    fVar8 = param_1[0x2b] * fVar8;
    *param_3 = *param_3 + fVar7;
    param_3[1] = param_3[1] + fVar3;
    param_3[2] = param_3[2] + fVar8;
    fVar4 = param_1[0x36];
    pfVar2 = (float *)*param_2;
    *pfVar2 = fVar7 * fVar4 + *pfVar2;
    pfVar2[1] = fVar3 * fVar4 + pfVar2[1];
    pfVar2[2] = fVar8 * fVar4 + pfVar2[2];
    pfVar2 = (float *)*param_2;
  }
  fVar4 = param_1[0x2f];
  fVar3 = param_1[0x30];
  fVar7 = param_1[0x31];
  fVar8 = (pfVar2[4] * fVar3 - fVar4 * pfVar2[5]) + fVar7;
  fVar11 = (pfVar2[6] * fVar4 - pfVar2[4] * fVar7) + fVar3;
  fVar4 = (pfVar2[5] * fVar7 - fVar3 * pfVar2[6]) + fVar4;
  fVar3 = fVar8 * fVar8 + fVar4 * fVar4 + fVar11 * fVar11;
  if (1e-08 < fVar3) {
    fVar3 = 1.0 / SQRT(fVar3);
    fVar4 = fVar4 * fVar3;
    fVar11 = fVar11 * fVar3;
    fVar8 = fVar8 * fVar3;
  }
  fVar16 = fVar4 * param_1[0x2d] - param_1[0x2c] * fVar11;
  fVar7 = fVar8 * param_1[0x2c] - fVar4 * param_1[0x2e];
  fVar3 = fVar11 * param_1[0x2e] - param_1[0x2d] * fVar8;
  fVar4 = fVar16 * fVar16 + fVar3 * fVar3 + fVar7 * fVar7;
  if (1e-08 < fVar4) {
    fVar4 = SQRT(fVar4);
    fVar8 = 1.0 / fVar4;
    fVar16 = fVar16 * fVar8;
    fVar7 = fVar7 * fVar8;
    fVar3 = fVar3 * fVar8;
    fVar8 = param_1[9];
    fVar11 = param_1[8];
    fVar15 = param_1[10];
    fVar6 = param_1[5];
    fVar9 = param_1[4];
    fVar12 = param_1[6];
    fVar13 = param_1[1];
    fVar14 = *param_1;
    fVar17 = param_1[2];
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    fVar5 = asinf(fVar4);
    fVar5 = fVar5 * (1.0 / ((fVar15 * fVar16 + fVar11 * fVar3 + fVar8 * fVar7) * fVar16 +
                           (fVar17 * fVar16 + fVar14 * fVar3 + fVar13 * fVar7) * fVar3 +
                           (fVar12 * fVar16 + fVar9 * fVar3 + fVar6 * fVar7) * fVar7));
    fVar4 = param_3[5];
    fVar6 = fVar5 * fVar16 + fVar4;
    fVar8 = param_3[3];
    fVar11 = param_3[4];
    fVar13 = fVar7 * fVar5 + fVar11;
    fVar12 = fVar3 * fVar5 + fVar8;
    fVar9 = fVar6 * fVar6 + fVar12 * fVar12 + fVar13 * fVar13;
    fVar3 = param_1[0x3d];
    fVar7 = fVar12;
    fVar16 = fVar13;
    fVar15 = fVar6;
    if ((fVar3 * fVar3 < fVar9) &&
       (fVar7 = (float)DAT_14c846330, fVar16 = DAT_14c846330._4_4_, fVar15 = DAT_14c846338,
       1e-08 < fVar3 * fVar3)) {
      fVar15 = 1.0 / SQRT(fVar9);
      fVar7 = fVar12 * fVar15 * fVar3;
      fVar16 = fVar13 * fVar15 * fVar3;
      fVar15 = fVar6 * fVar15 * fVar3;
    }
    param_3[3] = fVar7;
    fVar7 = fVar7 - fVar8;
    param_3[4] = fVar16;
    fVar16 = fVar16 - fVar11;
    param_3[5] = fVar15;
    fVar15 = fVar15 - fVar4;
    fVar4 = param_1[9];
    fVar3 = param_1[8];
    fVar8 = param_1[10];
    fVar11 = param_1[5];
    fVar6 = param_1[4];
    fVar9 = param_1[6];
    lVar1 = *param_2;
    *(float *)(lVar1 + 0x10) =
         fVar15 * param_1[2] + fVar7 * *param_1 + fVar16 * param_1[1] + *(float *)(lVar1 + 0x10);
    *(float *)(lVar1 + 0x14) =
         fVar9 * fVar15 + fVar6 * fVar7 + fVar11 * fVar16 + *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x18) =
         fVar8 * fVar15 + fVar3 * fVar7 + fVar4 * fVar16 + *(float *)(lVar1 + 0x18);
  }
  fVar4 = *param_3;
  fVar3 = param_3[1];
  fVar7 = param_1[0x29];
  fVar8 = param_1[0x2a];
  fVar11 = param_3[2];
  fVar16 = param_1[0x2b];
  fVar15 = fVar11 * fVar16 + fVar4 * fVar7 + fVar3 * fVar8;
  if ((0.0 < param_3[7] + fVar15) || (fVar10 < param_1[0x3f])) {
    pfVar2 = (float *)*param_2;
    fVar9 = (param_1[0x34] + pfVar2[2]) * fVar16 +
            (param_1[0x32] + *pfVar2) * fVar7 + fVar8 * (param_1[0x33] + pfVar2[1]);
    fVar12 = fVar11 - fVar16 * fVar15;
    fVar13 = fVar3 - fVar8 * fVar15;
    fVar14 = fVar4 - fVar7 * fVar15;
    fVar10 = param_1[0x3a];
    fVar15 = fVar12 - ((param_1[0x34] + pfVar2[2]) - fVar9 * fVar16) * fVar10;
    fVar6 = fVar13 - ((param_1[0x33] + pfVar2[1]) - fVar8 * fVar9) * fVar10;
    fVar9 = fVar14 - ((param_1[0x32] + *pfVar2) - fVar7 * fVar9) * fVar10;
    fVar17 = fVar15 * fVar15 + fVar9 * fVar9 + fVar6 * fVar6;
    fVar10 = param_1[0x3e];
    fVar7 = fVar15;
    fVar8 = fVar6;
    fVar16 = fVar9;
    if ((fVar10 * fVar10 < fVar17) &&
       (fVar7 = DAT_14c846338, fVar8 = DAT_14c846330._4_4_, fVar16 = (float)DAT_14c846330,
       1e-08 < fVar10 * fVar10)) {
      fVar16 = 1.0 / SQRT(fVar17);
      fVar7 = fVar15 * fVar16 * fVar10;
      fVar8 = fVar6 * fVar16 * fVar10;
      fVar16 = fVar9 * fVar16 * fVar10;
    }
    fVar7 = fVar7 - fVar12;
    fVar8 = fVar8 - fVar13;
    fVar16 = fVar16 - fVar14;
    *param_3 = fVar4 + fVar16;
    param_3[1] = fVar3 + fVar8;
    param_3[2] = fVar11 + fVar7;
    fVar10 = param_1[0x36];
    pfVar2 = (float *)*param_2;
    *pfVar2 = fVar16 * fVar10 + *pfVar2;
    pfVar2[1] = fVar8 * fVar10 + pfVar2[1];
    pfVar2[2] = fVar7 * fVar10 + pfVar2[2];
    lVar1 = *param_2;
    fVar10 = param_3[6];
    fVar7 = fVar10 - (param_1[0x2e] * *(float *)(lVar1 + 0x18) +
                      param_1[0x2c] * *(float *)(lVar1 + 0x10) +
                      param_1[0x2d] * *(float *)(lVar1 + 0x14) + param_1[0x35]) * param_1[0x3b];
    fVar4 = param_1[0x3c];
    fVar3 = -fVar4;
    if (-fVar4 <= fVar7) {
      fVar3 = fVar7;
    }
    fVar9 = (float)(-(uint)(fVar4 < fVar7) & (uint)fVar4 | ~-(uint)(fVar4 < fVar7) & (uint)fVar3) -
            fVar10;
    param_3[6] = fVar10 + fVar9;
    fVar10 = param_1[10];
    fVar4 = param_1[6];
    fVar3 = param_1[9];
    fVar7 = param_1[5];
    fVar8 = param_1[8];
    fVar11 = param_1[4];
    fVar16 = param_1[0x2c];
    fVar15 = param_1[0x2d];
    fVar6 = param_1[0x2e];
    lVar1 = *param_2;
    *(float *)(lVar1 + 0x10) =
         param_1[2] * fVar9 * fVar6 + fVar9 * *param_1 * fVar16 + param_1[1] * fVar9 * fVar15 +
         *(float *)(lVar1 + 0x10);
    *(float *)(lVar1 + 0x14) =
         fVar4 * fVar9 * fVar6 + fVar11 * fVar9 * fVar16 + fVar7 * fVar9 * fVar15 +
         *(float *)(lVar1 + 0x14);
    *(float *)(lVar1 + 0x18) =
         fVar10 * fVar9 * fVar6 + fVar8 * fVar9 * fVar16 + fVar3 * fVar9 * fVar15 +
         *(float *)(lVar1 + 0x18);
  }
  return;
}



// FUNCTION 146cb7c84 FUN_146cb7c84 body=232 status=ok
// SIG undefined FUN_146cb7c84(void)

undefined8 * FUN_146cb7c84(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c992b40) && (FUN_144b3d300(&DAT_14c992b40), DAT_14c992b40 == -1)) {
    DAT_14c992b30 = 0;
    uRam000000014c992b38 = 0;
    atexit((_func_5014 *)&LAB_14298b24a);
    _Init_thread_footer(&DAT_14c992b40);
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    lVar2 = param_1 + 0x148;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x150);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x158) + 0x7fU & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 0x20) == param_2)
        goto LAB_146cb7cc0;
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_146cb7cc0:
  puVar4 = (undefined8 *)(lVar2 + 8);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar3 = &DAT_14c992b30;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  return puVar3;
}



// FUNCTION 146cb7d6c FUN_146cb7d6c body=90 status=ok
// SIG undefined FUN_146cb7d6c(void)

void FUN_146cb7d6c(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  char local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  local_18 = param_3;
  uVar1 = FUN_146ce5fc4(param_1 + 0x110,(int)param_2);
  FUN_146ce652e(uVar1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb7dc8 FUN_146cb7dc8 body=177 status=ok
// SIG undefined FUN_146cb7dc8(void)

void FUN_146cb7dc8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_146cc359c(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_146cc3738(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146cb7e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 146cb7e7a FUN_146cb7e7a body=307 status=ok
// SIG undefined FUN_146cb7e7a(void)

longlong FUN_146cb7e7a(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_14001cc68(0xc0,0x10);
  puVar5 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  local_90 = *(undefined8 **)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
    UNLOCK();
  }
  FUN_14010f5c4(lVar2,&local_90,local_88);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    if (puVar4 == (undefined8 *)0x0) goto LAB_146cb7f84;
    *(undefined8 *)(lVar2 + 0x20) = 0;
LAB_146cb7f3b:
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (puVar5 == (undefined8 *)0x0) goto LAB_146cb7f84;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    if (puVar4 != puVar5) {
      *(undefined8 **)(lVar2 + 0x20) = puVar5;
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      if (puVar4 != (undefined8 *)0x0) goto LAB_146cb7f3b;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_146cb7f84:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb7fae FUN_146cb7fae body=175 status=ok
// SIG undefined FUN_146cb7fae(void)

void FUN_146cb7fae(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  local_2c = param_4;
  uVar3 = FUN_146ce84f8(param_2,param_3);
  plVar4 = (longlong *)FUN_146ce8caa(uVar3,param_4,&local_2c);
  uVar1 = *(uint *)(param_5 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < uVar1) {
      FUN_1406b7a4a(plVar4,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *plVar4),(void *)*param_5,(longlong)(int)uVar1 << 3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb805e FUN_146cb805e body=310 status=ok
// SIG undefined FUN_146cb805e(void)

longlong * FUN_146cb805e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_14043d0a6(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1406b7a4a(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb8196 FUN_146cb8196 body=67 status=ok
// SIG undefined FUN_146cb8196(void)

void FUN_146cb8196(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140d9cea6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140a398ee(param_1);
    return;
  }
  FUN_1456ed36c(param_1);
  FUN_140d9cea6(param_1,0);
  return;
}



// FUNCTION 146cb81d9 FUN_146cb81d9 body=624 status=ok
// SIG undefined FUN_146cb81d9(void)

void FUN_146cb81d9(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == (longlong *)0x0) goto LAB_146cb8226;
  if (*(int *)(*(longlong *)(*param_1 + 0xf8) + 0x10 + (longlong)(int)param_1[1] * 0x18) != 0) {
    if ((int)param_3[1] == 0) goto LAB_146cb8226;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    iVar3 = (int)param_2[1];
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 != 0) {
      FUN_14481578e(&local_58);
      if ((longlong)(int)param_2[1] != 0) {
        plVar8 = (longlong *)*param_2;
        plVar2 = plVar8 + (int)param_2[1];
        do {
          uVar4 = uStack_50;
          if ((longlong)(int)param_3[1] != 0) {
            lVar6 = (longlong)(int)param_3[1] << 3;
            lVar7 = 0;
            do {
              if (*(longlong *)(*param_3 + lVar7 * 8) == *plVar8) {
                if ((int)lVar7 != -1) {
                  lVar6 = (longlong)(int)uStack_50;
                  uVar5 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
                  if (uStack_50._4_4_ < uVar5) {
                    FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
                  }
                  *(int *)((longlong)local_58 + lVar6 * 4) = (int)lVar7;
                }
                break;
              }
              lVar7 = lVar7 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar2);
      }
    }
    FUN_144958a06(local_58,uStack_50 & 0xffffffff);
    local_68 = local_58;
    local_60 = (int)uStack_50;
    FUN_146dd9af8(param_1,&local_68);
    local_68 = local_58;
    local_60 = (int)uStack_50;
    FUN_146ceac9a(param_3,&local_68);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(*(longlong *)(*param_1 + 0xf8) + 0x10 + (longlong)(int)param_1[1] * 0x18) != 0)
    goto LAB_146cb8226;
  }
  local_58 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  local_58[1] = 0;
  local_58[2] = 0;
  *(undefined1 *)(local_58 + 3) = 0;
  *(undefined2 *)((longlong)local_58 + 0x19) = 0x101;
  *(undefined1 *)((longlong)local_58 + 0x1d) = 5;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  *(undefined8 *)((longlong)local_58 + 0x5d) = 0;
  *(undefined8 *)((longlong)local_58 + 0x65) = 0;
  *local_58 = &PTR_FUN_149f55fb0;
  local_58[0x14] = 0;
  *(undefined4 *)(local_58 + 0x15) = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  local_58[0x10] = 0;
  local_58[0x11] = 0;
  *(undefined8 *)((longlong)local_58 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_58 + 0xb4) = 0;
  local_58[0x18] = 0;
  *(undefined4 *)(local_58 + 0x19) = 0;
  *(undefined1 *)((longlong)local_58 + 0x1c) = 0xf;
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,(int)param_1[1],&local_58);
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_58 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_58 + 0xc) == 0)) {
      (**(code **)*local_58)(local_58,1);
    }
  }
LAB_146cb8226:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cb844b FUN_146cb844b body=540 status=ok
// SIG undefined FUN_146cb844b(void)

void FUN_146cb844b(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *param_1;
  lVar7 = *param_2;
  if (lVar7 != 0 && lVar8 != 0) {
    uVar11 = (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0);
    puVar6 = (undefined8 *)(lVar7 + 0x48 + uVar11 * 8);
    local_68._0_4_ = *(undefined4 *)puVar6;
    local_68._4_4_ = *(undefined4 *)((longlong)puVar6 + 4);
    uVar1 = *puVar6;
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uVar2 = puVar6[1];
    puVar6 = (undefined8 *)(lVar7 + 0x58 + uVar11 * 8);
    local_58 = *(undefined4 *)puVar6;
    uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar3 = *puVar6;
    uStack_50 = *(undefined4 *)(puVar6 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uVar4 = puVar6[1];
    lVar7 = lVar7 + 0x68 + uVar11 * 8;
    puVar6 = (undefined8 *)(lVar7 + 8);
    uStack_40 = *(undefined4 *)puVar6;
    uStack_3c = *(undefined4 *)(lVar7 + 0xc);
    uVar5 = *puVar6;
    local_48 = 0;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      FUN_146285926(lVar8,&local_68);
    }
    else {
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x70) = uVar5;
      *(undefined8 *)(lVar8 + 0x58) = uVar3;
      *(undefined8 *)(lVar8 + 0x60) = uVar4;
      *(undefined8 *)(lVar8 + 0x48) = uVar1;
      *(undefined8 *)(lVar8 + 0x50) = uVar2;
    }
    lVar8 = *param_2 + 0x48 + (ulonglong)((*(byte *)(*param_2 + 8) & 3) == 0) * 8;
    local_68._4_4_ = *(undefined4 *)(lVar8 + 4);
    uStack_60 = *(undefined4 *)(lVar8 + 8);
    uVar1 = *(undefined8 *)(lVar8 + 4);
    uStack_5c = *(undefined4 *)(lVar8 + 0xc);
    lVar8 = *param_1;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      local_68._0_4_ = param_3;
      FUN_144b03742(lVar8,&local_68);
    }
    else {
      *(undefined4 *)(lVar8 + 0x48) = param_3;
      *(undefined8 *)(lVar8 + 0x4c) = uVar1;
      *(undefined4 *)(lVar8 + 0x54) = uStack_5c;
    }
    lVar8 = *param_2 + 0x58 + (ulonglong)((*(byte *)(*param_2 + 8) & 3) == 0) * 8;
    local_68._4_4_ = *(undefined4 *)(lVar8 + 4);
    uStack_5c = *(undefined4 *)(lVar8 + 0xc);
    local_68._0_4_ = 0;
    lVar8 = *param_1;
    uStack_60 = param_4;
    if ((*(byte *)(lVar8 + 8) & 3) == 0) {
      FUN_144aa44d4(lVar8,&local_68);
    }
    else {
      *(undefined4 *)(lVar8 + 0x58) = 0;
      *(undefined4 *)(lVar8 + 0x5c) = local_68._4_4_;
      *(undefined4 *)(lVar8 + 0x60) = param_4;
      *(undefined4 *)(lVar8 + 100) = uStack_5c;
    }
    lVar8 = *param_2;
    if ((*(uint *)(lVar8 + 8) & 3) == 0) {
      uVar9 = *(uint *)(lVar8 + 0x88);
    }
    else if ((*(uint *)(lVar8 + 8) & 4) == 0) {
      if (*(longlong *)(lVar8 + 0x78) == 0) goto LAB_146cb862d;
      uVar9 = *(uint *)(*(longlong *)(lVar8 + 0x78) + 8);
    }
    else {
      lVar8 = FUN_14484244a();
      uVar9 = (uint)(lVar8 != 0);
    }
    if (uVar9 == 1) {
      lVar8 = *param_1;
      lVar7 = *param_2;
      if ((*(uint *)(lVar7 + 8) & 3) == 0) {
        puVar10 = *(undefined4 **)(lVar7 + 0x80);
      }
      else if ((*(uint *)(lVar7 + 8) & 4) == 0) {
        puVar6 = (undefined8 *)FUN_140135db2();
        puVar10 = (undefined4 *)*puVar6;
      }
      else {
        puVar10 = (undefined4 *)(lVar7 + 0x78);
      }
      local_2c = *puVar10;
      local_68 = &local_2c;
      FUN_1401c2f3e(lVar8);
    }
    else if (1 < (int)uVar9) {
      lVar8 = *param_1;
      lVar7 = *param_2;
      if ((*(byte *)(lVar7 + 8) & 3) == 0) {
        lVar7 = lVar7 + 0x80;
      }
      else {
        lVar7 = FUN_140135db2(lVar7);
      }
      local_68._0_4_ = (undefined4)lVar7;
      local_68._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      FUN_140a4b800(lVar8);
    }
  }
LAB_146cb862d:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb8668 FUN_146cb8668 body=228 status=ok
// SIG undefined FUN_146cb8668(void)

undefined8 FUN_146cb8668(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  local_40 = param_2;
  if ((param_3 != (longlong *)0x0) && (2 < *(byte *)((longlong)param_3 + 0xc))) {
    cVar1 = FUN_1429911de(&local_40,param_3);
    uVar4 = 1;
    if (cVar1 == '\0') {
      lVar2 = (longlong)(int)param_3[1] * 0x10;
      lVar5 = (longlong)*(int *)(*(longlong *)(*param_3 + 0x668) + 8 + lVar2);
      if (lVar5 != 0) {
        plVar6 = *(longlong **)(*(longlong *)(*param_3 + 0x668) + lVar2);
        lVar5 = lVar5 << 4;
        do {
          if (*plVar6 != 0) {
            cVar1 = FUN_14299128a(param_3,plVar6);
            if (cVar1 != '\0') {
              lVar2 = *plVar6;
              if (*(byte *)(lVar2 + 0xc) < 3) {
                lVar2 = 0;
              }
              uVar3 = FUN_1429912f8(param_2,lVar2);
              cVar1 = FUN_1429911de(&local_40,uVar3);
              if (cVar1 != '\0') goto LAB_146cb86b1;
            }
          }
          plVar6 = plVar6 + 2;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
      uVar4 = 0;
    }
  }
LAB_146cb86b1:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb874e FUN_146cb874e body=69 status=ok
// SIG undefined FUN_146cb874e(void)

undefined4
FUN_146cb874e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1409bbfe0(param_1,param_2,param_4);
  iVar2 = FUN_144a41c6c(param_1,param_2);
  if (iVar2 != -1) {
    FUN_1409bcaea(param_1,iVar2,param_3);
  }
  return uVar1;
}



// FUNCTION 146cb8794 FUN_146cb8794 body=142 status=ok
// SIG undefined FUN_146cb8794(void)

float FUN_146cb8794(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((longlong)(int)param_1[1] < 2) {
    fVar3 = 1.1920929e-07;
  }
  else {
    lVar1 = *param_1;
    fVar3 = -3.4028235e+38;
    lVar2 = 0;
    fVar4 = -3.4028235e+38;
    fVar5 = -3.4028235e+38;
    do {
      fVar7 = ABS(*(float *)(lVar1 + 8 + lVar2));
      fVar6 = ABS(*(float *)(lVar1 + 4 + lVar2));
      if (fVar5 <= ABS(*(float *)(lVar1 + lVar2))) {
        fVar5 = ABS(*(float *)(lVar1 + lVar2));
      }
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      if (fVar3 <= fVar7) {
        fVar3 = fVar7;
      }
      lVar2 = lVar2 + 0xc;
    } while ((longlong)(int)param_1[1] * 0xc != lVar2);
    fVar3 = (fVar3 + fVar4 + fVar5) * 3.0 * 1.1920929e-07;
  }
  return fVar3;
}



// FUNCTION 146cb8822 FUN_146cb8822 body=243 status=ok
// SIG undefined FUN_146cb8822(void)

bool FUN_146cb8822(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2[2] - param_1[2];
  fVar3 = param_2[1] - param_1[1];
  fVar1 = *param_2 - *param_1;
  fVar5 = param_3[2] - param_1[2];
  fVar7 = param_3[1] - param_1[1];
  fVar6 = *param_3 - *param_1;
  fVar2 = fVar1 * fVar7 - fVar6 * fVar3;
  fVar6 = fVar4 * fVar6 - fVar5 * fVar1;
  fVar1 = fVar3 * fVar5 - fVar7 * fVar4;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6);
  fVar4 = 1.0 / fVar3;
  *param_4 = fVar4 * fVar1;
  param_4[1] = fVar6 * fVar4;
  param_4[2] = fVar2 * fVar4;
  return 0.0001 < fVar3;
}



// FUNCTION 146cb8916 FUN_146cb8916 body=365 status=ok
// SIG undefined FUN_146cb8916(void)

undefined8 FUN_146cb8916(longlong *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = (ulonglong)(int)param_1[1];
  if (3 < (longlong)uVar10) {
    puVar4 = (undefined8 *)*param_1;
    local_70 = *(undefined4 *)(puVar4 + 4);
    local_78 = puVar4[3];
    local_80 = *(undefined4 *)((longlong)puVar4 + 0x14);
    local_88 = *(undefined8 *)((longlong)puVar4 + 0xc);
    local_98 = *puVar4;
    local_90 = *(undefined4 *)(puVar4 + 1);
    FUN_1467fbf90(&local_68);
    *param_2 = local_68;
    param_2[1] = local_64;
    param_2[2] = local_60;
    lVar5 = *param_1;
    if (ABS((*(float *)(lVar5 + 0x2c) * local_60 +
            *(float *)(lVar5 + 0x24) * local_68 + *(float *)(lVar5 + 0x28) * local_64) - local_5c)
        <= 0.0001) {
      pfVar7 = (float *)(lVar5 + 0x38);
      uVar6 = 4;
      do {
        uVar9 = uVar6;
        if (uVar10 == uVar9) break;
        pfVar1 = pfVar7 + -1;
        pfVar2 = pfVar7 + -2;
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 3;
        uVar6 = uVar9 + 1;
      } while (ABS((fVar3 * local_60 + *pfVar2 * local_68 + *pfVar1 * local_64) - local_5c) <=
               0.0001);
      uVar8 = CONCAT71((int7)((ulonglong)pfVar7 >> 8),uVar10 <= uVar9);
      goto LAB_146cb894a;
    }
  }
  uVar8 = 0;
LAB_146cb894a:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb9e3e FUN_146cb9e3e body=517 status=ok
// SIG undefined FUN_146cb9e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cb9e3e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_b8 = (double)_DAT_14c75f068;
  local_b0 = (double)DAT_14c75f06c;
  local_88 = param_5;
  local_98 = param_6;
  local_a0 = param_3;
  local_90 = param_2;
  if (DAT_14c992dd0 == '\x01') {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_146cfb133(&local_90,&local_a0,param_4,local_20);
  }
  else {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_146cfbed9(&local_90,&local_a0,param_4,local_20);
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[3] = local_50;
  param_1[4] = uStack_48;
  param_1[5] = local_40;
  uVar1 = (uint)DAT_149931e80;
  uVar2 = DAT_149931e80._4_4_;
  uVar3 = DAT_149931e80._8_4_;
  uVar4 = DAT_149931e80._12_4_;
  *(uint *)(param_1 + 6) = local_80 ^ uVar1;
  *(uint *)((longlong)param_1 + 0x34) = uStack_7c ^ uVar2;
  *(uint *)(param_1 + 7) = uStack_78 ^ uVar3;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_74 ^ uVar4;
  param_1[8] = CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar2,(uint)local_70 ^ uVar1);
  param_1[9] = CONCAT44(local_20._4_4_ ^ uVar2,local_20._0_4_ ^ uVar1);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cba044 FUN_146cba044 body=1347 status=ok
// SIG undefined FUN_146cba044(void)

longlong FUN_146cba044(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  uint uVar13;
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
  undefined1 auVar24 [16];
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_110;
  int local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  int local_d8;
  undefined1 local_d1;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_fc = param_4;
  if (plVar4 == (longlong *)0x0) {
LAB_146cba104:
    *param_9 = 0;
  }
  else {
    cVar3 = *(char *)(*(longlong *)(param_2 + 0x28) + 0x60);
    if (cVar3 == '\x03') {
      uVar13 = *(uint *)(*plVar4 + 4 + (longlong)param_5 * 8);
    }
    else if (cVar3 == '\x02') {
      uVar13 = (uint)*(short *)(*plVar4 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar3 != '\x01') goto LAB_146cba104;
      uVar13 = (uint)*(byte *)(*plVar4 + 1 + (longlong)param_5 * 2);
    }
    uVar8 = 0x20;
    if ((int)uVar13 < 0x20) {
      uVar8 = uVar13;
    }
    *param_9 = uVar8;
    if (0 < (int)uVar13) {
      pdVar11 = (double *)(param_7 + 0x10);
      lVar12 = 0;
      do {
        lVar10 = *(longlong *)(param_2 + 0x28);
        if (*(longlong *)(lVar10 + 0x58) == 0) {
          iVar6 = -1;
        }
        else {
          local_dc = param_5;
          local_d8 = (int)lVar12;
          iVar6 = FUN_144b030e2(lVar10 + 0x58,&local_dc,&local_d1);
          lVar10 = *(longlong *)(param_2 + 0x28);
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
        lVar9 = (longlong)iVar6;
        dVar14 = (double)*(float *)(lVar10 + 8 + lVar9 * 0xc);
        dVar17 = (double)*(float *)(lVar10 + 4 + lVar9 * 0xc);
        dVar21 = (double)*(float *)(lVar10 + lVar9 * 0xc);
        dVar5 = *param_3;
        dVar16 = param_3[1];
        dVar23 = param_3[2];
        dVar19 = param_3[3];
        dVar15 = param_3[3];
        dVar22 = dVar21 * dVar23 - dVar5 * dVar14;
        dVar18 = dVar17 * dVar5 - dVar16 * dVar21;
        dVar20 = dVar14 * dVar16 - dVar23 * dVar17;
        dVar20 = dVar20 + dVar20;
        dVar22 = dVar22 + dVar22;
        dVar18 = dVar18 + dVar18;
        dVar2 = param_3[5];
        dVar1 = param_3[6];
        pdVar11[-2] = (dVar18 * dVar16 - dVar22 * dVar23) + dVar19 * dVar20 + dVar21 + param_3[4];
        pdVar11[-1] = (dVar23 * dVar20 - dVar5 * dVar18) + dVar15 * dVar22 + dVar17 + dVar2;
        *pdVar11 = dVar18 * dVar19 + dVar14 + (dVar22 * dVar5 - dVar20 * dVar16) + dVar1;
        lVar12 = lVar12 + 1;
        pdVar11 = pdVar11 + 3;
      } while (lVar12 < (int)*param_9);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  plVar4 = *(longlong **)(lVar12 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    cVar3 = *(char *)(lVar12 + 0x60);
    if (cVar3 == '\x03') {
      uVar13 = *(uint *)(*plVar4 + 4 + (longlong)local_fc * 8);
    }
    else if (cVar3 == '\x02') {
      uVar13 = (uint)*(short *)(*plVar4 + 2 + (longlong)local_fc * 4);
    }
    else {
      uVar13 = 0;
      if (cVar3 == '\x01') {
        uVar13 = (uint)*(byte *)(*plVar4 + 1 + (longlong)local_fc * 2);
      }
    }
    local_d8 = uVar13 - 1;
    local_dc = local_fc;
    iVar6 = FUN_144b030e2(lVar12 + 0x58,&local_dc,&local_d1);
    uVar8 = *param_9;
    if (1 < uVar8 && 0 < (int)uVar13) {
      lVar9 = (longlong)iVar6;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
      auVar24._0_8_ = (double)*(float *)(lVar12 + lVar9 * 0xc);
      auVar24._8_8_ = 0;
      iVar6 = 1;
      lVar10 = param_7;
      dVar15 = (double)*(float *)(lVar12 + 4 + lVar9 * 0xc);
      dVar19 = (double)*(float *)(lVar12 + 8 + lVar9 * 0xc);
      do {
        param_7 = param_8;
        lVar12 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(lVar12 + 0x58) == 0) {
          iVar7 = -1;
        }
        else {
          local_d8 = iVar6 + -1;
          local_dc = local_fc;
          iVar7 = FUN_144b030e2(lVar12 + 0x58,&local_dc,&local_d1);
          lVar12 = *(longlong *)(param_1 + 0x28);
          uVar8 = *param_9;
        }
        lVar12 = *(longlong *)(lVar12 + 0x30);
        lVar9 = (longlong)iVar7;
        dVar1 = (double)*(float *)(lVar12 + 8 + lVar9 * 0xc);
        dVar2 = (double)*(float *)(lVar12 + 4 + lVar9 * 0xc);
        dVar5 = (double)*(float *)(lVar12 + lVar9 * 0xc);
        dVar23 = auVar24._0_8_ - dVar5;
        dVar16 = *param_6 * (dVar15 - dVar2) - dVar23 * param_6[1];
        dVar14 = dVar23 * param_6[2] - (dVar19 - dVar1) * *param_6;
        dVar15 = param_6[1] * (dVar19 - dVar1) - (dVar15 - dVar2) * param_6[2];
        dVar19 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        dVar23 = SQRT(dVar19);
        local_f0 = 0.0;
        local_e8 = 0.0;
        if (9.999999747378752e-05 <= dVar19) {
          local_e8 = dVar16 / dVar23;
          local_f0 = dVar14 / dVar23;
        }
        local_f8 = (double)(-(ulonglong)(dVar19 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar19 < 9.999999747378752e-05) &
                           (ulonglong)(dVar15 / dVar23));
        local_110 = dVar1 * local_e8 + dVar5 * local_f8 + local_f0 * dVar2;
        local_118 = &local_f8;
        uVar8 = FUN_1449c8de9(lVar10,param_7,uVar8,0x20);
        *param_9 = uVar8;
        if ((int)uVar13 <= iVar6) break;
        iVar6 = iVar6 + 1;
        auVar24._8_4_ = unaff_XMM11_Dc;
        auVar24._0_8_ = dVar5;
        auVar24._12_4_ = unaff_XMM11_Dd;
        param_8 = lVar10;
        lVar10 = param_7;
        dVar15 = dVar2;
        dVar19 = dVar1;
      } while (1 < uVar8);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7;
}



// FUNCTION 146cba588 FUN_146cba588 body=4079 status=ok
// SIG undefined FUN_146cba588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cba588(longlong param_1,double *param_2,double param_3,int *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  char cVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_9d8 [32];
  double *local_9b8;
  double *local_9b0;
  double *local_9a8;
  uint *local_9a0;
  double local_990;
  double local_988;
  double local_980;
  double local_978;
  double local_970;
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  double local_900;
  double local_8f8;
  double local_8f0;
  double local_8e8;
  double local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c8 [16];
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  uint local_8a0;
  undefined4 uStack_89c;
  double dStack_898;
  double local_890;
  double local_888;
  double dStack_880;
  double local_878;
  double local_868;
  double dStack_860;
  double local_858;
  double local_850;
  double dStack_848;
  double local_840;
  double local_838;
  double dStack_830;
  double local_828;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double *local_7d0;
  longlong local_7c8;
  double local_7c0;
  undefined4 local_7b8;
  int local_7b4;
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  double local_748;
  double local_740;
  double local_738;
  double local_448;
  double local_440;
  double local_438;
  double local_148 [3];
  undefined1 local_130 [8];
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  dVar18 = (double)_DAT_14c75f020 * *(double *)(param_1 + 0x10);
  local_7b0 = 0.0;
  local_9b8 = (double *)&local_7b4;
  local_7b4 = -1;
  local_9b0 = (double *)&local_7b8;
  local_7b8 = 0xffffffff;
  local_7d8 = (param_2[2] + param_2[5] + param_2[8]) / -3.0;
  local_7e0 = (param_2[1] + param_2[4] + param_2[7]) / -3.0;
  local_7e8 = (*param_2 + param_2[3] + param_2[6]) / -3.0;
  local_9a8 = &local_7e8;
  local_7d0 = param_2;
  local_7c8 = param_1;
  local_7c0 = dVar18;
  FUN_146cbb578(local_148);
  dVar24 = local_100;
  dVar23 = local_108;
  dVar21 = dStack_110;
  dVar17 = local_118;
  if ((local_7b4 == -1) || (local_7b0 + param_3 < local_100)) goto LAB_146cba709;
  dVar19 = param_2[2];
  local_970 = *param_2;
  uVar26 = 0;
  uVar27 = 0;
  local_978 = param_2[1];
  uVar28 = 0;
  dVar20 = (param_2[3] - local_970) * (param_2[7] - local_978) -
           (param_2[6] - local_970) * (param_2[4] - local_978);
  dVar3 = (param_2[5] - dVar19) * (param_2[6] - local_970) -
          (param_2[8] - dVar19) * (param_2[3] - local_970);
  dVar25 = (param_2[4] - local_978) * (param_2[8] - dVar19) -
           (param_2[5] - dVar19) * (param_2[7] - local_978);
  dVar16 = dVar20 * dVar20 + dVar25 * dVar25 + dVar3 * dVar3;
  if (((dVar16 != 1.0) || (dVar4 = dVar20, dVar5 = dVar3, dVar6 = dVar25, NAN(dVar16))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar4 = dVar20 * dVar16;
    dVar5 = dVar3 * dVar16;
    dVar6 = dVar25 * dVar16;
  }
  local_818 = local_118;
  dStack_810 = dStack_110;
  local_808 = local_108;
  local_838 = local_148[0];
  dStack_830 = local_148[1];
  local_828 = local_148[2];
  local_9b8 = (double *)CONCAT44(local_9b8._4_4_,local_7b4);
  local_800 = dVar6;
  dStack_7f8 = dVar5;
  local_7f0 = dVar4;
  iVar7 = FUN_144918249(param_1,&local_838,&local_818,SUB84(dVar18,0));
  if (iVar7 == -1) goto LAB_146cba709;
  lVar11 = *(longlong *)(param_1 + 0x20);
  lVar10 = (longlong)iVar7;
  dVar25 = (double)*(float *)(lVar11 + 0x14 + lVar10 * 0x18);
  dVar20 = (double)*(float *)(lVar11 + 0x10 + lVar10 * 0x18);
  dVar3 = dVar4 * dVar23 + dVar6 * dVar17 + dVar5 * dVar21;
  dVar16 = (double)*(float *)(lVar11 + 0xc + lVar10 * 0x18);
  local_990 = (double)*(float *)(lVar11 + 8 + lVar10 * 0x18);
  local_8e0 = (double)*(float *)(lVar11 + 4 + lVar10 * 0x18);
  local_988 = (double)*(float *)(lVar11 + lVar10 * 0x18);
  local_980 = dVar19;
  local_850 = dVar16;
  dStack_848 = dVar20;
  local_840 = dVar25;
  if (((double)_DAT_14c75f018 < ABS(dVar3 + -1.0)) &&
     ((double)_DAT_14c75f018 < ABS(dVar23 * dVar25 + dVar17 * dVar16 + dVar21 * dVar20 + 1.0))) {
    if ((0.0 < dVar24) && (DAT_14c992bf9 != '\0')) goto LAB_146cba709;
    if (0.0 < dVar18) {
      local_9b0 = &local_748;
      local_9b8 = &local_448;
      FUN_1402691ae(param_1,&local_7a8,iVar7,local_148);
      local_9b8 = &local_888;
      FUN_146cbb71a(param_2,&local_8a0,local_130,&local_868);
      dVar21 = (local_748 - local_448) * (dStack_880 - dStack_860) -
               (local_888 - local_868) * (local_740 - local_440);
      dVar23 = (local_738 - local_438) * (local_888 - local_868) -
               (local_878 - local_858) * (local_748 - local_448);
      dVar17 = (local_740 - local_440) * (local_878 - local_858) -
               (local_738 - local_438) * (dStack_880 - dStack_860);
      dVar18 = dVar21 * dVar21 + dVar17 * dVar17 + dVar23 * dVar23;
      if (((dVar18 != 1.0) || (dVar24 = dVar23, dVar19 = dVar17, dVar22 = dVar21, NAN(dVar18))) &&
         (dVar24 = DAT_14c8464e8, dVar19 = DAT_14c8464e0, dVar22 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar18)) {
        dVar18 = 1.0 / SQRT(dVar18);
        dVar24 = dVar23 * dVar18;
        dVar19 = dVar17 * dVar18;
        dVar22 = dVar21 * dVar18;
      }
      if (ABS(dVar22 * local_108 + dVar19 * local_118 + dVar24 * dStack_110) <
          (double)_DAT_14c75f024) goto LAB_146cbad00;
      dVar18 = (local_798 - local_890) * local_108 +
               (local_7a8 - (double)CONCAT44(uStack_89c,local_8a0)) * local_118 +
               (dStack_7a0 - dStack_898) * dStack_110;
      if (param_3 < dVar18) goto LAB_146cba709;
      local_148[0] = (double)CONCAT44(uStack_89c,local_8a0) + local_118 * dVar18;
      local_148[1] = dStack_898 + dStack_110 * dVar18;
      local_148[2] = local_890 + local_108 * dVar18;
      local_120 = local_890;
      dStack_128 = dStack_898;
      local_100 = dVar18;
    }
    local_f4 = 2;
    pdVar13 = (double *)(param_4 + (longlong)*param_4 * 0x16);
    pdVar12 = local_148;
    for (lVar11 = 0xb; pdVar13 = pdVar13 + 1, lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar13 = *pdVar12;
      pdVar12 = pdVar12 + 1;
    }
    *param_4 = *param_4 + 1;
    goto LAB_146cba709;
  }
LAB_146cbad00:
  local_8c8._8_4_ = uVar26;
  local_8c8._0_8_ = dVar20;
  local_8c8._12_4_ = uVar27;
  uStack_8b0 = 0;
  dVar18 = (double)_DAT_14c75f028;
  local_8a0 = 0;
  local_8d8 = dVar16;
  uStack_8d0 = uVar28;
  local_8b8 = dVar25;
  if (dVar3 <= dVar18) {
    local_9b8 = &local_850;
    local_858 = local_840;
    local_868 = local_850;
    dStack_860 = dStack_848;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_9a0 = &local_8a0;
    local_9a8 = &local_748;
    local_9b0 = &local_448;
    lVar11 = FUN_146cbbcc1(param_1,param_2,&local_7a8,iVar7);
  }
  else {
    local_9b8 = &local_800;
    local_858 = local_7f0;
    local_868 = local_800;
    dStack_860 = dStack_7f8;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_9a0 = &local_8a0;
    local_9a8 = &local_748;
    local_9b0 = &local_448;
    lVar11 = FUN_146cbb8b1(param_2,param_1,&local_7a8,iVar7);
  }
  uVar8 = local_8a0;
  uVar26 = SUB84(local_990,0);
  uVar27 = (undefined4)((ulonglong)local_990 >> 0x20);
  cVar15 = (dVar3 <= dVar18) * '\x02' + '\x01';
  uVar14 = (ulonglong)local_8a0;
  if (uVar14 == 4) {
    local_798 = *(double *)(lVar11 + 0x28);
    local_7a8 = *(double *)(lVar11 + 0x18);
    dStack_7a0 = *(double *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x30);
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x38);
    *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar11 + 0x40);
    *(double *)(lVar11 + 0x30) = local_7a8;
    *(double *)(lVar11 + 0x38) = dStack_7a0;
    *(double *)(lVar11 + 0x40) = local_798;
    uVar14 = 4;
    uVar29 = SUB84(local_980,0);
    uVar30 = (undefined4)((ulonglong)local_980 >> 0x20);
    uVar31 = SUB84(local_970,0);
    uVar32 = (undefined4)((ulonglong)local_970 >> 0x20);
    uVar33 = SUB84(local_978,0);
    uVar34 = (undefined4)((ulonglong)local_978 >> 0x20);
    uVar35 = SUB84(local_988,0);
    uVar36 = (undefined4)((ulonglong)local_988 >> 0x20);
    if (dVar3 <= dVar18) {
LAB_146cbb447:
      iVar7 = *param_4;
      piVar9 = param_4 + (longlong)iVar7 * 0x16 + 0x17;
      lVar10 = 0;
      do {
        iVar7 = iVar7 + 1;
        *param_4 = iVar7;
        dVar18 = *(double *)(lVar11 + 0x10 + lVar10);
        dVar17 = *(double *)(lVar11 + 8 + lVar10);
        dVar21 = (dVar18 - (double)CONCAT44(uVar27,uVar26)) *
                 (double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8) +
                 (*(double *)(lVar11 + lVar10) - (double)CONCAT44(uVar36,uVar35)) *
                 (double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8) +
                 (dVar17 - local_8e0) * (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        dVar18 = dVar18 - dVar21 * (double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
        dVar17 = dVar17 - dVar21 * (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        dVar21 = *(double *)(lVar11 + lVar10) -
                 dVar21 * (double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
        *(double *)(piVar9 + -0x15) = dVar21;
        *(double *)(piVar9 + -0x13) = dVar17;
        *(double *)(piVar9 + -0x11) = dVar18;
        uVar28 = ((undefined8 *)(lVar11 + lVar10))[1];
        *(undefined8 *)(piVar9 + -0xf) = *(undefined8 *)(lVar11 + lVar10);
        *(undefined8 *)(piVar9 + -0xd) = uVar28;
        *(undefined8 *)(piVar9 + -0xb) = *(undefined8 *)(lVar11 + 0x10 + lVar10);
        *(double *)(piVar9 + -9) = -(double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
        *(double *)(piVar9 + -7) = -(double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        *(double *)(piVar9 + -5) = -(double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
        *(double *)(piVar9 + -3) =
             (dVar18 - *(double *)(lVar11 + 0x10 + lVar10)) *
             -(double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8) +
             (dVar21 - *(double *)(lVar11 + lVar10)) *
             -(double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8) +
             (dVar17 - *(double *)(lVar11 + 8 + lVar10)) *
             -(double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        *(char *)piVar9 = cVar15;
        piVar9 = piVar9 + 0x16;
        lVar10 = lVar10 + 0x18;
      } while (uVar14 * 0x18 != lVar10);
      goto LAB_146cba709;
    }
  }
  else {
    if (4 < (int)local_8a0) {
      local_888 = 0.0;
      dStack_880 = 0.0;
      local_878 = 1.0;
      local_900 = dVar5;
      local_8f8 = dVar3;
      local_8f0 = dVar18;
      FUN_140269010(&local_7a8,&local_868);
      local_8e8 = dStack_790;
      uVar1 = DAT_149931e80;
      local_938._8_8_ = 0;
      local_938._0_8_ = dStack_7a0;
      local_948._0_8_ = (ulonglong)dStack_7a0 ^ uVar1;
      local_948._8_8_ = DAT_149931e80._8_8_;
      local_928._8_8_ = 0;
      local_928._0_8_ = local_7a8;
      dVar18 = (double)((ulonglong)local_7a8 ^ uVar1);
      local_968._8_4_ = DAT_149931e80._8_4_;
      local_968._0_8_ = dVar18;
      local_968._12_4_ = DAT_149931e80._12_4_;
      local_918._8_8_ = 0;
      local_918._0_8_ = local_798;
      local_958._0_8_ = uVar1 ^ (ulonglong)local_798;
      local_958._8_8_ = DAT_149931e80._8_8_;
      lVar10 = 0;
      do {
        dVar17 = *(double *)(lVar11 + lVar10);
        dVar21 = *(double *)(lVar11 + 8 + lVar10);
        dVar23 = *(double *)(lVar11 + 0x10 + lVar10);
        dVar25 = dStack_7a0 * dVar23 + dVar21 * (double)local_958._0_8_;
        dVar25 = dVar25 + dVar25;
        dVar19 = local_7a8 * dVar21 + dVar17 * (double)local_948._0_8_;
        dVar19 = dVar19 + dVar19;
        dVar24 = local_798 * dVar17 + dVar23 * dVar18;
        dVar24 = dVar24 + dVar24;
        *(double *)(lVar11 + lVar10) =
             dVar24 * (double)local_958._0_8_ + dStack_7a0 * dVar19 + dStack_790 * dVar25 + dVar17;
        *(double *)(lVar11 + 8 + lVar10) =
             dVar19 * dVar18 + local_798 * dVar25 + dStack_790 * dVar24 + dVar21;
        *(double *)(lVar11 + 0x10 + lVar10) =
             local_7a8 * dVar24 + dVar25 * (double)local_948._0_8_ + dStack_790 * dVar19 + dVar23;
        lVar10 = lVar10 + 0x18;
      } while (uVar14 * 0x18 != lVar10);
      uVar8 = FUN_1402695a1(lVar11,uVar8);
      uVar14 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        local_918._8_8_ = dStack_7a0;
        local_918._0_8_ = local_7a8;
        local_948 = local_918 ^ _DAT_149931e80;
        dVar18 = local_798 * -1.0;
        dVar17 = dStack_790 * 1.0;
        uVar26 = (undefined4)((ulonglong)dVar17 >> 0x20);
        local_958._8_4_ = local_948._8_4_;
        local_958._12_4_ = local_948._12_4_;
        local_958._0_8_ = local_948._8_8_;
        local_968 = local_958 ^ _DAT_149931e80;
        auVar2._8_4_ = SUB84(dVar17,0);
        auVar2._0_8_ = dVar18;
        auVar2._12_4_ = uVar26;
        local_938 = _DAT_149931e80 ^ auVar2;
        local_928._8_4_ = SUB84(dVar17,0);
        local_928._0_8_ = dVar18;
        local_928._12_4_ = uVar26;
        lVar10 = 0;
        do {
          dVar21 = *(double *)(lVar11 + lVar10);
          dVar23 = *(double *)(lVar11 + 8 + lVar10);
          dVar24 = *(double *)(lVar11 + 0x10 + lVar10);
          dVar19 = (double)local_958._0_8_ * dVar24 + dVar23 * (double)local_938._0_8_;
          dVar19 = dVar19 + dVar19;
          dVar20 = (double)local_948._0_8_ * dVar23 + dVar21 * (double)local_968._0_8_;
          dVar20 = dVar20 + dVar20;
          dVar25 = dVar18 * dVar21 + dVar24 * local_7a8;
          dVar25 = dVar25 + dVar25;
          *(double *)(lVar11 + lVar10) =
               dVar25 * (double)local_938._0_8_ + (double)local_958._0_8_ * dVar20 +
               dVar17 * dVar19 + dVar21;
          *(double *)(lVar11 + 8 + lVar10) =
               dVar20 * local_7a8 + dVar18 * dVar19 + dVar17 * dVar25 + dVar23;
          *(double *)(lVar11 + 0x10 + lVar10) =
               (double)local_948._0_8_ * dVar25 + dVar19 * (double)local_968._0_8_ +
               dVar17 * dVar20 + dVar24;
          lVar10 = lVar10 + 0x18;
        } while ((ulonglong)(uVar8 * 8) * 3 != lVar10);
      }
      uVar26 = SUB84(local_990,0);
      uVar27 = (undefined4)((ulonglong)local_990 >> 0x20);
      dVar5 = local_900;
      dVar3 = local_8f8;
      dVar18 = local_8f0;
    }
    if (dVar3 <= dVar18) {
      uVar35 = SUB84(local_988,0);
      uVar36 = (undefined4)((ulonglong)local_988 >> 0x20);
      if ((int)uVar14 < 1) goto LAB_146cba709;
      goto LAB_146cbb447;
    }
    uVar29 = SUB84(local_980,0);
    uVar30 = (undefined4)((ulonglong)local_980 >> 0x20);
    uVar31 = SUB84(local_970,0);
    uVar32 = (undefined4)((ulonglong)local_970 >> 0x20);
    uVar33 = SUB84(local_978,0);
    uVar34 = (undefined4)((ulonglong)local_978 >> 0x20);
    if ((int)uVar14 < 1) goto LAB_146cba709;
  }
  iVar7 = *param_4;
  piVar9 = param_4 + (longlong)iVar7 * 0x16 + 0x17;
  lVar10 = 0;
  do {
    iVar7 = iVar7 + 1;
    *param_4 = iVar7;
    dVar18 = *(double *)(lVar11 + 0x10 + lVar10);
    dVar17 = *(double *)(lVar11 + 8 + lVar10);
    dVar21 = (dVar18 - (double)CONCAT44(uVar30,uVar29)) * dVar4 +
             (*(double *)(lVar11 + lVar10) - (double)CONCAT44(uVar32,uVar31)) * dVar6 +
             (dVar17 - (double)CONCAT44(uVar34,uVar33)) * dVar5;
    dVar18 = dVar18 - dVar21 * dVar4;
    dVar17 = dVar17 - dVar5 * dVar21;
    dVar21 = *(double *)(lVar11 + lVar10) - dVar6 * dVar21;
    *(undefined8 *)(piVar9 + -0x11) = *(undefined8 *)(lVar11 + 0x10 + lVar10);
    uVar28 = ((undefined8 *)(lVar11 + lVar10))[1];
    *(undefined8 *)(piVar9 + -0x15) = *(undefined8 *)(lVar11 + lVar10);
    *(undefined8 *)(piVar9 + -0x13) = uVar28;
    *(double *)(piVar9 + -0xf) = dVar21;
    *(double *)(piVar9 + -0xd) = dVar17;
    *(double *)(piVar9 + -0xb) = dVar18;
    *(double *)(piVar9 + -9) = local_800;
    *(double *)(piVar9 + -7) = dStack_7f8;
    *(double *)(piVar9 + -5) = local_7f0;
    *(double *)(piVar9 + -3) =
         (*(double *)(lVar11 + 0x10 + lVar10) - dVar18) * dVar4 +
         (*(double *)(lVar11 + lVar10) - dVar21) * dVar6 +
         (*(double *)(lVar11 + 8 + lVar10) - dVar17) * dVar5;
    *(char *)piVar9 = cVar15;
    piVar9 = piVar9 + 0x16;
    lVar10 = lVar10 + 0x18;
  } while (uVar14 * 0x18 != lVar10);
LAB_146cba709:
  if ((local_f0 ^ (ulonglong)auStack_9d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cbb578 FUN_146cbb578 body=416 status=ok
// SIG undefined FUN_146cbb578(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cbb578(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_78 = (double)_DAT_14c75f068;
  local_70 = (double)DAT_14c75f06c;
  local_88 = param_4;
  if (DAT_14c992dd0 == '\x01') {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    FUN_146d031ac(param_2,param_3,&local_18,&local_30);
  }
  else {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    cVar1 = FUN_146d03a60(param_2,param_3,&local_18,&local_30);
    if (cVar1 == '\0') goto LAB_146cbb697;
  }
  param_1[2] = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  param_1[3] = local_48;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  *(undefined4 *)(param_1 + 6) = local_60;
  *(uint *)((longlong)param_1 + 0x34) = uStack_5c ^ 0x80000000;
  *(undefined4 *)(param_1 + 7) = uStack_58;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_54 ^ 0x80000000;
  param_1[8] = local_50 ^ 0x8000000000000000;
  param_1[9] = local_18 ^ 0x8000000000000000;
LAB_146cbb697:
  if ((local_10 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cbb71a FUN_146cbb71a body=406 status=ok
// SIG undefined FUN_146cbb71a(void)

void FUN_146cbb71a(longlong param_1,undefined8 *param_2,double *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = *(undefined8 *)(param_1 + 0x40);
  local_a8 = *(undefined4 *)(param_1 + 0x30);
  uStack_a4 = *(undefined4 *)(param_1 + 0x34);
  uStack_a0 = *(undefined4 *)(param_1 + 0x38);
  uStack_9c = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = 0;
  uVar7 = 0;
  dVar3 = 1.79769313486232e+308;
  lVar5 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar8 = 0;
  uVar9 = 0;
  local_c8 = param_2;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar5);
    FUN_1404b61d8(&local_c0,&local_a8,puVar1,param_3);
    dVar2 = (local_b0 - param_3[2]) * (local_b0 - param_3[2]) +
            (local_c0 - *param_3) * (local_c0 - *param_3) +
            (local_b8 - param_3[1]) * (local_b8 - param_3[1]);
    if (dVar2 < dVar3) {
      param_4[2] = local_98;
      *param_4 = CONCAT44(uStack_a4,local_a8);
      param_4[1] = CONCAT44(uStack_9c,uStack_a0);
      param_5[2] = puVar1[2];
      uVar4 = puVar1[1];
      *param_5 = *puVar1;
      param_5[1] = uVar4;
      uVar8 = SUB84(local_b0,0);
      uVar9 = (undefined4)((ulonglong)local_b0 >> 0x20);
      uVar10 = SUB84(local_b8,0);
      uVar11 = (undefined4)((ulonglong)local_b8 >> 0x20);
      uVar6 = SUB84(local_c0,0);
      uVar7 = (undefined4)((ulonglong)local_c0 >> 0x20);
      dVar3 = dVar2;
    }
    local_98 = puVar1[2];
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x48);
  *local_c8 = CONCAT44(uVar7,uVar6);
  local_c8[1] = CONCAT44(uVar11,uVar10);
  local_c8[2] = CONCAT44(uVar9,uVar8);
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cbb8b1 FUN_146cbb8b1 body=1039 status=ok
// SIG undefined FUN_146cbb8b1(void)

longlong FUN_146cbb8b1(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  int local_bc;
  undefined4 local_b8;
  undefined1 local_b1;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = *(longlong **)(param_2 + 0x58);
  if (plVar5 == (longlong *)0x0) {
LAB_146cbb94b:
    *param_8 = 0;
  }
  else {
    cVar4 = *(char *)(param_2 + 0x60);
    if (cVar4 == '\x03') {
      uVar11 = *(uint *)(*plVar5 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar4 == '\x02') {
      uVar11 = (uint)*(short *)(*plVar5 + 2 + (longlong)param_4 * 4);
    }
    else {
      if (cVar4 != '\x01') goto LAB_146cbb94b;
      uVar11 = (uint)*(byte *)(*plVar5 + 1 + (longlong)param_4 * 2);
    }
    uVar9 = 0x20;
    if ((int)uVar11 < 0x20) {
      uVar9 = (ulonglong)uVar11;
    }
    *param_8 = (uint)uVar9;
    if (0 < (int)uVar11) {
      pdVar12 = (double *)(param_6 + 0x10);
      lVar13 = 0;
      do {
        if (*(longlong *)(param_2 + 0x58) == 0) {
          iVar8 = -1;
        }
        else {
          local_b8 = (undefined4)lVar13;
          local_bc = param_4;
          iVar8 = FUN_144b030e2((longlong *)(param_2 + 0x58),&local_bc,&local_b1);
        }
        lVar6 = *(longlong *)(param_2 + 0x30);
        lVar10 = (longlong)iVar8;
        dVar7 = (double)*(float *)(lVar6 + 8 + lVar10 * 0xc);
        dVar15 = (double)*(float *)(lVar6 + 4 + lVar10 * 0xc);
        dVar21 = (double)*(float *)(lVar6 + lVar10 * 0xc);
        dVar19 = *param_3;
        dVar17 = param_3[1];
        dVar20 = param_3[2];
        dVar1 = param_3[3];
        dVar23 = param_3[3];
        dVar22 = dVar21 * dVar20 - dVar19 * dVar7;
        dVar16 = dVar15 * dVar19 - dVar17 * dVar21;
        dVar18 = dVar7 * dVar17 - dVar20 * dVar15;
        dVar18 = dVar18 + dVar18;
        dVar22 = dVar22 + dVar22;
        dVar16 = dVar16 + dVar16;
        dVar3 = param_3[5];
        dVar2 = param_3[6];
        pdVar12[-2] = (dVar16 * dVar17 - dVar22 * dVar20) + dVar1 * dVar18 + dVar21 + param_3[4];
        pdVar12[-1] = (dVar20 * dVar18 - dVar19 * dVar16) + dVar23 * dVar22 + dVar15 + dVar3;
        *pdVar12 = dVar16 * dVar1 + dVar7 + (dVar22 * dVar19 - dVar18 * dVar17) + dVar2;
        lVar13 = lVar13 + 1;
        uVar9 = (ulonglong)(int)*param_8;
        pdVar12 = pdVar12 + 3;
      } while (lVar13 < (longlong)uVar9);
    }
    if (1 < (uint)uVar9) {
      uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x38);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      pdVar12 = (double *)(param_1 + 0x10);
      uVar14 = 0;
      lVar13 = param_6;
      uVar24 = (int)*(undefined8 *)(param_1 + 0x30);
      uVar25 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      dVar23 = *(double *)(param_1 + 0x40);
      do {
        param_6 = param_7;
        dVar19 = (double)CONCAT44(uVar27,uVar26);
        dVar1 = pdVar12[-2];
        dVar2 = pdVar12[-1];
        uVar26 = SUB84(dVar2,0);
        uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *pdVar12;
        dVar19 = dVar19 - dVar2;
        dVar7 = (double)CONCAT44(uVar25,uVar24) - dVar1;
        dVar17 = *param_5 * dVar19 - dVar7 * param_5[1];
        dVar7 = dVar7 * param_5[2] - (dVar23 - dVar3) * *param_5;
        dVar19 = param_5[1] * (dVar23 - dVar3) - dVar19 * param_5[2];
        dVar20 = dVar17 * dVar17 + dVar19 * dVar19 + dVar7 * dVar7;
        dVar23 = SQRT(dVar20);
        local_d0 = 0.0;
        local_c8 = 0.0;
        if (9.999999747378752e-05 <= dVar20) {
          local_c8 = dVar17 / dVar23;
          local_d0 = dVar7 / dVar23;
        }
        local_d8 = (double)(-(ulonglong)(dVar20 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar20 < 9.999999747378752e-05) &
                           (ulonglong)(dVar19 / dVar23));
        local_e0 = dVar3 * local_c8 + dVar1 * local_d8 + dVar2 * local_d0;
        local_e8 = &local_d8;
        uVar9 = FUN_1449c8de9(lVar13,param_6,uVar9 & 0xffffffff,0x20);
        *param_8 = (uint)uVar9;
        if (1 < uVar14) break;
        uVar14 = uVar14 + 1;
        pdVar12 = pdVar12 + 3;
        param_7 = lVar13;
        lVar13 = param_6;
        uVar24 = SUB84(dVar1,0);
        uVar25 = (int)((ulonglong)dVar1 >> 0x20);
        dVar23 = dVar3;
      } while (1 < (uint)uVar9);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbbcc1 FUN_146cbbcc1 body=1084 status=ok
// SIG undefined FUN_146cbbcc1(void)

longlong FUN_146cbbcc1(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_110;
  int local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  int local_d8;
  undefined1 local_d1;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_8 = 3;
  lVar14 = 0x10;
  lVar15 = 0;
  do {
    pdVar2 = (double *)(param_2 + -0x10 + lVar14);
    dVar23 = *pdVar2;
    dVar25 = pdVar2[1];
    dVar8 = *param_3;
    dVar9 = param_3[1];
    dVar10 = param_3[2];
    dVar19 = param_3[3];
    dVar3 = param_3[3];
    dVar21 = dVar25 * dVar8 - dVar23 * dVar9;
    dVar22 = *(double *)(param_2 + lVar14) * dVar9 - dVar25 * dVar10;
    dVar24 = dVar23 * dVar10 - dVar8 * *(double *)(param_2 + lVar14);
    dVar22 = dVar22 + dVar22;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar20 = *(double *)(param_2 + lVar14);
    dVar5 = param_3[5];
    dVar4 = param_3[6];
    pdVar2 = (double *)(param_6 + -0x10 + lVar14);
    *pdVar2 = (dVar21 * dVar9 - dVar24 * dVar10) + dVar19 * dVar22 + dVar23 + param_3[4];
    pdVar2[1] = (dVar10 * dVar22 - dVar8 * dVar21) + dVar3 * dVar24 + dVar25 + dVar5;
    *(double *)(param_6 + lVar14) =
         dVar21 * dVar19 + dVar20 + (dVar24 * dVar8 - dVar22 * dVar9) + dVar4;
    lVar15 = lVar15 + 1;
    lVar14 = lVar14 + 0x18;
  } while (lVar15 < (int)*param_8);
  plVar7 = *(longlong **)(param_1 + 0x58);
  if (plVar7 != (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    cVar6 = *(char *)(param_1 + 0x60);
    if (cVar6 == '\x03') {
      uVar18 = *(uint *)(*plVar7 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar6 == '\x02') {
      uVar18 = (uint)*(short *)(*plVar7 + 2 + (longlong)param_4 * 4);
    }
    else {
      uVar18 = 0;
      if (cVar6 == '\x01') {
        uVar18 = (uint)*(byte *)(*plVar7 + 1 + (longlong)param_4 * 2);
      }
    }
    local_d8 = uVar18 - 1;
    local_dc = param_4;
    iVar11 = FUN_144b030e2(plVar1,&local_dc,&local_d1);
    uVar13 = *param_8;
    if (1 < uVar13 && 0 < (int)uVar18) {
      lVar16 = (longlong)iVar11;
      lVar14 = *(longlong *)(param_1 + 0x30);
      iVar11 = 1;
      lVar15 = param_6;
      lVar17 = param_7;
      dVar3 = (double)*(float *)(lVar14 + lVar16 * 0xc);
      dVar19 = (double)*(float *)(lVar14 + 4 + lVar16 * 0xc);
      dVar20 = (double)*(float *)(lVar14 + 8 + lVar16 * 0xc);
      local_fc = param_4;
      do {
        param_6 = lVar17;
        lVar17 = lVar15;
        if (*plVar1 == 0) {
          iVar12 = -1;
        }
        else {
          local_d8 = iVar11 + -1;
          local_dc = local_fc;
          iVar12 = FUN_144b030e2(plVar1,&local_dc,&local_d1);
          uVar13 = *param_8;
        }
        lVar14 = *(longlong *)(param_1 + 0x30);
        lVar15 = (longlong)iVar12;
        dVar25 = (double)*(float *)(lVar14 + 8 + lVar15 * 0xc);
        dVar4 = (double)*(float *)(lVar14 + 4 + lVar15 * 0xc);
        dVar5 = (double)*(float *)(lVar14 + lVar15 * 0xc);
        dVar21 = *param_5 * (dVar19 - dVar4) - (dVar3 - dVar5) * param_5[1];
        dVar3 = (dVar3 - dVar5) * param_5[2] - (dVar20 - dVar25) * *param_5;
        dVar19 = param_5[1] * (dVar20 - dVar25) - (dVar19 - dVar4) * param_5[2];
        dVar20 = dVar21 * dVar21 + dVar19 * dVar19 + dVar3 * dVar3;
        dVar23 = SQRT(dVar20);
        local_f0 = 0.0;
        local_e8 = 0.0;
        if (9.999999747378752e-05 <= dVar20) {
          local_e8 = dVar21 / dVar23;
          local_f0 = dVar3 / dVar23;
        }
        local_f8 = (double)(-(ulonglong)(dVar20 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar20 < 9.999999747378752e-05) &
                           (ulonglong)(dVar19 / dVar23));
        local_110 = dVar25 * local_e8 + dVar5 * local_f8 + local_f0 * dVar4;
        local_118 = &local_f8;
        uVar13 = FUN_1449c8de9(lVar17,param_6,uVar13,0x20);
        *param_8 = uVar13;
      } while ((iVar11 < (int)uVar18) &&
              (iVar11 = iVar11 + 1, lVar15 = param_6, dVar3 = dVar5, dVar19 = dVar4, dVar20 = dVar25
              , 1 < uVar13));
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbc0fe FUN_146cbc0fe body=4080 status=ok
// SIG undefined FUN_146cbc0fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cbc0fe(longlong param_1,double *param_2,double param_3,int *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  char cVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_9d8 [32];
  double *local_9b8;
  double *local_9b0;
  double *local_9a8;
  uint *local_9a0;
  double local_990;
  double local_988;
  double local_980;
  double local_978;
  double local_970;
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  double local_900;
  double local_8f8;
  double local_8f0;
  double local_8e8;
  double local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c8 [16];
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  uint local_8a0;
  undefined4 uStack_89c;
  double dStack_898;
  double local_890;
  double local_888;
  double dStack_880;
  double local_878;
  double local_868;
  double dStack_860;
  double local_858;
  double local_850;
  double dStack_848;
  double local_840;
  double local_838;
  double dStack_830;
  double local_828;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double *local_7d0;
  longlong local_7c8;
  double local_7c0;
  undefined4 local_7b8;
  int local_7b4;
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  double local_748;
  double local_740;
  double local_738;
  double local_448;
  double local_440;
  double local_438;
  double local_148 [3];
  undefined1 local_130 [8];
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  dVar18 = (double)_DAT_14c75f020 * *(double *)(param_1 + 0x10);
  local_7b0 = 0.0;
  local_9b8 = (double *)&local_7b4;
  local_7b4 = -1;
  local_9b0 = (double *)&local_7b8;
  local_7b8 = 0xffffffff;
  local_7d8 = (param_2[2] + param_2[5] + param_2[8]) / -3.0;
  local_7e0 = (param_2[1] + param_2[4] + param_2[7]) / -3.0;
  local_7e8 = (*param_2 + param_2[3] + param_2[6]) / -3.0;
  local_9a8 = &local_7e8;
  local_7d0 = param_2;
  local_7c8 = param_1;
  local_7c0 = dVar18;
  FUN_146cbd0ef(local_148);
  dVar24 = local_100;
  dVar23 = local_108;
  dVar21 = dStack_110;
  dVar17 = local_118;
  if ((local_7b4 == -1) || (local_7b0 + param_3 < local_100)) goto LAB_146cbc27f;
  dVar19 = param_2[2];
  local_970 = *param_2;
  uVar26 = 0;
  uVar27 = 0;
  local_978 = param_2[1];
  uVar28 = 0;
  dVar20 = (param_2[3] - local_970) * (param_2[7] - local_978) -
           (param_2[6] - local_970) * (param_2[4] - local_978);
  dVar3 = (param_2[5] - dVar19) * (param_2[6] - local_970) -
          (param_2[8] - dVar19) * (param_2[3] - local_970);
  dVar25 = (param_2[4] - local_978) * (param_2[8] - dVar19) -
           (param_2[5] - dVar19) * (param_2[7] - local_978);
  dVar16 = dVar20 * dVar20 + dVar25 * dVar25 + dVar3 * dVar3;
  if (((dVar16 != 1.0) || (dVar4 = dVar20, dVar5 = dVar3, dVar6 = dVar25, NAN(dVar16))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar4 = dVar20 * dVar16;
    dVar5 = dVar3 * dVar16;
    dVar6 = dVar25 * dVar16;
  }
  local_818 = local_118;
  dStack_810 = dStack_110;
  local_808 = local_108;
  local_838 = local_148[0];
  dStack_830 = local_148[1];
  local_828 = local_148[2];
  local_9b8 = (double *)CONCAT44(local_9b8._4_4_,local_7b4);
  local_800 = dVar6;
  dStack_7f8 = dVar5;
  local_7f0 = dVar4;
  iVar7 = FUN_140a05dc3(param_1,&local_838,&local_818,SUB84(dVar18,0));
  if (iVar7 == -1) goto LAB_146cbc27f;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
  lVar11 = (longlong)iVar7;
  dVar25 = (double)*(float *)(lVar10 + 0x14 + lVar11 * 0x18);
  dVar20 = (double)*(float *)(lVar10 + 0x10 + lVar11 * 0x18);
  dVar3 = dVar4 * dVar23 + dVar6 * dVar17 + dVar5 * dVar21;
  dVar16 = (double)*(float *)(lVar10 + 0xc + lVar11 * 0x18);
  local_990 = (double)*(float *)(lVar10 + 8 + lVar11 * 0x18);
  local_8e0 = (double)*(float *)(lVar10 + 4 + lVar11 * 0x18);
  local_988 = (double)*(float *)(lVar10 + lVar11 * 0x18);
  local_980 = dVar19;
  local_850 = dVar16;
  dStack_848 = dVar20;
  local_840 = dVar25;
  if (((double)_DAT_14c75f018 < ABS(dVar3 + -1.0)) &&
     ((double)_DAT_14c75f018 < ABS(dVar23 * dVar25 + dVar17 * dVar16 + dVar21 * dVar20 + 1.0))) {
    if ((0.0 < dVar24) && (DAT_14c992bf9 != '\0')) goto LAB_146cbc27f;
    if (0.0 < dVar18) {
      local_9b0 = &local_748;
      local_9b8 = &local_448;
      FUN_1402691ae(*(longlong *)(param_1 + 0x28),&local_7a8,iVar7,local_148);
      local_9b8 = &local_888;
      FUN_146cbb71a(param_2,&local_8a0,local_130,&local_868);
      dVar21 = (local_748 - local_448) * (dStack_880 - dStack_860) -
               (local_888 - local_868) * (local_740 - local_440);
      dVar23 = (local_738 - local_438) * (local_888 - local_868) -
               (local_878 - local_858) * (local_748 - local_448);
      dVar17 = (local_740 - local_440) * (local_878 - local_858) -
               (local_738 - local_438) * (dStack_880 - dStack_860);
      dVar18 = dVar21 * dVar21 + dVar17 * dVar17 + dVar23 * dVar23;
      if (((dVar18 != 1.0) || (dVar24 = dVar23, dVar19 = dVar17, dVar22 = dVar21, NAN(dVar18))) &&
         (dVar24 = DAT_14c8464e8, dVar19 = DAT_14c8464e0, dVar22 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar18)) {
        dVar18 = 1.0 / SQRT(dVar18);
        dVar24 = dVar23 * dVar18;
        dVar19 = dVar17 * dVar18;
        dVar22 = dVar21 * dVar18;
      }
      if (ABS(dVar22 * local_108 + dVar19 * local_118 + dVar24 * dStack_110) <
          (double)_DAT_14c75f024) goto LAB_146cbc877;
      dVar18 = (local_798 - local_890) * local_108 +
               (local_7a8 - (double)CONCAT44(uStack_89c,local_8a0)) * local_118 +
               (dStack_7a0 - dStack_898) * dStack_110;
      if (param_3 < dVar18) goto LAB_146cbc27f;
      local_148[0] = (double)CONCAT44(uStack_89c,local_8a0) + local_118 * dVar18;
      local_148[1] = dStack_898 + dStack_110 * dVar18;
      local_148[2] = local_890 + local_108 * dVar18;
      local_120 = local_890;
      dStack_128 = dStack_898;
      local_100 = dVar18;
    }
    local_f4 = 2;
    pdVar13 = (double *)(param_4 + (longlong)*param_4 * 0x16);
    pdVar12 = local_148;
    for (lVar10 = 0xb; pdVar13 = pdVar13 + 1, lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar13 = *pdVar12;
      pdVar12 = pdVar12 + 1;
    }
    *param_4 = *param_4 + 1;
    goto LAB_146cbc27f;
  }
LAB_146cbc877:
  local_8c8._8_4_ = uVar26;
  local_8c8._0_8_ = dVar20;
  local_8c8._12_4_ = uVar27;
  uStack_8b0 = 0;
  dVar18 = (double)_DAT_14c75f028;
  local_8a0 = 0;
  local_8d8 = dVar16;
  uStack_8d0 = uVar28;
  local_8b8 = dVar25;
  if (dVar3 <= dVar18) {
    local_9b8 = &local_850;
    local_858 = local_840;
    local_868 = local_850;
    dStack_860 = dStack_848;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_9a0 = &local_8a0;
    local_9a8 = &local_748;
    local_9b0 = &local_448;
    lVar10 = FUN_146cbd694(param_1,param_2,&local_7a8,iVar7);
  }
  else {
    local_9b8 = &local_800;
    local_858 = local_7f0;
    local_868 = local_800;
    dStack_860 = dStack_7f8;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_9a0 = &local_8a0;
    local_9a8 = &local_748;
    local_9b0 = &local_448;
    lVar10 = FUN_146cbd290(param_2,param_1,&local_7a8,iVar7);
  }
  uVar8 = local_8a0;
  uVar26 = SUB84(local_990,0);
  uVar27 = (undefined4)((ulonglong)local_990 >> 0x20);
  cVar15 = (dVar3 <= dVar18) * '\x02' + '\x01';
  uVar14 = (ulonglong)local_8a0;
  if (uVar14 == 4) {
    local_798 = *(double *)(lVar10 + 0x28);
    local_7a8 = *(double *)(lVar10 + 0x18);
    dStack_7a0 = *(double *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar10 + 0x40);
    *(double *)(lVar10 + 0x30) = local_7a8;
    *(double *)(lVar10 + 0x38) = dStack_7a0;
    *(double *)(lVar10 + 0x40) = local_798;
    uVar14 = 4;
    uVar29 = SUB84(local_980,0);
    uVar30 = (undefined4)((ulonglong)local_980 >> 0x20);
    uVar31 = SUB84(local_970,0);
    uVar32 = (undefined4)((ulonglong)local_970 >> 0x20);
    uVar33 = SUB84(local_978,0);
    uVar34 = (undefined4)((ulonglong)local_978 >> 0x20);
    uVar35 = SUB84(local_988,0);
    uVar36 = (undefined4)((ulonglong)local_988 >> 0x20);
    if (dVar3 <= dVar18) {
LAB_146cbcfbe:
      iVar7 = *param_4;
      piVar9 = param_4 + (longlong)iVar7 * 0x16 + 0x17;
      lVar11 = 0;
      do {
        iVar7 = iVar7 + 1;
        *param_4 = iVar7;
        dVar18 = *(double *)(lVar10 + 0x10 + lVar11);
        dVar17 = *(double *)(lVar10 + 8 + lVar11);
        dVar21 = (dVar18 - (double)CONCAT44(uVar27,uVar26)) *
                 (double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8) +
                 (*(double *)(lVar10 + lVar11) - (double)CONCAT44(uVar36,uVar35)) *
                 (double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8) +
                 (dVar17 - local_8e0) * (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        dVar18 = dVar18 - dVar21 * (double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
        dVar17 = dVar17 - dVar21 * (double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        dVar21 = *(double *)(lVar10 + lVar11) -
                 dVar21 * (double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
        *(double *)(piVar9 + -0x15) = dVar21;
        *(double *)(piVar9 + -0x13) = dVar17;
        *(double *)(piVar9 + -0x11) = dVar18;
        uVar28 = ((undefined8 *)(lVar10 + lVar11))[1];
        *(undefined8 *)(piVar9 + -0xf) = *(undefined8 *)(lVar10 + lVar11);
        *(undefined8 *)(piVar9 + -0xd) = uVar28;
        *(undefined8 *)(piVar9 + -0xb) = *(undefined8 *)(lVar10 + 0x10 + lVar11);
        *(double *)(piVar9 + -9) = -(double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8);
        *(double *)(piVar9 + -7) = -(double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        *(double *)(piVar9 + -5) = -(double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8);
        *(double *)(piVar9 + -3) =
             (dVar18 - *(double *)(lVar10 + 0x10 + lVar11)) *
             -(double)CONCAT44(local_8b8._4_4_,(undefined4)local_8b8) +
             (dVar21 - *(double *)(lVar10 + lVar11)) *
             -(double)CONCAT44(local_8d8._4_4_,(undefined4)local_8d8) +
             (dVar17 - *(double *)(lVar10 + 8 + lVar11)) *
             -(double)CONCAT44(local_8c8._4_4_,local_8c8._0_4_);
        *(char *)piVar9 = cVar15;
        piVar9 = piVar9 + 0x16;
        lVar11 = lVar11 + 0x18;
      } while (uVar14 * 0x18 != lVar11);
      goto LAB_146cbc27f;
    }
  }
  else {
    if (4 < (int)local_8a0) {
      local_888 = 0.0;
      dStack_880 = 0.0;
      local_878 = 1.0;
      local_900 = dVar5;
      local_8f8 = dVar3;
      local_8f0 = dVar18;
      FUN_140269010(&local_7a8,&local_868);
      local_8e8 = dStack_790;
      uVar1 = DAT_149931e80;
      local_938._8_8_ = 0;
      local_938._0_8_ = dStack_7a0;
      local_948._0_8_ = (ulonglong)dStack_7a0 ^ uVar1;
      local_948._8_8_ = DAT_149931e80._8_8_;
      local_928._8_8_ = 0;
      local_928._0_8_ = local_7a8;
      dVar18 = (double)((ulonglong)local_7a8 ^ uVar1);
      local_968._8_4_ = DAT_149931e80._8_4_;
      local_968._0_8_ = dVar18;
      local_968._12_4_ = DAT_149931e80._12_4_;
      local_918._8_8_ = 0;
      local_918._0_8_ = local_798;
      local_958._0_8_ = uVar1 ^ (ulonglong)local_798;
      local_958._8_8_ = DAT_149931e80._8_8_;
      lVar11 = 0;
      do {
        dVar17 = *(double *)(lVar10 + lVar11);
        dVar21 = *(double *)(lVar10 + 8 + lVar11);
        dVar23 = *(double *)(lVar10 + 0x10 + lVar11);
        dVar25 = dStack_7a0 * dVar23 + dVar21 * (double)local_958._0_8_;
        dVar25 = dVar25 + dVar25;
        dVar19 = local_7a8 * dVar21 + dVar17 * (double)local_948._0_8_;
        dVar19 = dVar19 + dVar19;
        dVar24 = local_798 * dVar17 + dVar23 * dVar18;
        dVar24 = dVar24 + dVar24;
        *(double *)(lVar10 + lVar11) =
             dVar24 * (double)local_958._0_8_ + dStack_7a0 * dVar19 + dStack_790 * dVar25 + dVar17;
        *(double *)(lVar10 + 8 + lVar11) =
             dVar19 * dVar18 + local_798 * dVar25 + dStack_790 * dVar24 + dVar21;
        *(double *)(lVar10 + 0x10 + lVar11) =
             local_7a8 * dVar24 + dVar25 * (double)local_948._0_8_ + dStack_790 * dVar19 + dVar23;
        lVar11 = lVar11 + 0x18;
      } while (uVar14 * 0x18 != lVar11);
      uVar8 = FUN_1402695a1(lVar10,uVar8);
      uVar14 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        local_918._8_8_ = dStack_7a0;
        local_918._0_8_ = local_7a8;
        local_948 = local_918 ^ _DAT_149931e80;
        dVar18 = local_798 * -1.0;
        dVar17 = dStack_790 * 1.0;
        uVar26 = (undefined4)((ulonglong)dVar17 >> 0x20);
        local_958._8_4_ = local_948._8_4_;
        local_958._12_4_ = local_948._12_4_;
        local_958._0_8_ = local_948._8_8_;
        local_968 = local_958 ^ _DAT_149931e80;
        auVar2._8_4_ = SUB84(dVar17,0);
        auVar2._0_8_ = dVar18;
        auVar2._12_4_ = uVar26;
        local_938 = _DAT_149931e80 ^ auVar2;
        local_928._8_4_ = SUB84(dVar17,0);
        local_928._0_8_ = dVar18;
        local_928._12_4_ = uVar26;
        lVar11 = 0;
        do {
          dVar21 = *(double *)(lVar10 + lVar11);
          dVar23 = *(double *)(lVar10 + 8 + lVar11);
          dVar24 = *(double *)(lVar10 + 0x10 + lVar11);
          dVar19 = (double)local_958._0_8_ * dVar24 + dVar23 * (double)local_938._0_8_;
          dVar19 = dVar19 + dVar19;
          dVar20 = (double)local_948._0_8_ * dVar23 + dVar21 * (double)local_968._0_8_;
          dVar20 = dVar20 + dVar20;
          dVar25 = dVar18 * dVar21 + dVar24 * local_7a8;
          dVar25 = dVar25 + dVar25;
          *(double *)(lVar10 + lVar11) =
               dVar25 * (double)local_938._0_8_ + (double)local_958._0_8_ * dVar20 +
               dVar17 * dVar19 + dVar21;
          *(double *)(lVar10 + 8 + lVar11) =
               dVar20 * local_7a8 + dVar18 * dVar19 + dVar17 * dVar25 + dVar23;
          *(double *)(lVar10 + 0x10 + lVar11) =
               (double)local_948._0_8_ * dVar25 + dVar19 * (double)local_968._0_8_ +
               dVar17 * dVar20 + dVar24;
          lVar11 = lVar11 + 0x18;
        } while ((ulonglong)(uVar8 * 8) * 3 != lVar11);
      }
      uVar26 = SUB84(local_990,0);
      uVar27 = (undefined4)((ulonglong)local_990 >> 0x20);
      dVar5 = local_900;
      dVar3 = local_8f8;
      dVar18 = local_8f0;
    }
    if (dVar3 <= dVar18) {
      uVar35 = SUB84(local_988,0);
      uVar36 = (undefined4)((ulonglong)local_988 >> 0x20);
      if ((int)uVar14 < 1) goto LAB_146cbc27f;
      goto LAB_146cbcfbe;
    }
    uVar29 = SUB84(local_980,0);
    uVar30 = (undefined4)((ulonglong)local_980 >> 0x20);
    uVar31 = SUB84(local_970,0);
    uVar32 = (undefined4)((ulonglong)local_970 >> 0x20);
    uVar33 = SUB84(local_978,0);
    uVar34 = (undefined4)((ulonglong)local_978 >> 0x20);
    if ((int)uVar14 < 1) goto LAB_146cbc27f;
  }
  iVar7 = *param_4;
  piVar9 = param_4 + (longlong)iVar7 * 0x16 + 0x17;
  lVar11 = 0;
  do {
    iVar7 = iVar7 + 1;
    *param_4 = iVar7;
    dVar18 = *(double *)(lVar10 + 0x10 + lVar11);
    dVar17 = *(double *)(lVar10 + 8 + lVar11);
    dVar21 = (dVar18 - (double)CONCAT44(uVar30,uVar29)) * dVar4 +
             (*(double *)(lVar10 + lVar11) - (double)CONCAT44(uVar32,uVar31)) * dVar6 +
             (dVar17 - (double)CONCAT44(uVar34,uVar33)) * dVar5;
    dVar18 = dVar18 - dVar21 * dVar4;
    dVar17 = dVar17 - dVar5 * dVar21;
    dVar21 = *(double *)(lVar10 + lVar11) - dVar6 * dVar21;
    *(undefined8 *)(piVar9 + -0x11) = *(undefined8 *)(lVar10 + 0x10 + lVar11);
    uVar28 = ((undefined8 *)(lVar10 + lVar11))[1];
    *(undefined8 *)(piVar9 + -0x15) = *(undefined8 *)(lVar10 + lVar11);
    *(undefined8 *)(piVar9 + -0x13) = uVar28;
    *(double *)(piVar9 + -0xf) = dVar21;
    *(double *)(piVar9 + -0xd) = dVar17;
    *(double *)(piVar9 + -0xb) = dVar18;
    *(double *)(piVar9 + -9) = local_800;
    *(double *)(piVar9 + -7) = dStack_7f8;
    *(double *)(piVar9 + -5) = local_7f0;
    *(double *)(piVar9 + -3) =
         (*(double *)(lVar10 + 0x10 + lVar11) - dVar18) * dVar4 +
         (*(double *)(lVar10 + lVar11) - dVar21) * dVar6 +
         (*(double *)(lVar10 + 8 + lVar11) - dVar17) * dVar5;
    *(char *)piVar9 = cVar15;
    piVar9 = piVar9 + 0x16;
    lVar11 = lVar11 + 0x18;
  } while (uVar14 * 0x18 != lVar11);
LAB_146cbc27f:
  if ((local_f0 ^ (ulonglong)auStack_9d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cbd0ef FUN_146cbd0ef body=416 status=ok
// SIG undefined FUN_146cbd0ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cbd0ef(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_78 = (double)_DAT_14c75f068;
  local_70 = (double)DAT_14c75f06c;
  local_88 = param_4;
  if (DAT_14c992dd0 == '\x01') {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    FUN_146d044b9(param_2,param_3,&local_18,&local_30);
  }
  else {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    cVar1 = FUN_146d04d71(param_2,param_3,&local_18,&local_30);
    if (cVar1 == '\0') goto LAB_146cbd20e;
  }
  param_1[2] = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  param_1[3] = local_48;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  *(undefined4 *)(param_1 + 6) = local_60;
  *(uint *)((longlong)param_1 + 0x34) = uStack_5c ^ 0x80000000;
  *(undefined4 *)(param_1 + 7) = uStack_58;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_54 ^ 0x80000000;
  param_1[8] = local_50 ^ 0x8000000000000000;
  param_1[9] = local_18 ^ 0x8000000000000000;
LAB_146cbd20e:
  if ((local_10 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cbd290 FUN_146cbd290 body=1027 status=ok
// SIG undefined FUN_146cbd290(void)

longlong FUN_146cbd290(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  int local_bc;
  undefined4 local_b8;
  undefined1 local_b1;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x58);
  if (plVar5 == (longlong *)0x0) {
LAB_146cbd333:
    *param_8 = 0;
  }
  else {
    cVar4 = *(char *)(*(longlong *)(param_2 + 0x28) + 0x60);
    if (cVar4 == '\x03') {
      uVar10 = *(uint *)(*plVar5 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar4 == '\x02') {
      uVar10 = (uint)*(short *)(*plVar5 + 2 + (longlong)param_4 * 4);
    }
    else {
      if (cVar4 != '\x01') goto LAB_146cbd333;
      uVar10 = (uint)*(byte *)(*plVar5 + 1 + (longlong)param_4 * 2);
    }
    uVar8 = 0x20;
    if ((int)uVar10 < 0x20) {
      uVar8 = (ulonglong)uVar10;
    }
    *param_8 = (uint)uVar8;
    if (0 < (int)uVar10) {
      pdVar12 = (double *)(param_6 + 0x10);
      lVar13 = 0;
      do {
        lVar11 = *(longlong *)(param_2 + 0x28);
        if (*(longlong *)(lVar11 + 0x58) == 0) {
          iVar7 = -1;
        }
        else {
          local_b8 = (undefined4)lVar13;
          local_bc = param_4;
          iVar7 = FUN_144b030e2(lVar11 + 0x58,&local_bc,&local_b1);
          lVar11 = *(longlong *)(param_2 + 0x28);
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar9 = (longlong)iVar7;
        dVar6 = (double)*(float *)(lVar11 + 8 + lVar9 * 0xc);
        dVar15 = (double)*(float *)(lVar11 + 4 + lVar9 * 0xc);
        dVar21 = (double)*(float *)(lVar11 + lVar9 * 0xc);
        dVar19 = *param_3;
        dVar17 = param_3[1];
        dVar20 = param_3[2];
        dVar1 = param_3[3];
        dVar23 = param_3[3];
        dVar22 = dVar21 * dVar20 - dVar19 * dVar6;
        dVar16 = dVar15 * dVar19 - dVar17 * dVar21;
        dVar18 = dVar6 * dVar17 - dVar20 * dVar15;
        dVar18 = dVar18 + dVar18;
        dVar22 = dVar22 + dVar22;
        dVar16 = dVar16 + dVar16;
        dVar3 = param_3[5];
        dVar2 = param_3[6];
        pdVar12[-2] = (dVar16 * dVar17 - dVar22 * dVar20) + dVar1 * dVar18 + dVar21 + param_3[4];
        pdVar12[-1] = (dVar20 * dVar18 - dVar19 * dVar16) + dVar23 * dVar22 + dVar15 + dVar3;
        *pdVar12 = dVar16 * dVar1 + dVar6 + (dVar22 * dVar19 - dVar18 * dVar17) + dVar2;
        lVar13 = lVar13 + 1;
        uVar8 = (ulonglong)(int)*param_8;
        pdVar12 = pdVar12 + 3;
      } while (lVar13 < (longlong)uVar8);
    }
    if (1 < (uint)uVar8) {
      uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x38);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      pdVar12 = (double *)(param_1 + 0x10);
      uVar14 = 0;
      lVar13 = param_6;
      uVar24 = (int)*(undefined8 *)(param_1 + 0x30);
      uVar25 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      dVar23 = *(double *)(param_1 + 0x40);
      do {
        param_6 = param_7;
        dVar19 = (double)CONCAT44(uVar27,uVar26);
        dVar1 = pdVar12[-2];
        dVar2 = pdVar12[-1];
        uVar26 = SUB84(dVar2,0);
        uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *pdVar12;
        dVar19 = dVar19 - dVar2;
        dVar6 = (double)CONCAT44(uVar25,uVar24) - dVar1;
        dVar17 = *param_5 * dVar19 - dVar6 * param_5[1];
        dVar6 = dVar6 * param_5[2] - (dVar23 - dVar3) * *param_5;
        dVar19 = param_5[1] * (dVar23 - dVar3) - dVar19 * param_5[2];
        dVar20 = dVar17 * dVar17 + dVar19 * dVar19 + dVar6 * dVar6;
        dVar23 = SQRT(dVar20);
        local_d0 = 0.0;
        local_c8 = 0.0;
        if (9.999999747378752e-05 <= dVar20) {
          local_c8 = dVar17 / dVar23;
          local_d0 = dVar6 / dVar23;
        }
        local_d8 = (double)(-(ulonglong)(dVar20 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar20 < 9.999999747378752e-05) &
                           (ulonglong)(dVar19 / dVar23));
        local_e0 = dVar3 * local_c8 + dVar1 * local_d8 + dVar2 * local_d0;
        local_e8 = &local_d8;
        uVar8 = FUN_1449c8de9(lVar13,param_6,uVar8 & 0xffffffff,0x20);
        *param_8 = (uint)uVar8;
        if (1 < uVar14) break;
        uVar14 = uVar14 + 1;
        pdVar12 = pdVar12 + 3;
        param_7 = lVar13;
        lVar13 = param_6;
        uVar24 = SUB84(dVar1,0);
        uVar25 = (int)((ulonglong)dVar1 >> 0x20);
        dVar23 = dVar3;
      } while (1 < (uint)uVar8);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbd694 FUN_146cbd694 body=1100 status=ok
// SIG undefined FUN_146cbd694(void)

longlong FUN_146cbd694(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_110;
  int local_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  int local_dc;
  int local_d8;
  undefined1 local_d1;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_8 = 3;
  lVar13 = 0x10;
  lVar14 = 0;
  do {
    pdVar1 = (double *)(param_2 + -0x10 + lVar13);
    dVar22 = *pdVar1;
    dVar24 = pdVar1[1];
    dVar7 = *param_3;
    dVar8 = param_3[1];
    dVar9 = param_3[2];
    dVar18 = param_3[3];
    dVar2 = param_3[3];
    dVar20 = dVar24 * dVar7 - dVar22 * dVar8;
    dVar21 = *(double *)(param_2 + lVar13) * dVar8 - dVar24 * dVar9;
    dVar23 = dVar22 * dVar9 - dVar7 * *(double *)(param_2 + lVar13);
    dVar21 = dVar21 + dVar21;
    dVar23 = dVar23 + dVar23;
    dVar20 = dVar20 + dVar20;
    dVar19 = *(double *)(param_2 + lVar13);
    dVar4 = param_3[5];
    dVar3 = param_3[6];
    pdVar1 = (double *)(param_6 + -0x10 + lVar13);
    *pdVar1 = (dVar20 * dVar8 - dVar23 * dVar9) + dVar18 * dVar21 + dVar22 + param_3[4];
    pdVar1[1] = (dVar9 * dVar21 - dVar7 * dVar20) + dVar2 * dVar23 + dVar24 + dVar4;
    *(double *)(param_6 + lVar13) =
         dVar20 * dVar18 + dVar19 + (dVar23 * dVar7 - dVar21 * dVar8) + dVar3;
    lVar14 = lVar14 + 1;
    lVar13 = lVar13 + 0x18;
  } while (lVar14 < (int)*param_8);
  lVar13 = *(longlong *)(param_1 + 0x28);
  plVar6 = *(longlong **)(lVar13 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar5 = *(char *)(lVar13 + 0x60);
    if (cVar5 == '\x03') {
      uVar17 = *(uint *)(*plVar6 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar5 == '\x02') {
      uVar17 = (uint)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
    }
    else {
      uVar17 = 0;
      if (cVar5 == '\x01') {
        uVar17 = (uint)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      }
    }
    local_d8 = uVar17 - 1;
    local_dc = param_4;
    iVar10 = FUN_144b030e2(lVar13 + 0x58,&local_dc,&local_d1);
    uVar12 = *param_8;
    if (1 < uVar12 && 0 < (int)uVar17) {
      lVar15 = (longlong)iVar10;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
      iVar10 = 1;
      lVar14 = param_6;
      lVar16 = param_7;
      dVar2 = (double)*(float *)(lVar13 + lVar15 * 0xc);
      dVar18 = (double)*(float *)(lVar13 + 4 + lVar15 * 0xc);
      dVar19 = (double)*(float *)(lVar13 + 8 + lVar15 * 0xc);
      local_fc = param_4;
      do {
        param_6 = lVar16;
        lVar16 = lVar14;
        lVar13 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(lVar13 + 0x58) == 0) {
          iVar11 = -1;
        }
        else {
          local_d8 = iVar10 + -1;
          local_dc = local_fc;
          iVar11 = FUN_144b030e2(lVar13 + 0x58,&local_dc,&local_d1);
          lVar13 = *(longlong *)(param_1 + 0x28);
          uVar12 = *param_8;
        }
        lVar13 = *(longlong *)(lVar13 + 0x30);
        lVar14 = (longlong)iVar11;
        dVar24 = (double)*(float *)(lVar13 + 8 + lVar14 * 0xc);
        dVar3 = (double)*(float *)(lVar13 + 4 + lVar14 * 0xc);
        dVar4 = (double)*(float *)(lVar13 + lVar14 * 0xc);
        dVar20 = *param_5 * (dVar18 - dVar3) - (dVar2 - dVar4) * param_5[1];
        dVar2 = (dVar2 - dVar4) * param_5[2] - (dVar19 - dVar24) * *param_5;
        dVar18 = param_5[1] * (dVar19 - dVar24) - (dVar18 - dVar3) * param_5[2];
        dVar19 = dVar20 * dVar20 + dVar18 * dVar18 + dVar2 * dVar2;
        dVar22 = SQRT(dVar19);
        local_f0 = 0.0;
        local_e8 = 0.0;
        if (9.999999747378752e-05 <= dVar19) {
          local_e8 = dVar20 / dVar22;
          local_f0 = dVar2 / dVar22;
        }
        local_f8 = (double)(-(ulonglong)(dVar19 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar19 < 9.999999747378752e-05) &
                           (ulonglong)(dVar18 / dVar22));
        local_110 = dVar24 * local_e8 + dVar4 * local_f8 + local_f0 * dVar3;
        local_118 = &local_f8;
        uVar12 = FUN_1449c8de9(lVar16,param_6,uVar12,0x20);
        *param_8 = uVar12;
      } while ((iVar10 < (int)uVar17) &&
              (iVar10 = iVar10 + 1, lVar14 = param_6, dVar2 = dVar4, dVar18 = dVar3, dVar19 = dVar24
              , 1 < uVar12));
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbdae1 FUN_146cbdae1 body=3917 status=ok
// SIG undefined FUN_146cbdae1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cbdae1(longlong param_1,double *param_2,double param_3,int *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_9a8 [32];
  double *local_988;
  double *local_980;
  double *local_978;
  uint *local_970;
  double local_960;
  double local_958;
  double local_950;
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  undefined1 local_8f8 [16];
  double local_8e0;
  double local_8d8;
  double local_8d0;
  double local_8c8;
  uint local_8c0;
  undefined4 uStack_8bc;
  double dStack_8b8;
  double local_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double local_888;
  double dStack_880;
  double local_878;
  double local_868;
  double dStack_860;
  double local_858;
  double local_850;
  double local_848;
  double local_840;
  double local_838;
  double dStack_830;
  double local_828;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double *local_7d0;
  longlong local_7c8;
  double local_7c0;
  undefined4 local_7b8;
  int local_7b4;
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  double local_748;
  double local_740;
  double local_738;
  double local_448;
  double local_440;
  double local_438;
  double local_148 [3];
  undefined1 local_130 [8];
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_9a8;
  dVar20 = (double)_DAT_14c75f020 * *(double *)(param_1 + 0x10);
  local_7b0 = 0.0;
  local_988 = (double *)&local_7b4;
  local_7b4 = -1;
  local_980 = (double *)&local_7b8;
  local_7b8 = 0xffffffff;
  local_7d8 = (param_2[2] + param_2[5] + param_2[8]) / -3.0;
  local_7e0 = (param_2[1] + param_2[4] + param_2[7]) / -3.0;
  local_7e8 = (*param_2 + param_2[3] + param_2[6]) / -3.0;
  local_978 = &local_7e8;
  local_7d0 = param_2;
  local_7c8 = param_1;
  local_7c0 = dVar20;
  FUN_146cbea2f(local_148);
  dVar19 = local_100;
  if ((local_7b4 == -1) || (local_7b0 + param_3 < local_100)) goto LAB_146cbdc62;
  dVar23 = param_2[2];
  local_950 = *param_2;
  local_958 = param_2[1];
  dVar25 = (param_2[3] - local_950) * (param_2[7] - local_958) -
           (param_2[6] - local_950) * (param_2[4] - local_958);
  dVar21 = (param_2[5] - dVar23) * (param_2[6] - local_950) -
           (param_2[8] - dVar23) * (param_2[3] - local_950);
  dVar4 = (param_2[4] - local_958) * (param_2[8] - dVar23) -
          (param_2[5] - dVar23) * (param_2[7] - local_958);
  dVar18 = dVar25 * dVar25 + dVar4 * dVar4 + dVar21 * dVar21;
  if (((dVar18 != 1.0) || (dVar5 = dVar25, dVar6 = dVar21, dVar7 = dVar4, NAN(dVar18))) &&
     (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar18)) {
    dVar18 = 1.0 / SQRT(dVar18);
    dVar5 = dVar25 * dVar18;
    dVar6 = dVar21 * dVar18;
    dVar7 = dVar4 * dVar18;
  }
  local_818 = local_118;
  dStack_810 = dStack_110;
  local_808 = local_108;
  local_838 = local_148[0];
  dStack_830 = local_148[1];
  local_828 = local_148[2];
  local_988 = (double *)CONCAT44(local_988._4_4_,local_7b4);
  local_800 = dVar7;
  dStack_7f8 = dVar6;
  local_7f0 = dVar5;
  iVar9 = FUN_1409cb266(param_1,&local_838,&local_818,SUB84(dVar20,0));
  if (iVar9 == -1) goto LAB_146cbdc62;
  dVar4 = dVar5 * local_108 + dVar7 * local_118 + dVar6 * dStack_110;
  local_960 = dVar23;
  FUN_1404c21ca(param_1,iVar9,&local_868,&local_850);
  if (((double)_DAT_14c75f018 < ABS(dVar4 + -1.0)) &&
     ((double)_DAT_14c75f018 <
      ABS(local_858 * local_108 + local_868 * local_118 + dStack_860 * dStack_110 + 1.0))) {
    if ((0.0 < dVar19) && (DAT_14c992bf9 != '\0')) goto LAB_146cbdc62;
    if (0.0 < dVar20) {
      local_980 = &local_748;
      local_988 = &local_448;
      FUN_146cbebd0(param_1,&local_7a8,iVar9,local_148);
      local_988 = &local_8a8;
      FUN_146cbb71a(param_2,&local_8c0,local_130,&local_888);
      dVar23 = (local_748 - local_448) * (dStack_8a0 - dStack_880) -
               (local_8a8 - local_888) * (local_740 - local_440);
      dVar25 = (local_738 - local_438) * (local_8a8 - local_888) -
               (local_898 - local_878) * (local_748 - local_448);
      dVar19 = (local_740 - local_440) * (local_898 - local_878) -
               (local_738 - local_438) * (dStack_8a0 - dStack_880);
      dVar20 = dVar23 * dVar23 + dVar19 * dVar19 + dVar25 * dVar25;
      if (((dVar20 != 1.0) || (dVar21 = dVar25, dVar18 = dVar19, dVar24 = dVar23, NAN(dVar20))) &&
         (dVar21 = DAT_14c8464e8, dVar18 = DAT_14c8464e0, dVar24 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar20)) {
        dVar20 = 1.0 / SQRT(dVar20);
        dVar21 = dVar25 * dVar20;
        dVar18 = dVar19 * dVar20;
        dVar24 = dVar23 * dVar20;
      }
      if (ABS(dVar24 * local_108 + dVar18 * local_118 + dVar21 * dStack_110) <
          (double)_DAT_14c75f024) goto LAB_146cbe1aa;
      dVar20 = (local_798 - local_8b0) * local_108 +
               (local_7a8 - (double)CONCAT44(uStack_8bc,local_8c0)) * local_118 +
               (dStack_7a0 - dStack_8b8) * dStack_110;
      if (param_3 < dVar20) goto LAB_146cbdc62;
      local_148[0] = (double)CONCAT44(uStack_8bc,local_8c0) + local_118 * dVar20;
      local_148[1] = dStack_8b8 + dStack_110 * dVar20;
      local_148[2] = local_8b0 + local_108 * dVar20;
      local_120 = local_8b0;
      dStack_128 = dStack_8b8;
      local_100 = dVar20;
    }
    local_f4 = 2;
    pdVar14 = (double *)(param_4 + (longlong)*param_4 * 0x16);
    pdVar13 = local_148;
    for (lVar12 = 0xb; pdVar14 = pdVar14 + 1, lVar12 != 0; lVar12 = lVar12 + -1) {
      *pdVar14 = *pdVar13;
      pdVar13 = pdVar13 + 1;
    }
    *param_4 = *param_4 + 1;
    goto LAB_146cbdc62;
  }
LAB_146cbe1aa:
  dVar20 = (double)_DAT_14c75f028;
  local_8c0 = 0;
  if (dVar4 <= dVar20) {
    local_878 = local_858;
    local_888 = local_868;
    dStack_880 = dStack_860;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_970 = &local_8c0;
    local_978 = &local_748;
    local_980 = &local_448;
    local_988 = &local_868;
    lVar12 = FUN_146cbf128(param_1,param_2,&local_7a8,iVar9);
  }
  else {
    local_988 = &local_800;
    local_878 = local_7f0;
    local_888 = local_800;
    dStack_880 = dStack_7f8;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_970 = &local_8c0;
    local_978 = &local_748;
    local_980 = &local_448;
    lVar12 = FUN_146cbed07(param_2,param_1,&local_7a8,iVar9);
  }
  uVar10 = local_8c0;
  cVar17 = (dVar4 <= dVar20) * '\x02' + '\x01';
  uVar15 = (ulonglong)local_8c0;
  if (uVar15 == 4) {
    local_798 = *(double *)(lVar12 + 0x28);
    local_7a8 = *(double *)(lVar12 + 0x18);
    dStack_7a0 = *(double *)(lVar12 + 0x20);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar12 + 0x40);
    *(double *)(lVar12 + 0x30) = local_7a8;
    *(double *)(lVar12 + 0x38) = dStack_7a0;
    *(double *)(lVar12 + 0x40) = local_798;
    uVar15 = 4;
    uVar26 = SUB84(local_960,0);
    uVar27 = (undefined4)((ulonglong)local_960 >> 0x20);
    uVar28 = SUB84(local_950,0);
    uVar29 = (undefined4)((ulonglong)local_950 >> 0x20);
    uVar30 = SUB84(local_958,0);
    uVar31 = (undefined4)((ulonglong)local_958 >> 0x20);
    if (dVar4 <= dVar20) {
LAB_146cbe878:
      iVar9 = *param_4;
      piVar11 = param_4 + (longlong)iVar9 * 0x16 + 0x17;
      lVar16 = 0;
      do {
        iVar9 = iVar9 + 1;
        *param_4 = iVar9;
        dVar20 = *(double *)(lVar12 + 0x10 + lVar16);
        dVar19 = *(double *)(lVar12 + 8 + lVar16);
        dVar23 = (dVar20 - local_840) * local_858 +
                 (*(double *)(lVar12 + lVar16) - local_850) * local_868 +
                 (dVar19 - local_848) * dStack_860;
        dVar20 = dVar20 - dVar23 * local_858;
        dVar19 = dVar19 - dStack_860 * dVar23;
        dVar23 = *(double *)(lVar12 + lVar16) - local_868 * dVar23;
        *(double *)(piVar11 + -0x15) = dVar23;
        *(double *)(piVar11 + -0x13) = dVar19;
        *(double *)(piVar11 + -0x11) = dVar20;
        uVar8 = ((undefined8 *)(lVar12 + lVar16))[1];
        *(undefined8 *)(piVar11 + -0xf) = *(undefined8 *)(lVar12 + lVar16);
        *(undefined8 *)(piVar11 + -0xd) = uVar8;
        *(undefined8 *)(piVar11 + -0xb) = *(undefined8 *)(lVar12 + 0x10 + lVar16);
        *(double *)(piVar11 + -9) = -local_868;
        *(double *)(piVar11 + -7) = -dStack_860;
        *(double *)(piVar11 + -5) = -local_858;
        *(double *)(piVar11 + -3) =
             (dVar20 - *(double *)(lVar12 + 0x10 + lVar16)) * -local_858 +
             (dVar23 - *(double *)(lVar12 + lVar16)) * -local_868 +
             (dVar19 - *(double *)(lVar12 + 8 + lVar16)) * -dStack_860;
        *(char *)piVar11 = cVar17;
        piVar11 = piVar11 + 0x16;
        lVar16 = lVar16 + 0x18;
      } while (uVar15 * 0x18 != lVar16);
      goto LAB_146cbdc62;
    }
  }
  else {
    if (4 < (int)local_8c0) {
      local_8a8 = 0.0;
      dStack_8a0 = 0.0;
      local_898 = 1.0;
      local_8e0 = dVar6;
      local_8d8 = dVar4;
      local_8d0 = dVar20;
      FUN_140269010(&local_7a8,&local_888);
      local_8c8 = dStack_790;
      uVar1 = DAT_149931e80;
      local_918._8_8_ = 0;
      local_918._0_8_ = dStack_7a0;
      local_928._0_8_ = (ulonglong)dStack_7a0 ^ uVar1;
      local_928._8_8_ = DAT_149931e80._8_8_;
      local_908._8_8_ = 0;
      local_908._0_8_ = local_7a8;
      dVar20 = (double)((ulonglong)local_7a8 ^ uVar1);
      local_948._8_4_ = DAT_149931e80._8_4_;
      local_948._0_8_ = dVar20;
      local_948._12_4_ = DAT_149931e80._12_4_;
      local_8f8._8_8_ = 0;
      local_8f8._0_8_ = local_798;
      local_938._0_8_ = uVar1 ^ (ulonglong)local_798;
      local_938._8_8_ = DAT_149931e80._8_8_;
      lVar16 = 0;
      do {
        dVar19 = *(double *)(lVar12 + lVar16);
        dVar23 = *(double *)(lVar12 + 8 + lVar16);
        dVar4 = *(double *)(lVar12 + 0x10 + lVar16);
        dVar18 = dStack_7a0 * dVar4 + dVar23 * (double)local_938._0_8_;
        dVar18 = dVar18 + dVar18;
        dVar21 = local_7a8 * dVar23 + dVar19 * (double)local_928._0_8_;
        dVar21 = dVar21 + dVar21;
        dVar25 = local_798 * dVar19 + dVar4 * dVar20;
        dVar25 = dVar25 + dVar25;
        *(double *)(lVar12 + lVar16) =
             dVar25 * (double)local_938._0_8_ + dStack_7a0 * dVar21 + dStack_790 * dVar18 + dVar19;
        *(double *)(lVar12 + 8 + lVar16) =
             dVar21 * dVar20 + local_798 * dVar18 + dStack_790 * dVar25 + dVar23;
        *(double *)(lVar12 + 0x10 + lVar16) =
             local_7a8 * dVar25 + dVar18 * (double)local_928._0_8_ + dStack_790 * dVar21 + dVar4;
        lVar16 = lVar16 + 0x18;
      } while (uVar15 * 0x18 != lVar16);
      uVar10 = FUN_1402695a1(lVar12,uVar10);
      uVar15 = (ulonglong)uVar10;
      dVar6 = local_8e0;
      dVar4 = local_8d8;
      dVar20 = local_8d0;
      if (uVar10 != 0) {
        local_8f8._8_8_ = dStack_7a0;
        local_8f8._0_8_ = local_7a8;
        local_928 = local_8f8 ^ _DAT_149931e80;
        dVar19 = local_798 * -1.0;
        dVar23 = dStack_790 * 1.0;
        uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
        local_938._8_4_ = local_928._8_4_;
        local_938._12_4_ = local_928._12_4_;
        local_938._0_8_ = local_928._8_8_;
        local_948 = local_938 ^ _DAT_149931e80;
        auVar2._8_4_ = SUB84(dVar23,0);
        auVar2._0_8_ = dVar19;
        auVar2._12_4_ = uVar26;
        local_918 = _DAT_149931e80 ^ auVar2;
        local_908._8_4_ = SUB84(dVar23,0);
        local_908._0_8_ = dVar19;
        local_908._12_4_ = uVar26;
        lVar16 = 0;
        do {
          dVar25 = *(double *)(lVar12 + lVar16);
          dVar21 = *(double *)(lVar12 + 8 + lVar16);
          dVar18 = *(double *)(lVar12 + 0x10 + lVar16);
          dVar24 = (double)local_938._0_8_ * dVar18 + dVar21 * (double)local_918._0_8_;
          dVar24 = dVar24 + dVar24;
          dVar22 = (double)local_928._0_8_ * dVar21 + dVar25 * (double)local_948._0_8_;
          dVar22 = dVar22 + dVar22;
          dVar3 = dVar19 * dVar25 + dVar18 * local_7a8;
          dVar3 = dVar3 + dVar3;
          *(double *)(lVar12 + lVar16) =
               dVar3 * (double)local_918._0_8_ + (double)local_938._0_8_ * dVar22 +
               dVar23 * dVar24 + dVar25;
          *(double *)(lVar12 + 8 + lVar16) =
               dVar22 * local_7a8 + dVar19 * dVar24 + dVar23 * dVar3 + dVar21;
          *(double *)(lVar12 + 0x10 + lVar16) =
               (double)local_928._0_8_ * dVar3 + dVar24 * (double)local_948._0_8_ +
               dVar23 * dVar22 + dVar18;
          lVar16 = lVar16 + 0x18;
        } while ((ulonglong)(uVar10 * 8) * 3 != lVar16);
      }
    }
    if (dVar4 <= dVar20) {
      if ((int)uVar15 < 1) goto LAB_146cbdc62;
      goto LAB_146cbe878;
    }
    uVar26 = SUB84(local_960,0);
    uVar27 = (undefined4)((ulonglong)local_960 >> 0x20);
    uVar28 = SUB84(local_950,0);
    uVar29 = (undefined4)((ulonglong)local_950 >> 0x20);
    uVar30 = SUB84(local_958,0);
    uVar31 = (undefined4)((ulonglong)local_958 >> 0x20);
    if ((int)uVar15 < 1) goto LAB_146cbdc62;
  }
  iVar9 = *param_4;
  piVar11 = param_4 + (longlong)iVar9 * 0x16 + 0x17;
  lVar16 = 0;
  do {
    iVar9 = iVar9 + 1;
    *param_4 = iVar9;
    dVar20 = *(double *)(lVar12 + 0x10 + lVar16);
    dVar19 = *(double *)(lVar12 + 8 + lVar16);
    dVar23 = (dVar20 - (double)CONCAT44(uVar27,uVar26)) * dVar5 +
             (*(double *)(lVar12 + lVar16) - (double)CONCAT44(uVar29,uVar28)) * dVar7 +
             (dVar19 - (double)CONCAT44(uVar31,uVar30)) * dVar6;
    dVar20 = dVar20 - dVar23 * dVar5;
    dVar19 = dVar19 - dVar6 * dVar23;
    dVar23 = *(double *)(lVar12 + lVar16) - dVar7 * dVar23;
    *(undefined8 *)(piVar11 + -0x11) = *(undefined8 *)(lVar12 + 0x10 + lVar16);
    uVar8 = ((undefined8 *)(lVar12 + lVar16))[1];
    *(undefined8 *)(piVar11 + -0x15) = *(undefined8 *)(lVar12 + lVar16);
    *(undefined8 *)(piVar11 + -0x13) = uVar8;
    *(double *)(piVar11 + -0xf) = dVar23;
    *(double *)(piVar11 + -0xd) = dVar19;
    *(double *)(piVar11 + -0xb) = dVar20;
    *(double *)(piVar11 + -9) = local_800;
    *(double *)(piVar11 + -7) = dStack_7f8;
    *(double *)(piVar11 + -5) = local_7f0;
    *(double *)(piVar11 + -3) =
         (*(double *)(lVar12 + 0x10 + lVar16) - dVar20) * dVar5 +
         (*(double *)(lVar12 + lVar16) - dVar23) * dVar7 +
         (*(double *)(lVar12 + 8 + lVar16) - dVar19) * dVar6;
    *(char *)piVar11 = cVar17;
    piVar11 = piVar11 + 0x16;
    lVar16 = lVar16 + 0x18;
  } while (uVar15 * 0x18 != lVar16);
LAB_146cbdc62:
  if ((local_f0 ^ (ulonglong)auStack_9a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cbea2f FUN_146cbea2f body=416 status=ok
// SIG undefined FUN_146cbea2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cbea2f(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_78 = (double)_DAT_14c75f068;
  local_70 = (double)DAT_14c75f06c;
  local_88 = param_4;
  if (DAT_14c992dd0 == '\x01') {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    FUN_146d057d7(param_2,param_3,&local_18,&local_30);
  }
  else {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    cVar1 = FUN_146d0609b(param_2,param_3,&local_18,&local_30);
    if (cVar1 == '\0') goto LAB_146cbeb4e;
  }
  param_1[2] = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  param_1[3] = local_48;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  *(undefined4 *)(param_1 + 6) = local_60;
  *(uint *)((longlong)param_1 + 0x34) = uStack_5c ^ 0x80000000;
  *(undefined4 *)(param_1 + 7) = uStack_58;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_54 ^ 0x80000000;
  param_1[8] = local_50 ^ 0x8000000000000000;
  param_1[9] = local_18 ^ 0x8000000000000000;
LAB_146cbeb4e:
  if ((local_10 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cbebd0 FUN_146cbebd0 body=310 status=ok
// SIG undefined FUN_146cbebd0(void)

double * FUN_146cbebd0(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                      double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  double *local_78;
  double *local_70;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *(double *)(param_1 + 0x48) * param_4[2];
  local_58 = *(double *)(param_1 + 0x40) * param_4[1];
  local_60 = *(double *)(param_1 + 0x38) * *param_4;
  local_70 = param_6;
  local_78 = param_5;
  FUN_1402691ae(*(undefined8 *)(param_1 + 0x88),&local_48);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  *param_5 = *param_5 * *(double *)(param_1 + 0x20);
  param_5[1] = param_5[1] * dVar2;
  param_5[2] = param_5[2] * dVar1;
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  *param_6 = *param_6 * *(double *)(param_1 + 0x20);
  param_6[1] = param_6[1] * dVar2;
  param_6[2] = param_6[2] * dVar1;
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  *param_2 = local_48 * *(double *)(param_1 + 0x20);
  param_2[1] = local_40 * dVar2;
  param_2[2] = local_38 * dVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cbed07 FUN_146cbed07 body=1056 status=ok
// SIG undefined FUN_146cbed07(void)

longlong FUN_146cbed07(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  int local_bc;
  undefined4 local_b8;
  undefined1 local_b1;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x58);
  if (plVar5 == (longlong *)0x0) {
LAB_146cbedad:
    *param_8 = 0;
  }
  else {
    cVar4 = *(char *)(*(longlong *)(param_2 + 0x88) + 0x60);
    if (cVar4 == '\x03') {
      uVar10 = *(uint *)(*plVar5 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar4 == '\x02') {
      uVar10 = (uint)*(short *)(*plVar5 + 2 + (longlong)param_4 * 4);
    }
    else {
      if (cVar4 != '\x01') goto LAB_146cbedad;
      uVar10 = (uint)*(byte *)(*plVar5 + 1 + (longlong)param_4 * 2);
    }
    uVar8 = 0x20;
    if ((int)uVar10 < 0x20) {
      uVar8 = (ulonglong)uVar10;
    }
    *param_8 = (uint)uVar8;
    if (0 < (int)uVar10) {
      pdVar12 = (double *)(param_6 + 0x10);
      lVar13 = 0;
      do {
        lVar11 = *(longlong *)(param_2 + 0x88);
        if (*(longlong *)(lVar11 + 0x58) == 0) {
          iVar7 = -1;
        }
        else {
          local_b8 = (undefined4)lVar13;
          local_bc = param_4;
          iVar7 = FUN_144b030e2(lVar11 + 0x58,&local_bc,&local_b1);
          lVar11 = *(longlong *)(param_2 + 0x88);
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar9 = (longlong)iVar7;
        dVar6 = (double)*(float *)(lVar11 + 8 + lVar9 * 0xc) * *(double *)(param_2 + 0x30);
        dVar15 = (double)*(float *)(lVar11 + 4 + lVar9 * 0xc) * *(double *)(param_2 + 0x28);
        dVar19 = (double)*(float *)(lVar11 + lVar9 * 0xc) * *(double *)(param_2 + 0x20);
        dVar20 = *param_3;
        dVar18 = param_3[1];
        dVar21 = param_3[2];
        dVar1 = param_3[3];
        dVar23 = param_3[3];
        dVar22 = dVar19 * dVar21 - dVar20 * dVar6;
        dVar16 = dVar15 * dVar20 - dVar18 * dVar19;
        dVar17 = dVar6 * dVar18 - dVar21 * dVar15;
        dVar17 = dVar17 + dVar17;
        dVar22 = dVar22 + dVar22;
        dVar16 = dVar16 + dVar16;
        dVar3 = param_3[5];
        dVar2 = param_3[6];
        pdVar12[-2] = (dVar16 * dVar18 - dVar22 * dVar21) + dVar1 * dVar17 + dVar19 + param_3[4];
        pdVar12[-1] = (dVar21 * dVar17 - dVar20 * dVar16) + dVar23 * dVar22 + dVar15 + dVar3;
        *pdVar12 = dVar16 * dVar1 + dVar6 + (dVar22 * dVar20 - dVar17 * dVar18) + dVar2;
        lVar13 = lVar13 + 1;
        uVar8 = (ulonglong)(int)*param_8;
        pdVar12 = pdVar12 + 3;
      } while (lVar13 < (longlong)uVar8);
    }
    if (1 < (uint)uVar8) {
      uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x38);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      pdVar12 = (double *)(param_1 + 0x10);
      uVar14 = 0;
      lVar13 = param_6;
      uVar24 = (int)*(undefined8 *)(param_1 + 0x30);
      uVar25 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      dVar23 = *(double *)(param_1 + 0x40);
      do {
        param_6 = param_7;
        dVar20 = (double)CONCAT44(uVar27,uVar26);
        dVar1 = pdVar12[-2];
        dVar2 = pdVar12[-1];
        uVar26 = SUB84(dVar2,0);
        uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *pdVar12;
        dVar20 = dVar20 - dVar2;
        dVar6 = (double)CONCAT44(uVar25,uVar24) - dVar1;
        dVar18 = *param_5 * dVar20 - dVar6 * param_5[1];
        dVar6 = dVar6 * param_5[2] - (dVar23 - dVar3) * *param_5;
        dVar20 = param_5[1] * (dVar23 - dVar3) - dVar20 * param_5[2];
        dVar21 = dVar18 * dVar18 + dVar20 * dVar20 + dVar6 * dVar6;
        dVar23 = SQRT(dVar21);
        local_d0 = 0.0;
        local_c8 = 0.0;
        if (9.999999747378752e-05 <= dVar21) {
          local_c8 = dVar18 / dVar23;
          local_d0 = dVar6 / dVar23;
        }
        local_d8 = (double)(-(ulonglong)(dVar21 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar21 < 9.999999747378752e-05) &
                           (ulonglong)(dVar20 / dVar23));
        local_e0 = dVar3 * local_c8 + dVar1 * local_d8 + dVar2 * local_d0;
        local_e8 = &local_d8;
        uVar8 = FUN_1449c8de9(lVar13,param_6,uVar8 & 0xffffffff,0x20);
        *param_8 = (uint)uVar8;
        if (1 < uVar14) break;
        uVar14 = uVar14 + 1;
        pdVar12 = pdVar12 + 3;
        param_7 = lVar13;
        lVar13 = param_6;
        uVar24 = SUB84(dVar1,0);
        uVar25 = (int)((ulonglong)dVar1 >> 0x20);
        dVar23 = dVar3;
      } while (1 < (uint)uVar8);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbf128 FUN_146cbf128 body=1278 status=ok
// SIG undefined FUN_146cbf128(void)

longlong FUN_146cbf128(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_148 [32];
  double *local_128;
  double local_120;
  int local_10c;
  double local_108;
  double local_100;
  double local_f8;
  int local_ec;
  int local_e8;
  undefined1 local_e1;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_8 = 3;
  lVar11 = 0x10;
  lVar12 = 0;
  do {
    pdVar1 = (double *)(param_2 + -0x10 + lVar11);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    dVar17 = *param_3;
    dVar25 = param_3[1];
    dVar7 = param_3[2];
    dVar19 = param_3[3];
    dVar18 = param_3[3];
    dVar20 = dVar6 * dVar17 - dVar5 * dVar25;
    dVar21 = *(double *)(param_2 + lVar11) * dVar25 - dVar6 * dVar7;
    dVar24 = dVar5 * dVar7 - dVar17 * *(double *)(param_2 + lVar11);
    dVar21 = dVar21 + dVar21;
    dVar24 = dVar24 + dVar24;
    dVar20 = dVar20 + dVar20;
    dVar22 = *(double *)(param_2 + lVar11);
    dVar2 = param_3[5];
    dVar23 = param_3[6];
    pdVar1 = (double *)(param_6 + -0x10 + lVar11);
    *pdVar1 = (dVar20 * dVar25 - dVar24 * dVar7) + dVar19 * dVar21 + dVar5 + param_3[4];
    pdVar1[1] = (dVar7 * dVar21 - dVar17 * dVar20) + dVar18 * dVar24 + dVar6 + dVar2;
    *(double *)(param_6 + lVar11) =
         dVar20 * dVar19 + dVar22 + (dVar24 * dVar17 - dVar21 * dVar25) + dVar23;
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x18;
  } while (lVar12 < (int)*param_8);
  dVar18 = *(double *)(param_1 + 0x28);
  lVar11 = *(longlong *)(param_1 + 0x88);
  plVar4 = *(longlong **)(lVar11 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    cVar3 = *(char *)(lVar11 + 0x60);
    if (cVar3 == '\x03') {
      uVar14 = *(uint *)(*plVar4 + 4 + (longlong)param_4 * 8);
    }
    else if (cVar3 == '\x02') {
      uVar14 = (uint)*(short *)(*plVar4 + 2 + (longlong)param_4 * 4);
    }
    else {
      uVar14 = 0;
      if (cVar3 == '\x01') {
        uVar14 = (uint)*(byte *)(*plVar4 + 1 + (longlong)param_4 * 2);
      }
    }
    uVar15 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
    uVar16 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
    local_e8 = uVar14 - 1;
    local_10c = param_4;
    local_ec = param_4;
    iVar8 = FUN_144b030e2(lVar11 + 0x58,&local_ec,&local_e1);
    uVar10 = *param_8;
    if (1 < uVar10 && 0 < (int)uVar14) {
      uVar15 = ~uVar15 & ((&DAT_149931160)[0.0 <= dVar18] ^ 0x8000000000000000) |
               uVar15 & (&DAT_149931160)[0.0 <= dVar18];
      dVar23 = (double)(~uVar16 & (uVar15 ^ 0x8000000000000000) | uVar15 & uVar16);
      lVar13 = (longlong)iVar8;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30);
      iVar8 = 1;
      lVar12 = param_6;
      dVar22 = (double)*(float *)(lVar11 + lVar13 * 0xc) * *(double *)(param_1 + 0x20);
      dVar18 = (double)*(float *)(lVar11 + 4 + lVar13 * 0xc) * *(double *)(param_1 + 0x28);
      dVar19 = (double)*(float *)(lVar11 + 8 + lVar13 * 0xc) * *(double *)(param_1 + 0x30);
      do {
        param_6 = param_7;
        param_7 = lVar12;
        lVar11 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(lVar11 + 0x58) == 0) {
          iVar9 = -1;
        }
        else {
          local_e8 = iVar8 + -1;
          local_ec = local_10c;
          iVar9 = FUN_144b030e2(lVar11 + 0x58,&local_ec,&local_e1);
          lVar11 = *(longlong *)(param_1 + 0x88);
          uVar10 = *param_8;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
        lVar12 = (longlong)iVar9;
        dVar2 = (double)*(float *)(lVar11 + 8 + lVar12 * 0xc) * *(double *)(param_1 + 0x30);
        dVar5 = (double)*(float *)(lVar11 + 4 + lVar12 * 0xc) * *(double *)(param_1 + 0x28);
        dVar6 = (double)*(float *)(lVar11 + lVar12 * 0xc) * *(double *)(param_1 + 0x20);
        dVar17 = (param_5[1] * (dVar19 - dVar2) - (dVar18 - dVar5) * param_5[2]) * dVar23;
        dVar25 = ((dVar22 - dVar6) * param_5[2] - (dVar19 - dVar2) * *param_5) * dVar23;
        dVar18 = (*param_5 * (dVar18 - dVar5) - (dVar22 - dVar6) * param_5[1]) * dVar23;
        dVar19 = dVar18 * dVar18 + dVar17 * dVar17 + dVar25 * dVar25;
        dVar22 = SQRT(dVar19);
        local_100 = 0.0;
        local_f8 = 0.0;
        if (9.999999747378752e-05 <= dVar19) {
          local_f8 = dVar18 / dVar22;
          local_100 = dVar25 / dVar22;
        }
        local_108 = (double)(-(ulonglong)(dVar19 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                            ~-(ulonglong)(dVar19 < 9.999999747378752e-05) &
                            (ulonglong)(dVar17 / dVar22));
        local_120 = dVar2 * local_f8 + dVar6 * local_108 + dVar5 * local_100;
        local_128 = &local_108;
        uVar10 = FUN_1449c8de9(param_7,param_6,uVar10,0x20);
        *param_8 = uVar10;
      } while ((iVar8 < (int)uVar14) &&
              (iVar8 = iVar8 + 1, lVar12 = param_6, dVar22 = dVar6, dVar18 = dVar5, dVar19 = dVar2,
              1 < uVar10));
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cbf627 FUN_146cbf627 body=3919 status=ok
// SIG undefined FUN_146cbf627(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cbf627(longlong param_1,double *param_2,double param_3,int *param_4)

{
  double dVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  char cVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_998 [32];
  double *local_978;
  double *local_970;
  double *local_968;
  uint *local_960;
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  double local_8f8;
  double local_8f0;
  double local_8e8;
  double local_8e0;
  double local_8d8;
  double local_8d0;
  double local_8c8;
  uint local_8c0;
  undefined4 uStack_8bc;
  double dStack_8b8;
  double local_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double local_888;
  double dStack_880;
  double local_878;
  double local_868;
  double dStack_860;
  double local_858;
  double local_850;
  double local_848;
  double local_840;
  double local_838;
  double dStack_830;
  double local_828;
  double local_818;
  double dStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  double *local_7d0;
  longlong local_7c8;
  double local_7c0;
  undefined4 local_7b8;
  int local_7b4;
  double local_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  double local_748;
  double local_740;
  double local_738;
  double local_448;
  double local_440;
  double local_438;
  double local_148 [3];
  undefined1 local_130 [8];
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_998;
  dVar22 = (double)_DAT_14c75f020 * *(double *)(param_1 + 0x10);
  local_7b0 = 0.0;
  local_978 = (double *)&local_7b4;
  local_7b4 = -1;
  local_970 = (double *)&local_7b8;
  local_7b8 = 0xffffffff;
  local_7d8 = (param_2[2] + param_2[5] + param_2[8]) / -3.0;
  local_7e0 = (param_2[1] + param_2[4] + param_2[7]) / -3.0;
  local_7e8 = (*param_2 + param_2[3] + param_2[6]) / -3.0;
  local_968 = &local_7e8;
  local_7d0 = param_2;
  local_7c8 = param_1;
  local_7c0 = dVar22;
  FUN_146cc0577(local_148);
  if ((local_7b4 == -1) || (local_7b0 + param_3 < local_100)) goto LAB_146cbf7a6;
  dVar27 = param_2[2];
  uVar28 = SUB84(dVar27,0);
  uVar29 = (undefined4)((ulonglong)dVar27 >> 0x20);
  dVar23 = *param_2;
  uVar30 = SUB84(dVar23,0);
  uVar31 = (undefined4)((ulonglong)dVar23 >> 0x20);
  dVar1 = param_2[1];
  uVar32 = SUB84(dVar1,0);
  uVar33 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar20 = (param_2[3] - dVar23) * (param_2[7] - dVar1) -
           (param_2[6] - dVar23) * (param_2[4] - dVar1);
  dVar24 = (param_2[5] - dVar27) * (param_2[6] - dVar23) -
           (param_2[8] - dVar27) * (param_2[3] - dVar23);
  dVar4 = (param_2[4] - dVar1) * (param_2[8] - dVar27) -
          (param_2[5] - dVar27) * (param_2[7] - dVar1);
  dVar19 = dVar20 * dVar20 + dVar4 * dVar4 + dVar24 * dVar24;
  if (((dVar19 != 1.0) || (dVar5 = dVar20, dVar6 = dVar24, dVar7 = dVar4, NAN(dVar19))) &&
     (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar19)) {
    dVar19 = 1.0 / SQRT(dVar19);
    dVar5 = dVar20 * dVar19;
    dVar6 = dVar24 * dVar19;
    dVar7 = dVar4 * dVar19;
  }
  dVar4 = local_108 * dVar5 + local_118 * dVar7 + dStack_110 * dVar6;
  local_818 = local_118;
  dStack_810 = dStack_110;
  local_808 = local_108;
  local_838 = local_148[0];
  dStack_830 = local_148[1];
  local_828 = local_148[2];
  local_978 = (double *)CONCAT44(local_978._4_4_,local_7b4);
  local_800 = dVar7;
  dStack_7f8 = dVar6;
  local_7f0 = dVar5;
  uVar9 = FUN_1404ae4fc(param_1,&local_838,&local_818,SUB84(dVar22,0));
  FUN_1404b254c(param_1,uVar9,&local_868,&local_850);
  if (((double)_DAT_14c75f018 < ABS(dVar4 + -1.0)) &&
     ((double)_DAT_14c75f018 <
      ABS(local_858 * local_108 + local_868 * local_118 + dStack_860 * dStack_110 + 1.0))) {
    if ((DAT_14c992bf9 == '\x01') && (0.0 < local_100)) goto LAB_146cbf7a6;
    if (0.0 < dVar22) {
      local_970 = &local_748;
      local_978 = &local_448;
      FUN_1404b5e3e(param_1,&local_7a8,uVar9,local_148);
      local_978 = &local_8a8;
      FUN_146cbb71a(param_2,&local_8c0,local_130,&local_888);
      dVar24 = (local_748 - local_448) * (dStack_8a0 - dStack_880) -
               (local_8a8 - local_888) * (local_740 - local_440);
      dVar19 = (local_738 - local_438) * (local_8a8 - local_888) -
               (local_898 - local_878) * (local_748 - local_448);
      dVar20 = (local_740 - local_440) * (local_898 - local_878) -
               (local_738 - local_438) * (dStack_8a0 - dStack_880);
      dVar22 = dVar24 * dVar24 + dVar20 * dVar20 + dVar19 * dVar19;
      if (((dVar22 != 1.0) || (dVar26 = dVar19, dVar21 = dVar20, dVar25 = dVar24, NAN(dVar22))) &&
         (dVar26 = DAT_14c8464e8, dVar21 = DAT_14c8464e0, dVar25 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar22)) {
        dVar22 = 1.0 / SQRT(dVar22);
        dVar26 = dVar19 * dVar22;
        dVar21 = dVar20 * dVar22;
        dVar25 = dVar24 * dVar22;
      }
      if (ABS(dVar25 * local_108 + dVar21 * local_118 + dVar26 * dStack_110) <
          (double)_DAT_14c75f024) goto LAB_146cbfcf2;
      dVar22 = (local_798 - local_8b0) * local_108 +
               (local_7a8 - (double)CONCAT44(uStack_8bc,local_8c0)) * local_118 +
               (dStack_7a0 - dStack_8b8) * dStack_110;
      if (param_3 < dVar22) goto LAB_146cbf7a6;
      local_148[0] = (double)CONCAT44(uStack_8bc,local_8c0) + local_118 * dVar22;
      local_148[1] = dStack_8b8 + dStack_110 * dVar22;
      local_148[2] = local_8b0 + local_108 * dVar22;
      local_120 = local_8b0;
      dStack_128 = dStack_8b8;
      local_100 = dVar22;
    }
    local_f4 = 2;
    pdVar15 = (double *)(param_4 + (longlong)*param_4 * 0x16);
    pdVar14 = local_148;
    for (lVar13 = 0xb; pdVar15 = pdVar15 + 1, lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar15 = *pdVar14;
      pdVar14 = pdVar14 + 1;
    }
    *param_4 = *param_4 + 1;
    goto LAB_146cbf7a6;
  }
LAB_146cbfcf2:
  dVar22 = (double)_DAT_14c75f028;
  local_8c0 = 0;
  if (dVar4 <= dVar22) {
    local_878 = local_858;
    local_888 = local_868;
    dStack_880 = dStack_860;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_960 = &local_8c0;
    local_968 = &local_748;
    local_970 = &local_448;
    local_978 = &local_868;
    lVar13 = FUN_146cc0b25(param_1,param_2,&local_7a8,uVar9);
  }
  else {
    local_978 = &local_800;
    local_878 = local_7f0;
    local_888 = local_800;
    dStack_880 = dStack_7f8;
    local_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_798 = 0.0;
    dStack_790 = 1.0;
    local_788 = 0;
    uStack_780 = 0;
    local_778 = 0;
    uStack_770 = 0;
    local_768 = 0x3ff0000000000000;
    uStack_760 = 0x3ff0000000000000;
    local_758 = 0x3ff0000000000000;
    uStack_750 = 0;
    local_960 = &local_8c0;
    local_968 = &local_748;
    local_970 = &local_448;
    lVar13 = FUN_146cc0718(param_2,param_1,&local_7a8,uVar9);
  }
  uVar10 = local_8c0;
  cVar18 = (dVar4 <= dVar22) * '\x02' + '\x01';
  uVar16 = (ulonglong)local_8c0;
  if (uVar16 == 4) {
    local_798 = *(double *)(lVar13 + 0x28);
    local_7a8 = *(double *)(lVar13 + 0x18);
    dStack_7a0 = *(double *)(lVar13 + 0x20);
    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar13 + 0x40);
    *(double *)(lVar13 + 0x30) = local_7a8;
    *(double *)(lVar13 + 0x38) = dStack_7a0;
    *(double *)(lVar13 + 0x40) = local_798;
    uVar16 = 4;
    if (dVar4 <= dVar22) {
LAB_146cc03c0:
      iVar12 = *param_4;
      piVar11 = param_4 + (longlong)iVar12 * 0x16 + 0x17;
      lVar17 = 0;
      do {
        iVar12 = iVar12 + 1;
        *param_4 = iVar12;
        dVar22 = *(double *)(lVar13 + 0x10 + lVar17);
        dVar27 = *(double *)(lVar13 + 8 + lVar17);
        dVar23 = (dVar22 - local_840) * local_858 +
                 (*(double *)(lVar13 + lVar17) - local_850) * local_868 +
                 (dVar27 - local_848) * dStack_860;
        dVar22 = dVar22 - dVar23 * local_858;
        dVar27 = dVar27 - dStack_860 * dVar23;
        dVar23 = *(double *)(lVar13 + lVar17) - local_868 * dVar23;
        *(double *)(piVar11 + -0x15) = dVar23;
        *(double *)(piVar11 + -0x13) = dVar27;
        *(double *)(piVar11 + -0x11) = dVar22;
        uVar8 = ((undefined8 *)(lVar13 + lVar17))[1];
        *(undefined8 *)(piVar11 + -0xf) = *(undefined8 *)(lVar13 + lVar17);
        *(undefined8 *)(piVar11 + -0xd) = uVar8;
        *(undefined8 *)(piVar11 + -0xb) = *(undefined8 *)(lVar13 + 0x10 + lVar17);
        *(double *)(piVar11 + -9) = -local_868;
        *(double *)(piVar11 + -7) = -dStack_860;
        *(double *)(piVar11 + -5) = -local_858;
        *(double *)(piVar11 + -3) =
             (dVar22 - *(double *)(lVar13 + 0x10 + lVar17)) * -local_858 +
             (dVar23 - *(double *)(lVar13 + lVar17)) * -local_868 +
             (dVar27 - *(double *)(lVar13 + 8 + lVar17)) * -dStack_860;
        *(char *)piVar11 = cVar18;
        piVar11 = piVar11 + 0x16;
        lVar17 = lVar17 + 0x18;
      } while (uVar16 * 0x18 != lVar17);
      goto LAB_146cbf7a6;
    }
  }
  else {
    if (4 < (int)local_8c0) {
      local_8a8 = 0.0;
      dStack_8a0 = 0.0;
      local_898 = 1.0;
      local_8f8 = dVar6;
      local_8f0 = dVar4;
      local_8e8 = dVar22;
      local_8e0 = dVar1;
      local_8d8 = dVar23;
      local_8d0 = dVar27;
      FUN_140269010(&local_7a8,&local_888);
      local_8c8 = dStack_790;
      uVar2 = DAT_149931e80;
      local_928._8_8_ = 0;
      local_928._0_8_ = dStack_7a0;
      local_938._0_8_ = (ulonglong)dStack_7a0 ^ uVar2;
      local_938._8_8_ = DAT_149931e80._8_8_;
      local_918._8_8_ = 0;
      local_918._0_8_ = local_7a8;
      dVar22 = (double)((ulonglong)local_7a8 ^ uVar2);
      local_958._8_4_ = DAT_149931e80._8_4_;
      local_958._0_8_ = dVar22;
      local_958._12_4_ = DAT_149931e80._12_4_;
      local_908._8_8_ = 0;
      local_908._0_8_ = local_798;
      local_948._0_8_ = uVar2 ^ (ulonglong)local_798;
      local_948._8_8_ = DAT_149931e80._8_8_;
      lVar17 = 0;
      do {
        dVar27 = *(double *)(lVar13 + lVar17);
        dVar23 = *(double *)(lVar13 + 8 + lVar17);
        dVar1 = *(double *)(lVar13 + 0x10 + lVar17);
        dVar24 = dStack_7a0 * dVar1 + dVar23 * (double)local_948._0_8_;
        dVar24 = dVar24 + dVar24;
        dVar20 = local_7a8 * dVar23 + dVar27 * (double)local_938._0_8_;
        dVar20 = dVar20 + dVar20;
        dVar4 = local_798 * dVar27 + dVar1 * dVar22;
        dVar4 = dVar4 + dVar4;
        *(double *)(lVar13 + lVar17) =
             dVar4 * (double)local_948._0_8_ + dStack_7a0 * dVar20 + dStack_790 * dVar24 + dVar27;
        *(double *)(lVar13 + 8 + lVar17) =
             dVar20 * dVar22 + local_798 * dVar24 + dStack_790 * dVar4 + dVar23;
        *(double *)(lVar13 + 0x10 + lVar17) =
             local_7a8 * dVar4 + dVar24 * (double)local_938._0_8_ + dStack_790 * dVar20 + dVar1;
        lVar17 = lVar17 + 0x18;
      } while (uVar16 * 0x18 != lVar17);
      uVar10 = FUN_1402695a1(lVar13,uVar10);
      uVar16 = (ulonglong)uVar10;
      if (uVar10 != 0) {
        local_908._8_8_ = dStack_7a0;
        local_908._0_8_ = local_7a8;
        local_938 = local_908 ^ _DAT_149931e80;
        dVar22 = local_798 * -1.0;
        dVar27 = dStack_790 * 1.0;
        uVar28 = (undefined4)((ulonglong)dVar27 >> 0x20);
        local_948._8_4_ = local_938._8_4_;
        local_948._12_4_ = local_938._12_4_;
        local_948._0_8_ = local_938._8_8_;
        local_958 = local_948 ^ _DAT_149931e80;
        auVar3._8_4_ = SUB84(dVar27,0);
        auVar3._0_8_ = dVar22;
        auVar3._12_4_ = uVar28;
        local_928 = _DAT_149931e80 ^ auVar3;
        local_918._8_4_ = SUB84(dVar27,0);
        local_918._0_8_ = dVar22;
        local_918._12_4_ = uVar28;
        lVar17 = 0;
        do {
          dVar23 = *(double *)(lVar13 + lVar17);
          dVar1 = *(double *)(lVar13 + 8 + lVar17);
          dVar4 = *(double *)(lVar13 + 0x10 + lVar17);
          dVar20 = (double)local_948._0_8_ * dVar4 + dVar1 * (double)local_928._0_8_;
          dVar20 = dVar20 + dVar20;
          dVar19 = (double)local_938._0_8_ * dVar1 + dVar23 * (double)local_958._0_8_;
          dVar19 = dVar19 + dVar19;
          dVar24 = dVar22 * dVar23 + dVar4 * local_7a8;
          dVar24 = dVar24 + dVar24;
          *(double *)(lVar13 + lVar17) =
               dVar24 * (double)local_928._0_8_ + (double)local_948._0_8_ * dVar19 +
               dVar27 * dVar20 + dVar23;
          *(double *)(lVar13 + 8 + lVar17) =
               dVar19 * local_7a8 + dVar22 * dVar20 + dVar27 * dVar24 + dVar1;
          *(double *)(lVar13 + 0x10 + lVar17) =
               (double)local_938._0_8_ * dVar24 + dVar20 * (double)local_958._0_8_ +
               dVar27 * dVar19 + dVar4;
          lVar17 = lVar17 + 0x18;
        } while ((ulonglong)(uVar10 * 8) * 3 != lVar17);
      }
      uVar28 = SUB84(local_8d0,0);
      uVar29 = (undefined4)((ulonglong)local_8d0 >> 0x20);
      uVar30 = SUB84(local_8d8,0);
      uVar31 = (undefined4)((ulonglong)local_8d8 >> 0x20);
      uVar32 = SUB84(local_8e0,0);
      uVar33 = (undefined4)((ulonglong)local_8e0 >> 0x20);
      dVar6 = local_8f8;
      dVar4 = local_8f0;
      dVar22 = local_8e8;
    }
    if (dVar4 <= dVar22) {
      if ((int)uVar16 < 1) goto LAB_146cbf7a6;
      goto LAB_146cc03c0;
    }
    if ((int)uVar16 < 1) goto LAB_146cbf7a6;
  }
  iVar12 = *param_4;
  piVar11 = param_4 + (longlong)iVar12 * 0x16 + 0x17;
  lVar17 = 0;
  do {
    iVar12 = iVar12 + 1;
    *param_4 = iVar12;
    dVar22 = *(double *)(lVar13 + 0x10 + lVar17);
    dVar27 = *(double *)(lVar13 + 8 + lVar17);
    dVar23 = (dVar22 - (double)CONCAT44(uVar29,uVar28)) * dVar5 +
             (*(double *)(lVar13 + lVar17) - (double)CONCAT44(uVar31,uVar30)) * dVar7 +
             (dVar27 - (double)CONCAT44(uVar33,uVar32)) * dVar6;
    dVar22 = dVar22 - dVar23 * dVar5;
    dVar27 = dVar27 - dVar6 * dVar23;
    dVar23 = *(double *)(lVar13 + lVar17) - dVar7 * dVar23;
    *(undefined8 *)(piVar11 + -0x11) = *(undefined8 *)(lVar13 + 0x10 + lVar17);
    uVar8 = ((undefined8 *)(lVar13 + lVar17))[1];
    *(undefined8 *)(piVar11 + -0x15) = *(undefined8 *)(lVar13 + lVar17);
    *(undefined8 *)(piVar11 + -0x13) = uVar8;
    *(double *)(piVar11 + -0xf) = dVar23;
    *(double *)(piVar11 + -0xd) = dVar27;
    *(double *)(piVar11 + -0xb) = dVar22;
    *(double *)(piVar11 + -9) = local_800;
    *(double *)(piVar11 + -7) = dStack_7f8;
    *(double *)(piVar11 + -5) = local_7f0;
    *(double *)(piVar11 + -3) =
         (*(double *)(lVar13 + 0x10 + lVar17) - dVar22) * dVar5 +
         (*(double *)(lVar13 + lVar17) - dVar23) * dVar7 +
         (*(double *)(lVar13 + 8 + lVar17) - dVar27) * dVar6;
    *(char *)piVar11 = cVar18;
    piVar11 = piVar11 + 0x16;
    lVar17 = lVar17 + 0x18;
  } while (uVar16 * 0x18 != lVar17);
LAB_146cbf7a6:
  if ((local_f0 ^ (ulonglong)auStack_998) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc0577 FUN_146cc0577 body=416 status=ok
// SIG undefined FUN_146cc0577(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cc0577(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_78 = (double)_DAT_14c75f068;
  local_70 = (double)DAT_14c75f06c;
  local_88 = param_4;
  if (DAT_14c992dd0 == '\x01') {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    FUN_146d06b25(param_2,param_3,&local_18,&local_30);
  }
  else {
    local_80 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    local_a0 = &local_60;
    local_a8 = &local_48;
    cVar1 = FUN_146d073d8(param_2,param_3,&local_18,&local_30);
    if (cVar1 == '\0') goto LAB_146cc0696;
  }
  param_1[2] = local_20;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  param_1[3] = local_48;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  *(undefined4 *)(param_1 + 6) = local_60;
  *(uint *)((longlong)param_1 + 0x34) = uStack_5c ^ 0x80000000;
  *(undefined4 *)(param_1 + 7) = uStack_58;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_54 ^ 0x80000000;
  param_1[8] = local_50 ^ 0x8000000000000000;
  param_1[9] = local_18 ^ 0x8000000000000000;
LAB_146cc0696:
  if ((local_10 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146cc0718 FUN_146cc0718 body=1036 status=ok
// SIG undefined FUN_146cc0718(void)

longlong FUN_146cc0718(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double dVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
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
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  sVar2 = *(short *)(DAT_14c992a40 + 2 + (longlong)param_4 * 4);
  sVar3 = 0x20;
  if (sVar2 < 0x20) {
    sVar3 = sVar2;
  }
  uVar4 = (ulonglong)(uint)(int)sVar3;
  *param_8 = (int)sVar3;
  if (0 < sVar2) {
    pdVar5 = (double *)(param_6 + 0x10);
    lVar6 = 0;
    do {
      dVar10 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
      lVar7 = (longlong)
              *(short *)(DAT_14c992a50 + 2 +
                        (longlong)
                        ((int)*(short *)(DAT_14c992a40 + (longlong)param_4 * 4) + (int)lVar6) * 6);
      dVar12 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
      dVar16 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
      dVar11 = dVar10 * *(double *)(DAT_14c992a20 + 0x10 + lVar7 * 0x18) * 0.5 +
               dVar10 * 0.5 + *(double *)(param_2 + 0x30);
      dVar13 = dVar12 * *(double *)(DAT_14c992a20 + 8 + lVar7 * 0x18) * 0.5 +
               dVar12 * 0.5 + *(double *)(param_2 + 0x28);
      dVar17 = dVar16 * *(double *)(DAT_14c992a20 + lVar7 * 0x18) * 0.5 +
               dVar16 * 0.5 + *(double *)(param_2 + 0x20);
      dVar19 = *param_3;
      dVar18 = param_3[1];
      dVar9 = param_3[2];
      dVar22 = dVar17 * dVar9 - dVar19 * dVar11;
      dVar14 = dVar13 * dVar19 - dVar18 * dVar17;
      dVar15 = dVar11 * dVar18 - dVar9 * dVar13;
      dVar12 = param_3[3];
      dVar10 = param_3[3];
      dVar15 = dVar15 + dVar15;
      dVar22 = dVar22 + dVar22;
      dVar14 = dVar14 + dVar14;
      dVar1 = param_3[5];
      dVar16 = param_3[6];
      pdVar5[-2] = (dVar14 * dVar18 - dVar22 * dVar9) + dVar12 * dVar15 + dVar17 + param_3[4];
      pdVar5[-1] = (dVar9 * dVar15 - dVar19 * dVar14) + dVar10 * dVar22 + dVar13 + dVar1;
      *pdVar5 = dVar14 * dVar12 + dVar11 + (dVar22 * dVar19 - dVar15 * dVar18) + dVar16;
      lVar6 = lVar6 + 1;
      uVar4 = (ulonglong)(int)*param_8;
      pdVar5 = pdVar5 + 3;
    } while (lVar6 < (longlong)uVar4);
  }
  if (1 < (uint)uVar4) {
    uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x40);
    uVar21 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    uVar23 = (undefined4)*(undefined8 *)(param_1 + 0x38);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    pdVar5 = (double *)(param_1 + 0x10);
    uVar8 = 0;
    lVar6 = param_6;
    dVar10 = *(double *)(param_1 + 0x30);
    do {
      param_6 = param_7;
      dVar18 = (double)CONCAT44(uVar24,uVar23);
      dVar19 = (double)CONCAT44(uVar21,uVar20);
      dVar12 = pdVar5[-2];
      dVar16 = pdVar5[-1];
      uVar23 = SUB84(dVar16,0);
      uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar1 = *pdVar5;
      uVar20 = SUB84(dVar1,0);
      uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar19 = dVar19 - dVar1;
      dVar18 = dVar18 - dVar16;
      dVar11 = *param_5 * dVar18 - (dVar10 - dVar12) * param_5[1];
      dVar9 = (dVar10 - dVar12) * param_5[2] - dVar19 * *param_5;
      dVar19 = param_5[1] * dVar19 - dVar18 * param_5[2];
      dVar18 = dVar11 * dVar11 + dVar19 * dVar19 + dVar9 * dVar9;
      dVar10 = SQRT(dVar18);
      local_b0 = 0.0;
      local_a8 = 0.0;
      if (9.999999747378752e-05 <= dVar18) {
        local_a8 = dVar11 / dVar10;
        local_b0 = dVar9 / dVar10;
      }
      local_b8 = (double)(-(ulonglong)(dVar18 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar18 < 9.999999747378752e-05) &
                         (ulonglong)(dVar19 / dVar10));
      local_c0 = dVar1 * local_a8 + dVar12 * local_b8 + dVar16 * local_b0;
      local_c8 = &local_b8;
      uVar4 = FUN_1449c8de9(lVar6,param_6,uVar4 & 0xffffffff,0x20);
      *param_8 = (uint)uVar4;
      if (1 < uVar8) break;
      uVar8 = uVar8 + 1;
      pdVar5 = pdVar5 + 3;
      param_7 = lVar6;
      lVar6 = param_6;
      dVar10 = dVar12;
    } while (1 < (uint)uVar4);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cc0b25 FUN_146cc0b25 body=1232 status=ok
// SIG undefined FUN_146cc0b25(void)

longlong FUN_146cc0b25(longlong param_1,longlong param_2,double *param_3,int param_4,double *param_5
                      ,longlong param_6,longlong param_7,uint *param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  short sVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_128 [32];
  double *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_8 = 3;
  lVar10 = 0x10;
  lVar11 = 0;
  do {
    pdVar1 = (double *)(param_2 + -0x10 + lVar10);
    dVar18 = *pdVar1;
    dVar20 = pdVar1[1];
    dVar5 = *param_3;
    dVar6 = param_3[1];
    dVar7 = param_3[2];
    dVar16 = param_3[3];
    dVar2 = param_3[3];
    dVar13 = dVar20 * dVar5 - dVar18 * dVar6;
    dVar14 = *(double *)(param_2 + lVar10) * dVar6 - dVar20 * dVar7;
    dVar15 = dVar18 * dVar7 - dVar5 * *(double *)(param_2 + lVar10);
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar19 = *(double *)(param_2 + lVar10);
    dVar17 = param_3[5];
    dVar3 = param_3[6];
    pdVar1 = (double *)(param_6 + -0x10 + lVar10);
    *pdVar1 = (dVar13 * dVar6 - dVar15 * dVar7) + dVar16 * dVar14 + dVar18 + param_3[4];
    pdVar1[1] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar2 * dVar15 + dVar20 + dVar17;
    *(double *)(param_6 + lVar10) =
         dVar13 * dVar16 + dVar19 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
    lVar11 = lVar11 + 1;
    uVar8 = (ulonglong)(int)*param_8;
    lVar10 = lVar10 + 0x18;
  } while (lVar11 < (longlong)uVar8);
  lVar10 = (longlong)param_4;
  sVar4 = *(short *)(DAT_14c992a40 + 2 + lVar10 * 4);
  if (1 < *param_8 && 0 < sVar4) {
    dVar16 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
    lVar9 = (longlong)
            *(short *)(DAT_14c992a50 + -4 +
                      ((longlong)*(short *)(DAT_14c992a40 + lVar10 * 4) + (longlong)(int)sVar4) * 6)
    ;
    dVar2 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
    dVar19 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
    lVar12 = 0;
    lVar11 = param_6;
    dVar16 = dVar16 * *(double *)(DAT_14c992a20 + lVar9 * 0x18) * 0.5 +
             dVar16 * 0.5 + *(double *)(param_1 + 0x20);
    dVar19 = dVar19 * *(double *)(DAT_14c992a20 + 0x10 + lVar9 * 0x18) * 0.5 +
             dVar19 * 0.5 + *(double *)(param_1 + 0x30);
    dVar2 = dVar2 * *(double *)(DAT_14c992a20 + 8 + lVar9 * 0x18) * 0.5 +
            dVar2 * 0.5 + *(double *)(param_1 + 0x28);
    do {
      param_6 = param_7;
      lVar9 = (longlong)
              *(short *)(DAT_14c992a50 + 2 + (*(short *)(DAT_14c992a40 + lVar10 * 4) + lVar12) * 6);
      dVar13 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
      dVar3 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
      dVar17 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      dVar20 = dVar13 * *(double *)(DAT_14c992a20 + 0x10 + lVar9 * 0x18) * 0.5 +
               dVar13 * 0.5 + *(double *)(param_1 + 0x30);
      dVar3 = dVar3 * *(double *)(DAT_14c992a20 + 8 + lVar9 * 0x18) * 0.5 +
              dVar3 * 0.5 + *(double *)(param_1 + 0x28);
      dVar18 = dVar17 * *(double *)(DAT_14c992a20 + lVar9 * 0x18) * 0.5 +
               dVar17 * 0.5 + *(double *)(param_1 + 0x20);
      dVar13 = *param_5 * (dVar2 - dVar3) - (dVar16 - dVar18) * param_5[1];
      dVar16 = (dVar16 - dVar18) * param_5[2] - (dVar19 - dVar20) * *param_5;
      dVar17 = param_5[1] * (dVar19 - dVar20) - (dVar2 - dVar3) * param_5[2];
      dVar19 = dVar13 * dVar13 + dVar17 * dVar17 + dVar16 * dVar16;
      dVar2 = SQRT(dVar19);
      local_f0 = 0.0;
      local_e8 = 0.0;
      if (9.999999747378752e-05 <= dVar19) {
        local_e8 = dVar13 / dVar2;
        local_f0 = dVar16 / dVar2;
      }
      local_f8 = (double)(-(ulonglong)(dVar19 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar19 < 9.999999747378752e-05) & (ulonglong)(dVar17 / dVar2)
                         );
      local_100 = dVar20 * local_e8 + dVar18 * local_f8 + dVar3 * local_f0;
      local_108 = &local_f8;
      uVar8 = FUN_1449c8de9(lVar11,param_6,uVar8 & 0xffffffff,0x20);
      *param_8 = (uint)uVar8;
      lVar12 = lVar12 + 1;
    } while (((int)lVar12 < (int)sVar4) &&
            (param_7 = lVar11, lVar11 = param_6, dVar16 = dVar18, dVar19 = dVar20, dVar2 = dVar3,
            1 < (uint)uVar8));
  }
  if ((local_e0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146cc0ff6 FUN_146cc0ff6 body=4910 status=ok
// SIG undefined FUN_146cc0ff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc0ff6(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  double *pdVar12;
  longlong lVar13;
  byte bVar14;
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_ab8 [32];
  undefined1 *local_a98;
  undefined1 *local_a90;
  uint *local_a88;
  double *local_a80;
  int *local_a78;
  int *local_a70;
  double local_a68;
  double local_a60;
  double local_a58;
  undefined8 uStack_a50;
  double local_a48;
  double dStack_a40;
  undefined1 local_a38 [16];
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  double local_a08;
  double dStack_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  double local_9b8;
  undefined8 uStack_9b0;
  double local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  double local_988;
  double dStack_980;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double local_928;
  double dStack_920;
  double local_918;
  double local_908 [13];
  uint local_89c;
  double local_898;
  double dStack_890;
  double local_888;
  double local_880;
  double local_878;
  double local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  double local_850;
  double dStack_848;
  double local_840;
  double local_838 [4];
  int local_818;
  int local_814;
  double local_810;
  double local_808 [2];
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  double dStack_788;
  double local_780;
  double local_778;
  double local_770;
  double local_768;
  double local_760;
  undefined4 local_758;
  undefined1 local_754;
  undefined1 local_748 [768];
  undefined1 local_448 [768];
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_ab8;
  bVar14 = *(byte *)(param_1 + 0x1c);
  fVar1 = *(float *)(param_5 + 0x18);
  fVar2 = *(float *)(param_5 + 0x1c);
  puVar4 = (undefined1 *)(double)fVar1;
  FUN_1404cdb8a(param_4,local_808,param_2);
  if (DAT_14c75f015 == '\0') {
    *(undefined4 *)(param_5 + 0x330) = 0;
  }
  local_a80 = &local_810;
  local_810 = 0.0;
  local_a78 = &local_814;
  local_814 = -1;
  local_a70 = &local_818;
  local_818 = -1;
  local_a88 = (uint *)(param_5 + 0x250);
  local_a98 = puVar4;
  local_a90 = (undefined1 *)(double)fVar2;
  FUN_146cc2325(&local_148,param_1,param_3,local_808);
  if (((local_814 != -1) && (local_818 != -1)) &&
     ((DAT_14c992bf8 != '\x01' || (cVar9 = FUN_146d68bdc(param_5,&local_148), cVar9 == '\0')))) {
    FUN_1449cbdd8(param_5);
    dVar23 = local_100;
    fVar3 = *(float *)(param_5 + 300);
    if (local_100 <= local_810 + (double)fVar3) {
      bVar14 = bVar14 & 0x3f;
      local_a48 = local_108;
      dStack_a40 = 0.0;
      dVar26 = (double)CONCAT44(uStack_7f4,local_7f8);
      local_9c8._8_8_ = dStack_7f0;
      local_9c8._0_8_ = dVar26;
      local_a38._8_4_ = local_7f8;
      local_a38._0_8_ = local_808[1];
      dVar18 = dStack_110 * local_808[0] - local_118 * local_808[1];
      dVar20 = local_108 * local_808[1] - dStack_110 * dVar26;
      local_9e8 = local_808[0];
      dStack_9e0 = dStack_7f0;
      dVar21 = local_118 * dVar26 - local_108 * local_808[0];
      dStack_a00 = dStack_7f0 * 0.0 - dStack_7f0 * 0.0;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar18 = dVar18 + dVar18;
      dStack_a00 = dStack_a00 + dStack_a00;
      local_a38._12_4_ = uStack_7f4;
      local_9d8._8_4_ = SUB84(dStack_7f0,0);
      local_9d8._0_8_ = dStack_7f0;
      local_9d8._12_4_ = (int)((ulonglong)dStack_7f0 >> 0x20);
      local_a08 = dVar18 * dStack_7f0 + local_108 + (dVar21 * local_808[0] - dVar20 * local_808[1]);
      local_a28 = (dVar18 * local_808[1] - dVar21 * dVar26) + dStack_7f0 * dVar20 + local_118;
      dStack_a20 = (dVar26 * dVar20 - local_808[0] * dVar18) + dStack_7f0 * dVar21 + dStack_110;
      local_838[0] = 0.0;
      local_838[1] = 0.0;
      local_838[2] = 0.0;
      if (bVar14 == 3) {
        local_a58 = -3.4028234663852886e+38;
      }
      else {
        local_a58 = ABS(local_a08 * -0.0 + local_a28 * -0.0 + dStack_a20 * -0.0);
      }
      uStack_a50 = 0;
      local_988 = -local_108;
      local_998 = -dStack_110;
      local_978 = local_118;
      dStack_970 = dStack_110;
      local_9a8 = -local_118;
      dStack_9a0 = -dStack_110;
      dStack_990 = -0.0;
      dStack_980 = -0.0;
      local_868 = local_130;
      uStack_860 = uStack_128;
      local_858 = local_120;
      local_a18 = dStack_a20;
      dStack_a10 = dStack_a20;
      local_850 = local_9a8;
      dStack_848 = local_998;
      local_840 = local_988;
      iVar10 = FUN_146cc252b(param_3);
      dVar18 = local_a48;
      dVar26 = local_a58;
      if (iVar10 != -1) {
        local_9b8 = dStack_110;
        uStack_9b0 = 0;
        local_9f8 = param_3[2];
        dVar20 = *param_3;
        dVar21 = param_3[1];
        dVar25 = (param_3[3] - dVar20) * (param_3[7] - dVar21) -
                 (param_3[6] - dVar20) * (param_3[4] - dVar21);
        dVar19 = (param_3[5] - local_9f8) * (param_3[6] - dVar20) -
                 (param_3[8] - local_9f8) * (param_3[3] - dVar20);
        dVar22 = (param_3[4] - dVar21) * (param_3[8] - local_9f8) -
                 (param_3[5] - local_9f8) * (param_3[7] - dVar21);
        dVar24 = dVar25 * dVar25 + dVar22 * dVar22 + dVar19 * dVar19;
        if (((dVar24 != 1.0) ||
            (local_878 = dVar19, local_880 = dVar22, local_870 = dVar25, NAN(dVar24))) &&
           (local_878 = DAT_14c8464e8, local_880 = DAT_14c8464e0, local_870 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar24)) {
          dVar24 = 1.0 / SQRT(dVar24);
          local_878 = dVar19 * dVar24;
          local_880 = dVar22 * dVar24;
          local_870 = dVar25 * dVar24;
        }
        dVar19 = ABS(local_870 * local_a48 + local_880 * local_978 + local_878 * dStack_110);
        if ((ABS(local_a58 + -1.0) <= (double)_DAT_14c75f018) ||
           (ABS(dVar19 + -1.0) <= (double)_DAT_14c75f018)) {
          dVar19 = dVar19 + 0.0020000000949949026;
          local_a60 = local_a18;
          local_a68 = local_a08;
          pdVar12 = local_838;
          local_a38._0_8_ = local_a28;
          if (local_a58 < dVar19) {
            local_a60 = dStack_110;
            local_a68 = local_a48;
            pdVar12 = &local_880;
            local_a38._0_8_ = local_978;
          }
          local_888 = pdVar12[2];
          local_898 = *pdVar12;
          dStack_890 = pdVar12[1];
          uVar8 = local_9c8._8_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_9c8._8_8_;
          local_9c8 = auVar5 << 0x40;
          uVar7 = local_9d8._8_8_;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_9d8._8_8_;
          local_9d8 = auVar6 << 0x40;
          local_9e8 = 0.0;
          if (local_a58 < dVar19) {
            local_9c8._0_8_ = dVar20;
            local_9c8 = CONCAT88(uVar8,local_9c8._0_8_);
            local_9d8._0_8_ = dVar21;
            local_9d8 = CONCAT88(uVar7,local_9d8._0_8_);
            local_9e8 = local_9f8;
          }
          local_89c = 0;
          local_908[0] = 0.0;
          local_908[1] = 0.0;
          local_908[2] = 0.0;
          local_908[3] = 1.0;
          local_908[4] = 0.0;
          local_908[5] = 0.0;
          local_908[6] = 0.0;
          local_908[7] = 0.0;
          local_908[8] = 1.0;
          local_908[9] = 1.0;
          local_908[10] = 1.0;
          local_908[0xb] = 0.0;
          if (local_a58 < dVar19) {
            FUN_1404cdb8a(param_2,local_908,param_4);
            local_a88 = &local_89c;
            local_a90 = local_748;
            local_a98 = local_448;
            lVar13 = FUN_146cc29b5(param_3,param_1,local_908,&local_898);
          }
          else {
            pdVar12 = local_808;
            pdVar15 = local_908;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *pdVar15 = *pdVar12;
              pdVar12 = pdVar12 + 1;
              pdVar15 = pdVar15 + 1;
            }
            local_a88 = &local_89c;
            local_a90 = local_748;
            local_a98 = local_448;
            lVar13 = FUN_146cc2635(param_1,param_3,local_908,&local_898);
          }
          uVar11 = local_89c;
          uVar16 = (ulonglong)local_89c;
          if (uVar16 == 4) {
            local_798 = *(double *)(lVar13 + 0x28);
            local_7a8 = *(double *)(lVar13 + 0x18);
            dStack_7a0 = *(double *)(lVar13 + 0x20);
            *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar13 + 0x30);
            *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x38);
            *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar13 + 0x40);
            *(double *)(lVar13 + 0x30) = local_7a8;
            *(double *)(lVar13 + 0x38) = dStack_7a0;
            *(double *)(lVar13 + 0x40) = local_798;
            local_a58 = (double)CONCAT71(local_a58._1_7_,(dVar19 <= dVar26) * '\x02' + '\x01');
            uVar16 = 4;
          }
          else {
            if (4 < local_89c) {
              local_928 = 0.0;
              dStack_920 = 0.0;
              local_918 = 1.0;
              FUN_140269010(&local_7a8,&local_898);
              local_9f8 = local_798;
              dStack_9f0 = 0.0;
              lVar17 = 0;
              do {
                dVar23 = *(double *)(lVar13 + lVar17);
                dVar26 = *(double *)(lVar13 + 8 + lVar17);
                dVar18 = *(double *)(lVar13 + 0x10 + lVar17);
                dVar22 = dStack_7a0 * dVar18 + dVar26 * -local_798;
                dVar22 = dVar22 + dVar22;
                dVar21 = local_7a8 * dVar26 + dVar23 * -dStack_7a0;
                dVar21 = dVar21 + dVar21;
                dVar20 = local_798 * dVar23 + dVar18 * -local_7a8;
                dVar20 = dVar20 + dVar20;
                *(double *)(lVar13 + lVar17) =
                     dVar20 * -local_798 + dStack_7a0 * dVar21 + dStack_790 * dVar22 + dVar23;
                *(double *)(lVar13 + 8 + lVar17) =
                     dVar21 * -local_7a8 + local_798 * dVar22 + dStack_790 * dVar20 + dVar26;
                *(double *)(lVar13 + 0x10 + lVar17) =
                     local_7a8 * dVar20 + dVar22 * -dStack_7a0 + dStack_790 * dVar21 + dVar18;
                lVar17 = lVar17 + 0x18;
              } while (uVar16 * 0x18 != lVar17);
              uVar11 = FUN_1402695a1(lVar13,uVar11);
              uVar16 = (ulonglong)uVar11;
              dVar26 = local_a58;
              if (uVar11 != 0) {
                local_9f8 = local_7a8;
                dStack_9f0 = dStack_7a0;
                local_968 = -local_7a8;
                dStack_960 = -dStack_7a0;
                dVar23 = local_798 * -1.0;
                dVar18 = dStack_790 * 1.0;
                local_958 = -dVar23;
                dStack_950 = -dVar18;
                lVar17 = 0;
                do {
                  dVar20 = *(double *)(lVar13 + lVar17);
                  dVar21 = *(double *)(lVar13 + 8 + lVar17);
                  dVar22 = *(double *)(lVar13 + 0x10 + lVar17);
                  dVar27 = dStack_960 * dVar22 + dVar21 * local_958;
                  dVar27 = dVar27 + dVar27;
                  dVar25 = local_968 * dVar21 + dVar20 * -dStack_960;
                  dVar25 = dVar25 + dVar25;
                  dVar24 = dVar23 * dVar20 + dVar22 * local_7a8;
                  dVar24 = dVar24 + dVar24;
                  *(double *)(lVar13 + lVar17) =
                       dVar24 * local_958 + dStack_960 * dVar25 + dVar18 * dVar27 + dVar20;
                  *(double *)(lVar13 + 8 + lVar17) =
                       dVar25 * local_7a8 + dVar23 * dVar27 + dVar18 * dVar24 + dVar21;
                  *(double *)(lVar13 + 0x10 + lVar17) =
                       local_968 * dVar24 + dVar27 * -dStack_960 + dVar18 * dVar25 + dVar22;
                  lVar17 = lVar17 + 0x18;
                } while ((ulonglong)(uVar11 * 8) * 3 != lVar17);
              }
            }
            if ((int)uVar16 == 0) goto LAB_146cc11a3;
            local_a58 = (double)CONCAT71(local_a58._1_7_,(dVar19 <= dVar26) * '\x02' + '\x01');
          }
          pdVar12 = &local_928;
          pdVar15 = &local_948;
          if (dVar26 < dVar19) {
            local_a18 = local_998;
            dStack_a10 = dStack_990;
            local_a08 = local_988;
            dStack_a00 = dStack_980;
            local_a28 = local_9a8;
            dStack_a20 = dStack_9a0;
            pdVar15 = pdVar12;
            pdVar12 = &local_948;
          }
          local_a38._0_8_ = (double)local_a38._0_8_ * (double)puVar4;
          local_a60 = local_a60 * (double)puVar4;
          local_a68 = local_a68 * (double)puVar4;
          local_988 = local_898;
          local_998 = dStack_890;
          local_9a8 = local_888;
          lVar17 = 0;
          do {
            local_758 = 0xffffffff;
            dVar26 = *(double *)(lVar13 + lVar17);
            dVar18 = ((double *)(lVar13 + lVar17))[1];
            dVar23 = *(double *)(lVar13 + 0x10 + lVar17);
            if (bVar14 == 3) {
              dVar26 = dVar26 - (double)local_a38._0_8_;
              dVar18 = dVar18 - local_a60;
              dVar23 = dVar23 - local_a68;
            }
            dVar20 = (dVar23 - local_9e8) * local_9a8 +
                     (dVar26 - (double)local_9c8._0_8_) * local_988 +
                     (dVar18 - (double)local_9d8._0_8_) * local_998;
            local_918 = dVar23 - dVar20 * local_9a8;
            dStack_920 = dVar18 - local_998 * dVar20;
            local_928 = dVar26 - local_988 * dVar20;
            dVar24 = dVar26 - local_908[4];
            dVar25 = dVar18 - local_908[5];
            dVar20 = dVar23 - local_908[6];
            dVar28 = -local_908[0];
            dVar30 = -local_908[1];
            dVar27 = local_908[2] * -1.0;
            dVar29 = local_908[3] * 1.0;
            dVar22 = dVar24 * dVar27 - dVar28 * dVar20;
            dVar21 = dVar25 * dVar28 - dVar24 * dVar30;
            dVar19 = dVar20 * dVar30 - dVar25 * dVar27;
            dVar19 = dVar19 + dVar19;
            dVar22 = dVar22 + dVar22;
            dVar21 = dVar21 + dVar21;
            local_948 = (dVar21 * dVar30 - dVar22 * dVar27) + dVar29 * dVar19 + dVar24;
            dStack_940 = local_908[0] * dVar21 + dVar27 * dVar19 + dVar29 * dVar22 + dVar25;
            local_938 = dVar29 * dVar21 + dVar20 + (dVar22 * dVar28 - dVar19 * dVar30);
            local_798 = pdVar12[2];
            local_7a8 = *pdVar12;
            dStack_7a0 = pdVar12[1];
            dStack_790 = *pdVar15;
            dStack_788 = pdVar15[1];
            local_760 = (local_928 - dVar26) * local_a28 + (dStack_920 - dVar18) * local_a18 +
                        (local_918 - dVar23) * local_a08;
            local_780 = pdVar15[2];
            local_778 = local_978;
            local_770 = local_9b8;
            local_768 = local_a48;
            local_754 = local_a58._0_1_;
            FUN_1404c649e(param_5,&local_7a8);
            lVar17 = lVar17 + 0x18;
          } while (uVar16 * 0x18 != lVar17);
        }
        else if ((dVar23 <= 0.0) || (DAT_14c992bf9 == '\0')) {
          local_f4 = 2;
          if ((0.0 < fVar1 && (*(ushort *)(param_5 + 0x374) & 0x40) == 0) ||
             (0.0 < fVar2 && -1 < (char)*(ushort *)(param_5 + 0x374))) {
            FUN_146cc259e(param_1,local_908,&local_148);
            local_a98 = local_748;
            FUN_146cbb71a(param_3,&local_7a8,&local_130,local_448);
            dVar23 = local_908[2];
            if (bVar14 == 3) {
              local_908[0] = local_908[0] - local_a28 * (double)puVar4;
              local_908[1] = local_908[1] - local_a18 * (double)puVar4;
              dVar23 = local_908[2] - local_a08 * (double)puVar4;
            }
            dVar19 = local_908[0] - local_7e8;
            dVar22 = local_908[1] - dStack_7e0;
            dVar23 = dVar23 - local_7d8;
            dVar24 = -local_808[0];
            dVar25 = -local_808[1];
            dVar20 = (double)local_9c8._0_8_ * -1.0;
            dVar21 = (double)local_9c8._8_8_ * 1.0;
            dVar29 = dVar19 * dVar20 - dVar24 * dVar23;
            dVar26 = dVar22 * dVar24 - dVar25 * dVar19;
            dVar27 = dVar23 * dVar25 - dVar20 * dVar22;
            dVar27 = dVar27 + dVar27;
            dVar29 = dVar29 + dVar29;
            dVar26 = dVar26 + dVar26;
            dVar23 = ((dVar21 * dVar26 + dVar23 + (dVar29 * dVar24 - dVar27 * dVar25)) - local_798)
                     * dVar18 +
                     (((dVar26 * dVar25 - dVar29 * dVar20) + dVar21 * dVar27 + dVar19) - local_7a8)
                     * local_978 +
                     ((local_808[0] * dVar26 + dVar20 * dVar27 + dVar21 * dVar29 + dVar22) -
                     dStack_7a0) * local_9b8;
            if ((double)fVar3 < dVar23) goto LAB_146cc11a3;
            dVar19 = dVar18 * dVar23 + local_798;
            dVar26 = local_9b8 * dVar23 + dStack_7a0;
            dVar22 = local_978 * dVar23 + local_7a8;
            dVar18 = dVar26 * local_808[0] - (double)local_a38._0_8_ * dVar22;
            dVar20 = dVar19 * local_808[1] - (double)local_a38._8_8_ * dVar26;
            dVar21 = dVar22 * (double)local_9c8._0_8_ - dVar19 * local_9e8;
            dVar20 = dVar20 + dVar20;
            dVar21 = dVar21 + dVar21;
            dVar18 = dVar18 + dVar18;
            local_148 = local_7e8 +
                        (dVar18 * local_808[1] - dVar21 * (double)local_a38._8_8_) +
                        (double)local_9d8._0_8_ * dVar20 + dVar22;
            dStack_140 = dStack_7e0 +
                         ((double)local_9c8._0_8_ * dVar20 - local_9e8 * dVar18) +
                         (double)local_9d8._8_8_ * dVar21 + dVar26;
            local_138 = local_7d8 +
                        dVar18 * (double)local_9d8._0_8_ + dVar19 +
                        (dVar21 * local_808[0] - dVar20 * (double)local_a38._0_8_);
            local_a48 = local_808[0];
            dStack_a40 = local_808[1];
            local_100 = dVar23;
          }
          FUN_1404c649e(param_5,&local_148);
        }
      }
    }
  }
LAB_146cc11a3:
  if ((local_f0 ^ (ulonglong)auStack_ab8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc2325 FUN_146cc2325 body=517 status=ok
// SIG undefined FUN_146cc2325(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cc2325(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  uint *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_b8 = (double)_DAT_14c75f068;
  local_b0 = (double)DAT_14c75f06c;
  local_88 = param_5;
  local_98 = param_6;
  local_a0 = param_3;
  local_90 = param_2;
  if (DAT_14c992dd0 == '\x01') {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_146d07e2d(&local_90,&local_a0,param_4,local_20);
  }
  else {
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = &local_80;
    local_e8 = local_68;
    local_f0 = &local_50;
    local_f8 = &local_38;
    FUN_146d08be5(&local_90,&local_a0,param_4,local_20);
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[3] = local_50;
  param_1[4] = uStack_48;
  param_1[5] = local_40;
  uVar1 = (uint)DAT_149931e80;
  uVar2 = DAT_149931e80._4_4_;
  uVar3 = DAT_149931e80._8_4_;
  uVar4 = DAT_149931e80._12_4_;
  *(uint *)(param_1 + 6) = local_80 ^ uVar1;
  *(uint *)((longlong)param_1 + 0x34) = uStack_7c ^ uVar2;
  *(uint *)(param_1 + 7) = uStack_78 ^ uVar3;
  *(uint *)((longlong)param_1 + 0x3c) = uStack_74 ^ uVar4;
  param_1[8] = CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar2,(uint)local_70 ^ uVar1);
  param_1[9] = CONCAT44(local_20._4_4_ ^ uVar2,local_20._0_4_ ^ uVar1);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc252b FUN_146cc252b body=114 status=ok
// SIG undefined FUN_146cc252b(void)

int FUN_146cc252b(void)

{
  int iVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  undefined8 *local_30;
  undefined8 local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_14;
  local_14 = -1;
  local_30 = &local_20;
  local_20 = 0x3ff0000000000000;
  FUN_146d0a396();
  iVar1 = 0;
  if (local_14 != -1) {
    iVar1 = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc259e FUN_146cc259e body=150 status=ok
// SIG undefined FUN_146cc259e(void)

undefined8 FUN_146cc259e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_1 + 0x30);
  local_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  dVar1 = *(double *)(param_1 + 0x50);
  local_30 = *(double *)(param_1 + 0x48) * dVar1 + *(double *)(param_1 + 0x30);
  local_38 = *(double *)(param_1 + 0x40) * dVar1 + *(double *)(param_1 + 0x28);
  local_40 = dVar1 * *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
  FUN_1404b61d8(param_2,&local_28,&local_40,param_3);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc2635 FUN_146cc2635 body=895 status=ok
// SIG undefined FUN_146cc2635(void)

longlong FUN_146cc2635(longlong param_1,longlong param_2,double *param_3,double *param_4,
                      longlong param_5,longlong param_6,uint *param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_7 = 3;
  lVar12 = 0x10;
  lVar13 = 0;
  do {
    pdVar1 = (double *)(param_2 + -0x10 + lVar12);
    dVar17 = *pdVar1;
    dVar19 = pdVar1[1];
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar8 = param_3[2];
    dVar15 = param_3[3];
    dVar2 = param_3[3];
    dVar16 = dVar19 * dVar6 - dVar17 * dVar7;
    dVar18 = *(double *)(param_2 + lVar12) * dVar7 - dVar19 * dVar8;
    dVar20 = dVar17 * dVar8 - dVar6 * *(double *)(param_2 + lVar12);
    dVar18 = dVar18 + dVar18;
    dVar20 = dVar20 + dVar20;
    dVar16 = dVar16 + dVar16;
    dVar14 = *(double *)(param_2 + lVar12);
    dVar4 = param_3[5];
    dVar3 = param_3[6];
    pdVar1 = (double *)(param_5 + -0x10 + lVar12);
    *pdVar1 = (dVar16 * dVar7 - dVar20 * dVar8) + dVar15 * dVar18 + dVar17 + param_3[4];
    pdVar1[1] = (dVar8 * dVar18 - dVar6 * dVar16) + dVar2 * dVar20 + dVar19 + dVar4;
    *(double *)(param_5 + lVar12) =
         dVar16 * dVar15 + dVar14 + (dVar20 * dVar6 - dVar18 * dVar7) + dVar3;
    lVar13 = lVar13 + 1;
    uVar9 = (ulonglong)(int)*param_7;
    lVar12 = lVar12 + 0x18;
  } while (lVar13 < (longlong)uVar9);
  if (1 < *param_7) {
    dVar2 = *(double *)(param_1 + 0x50);
    bVar11 = 1;
    bVar10 = false;
    lVar12 = param_5;
    dVar14 = *(double *)(param_1 + 0x38) * dVar2 + *(double *)(param_1 + 0x20);
    dVar15 = dVar2 * *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x40) * dVar2 + *(double *)(param_1 + 0x28);
    do {
      param_5 = param_6;
      if (bVar10) {
        dVar3 = *(double *)(param_1 + 0x50);
        dVar16 = *(double *)(param_1 + 0x48) * dVar3 + *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x40) * dVar3 + *(double *)(param_1 + 0x28);
        dVar3 = dVar3 * *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
      }
      else {
        dVar3 = *(double *)(param_1 + 0x20);
        dVar4 = *(double *)(param_1 + 0x28);
        dVar16 = *(double *)(param_1 + 0x30);
      }
      dVar19 = *param_4 * (dVar2 - dVar4) - (dVar14 - dVar3) * param_4[1];
      dVar14 = (dVar14 - dVar3) * param_4[2] - (dVar15 - dVar16) * *param_4;
      dVar17 = param_4[1] * (dVar15 - dVar16) - (dVar2 - dVar4) * param_4[2];
      dVar15 = dVar19 * dVar19 + dVar17 * dVar17 + dVar14 * dVar14;
      dVar2 = SQRT(dVar15);
      local_b0 = 0.0;
      local_a8 = 0.0;
      if (9.999999747378752e-05 <= dVar15) {
        local_a8 = dVar19 / dVar2;
        local_b0 = dVar14 / dVar2;
      }
      local_b8 = (double)(-(ulonglong)(dVar15 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar15 < 9.999999747378752e-05) & (ulonglong)(dVar17 / dVar2)
                         );
      local_c0 = dVar16 * local_a8 + dVar3 * local_b8 + dVar4 * local_b0;
      local_c8 = &local_b8;
      uVar9 = FUN_1449c8de9(lVar12,param_5,uVar9 & 0xffffffff,0x20);
      *param_7 = (uint)uVar9;
      bVar10 = true;
      bVar5 = (bool)(bVar11 & 1 < (uint)uVar9);
      bVar11 = 0;
      param_6 = lVar12;
      lVar12 = param_5;
      dVar14 = dVar3;
      dVar15 = dVar16;
      dVar2 = dVar4;
    } while (bVar5);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 146cc29b5 FUN_146cc29b5 body=886 status=ok
// SIG undefined FUN_146cc29b5(void)

longlong FUN_146cc29b5(longlong param_1,longlong param_2,double *param_3,double *param_4,
                      longlong param_5,longlong param_6,uint *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_7 = 2;
  pdVar5 = (double *)(param_5 + 0x10);
  lVar6 = 0;
  do {
    if ((int)lVar6 == 1) {
      dVar10 = *(double *)(param_2 + 0x50);
      dVar8 = *(double *)(param_2 + 0x48) * dVar10 + *(double *)(param_2 + 0x30);
      dVar11 = *(double *)(param_2 + 0x40) * dVar10 + *(double *)(param_2 + 0x28);
      dVar10 = dVar10 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x20);
    }
    else if ((int)lVar6 == 0) {
      dVar10 = *(double *)(param_2 + 0x20);
      dVar11 = *(double *)(param_2 + 0x28);
      dVar8 = *(double *)(param_2 + 0x30);
    }
    else {
      dVar8 = 0.0;
      dVar10 = 0.0;
      dVar11 = 0.0;
    }
    dVar14 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar1 = param_3[3];
    dVar9 = param_3[3];
    dVar17 = dVar10 * dVar3 - dVar14 * dVar8;
    dVar15 = dVar11 * dVar14 - dVar10 * dVar2;
    dVar16 = dVar8 * dVar2 - dVar11 * dVar3;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    dVar12 = param_3[5];
    dVar13 = param_3[6];
    pdVar5[-2] = (dVar15 * dVar2 - dVar17 * dVar3) + dVar1 * dVar16 + dVar10 + param_3[4];
    pdVar5[-1] = (dVar3 * dVar16 - dVar14 * dVar15) + dVar9 * dVar17 + dVar11 + dVar12;
    *pdVar5 = dVar15 * dVar1 + dVar8 + (dVar17 * dVar14 - dVar16 * dVar2) + dVar13;
    lVar6 = lVar6 + 1;
    uVar4 = (ulonglong)(int)*param_7;
    pdVar5 = pdVar5 + 3;
  } while (lVar6 < (longlong)uVar4);
  if (1 < *param_7) {
    uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x38);
    uVar21 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    pdVar5 = (double *)(param_1 + 0x10);
    uVar7 = 0;
    lVar6 = param_5;
    dVar8 = *(double *)(param_1 + 0x40);
    do {
      param_5 = param_6;
      dVar9 = (double)CONCAT44(uVar19,uVar18);
      dVar13 = (double)CONCAT44(uVar21,uVar20);
      dVar10 = pdVar5[-2];
      uVar18 = SUB84(dVar10,0);
      uVar19 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar11 = pdVar5[-1];
      uVar20 = SUB84(dVar11,0);
      uVar21 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar1 = *pdVar5;
      dVar13 = dVar13 - dVar11;
      dVar9 = dVar9 - dVar10;
      dVar12 = *param_4 * dVar13 - dVar9 * param_4[1];
      dVar9 = dVar9 * param_4[2] - (dVar8 - dVar1) * *param_4;
      dVar13 = param_4[1] * (dVar8 - dVar1) - dVar13 * param_4[2];
      dVar14 = dVar12 * dVar12 + dVar13 * dVar13 + dVar9 * dVar9;
      dVar8 = SQRT(dVar14);
      local_b0 = 0.0;
      local_a8 = 0.0;
      if (9.999999747378752e-05 <= dVar14) {
        local_a8 = dVar12 / dVar8;
        local_b0 = dVar9 / dVar8;
      }
      local_b8 = (double)(-(ulonglong)(dVar14 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar14 < 9.999999747378752e-05) & (ulonglong)(dVar13 / dVar8)
                         );
      local_c0 = dVar1 * local_a8 + dVar10 * local_b8 + dVar11 * local_b0;
      local_c8 = &local_b8;
      uVar4 = FUN_1449c8de9(lVar6,param_5,uVar4 & 0xffffffff,0x20);
      *param_7 = (uint)uVar4;
      if (1 < uVar7) break;
      uVar7 = uVar7 + 1;
      pdVar5 = pdVar5 + 3;
      param_6 = lVar6;
      lVar6 = param_5;
      dVar8 = dVar1;
    } while (1 < (uint)uVar4);
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 146cc2d3a FUN_146cc2d3a body=520 status=ok
// SIG undefined FUN_146cc2d3a(void)

void FUN_146cc2d3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_7d8 [32];
  undefined1 *local_7b8;
  undefined8 local_7a8 [12];
  undefined8 local_748 [12];
  undefined1 local_6e8 [1016];
  undefined1 local_2f0 [432];
  undefined1 *local_140;
  int local_138;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  FUN_146d6866e(local_6e8,param_1);
  puVar13 = &DAT_14c846480;
  puVar14 = local_748;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar13 = &DAT_14c846480;
  puVar14 = local_7a8;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  local_7b8 = local_6e8;
  FUN_146cc0ff6(param_1);
  if (local_140 == (undefined1 *)0x0) {
    local_140 = local_2f0;
  }
  if ((longlong)local_138 != 0) {
    iVar15 = *param_4;
    lVar12 = 0;
    do {
      fVar1 = *(float *)(local_140 + lVar12 + 8);
      fVar2 = *(float *)(local_140 + lVar12 + 4);
      fVar3 = *(float *)(local_140 + lVar12 + 0x14);
      fVar4 = *(float *)(local_140 + lVar12 + 0x10);
      fVar5 = *(float *)(local_140 + lVar12 + 0xc);
      fVar6 = *(float *)(local_140 + lVar12 + 0x20);
      fVar7 = *(float *)(local_140 + lVar12 + 0x1c);
      fVar8 = *(float *)(local_140 + lVar12 + 0x18);
      fVar9 = *(float *)(local_140 + lVar12 + 0x24);
      iVar11 = *(int *)(local_140 + lVar12 + 0x28);
      uVar10 = local_140[lVar12 + 0x2c];
      lVar16 = (longlong)iVar15;
      *(double *)(param_4 + lVar16 * 0x16 + 2) = (double)*(float *)(local_140 + lVar12);
      *(double *)(param_4 + lVar16 * 0x16 + 4) = (double)fVar2;
      *(double *)(param_4 + lVar16 * 0x16 + 6) = (double)fVar1;
      *(double *)(param_4 + lVar16 * 0x16 + 8) = (double)fVar5;
      *(double *)(param_4 + lVar16 * 0x16 + 10) = (double)fVar4;
      *(double *)(param_4 + lVar16 * 0x16 + 0xc) = (double)fVar3;
      *(double *)(param_4 + lVar16 * 0x16 + 0xe) = (double)fVar8;
      *(double *)(param_4 + lVar16 * 0x16 + 0x10) = (double)fVar7;
      *(double *)(param_4 + lVar16 * 0x16 + 0x12) = (double)fVar6;
      *(double *)(param_4 + lVar16 * 0x16 + 0x14) = (double)fVar9;
      param_4[lVar16 * 0x16 + 0x16] = iVar11;
      *(undefined1 *)(param_4 + lVar16 * 0x16 + 0x17) = uVar10;
      iVar15 = *param_4 + 1;
      *param_4 = iVar15;
      lVar12 = lVar12 + 0x6c;
    } while ((longlong)local_138 * 0x6c - lVar12 != 0);
  }
  FUN_14026d15c(local_6e8);
  if ((local_80 ^ (ulonglong)auStack_7d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc2f44 FUN_146cc2f44 body=38 status=ok
// SIG undefined FUN_146cc2f44(void)

undefined8 FUN_146cc2f44(undefined8 param_1,int param_2)

{
  FUN_1457a78f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc2f6c FUN_146cc2f6c body=38 status=ok
// SIG undefined FUN_146cc2f6c(void)

undefined8 FUN_146cc2f6c(undefined8 param_1,int param_2)

{
  FUN_14062c770();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc2f92 FUN_146cc2f92 body=38 status=ok
// SIG undefined FUN_146cc2f92(void)

undefined8 FUN_146cc2f92(undefined8 param_1,int param_2)

{
  FUN_14062c770();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc2fb8 FUN_146cc2fb8 body=38 status=ok
// SIG undefined FUN_146cc2fb8(void)

undefined8 FUN_146cc2fb8(undefined8 param_1,int param_2)

{
  FUN_14062c770();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc2fde FUN_146cc2fde body=48 status=ok
// SIG undefined FUN_146cc2fde(void)

void FUN_146cc2fde(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146cc300e FUN_146cc300e body=48 status=ok
// SIG undefined FUN_146cc300e(void)

void FUN_146cc300e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 146cc303e FUN_146cc303e body=138 status=ok
// SIG undefined FUN_146cc303e(void)

void FUN_146cc303e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x3ff0000000000000;
    param_1[3] = 0;
    param_1[4] = 0x4097700000000000;
    param_1[5] = 0x4059000000000000;
    param_1[6] = 0x408f400000000000;
    param_1[7] = 0x40b3880000000000;
    param_1[8] = 0x3fe44189374bc6a8;
    param_1[9] = 0;
    param_1[10] = 0x4000000000000000;
    param_1[0xb] = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 146cc30c8 FUN_146cc30c8 body=147 status=ok
// SIG undefined FUN_146cc30c8(void)

void FUN_146cc30c8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cc315c FUN_146cc315c body=63 status=ok
// SIG undefined FUN_146cc315c(void)

void FUN_146cc315c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cc319c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 146cc319c FUN_146cc319c body=117 status=ok
// SIG undefined FUN_146cc319c(void)

ulonglong FUN_146cc319c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x60) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 146cc3211 FUN_146cc3211 body=92 status=ok
// SIG undefined FUN_146cc3211(void)

void FUN_146cc3211(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14c8463c0;
  uVar2 = DAT_14c8463b8;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c8463b8 = uVar2;
    DAT_14c8463c0 = uVar1;
    param_1[2] = DAT_14c8463c8;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_1[3] = DAT_14c8464e0;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c8464f0;
    param_1[6] = 0;
    param_1[7] = 0x4202a05f20000000;
    param_1[8] = 0x3fe44189374bc6a8;
    param_1 = param_1 + 9;
    uVar1 = DAT_14c8463c0;
    uVar2 = DAT_14c8463b8;
  }
  DAT_14c8463b8 = uVar2;
  DAT_14c8463c0 = uVar1;
  return;
}



// FUNCTION 146cc326e FUN_146cc326e body=147 status=ok
// SIG undefined FUN_146cc326e(void)

void FUN_146cc326e(longlong param_1,int param_2)

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



// FUNCTION 146cc3302 FUN_146cc3302 body=63 status=ok
// SIG undefined FUN_146cc3302(void)

void FUN_146cc3302(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cc3342(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146cc3342 FUN_146cc3342 body=117 status=ok
// SIG undefined FUN_146cc3342(void)

ulonglong FUN_146cc3342(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x48) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 146cc33b8 FUN_146cc33b8 body=483 status=ok
// SIG undefined FUN_146cc33b8(void)

void FUN_146cc33b8(longlong param_1,double *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  plVar2 = *(longlong **)(param_1 + 0x108);
  if ((plVar2 == (longlong *)0x0) || (*(char *)(param_1 + 0x118) == '\x01')) {
    param_2[2] = DAT_14c8464f0;
    dVar4 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar4;
  }
  else {
    lVar8 = plVar2[1];
    lVar3 = *(longlong *)(*plVar2 + 0x28);
    param_2[2] = *(double *)(lVar3 + 0x10 + (longlong)(int)lVar8 * 0x18);
    pdVar1 = (double *)(lVar3 + (longlong)(int)lVar8 * 0x18);
    dVar4 = pdVar1[1];
    *param_2 = *pdVar1;
    param_2[1] = dVar4;
    plVar2 = *(longlong **)(param_1 + 0x110);
    if (plVar2 != (longlong *)0x0) {
      lVar8 = (longlong)(int)plVar2[1];
      lVar3 = *(longlong *)(*plVar2 + 0x48);
      lVar9 = lVar8 * 0x10;
      dVar5 = (double)*(float *)(lVar3 + 4 + lVar9);
      dVar4 = (double)*(float *)(lVar3 + lVar9);
      dVar10 = (double)*(float *)(lVar3 + 8 + lVar9) * -1.0;
      dVar11 = (double)*(float *)(lVar3 + 0xc + lVar9) * 1.0;
      lVar3 = *(longlong *)(*plVar2 + 0x28);
      dVar14 = param_2[2] - *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
      dVar13 = param_2[1] - *(double *)(lVar3 + 8 + lVar8 * 0x18);
      dVar6 = *param_2 - *(double *)(lVar3 + lVar8 * 0x18);
      dVar15 = -dVar5 * dVar14 - dVar13 * dVar10;
      dVar15 = dVar15 + dVar15;
      dVar7 = -dVar4 * dVar13 - dVar6 * -dVar5;
      dVar7 = dVar7 + dVar7;
      dVar12 = dVar10 * dVar6 - dVar14 * -dVar4;
      dVar12 = dVar12 + dVar12;
      *param_2 = (-dVar5 * dVar7 - dVar12 * dVar10) + dVar11 * dVar15 + dVar6;
      param_2[1] = (dVar10 * dVar15 - dVar7 * -dVar4) + dVar11 * dVar12 + dVar13;
      param_2[2] = (-dVar4 * dVar12 - dVar15 * -dVar5) + dVar11 * dVar7 + dVar14;
    }
  }
  return;
}



// FUNCTION 146cc359c FUN_146cc359c body=54 status=ok
// SIG undefined FUN_146cc359c(void)

void FUN_146cc359c(longlong *param_1)

{
  FUN_146cc35d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146cc35d2 FUN_146cc35d2 body=356 status=ok
// SIG undefined FUN_146cc35d2(void)

void FUN_146cc35d2(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 146cc3738 FUN_146cc3738 body=54 status=ok
// SIG undefined FUN_146cc3738(void)

void FUN_146cc3738(longlong *param_1)

{
  FUN_146cc376e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146cc376e FUN_146cc376e body=128 status=ok
// SIG undefined FUN_146cc376e(void)

void FUN_146cc376e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146cc37f0 FUN_146cc37f0 body=54 status=ok
// SIG undefined FUN_146cc37f0(void)

void FUN_146cc37f0(longlong *param_1)

{
  FUN_146cc3826(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146cc3826 FUN_146cc3826 body=128 status=ok
// SIG undefined FUN_146cc3826(void)

void FUN_146cc3826(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146cc38a8 FUN_146cc38a8 body=884 status=ok
// SIG undefined FUN_146cc38a8(void)

void FUN_146cc38a8(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc3c1e FUN_146cc3c1e body=884 status=ok
// SIG undefined FUN_146cc3c1e(void)

void FUN_146cc3c1e(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc3f94 FUN_146cc3f94 body=884 status=ok
// SIG undefined FUN_146cc3f94(void)

void FUN_146cc3f94(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406863be;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc4309 FUN_146cc4309 body=575 status=ok
// SIG undefined FUN_146cc4309(void)

undefined8 * FUN_146cc4309(undefined8 *param_1,int *param_2,int *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar11 = (longlong)param_3 - (longlong)param_2 >> 3;
  FUN_146cc4638(param_2,param_2 + lVar11,param_3 + -1);
  piVar5 = param_2 + lVar11;
  do {
    piVar8 = piVar5;
    if (piVar8 <= param_2) break;
    lVar9 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar9 = param_4;
    }
    piVar5 = piVar8 + -1;
  } while (*(double *)(lVar9 + 0x28 + (longlong)piVar8[-1] * 0x50) ==
           *(double *)(lVar9 + 0x28 + (longlong)*piVar8 * 0x50));
  piVar5 = param_2 + lVar11;
  do {
    piVar5 = piVar5 + 1;
    piVar6 = piVar5;
    piVar10 = piVar8;
    if (param_3 <= piVar5) break;
    lVar11 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar11 = param_4;
    }
  } while (*(double *)(lVar11 + 0x28 + (longlong)*piVar5 * 0x50) ==
           *(double *)(lVar11 + 0x28 + (longlong)*piVar8 * 0x50));
LAB_146cc43ce:
  do {
    piVar3 = piVar8;
    if (piVar6 < param_3) {
      lVar11 = *(longlong *)(param_4 + 0xa00);
      if (*(longlong *)(param_4 + 0xa00) == 0) {
        lVar11 = param_4;
      }
      dVar1 = *(double *)(lVar11 + 0x28 + (longlong)*piVar8 * 0x50);
      dVar2 = *(double *)(lVar11 + 0x28 + (longlong)*piVar6 * 0x50);
      if (dVar1 <= dVar2) {
        if (dVar1 < dVar2) goto joined_r0x000146cc442c;
        if (piVar6 != piVar5) {
          iVar7 = *piVar5;
          *piVar5 = *piVar6;
          *piVar6 = iVar7;
        }
        piVar5 = piVar5 + 1;
      }
      piVar6 = piVar6 + 1;
      goto LAB_146cc43ce;
    }
joined_r0x000146cc442c:
    while (piVar4 = piVar10, param_2 < piVar4) {
      piVar10 = piVar4 + -1;
      lVar11 = *(longlong *)(param_4 + 0xa00);
      if (*(longlong *)(param_4 + 0xa00) == 0) {
        lVar11 = param_4;
      }
      dVar1 = *(double *)(lVar11 + 0x28 + (longlong)piVar4[-1] * 0x50);
      dVar2 = *(double *)(lVar11 + 0x28 + (longlong)*piVar3 * 0x50);
      if (dVar1 <= dVar2) {
        if (dVar1 < dVar2) break;
        piVar8 = piVar3 + -1;
        bVar12 = piVar4 != piVar3;
        piVar3 = piVar8;
        if (bVar12) {
          iVar7 = *piVar8;
          *piVar8 = piVar4[-1];
          *piVar10 = iVar7;
        }
      }
    }
    if ((piVar6 == param_3) && (piVar4 == param_2)) {
      *param_1 = piVar3;
      param_1[1] = piVar5;
      return param_1;
    }
    if (piVar4 == param_2) {
      iVar7 = *piVar3;
      if (piVar5 != piVar6) {
        *piVar3 = *piVar5;
        *piVar5 = iVar7;
        iVar7 = *piVar3;
      }
      piVar5 = piVar5 + 1;
      *piVar3 = *piVar6;
      *piVar6 = iVar7;
      piVar8 = piVar3 + 1;
      piVar6 = piVar6 + 1;
      piVar10 = param_2;
    }
    else {
      piVar10 = piVar4 + -1;
      if (piVar6 == param_3) {
        piVar8 = piVar3 + -1;
        iVar7 = piVar3[-1];
        if (piVar4 != piVar3) {
          iVar7 = *piVar10;
          *piVar10 = piVar3[-1];
          *piVar8 = iVar7;
        }
        *piVar8 = piVar5[-1];
        piVar5[-1] = iVar7;
        piVar5 = piVar5 + -1;
      }
      else {
        iVar7 = *piVar6;
        *piVar6 = *piVar10;
        *piVar10 = iVar7;
        piVar6 = piVar6 + 1;
        piVar8 = piVar3;
      }
    }
  } while( true );
}



// FUNCTION 146cc4548 FUN_146cc4548 body=240 status=ok
// SIG undefined FUN_146cc4548(void)

void FUN_146cc4548(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar5) {
    lVar6 = *(longlong *)(param_5 + 0xa00);
    if (*(longlong *)(param_5 + 0xa00) == 0) {
      lVar6 = param_5;
    }
    dVar2 = *(double *)(lVar6 + 0x28 + (longlong)*(int *)(param_1 + 8 + lVar4 * 8) * 0x50);
    pdVar1 = (double *)(lVar6 + 0x28 + (longlong)*(int *)(param_1 + 4 + lVar4 * 8) * 0x50);
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      lVar6 = lVar4 * 2 + 1;
    }
    else {
      lVar6 = lVar4 * 2 + 2;
    }
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + lVar6 * 4);
    lVar4 = lVar6;
  }
  if (((param_3 & 1) == 0) && (lVar4 == lVar5)) {
    *(undefined4 *)(param_1 + lVar5 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar6 = lVar4 + -1 >> 1;
    iVar3 = *(int *)(param_1 + lVar6 * 4);
    lVar5 = *(longlong *)(param_5 + 0xa00);
    if (*(longlong *)(param_5 + 0xa00) == 0) {
      lVar5 = param_5;
    }
    dVar2 = *(double *)(lVar5 + 0x28 + (longlong)iVar3 * 0x50);
    pdVar1 = (double *)(lVar5 + 0x28 + (longlong)*param_4 * 0x50);
    if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
    *(int *)(param_1 + lVar4 * 4) = iVar3;
    lVar4 = lVar6;
  }
  *(int *)(param_1 + lVar4 * 4) = *param_4;
  return;
}



// FUNCTION 146cc4638 FUN_146cc4638 body=168 status=ok
// SIG undefined FUN_146cc4638(void)

void FUN_146cc4638(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = param_3 - param_1 >> 2;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 & 0xfffffffffffffff8;
    uVar3 = uVar3 >> 3;
    lVar2 = param_1 + uVar3 * 4;
    FUN_146cc46e0(param_1,lVar2,param_1 + uVar1,param_4);
    FUN_146cc46e0(param_2 + uVar3 * -4,param_2,param_2 + uVar3 * 4,param_4);
    lVar4 = param_3 + uVar3 * -4;
    FUN_146cc46e0(param_3 - uVar1,lVar4,param_3,param_4);
    param_1 = lVar2;
    param_3 = lVar4;
  }
  FUN_146cc46e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146cc46e0 FUN_146cc46e0 body=176 status=ok
// SIG undefined FUN_146cc46e0(void)

void FUN_146cc46e0(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *param_2;
  lVar7 = *(longlong *)(param_4 + 0xa00);
  lVar6 = lVar7;
  if (lVar7 == 0) {
    lVar6 = param_4;
  }
  lVar5 = (longlong)iVar4;
  dVar2 = *(double *)(lVar6 + 0x28 + lVar5 * 0x50);
  pdVar1 = (double *)(lVar6 + 0x28 + (longlong)*param_1 * 0x50);
  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
    *param_2 = *param_1;
    *param_1 = iVar4;
    iVar4 = *param_2;
    lVar7 = *(longlong *)(param_4 + 0xa00);
    lVar5 = (longlong)iVar4;
  }
  iVar3 = *param_3;
  if (lVar7 == 0) {
    lVar7 = param_4;
  }
  dVar2 = *(double *)(lVar7 + 0x28 + (longlong)iVar3 * 0x50);
  pdVar1 = (double *)(lVar7 + 0x28 + lVar5 * 0x50);
  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
    *param_3 = iVar4;
    *param_2 = iVar3;
    lVar7 = *(longlong *)(param_4 + 0xa00);
    if (*(longlong *)(param_4 + 0xa00) == 0) {
      lVar7 = param_4;
    }
    dVar2 = *(double *)(lVar7 + 0x28 + (longlong)iVar3 * 0x50);
    pdVar1 = (double *)(lVar7 + 0x28 + (longlong)*param_1 * 0x50);
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
    }
  }
  return;
}



// FUNCTION 146cc4790 FUN_146cc4790 body=110 status=ok
// SIG undefined FUN_146cc4790(void)

void FUN_146cc4790(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = (int)uVar2;
    FUN_146cc47fe(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 146cc47fe FUN_146cc47fe body=142 status=ok
// SIG undefined FUN_146cc47fe(void)

void FUN_146cc47fe(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 146cc488c FUN_146cc488c body=125 status=ok
// SIG undefined FUN_146cc488c(void)

void FUN_146cc488c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_146cc47fe(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146cc490a FUN_146cc490a body=282 status=ok
// SIG undefined FUN_146cc490a(void)

undefined4 *
FUN_146cc490a(undefined4 *param_1,longlong param_2,double *param_3,double *param_4,int *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_44 [3];
  double local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = *(double *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x88);
  local_38[0] = *param_3 * *(double *)(param_2 + 0x20);
  local_38[1] = param_3[1] * *(double *)(param_2 + 0x28);
  local_38[2] = param_3[2] * *(double *)(param_2 + 0x30);
  lVar7 = 0;
  do {
    pdVar1 = (double *)((longlong)local_38 + lVar7 * 2);
    bVar4 = *pdVar1 == 0.0;
    bVar5 = 0.0 < *pdVar1;
    dVar8 = -dVar2;
    lVar6 = lVar3 + 0x38;
    if (!bVar5 && !bVar4) {
      dVar8 = dVar2;
      lVar6 = lVar3 + 0x20;
    }
    *(double *)((longlong)&local_60 + lVar7 * 2) =
         *(double *)(param_2 + 0x20 + lVar7 * 2) * *(double *)(lVar6 + lVar7 * 2) + dVar8;
    *(uint *)((longlong)local_44 + lVar7) = (uint)(bVar5 || bVar4);
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  *param_5 = local_44[1] * 2 + local_44[0] + local_44[2] * 4;
  if (param_4 != (double *)0x0) {
    *param_4 = dVar2 * 0.7320508075688772;
  }
  *(undefined8 *)(param_1 + 4) = local_50;
  *param_1 = (undefined4)local_60;
  param_1[1] = local_60._4_4_;
  param_1[2] = uStack_58;
  param_1[3] = uStack_54;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 146cc4aee FUN_146cc4aee body=176 status=ok
// SIG undefined FUN_146cc4aee(void)

void FUN_146cc4aee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140683244(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc4ba0 FUN_146cc4ba0 body=176 status=ok
// SIG undefined FUN_146cc4ba0(void)

void FUN_146cc4ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc4db5(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc4c52 FUN_146cc4c52 body=176 status=ok
// SIG undefined FUN_146cc4c52(void)

void FUN_146cc4c52(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc5044(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc4d04 FUN_146cc4d04 body=176 status=ok
// SIG undefined FUN_146cc4d04(void)

void FUN_146cc4d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc5341(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc4db5 FUN_146cc4db5 body=568 status=ok
// SIG undefined FUN_146cc4db5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc4db5(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  float local_8c;
  undefined1 *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar11 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar9 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar11) && (dVar7 = dVar9, dVar9 <= dVar11)) {
    dVar7 = dVar11;
  }
  local_78 = (float)dVar1;
  local_70 = &LAB_144a386ca;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_88 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  local_74 = local_78;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc5044 FUN_146cc5044 body=539 status=ok
// SIG undefined FUN_146cc5044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc5044(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar11 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar9 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar11) && (dVar7 = dVar9, dVar9 <= dVar11)) {
    dVar7 = dVar11;
  }
  local_78 = (float)dVar1;
  local_70 = &LAB_144a386ca;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  local_74 = local_78;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc5264 FUN_146cc5264 body=220 status=ok
// SIG undefined FUN_146cc5264(void)

void FUN_146cc5264(longlong param_1,float param_2,float *param_3)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  double local_38 [6];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x88);
  local_38[3] = (double)*param_3 * *(double *)(param_1 + 0x20);
  local_38[4] = (double)param_3[1] * *(double *)(param_1 + 0x28);
  local_38[5] = (double)param_3[2] * *(double *)(param_1 + 0x30);
  lVar3 = 0;
  do {
    pdVar1 = local_38 + lVar3 + 3;
    lVar4 = lVar2 + 0x38;
    if (*pdVar1 <= 0.0 && *pdVar1 != 0.0) {
      lVar4 = lVar2 + 0x20;
    }
    dVar5 = (double)param_2;
    if (NAN(*pdVar1) || (*pdVar1 > 0.0 || *pdVar1 == 0.0)) {
      dVar5 = -(double)param_2;
    }
    local_38[lVar3] =
         *(double *)(param_1 + 0x20 + lVar3 * 8) * *(double *)(lVar4 + lVar3 * 8) + dVar5;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((float)local_38[1],(float)local_38[0]),(float)local_38[2]);
}



// FUNCTION 146cc5341 FUN_146cc5341 body=568 status=ok
// SIG undefined FUN_146cc5341(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc5341(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  float local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  float local_74;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar6 = (dVar1 + *(double *)(param_2 + 0x20)) - (*(double *)(param_2 + 0x20) - dVar1);
  dVar7 = (dVar1 + *(double *)(param_2 + 0x30)) - (*(double *)(param_2 + 0x30) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_2 + 0x28)) - (*(double *)(param_2 + 0x28) - dVar1);
  if ((dVar6 <= dVar7 || dVar6 <= dVar9) && (dVar6 = dVar9, dVar9 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar11 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar9 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar9 || dVar7 <= dVar11) && (dVar7 = dVar9, dVar9 <= dVar11)) {
    dVar7 = dVar11;
  }
  local_78 = (float)dVar1;
  local_70 = &LAB_144a386ca;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_88 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  local_74 = local_78;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc5596 FUN_146cc5596 body=208 status=ok
// SIG undefined FUN_146cc5596(void)

void FUN_146cc5596(void)

{
  return;
}



// FUNCTION 146cc5670 FUN_146cc5670 body=145 status=ok
// SIG undefined FUN_146cc5670(void)

void FUN_146cc5670(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_140682465(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc5702 FUN_146cc5702 body=38 status=ok
// SIG undefined FUN_146cc5702(void)

undefined8 FUN_146cc5702(undefined8 param_1,int param_2)

{
  FUN_14068416c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc5734 FUN_146cc5734 body=34 status=ok
// SIG undefined FUN_146cc5734(void)

longlong * FUN_146cc5734(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146cc5f8a();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146cc5756 FUN_146cc5756 body=137 status=ok
// SIG undefined FUN_146cc5756(void)

longlong * FUN_146cc5756(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146cc5f8a();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_140684284(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc57f6 FUN_146cc57f6 body=747 status=ok
// SIG undefined FUN_146cc57f6(void)

undefined8
FUN_146cc57f6(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined8 param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_2[2] * *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x38);
  local_60 = param_2[1] * *(double *)(param_1 + 0x40);
  local_68 = *param_2 * dVar7;
  dVar4 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar5 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar8 = *param_3 * dVar7;
  dVar6 = SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5);
  if (2.2250738585072014e-308 < dVar6) {
    dVar1 = 1.0 / dVar6;
    local_70 = dVar4 * dVar1;
    local_78 = dVar5 * dVar1;
    local_80 = dVar8 * dVar1;
    local_e8 = dVar7 * param_5;
    local_c8 = param_9;
    local_d0 = &local_b0;
    local_d8 = &local_98;
    local_e0 = &local_b8;
    cVar2 = FUN_1406642e0(*(undefined8 *)(param_1 + 0x88),&local_68,&local_80,dVar6 * param_4);
    if (cVar2 != '\0') {
      dVar1 = dVar1 * local_b8;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (param_4 <= dVar1) goto LAB_146cc5a85;
        dVar7 = *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28);
        *param_7 = *(double *)(param_1 + 0x20) * local_98;
        param_7[1] = dVar4 * local_90;
        param_7[2] = dVar7 * local_88;
        local_a0 = *(double *)(param_1 + 0x48) * local_a0;
        local_a8 = *(double *)(param_1 + 0x40) * local_a8;
        local_b0 = *(double *)(param_1 + 0x38) * local_b0;
        dVar7 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
        if (((dVar7 != 1.0) || (dVar5 = local_b0, dVar6 = local_a8, dVar4 = local_a0, NAN(dVar7)))
           && (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
              2.2250738585072014e-308 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar5 = local_b0 * dVar7;
          dVar6 = local_a8 * dVar7;
          dVar4 = local_a0 * dVar7;
        }
      }
      else {
        param_7[2] = param_2[2];
        dVar7 = param_2[1];
        *param_7 = *param_2;
        param_7[1] = dVar7;
        dVar5 = -*param_3;
        dVar6 = -param_3[1];
        dVar4 = -param_3[2];
      }
      *param_8 = dVar5;
      param_8[1] = dVar6;
      param_8[2] = dVar4;
      *param_6 = dVar1;
      uVar3 = 1;
      goto LAB_146cc5a87;
    }
  }
LAB_146cc5a85:
  uVar3 = 0;
LAB_146cc5a87:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146cc5ae2 FUN_146cc5ae2 body=46 status=ok
// SIG undefined FUN_146cc5ae2(void)

void FUN_146cc5ae2(longlong param_1)

{
  FUN_146ca3b50(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 146cc5c16 FUN_146cc5c16 body=135 status=ok
// SIG undefined FUN_146cc5c16(void)

bool FUN_146cc5c16(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(double *)(param_1 + 0x48) * param_2[2];
  dVar1 = *(double *)(param_1 + 0x38);
  local_30 = *(double *)(param_1 + 0x40) * param_2[1];
  local_38 = *param_2 * dVar1;
  FUN_146dae118(*(undefined8 *)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3 * dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc5c9e FUN_146cc5c9e body=200 status=ok
// SIG undefined FUN_146cc5c9e(void)

undefined8 FUN_146cc5c9e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_146ca4b2c(*(undefined8 *)(param_1 + 0x88),&local_60);
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146cc5d68 FUN_146cc5d68 body=186 status=ok
// SIG undefined FUN_146cc5d68(void)

void FUN_146cc5d68(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_146cc6004(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc5e24 FUN_146cc5e24 body=97 status=ok
// SIG undefined FUN_146cc5e24(void)

void FUN_146cc5e24(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  lVar1 = *(longlong *)(param_1 + 0x88);
  uVar4 = FUN_1448eb174(lVar1 + 0x20,0x18,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = FUN_144a78877(uVar4,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2);
  FUN_144a78877(uVar4,uVar3);
  return;
}



// FUNCTION 146cc5e8a FUN_146cc5e8a body=240 status=ok
// SIG undefined FUN_146cc5e8a(void)

double * FUN_146cc5e8a(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc5f8a FUN_146cc5f8a body=120 status=ok
// SIG undefined FUN_146cc5f8a(void)

undefined8 FUN_146cc5f8a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_140687444(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc6004 FUN_146cc6004 body=147 status=ok
// SIG undefined FUN_146cc6004(void)

void FUN_146cc6004(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_146cc6098();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_146cc6488(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
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



// FUNCTION 146cc6098 FUN_146cc6098 body=1006 status=ok
// SIG undefined FUN_146cc6098(void)

void FUN_146cc6098(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146cc628a;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146cc6271;
            iVar11 = *(int *)(lVar7 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      uVar10 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar10);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar10 = uVar4;
      }
      FUN_146ca4be2(uVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cc628a;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar9[1];
    uVar5 = iVar6 - iVar11;
    if (uVar5 != 0 && iVar11 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar11) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146cc63aa;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar11) {
      uVar10 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar10 == 0) {
        uVar10 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar10);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar10 = uVar4;
        }
        FUN_146ca4be2(uVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar10;
      }
      goto LAB_146cc628a;
    }
  }
LAB_146cc63aa:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cc628a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146cc6271:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146cc62e6;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146cc62e6:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146cc628a;
}



// FUNCTION 146cc6488 FUN_146cc6488 body=310 status=ok
// SIG undefined FUN_146cc6488(void)

undefined8 * FUN_146cc6488(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar4 = (undefined8 *)puVar1[1], puVar4 != (undefined8 *)0x0)) goto LAB_146cc650b;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_149f4bc40;
  puVar4[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar4;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_146cc650b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 + 1;
}



// FUNCTION 146cc65c0 FUN_146cc65c0 body=74 status=ok
// SIG undefined FUN_146cc65c0(void)

undefined8 * FUN_146cc65c0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f4bc40;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc660a FUN_146cc660a body=373 status=ok
// SIG undefined FUN_146cc660a(void)

void FUN_146cc660a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146cc669b_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146cc669b_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146cc6661_caseD_82;
  case 3:
switchD_146cc669b_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146cc660a(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146cc669b_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146cc669b_caseD_0;
    case 0x41:
      goto switchD_146cc669b_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146cc669b_caseD_3;
    case 0x48:
      goto switchD_146cc669b_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146cc6661_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146cc6846(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146cc6846 FUN_146cc6846 body=884 status=ok
// SIG undefined FUN_146cc6846(void)

void FUN_146cc6846(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc6bbc FUN_146cc6bbc body=877 status=ok
// SIG undefined FUN_146cc6bbc(void)

void FUN_146cc6bbc(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc6f2a FUN_146cc6f2a body=884 status=ok
// SIG undefined FUN_146cc6f2a(void)

void FUN_146cc6f2a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc72a0 FUN_146cc72a0 body=884 status=ok
// SIG undefined FUN_146cc72a0(void)

void FUN_146cc72a0(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc7616 FUN_146cc7616 body=884 status=ok
// SIG undefined FUN_146cc7616(void)

void FUN_146cc7616(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc798c FUN_146cc798c body=884 status=ok
// SIG undefined FUN_146cc798c(void)

void FUN_146cc798c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc7d02 FUN_146cc7d02 body=884 status=ok
// SIG undefined FUN_146cc7d02(void)

void FUN_146cc7d02(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8078 FUN_146cc8078 body=884 status=ok
// SIG undefined FUN_146cc8078(void)

void FUN_146cc8078(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_1406863dc;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc84a0 FUN_146cc84a0 body=176 status=ok
// SIG undefined FUN_146cc84a0(void)

void FUN_146cc84a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_1405ca8e6(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8552 FUN_146cc8552 body=176 status=ok
// SIG undefined FUN_146cc8552(void)

void FUN_146cc8552(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc8767(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8604 FUN_146cc8604 body=176 status=ok
// SIG undefined FUN_146cc8604(void)

void FUN_146cc8604(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc8979(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc86b6 FUN_146cc86b6 body=176 status=ok
// SIG undefined FUN_146cc86b6(void)

void FUN_146cc86b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146cc8b64(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8767 FUN_146cc8767 body=529 status=ok
// SIG undefined FUN_146cc8767(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc8767(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144857b9e;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc8979 FUN_146cc8979 body=490 status=ok
// SIG undefined FUN_146cc8979(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc8979(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144857b9e;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc8b64 FUN_146cc8b64 body=529 status=ok
// SIG undefined FUN_146cc8b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cc8b64(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar1 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144857b9e;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cc8d7c FUN_146cc8d7c body=145 status=ok
// SIG undefined FUN_146cc8d7c(void)

void FUN_146cc8d7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_1405c9af5(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8e0e FUN_146cc8e0e body=38 status=ok
// SIG undefined FUN_146cc8e0e(void)

undefined8 FUN_146cc8e0e(undefined8 param_1,int param_2)

{
  FUN_1405cc3c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc8e40 FUN_146cc8e40 body=34 status=ok
// SIG undefined FUN_146cc8e40(void)

longlong * FUN_146cc8e40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146cc97f6();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146cc8e62 FUN_146cc8e62 body=137 status=ok
// SIG undefined FUN_146cc8e62(void)

longlong * FUN_146cc8e62(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146cc97f6();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_1405cc4dc(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc8f02 FUN_146cc8f02 body=751 status=ok
// SIG undefined FUN_146cc8f02(void)

undefined8
FUN_146cc8f02(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined8 param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_2[2] * *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x38);
  local_60 = param_2[1] * *(double *)(param_1 + 0x40);
  local_68 = *param_2 * dVar7;
  dVar4 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar5 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar8 = *param_3 * dVar7;
  dVar6 = SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5);
  if (2.2250738585072014e-308 < dVar6) {
    dVar1 = 1.0 / dVar6;
    local_70 = dVar4 * dVar1;
    local_78 = dVar5 * dVar1;
    local_80 = dVar8 * dVar1;
    local_e8 = dVar7 * param_5;
    local_c8 = param_9;
    local_d0 = &local_b0;
    local_d8 = &local_98;
    local_e0 = &local_b8;
    cVar2 = FUN_142987e3e(*(longlong *)(param_1 + 0x88) + 0x20,&local_68,&local_80,dVar6 * param_4);
    if (cVar2 != '\0') {
      dVar1 = dVar1 * local_b8;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (param_4 <= dVar1) goto LAB_146cc9195;
        dVar7 = *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28);
        *param_7 = *(double *)(param_1 + 0x20) * local_98;
        param_7[1] = dVar4 * local_90;
        param_7[2] = dVar7 * local_88;
        local_a0 = *(double *)(param_1 + 0x48) * local_a0;
        local_a8 = *(double *)(param_1 + 0x40) * local_a8;
        local_b0 = *(double *)(param_1 + 0x38) * local_b0;
        dVar7 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
        if (((dVar7 != 1.0) || (dVar5 = local_b0, dVar6 = local_a8, dVar4 = local_a0, NAN(dVar7)))
           && (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
              2.2250738585072014e-308 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar5 = local_b0 * dVar7;
          dVar6 = local_a8 * dVar7;
          dVar4 = local_a0 * dVar7;
        }
      }
      else {
        param_7[2] = param_2[2];
        dVar7 = param_2[1];
        *param_7 = *param_2;
        param_7[1] = dVar7;
        dVar5 = -*param_3;
        dVar6 = -param_3[1];
        dVar4 = -param_3[2];
      }
      *param_8 = dVar5;
      param_8[1] = dVar6;
      param_8[2] = dVar4;
      *param_6 = dVar1;
      uVar3 = 1;
      goto LAB_146cc9197;
    }
  }
LAB_146cc9195:
  uVar3 = 0;
LAB_146cc9197:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146cc91f2 FUN_146cc91f2 body=46 status=ok
// SIG undefined FUN_146cc91f2(void)

void FUN_146cc91f2(longlong param_1)

{
  FUN_146ca3b50(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 146cc9226 FUN_146cc9226 body=601 status=ok
// SIG undefined FUN_146cc9226(void)

double * FUN_146cc9226(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  double local_88 [6];
  double local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = *param_3 * *(double *)(param_1 + 0x20);
  local_58[1] = param_3[1] * *(double *)(param_1 + 0x28);
  local_58[2] = param_3[2] * *(double *)(param_1 + 0x30);
  local_88[2] = *(double *)(param_1 + 0x30) * param_5[2];
  local_88[1] = *(double *)(param_1 + 0x28) * param_5[1];
  dVar4 = *(double *)(param_1 + 0x20) * *param_5;
  dVar7 = SQRT(local_88[2] * local_88[2] + dVar4 * dVar4 + local_88[1] * local_88[1]);
  if (9.99999993922529e-09 < dVar7) {
    local_88[1] = local_88[1] / dVar7;
  }
  else {
    local_88[1] = 0.0;
  }
  local_88[0] = (double)(-(ulonglong)(9.99999993922529e-09 < dVar7) & (ulonglong)(dVar4 / dVar7));
  if (9.99999993922529e-09 < dVar7) {
    local_88[2] = local_88[2] / dVar7;
  }
  else {
    local_88[2] = 1.0;
  }
  local_88[3] = local_88[0];
  local_88[4] = local_88[1];
  local_88[5] = local_88[2];
  uVar8 = 0xffffffff;
  uVar9 = 0x7fefffff;
  lVar3 = 0;
  do {
    if (local_88[lVar3 + 3] <= 9.999999747378752e-05) {
      if (local_88[lVar3 + 3] < -9.999999747378752e-05) {
        dVar4 = -local_88[lVar3 + 6];
        if (dVar4 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != dVar4) {
          uVar10 = 0xbff00000;
          uVar1 = SUB84(local_88[lVar3 + 6],0);
          uVar2 = (int)((ulonglong)dVar4 >> 0x20);
          goto LAB_146cc9396;
        }
      }
    }
    else {
      dVar4 = local_88[lVar3 + 6];
      uVar10 = 0x3ff00000;
      uVar1 = SUB84(dVar4,0);
      uVar2 = (int)((ulonglong)dVar4 >> 0x20);
      if (dVar4 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != dVar4) {
LAB_146cc9396:
        uVar9 = uVar2;
        uVar8 = uVar1;
        local_88[0] = 0.0;
        local_88[1] = 0.0;
        local_88[2] = 0.0;
        local_88[lVar3] = (double)((ulonglong)uVar10 << 0x20);
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  dVar7 = local_88[2] * *(double *)(param_1 + 0x48);
  dVar4 = local_88[1] * *(double *)(param_1 + 0x40);
  dVar5 = local_88[0] * *(double *)(param_1 + 0x38);
  dVar6 = dVar7 * dVar7 + dVar5 * dVar5 + dVar4 * dVar4;
  if (2.2250738585072014e-308 <= dVar6) {
    dVar6 = SQRT(dVar6);
    *param_2 = dVar5 / dVar6;
    param_2[1] = dVar4 / dVar6;
    param_2[2] = dVar7 / dVar6;
    if ((dVar6 != 0.0) || (NAN(dVar6))) goto LAB_146cc9448;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
LAB_146cc9448:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146cc9480 FUN_146cc9480 body=135 status=ok
// SIG undefined FUN_146cc9480(void)

bool FUN_146cc9480(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(double *)(param_1 + 0x48) * param_2[2];
  dVar1 = *(double *)(param_1 + 0x38);
  local_30 = *(double *)(param_1 + 0x40) * param_2[1];
  local_38 = *param_2 * dVar1;
  FUN_146dae118(*(undefined8 *)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3 * dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc9508 FUN_146cc9508 body=200 status=ok
// SIG undefined FUN_146cc9508(void)

undefined8 FUN_146cc9508(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_146ca2702(*(undefined8 *)(param_1 + 0x88),&local_60);
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146cc95d2 FUN_146cc95d2 body=186 status=ok
// SIG undefined FUN_146cc95d2(void)

void FUN_146cc95d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_146cc9870(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc968e FUN_146cc968e body=100 status=ok
// SIG undefined FUN_146cc968e(void)

void FUN_146cc968e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  lVar1 = *(longlong *)(param_1 + 0x88);
  uVar3 = FUN_1448eb174(lVar1 + 0x38,0x18,0);
  uVar4 = FUN_1448eb174(lVar1 + 0x20,0x18,0);
  uVar3 = FUN_144a78877(uVar4,uVar3);
  FUN_144a78877(uVar3,uVar2);
  return;
}



// FUNCTION 146cc96f6 FUN_146cc96f6 body=240 status=ok
// SIG undefined FUN_146cc96f6(void)

double * FUN_146cc96f6(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc97f6 FUN_146cc97f6 body=120 status=ok
// SIG undefined FUN_146cc97f6(void)

undefined8 FUN_146cc97f6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1405cd3a6(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cc9870 FUN_146cc9870 body=147 status=ok
// SIG undefined FUN_146cc9870(void)

void FUN_146cc9870(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_146cc9904();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_146cc9cf4(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
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



// FUNCTION 146cc9904 FUN_146cc9904 body=1006 status=ok
// SIG undefined FUN_146cc9904(void)

void FUN_146cc9904(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146cc9af6;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146cc9add;
            iVar11 = *(int *)(lVar7 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      uVar10 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar10);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar10 = uVar4;
      }
      FUN_140a28a24(uVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cc9af6;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar9[1];
    uVar5 = iVar6 - iVar11;
    if (uVar5 != 0 && iVar11 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar11) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146cc9c16;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar11) {
      uVar10 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar10 == 0) {
        uVar10 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar10);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar10 = uVar4;
        }
        FUN_140a28a24(uVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar10;
      }
      goto LAB_146cc9af6;
    }
  }
LAB_146cc9c16:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cc9af6:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146cc9add:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146cc9b52;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146cc9b52:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146cc9af6;
}



// FUNCTION 146cc9cf4 FUN_146cc9cf4 body=310 status=ok
// SIG undefined FUN_146cc9cf4(void)

undefined8 * FUN_146cc9cf4(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar4 = (undefined8 *)puVar1[1], puVar4 != (undefined8 *)0x0)) goto LAB_146cc9d77;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_149f4bda8;
  puVar4[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar4;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_146cc9d77:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 + 1;
}



// FUNCTION 146cc9e2c FUN_146cc9e2c body=74 status=ok
// SIG undefined FUN_146cc9e2c(void)

undefined8 * FUN_146cc9e2c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f4bda8;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cc9e76 FUN_146cc9e76 body=884 status=ok
// SIG undefined FUN_146cc9e76(void)

void FUN_146cc9e76(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_140686536;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cca1ec FUN_146cca1ec body=884 status=ok
// SIG undefined FUN_146cca1ec(void)

void FUN_146cca1ec(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_146cc490a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cca562 FUN_146cca562 body=884 status=ok
// SIG undefined FUN_146cca562(void)

void FUN_146cca562(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_146cc4a26;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cca98a FUN_146cca98a body=770 status=ok
// SIG undefined FUN_146cca98a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cca98a(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar10;
  undefined1 auVar9 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  undefined4 local_cc;
  code *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar2 = (double *)param_1[2];
  dVar14 = pdVar2[2];
  uVar11 = SUB84(dVar14,0);
  uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
  if (dVar14 * dVar14 + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
    dVar14 = 1.0;
    dVar15 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    dVar14 = *pdVar2;
    dVar15 = pdVar2[1];
  }
  local_c0 = *param_1;
  dVar1 = *(double *)(local_c0 + 0x10);
  dVar8 = *(double *)(local_c0 + 0x20);
  dVar13 = *(double *)(local_c0 + 0x28);
  dVar19 = *(double *)(local_c0 + 0x30);
  dVar23 = *(double *)(local_c0 + 0x50);
  dVar22 = *(double *)(local_c0 + 0x48) * dVar23 + dVar19;
  dVar3 = *(double *)(local_c0 + 0x40) * dVar23 + dVar13;
  dVar23 = dVar23 * *(double *)(local_c0 + 0x38) + dVar8;
  dVar4 = dVar19;
  if (dVar22 <= dVar19) {
    dVar4 = dVar22;
  }
  dVar5 = dVar13;
  if (dVar3 <= dVar13) {
    dVar5 = dVar3;
  }
  dVar6 = dVar8;
  if (dVar23 <= dVar8) {
    dVar6 = dVar23;
  }
  if (dVar19 <= dVar22) {
    dVar19 = dVar22;
  }
  if (dVar13 <= dVar3) {
    dVar13 = dVar3;
  }
  if (dVar8 <= dVar23) {
    dVar8 = dVar23;
  }
  dVar8 = (dVar8 + dVar1) - (dVar6 - dVar1);
  dVar19 = (dVar19 + dVar1) - (dVar4 - dVar1);
  dVar13 = (dVar13 + dVar1) - (dVar5 - dVar1);
  if ((dVar8 <= dVar19 || dVar8 <= dVar13) && (dVar8 = dVar13, dVar13 <= dVar19)) {
    dVar8 = dVar19;
  }
  dVar23 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
  dVar13 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
  dVar19 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  local_f0 = *(undefined8 *)param_1[1];
  if ((dVar19 <= dVar13 || dVar19 <= dVar23) && (dVar19 = dVar13, dVar13 <= dVar23)) {
    dVar19 = dVar23;
  }
  local_b8 = (float)dVar1;
  local_b0 = &LAB_144a386e2;
  local_d0 = (float)*(double *)(param_2 + 0x10);
  local_cc = 0;
  local_c8 = FUN_144857b9e;
  fVar16 = (float)param_3[2];
  fVar18 = (float)param_3[3];
  fVar20 = (float)*param_3;
  fVar21 = (float)param_3[1];
  if (dVar19 <= dVar8) {
    dVar19 = dVar8;
  }
  local_98._0_4_ = (float)param_3[4];
  local_98._4_4_ = (float)param_3[5];
  local_98._8_4_ = (float)param_3[6];
  local_98._12_4_ = 0;
  fVar7 = fVar20 * fVar20 + fVar21 * fVar21;
  fVar10 = fVar16 * fVar16 + fVar18 * fVar18;
  auVar17._0_4_ = fVar10 + fVar7;
  auVar17._4_4_ = fVar10 + fVar7;
  auVar17._8_4_ = fVar7 + fVar10;
  auVar17._12_4_ = fVar7 + fVar10;
  auVar9._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar9._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar9._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar9._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  auVar17 = sqrtps(auVar17,auVar17);
  auVar17 = divps(_DAT_1499314a0,auVar17);
  auVar24._0_4_ = auVar17._0_4_ * fVar20;
  auVar24._4_4_ = auVar17._4_4_ * fVar21;
  auVar24._8_4_ = auVar17._8_4_ * fVar16;
  auVar24._12_4_ = auVar17._12_4_ * fVar18;
  local_88 = blendvps(_DAT_149932320,auVar24,auVar9);
  local_f8 = local_88;
  local_e8 = local_a8;
  local_a8._4_4_ = (float)dVar15;
  local_a8._0_4_ = (float)dVar14;
  local_a8._8_4_ = (float)(double)CONCAT44(uVar12,uVar11);
  local_a8._12_4_ = 0;
  local_d8 = param_2;
  local_b4 = local_b8;
  FUN_144946907(&local_d8,&local_c0,dVar19);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccac8e FUN_146ccac8e body=176 status=ok
// SIG undefined FUN_146ccac8e(void)

void FUN_146ccac8e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_1402e5948(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccad40 FUN_146ccad40 body=176 status=ok
// SIG undefined FUN_146ccad40(void)

void FUN_146ccad40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ccaf55(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccadf2 FUN_146ccadf2 body=176 status=ok
// SIG undefined FUN_146ccadf2(void)

void FUN_146ccadf2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ccb17f(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccaea4 FUN_146ccaea4 body=176 status=ok
// SIG undefined FUN_146ccaea4(void)

void FUN_146ccaea4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ccb38b(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccaf55 FUN_146ccaf55 body=553 status=ok
// SIG undefined FUN_146ccaf55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ccaf55(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  double local_a8;
  float local_a0;
  float fStack_9c;
  undefined1 *local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b0186e(param_2,&local_a8);
  local_80 = local_80 - (double)local_98;
  local_88 = local_88 - (double)CONCAT44(fStack_9c,local_a0);
  local_90 = local_90 - local_a8;
  if ((local_90 <= local_80 || local_90 <= local_88) && (local_90 = local_88, local_88 <= local_80))
  {
    local_90 = local_80;
  }
  dVar8 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar8) && (dVar6 = dVar1, dVar1 <= dVar8)) {
    dVar6 = dVar8;
  }
  local_a0 = (float)*(double *)((longlong)param_2 + 0x10);
  local_98 = &LAB_144a386e2;
  local_b8 = (float)*(double *)(param_1 + 0x10);
  local_b4 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_b0 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar10._0_4_ = fVar5 + fVar3;
  auVar10._4_4_ = fVar5 + fVar3;
  auVar10._8_4_ = fVar3 + fVar5;
  auVar10._12_4_ = fVar3 + fVar5;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar2;
  auVar12._12_4_ = auVar11._12_4_ * fVar4;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_d8 = local_58;
  if (dVar6 <= local_90) {
    dVar6 = local_90;
  }
  local_c8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_d0 = param_4;
  local_c0 = param_1;
  local_a8 = param_2;
  fStack_9c = local_a0;
  FUN_144946907(&local_c0,&local_a8,dVar6);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccb17f FUN_146ccb17f body=523 status=ok
// SIG undefined FUN_146ccb17f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ccb17f(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  undefined4 local_b4;
  code *local_b0;
  double local_a8;
  float local_a0;
  float fStack_9c;
  undefined1 *local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b0186e(param_2,&local_a8);
  local_80 = local_80 - (double)local_98;
  local_88 = local_88 - (double)CONCAT44(fStack_9c,local_a0);
  local_90 = local_90 - local_a8;
  if ((local_90 <= local_80 || local_90 <= local_88) && (local_90 = local_88, local_88 <= local_80))
  {
    local_90 = local_80;
  }
  dVar8 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar8) && (dVar6 = dVar1, dVar1 <= dVar8)) {
    dVar6 = dVar8;
  }
  local_a0 = (float)*(double *)((longlong)param_2 + 0x10);
  local_98 = &LAB_144a386e2;
  local_b8 = (float)*(double *)(param_1 + 0x10);
  local_b4 = 0;
  local_b0 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar10._0_4_ = fVar5 + fVar3;
  auVar10._4_4_ = fVar5 + fVar3;
  auVar10._8_4_ = fVar3 + fVar5;
  auVar10._12_4_ = fVar3 + fVar5;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar2;
  auVar12._12_4_ = auVar11._12_4_ * fVar4;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_d8 = local_58;
  if (dVar6 <= local_90) {
    dVar6 = local_90;
  }
  local_c8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_d0 = param_4;
  local_c0 = param_1;
  local_a8 = param_2;
  fStack_9c = local_a0;
  FUN_144946907(&local_c0,&local_a8,dVar6);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccb38b FUN_146ccb38b body=553 status=ok
// SIG undefined FUN_146ccb38b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ccb38b(longlong param_1,double param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  float local_b4;
  code *local_b0;
  double local_a8;
  float local_a0;
  float fStack_9c;
  undefined1 *local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b0186e(param_2,&local_a8);
  local_80 = local_80 - (double)local_98;
  local_88 = local_88 - (double)CONCAT44(fStack_9c,local_a0);
  local_90 = local_90 - local_a8;
  if ((local_90 <= local_80 || local_90 <= local_88) && (local_90 = local_88, local_88 <= local_80))
  {
    local_90 = local_80;
  }
  dVar8 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar8) && (dVar6 = dVar1, dVar1 <= dVar8)) {
    dVar6 = dVar8;
  }
  local_a0 = (float)*(double *)((longlong)param_2 + 0x10);
  local_98 = &LAB_144a386e2;
  local_b8 = (float)*(double *)(param_1 + 0x10);
  local_b4 = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_b0 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar7 = (float)*param_3;
  fVar9 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar10._0_4_ = fVar5 + fVar3;
  auVar10._4_4_ = fVar5 + fVar3;
  auVar10._8_4_ = fVar3 + fVar5;
  auVar10._12_4_ = fVar3 + fVar5;
  auVar11 = sqrtps(auVar10,auVar10);
  auVar11 = divps(_DAT_1499314a0,auVar11);
  auVar12._0_4_ = auVar11._0_4_ * fVar7;
  auVar12._4_4_ = auVar11._4_4_ * fVar9;
  auVar12._8_4_ = auVar11._8_4_ * fVar2;
  auVar12._12_4_ = auVar11._12_4_ * fVar4;
  auVar11._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
  auVar11._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
  auVar11._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
  auVar11._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar12,auVar11);
  local_d8 = local_58;
  if (dVar6 <= local_90) {
    dVar6 = local_90;
  }
  local_c8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_d0 = param_4;
  local_c0 = param_1;
  local_a8 = param_2;
  fStack_9c = local_a0;
  FUN_144946907(&local_c0,&local_a8,dVar6);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ccb5bc FUN_146ccb5bc body=145 status=ok
// SIG undefined FUN_146ccb5bc(void)

void FUN_146ccb5bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_144945691(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccb64e FUN_146ccb64e body=38 status=ok
// SIG undefined FUN_146ccb64e(void)

undefined8 FUN_146ccb64e(undefined8 param_1,int param_2)

{
  FUN_1402e5682();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ccb680 FUN_146ccb680 body=34 status=ok
// SIG undefined FUN_146ccb680(void)

longlong * FUN_146ccb680(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_146ccbef2();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ccb6a2 FUN_146ccb6a2 body=137 status=ok
// SIG undefined FUN_146ccb6a2(void)

longlong * FUN_146ccb6a2(undefined8 param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146ccbef2();
  local_28 = *(double *)(lVar1 + 0x30) * param_3[2];
  local_30 = *(double *)(lVar1 + 0x28) * param_3[1];
  local_38 = *(double *)(lVar1 + 0x20) * *param_3;
  FUN_1402e579a(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccb742 FUN_146ccb742 body=747 status=ok
// SIG undefined FUN_146ccb742(void)

undefined8
FUN_146ccb742(longlong param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8,undefined8 param_9)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  double local_e8;
  double *local_e0;
  double *local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = param_2[2] * *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x38);
  local_60 = param_2[1] * *(double *)(param_1 + 0x40);
  local_68 = *param_2 * dVar7;
  dVar4 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar5 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar8 = *param_3 * dVar7;
  dVar6 = SQRT(dVar4 * dVar4 + dVar8 * dVar8 + dVar5 * dVar5);
  if (2.2250738585072014e-308 < dVar6) {
    dVar1 = 1.0 / dVar6;
    local_70 = dVar4 * dVar1;
    local_78 = dVar5 * dVar1;
    local_80 = dVar8 * dVar1;
    local_e8 = dVar7 * param_5;
    local_c8 = param_9;
    local_d0 = &local_b0;
    local_d8 = &local_98;
    local_e0 = &local_b8;
    cVar2 = FUN_140663590(*(undefined8 *)(param_1 + 0x88),&local_68,&local_80,dVar6 * param_4);
    if (cVar2 != '\0') {
      dVar1 = dVar1 * local_b8;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        if (param_4 <= dVar1) goto LAB_146ccb9d1;
        dVar7 = *(double *)(param_1 + 0x30);
        dVar4 = *(double *)(param_1 + 0x28);
        *param_7 = *(double *)(param_1 + 0x20) * local_98;
        param_7[1] = dVar4 * local_90;
        param_7[2] = dVar7 * local_88;
        local_a0 = *(double *)(param_1 + 0x48) * local_a0;
        local_a8 = *(double *)(param_1 + 0x40) * local_a8;
        local_b0 = *(double *)(param_1 + 0x38) * local_b0;
        dVar7 = local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8;
        if (((dVar7 != 1.0) || (dVar5 = local_b0, dVar6 = local_a8, dVar4 = local_a0, NAN(dVar7)))
           && (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
              2.2250738585072014e-308 <= dVar7)) {
          dVar7 = 1.0 / SQRT(dVar7);
          dVar5 = local_b0 * dVar7;
          dVar6 = local_a8 * dVar7;
          dVar4 = local_a0 * dVar7;
        }
      }
      else {
        param_7[2] = param_2[2];
        dVar7 = param_2[1];
        *param_7 = *param_2;
        param_7[1] = dVar7;
        dVar5 = -*param_3;
        dVar6 = -param_3[1];
        dVar4 = -param_3[2];
      }
      *param_8 = dVar5;
      param_8[1] = dVar6;
      param_8[2] = dVar4;
      *param_6 = dVar1;
      uVar3 = 1;
      goto LAB_146ccb9d3;
    }
  }
LAB_146ccb9d1:
  uVar3 = 0;
LAB_146ccb9d3:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146ccba2e FUN_146ccba2e body=46 status=ok
// SIG undefined FUN_146ccba2e(void)

void FUN_146ccba2e(longlong param_1)

{
  FUN_146ca3b50(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 146ccbb62 FUN_146ccbb62 body=135 status=ok
// SIG undefined FUN_146ccbb62(void)

bool FUN_146ccbb62(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double extraout_XMM0_Qa;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(double *)(param_1 + 0x48) * param_2[2];
  dVar1 = *(double *)(param_1 + 0x38);
  local_30 = *(double *)(param_1 + 0x40) * param_2[1];
  local_38 = *param_2 * dVar1;
  FUN_146dae118(*(undefined8 *)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return extraout_XMM0_Qa <= param_3 * dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccbbea FUN_146ccbbea body=227 status=ok
// SIG undefined FUN_146ccbbea(void)

undefined8 FUN_146ccbbea(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_140002266(&local_60,L"Capsule: Height: %f Radius: %f",
                *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x50),
                *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10));
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = uVar3;
  uStack_70 = uVar4;
  local_68 = uVar1;
  FUN_140002266(param_2,L"Scaled %s, Scale: [%f, %f, %f], Margin: %f",puVar5,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ccbcce FUN_146ccbcce body=186 status=ok
// SIG undefined FUN_146ccbcce(void)

void FUN_146ccbcce(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_146ccbf6c(param_2,param_1 + 0x88);
  uVar2 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar2,param_1 + 0x38);
  FUN_140d03e72(param_2,param_1 + 0x58);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar1 < 0xc) {
    *(byte *)(param_1 + 0x1c) = *(byte *)(*(longlong *)(param_1 + 0x88) + 0x1c) | 0x80;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccbd8a FUN_146ccbd8a body=100 status=ok
// SIG undefined FUN_146ccbd8a(void)

void FUN_146ccbd8a(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  lVar1 = *(longlong *)(param_1 + 0x88);
  uVar3 = FUN_1448eb174(lVar1 + 0x38,0x18,0);
  uVar4 = FUN_1448eb174(lVar1 + 0x20,0x18,0);
  uVar3 = FUN_144a78877(uVar4,uVar3);
  FUN_144a78877(uVar3,uVar2);
  return;
}



// FUNCTION 146ccbdf2 FUN_146ccbdf2 body=240 status=ok
// SIG undefined FUN_146ccbdf2(void)

double * FUN_146ccbdf2(longlong param_1,double *param_2,double *param_3,double *param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = param_3[2] * *(double *)(param_1 + 0x48);
  local_28 = param_3[1] * *(double *)(param_1 + 0x40);
  local_30 = *param_3 * *(double *)(param_1 + 0x38);
  local_38 = *(double *)(param_1 + 0x48) * param_4[2];
  local_40 = *(double *)(param_1 + 0x40) * param_4[1];
  local_48 = *(double *)(param_1 + 0x38) * *param_4;
  local_58 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x88));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x28);
    *param_2 = *(double *)(param_1 + 0x20) * *param_2;
    param_2[1] = dVar2 * param_2[1];
    param_2[2] = dVar1 * param_2[2];
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccbef2 FUN_146ccbef2 body=120 status=ok
// SIG undefined FUN_146ccbef2(void)

undefined8 FUN_146ccbef2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_20 = *(longlong *)(param_1 + 0x88);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1402e9c68(uVar2,&local_20,param_1 + 0x20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccbf6c FUN_146ccbf6c body=147 status=ok
// SIG undefined FUN_146ccbf6c(void)

void FUN_146ccbf6c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_146ccc000();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_146ccc3f0(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
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



// FUNCTION 146ccc000 FUN_146ccc000 body=1006 status=ok
// SIG undefined FUN_146ccc000(void)

void FUN_146ccc000(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146ccc1f2;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146ccc1d9;
            iVar11 = *(int *)(lVar7 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      uVar10 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar10);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar10 = uVar4;
      }
      FUN_146ca4228(uVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146ccc1f2;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar9[1];
    uVar5 = iVar6 - iVar11;
    if (uVar5 != 0 && iVar11 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar11) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146ccc312;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar11) {
      uVar10 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar10 == 0) {
        uVar10 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar10);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar10 = uVar4;
        }
        FUN_146ca4228(uVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar10;
      }
      goto LAB_146ccc1f2;
    }
  }
LAB_146ccc312:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146ccc1f2:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146ccc1d9:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146ccc24e;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146ccc24e:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146ccc1f2;
}



// FUNCTION 146ccc3f0 FUN_146ccc3f0 body=310 status=ok
// SIG undefined FUN_146ccc3f0(void)

undefined8 * FUN_146ccc3f0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar4 = (undefined8 *)puVar1[1], puVar4 != (undefined8 *)0x0)) goto LAB_146ccc473;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = &PTR_FUN_149f4bf08;
  puVar4[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar4;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_146ccc473:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4 + 1;
}



// FUNCTION 146ccc528 FUN_146ccc528 body=74 status=ok
// SIG undefined FUN_146ccc528(void)

undefined8 * FUN_146ccc528(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f4bf08;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ccc572 FUN_146ccc572 body=373 status=ok
// SIG undefined FUN_146ccc572(void)

void FUN_146ccc572(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_146ccc603_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_146ccc603_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_146ccc5c9_caseD_82;
  case 3:
switchD_146ccc603_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_146ccc572(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_146ccc603_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_146ccc603_caseD_0;
    case 0x41:
      goto switchD_146ccc603_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_146ccc603_caseD_3;
    case 0x48:
      goto switchD_146ccc603_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_146ccc5c9_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146ccc8ca(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 146ccc7ae FUN_146ccc7ae body=283 status=ok
// SIG undefined FUN_146ccc7ae(void)

undefined4
FUN_146ccc7ae(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14089889a(local_d0,param_2,param_1 + 0x38,0);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1405438ec(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_140062896(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccc8ca FUN_146ccc8ca body=884 status=ok
// SIG undefined FUN_146ccc8ca(void)

void FUN_146ccc8ca(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cccc40 FUN_146cccc40 body=884 status=ok
// SIG undefined FUN_146cccc40(void)

void FUN_146cccc40(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cccfb6 FUN_146cccfb6 body=884 status=ok
// SIG undefined FUN_146cccfb6(void)

void FUN_146cccfb6(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ccd32c FUN_146ccd32c body=877 status=ok
// SIG undefined FUN_146ccd32c(void)

void FUN_146ccd32c(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14172543a;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


