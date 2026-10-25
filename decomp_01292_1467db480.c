// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467db480 FUN_1467db480 body=87 status=ok
// SIG undefined FUN_1467db480(void)

void FUN_1467db480(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1457399de(param_1,param_2,param_3);
  return;
}



// FUNCTION 1467db4d8 FUN_1467db4d8 body=410 status=ok
// SIG undefined FUN_1467db4d8(void)

void FUN_1467db4d8(longlong *param_1,uint param_2)

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
      FUN_14059f004(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1406a7630(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x68 + lVar2 + -100);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x1a;
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



// FUNCTION 1467db672 FUN_1467db672 body=460 status=ok
// SIG undefined FUN_1467db672(void)

void FUN_1467db672(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
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
      iVar10 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar10 * 0x68;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(lVar3 + 8 + lVar11) != 0) {
          puVar7 = *(undefined2 **)(lVar3 + lVar11);
        }
        iVar5 = FUN_144a1ccda(puVar7,0);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar3 + 100 + lVar11) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar10 = local_70._4_4_;
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



// FUNCTION 1467db840 FUN_1467db840 body=382 status=ok
// SIG undefined FUN_1467db840(void)

undefined4 * FUN_1467db840(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145739e32(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_40 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0;
  *(undefined4 *)(local_40 + 7) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined8 *)((longlong)local_40 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_40 + 0x44) = 0;
  local_40[10] = 0;
  *(undefined4 *)(local_40 + 0xb) = 0;
  FUN_140bb2e20(local_40 + 2,uVar2);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
  }
  uVar5 = FUN_144a1ccda(puVar7,0);
  cVar4 = FUN_1467db9c0(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 100) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1467db672(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467db9c0 FUN_1467db9c0 body=111 status=ok
// SIG undefined FUN_1467db9c0(void)

undefined8 FUN_1467db9c0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1467dba30(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_1457586f6(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_1467dbaca(param_1,*param_4,1);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1467dba30 FUN_1467dba30 body=153 status=ok
// SIG undefined FUN_1467dba30(void)

int FUN_1467dba30(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str2;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar2 = *(int *)(param_3 + 1);
      _Str2 = (wchar_t *)*param_3;
      do {
        lVar6 = (longlong)iVar1 * 0x68;
        iVar4 = *(int *)(lVar3 + 8 + lVar6);
        if (iVar4 == iVar2) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar4 = wcscmp(*(wchar_t **)(lVar3 + lVar6),_Str2);
          if (iVar4 == 0) {
            return iVar1;
          }
        }
        else if (iVar4 + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0x60 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1467dbaca FUN_1467dbaca body=138 status=ok
// SIG undefined FUN_1467dbaca(void)

void FUN_1467dbaca(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x68 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
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
      puVar7 = puVar7 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467dbb54 FUN_1467dbb54 body=131 status=ok
// SIG undefined FUN_1467dbb54(void)

longlong FUN_1467dbb54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1467dbbd7();
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
      FUN_1467db672(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1467dbbd7 FUN_1467dbbd7 body=676 status=ok
// SIG undefined FUN_1467dbbd7(void)

longlong * FUN_1467dbbd7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
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
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x68);
        FUN_1467dbe7c(param_1,lVar5 + (longlong)iVar8 * 0x68 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1409261fa(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_145739e32(param_2,&local_a0);
        puVar3 = local_98 + 2;
        local_98[6] = 0;
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined4 *)((longlong)local_98 + 0x3c) = 0x80;
        *(undefined4 *)(local_98 + 8) = 0xffffffff;
        *(undefined4 *)(local_98 + 0xc) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_1467dbe7c(param_1,puVar3);
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



// FUNCTION 1467dbe7c FUN_1467dbe7c body=129 status=ok
// SIG undefined FUN_1467dbe7c(void)

longlong FUN_1467dbe7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1467dbefd();
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
      FUN_1406e2aa2(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1467dbefd FUN_1467dbefd body=652 status=ok
// SIG undefined FUN_1467dbefd(void)

longlong * FUN_1467dbefd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_140bb2a52(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1406e28c6(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_14021219d(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467dc18a FUN_1467dc18a body=311 status=ok
// SIG undefined FUN_1467dc18a(void)

undefined4 * FUN_1467dc18a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467dabda(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  *local_38 = *(undefined4 *)*param_3;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = FUN_144afd4c3(local_38);
  cVar3 = FUN_1467dacc0(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_38[7] = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(undefined4 *)
                     (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467dadee(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dc2c2 FUN_1467dc2c2 body=319 status=ok
// SIG undefined FUN_1467dc2c2(void)

void FUN_1467dc2c2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dc402 FUN_1467dc402 body=418 status=ok
// SIG undefined FUN_1467dc402(void)

void FUN_1467dc402(longlong *param_1,uint param_2)

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
      FUN_1448fc38a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14488f93c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x60 + lVar2 + -0x5c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar8 + -1;
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
        puVar5 = puVar5 + -0x18;
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



// FUNCTION 1467dc5a4 FUN_1467dc5a4 body=299 status=ok
// SIG undefined FUN_1467dc5a4(void)

undefined4 * FUN_1467dc5a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467dafac(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined4 *)*param_3;
  FUN_140d69258(local_40 + 2,uVar1);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144afd4c3(local_40);
  cVar3 = FUN_1467db09a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x17] = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467db1c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dc6d0 FUN_1467dc6d0 body=203 status=ok
// SIG undefined FUN_1467dc6d0(void)

longlong FUN_1467dc6d0(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c844698 != DAT_14c8446c4) {
    puVar3 = &DAT_14c8446c8;
    if (DAT_14c8446d0 != (undefined *)0x0) {
      puVar3 = DAT_14c8446d0;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c8446d8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c844690 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(DAT_14c844690 + (longlong)iVar1 * 0x60) == *param_2) {
          if (lVar2 != 0) goto LAB_1467dc77f;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_1467dc79c(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x60 + DAT_14c844690;
LAB_1467dc77f:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1467dc79c FUN_1467dc79c body=239 status=ok
// SIG undefined FUN_1467dc79c(void)

undefined4 * FUN_1467dc79c(undefined4 *param_1,uint param_2,undefined8 param_3)

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
  FUN_1467dc88c(local_48);
  FUN_1467dca62(param_3,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar2 = FUN_1467dc9a2(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c844698 - DAT_14c8446c4;
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
    if (((int)uVar3 < 1) || (iVar5 <= DAT_14c8446d8)) {
      param_2 = DAT_14c8446d8 - 1U & param_2;
      *(uint *)(local_40 + 0x5c) = param_2;
      puVar6 = &DAT_14c8446c8;
      if (DAT_14c8446d0 != (undefined *)0x0) {
        puVar6 = DAT_14c8446d0;
      }
      *(undefined4 *)(local_40 + 0x58) = *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4);
      *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4) = local_48[0];
    }
    else {
      DAT_14c8446d8 = iVar5;
      FUN_1467dcc8e();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dc88c FUN_1467dc88c body=278 status=ok
// SIG undefined FUN_1467dc88c(void)

int * FUN_1467dc88c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c8446c0;
  iVar4 = DAT_14c844698;
  if (DAT_14c8446c4 == 0) {
    iVar2 = DAT_14c844698 + 1;
    bVar7 = DAT_14c84469c == DAT_14c844698;
    DAT_14c844698 = iVar2;
    if (bVar7) {
      FUN_14488f93c(&DAT_14c844690,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c8446a0,1);
    puVar3 = DAT_14c8446b0;
    if (DAT_14c8446b0 == (undefined *)0x0) {
      puVar3 = &DAT_14c8446a0;
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
    lVar6 = (longlong)DAT_14c8446c0;
    DAT_14c8446c0 = *(int *)(DAT_14c844690 + 4 + lVar6 * 0x60);
    DAT_14c8446c4 = DAT_14c8446c4 + -1;
    iVar4 = iVar2;
    if (DAT_14c8446c4 != 0) {
      *(undefined4 *)(DAT_14c844690 + (longlong)DAT_14c8446c0 * 0x60) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c8446a0;
  if (DAT_14c8446b0 != (undefined *)0x0) {
    puVar3 = DAT_14c8446b0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x60 + DAT_14c844690;
  return param_1;
}



// FUNCTION 1467dc9a2 FUN_1467dc9a2 body=191 status=ok
// SIG undefined FUN_1467dc9a2(void)

undefined8 FUN_1467dc9a2(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14c844698 - DAT_14c8446c4 != 1) && (DAT_14c844698 != DAT_14c8446c4)) {
    puVar1 = &DAT_14c8446c8;
    if (DAT_14c8446d0 != (undefined *)0x0) {
      puVar1 = DAT_14c8446d0;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14c8446d8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14c844690 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(DAT_14c844690 + (longlong)iVar2 * 0x60) == *param_2) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1467d6392((longlong)_Dst + 8);
          memmove(_Dst,param_2,0x58);
          FUN_1467dcc06(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467dca62 FUN_1467dca62 body=149 status=ok
// SIG undefined FUN_1467dca62(void)

undefined8 * FUN_1467dca62(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1467dcaf8(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1467d6392(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dcaf8 FUN_1467dcaf8 body=123 status=ok
// SIG undefined FUN_1467dcaf8(void)

undefined8 * FUN_1467dcaf8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1467dcb74();
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



// FUNCTION 1467dcb74 FUN_1467dcb74 body=146 status=ok
// SIG undefined FUN_1467dcb74(void)

longlong * FUN_1467dcb74(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1467dcc06 FUN_1467dcc06 body=136 status=ok
// SIG undefined FUN_1467dcc06(void)

void FUN_1467dcc06(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c844690;
  if (DAT_14c8446c4 != 0) {
    *(int *)(DAT_14c844690 + (longlong)DAT_14c8446c0 * 0x60) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x60) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c8446c4) {
    iVar4 = DAT_14c8446c0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x60) = iVar4;
  DAT_14c8446c4 = DAT_14c8446c4 + 1;
  puVar3 = &DAT_14c8446a0;
  if (DAT_14c8446b0 != (undefined *)0x0) {
    puVar3 = DAT_14c8446b0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c8446c0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1467dcc8e FUN_1467dcc8e body=518 status=ok
// SIG undefined FUN_1467dcc8e(void)

void FUN_1467dcc8e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14c8446d0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c8446d0,0,0,4);
  }
  uVar3 = DAT_14c8446d8;
  uVar2 = local_50;
  if (DAT_14c8446d8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c8446c8,0,DAT_14c8446d8,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c8446d0;
        if (DAT_14c8446d0 == (undefined *)0x0) {
          puVar5 = &DAT_14c8446c8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c8446d8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c8446a0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c8446b8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c844690;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x60;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c8446d8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x5c + lVar6) = iVar8;
        puVar5 = DAT_14c8446d0;
        if (DAT_14c8446d0 == (undefined *)0x0) {
          puVar5 = &DAT_14c8446c8;
        }
        *(undefined4 *)(lVar1 + 0x58 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c8446d8 - 1U & uVar9) * 4);
        puVar5 = DAT_14c8446d0;
        if (DAT_14c8446d0 == (undefined *)0x0) {
          puVar5 = &DAT_14c8446c8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c8446d8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
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



// FUNCTION 1467dce96 FUN_1467dce96 body=295 status=ok
// SIG undefined FUN_1467dce96(void)

undefined4 * FUN_1467dce96(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467dcfbe(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined4 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144afd4c3(local_40);
  cVar3 = FUN_1467dd0a4(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467dd192(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dcfbe FUN_1467dcfbe body=229 status=ok
// SIG undefined FUN_1467dcfbe(void)

int * FUN_1467dcfbe(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1467dd0a4 FUN_1467dd0a4 body=124 status=ok
// SIG undefined FUN_1467dd0a4(void)

undefined8 FUN_1467dd0a4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1467dd120(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467dd120 FUN_1467dd120 body=114 status=ok
// SIG undefined FUN_1467dd120(void)

void FUN_1467dd120(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1467dd192 FUN_1467dd192 body=444 status=ok
// SIG undefined FUN_1467dd192(void)

void FUN_1467dd192(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_144afd4c3(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
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



// FUNCTION 1467dd350 FUN_1467dd350 body=352 status=ok
// SIG undefined FUN_1467dd350(void)

undefined4 * FUN_1467dd350(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467dd4b2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1467dd598(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467dd6ca(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467dd4b2 FUN_1467dd4b2 body=229 status=ok
// SIG undefined FUN_1467dd4b2(void)

int * FUN_1467dd4b2(longlong *param_1,int *param_2)

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



// FUNCTION 1467dd598 FUN_1467dd598 body=191 status=ok
// SIG undefined FUN_1467dd598(void)

undefined8 FUN_1467dd598(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1467dd658(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467dd658 FUN_1467dd658 body=114 status=ok
// SIG undefined FUN_1467dd658(void)

void FUN_1467dd658(longlong *param_1,int param_2)

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



// FUNCTION 1467dd6ca FUN_1467dd6ca body=476 status=ok
// SIG undefined FUN_1467dd6ca(void)

void FUN_1467dd6ca(longlong *param_1)

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



// FUNCTION 1467dd8a8 FUN_1467dd8a8 body=132 status=ok
// SIG undefined FUN_1467dd8a8(void)

void FUN_1467dd8a8(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_1467dd92c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1467dd92c FUN_1467dd92c body=90 status=ok
// SIG undefined FUN_1467dd92c(void)

void FUN_1467dd92c(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1467dd986();
  return;
}



// FUNCTION 1467dd986 FUN_1467dd986 body=78 status=ok
// SIG undefined FUN_1467dd986(void)

void FUN_1467dd986(longlong *param_1,int param_2)

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
  FUN_1467dd658(param_1,param_2);
  return;
}



// FUNCTION 1467dd9d4 FUN_1467dd9d4 body=188 status=ok
// SIG undefined FUN_1467dd9d4(void)

longlong FUN_1467dd9d4(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1467dda73;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1467dda92(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1467dda73:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1467dda92 FUN_1467dda92 body=272 status=ok
// SIG undefined FUN_1467dda92(void)

undefined4 * FUN_1467dda92(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1467ddba4(param_1,local_48);
  FUN_1467ddd4a(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1467ddc92(param_1,param_3,local_40,local_48);
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
      FUN_1467ddf70(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ddba4 FUN_1467ddba4 body=238 status=ok
// SIG undefined FUN_1467ddba4(void)

int * FUN_1467ddba4(longlong *param_1,int *param_2)

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



// FUNCTION 1467ddc92 FUN_1467ddc92 body=184 status=ok
// SIG undefined FUN_1467ddc92(void)

undefined8 FUN_1467ddc92(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1467d6516((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1467ddef6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467ddd4a FUN_1467ddd4a body=156 status=ok
// SIG undefined FUN_1467ddd4a(void)

undefined8 * FUN_1467ddd4a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1467ddde8(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1467d6516(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ddde8 FUN_1467ddde8 body=123 status=ok
// SIG undefined FUN_1467ddde8(void)

undefined8 * FUN_1467ddde8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1467dde64();
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



// FUNCTION 1467dde64 FUN_1467dde64 body=146 status=ok
// SIG undefined FUN_1467dde64(void)

longlong * FUN_1467dde64(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1467ddef6 FUN_1467ddef6 body=122 status=ok
// SIG undefined FUN_1467ddef6(void)

void FUN_1467ddef6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
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
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1467ddf70 FUN_1467ddf70 body=477 status=ok
// SIG undefined FUN_1467ddf70(void)

void FUN_1467ddf70(longlong *param_1)

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



// FUNCTION 1467de14e FUN_1467de14e body=284 status=ok
// SIG undefined FUN_1467de14e(void)

undefined4 * FUN_1467de14e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467de26c(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144afd4c3(local_40);
  cVar2 = FUN_1467de352(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[2] = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1467de43a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467de26c FUN_1467de26c body=230 status=ok
// SIG undefined FUN_1467de26c(void)

int * FUN_1467de26c(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1467de352 FUN_1467de352 body=118 status=ok
// SIG undefined FUN_1467de352(void)

undefined8 FUN_1467de352(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_1467de3c8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467de3c8 FUN_1467de3c8 body=114 status=ok
// SIG undefined FUN_1467de3c8(void)

void FUN_1467de3c8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 1467de43a FUN_1467de43a body=438 status=ok
// SIG undefined FUN_1467de43a(void)

void FUN_1467de43a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0xc;
        iVar6 = FUN_144afd4c3(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 8) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467de5f2 FUN_1467de5f2 body=97 status=ok
// SIG undefined FUN_1467de5f2(void)

undefined8 * FUN_1467de5f2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_149e19310;
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      if (*(longlong *)(piVar1 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar1);
    }
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467de67a FUN_1467de67a body=435 status=ok
// SIG undefined FUN_1467de67a(void)

longlong FUN_1467de67a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint uVar4;
  ulonglong uVar5;
  wchar_t *_Str2;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar7 = 0;
  if (0 < (int)uVar6) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar7 = 0;
    uVar5 = (ulonglong)uVar6;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = (ulonglong)uVar6;
    local_60 = param_3;
    do {
      uVar6 = (int)(uVar5 >> 1) + uVar7;
      lVar2 = (ulonglong)uVar6 * 0x30;
      pwVar3 = L"";
      if (*(int *)(lVar8 + 8 + lVar2) != 0) {
        pwVar3 = *(wchar_t **)(lVar8 + lVar2);
      }
      iVar1 = wcscmp(pwVar3,_Str2);
      param_3 = local_60;
      param_2 = local_70;
      param_1 = local_78;
      uVar4 = (uint)uVar5;
      if (iVar1 < 0) {
        uVar7 = uVar6 + (uVar4 & 1);
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar4);
    uVar6 = (uint)local_68;
    if ((int)uVar7 < (int)uVar6) {
      lVar2 = (ulonglong)uVar7 * 0x30;
      if (*(int *)(lVar8 + 8 + lVar2) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)(lVar8 + lVar2);
      }
      iVar1 = wcscmp(_Str2,pwVar3);
      if (-1 < iVar1) {
        lVar8 = lVar8 + lVar2;
        FUN_14010f8af(lVar8,1);
        goto LAB_1467de7be;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar6 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar6) {
    FUN_140234572(param_1,uVar6);
    lVar8 = *param_1;
  }
  lVar2 = (ulonglong)uVar7 * 0x30;
  memmove((void *)(lVar8 + lVar2 + 0x30),(void *)(lVar8 + lVar2),(ulonglong)(uVar6 - uVar7) * 0x30);
  lVar8 = lVar2 + *param_1;
LAB_1467de7be:
  local_58 = param_2;
  local_50 = param_3;
  FUN_1467de82e(&local_58,lVar8);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8 + 0x10;
}



// FUNCTION 1467de82e FUN_1467de82e body=90 status=ok
// SIG undefined FUN_1467de82e(void)

undefined8 * FUN_1467de82e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *puVar1;
  uVar7 = 0;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(param_2 + 2) = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  *(undefined4 *)(param_2 + 3) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
  plVar3 = *(longlong **)(puVar2 + 4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    uVar7 = puVar2[6];
  }
  param_2[4] = plVar3;
  *(undefined4 *)(param_2 + 5) = uVar7;
  return param_2;
}



// FUNCTION 1467de896 FUN_1467de896 body=133 status=ok
// SIG undefined FUN_1467de896(void)

undefined8 * FUN_1467de896(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19550;
  FUN_14007f2db(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467de928 FUN_1467de928 body=38 status=ok
// SIG undefined FUN_1467de928(void)

undefined8 FUN_1467de928(undefined8 param_1,int param_2)

{
  FUN_1467de95a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467de95a FUN_1467de95a body=121 status=ok
// SIG undefined FUN_1467de95a(void)

void FUN_1467de95a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19610;
  FUN_1467de9d3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467de9d3 FUN_1467de9d3 body=58 status=ok
// SIG undefined FUN_1467de9d3(void)

void FUN_1467de9d3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 1467dea0e FUN_1467dea0e body=103 status=ok
// SIG undefined FUN_1467dea0e(void)

undefined8 * FUN_1467dea0e(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_149e196d0;
  *(undefined4 *)(param_1 + 4) = 4;
  FUN_140e82300();
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = DAT_14c844848;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1467dea76 FUN_1467dea76 body=153 status=ok
// SIG undefined FUN_1467dea76(void)

undefined8 * FUN_1467dea76(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e196d0;
  plVar3 = (longlong *)param_1[0xd];
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
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467deb1e FUN_1467deb1e body=38 status=ok
// SIG undefined FUN_1467deb1e(void)

undefined8 FUN_1467deb1e(undefined8 param_1,int param_2)

{
  FUN_1467deb50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467deb50 FUN_1467deb50 body=140 status=ok
// SIG undefined FUN_1467deb50(void)

void FUN_1467deb50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e196d0;
  plVar3 = (longlong *)param_1[0xd];
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
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467debdc FUN_1467debdc body=65 status=ok
// SIG undefined FUN_1467debdc(void)

undefined8 * FUN_1467debdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e19910;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1467deb50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467dec2a FUN_1467dec2a body=38 status=ok
// SIG undefined FUN_1467dec2a(void)

undefined8 FUN_1467dec2a(undefined8 param_1,int param_2)

{
  FUN_1467dec5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467dec5c FUN_1467dec5c body=109 status=ok
// SIG undefined FUN_1467dec5c(void)

void FUN_1467dec5c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e199d0;
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467decca FUN_1467decca body=38 status=ok
// SIG undefined FUN_1467decca(void)

undefined8 FUN_1467decca(undefined8 param_1,int param_2)

{
  FUN_1467decfc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467decfc FUN_1467decfc body=109 status=ok
// SIG undefined FUN_1467decfc(void)

void FUN_1467decfc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19a90;
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467ded6a FUN_1467ded6a body=38 status=ok
// SIG undefined FUN_1467ded6a(void)

undefined8 FUN_1467ded6a(undefined8 param_1,int param_2)

{
  FUN_1467ded9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ded9c FUN_1467ded9c body=123 status=ok
// SIG undefined FUN_1467ded9c(void)

void FUN_1467ded9c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19b50;
  plVar3 = (longlong *)param_1[0xb];
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
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467dee18 FUN_1467dee18 body=76 status=ok
// SIG undefined FUN_1467dee18(void)

undefined8 * FUN_1467dee18(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_149e19c10;
  FUN_140e82300();
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1467dee64 FUN_1467dee64 body=82 status=ok
// SIG undefined FUN_1467dee64(void)

undefined8 * FUN_1467dee64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e19c10;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467deec2 FUN_1467deec2 body=83 status=ok
// SIG undefined FUN_1467deec2(void)

undefined8 * FUN_1467deec2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19cd0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467def22 FUN_1467def22 body=38 status=ok
// SIG undefined FUN_1467def22(void)

undefined8 FUN_1467def22(undefined8 param_1,int param_2)

{
  FUN_1467def4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467def4c FUN_1467def4c body=95 status=ok
// SIG undefined FUN_1467def4c(void)

void FUN_1467def4c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e19d90;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_149e193d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467defac FUN_1467defac body=154 status=ok
// SIG undefined FUN_1467defac(void)

undefined8 FUN_1467defac(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = FUN_144afd4c3(param_2 + 1);
    uVar3 = FUN_144afd4c3(param_2);
    iVar4 = FUN_144a78877(uVar3,uVar2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x20;
        if ((*(int *)(lVar1 + lVar6) == *param_2) && (*(int *)(lVar1 + 4 + lVar6) == param_2[1])) {
          FUN_1467df046(param_1);
          return 1;
        }
        iVar4 = *(int *)(lVar6 + lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467df046 FUN_1467df046 body=127 status=ok
// SIG undefined FUN_1467df046(void)

void FUN_1467df046(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x18);
  plVar5 = *(longlong **)(*param_1 + 8 + lVar2);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_146027a9a(param_1,param_2);
  return;
}



// FUNCTION 1467df0c6 FUN_1467df0c6 body=132 status=ok
// SIG undefined FUN_1467df0c6(void)

void FUN_1467df0c6(longlong param_1,int param_2)

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



// FUNCTION 1467df14c FUN_1467df14c body=103 status=ok
// SIG undefined FUN_1467df14c(void)

undefined8 FUN_1467df14c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x30)) {
    uVar4 = uVar2 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar3;
}



// FUNCTION 1467df1b4 FUN_1467df1b4 body=384 status=ok
// SIG undefined FUN_1467df1b4(void)

void FUN_1467df1b4(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  wchar_t *_Str2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    uVar8 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar8;
      lVar6 = (ulonglong)uVar1 * 0x30;
      iVar4 = *(int *)(lVar10 + 8 + lVar6);
      if ((iVar4 < iVar5) ||
         ((iVar4 <= iVar5 &&
          (iVar4 = wcsncmp(*(wchar_t **)(lVar6 + lVar10),_Str2,(longlong)iVar4), iVar4 < 0)))) {
        uVar8 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if ((int)uVar8 < (int)uVar2) {
      iVar4 = *(int *)(lVar10 + 8 + (ulonglong)uVar8 * 0x30);
      if ((iVar4 <= iVar5) &&
         ((puVar7 = (undefined8 *)((ulonglong)uVar8 * 0x30 + lVar10), iVar4 < iVar5 ||
          (iVar5 = wcsncmp(_Str2,(wchar_t *)*puVar7,(longlong)iVar5), -1 < iVar5)))) {
        FUN_1467d65a3(puVar7,1);
        goto LAB_1467df2aa;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1467df334(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar6 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar10 + lVar6 + 0x30),(void *)(lVar10 + lVar6),(ulonglong)(uVar2 - uVar8) * 0x30
         );
  puVar7 = (undefined8 *)(lVar6 + *param_1);
LAB_1467df2aa:
  FUN_141339746(puVar7,param_2);
  puVar7[4] = *param_3;
  lVar10 = param_3[1];
  puVar7[5] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1467df334 FUN_1467df334 body=147 status=ok
// SIG undefined FUN_1467df334(void)

void FUN_1467df334(longlong param_1,int param_2)

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



// FUNCTION 1467df3e0 FUN_1467df3e0 body=29 status=ok
// SIG undefined FUN_1467df3e0(void)

undefined8 FUN_1467df3e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467df3fe FUN_1467df3fe body=80 status=ok
// SIG undefined FUN_1467df3fe(void)

void FUN_1467df3fe(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144a3809e((longlong)param_2,1);
  iVar2 = 0x7fffffff;
  if (param_2 <= iVar1) {
    iVar2 = iVar1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1467df44e FUN_1467df44e body=47 status=ok
// SIG undefined FUN_1467df44e(void)

void FUN_1467df44e(longlong param_1,int param_2)

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



// FUNCTION 1467df496 FUN_1467df496 body=29 status=ok
// SIG undefined FUN_1467df496(void)

undefined8 FUN_1467df496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467df4cc FUN_1467df4cc body=29 status=ok
// SIG undefined FUN_1467df4cc(void)

undefined8 FUN_1467df4cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467df516 FUN_1467df516 body=86 status=ok
// SIG undefined FUN_1467df516(void)

void FUN_1467df516(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  local_18._0_4_ = (undefined4)uVar1;
  local_18._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar2;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x1c) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x24) = uStack_10._4_4_;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
  local_18 = uVar1;
  uStack_10 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467df56e FUN_1467df56e body=110 status=ok
// SIG undefined FUN_1467df56e(void)

undefined8 FUN_1467df56e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_18 = *(longlong *)(param_1 + 0x20);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_14626a308(param_2,&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467df5de FUN_1467df5de body=29 status=ok
// SIG undefined FUN_1467df5de(void)

undefined8 FUN_1467df5de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467df667 FUN_1467df667 body=159 status=ok
// SIG undefined FUN_1467df667(void)

undefined8 * FUN_1467df667(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149e191c0;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1411697f8(puVar1 + 2,param_1,*param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467df708 FUN_1467df708 body=9 status=ok
// SIG undefined FUN_1467df708(void)

void FUN_1467df708(longlong param_1)

{
  FUN_1467df730(param_1 + 0x10);
  return;
}



// FUNCTION 1467df712 FUN_1467df712 body=29 status=ok
// SIG undefined FUN_1467df712(void)

undefined8 FUN_1467df712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467df730 FUN_1467df730 body=68 status=ok
// SIG undefined FUN_1467df730(void)

void FUN_1467df730(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_141359509(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467df769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1467df774 FUN_1467df774 body=85 status=ok
// SIG undefined FUN_1467df774(void)

longlong * FUN_1467df774(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    plVar1 = (longlong *)*param_1;
    if (*param_2 == 0) {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      FUN_14023423e(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 1467df7ca FUN_1467df7ca body=148 status=ok
// SIG undefined FUN_1467df7ca(void)

void FUN_1467df7ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e186a0;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001467df852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467df85e FUN_1467df85e body=101 status=ok
// SIG undefined FUN_1467df85e(void)

undefined * FUN_1467df85e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844cf8) {
    FUN_144b3d300(&DAT_14c844cf8);
    if (DAT_14c844cf8 == -1) {
      FUN_1467df8c4();
      atexit((_func_5014 *)&LAB_1427629f8);
      _Init_thread_footer(&DAT_14c844cf8);
    }
  }
  return &DAT_14c844c80;
}



// FUNCTION 1467df8c4 FUN_1467df8c4 body=100 status=ok
// SIG undefined FUN_1467df8c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467df8c4(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c844c80);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c844c80,4000);
  DAT_14c844cc8 = 0;
  DAT_14c844cd0 = 0;
  DAT_14c844ca8 = 0;
  _DAT_14c844cb0 = 0;
  _DAT_14c844cd4 = 0xffffffff00000080;
  _DAT_14c844cdc = 0;
  DAT_14c844ce8 = 0;
  _DAT_14c844cf0 = 0;
  return;
}



// FUNCTION 1467df928 FUN_1467df928 body=54 status=ok
// SIG undefined FUN_1467df928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467df928(void)

{
  _DAT_14c844cf0 = 0;
  if (DAT_14c844ce8 != 0) {
    FUN_1400020a8();
  }
  FUN_1467ee33a();
                    /* WARNING: Could not recover jumptable at 0x0001467df957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c844c80);
  return;
}



// FUNCTION 1467df95e FUN_1467df95e body=215 status=ok
// SIG undefined FUN_1467df95e(void)

undefined8 * FUN_1467df95e(LPCRITICAL_SECTION param_1,undefined8 *param_2,longlong param_3)

{
  WORD *pWVar1;
  uint uVar2;
  HANDLE *ppvVar3;
  uint uVar4;
  int iVar5;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    ppvVar3 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar3 = param_1[2].LockSemaphore;
    }
    iVar5 = *(int *)((longlong)ppvVar3 +
                    (ulonglong)
                    ((int)param_1[2].SpinCount - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        pWVar1 = &(param_1[1].DebugInfo)->Type + (longlong)iVar5 * 0x10;
        if (*(longlong *)(&(param_1[1].DebugInfo)->Type + (longlong)iVar5 * 0x10) == param_3) {
          if (pWVar1 != (WORD *)0xfffffffffffffff8 && pWVar1 != (WORD *)0x0) {
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = 0;
            FUN_1467ef81c(param_2);
            goto LAB_1467df982;
          }
          break;
        }
        iVar5 = *(int *)(pWVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1467df982:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_2;
}



// FUNCTION 1467dfa35 FUN_1467dfa35 body=22 status=ok
// SIG undefined FUN_1467dfa35(void)

bool FUN_1467dfa35(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_144a54874(param_1,param_2,(longlong)param_3);
  return iVar1 == 0;
}



// FUNCTION 1467dfa4b FUN_1467dfa4b body=23 status=ok
// SIG undefined FUN_1467dfa4b(void)

void FUN_1467dfa4b(short *param_1)

{
  for (; (*param_1 == 0x20 || (*param_1 == 9)); param_1 = param_1 + 1) {
  }
  return;
}



// FUNCTION 1467dfa62 FUN_1467dfa62 body=41 status=ok
// SIG undefined FUN_1467dfa62(void)

short * FUN_1467dfa62(short *param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  while( true ) {
    sVar1 = *param_1;
    if ((sVar1 != 0x20) && (sVar1 != 9)) break;
    param_1 = param_1 + 1;
  }
  psVar3 = (short *)0x0;
  if (sVar1 == param_2) {
    psVar3 = param_1;
  }
  psVar2 = psVar3 + 1;
  if (psVar3 == (short *)0x0) {
    psVar2 = (short *)0x0;
  }
  return psVar2;
}



// FUNCTION 1467dfa8b FUN_1467dfa8b body=795 status=ok
// SIG undefined FUN_1467dfa8b(void)

wchar_t * FUN_1467dfa8b(wchar_t *param_1,undefined4 *param_2)

{
  wchar_t _Ch;
  uint uVar1;
  char cVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 local_6c;
  float fStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  _Ch = *param_1;
  if (_Ch == L'\0') {
    uStack_80._0_4_ = 0;
  }
  else {
    pwVar4 = param_1;
    do {
      pwVar3 = wcschr(L"+-0123456789.ful",_Ch);
      param_1 = pwVar4;
      if (pwVar3 == (wchar_t *)0x0) break;
      param_1 = pwVar4 + 1;
      FUN_140002184(&local_88,*pwVar4);
      _Ch = pwVar4[1];
      pwVar4 = param_1;
    } while (_Ch != L'\0');
  }
  uVar5 = (ulonglong)((int)uStack_80 - 1);
  if ((int)uStack_80 == 0) {
    uVar5 = 0;
  }
  local_98 = (wchar_t *)0x0;
  uStack_90 = 0;
  if (0 < (int)uVar5) {
    do {
      pwVar4 = wcschr(L"ful",local_88[uVar5 - 1]);
      if (pwVar4 == (wchar_t *)0x0) break;
      uVar1 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar1 = 0;
      }
      FUN_140002184(&local_98,local_88[(longlong)(int)uVar1 + -1]);
      iVar7 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar7 = 0;
      }
      FUN_145825fe6(&local_88,iVar7 + -1,0);
      uVar1 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar1 = 0;
      }
      uVar5 = (ulonglong)uVar1;
    } while (0 < (int)uVar1);
  }
  cVar2 = FUN_1405b43cc(&local_88);
  if (cVar2 == '\0') {
    param_1 = (wchar_t *)0x0;
    goto LAB_1467dfb98;
  }
  pwVar4 = local_98;
  if ((int)uStack_90 == 0) {
    pwVar4 = L"";
  }
  pwVar4 = wcschr(pwVar4,L'f');
  if (pwVar4 == (wchar_t *)0x0) {
    pwVar4 = L"";
    if ((int)uStack_90 != 0) {
      pwVar4 = local_98;
    }
    pwVar3 = wcschr(pwVar4,L'u');
    pwVar4 = L"";
    if ((int)uStack_80 != 0) {
      pwVar4 = local_88;
    }
    if (pwVar3 != (wchar_t *)0x0) {
      uVar5 = _wcstoui64(pwVar4,(wchar_t **)0x0,0);
      local_70 = 1;
      fStack_68 = (float)uVar5;
      uStack_64 = (undefined4)(uVar5 >> 0x20);
      *param_2 = 1;
      param_2[1] = local_6c;
      *(ulonglong *)(param_2 + 2) = uVar5;
      goto LAB_1467dfce8;
    }
    pwVar3 = wcschr(pwVar4,L'.');
    pwVar4 = local_88;
    if ((int)uStack_80 == 0) {
      pwVar4 = L"";
    }
    if (pwVar3 == (wchar_t *)0x0) {
      lVar6 = _wtoi64(pwVar4);
      local_70 = 0;
      fStack_68 = (float)lVar6;
      uStack_64 = (undefined4)((ulonglong)lVar6 >> 0x20);
      *param_2 = 0;
      param_2[1] = local_6c;
      *(longlong *)(param_2 + 2) = lVar6;
    }
    else {
      dVar8 = wcstod(pwVar4,(wchar_t **)0x0);
      local_70 = 3;
      fStack_68 = SUB84(dVar8,0);
      uStack_64 = (undefined4)((ulonglong)dVar8 >> 0x20);
      *param_2 = 3;
      *(ulonglong *)(param_2 + 1) = CONCAT44(fStack_68,local_6c);
      param_2[3] = uStack_64;
    }
    local_58 = 0;
    local_60 = (longlong *)0x0;
    FUN_1467df774(param_2 + 4,&local_60);
  }
  else {
    pwVar4 = local_88;
    if ((int)uStack_80 == 0) {
      pwVar4 = L"";
    }
    dVar8 = _wtof(pwVar4);
    fStack_68 = (float)dVar8;
    local_70 = 2;
    *param_2 = 2;
    *(ulonglong *)(param_2 + 1) = CONCAT44(fStack_68,local_6c);
    param_2[3] = uStack_64;
LAB_1467dfce8:
    local_58 = 0;
    local_60 = (longlong *)0x0;
    FUN_1467df774(param_2 + 4,&local_60);
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
LAB_1467dfb98:
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467dfda7 FUN_1467dfda7 body=139 status=ok
// SIG undefined FUN_1467dfda7(void)

wint_t * FUN_1467dfda7(wint_t *param_1,undefined8 *param_2)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  _C = *param_1;
  for (; (_C != 0 && (iVar1 = iswalnum(_C), *param_1 == 0x5f || iVar1 != 0)); param_1 = param_1 + 1)
  {
    FUN_140002184(param_2);
    _C = param_1[1];
  }
  pwVar2 = (wint_t *)0x0;
  if (1 < *(int *)(param_2 + 1)) {
    pwVar2 = param_1;
  }
  return pwVar2;
}



// FUNCTION 1467dfe32 FUN_1467dfe32 body=497 status=ok
// SIG undefined FUN_1467dfe32(void)

void FUN_1467dfe32(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  code **local_a8;
  code *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844d14) {
    FUN_144b3d300(&DAT_14c844d14);
    if (DAT_14c844d14 == -1) {
      FUN_141366fce(&DAT_14c844cfc);
      _Init_thread_footer(&DAT_14c844d14);
    }
  }
  local_a8 = &local_40;
  local_40 = FUN_1427696f2;
  local_38 = &local_29;
  FUN_1467e0024(param_1,L"SetAlwaysSign",param_2,&DAT_14c844cfc);
  local_a8 = &local_50;
  local_50 = FUN_1427696f2;
  local_48 = &local_29;
  FUN_1467e0024(param_1,L"SetUseGrouping",param_2 + 1,&DAT_14c844cfd);
  local_58 = &local_2b;
  local_60 = &LAB_142769772;
  FUN_1467e00a4(param_1,param_2 + 4);
  local_a8 = &local_70;
  local_70 = FUN_14276977e;
  local_68 = &local_2a;
  FUN_1467e0118(param_1,L"SetMinimumIntegralDigits",param_2 + 8,&DAT_14c844d04);
  local_a8 = &local_80;
  local_80 = FUN_14276977e;
  local_78 = &local_2a;
  FUN_1467e0118(param_1,L"SetMaximumIntegralDigits",param_2 + 0xc,&DAT_14c844d08);
  local_a8 = &local_90;
  local_90 = FUN_14276977e;
  local_88 = &local_2a;
  FUN_1467e0118(param_1,L"SetMinimumFractionalDigits",param_2 + 0x10,&DAT_14c844d0c);
  local_a8 = &local_a0;
  local_a0 = FUN_14276977e;
  local_98 = &local_2a;
  FUN_1467e0118(param_1,L"SetMaximumFractionalDigits",param_2 + 0x14,&DAT_14c844d10);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e0024 FUN_1467e0024 body=128 status=ok
// SIG undefined FUN_1467e0024(void)

void FUN_1467e0024(longlong param_1,wchar_t *param_2,char *param_3,char *param_4,undefined8 *param_5
                  )

{
  size_t sVar1;
  
  if (*param_3 == *param_4) {
    return;
  }
  if (1 < *(int *)(param_1 + 8)) {
    FUN_140002184(param_1,0x2e);
  }
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1,param_2,sVar1 & 0xffffffff);
  FUN_140002184(param_1,0x28);
  (*(code *)*param_5)(param_5[1],param_1,param_3);
  FUN_140002184(param_1,0x29);
  return;
}



// FUNCTION 1467e00a4 FUN_1467e00a4 body=116 status=ok
// SIG undefined FUN_1467e00a4(void)

void FUN_1467e00a4(longlong param_1,int *param_2,undefined8 *param_3)

{
  if (*param_2 == DAT_14c844d00) {
    return;
  }
  if (1 < *(int *)(param_1 + 8)) {
    FUN_140002184(param_1,0x2e);
  }
  FUN_1400020e8(param_1,L"SetRoundingMode",0xf);
  FUN_140002184(param_1,0x28);
  (*(code *)*param_3)(param_3[1],param_1,param_2);
  FUN_140002184(param_1,0x29);
  return;
}



// FUNCTION 1467e0118 FUN_1467e0118 body=128 status=ok
// SIG undefined FUN_1467e0118(void)

void FUN_1467e0118(longlong param_1,wchar_t *param_2,int *param_3,int *param_4,undefined8 *param_5)

{
  size_t sVar1;
  
  if (*param_3 == *param_4) {
    return;
  }
  if (1 < *(int *)(param_1 + 8)) {
    FUN_140002184(param_1,0x2e);
  }
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1,param_2,sVar1 & 0xffffffff);
  FUN_140002184(param_1,0x28);
  (*(code *)*param_5)(param_5[1],param_1,param_3);
  FUN_140002184(param_1,0x29);
  return;
}



// FUNCTION 1467e0198 FUN_1467e0198 body=1646 status=ok
// SIG undefined FUN_1467e0198(void)

short * FUN_1467e0198(short *param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [42];
  byte local_de;
  byte local_dd;
  byte local_dc;
  byte local_db;
  byte local_da;
  byte local_d9;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar5 = 1;
  local_c8 = param_2 + 4;
  lVar13 = param_2 + 8;
  lVar14 = param_2 + 1;
  do {
    if ((bVar5 & 1) == 0) goto LAB_1467e05d7;
    local_d8 = lVar13;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844d28) {
      FUN_144b3d300(&DAT_14c844d28);
      if (DAT_14c844d28 == -1) {
        FUN_140056680(&DAT_14c844d18,L"SetAlwaysSign");
        atexit((_func_5014 *)&LAB_1427629fd);
        _Init_thread_footer(&DAT_14c844d28);
      }
    }
    psVar1 = param_1 + (*param_1 == 0x2e);
    local_60 = FUN_1427697f2;
    local_58 = &local_49;
    psVar7 = (short *)FUN_1467e0807(psVar1,&DAT_14c844d18,param_2,&local_60);
    if (psVar7 == (short *)0x0) break;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844d40) {
      FUN_144b3d300(&DAT_14c844d40);
      if (DAT_14c844d40 == -1) {
        FUN_140056680(&DAT_14c844d30,L"SetUseGrouping");
        atexit((_func_5014 *)&LAB_142762a0e);
        _Init_thread_footer(&DAT_14c844d40);
      }
    }
    sVar2 = *psVar7;
    local_70 = FUN_1427697f2;
    local_d0 = lVar14;
    local_68 = &local_49;
    psVar8 = (short *)FUN_1467e0807(psVar7 + (sVar2 == 0x2e),&DAT_14c844d30,lVar14,&local_70);
    if (psVar8 == (short *)0x0) break;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844d58) {
      FUN_144b3d300(&DAT_14c844d58);
      if (DAT_14c844d58 == -1) {
        FUN_140056680(&DAT_14c844d48,L"SetRoundingMode");
        atexit((_func_5014 *)&LAB_142762a1f);
        _Init_thread_footer(&DAT_14c844d58);
      }
    }
    psVar11 = psVar8 + (*psVar8 == 0x2e);
    local_78 = &local_4b;
    local_80 = FUN_142769a0e;
    psVar9 = (short *)FUN_1467e0903(psVar11,local_c8,&local_80);
    if (psVar9 == (short *)0x0) break;
    local_d9 = psVar9 != psVar11;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844d70) {
      FUN_144b3d300(&DAT_14c844d70);
      if (DAT_14c844d70 == -1) {
        FUN_140056680(&DAT_14c844d60,L"SetMinimumIntegralDigits");
        atexit((_func_5014 *)&LAB_142762a30);
        _Init_thread_footer(&DAT_14c844d70);
      }
    }
    psVar11 = psVar9 + (*psVar9 == 0x2e);
    local_88 = &local_4a;
    local_90 = FUN_142769aa0;
    psVar10 = (short *)FUN_1467e0a04(psVar11,&DAT_14c844d60,local_d8,&local_90);
    if (psVar10 == (short *)0x0) break;
    local_db = psVar10 != psVar11;
    local_da = psVar10 != (short *)0x0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844d88) {
      FUN_144b3d300(&DAT_14c844d88);
      if (DAT_14c844d88 == -1) {
        FUN_140056680(&DAT_14c844d78,L"SetMaximumIntegralDigits");
        atexit((_func_5014 *)&LAB_142762a41);
        _Init_thread_footer(&DAT_14c844d88);
      }
    }
    psVar10 = psVar10 + (*psVar10 == 0x2e);
    local_98 = &local_4a;
    local_a0 = FUN_142769aa0;
    psVar11 = (short *)FUN_1467e0a04(psVar10,&DAT_14c844d78,param_2 + 0xc,&local_a0);
    if (psVar11 == (short *)0x0) break;
    local_de = psVar11 != psVar10;
    local_dd = psVar11 != (short *)0x0;
    local_dc = psVar9 != (short *)0x0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844da0) {
      FUN_144b3d300(&DAT_14c844da0);
      if (DAT_14c844da0 == -1) {
        FUN_140056680(&DAT_14c844d90,L"SetMinimumFractionalDigits");
        atexit((_func_5014 *)&LAB_142762a52);
        _Init_thread_footer(&DAT_14c844da0);
      }
    }
    sVar3 = *psVar11;
    local_a8 = &local_4a;
    local_b0 = FUN_142769aa0;
    psVar9 = (short *)FUN_1467e0a04(psVar11 + (sVar3 == 0x2e),&DAT_14c844d90,param_2 + 0x10,
                                    &local_b0);
    if (psVar9 == (short *)0x0) break;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844db8) {
      FUN_144b3d300(&DAT_14c844db8);
      if (DAT_14c844db8 == -1) {
        FUN_140056680(&DAT_14c844da8,L"SetMaximumFractionalDigits");
        atexit((_func_5014 *)&LAB_142762a63);
        _Init_thread_footer(&DAT_14c844db8);
      }
    }
    bVar5 = local_dc & local_d9;
    bVar12 = local_da & local_db;
    bVar6 = local_dd & local_de;
    sVar4 = *psVar9;
    local_b8 = &local_4a;
    local_c0 = FUN_142769aa0;
    param_1 = (short *)FUN_1467e0a04(psVar9 + (sVar4 == 0x2e),&DAT_14c844da8,param_2 + 0x14,
                                     &local_c0);
    bVar5 = (param_1 != psVar9 + (sVar4 == 0x2e) && param_1 != (short *)0x0) |
            (psVar9 != (short *)0x0 && psVar9 != psVar11 + (sVar3 == 0x2e)) |
            bVar6 | bVar12 | bVar5 | (psVar8 != (short *)0x0 && psVar8 != psVar7 + (sVar2 == 0x2e)
                                     || psVar7 != (short *)0x0 && psVar7 != psVar1);
    lVar13 = local_d8;
    lVar14 = local_d0;
  } while (param_1 != (short *)0x0);
  param_1 = (short *)0x0;
LAB_1467e05d7:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e0807 FUN_1467e0807 body=251 status=ok
// SIG undefined FUN_1467e0807(void)

wchar_t * FUN_1467e0807(wchar_t *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  wchar_t *_Str2;
  short *psVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)*param_2;
    iVar6 = *(int *)(param_2 + 1) + -1;
  }
  iVar3 = wcsncmp(param_1,_Str2,(longlong)iVar6);
  if (iVar3 == 0) {
    for (param_1 = param_1 + iVar6; (wVar1 = *param_1, wVar1 == L' ' || (wVar1 == L'\t'));
        param_1 = param_1 + 1) {
    }
    if (param_1 != (wchar_t *)0x0 && wVar1 == L'(') {
      do {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 == L' ');
      } while (*param_1 == L'\t');
      if ((param_1 != (wchar_t *)0x0) &&
         (local_30 = param_1, psVar4 = (short *)(*(code *)*param_4)(param_4[1],&local_30,param_3),
         psVar4 != (short *)0x0)) {
        for (; (sVar2 = *psVar4, sVar2 == 0x20 || (sVar2 == 9)); psVar4 = psVar4 + 1) {
        }
        psVar5 = (short *)0x0;
        if (sVar2 == 0x29) {
          psVar5 = psVar4;
        }
        param_1 = psVar5 + 1;
        if (psVar5 == (short *)0x0) {
          param_1 = (wchar_t *)0x0;
        }
        goto LAB_1467e085a;
      }
    }
    param_1 = (wchar_t *)0x0;
  }
LAB_1467e085a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e0903 FUN_1467e0903 body=256 status=ok
// SIG undefined FUN_1467e0903(void)

wchar_t * FUN_1467e0903(wchar_t *param_1,undefined8 param_2,undefined8 *param_3)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  wchar_t *_Str2;
  short *psVar6;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = DAT_14c844d50 + -1;
  _Str2 = DAT_14c844d48;
  if (DAT_14c844d50 == 0) {
    _Str2 = L"";
    iVar3 = 0;
  }
  iVar4 = wcsncmp(param_1,_Str2,(longlong)iVar3);
  if (iVar4 == 0) {
    for (param_1 = param_1 + iVar3; (wVar1 = *param_1, wVar1 == L' ' || (wVar1 == L'\t'));
        param_1 = param_1 + 1) {
    }
    if (param_1 != (wchar_t *)0x0 && wVar1 == L'(') {
      do {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 == L' ');
      } while (*param_1 == L'\t');
      if ((param_1 != (wchar_t *)0x0) &&
         (local_30 = param_1, psVar5 = (short *)(*(code *)*param_3)(param_3[1],&local_30,param_2),
         psVar5 != (short *)0x0)) {
        for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
        }
        psVar6 = (short *)0x0;
        if (sVar2 == 0x29) {
          psVar6 = psVar5;
        }
        param_1 = psVar6 + 1;
        if (psVar6 == (short *)0x0) {
          param_1 = (wchar_t *)0x0;
        }
        goto LAB_1467e095b;
      }
    }
    param_1 = (wchar_t *)0x0;
  }
LAB_1467e095b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e0a04 FUN_1467e0a04 body=251 status=ok
// SIG undefined FUN_1467e0a04(void)

wchar_t * FUN_1467e0a04(wchar_t *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  wchar_t wVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  wchar_t *_Str2;
  short *psVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)*param_2;
    iVar6 = *(int *)(param_2 + 1) + -1;
  }
  iVar3 = wcsncmp(param_1,_Str2,(longlong)iVar6);
  if (iVar3 == 0) {
    for (param_1 = param_1 + iVar6; (wVar1 = *param_1, wVar1 == L' ' || (wVar1 == L'\t'));
        param_1 = param_1 + 1) {
    }
    if (param_1 != (wchar_t *)0x0 && wVar1 == L'(') {
      do {
        do {
          param_1 = param_1 + 1;
        } while (*param_1 == L' ');
      } while (*param_1 == L'\t');
      if ((param_1 != (wchar_t *)0x0) &&
         (local_30 = param_1, psVar4 = (short *)(*(code *)*param_4)(param_4[1],&local_30,param_3),
         psVar4 != (short *)0x0)) {
        for (; (sVar2 = *psVar4, sVar2 == 0x20 || (sVar2 == 9)); psVar4 = psVar4 + 1) {
        }
        psVar5 = (short *)0x0;
        if (sVar2 == 0x29) {
          psVar5 = psVar4;
        }
        param_1 = psVar5 + 1;
        if (psVar5 == (short *)0x0) {
          param_1 = (wchar_t *)0x0;
        }
        goto LAB_1467e0a57;
      }
    }
    param_1 = (wchar_t *)0x0;
  }
LAB_1467e0a57:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e0b00 FUN_1467e0b00 body=650 status=ok
// SIG undefined FUN_1467e0b00(void)

void FUN_1467e0b00(undefined8 param_1,wchar_t *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined8 unaff_RBX;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(char *)(param_4 + 0x18) == '\x01') {
    uVar5 = FUN_1467cf242();
    cVar4 = FUN_1467cf206(param_4,uVar5);
    if (cVar4 == '\0') {
      uVar5 = FUN_145a19d3c();
      cVar4 = FUN_1467cf206(param_4,uVar5);
      if (cVar4 == '\0') {
        FUN_1467dfe32(&local_58,param_4);
        if ((int)uStack_50 < 2) goto LAB_1467e0b6c;
        pwVar8 = L"_CUSTOM";
      }
      else {
        pwVar8 = L"_UNGROUPED";
      }
    }
    else {
      pwVar8 = L"_GROUPED";
    }
    FUN_14020fad6(&local_48,pwVar8);
  }
LAB_1467e0b6c:
  sVar6 = wcslen(param_2);
  FUN_1400020e8(param_1,param_2,sVar6 & 0xffffffff);
  uVar14 = 0;
  uVar11 = (ulonglong)((int)uStack_40 - 1);
  if ((int)uStack_40 == 0) {
    uVar11 = uVar14;
  }
  FUN_1400020e8(param_1,local_48,uVar11);
  FUN_1400020e8(param_1,&DAT_149e06140,1);
  FUN_1467d18b0(param_3,param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff);
  puVar7 = local_48;
  if ((int)uStack_40 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar7 + uVar14);
    uVar11 = (ulonglong)uVar9;
    uVar12 = *(ushort *)((longlong)L"_CUSTOM" + uVar14);
    if (uVar9 != uVar12) break;
    if (uVar9 == 0) goto LAB_1467e0c2f;
LAB_1467e0c03:
    uVar14 = uVar14 + 2;
  }
  if ((uVar12 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    uVar13 = (ulonglong)uVar12;
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1467e0c03;
  }
  if (uVar9 != uVar12) goto LAB_1467e0c60;
LAB_1467e0c2f:
  FUN_1400020e8(param_1,&DAT_149e19f34,2);
  iVar10 = (int)uStack_50 + -1;
  if ((int)uStack_50 == 0) {
    iVar10 = 0;
  }
  FUN_1400020e8(param_1,local_58,iVar10);
LAB_1467e0c60:
  FUN_1400020e8(param_1,&DAT_149e1a408,3);
  if (*param_5 != 0) {
    FUN_1467ce734(*param_5 + 0x28,&local_68,0);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(param_1,local_68,iVar10);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400020e8(param_1,&DAT_149e192fc,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_5[1];
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e0d8b FUN_1467e0d8b body=864 status=ok
// SIG undefined FUN_1467e0d8b(void)

short * FUN_1467e0d8b(wchar_t *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                     undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  short sVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  undefined8 *puVar12;
  longlong lVar13;
  short *psVar14;
  wchar_t *_Str2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  psVar11 = (short *)0x0;
  iVar10 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = (wchar_t *)*param_2;
    iVar10 = *(int *)(param_2 + 1) + -1;
  }
  iVar9 = wcsncmp(param_1,_Str2,(longlong)iVar10);
  if (iVar9 != 0) goto LAB_1467e0ddf;
  param_1 = param_1 + iVar10;
  iVar10 = wcsncmp(param_1,L"_CUSTOM",7);
  if (iVar10 == 0) {
    param_1 = param_1 + 7;
  }
  else {
    iVar9 = wcsncmp(param_1,L"_GROUPED",8);
    if (iVar9 == 0) {
      param_1 = param_1 + 8;
      puVar12 = (undefined8 *)FUN_1467cf242();
    }
    else {
      iVar9 = wcsncmp(param_1,L"_UNGROUPED",10);
      if (iVar9 != 0) {
        if (*(char *)(param_4 + 3) == '\x01') {
          *(undefined1 *)(param_4 + 3) = 0;
        }
        goto LAB_1467e0e7a;
      }
      param_1 = param_1 + 10;
      puVar12 = (undefined8 *)FUN_145a19d3c();
    }
    if (puVar12 != param_4) {
      param_4[2] = puVar12[2];
      uVar6 = *(undefined4 *)((longlong)puVar12 + 4);
      uVar7 = *(undefined4 *)(puVar12 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar12 + 0xc);
      *(undefined4 *)param_4 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)param_4 + 4) = uVar6;
      *(undefined4 *)(param_4 + 1) = uVar7;
      *(undefined4 *)((longlong)param_4 + 0xc) = uVar8;
      *(undefined1 *)(param_4 + 3) = 1;
    }
  }
LAB_1467e0e7a:
  for (; (wVar3 = *param_1, wVar3 == L' ' || (wVar3 == L'\t')); param_1 = param_1 + 1) {
  }
  if (param_1 != (wchar_t *)0x0 && wVar3 == L'(') {
    do {
      do {
        param_1 = param_1 + 1;
      } while (*param_1 == L' ');
    } while (*param_1 == L'\t');
    if ((param_1 != (wchar_t *)0x0) &&
       (psVar11 = (short *)FUN_1467dfa8b(param_1,param_3), psVar11 != (short *)0x0)) {
      if (iVar10 == 0) {
        for (; (sVar4 = *psVar11, sVar4 == 0x20 || (sVar4 == 9)); psVar11 = psVar11 + 1) {
        }
        if (sVar4 == 0x2c && psVar11 != (short *)0x0) {
          FUN_141366fce(&local_58);
          do {
            do {
              psVar11 = psVar11 + 1;
            } while (*psVar11 == 0x20);
          } while (*psVar11 == 9);
          if (psVar11 != (short *)0x0) {
            psVar11 = (short *)FUN_1467e0198(psVar11,&local_58);
            if (psVar11 != (short *)0x0) {
              if (&local_58 != param_4) {
                param_4[2] = local_48;
                *(undefined4 *)param_4 = (undefined4)local_58;
                *(undefined4 *)((longlong)param_4 + 4) = local_58._4_4_;
                *(int *)(param_4 + 1) = (int)uStack_50;
                *(undefined4 *)((longlong)param_4 + 0xc) = uStack_50._4_4_;
                *(undefined1 *)(param_4 + 3) = 1;
              }
              goto LAB_1467e0f98;
            }
          }
        }
      }
      else {
LAB_1467e0f98:
        for (; (sVar4 = *psVar11, sVar4 == 0x20 || (sVar4 == 9)); psVar11 = psVar11 + 1) {
        }
        if (sVar4 == 0x2c && psVar11 != (short *)0x0) {
          local_58 = 0;
          uStack_50 = 0;
          do {
            do {
              psVar11 = psVar11 + 1;
            } while (*psVar11 == 0x20);
          } while (*psVar11 == 9);
          if ((psVar11 == (short *)0x0) ||
             (psVar11 = (short *)FUN_140c9875d(psVar11,&local_58), psVar11 == (short *)0x0)) {
            psVar11 = (short *)0x0;
          }
          else {
            if ((int)uStack_50 < 2) {
              local_60 = (longlong *)0x0;
              local_68 = 0;
            }
            else {
              lVar13 = FUN_140d5712e();
              FUN_14588f6d2(*(undefined8 *)(lVar13 + 0x20),&local_68,&local_58,0);
            }
            plVar1 = local_60;
            *param_5 = local_68;
            local_68 = 0;
            plVar5 = (longlong *)param_5[1];
            if (local_60 == plVar5) {
LAB_1467e105c:
              plVar5 = local_60;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_60 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_60)();
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))();
                  }
                }
              }
            }
            else {
              local_60 = (longlong *)0x0;
              param_5[1] = plVar1;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar5 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar5)();
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))();
                  }
                }
                goto LAB_1467e105c;
              }
            }
            for (; (sVar4 = *psVar11, sVar4 == 0x20 || (sVar4 == 9)); psVar11 = psVar11 + 1) {
            }
            psVar14 = (short *)0x0;
            if (sVar4 == 0x29) {
              psVar14 = psVar11;
            }
            psVar11 = psVar14 + 1;
            if (psVar14 == (short *)0x0) {
              psVar11 = (short *)0x0;
            }
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1467e0ddf;
        }
      }
    }
  }
  psVar11 = (short *)0x0;
LAB_1467e0ddf:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return psVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e10ec FUN_1467e10ec body=1090 status=ok
// SIG undefined FUN_1467e10ec(void)

void FUN_1467e10ec(undefined8 param_1,wchar_t *param_2,longlong *param_3,int *param_4,
                  undefined4 *param_5,longlong param_6,longlong *param_7,longlong *param_8,
                  undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  undefined8 unaff_RBP;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == (int *)0x0) {
    bVar13 = false;
  }
  else {
    bVar13 = *param_4 == 5;
  }
  FUN_1467d14a6(&local_68);
  iVar7 = (int)param_7[1];
  if (iVar7 == (int)lStack_60) {
    bVar14 = true;
    if (1 < iVar7) {
      lVar10 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*param_7 + lVar10);
        uVar6 = (uint)uVar3;
        uVar4 = *(ushort *)(local_68 + lVar10);
        uVar12 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1467e117b;
          }
          iVar7 = uVar6 - uVar12;
          goto LAB_1467e1431;
        }
        if (uVar3 == 0) break;
LAB_1467e117b:
        lVar10 = lVar10 + 2;
      }
      iVar7 = 0;
LAB_1467e1431:
      bVar14 = iVar7 == 0;
    }
  }
  else {
    bVar14 = (int)lStack_60 + iVar7 == 1;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  uStack_70 = 0;
  if (bVar13) {
    FUN_1400020e8(&local_78,L"_CUSTOM",7);
  }
  if (bVar14) {
    pwVar9 = L"_LOCAL";
    uVar11 = 6;
  }
  else {
    pwVar9 = L"_UTC";
    uVar11 = 4;
  }
  FUN_1400020e8(&local_78,pwVar9,uVar11);
  sVar8 = wcslen(param_2);
  FUN_1400020e8(param_1,param_2,sVar8 & 0xffffffff);
  iVar7 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar7 = 0;
  }
  FUN_1400020e8(param_1,local_78,iVar7);
  FUN_1400020e8(param_1,&DAT_149e06140,1);
  lVar10 = *param_3;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  FUN_14021300e(&local_68,0x7b2,1,1);
  lStack_60 = (longlong)(lVar10 - local_68) / 10000000;
  local_68 = local_68 & 0xffffffff00000000;
  local_58 = 0;
  local_50 = 0;
  FUN_1467d18b0(&local_68,param_1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_9) & 0xffffffff);
  if (bVar13) {
    FUN_1400020e8(param_1,&DAT_149e1a408);
    if (param_6 == 0) {
      local_68 = 0;
      lStack_60 = 0;
      lStack_60._0_4_ = 0;
    }
    else {
      FUN_1467ce734(param_6,&local_68,0);
    }
    iVar7 = (int)lStack_60 + -1;
    if ((int)lStack_60 == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(param_1,local_68,iVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_1,&DAT_149e01f5a,1);
  }
  else {
    if (param_4 != (int *)0x0) {
      FUN_1400020e8(param_1,&DAT_149e19f34,2);
      FUN_1467ee4c7(param_1,*param_4);
    }
    if (param_5 != (undefined4 *)0x0) {
      FUN_1400020e8(param_1,&DAT_149e19f34,2);
      FUN_1467ee4c7(param_1,*param_5);
    }
  }
  if (!bVar14) {
    FUN_1400020e8(param_1,&DAT_149e1a408,3);
    FUN_1467ce734(param_7,&local_68,0);
    iVar7 = (int)lStack_60 + -1;
    if ((int)lStack_60 == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(param_1,local_68,iVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_1,&DAT_149e01f5a,1);
  }
  FUN_1400020e8(param_1,&DAT_149e1a408,3);
  if (*param_8 != 0) {
    FUN_1467ce734(*param_8 + 0x28,&local_68,0);
    iVar7 = (int)lStack_60 + -1;
    if ((int)lStack_60 == 0) {
      iVar7 = 0;
    }
    FUN_1400020e8(param_1,local_68,iVar7);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400020e8(param_1,&DAT_149e192fc,2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_8[1];
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
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e152f FUN_1467e152f body=1532 status=ok
// SIG undefined FUN_1467e152f(void)

short * FUN_1467e152f(wchar_t *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4,
                     undefined4 *param_5,longlong *param_6,ulonglong *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  short *psVar8;
  short *psVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  size_t _MaxCount;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  float local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  psVar8 = (short *)0x0;
  iVar5 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)*param_2;
    iVar5 = *(int *)(param_2 + 1) + -1;
  }
  _MaxCount = (size_t)iVar5;
  iVar5 = wcsncmp(param_1,pwVar10,_MaxCount);
  if (iVar5 != 0) goto LAB_1467e158d;
  iVar5 = wcsncmp(param_1 + _MaxCount,L"_CUSTOM",7);
  pwVar10 = param_1 + _MaxCount + 7;
  if (iVar5 != 0) {
    pwVar10 = param_1 + _MaxCount;
  }
  iVar6 = wcsncmp(pwVar10,L"_LOCAL",6);
  if (iVar6 != 0) {
    iVar6 = wcsncmp(pwVar10,L"_UTC",4);
    if (iVar6 == 0) {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_1446f8c06(param_7,0);
      }
      pwVar10 = pwVar10 + 4;
      if ((undefined2 *)*param_7 != (undefined2 *)0x0) {
        *(undefined2 *)*param_7 = 0;
      }
      goto LAB_1467e1683;
    }
LAB_1467e1626:
    psVar8 = (short *)0x0;
    goto LAB_1467e158d;
  }
  FUN_1467d14a6(&local_68);
  if (&local_68 == param_7) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_7 != 0) {
      FUN_1400020a8();
    }
    *param_7 = local_68;
    local_68 = 0;
    *(float *)(param_7 + 1) = local_60;
    *(undefined4 *)((longlong)param_7 + 0xc) = uStack_5c;
  }
  pwVar10 = pwVar10 + 6;
LAB_1467e1683:
  for (; (wVar3 = *pwVar10, wVar3 == L' ' || (wVar3 == L'\t')); pwVar10 = pwVar10 + 1) {
  }
  if (wVar3 != L'(' || pwVar10 == (wchar_t *)0x0) goto LAB_1467e1626;
  local_68 = CONCAT44(local_68._4_4_,4);
  plVar7 = (longlong *)FUN_140e82300();
  local_58 = (longlong *)*plVar7;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)plVar7[1];
  do {
    do {
      pwVar10 = pwVar10 + 1;
    } while (*pwVar10 == L' ');
  } while (*pwVar10 == L'\t');
  if ((pwVar10 == (wchar_t *)0x0) ||
     (psVar8 = (short *)FUN_1467dfa8b(pwVar10,&local_68), psVar8 == (short *)0x0)) {
switchD_1467e1787_default:
    psVar8 = (short *)0x0;
  }
  else {
    switch(local_68 & 0xffffffff) {
    case 0:
    case 1:
      lVar11 = CONCAT44(uStack_5c,local_60);
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 0;
      FUN_14021300e(&local_78,0x7b2,1,1);
      goto LAB_1467e1805;
    case 2:
      lVar11 = (longlong)local_60;
      break;
    case 3:
      lVar11 = (longlong)(double)CONCAT44(uStack_5c,local_60);
      break;
    default:
      goto switchD_1467e1787_default;
    }
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    FUN_14021300e(&local_78,0x7b2,1,1);
LAB_1467e1805:
    *param_3 = lVar11 * 10000000 + local_78;
    if (iVar5 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 5;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 5;
      }
      for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
      }
      if (sVar4 == 0x2c && psVar8 != (short *)0x0) {
        local_78 = 0;
        uStack_70 = 0;
        do {
          do {
            psVar8 = psVar8 + 1;
          } while (*psVar8 == 0x20);
        } while (*psVar8 == 9);
        if (psVar8 != (short *)0x0) {
          if (param_6 == (longlong *)0x0) {
            param_6 = &local_78;
          }
          psVar8 = (short *)FUN_140c9875d(psVar8,param_6);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
joined_r0x0001467e1966:
          if (psVar8 != (short *)0x0) goto LAB_1467e196c;
        }
      }
      goto switchD_1467e1787_default;
    }
    if (param_4 != (undefined4 *)0x0) {
      for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
      }
      if (psVar8 != (short *)0x0 && sVar4 == 0x2c) {
        do {
          do {
            psVar8 = psVar8 + 1;
          } while (*psVar8 == 0x20);
        } while (*psVar8 == 9);
        if ((psVar8 != (short *)0x0) &&
           (psVar8 = (short *)FUN_142762a74(psVar8,param_4), psVar8 != (short *)0x0))
        goto LAB_1467e1872;
      }
      goto switchD_1467e1787_default;
    }
LAB_1467e1872:
    if (param_5 != (undefined4 *)0x0) {
      for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
      }
      if (psVar8 != (short *)0x0 && sVar4 == 0x2c) {
        do {
          do {
            psVar8 = psVar8 + 1;
          } while (*psVar8 == 0x20);
        } while (*psVar8 == 9);
        if (psVar8 != (short *)0x0) {
          psVar8 = (short *)FUN_142762a74(psVar8,param_5);
          goto joined_r0x0001467e1966;
        }
      }
      goto switchD_1467e1787_default;
    }
LAB_1467e196c:
    if ((int)param_7[1] < 2) {
      for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
      }
      if (psVar8 != (short *)0x0 && sVar4 == 0x2c) {
        do {
          do {
            psVar8 = psVar8 + 1;
          } while (*psVar8 == 0x20);
        } while (*psVar8 == 9);
        if ((psVar8 != (short *)0x0) &&
           (psVar8 = (short *)FUN_140c9875d(psVar8,param_7), psVar8 != (short *)0x0))
        goto LAB_1467e19d0;
      }
      goto switchD_1467e1787_default;
    }
LAB_1467e19d0:
    for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
    }
    if (sVar4 != 0x2c || psVar8 == (short *)0x0) goto switchD_1467e1787_default;
    local_78 = 0;
    uStack_70 = 0;
    do {
      do {
        psVar8 = psVar8 + 1;
      } while (*psVar8 == 0x20);
    } while (*psVar8 == 9);
    if ((psVar8 == (short *)0x0) ||
       (psVar8 = (short *)FUN_140c9875d(psVar8,&local_78), psVar8 == (short *)0x0)) {
      psVar8 = (short *)0x0;
    }
    else {
      if ((int)uStack_70 < 2) {
        local_80 = (longlong *)0x0;
        local_88 = 0;
      }
      else {
        lVar11 = FUN_140d5712e();
        FUN_14588f6d2(*(undefined8 *)(lVar11 + 0x20),&local_88,&local_78,0);
      }
      plVar1 = local_80;
      *param_8 = local_88;
      local_88 = 0;
      plVar7 = (longlong *)param_8[1];
      if (local_80 == plVar7) {
LAB_1467e1a9c:
        plVar7 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)();
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
        }
      }
      else {
        local_80 = (longlong *)0x0;
        param_8[1] = plVar1;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar7)();
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          goto LAB_1467e1a9c;
        }
      }
      for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
      }
      psVar9 = (short *)0x0;
      if (sVar4 == 0x29) {
        psVar9 = psVar8;
      }
      psVar8 = psVar9 + 1;
      if (psVar9 == (short *)0x0) {
        psVar8 = (short *)0x0;
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_1467e158d:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return psVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e1b2c FUN_1467e1b2c body=223 status=ok
// SIG undefined FUN_1467e1b2c(void)

void FUN_1467e1b2c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_78 [40];
  code *local_50;
  longlong **local_48;
  longlong *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,*param_2,iVar1);
  FUN_1400020e8(param_1,&DAT_149e06140,1);
  FUN_1467d4dd8(param_3,&local_40);
  FUN_1467d1a5a(param_1,&local_40,1,param_4);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  local_50 = FUN_142769c04;
  local_48 = &local_40;
  local_40 = param_1;
  local_38 = (char)param_4;
  (*(code *)*param_5)(param_5[1]);
  FUN_1400020e8(param_1,&DAT_149e06144,1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e1c0c FUN_1467e1c0c body=83 status=ok
// SIG undefined FUN_1467e1c0c(void)

undefined8 * FUN_1467e1c0c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
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



// FUNCTION 1467e1c60 FUN_1467e1c60 body=12 status=ok
// SIG undefined FUN_1467e1c60(void)

void FUN_1467e1c60(undefined8 param_1,longlong *param_2)

{
  FUN_14003e2d8(param_1,*(undefined8 *)(*param_2 + 8));
  return;
}



// FUNCTION 1467e1c6c FUN_1467e1c6c body=90 status=ok
// SIG undefined FUN_1467e1c6c(void)

undefined8 * FUN_1467e1c6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_140c9891b(param_1);
  return param_1;
}



// FUNCTION 1467e1cc6 FUN_1467e1cc6 body=51 status=ok
// SIG undefined FUN_1467e1cc6(void)

undefined8 * FUN_1467e1cc6(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != -1) {
    uVar1 = FUN_1412a5d66();
    FUN_1412a5cfc(uVar1,*param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1467e1cfa FUN_1467e1cfa body=11 status=ok
// SIG undefined FUN_1467e1cfa(void)

bool FUN_1467e1cfa(void)

{
  return DAT_14c844e48 != 2;
}



// FUNCTION 1467e1d06 FUN_1467e1d06 body=487 status=ok
// SIG undefined FUN_1467e1d06(void)

undefined8 FUN_1467e1d06(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == -1) {
      uVar1 = 0;
      goto LAB_1467e1d3f;
    }
    local_68[2] = 0;
    local_68[3] = 0;
LAB_1467e1da0:
    local_68[1] = 0;
    local_68[0] = 0;
    uVar1 = FUN_1412a5d66();
    FUN_1412a5cfc(uVar1,iVar2,local_68);
  }
  else {
    local_68[2] = 0;
    local_68[3] = 0;
    uVar1 = FUN_1412a5d66();
    FUN_1412a5cfc(uVar1,iVar2,local_68 + 2);
    iVar2 = *(int *)(param_1 + 0x14);
    local_68[0] = 0;
    local_68[1] = 0;
    if (iVar2 != -1) goto LAB_1467e1da0;
  }
  if (param_3 != '\0') {
    FUN_140c9891b(local_68 + 2);
  }
  FUN_1400020e8(param_2,L"NSLOCTEXT(\"",0xb);
  FUN_1467ce734(local_68 + 2,&local_78,0);
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_78,iVar2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,L"\", \"",4);
  FUN_1467ce734(local_68,&local_78,0);
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_78,iVar2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,L"\", \"",4);
  FUN_1467ce734(param_1 + 0x18,&local_78,0);
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_78,iVar2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,&DAT_149e192fc,2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  uVar1 = 1;
LAB_1467e1d3f:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1467e1f04 FUN_1467e1f04 body=348 status=ok
// SIG undefined FUN_1467e1f04(void)

undefined8 FUN_1467e1f04(longlong param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  
  cVar3 = FUN_1467d4d68(param_1 + 0x20,param_2 + 0x20);
  if (cVar3 != '\0') {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == *(int *)(param_2 + 0x38)) {
      if (iVar4 == 0) {
        return 1;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x30);
      puVar5 = puVar10 + (longlong)iVar4 * 6;
      while( true ) {
        uVar1 = *(uint *)(param_2 + 0x38);
        lVar13 = *(longlong *)(param_2 + 0x30);
        if ((int)uVar1 < 1) {
          uVar12 = 0;
        }
        else {
          pwVar14 = L"";
          if (*(int *)(puVar10 + 1) != 0) {
            pwVar14 = (wchar_t *)*puVar10;
          }
          uVar12 = 0;
          uVar11 = (ulonglong)uVar1;
          uVar9 = uVar1;
          do {
            uVar11 = uVar11 >> 1;
            uVar8 = (uint)uVar11 + (int)uVar12;
            lVar6 = (ulonglong)uVar8 * 0x30;
            pwVar7 = L"";
            if (*(int *)(lVar13 + 8 + lVar6) != 0) {
              pwVar7 = *(wchar_t **)(lVar13 + lVar6);
            }
            iVar4 = wcscmp(pwVar7,pwVar14);
            if (iVar4 < 0) {
              uVar12 = (ulonglong)(uVar8 + (uVar9 & 1));
            }
            bVar2 = 1 < uVar9;
            uVar9 = (uint)uVar11;
          } while (bVar2);
        }
        if ((int)uVar1 <= (int)uVar12) break;
        lVar6 = uVar12 * 0x30;
        pwVar14 = L"";
        if (*(int *)(lVar13 + 8 + lVar6) != 0) {
          pwVar14 = *(wchar_t **)(lVar13 + lVar6);
        }
        pwVar7 = L"";
        if (*(int *)(puVar10 + 1) != 0) {
          pwVar7 = (wchar_t *)*puVar10;
        }
        iVar4 = wcscmp(pwVar7,pwVar14);
        if (iVar4 < 0) {
          return 0;
        }
        lVar13 = lVar13 + lVar6 + 0x10;
        if (lVar13 == 0) {
          return 0;
        }
        cVar3 = FUN_1467d1848(puVar10 + 2,lVar13,param_3);
        if (cVar3 == '\0') {
          return 0;
        }
        puVar10 = puVar10 + 6;
        if (puVar10 == puVar5) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1467e2060 FUN_1467e2060 body=41 status=ok
// SIG undefined FUN_1467e2060(void)

undefined8 FUN_1467e2060(longlong param_1,undefined8 param_2)

{
  FUN_140234686(param_2,param_1 + 0x20,param_1 + 0x30,1,1);
  return param_2;
}



// FUNCTION 1467e208a FUN_1467e208a body=300 status=ok
// SIG undefined FUN_1467e208a(void)

void FUN_1467e208a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  if ((bVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  }
  if ((bVar4 & 4) == 0) {
    if ((bVar4 & 1) == 0) goto LAB_1467e2183;
    FUN_144a5dc74(local_48);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),local_48);
    FUN_14023409e(&local_58,local_48,1);
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar3 = *(longlong **)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_4c,uStack_50);
    local_38._0_4_ = SUB84(plVar2,0);
    local_38._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_30._0_4_ = SUB84(plVar3,0);
    uStack_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
    local_58 = (undefined4)local_38;
    uStack_54 = local_38._4_4_;
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    local_38 = plVar2;
    uStack_30 = plVar3;
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
  else {
    FUN_1467d4dd8(param_1 + 0x20,&local_38);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),&local_38);
    local_48[0] = local_38;
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_1467e2183:
  FUN_1467ef9b4(*(undefined8 *)(*param_2 + 8),param_1 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e21b8 FUN_1467e21b8 body=687 status=ok
// SIG undefined FUN_1467e21b8(void)

short * FUN_1467e21b8(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  short sVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined8 uVar10;
  short *psVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar7 = wcsncmp(param_2,L"LOCGEN_FORMAT_NAMED",0x13);
  if (iVar7 == 0) {
    for (param_2 = param_2 + 0x13; (wVar3 = *param_2, wVar3 == L' ' || (wVar3 == L'\t'));
        param_2 = param_2 + 1) {
    }
    if (wVar3 == L'(' && param_2 != (wchar_t *)0x0) {
      FUN_144a5dc74(local_78);
      do {
        do {
          param_2 = param_2 + 1;
        } while (*param_2 == L' ');
      } while (*param_2 == L'\t');
      if (param_2 == (wchar_t *)0x0) goto LAB_1467e2435;
      local_98 = 1;
      psVar11 = (short *)0x0;
      psVar8 = (short *)FUN_140c97480(param_2,local_78,0,0);
      if (psVar8 != (short *)0x0) {
        FUN_14023409e(&local_88,local_78,1);
        lVar5 = *(longlong *)(param_1 + 0x20);
        plVar6 = *(longlong **)(param_1 + 0x28);
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
        local_68._0_4_ = (undefined4)lVar5;
        local_68._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
        uStack_60._0_4_ = SUB84(plVar6,0);
        uStack_60._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_68 = lVar5;
        uStack_60 = plVar6;
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
        iVar7 = *(int *)(param_1 + 0x3c);
        FUN_14010f8af(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = 0;
        if ((iVar7 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
          FUN_14598e1ac(param_1 + 0x30,0);
        }
        psVar11 = (short *)0x0;
        do {
          for (; (sVar4 = *psVar8, sVar4 == 0x20 || (sVar4 == 9)); psVar8 = psVar8 + 1) {
          }
          if (psVar8 == (short *)0x0) break;
          if (sVar4 != 0x2c) goto LAB_1467e240c;
          local_68 = 0;
          uStack_60 = (longlong *)0x0;
          do {
            do {
              psVar8 = psVar8 + 1;
            } while (*psVar8 == 0x20);
          } while (*psVar8 == 9);
          bVar12 = true;
          if ((psVar8 == (short *)0x0) ||
             (psVar9 = (short *)FUN_140c9875d(psVar8,&local_68), psVar8 = psVar9,
             psVar9 == (short *)0x0)) {
LAB_1467e23ac:
            psVar8 = (short *)0x0;
          }
          else {
            while( true ) {
              psVar8 = psVar8 + 1;
              sVar4 = *psVar9;
              if ((sVar4 != 0x20) && (sVar4 != 9)) break;
              psVar9 = psVar9 + 1;
            }
            if (sVar4 != 0x2c || psVar9 == (short *)0x0) goto LAB_1467e23ac;
            uVar10 = FUN_1467f04a0(param_1 + 0x30,&local_68);
            for (; (*psVar8 == 0x20 || (*psVar8 == 9)); psVar8 = psVar8 + 1) {
            }
            if (psVar8 == (short *)0x0) goto LAB_1467e23ac;
            psVar8 = (short *)FUN_1467d1c7e(uVar10,psVar8);
            bVar12 = psVar8 == (short *)0x0;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        } while (!bVar12);
      }
      goto LAB_1467e2437;
    }
  }
  psVar11 = (short *)0x0;
  goto LAB_1467e21fd;
LAB_1467e240c:
  while ((psVar11 = psVar8 + 1, sVar4 == 0x20 || (sVar4 == 9))) {
    psVar8 = psVar11;
    sVar4 = *psVar11;
  }
  if (psVar11 == (short *)0x2 || sVar4 != 0x29) {
LAB_1467e2435:
    psVar11 = (short *)0x0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_1467e2437:
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
LAB_1467e21fd:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar11;
}



// FUNCTION 1467e2468 FUN_1467e2468 body=154 status=ok
// SIG undefined FUN_1467e2468(void)

undefined8 FUN_1467e2468(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  code **local_68;
  longlong local_58 [2];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_48;
  local_40 = FUN_142769c88;
  local_48 = param_1;
  FUN_140056680(local_58,L"LOCGEN_FORMAT_NAMED");
  local_68 = &local_40;
  FUN_1467e1b2c(param_2,local_58,param_1 + 0x20,param_3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e2504 FUN_1467e2504 body=427 status=ok
// SIG undefined FUN_1467e2504(void)

void FUN_1467e2504(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1467d4dd8(param_1 + 0x20,&local_50);
  FUN_1467cf0a2(&local_50,param_3);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  iVar6 = *(int *)(param_1 + 0x38);
  if (0 < iVar6) {
    iVar7 = 0;
    lVar9 = 0x20;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(int *)(lVar3 + -0x10 + lVar9) == 4) {
        FUN_1467cf0a2(lVar3 + lVar9,param_3);
        iVar6 = *(int *)(param_1 + 0x38);
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x30;
    } while (iVar7 < iVar6);
  }
  FUN_140233caa(&local_60,(longlong *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar6 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
    FUN_1467f06ca(param_3,iVar6);
  }
  lVar9 = *param_3;
  local_50 = (longlong *)*param_2;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  lVar8 = (longlong)iVar6 * 0x30;
  lVar3 = lVar9 + lVar8;
  local_48 = (undefined4)param_2[1];
  FUN_14023423e(lVar3);
  *(undefined8 *)(lVar9 + 0x10 + lVar8) = uVar4;
  *(longlong **)(lVar9 + 0x18 + lVar8) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(longlong *)(lVar3 + 0x20) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x28) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x2c) = local_58._4_4_;
  local_58 = 0;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
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
  FUN_14010f8af(local_60,local_58 & 0xffffffff);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e26b0 FUN_1467e26b0 body=124 status=ok
// SIG undefined FUN_1467e26b0(void)

undefined8 FUN_1467e26b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = FUN_1467d4d68(param_1 + 0x20,param_2 + 0x20);
  if ((cVar3 == '\0') || (iVar1 = *(int *)(param_1 + 0x38), iVar1 != *(int *)(param_2 + 0x38))) {
    uVar4 = 0;
  }
  else if (iVar1 < 1) {
    uVar4 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar5 = 0;
    lVar6 = 1;
    do {
      uVar4 = FUN_1467d1848(*(longlong *)(param_1 + 0x30) + lVar5,
                            *(longlong *)(param_2 + 0x30) + lVar5,param_3);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      lVar5 = lVar5 + 0x20;
      bVar2 = lVar6 < *(int *)(param_1 + 0x38);
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return uVar4;
}



// FUNCTION 1467e272c FUN_1467e272c body=41 status=ok
// SIG undefined FUN_1467e272c(void)

undefined8 FUN_1467e272c(longlong param_1,undefined8 param_2)

{
  FUN_14010c19c(param_2,param_1 + 0x20,param_1 + 0x30,1,1);
  return param_2;
}



// FUNCTION 1467e2756 FUN_1467e2756 body=373 status=ok
// SIG undefined FUN_1467e2756(void)

void FUN_1467e2756(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  if ((bVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  }
  if ((bVar4 & 4) == 0) {
    if ((bVar4 & 1) == 0) goto LAB_1467e284f;
    FUN_144a5dc74(local_48);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),local_48);
    FUN_14023409e(&local_58,local_48,1);
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar3 = *(longlong **)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_4c,uStack_50);
    local_38._0_4_ = (int)plVar2;
    local_38._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_30._0_4_ = SUB84(plVar3,0);
    uStack_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
    local_58 = (int)local_38;
    uStack_54 = local_38._4_4_;
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    local_38 = plVar2;
    uStack_30 = plVar3;
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
  else {
    FUN_1467d4dd8(param_1 + 0x20,&local_38);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),&local_38);
    local_48[0] = local_38;
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_1467e284f:
  local_38 = (longlong *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x38));
  FUN_1449b19ea(*param_2);
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
    FUN_1467f075e((longlong *)(param_1 + 0x30),(ulonglong)local_38 & 0xffffffff);
  }
  if (0 < (int)local_38) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467d16da(param_2,*(longlong *)(param_1 + 0x30) + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e28cc FUN_1467e28cc body=518 status=ok
// SIG undefined FUN_1467e28cc(void)

short * FUN_1467e28cc(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  short sVar4;
  longlong *plVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  short *psVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = wcsncmp(param_2,L"LOCGEN_FORMAT_ORDERED",0x15);
  if (iVar6 == 0) {
    for (param_2 = param_2 + 0x15; (wVar3 = *param_2, wVar3 == L' ' || (wVar3 == L'\t'));
        param_2 = param_2 + 1) {
    }
    if (wVar3 == L'(' && param_2 != (wchar_t *)0x0) {
      FUN_144a5dc74(local_48);
      do {
        do {
          param_2 = param_2 + 1;
        } while (*param_2 == L' ');
      } while (*param_2 == L'\t');
      if (param_2 == (wchar_t *)0x0) goto LAB_1467e2aa0;
      local_68 = 1;
      psVar9 = (short *)0x0;
      psVar7 = (short *)FUN_140c97480(param_2,local_48,0,0);
      if (psVar7 != (short *)0x0) {
        FUN_14023409e(&local_58,local_48,1);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        plVar5 = *(longlong **)(param_1 + 0x28);
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_54,local_58);
        *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_4c,uStack_50);
        local_38._0_4_ = (undefined4)uVar8;
        local_38._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_30._0_4_ = SUB84(plVar5,0);
        uStack_30._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
        local_58 = (undefined4)local_38;
        uStack_54 = local_38._4_4_;
        uStack_50 = (undefined4)uStack_30;
        uStack_4c = uStack_30._4_4_;
        local_38 = uVar8;
        uStack_30 = plVar5;
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
        iVar6 = *(int *)(param_1 + 0x3c);
        FUN_14007f2db(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = 0;
        if ((iVar6 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
          FUN_145c6ff46(param_1 + 0x30,0);
        }
        psVar9 = (short *)0x0;
        while( true ) {
          for (; (sVar4 = *psVar7, sVar4 == 0x20 || (sVar4 == 9)); psVar7 = psVar7 + 1) {
          }
          if (psVar7 == (short *)0x0) break;
          if (sVar4 != 0x2c) goto LAB_1467e2a77;
          uVar8 = FUN_1467e2ad4(param_1 + 0x30);
          do {
            do {
              psVar7 = psVar7 + 1;
            } while (*psVar7 == 0x20);
          } while (*psVar7 == 9);
          if ((psVar7 == (short *)0x0) ||
             (psVar7 = (short *)FUN_1467d1c7e(uVar8,psVar7), psVar7 == (short *)0x0)) break;
        }
      }
      goto LAB_1467e2aa2;
    }
  }
  psVar9 = (short *)0x0;
  goto LAB_1467e2906;
LAB_1467e2a77:
  while ((psVar9 = psVar7 + 1, sVar4 == 0x20 || (sVar4 == 9))) {
    psVar7 = psVar9;
    sVar4 = *psVar9;
  }
  if (psVar9 == (short *)0x2 || sVar4 != 0x29) {
LAB_1467e2aa0:
    psVar9 = (short *)0x0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
LAB_1467e2aa2:
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_1467e2906:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar9;
}



// FUNCTION 1467e2ad4 FUN_1467e2ad4 body=64 status=ok
// SIG undefined FUN_1467e2ad4(void)

longlong FUN_1467e2ad4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140188694(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1467f07d8(lVar2,1);
  return lVar2;
}



// FUNCTION 1467e2b14 FUN_1467e2b14 body=154 status=ok
// SIG undefined FUN_1467e2b14(void)

undefined8 FUN_1467e2b14(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  code **local_68;
  longlong local_58 [2];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_48;
  local_40 = FUN_142769d06;
  local_48 = param_1;
  FUN_140056680(local_58,L"LOCGEN_FORMAT_ORDERED");
  local_68 = &local_40;
  FUN_1467e1b2c(param_2,local_58,param_1 + 0x20,param_3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e2bb0 FUN_1467e2bb0 body=565 status=ok
// SIG undefined FUN_1467e2bb0(void)

void FUN_1467e2bb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1467d4dd8(param_1 + 0x20,&local_78);
  FUN_1467cf0a2(&local_78,param_3);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  iVar6 = *(int *)(param_1 + 0x38);
  if (0 < iVar6) {
    iVar7 = 0;
    lVar9 = 0x10;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x30) + -0x10 + lVar9) == 4) {
        FUN_1467cf0a2(*(longlong *)(param_1 + 0x30) + lVar9,param_3);
        iVar6 = *(int *)(param_1 + 0x38);
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar7 < iVar6);
  }
  local_88 = 0;
  uStack_80 = 0;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if ((iVar6 != 0) && (FUN_14598e1ac(&local_88), 0 < *(int *)(param_1 + 0x38))) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      FUN_144a83b10(&local_78,uVar8 & 0xffffffff);
      FUN_1467de67a(&local_88,&local_78,lVar3 + lVar9);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x38));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar6 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
    FUN_1467f06ca(param_3,iVar6);
  }
  lVar9 = *param_3;
  local_78 = (longlong *)*param_2;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 8))();
  }
  lVar10 = (longlong)iVar6 * 0x30;
  lVar3 = lVar9 + lVar10;
  uStack_70 = CONCAT44(uStack_70._4_4_,(int)param_2[1]);
  FUN_14023423e(lVar3);
  *(undefined8 *)(lVar9 + 0x10 + lVar10) = uVar4;
  *(longlong **)(lVar9 + 0x18 + lVar10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(longlong *)(lVar3 + 0x20) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar3 + 0x28) = (undefined4)uStack_80;
  *(undefined4 *)(lVar3 + 0x2c) = uStack_80._4_4_;
  uStack_80 = 0;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
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
  FUN_14010f8af(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e2de8 FUN_1467e2de8 body=146 status=ok
// SIG undefined FUN_1467e2de8(void)

undefined8 *
FUN_1467e2de8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0(param_1);
  *param_1 = &PTR_FUN_149e19610;
  param_1[4] = *param_3;
  lVar1 = param_3[1];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  return param_1;
}



// FUNCTION 1467e2e7a FUN_1467e2e7a body=250 status=ok
// SIG undefined FUN_1467e2e7a(void)

ulonglong FUN_1467e2e7a(longlong param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  longlong *local_78;
  undefined1 local_68 [16];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1467d4d68(param_1 + 0x20,param_2 + 0x20);
  if ((cVar2 == '\0') || (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x38) < 1) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    lVar5 = 1;
    lVar6 = 0;
    do {
      FUN_1467d1f30(*(longlong *)(param_1 + 0x30) + lVar6,local_68);
      FUN_1467d1f30(*(longlong *)(param_2 + 0x30) + lVar6,local_88);
      uVar3 = FUN_1467d1848(local_68,local_88,param_3);
      uVar4 = (ulonglong)uVar3;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      bVar1 = lVar5 < *(int *)(param_1 + 0x38);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while (((byte)uVar3 & bVar1) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1467e2f76 FUN_1467e2f76 body=41 status=ok
// SIG undefined FUN_1467e2f76(void)

undefined8 FUN_1467e2f76(longlong param_1,undefined8 param_2)

{
  FUN_1467d5274(param_2,param_1 + 0x20,param_1 + 0x30,1,0);
  return param_2;
}



// FUNCTION 1467e2fa0 FUN_1467e2fa0 body=41 status=ok
// SIG undefined FUN_1467e2fa0(void)

undefined8 FUN_1467e2fa0(longlong param_1,undefined8 param_2)

{
  FUN_1467d5274(param_2,param_1 + 0x20,param_1 + 0x30,1,1);
  return param_2;
}



// FUNCTION 1467e2fca FUN_1467e2fca body=373 status=ok
// SIG undefined FUN_1467e2fca(void)

void FUN_1467e2fca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  if ((bVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    bVar4 = *(byte *)(*(longlong *)(*param_2 + 8) + 0x28);
  }
  if ((bVar4 & 4) == 0) {
    if ((bVar4 & 1) == 0) goto LAB_1467e30c3;
    FUN_144a5dc74(local_48);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),local_48);
    FUN_14023409e(&local_58,local_48,1);
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar3 = *(longlong **)(param_1 + 0x28);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_4c,uStack_50);
    local_38._0_4_ = (int)plVar2;
    local_38._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_30._0_4_ = SUB84(plVar3,0);
    uStack_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
    local_58 = (int)local_38;
    uStack_54 = local_38._4_4_;
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    local_38 = plVar2;
    uStack_30 = plVar3;
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
  else {
    FUN_1467d4dd8(param_1 + 0x20,&local_38);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x158))(*(longlong **)(*param_2 + 8),&local_38);
    local_48[0] = local_38;
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
LAB_1467e30c3:
  local_38 = (longlong *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0x38));
  FUN_1449b19ea(*param_2);
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0) {
    FUN_1467f0914((longlong *)(param_1 + 0x30),(ulonglong)local_38 & 0xffffffff);
  }
  if (0 < (int)local_38) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467d2021(param_2,*(longlong *)(param_1 + 0x30) + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e3144 FUN_1467e3144 body=154 status=ok
// SIG undefined FUN_1467e3144(void)

undefined8 FUN_1467e3144(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  code **local_68;
  longlong local_58 [2];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_48;
  local_40 = FUN_142769d82;
  local_48 = param_1;
  FUN_140056680(local_58,L"LOCGEN_FORMAT_NAMED");
  local_68 = &local_40;
  FUN_1467e1b2c(param_2,local_58,param_1 + 0x20,param_3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e31e0 FUN_1467e31e0 body=890 status=ok
// SIG undefined FUN_1467e31e0(void)

void FUN_1467e31e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1467d4dd8(param_1 + 0x20,&local_68);
  FUN_1467cf0a2(&local_68,param_3);
  if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x48;
    lVar7 = *(longlong *)(param_1 + 0x30) + 0x18;
    do {
      if (*(char *)(lVar7 + -8) == '\x04') {
        FUN_1467cf0a2(lVar7,param_3);
      }
      lVar7 = lVar7 + 0x48;
      lVar9 = lVar9 + -0x48;
    } while (lVar9 != 0);
    iVar2 = *(int *)(param_1 + 0x38);
    local_98 = 0;
    uStack_90 = 0;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 != 0) {
      FUN_14598e1ac(&local_98);
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x30);
        lVar7 = (longlong)*(int *)(param_1 + 0x38) * 0x48;
        do {
          local_68 = 4;
          plVar5 = (longlong *)FUN_140e82300();
          local_58 = (longlong *)*plVar5;
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 8))();
          }
          local_50 = (undefined4)plVar5[1];
          switch(*(undefined1 *)(lVar9 + 0x10)) {
          case 0:
            uVar6 = *(ulonglong *)(lVar9 + 0x28);
            local_88 = 0;
            goto LAB_1467e3382;
          default:
            local_88 = 4;
            local_78 = *(longlong **)(lVar9 + 0x18);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 8))();
            }
            local_70 = *(undefined4 *)(lVar9 + 0x20);
            break;
          case 2:
            uStack_80 = *(undefined4 *)(lVar9 + 0x30);
            local_88 = 2;
            local_78 = (longlong *)0x0;
            local_70 = 0;
            break;
          case 3:
            local_88 = 3;
            local_78 = (longlong *)0x0;
            local_70 = 0;
            uStack_80 = (undefined4)*(undefined8 *)(lVar9 + 0x38);
            uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x38) >> 0x20);
            break;
          case 5:
            uVar6 = (ulonglong)*(byte *)(lVar9 + 0x40);
            local_88 = 5;
LAB_1467e3382:
            local_70 = 0;
            local_78 = (longlong *)0x0;
            uStack_80 = (undefined4)uVar6;
            uStack_7c = (undefined4)(uVar6 >> 0x20);
            local_60 = uStack_80;
            uStack_5c = uStack_7c;
            goto LAB_1467e33e1;
          }
          local_60 = uStack_80;
          uStack_5c = uStack_7c;
LAB_1467e33e1:
          uStack_80 = local_60;
          uStack_7c = uStack_5c;
          local_68 = local_88;
          FUN_1467df774(&local_58,&local_78);
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          FUN_1467e355c(&local_98,lVar9,&local_68);
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          lVar9 = lVar9 + 0x48;
          lVar7 = lVar7 + -0x48;
        } while (lVar7 != 0);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_1467f06ca(param_3,iVar2);
  }
  lVar9 = *param_3;
  plVar4 = (longlong *)*param_2;
  local_68 = SUB84(plVar4,0);
  uStack_64 = (undefined4)((ulonglong)plVar4 >> 0x20);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  lVar8 = (longlong)iVar2 * 0x30;
  lVar7 = lVar9 + lVar8;
  local_60 = (undefined4)param_2[1];
  FUN_14023423e(lVar7);
  *(undefined8 *)(lVar9 + 0x10 + lVar8) = uVar3;
  *(longlong **)(lVar9 + 0x18 + lVar8) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(longlong *)(lVar7 + 0x20) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar7 + 0x28) = (undefined4)uStack_90;
  *(undefined4 *)(lVar7 + 0x2c) = uStack_90._4_4_;
  uStack_90 = 0;
  if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
  }
  if (plVar5 != (longlong *)0x0) {
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
  FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e355c FUN_1467e355c body=394 status=ok
// SIG undefined FUN_1467e355c(void)

longlong FUN_1467e355c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *_Str2;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar3 = (ulonglong)uVar7 * 0x30;
      pwVar4 = L"";
      if (*(int *)(lVar9 + 8 + lVar3) != 0) {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(pwVar4,_Str2);
      uVar5 = (uint)uVar6;
      if (iVar2 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar3 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = *(wchar_t **)(lVar9 + lVar3);
      }
      iVar2 = wcscmp(_Str2,pwVar4);
      if (-1 < iVar2) {
        lVar9 = lVar9 + lVar3;
        FUN_14010f8af(lVar9,1);
        goto LAB_1467e3691;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_140234572(param_1,uVar1);
    lVar9 = *param_1;
  }
  lVar3 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar3 + 0x30),(void *)(lVar9 + lVar3),(ulonglong)(uVar1 - uVar8) * 0x30);
  lVar9 = lVar3 + *param_1;
LAB_1467e3691:
  FUN_1467f0b72(lVar9,0,param_2,param_3);
  return lVar9 + 0x10;
}



// FUNCTION 1467e36e6 FUN_1467e36e6 body=106 status=ok
// SIG undefined FUN_1467e36e6(void)

undefined8 FUN_1467e36e6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_1467d1848(param_1 + 0x20,param_2 + 0x20);
  if (cVar1 != '\0') {
    lVar2 = FUN_1467cf242();
    lVar4 = param_1 + 0x40;
    if (*(char *)(param_1 + 0x58) == '\0') {
      lVar4 = lVar2;
    }
    lVar3 = FUN_1467cf242();
    lVar2 = param_2 + 0x40;
    if (*(char *)(param_2 + 0x58) == '\0') {
      lVar2 = lVar3;
    }
    cVar1 = FUN_1467cf206(lVar4,lVar2);
    if (cVar1 != '\0') {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x60) >> 8),
                      *(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60));
    }
  }
  return 0;
}



// FUNCTION 1467e3750 FUN_1467e3750 body=589 status=ok
// SIG undefined FUN_1467e3750(void)

void FUN_1467e3750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  void *_Src;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar6 = *(longlong *)(*param_2 + 8);
  }
  FUN_1467d16da(param_2,param_1 + 0x20);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  local_31 = *(byte *)(param_1 + 0x58);
  FUN_1456bb002(*param_2,&local_31);
  if ((*(byte *)(lVar6 + 0x28) & 1) != 0) {
    if ((local_31 & 1) == 0) {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      FUN_141366fce(&local_58);
      if (&local_58 != puVar1) {
        *(undefined8 *)(param_1 + 0x50) = local_48;
        *(undefined4 *)puVar1 = (undefined4)local_58;
        *(undefined4 *)(param_1 + 0x44) = local_58._4_4_;
        *(int *)(param_1 + 0x48) = (int)uStack_50;
        *(undefined4 *)(param_1 + 0x4c) = uStack_50._4_4_;
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
    }
  }
  if ((local_31 & 1) != 0) {
    FUN_1467cf105(param_2,puVar1);
  }
  if ((*(byte *)(lVar6 + 0x28) & 4) == 0) {
    if ((*(byte *)(lVar6 + 0x28) & 1) == 0) goto LAB_1467e38b0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_58);
    if (1 < (int)uStack_50) {
      lVar6 = FUN_140d5712e();
      FUN_14588f6d2(*(undefined8 *)(lVar6 + 0x20),&local_68,&local_58,0);
      plVar2 = local_60;
      *(undefined8 *)(param_1 + 0x60) = local_68;
      local_68 = 0;
      plVar5 = *(longlong **)(param_1 + 0x68);
      if (local_60 != plVar5) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x68) = plVar2;
        if (plVar5 == (longlong *)0x0) goto LAB_1467e38a6;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 == 0) {
      local_58 = (void *)0x0;
      uStack_50 = 0;
    }
    else {
      local_58 = (void *)0x0;
      uVar4 = *(uint *)(lVar6 + 0x30);
      _Src = *(void **)(lVar6 + 0x28);
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if ((longlong)(int)uVar4 == 0) {
        uStack_50 = (ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&local_58,uVar4,0);
        memcpy(local_58,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_58);
  }
LAB_1467e38a6:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1467e38b0:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e399e FUN_1467e399e body=329 status=ok
// SIG undefined FUN_1467e399e(void)

undefined8 * FUN_1467e399e(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined4 *)(param_3 + 0x8c);
  if (*(char *)(param_1 + 0x58) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x40);
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    uVar2 = (ulonglong)param_4 * *(longlong *)(param_1 + 0x28);
    *param_2 = 0;
    param_2[1] = 0;
    local_18 = *(undefined8 *)(puVar4 + 4);
    local_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    uStack_1c = puVar4[3];
    uVar3 = -uVar2;
    if ((longlong)-uVar2 < 0) {
      uVar3 = uVar2;
    }
    uVar2 = uVar2 >> 0x3f;
    break;
  case 1:
    uVar3 = (ulonglong)param_4 * *(longlong *)(param_1 + 0x28);
    *param_2 = 0;
    param_2[1] = 0;
    local_18 = *(undefined8 *)(puVar4 + 4);
    local_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    uStack_1c = puVar4[3];
    uVar2 = 0;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x28);
    *param_2 = 0;
    param_2[1] = 0;
    local_18 = *(undefined8 *)(puVar4 + 4);
    local_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    uStack_1c = puVar4[3];
    uVar5 = SUB84((double)((float)(int)param_4 * fVar1),0);
    goto LAB_1467e3a72;
  case 3:
    uVar5 = SUB84((double)(int)param_4 * *(double *)(param_1 + 0x28),0);
    *param_2 = 0;
    param_2[1] = 0;
    local_18 = *(undefined8 *)(puVar4 + 4);
    local_28 = *puVar4;
    uStack_24 = puVar4[1];
    uStack_20 = puVar4[2];
    uStack_1c = puVar4[3];
LAB_1467e3a72:
    FUN_140235a22(uVar5,param_3,&local_28,param_2);
    goto LAB_1467e3ab3;
  default:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  local_38 = param_2;
  FUN_14010d0dd(uVar2,uVar3);
LAB_1467e3ab3:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467e3aea FUN_1467e3aea body=120 status=ok
// SIG undefined FUN_1467e3aea(void)

undefined8 FUN_1467e3aea(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = FUN_140d5712e();
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar5 = (**(code **)(*(longlong *)*puVar6 + 0x80))();
  FUN_1467e399e(param_1,param_2,uVar5,1);
  return param_2;
}



// FUNCTION 1467e3b62 FUN_1467e3b62 body=114 status=ok
// SIG undefined FUN_1467e3b62(void)

undefined8 FUN_1467e3b62(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FUN_140d5712e();
  puVar3 = *(undefined8 **)(lVar5 + 0x78);
  plVar4 = *(longlong **)(lVar5 + 0x80);
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
  uVar6 = (**(code **)(*(longlong *)*puVar3 + 0x80))();
  FUN_1467e399e(param_1,param_2,uVar6,1);
  return param_2;
}



// FUNCTION 1467e3bda FUN_1467e3bda body=162 status=ok
// SIG undefined FUN_1467e3bda(void)

void FUN_1467e3bda(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844dd0) {
    FUN_144b3d300(&DAT_14c844dd0);
    if (DAT_14c844dd0 == -1) {
      FUN_140056680(&DAT_14c844dc0,L"LOCGEN_NUMBER");
      atexit((_func_5014 *)&LAB_142762af4);
      _Init_thread_footer(&DAT_14c844dd0);
    }
  }
  lVar1 = FUN_1467e0d8b(param_2,&DAT_14c844dc0,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1467e3c7c FUN_1467e3c7c body=122 status=ok
// SIG undefined FUN_1467e3c7c(void)

undefined8 FUN_1467e3c7c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined1 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x60);
  local_10 = *(longlong *)(param_1 + 0x68);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_28 = &local_18;
  local_20 = param_3;
  FUN_1467e0b00(param_2,L"LOCGEN_NUMBER",param_1 + 0x20,param_1 + 0x40);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e3cf8 FUN_1467e3cf8 body=264 status=ok
// SIG undefined FUN_1467e3cf8(void)

undefined8 FUN_1467e3cf8(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  byte local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x2c);
  local_48 = *(longlong **)(param_1 + 0x30);
  if (local_48 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  else {
    (**(code **)(*local_48 + 8))();
    local_40 = *(undefined4 *)(param_1 + 0x38);
  }
  local_20[0] = *(byte *)(param_1 + 0x58);
  if (local_20[0] == 1) {
    local_28 = *(undefined8 *)(param_1 + 0x50);
    local_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_30 = *(undefined8 *)(param_1 + 0x48);
  }
  pbVar3 = local_20;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 8) = local_58;
  *(undefined4 *)(param_3 + 0xc) = uStack_54;
  *(undefined4 *)(param_3 + 0x10) = uStack_50;
  *(undefined4 *)(param_3 + 0x14) = uStack_4c;
  FUN_1467df774(param_3 + 0x18);
  if (local_60 == param_3) {
    bVar2 = local_20[0] & 1;
joined_r0x0001467e3df6:
    if (bVar2 == 0) goto LAB_1467e3dc0;
  }
  else {
    pbVar1 = param_3 + 0x40;
    if ((local_20[0] & 1) == 0) {
      bVar2 = *pbVar1;
      pbVar3 = pbVar1;
      goto joined_r0x0001467e3df6;
    }
    *(undefined8 *)(param_3 + 0x38) = local_28;
    *(undefined4 *)(param_3 + 0x28) = (undefined4)local_38;
    *(undefined4 *)(param_3 + 0x2c) = local_38._4_4_;
    *(undefined4 *)(param_3 + 0x30) = (undefined4)uStack_30;
    *(undefined4 *)(param_3 + 0x34) = uStack_30._4_4_;
    *pbVar1 = 1;
  }
  *pbVar3 = 0;
LAB_1467e3dc0:
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e3e02 FUN_1467e3e02 body=280 status=ok
// SIG undefined FUN_1467e3e02(void)

undefined8 *
FUN_1467e3e02(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_5;
  local_60 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  if (*(longlong *)(param_3 + 4) == 0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    FUN_14023423e(&local_48,param_3 + 4);
  }
  local_78 = &local_68;
  FUN_140234adc(param_1,param_2,&local_58,param_4);
  *param_1 = &PTR_FUN_149e19850;
  plVar3 = *(longlong **)(param_3 + 4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_3 + 4) = 0;
    param_3[6] = 0;
  }
  plVar3 = (longlong *)param_5[1];
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



// FUNCTION 1467e3f1c FUN_1467e3f1c body=119 status=ok
// SIG undefined FUN_1467e3f1c(void)

undefined8 FUN_1467e3f1c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_140d5712e();
  lVar6 = *(longlong *)(param_1 + 0x60);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar5 = FUN_1467c507c(lVar6);
  FUN_1467e399e(param_1,param_2,uVar5,100);
  return param_2;
}



// FUNCTION 1467e3f94 FUN_1467e3f94 body=113 status=ok
// SIG undefined FUN_1467e3f94(void)

undefined8 FUN_1467e3f94(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140d5712e();
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  plVar3 = *(longlong **)(lVar4 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  uVar5 = FUN_1467c507c(uVar5);
  FUN_1467e399e(param_1,param_2,uVar5,100);
  return param_2;
}



// FUNCTION 1467e400c FUN_1467e400c body=162 status=ok
// SIG undefined FUN_1467e400c(void)

void FUN_1467e400c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844de8) {
    FUN_144b3d300(&DAT_14c844de8);
    if (DAT_14c844de8 == -1) {
      FUN_140056680(&DAT_14c844dd8,L"LOCGEN_PERCENT");
      atexit((_func_5014 *)&LAB_142762b05);
      _Init_thread_footer(&DAT_14c844de8);
    }
  }
  lVar1 = FUN_1467e0d8b(param_2,&DAT_14c844dd8,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1467e40ae FUN_1467e40ae body=122 status=ok
// SIG undefined FUN_1467e40ae(void)

undefined8 FUN_1467e40ae(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined1 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_1 + 0x60);
  local_10 = *(longlong *)(param_1 + 0x68);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_28 = &local_18;
  local_20 = param_3;
  FUN_1467e0b00(param_2,L"LOCGEN_PERCENT",param_1 + 0x20,param_1 + 0x40);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e412a FUN_1467e412a body=264 status=ok
// SIG undefined FUN_1467e412a(void)

undefined8 FUN_1467e412a(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  byte local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 1;
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x2c);
  local_48 = *(longlong **)(param_1 + 0x30);
  if (local_48 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  else {
    (**(code **)(*local_48 + 8))();
    local_40 = *(undefined4 *)(param_1 + 0x38);
  }
  local_20[0] = *(byte *)(param_1 + 0x58);
  if (local_20[0] == 1) {
    local_28 = *(undefined8 *)(param_1 + 0x50);
    local_38 = *(undefined8 *)(param_1 + 0x40);
    uStack_30 = *(undefined8 *)(param_1 + 0x48);
  }
  pbVar3 = local_20;
  *param_3 = 1;
  *(undefined4 *)(param_3 + 8) = local_58;
  *(undefined4 *)(param_3 + 0xc) = uStack_54;
  *(undefined4 *)(param_3 + 0x10) = uStack_50;
  *(undefined4 *)(param_3 + 0x14) = uStack_4c;
  FUN_1467df774(param_3 + 0x18);
  if (local_60 == param_3) {
    bVar2 = local_20[0] & 1;
joined_r0x0001467e4228:
    if (bVar2 == 0) goto LAB_1467e41f2;
  }
  else {
    pbVar1 = param_3 + 0x40;
    if ((local_20[0] & 1) == 0) {
      bVar2 = *pbVar1;
      pbVar3 = pbVar1;
      goto joined_r0x0001467e4228;
    }
    *(undefined8 *)(param_3 + 0x38) = local_28;
    *(undefined4 *)(param_3 + 0x28) = (undefined4)local_38;
    *(undefined4 *)(param_3 + 0x2c) = local_38._4_4_;
    *(undefined4 *)(param_3 + 0x30) = (undefined4)uStack_30;
    *(undefined4 *)(param_3 + 0x34) = uStack_30._4_4_;
    *pbVar1 = 1;
  }
  *pbVar3 = 0;
LAB_1467e41f2:
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e4234 FUN_1467e4234 body=335 status=ok
// SIG undefined FUN_1467e4234(void)

undefined8 *
FUN_1467e4234(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_6;
  local_70 = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  if (*(longlong *)(param_3 + 4) == 0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    FUN_14023423e(&local_58,param_3 + 4);
  }
  local_88 = &local_78;
  FUN_140234adc(param_1,param_2,&local_68,param_5);
  *param_1 = &PTR_FUN_149e19910;
  param_1[0xe] = 0;
  param_1[0xe] = *param_4;
  *param_4 = 0;
  *(int *)(param_1 + 0xf) = (int)param_4[1];
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  plVar3 = *(longlong **)(param_3 + 4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_3 + 4) = 0;
    param_3[6] = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_6[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e4384 FUN_1467e4384 body=123 status=ok
// SIG undefined FUN_1467e4384(void)

undefined8 FUN_1467e4384(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_140d5712e();
  lVar6 = *(longlong *)(param_1 + 0x60);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar5 = FUN_1467c508a(lVar6,param_1 + 0x70);
  FUN_1467e399e(param_1,param_2,uVar5,1);
  return param_2;
}



// FUNCTION 1467e4400 FUN_1467e4400 body=117 status=ok
// SIG undefined FUN_1467e4400(void)

undefined8 FUN_1467e4400(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140d5712e();
  uVar5 = *(undefined8 *)(lVar4 + 0x78);
  plVar3 = *(longlong **)(lVar4 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  uVar5 = FUN_1467c508a(uVar5,param_1 + 0x70);
  FUN_1467e399e(param_1,param_2,uVar5,1);
  return param_2;
}



// FUNCTION 1467e4476 FUN_1467e4476 body=54 status=ok
// SIG undefined FUN_1467e4476(void)

void FUN_1467e4476(longlong param_1,longlong *param_2)

{
  if (0x184 < *(int *)(*(longlong *)(*param_2 + 8) + 0x40)) {
    FUN_14021219d(*(longlong *)(*param_2 + 8),param_1 + 0x70);
  }
  FUN_1467e3750(param_1,param_2);
  return;
}



// FUNCTION 1467e44ac FUN_1467e44ac body=938 status=ok
// SIG undefined FUN_1467e44ac(void)

short * FUN_1467e44ac(longlong param_1,wchar_t *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  double dVar3;
  wchar_t wVar4;
  short sVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  undefined8 uVar11;
  short *psVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = FUN_140d5712e();
  lVar10 = *(longlong *)(param_1 + 0x60);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(lVar8 + 0x38);
    plVar13 = *(longlong **)(lVar8 + 0x40);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar13 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  iVar7 = wcsncmp(param_2,L"LOCGEN_CURRENCY",0xf);
  if (iVar7 == 0) {
    for (param_2 = param_2 + 0xf; (wVar4 = *param_2, wVar4 == L' ' || (wVar4 == L'\t'));
        param_2 = param_2 + 1) {
    }
    if (param_2 != (wchar_t *)0x0 && wVar4 == L'(') {
      do {
        do {
          param_2 = param_2 + 1;
        } while (*param_2 == L' ');
      } while (*param_2 == L'\t');
      if (param_2 != (wchar_t *)0x0) {
        puVar1 = (undefined4 *)(param_1 + 0x20);
        psVar9 = (short *)FUN_1467dfa8b(param_2,puVar1);
        if (psVar9 != (short *)0x0) {
          for (; (sVar5 = *psVar9, sVar5 == 0x20 || (sVar5 == 9)); psVar9 = psVar9 + 1) {
          }
          if (psVar9 != (short *)0x0 && sVar5 == 0x2c) {
            do {
              do {
                psVar9 = psVar9 + 1;
              } while (*psVar9 == 0x20);
            } while (*psVar9 == 9);
            if (psVar9 != (short *)0x0) {
              psVar9 = (short *)FUN_140c9875d(psVar9,param_1 + 0x70);
              if (psVar9 != (short *)0x0) {
                for (; (sVar5 = *psVar9, sVar5 == 0x20 || (sVar5 == 9)); psVar9 = psVar9 + 1) {
                }
                if (sVar5 == 0x2c && psVar9 != (short *)0x0) {
                  local_88 = 0;
                  uStack_80 = 0;
                  do {
                    do {
                      psVar9 = psVar9 + 1;
                    } while (*psVar9 == 0x20);
                  } while (*psVar9 == 9);
                  if ((psVar9 == (short *)0x0) ||
                     (psVar9 = (short *)FUN_140c9875d(psVar9,&local_88), psVar9 == (short *)0x0)) {
switchD_1467e4769_default:
                    psVar12 = (short *)0x0;
                  }
                  else {
                    if ((int)uStack_80 < 2) {
                      local_68._0_4_ = 0;
                      local_68._4_4_ = 0;
                      plVar13 = (longlong *)0x0;
                      uVar11 = 0;
                    }
                    else {
                      lVar8 = FUN_140d5712e();
                      FUN_14588f6d2(*(undefined8 *)(lVar8 + 0x20),&local_70,&local_88,0);
                      uVar11 = CONCAT44(uStack_6c,local_70);
                      plVar13 = (longlong *)CONCAT44(local_68._4_4_,(undefined4)local_68);
                    }
                    *(undefined8 *)(param_1 + 0x60) = uVar11;
                    local_70 = 0;
                    uStack_6c = 0;
                    plVar6 = *(longlong **)(param_1 + 0x68);
                    if (plVar13 == plVar6) {
LAB_1467e46ec:
                      if (plVar13 != (longlong *)0x0) {
                        LOCK();
                        plVar6 = plVar13 + 1;
                        *(int *)plVar6 = (int)*plVar6 + -1;
                        UNLOCK();
                        if ((int)*plVar6 == 0) {
                          (**(code **)*plVar13)(plVar13);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar13 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar13 + 0x10))(plVar13);
                          }
                        }
                      }
                    }
                    else {
                      local_68._0_4_ = 0;
                      local_68._4_4_ = 0;
                      *(longlong **)(param_1 + 0x68) = plVar13;
                      if (plVar6 != (longlong *)0x0) {
                        LOCK();
                        plVar13 = plVar6 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          (**(code **)*plVar6)(plVar6);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar6 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar6 + 0x10))(plVar6);
                          }
                        }
                        plVar13 = (longlong *)CONCAT44(local_68._4_4_,(undefined4)local_68);
                        goto LAB_1467e46ec;
                      }
                    }
                    while( true ) {
                      sVar5 = *psVar9;
                      if ((sVar5 != 0x20) && (sVar5 != 9)) break;
                      psVar9 = psVar9 + 1;
                    }
                    psVar12 = (short *)0x0;
                    if (sVar5 != 0x29) {
                      psVar9 = psVar12;
                    }
                    if (psVar9 != (short *)0x0) {
                      switch(*puVar1) {
                      case 0:
                        dVar3 = (double)*(longlong *)(param_1 + 0x28);
                        break;
                      case 1:
                        dVar3 = ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x28)) -
                                4503599627370496.0) +
                                ((double)CONCAT44(0x45300000,
                                                  (int)((ulonglong)*(undefined8 *)(param_1 + 0x28)
                                                       >> 0x20)) - 1.9342813113834067e+25);
                        break;
                      case 2:
                        dVar3 = (double)*(float *)(param_1 + 0x28);
                        break;
                      case 3:
                        dVar3 = *(double *)(param_1 + 0x28);
                        break;
                      default:
                        goto switchD_1467e4769_default;
                      }
                      lVar10 = FUN_1467c508a(lVar10,param_1 + 0x70);
                      uVar11 = FUN_1467c59e8(*(undefined4 *)(lVar10 + 0xa0));
                      auVar14._8_4_ = (int)((ulonglong)uVar11 >> 0x20);
                      auVar14._0_8_ = uVar11;
                      auVar14._12_4_ = 0x45300000;
                      dVar3 = dVar3 / (((double)CONCAT44(0x43300000,(int)uVar11) -
                                       4503599627370496.0) +
                                      (auVar14._8_8_ - 1.9342813113834067e+25));
                      local_70 = 3;
                      local_60 = (longlong *)0x0;
                      local_58 = 0;
                      local_68._0_4_ = SUB84(dVar3,0);
                      local_68._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
                      *puVar1 = 3;
                      *(ulonglong *)(param_1 + 0x24) = CONCAT44((undefined4)local_68,uStack_6c);
                      *(undefined4 *)(param_1 + 0x2c) = local_68._4_4_;
                      local_68 = dVar3;
                      FUN_1467df774(param_1 + 0x30,&local_60);
                      if (local_60 != (longlong *)0x0) {
                        (**(code **)(*local_60 + 0x10))();
                      }
                      psVar12 = psVar9 + 1;
                      *(undefined4 *)(param_1 + 0xc) = 0;
                    }
                  }
                  if (local_88 != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1467e4501;
                }
              }
            }
          }
        }
      }
    }
  }
  psVar12 = (short *)0x0;
LAB_1467e4501:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar12;
}



// FUNCTION 1467e4858 FUN_1467e4858 body=536 status=ok
// SIG undefined FUN_1467e4858(void)

undefined8 FUN_1467e4858(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = FUN_140d5712e();
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar6 + 0x38);
    plVar4 = *(longlong **)(lVar6 + 0x40);
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
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    dVar3 = (double)*(longlong *)(param_1 + 0x28);
    break;
  case 1:
    dVar3 = ((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x28)) - 4503599627370496.0)
            + ((double)CONCAT44(0x45300000,(int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20)
                               ) - 1.9342813113834067e+25);
    break;
  case 2:
    dVar3 = (double)*(float *)(param_1 + 0x28);
    break;
  case 3:
    dVar3 = *(double *)(param_1 + 0x28);
    break;
  default:
    dVar3 = 0.0;
  }
  lVar7 = FUN_1467c508a(lVar7,param_1 + 0x70);
  uVar8 = FUN_1467c59e8(*(undefined4 *)(lVar7 + 0xa0));
  auVar9._8_4_ = (int)((ulonglong)uVar8 >> 0x20);
  auVar9._0_8_ = uVar8;
  auVar9._12_4_ = 0x45300000;
  FUN_1400020e8(param_2,L"LOCGEN_CURRENCY(",0x10);
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = (longlong)
             ((((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
              (auVar9._8_8_ - 1.9342813113834067e+25)) * dVar3);
  FUN_1467d18b0(&local_70,param_2,param_3);
  FUN_1400020e8(param_2,&DAT_149e1a408,3);
  FUN_1467ce734(param_1 + 0x70,&local_70,0);
  iVar5 = (int)local_68 + -1;
  if ((int)local_68 == 0) {
    iVar5 = 0;
  }
  FUN_1400020e8(param_2,CONCAT44(uStack_6c,local_70),iVar5);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,L"\", \"",4);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1467ce734(*(longlong *)(param_1 + 0x60) + 0x28,&local_70,0);
    iVar5 = (int)local_68 + -1;
    if ((int)local_68 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_2,CONCAT44(uStack_6c,local_70),iVar5);
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400020e8(param_2,&DAT_149e192fc,2);
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1467e4a72 FUN_1467e4a72 body=248 status=ok
// SIG undefined FUN_1467e4a72(void)

undefined8 *
FUN_1467e4a72(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0();
  *param_1 = &PTR_FUN_149e199d0;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = 0;
  param_1[6] = *param_5;
  *param_5 = 0;
  *(int *)(param_1 + 7) = (int)param_5[1];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  if (*(int *)(param_1 + 5) == 5) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_6[1];
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
  return param_1;
}



// FUNCTION 1467e4b6a FUN_1467e4b6a body=546 status=ok
// SIG undefined FUN_1467e4b6a(void)

void FUN_1467e4b6a(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  ulonglong uStack_40;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar7 = *(longlong *)(*param_2 + 8);
  }
  FUN_1408383eb(lVar7,param_1 + 0x20);
  local_29 = *(char *)(param_1 + 0x28);
  plVar5 = *(longlong **)(*param_2 + 8);
  puVar6 = (ulonglong *)plVar5[1];
  pcVar1 = (char *)*puVar6 + 1;
  if ((char *)puVar6[1] < pcVar1) {
    (**(code **)(*plVar5 + 0x170))(plVar5,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar6;
    *puVar6 = (ulonglong)pcVar1;
  }
  *(int *)(param_1 + 0x28) = (int)local_29;
  if (0x1a5 < *(int *)(lVar7 + 0x40)) {
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x30);
  }
  if ((*(byte *)(lVar7 + 0x28) & 4) == 0) {
    if ((*(byte *)(lVar7 + 0x28) & 1) == 0) goto LAB_1467e4cb4;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
    if (1 < (int)uStack_40) {
      lVar7 = FUN_140d5712e();
      FUN_14588f6d2(*(undefined8 *)(lVar7 + 0x20),&local_58,&local_48,0);
      plVar2 = local_50;
      *(undefined8 *)(param_1 + 0x40) = local_58;
      local_58 = 0;
      plVar5 = *(longlong **)(param_1 + 0x48);
      if (local_50 != plVar5) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar2;
        if (plVar5 == (longlong *)0x0) goto LAB_1467e4caa;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
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
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 == 0) {
      local_48 = (void *)0x0;
      uStack_40 = 0;
    }
    else {
      local_48 = (void *)0x0;
      uVar4 = *(uint *)(lVar7 + 0x30);
      _Src = *(void **)(lVar7 + 0x28);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
      if ((longlong)(int)uVar4 == 0) {
        uStack_40 = (ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&local_48,uVar4,0);
        memcpy(local_48,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
  }
LAB_1467e4caa:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1467e4cb4:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e4d8e FUN_1467e4d8e body=182 status=ok
// SIG undefined FUN_1467e4d8e(void)

void FUN_1467e4d8e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844e00) {
    FUN_144b3d300(&DAT_14c844e00);
    if (DAT_14c844e00 == -1) {
      FUN_140056680(&DAT_14c844df0,L"LOCGEN_DATE");
      atexit((_func_5014 *)&LAB_142762b16);
      _Init_thread_footer(&DAT_14c844e00);
    }
  }
  lVar1 = FUN_1467e152f(param_2,&DAT_14c844df0,param_1 + 0x20,param_1 + 0x28,0,0,param_1 + 0x30,
                        param_1 + 0x40);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1467e4e44 FUN_1467e4e44 body=139 status=ok
// SIG undefined FUN_1467e4e44(void)

undefined8 FUN_1467e4e44(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_1 + 0x40);
  local_10 = *(longlong *)(param_1 + 0x48);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_1 + 0x30;
  local_30 = &local_18;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = param_3;
  FUN_1467e10ec(param_2,L"LOCGEN_DATE",param_1 + 0x20,param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e4ed0 FUN_1467e4ed0 body=144 status=ok
// SIG undefined FUN_1467e4ed0(void)

undefined8 FUN_1467e4ed0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if ((*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20)) &&
     (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_2 + 0x38)) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x30) + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_1467e4f53;
LAB_1467e4f1c:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_1467e4f1c;
        }
        if (uVar6 != uVar3) goto LAB_1467e4f45;
      }
    }
    else if (*(int *)(param_2 + 0x38) + iVar1 != 1) goto LAB_1467e4f45;
LAB_1467e4f53:
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),
                     *(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40));
  }
  else {
LAB_1467e4f45:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1467e4f60 FUN_1467e4f60 body=118 status=ok
// SIG undefined FUN_1467e4f60(void)

undefined8 FUN_1467e4f60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140d5712e();
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  FUN_1467c93d6(param_2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,lVar5);
  return param_2;
}



// FUNCTION 1467e4fd6 FUN_1467e4fd6 body=110 status=ok
// SIG undefined FUN_1467e4fd6(void)

undefined8 FUN_1467e4fd6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar5 + 0x78);
  plVar4 = *(longlong **)(lVar5 + 0x80);
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
  FUN_1467c93d6(param_2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,uVar3);
  return param_2;
}



// FUNCTION 1467e5044 FUN_1467e5044 body=248 status=ok
// SIG undefined FUN_1467e5044(void)

undefined8 *
FUN_1467e5044(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0();
  *param_1 = &PTR_FUN_149e19a90;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  param_1[6] = 0;
  param_1[6] = *param_5;
  *param_5 = 0;
  *(int *)(param_1 + 7) = (int)param_5[1];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_5 + 0xc);
  param_5[1] = 0;
  param_1[8] = *param_6;
  param_1[9] = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  if (*(int *)(param_1 + 5) == 5) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_6[1];
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
  return param_1;
}



// FUNCTION 1467e513c FUN_1467e513c body=537 status=ok
// SIG undefined FUN_1467e513c(void)

void FUN_1467e513c(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  ulonglong uStack_40;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar7 = *(longlong *)(*param_2 + 8);
  }
  FUN_1408383eb(lVar7,param_1 + 0x20);
  local_29 = *(char *)(param_1 + 0x28);
  plVar5 = *(longlong **)(*param_2 + 8);
  puVar6 = (ulonglong *)plVar5[1];
  pcVar1 = (char *)*puVar6 + 1;
  if ((char *)puVar6[1] < pcVar1) {
    (**(code **)(*plVar5 + 0x170))(plVar5,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar6;
    *puVar6 = (ulonglong)pcVar1;
  }
  *(int *)(param_1 + 0x28) = (int)local_29;
  FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x30);
  if ((*(byte *)(lVar7 + 0x28) & 4) == 0) {
    if ((*(byte *)(lVar7 + 0x28) & 1) == 0) goto LAB_1467e527d;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
    if (1 < (int)uStack_40) {
      lVar7 = FUN_140d5712e();
      FUN_14588f6d2(*(undefined8 *)(lVar7 + 0x20),&local_58,&local_48,0);
      plVar2 = local_50;
      *(undefined8 *)(param_1 + 0x40) = local_58;
      local_58 = 0;
      plVar5 = *(longlong **)(param_1 + 0x48);
      if (local_50 != plVar5) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar2;
        if (plVar5 == (longlong *)0x0) goto LAB_1467e5273;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
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
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 == 0) {
      local_48 = (void *)0x0;
      uStack_40 = 0;
    }
    else {
      local_48 = (void *)0x0;
      uVar4 = *(uint *)(lVar7 + 0x30);
      _Src = *(void **)(lVar7 + 0x28);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
      if ((longlong)(int)uVar4 == 0) {
        uStack_40 = (ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&local_48,uVar4,0);
        memcpy(local_48,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
  }
LAB_1467e5273:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1467e527d:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e5356 FUN_1467e5356 body=191 status=ok
// SIG undefined FUN_1467e5356(void)

void FUN_1467e5356(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844e18) {
    FUN_144b3d300(&DAT_14c844e18);
    if (DAT_14c844e18 == -1) {
      FUN_140056680(&DAT_14c844e08,L"LOCGEN_TIME");
      atexit((_func_5014 *)&LAB_142762b27);
      _Init_thread_footer(&DAT_14c844e18);
    }
  }
  lVar1 = FUN_1467e152f(param_2,&DAT_14c844e08,param_1 + 0x20,0,param_1 + 0x28,0,param_1 + 0x30,
                        param_1 + 0x40);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1467e5416 FUN_1467e5416 body=148 status=ok
// SIG undefined FUN_1467e5416(void)

undefined8 FUN_1467e5416(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_1 + 0x40);
  local_10 = *(longlong *)(param_1 + 0x48);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_1 + 0x30;
  local_48 = param_1 + 0x28;
  local_30 = &local_18;
  local_40 = 0;
  local_28 = param_3;
  FUN_1467e10ec(param_2,L"LOCGEN_TIME",param_1 + 0x20,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e54ac FUN_1467e54ac body=144 status=ok
// SIG undefined FUN_1467e54ac(void)

undefined8 FUN_1467e54ac(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if ((*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20)) &&
     (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_2 + 0x38)) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x30) + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_1467e552f;
LAB_1467e54f8:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_1467e54f8;
        }
        if (uVar6 != uVar3) goto LAB_1467e5521;
      }
    }
    else if (*(int *)(param_2 + 0x38) + iVar1 != 1) goto LAB_1467e5521;
LAB_1467e552f:
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),
                     *(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40));
  }
  else {
LAB_1467e5521:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1467e553c FUN_1467e553c body=118 status=ok
// SIG undefined FUN_1467e553c(void)

undefined8 FUN_1467e553c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140d5712e();
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  FUN_1467c94cc(param_2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,lVar5);
  return param_2;
}



// FUNCTION 1467e55b2 FUN_1467e55b2 body=110 status=ok
// SIG undefined FUN_1467e55b2(void)

undefined8 FUN_1467e55b2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar5 + 0x78);
  plVar4 = *(longlong **)(lVar5 + 0x80);
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
  FUN_1467c94cc(param_2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,uVar3);
  return param_2;
}



// FUNCTION 1467e5620 FUN_1467e5620 body=277 status=ok
// SIG undefined FUN_1467e5620(void)

undefined8 *
FUN_1467e5620(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,longlong *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0();
  *param_1 = &PTR_FUN_149e19b50;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_5;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[8] = *param_6;
  *param_6 = 0;
  *(int *)(param_1 + 9) = (int)param_6[1];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  param_1[10] = *param_7;
  param_1[0xb] = param_7[1];
  *param_7 = 0;
  param_7[1] = 0;
  if (*(int *)(param_1 + 5) == 5) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x2c) == 5) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_7[1];
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
  return param_1;
}



// FUNCTION 1467e5736 FUN_1467e5736 body=634 status=ok
// SIG undefined FUN_1467e5736(void)

void FUN_1467e5736(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  void *local_48;
  ulonglong uStack_40;
  char local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    lVar7 = *(longlong *)(*param_2 + 8);
  }
  FUN_1408383eb(lVar7,param_1 + 0x20);
  local_29 = *(char *)(param_1 + 0x28);
  plVar5 = *(longlong **)(*param_2 + 8);
  puVar6 = (ulonglong *)plVar5[1];
  pcVar1 = (char *)*puVar6 + 1;
  if ((char *)puVar6[1] < pcVar1) {
    (**(code **)(*plVar5 + 0x170))(plVar5,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar6;
    *puVar6 = (ulonglong)pcVar1;
  }
  *(int *)(param_1 + 0x28) = (int)local_29;
  local_2a = *(char *)(param_1 + 0x2c);
  plVar5 = *(longlong **)(*param_2 + 8);
  puVar6 = (ulonglong *)plVar5[1];
  pcVar1 = (char *)*puVar6 + 1;
  if ((char *)puVar6[1] < pcVar1) {
    (**(code **)(*plVar5 + 0x170))(plVar5,&local_2a,1);
  }
  else {
    local_2a = *(char *)*puVar6;
    *puVar6 = (ulonglong)pcVar1;
  }
  *(int *)(param_1 + 0x2c) = (int)local_2a;
  if (*(int *)(param_1 + 0x28) == 5) {
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x30);
  }
  FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x40);
  if ((*(byte *)(lVar7 + 0x28) & 4) == 0) {
    if ((*(byte *)(lVar7 + 0x28) & 1) == 0) goto LAB_1467e58d8;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
    if (1 < (int)uStack_40) {
      lVar7 = FUN_140d5712e();
      FUN_14588f6d2(*(undefined8 *)(lVar7 + 0x20),&local_58,&local_48,0);
      plVar2 = local_50;
      *(undefined8 *)(param_1 + 0x50) = local_58;
      local_58 = 0;
      plVar5 = *(longlong **)(param_1 + 0x58);
      if (local_50 != plVar5) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x58) = plVar2;
        if (plVar5 == (longlong *)0x0) goto LAB_1467e58ce;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
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
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (lVar7 == 0) {
      local_48 = (void *)0x0;
      uStack_40 = 0;
    }
    else {
      local_48 = (void *)0x0;
      uVar4 = *(uint *)(lVar7 + 0x30);
      _Src = *(void **)(lVar7 + 0x28);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
      if ((longlong)(int)uVar4 == 0) {
        uStack_40 = (ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&local_48,uVar4,0);
        memcpy(local_48,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),&local_48);
  }
LAB_1467e58ce:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1467e58d8:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e59b2 FUN_1467e59b2 body=192 status=ok
// SIG undefined FUN_1467e59b2(void)

void FUN_1467e59b2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844e30) {
    FUN_144b3d300(&DAT_14c844e30);
    if (DAT_14c844e30 == -1) {
      FUN_140056680(&DAT_14c844e20,L"LOCGEN_DATETIME");
      atexit((_func_5014 *)&LAB_142762b38);
      _Init_thread_footer(&DAT_14c844e30);
    }
  }
  lVar1 = FUN_1467e152f(param_2,&DAT_14c844e20,param_1 + 0x20,param_1 + 0x28,param_1 + 0x2c,
                        param_1 + 0x30,param_1 + 0x40,param_1 + 0x50);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1467e5a72 FUN_1467e5a72 body=149 status=ok
// SIG undefined FUN_1467e5a72(void)

undefined8 FUN_1467e5a72(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_1 + 0x50);
  local_10 = *(longlong *)(param_1 + 0x58);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  local_38 = param_1 + 0x40;
  local_40 = param_1 + 0x30;
  local_48 = param_1 + 0x2c;
  local_30 = &local_18;
  local_28 = param_3;
  FUN_1467e10ec(param_2,L"LOCGEN_DATETIME",param_1 + 0x20,param_1 + 0x28);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e5b08 FUN_1467e5b08 body=272 status=ok
// SIG undefined FUN_1467e5b08(void)

undefined8 FUN_1467e5b08(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (((*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20)) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_2 + 0x38)) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x30) + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_1467e5b9c;
LAB_1467e5b68:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_1467e5b68;
        }
        if (uVar6 != uVar3) goto LAB_1467e5bfd;
      }
    }
    else if (*(int *)(param_2 + 0x38) + iVar1 != 1) goto LAB_1467e5bfd;
LAB_1467e5b9c:
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == *(int *)(param_2 + 0x48)) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x40) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x40) + lVar5);
          if (uVar6 != uVar3) break;
          if (uVar6 == 0) goto LAB_1467e5c0b;
LAB_1467e5bd4:
          lVar5 = lVar5 + 2;
        }
        if ((uVar3 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_1467e5bd4;
        }
        if (uVar6 != uVar3) goto LAB_1467e5bfd;
      }
    }
    else if (*(int *)(param_2 + 0x48) + iVar1 != 1) goto LAB_1467e5bfd;
LAB_1467e5c0b:
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x50) >> 8),
                     *(longlong *)(param_1 + 0x50) == *(longlong *)(param_2 + 0x50));
  }
  else {
LAB_1467e5bfd:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1467e5c18 FUN_1467e5c18 body=164 status=ok
// SIG undefined FUN_1467e5c18(void)

undefined8 FUN_1467e5c18(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_140d5712e();
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  if (*(int *)(param_1 + 0x28) == 5) {
    FUN_1467c96ca(param_2,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,lVar5);
  }
  else {
    FUN_1467c95c2(param_2,param_1 + 0x20,*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                  param_1 + 0x40,lVar5);
  }
  return param_2;
}



// FUNCTION 1467e5cbc FUN_1467e5cbc body=153 status=ok
// SIG undefined FUN_1467e5cbc(void)

undefined8 FUN_1467e5cbc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar5 + 0x78);
  plVar4 = *(longlong **)(lVar5 + 0x80);
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
  if (*(int *)(param_1 + 0x28) == 5) {
    FUN_1467c96ca(param_2,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,uVar3);
  }
  else {
    FUN_1467c95c2(param_2,param_1 + 0x20,*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                  param_1 + 0x40,uVar3);
  }
  return param_2;
}



// FUNCTION 1467e5d56 FUN_1467e5d56 body=119 status=ok
// SIG undefined FUN_1467e5d56(void)

undefined8 *
FUN_1467e5d56(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0(param_1);
  *param_1 = &PTR_FUN_149e19c10;
  FUN_14023423e(param_1 + 4,param_3);
  *(undefined1 *)(param_1 + 6) = param_4;
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1467e5dce FUN_1467e5dce body=126 status=ok
// SIG undefined FUN_1467e5dce(void)

void FUN_1467e5dce(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_2 + 8);
  if ((*(byte *)(plVar2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    plVar2 = *(longlong **)(*param_2 + 8);
  }
  (**(code **)(*plVar2 + 0x158))(plVar2,param_1 + 0x20);
  plVar2 = *(longlong **)(*param_2 + 8);
  puVar1 = *(undefined1 **)plVar2[1];
  if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
                    /* WARNING: Could not recover jumptable at 0x0001467e5e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x170))(plVar2,(undefined1 *)(param_1 + 0x30),1);
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = *puVar1;
  *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  return;
}



// FUNCTION 1467e5e4c FUN_1467e5e4c body=242 status=ok
// SIG undefined FUN_1467e5e4c(void)

short * FUN_1467e5e4c(longlong param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = wcsncmp(param_2,L"LOCGEN_TOLOWER",0xe);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = wcsncmp(param_2,L"LOCGEN_TOUPPER",0xe);
    if (iVar4 != 0) {
      return (short *)0x0;
    }
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = uVar3;
  for (param_2 = param_2 + 0xe; (wVar1 = *param_2, wVar1 == L' ' || (wVar1 == L'\t'));
      param_2 = param_2 + 1) {
  }
  if (param_2 != (wchar_t *)0x0 && wVar1 == L'(') {
    do {
      do {
        param_2 = param_2 + 1;
      } while (*param_2 == L' ');
    } while (*param_2 == L'\t');
    if (param_2 != (wchar_t *)0x0) {
      psVar5 = (short *)FUN_140c97480(param_2,param_1 + 0x20,0,0,1);
      if (psVar5 == (short *)0x0) {
        return (short *)0x0;
      }
      for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
      }
      if (psVar5 != (short *)0x0 && sVar2 == 0x29) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        return psVar5 + 1;
      }
    }
  }
  return (short *)0x0;
}



// FUNCTION 1467e5f3e FUN_1467e5f3e body=111 status=ok
// SIG undefined FUN_1467e5f3e(void)

undefined8 FUN_1467e5f3e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  wchar_t *pwVar1;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    pwVar1 = L"LOCGEN_TOLOWER(";
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\x01') goto LAB_1467e5f79;
    pwVar1 = L"LOCGEN_TOUPPER(";
  }
  FUN_1400020e8(param_2,pwVar1,0xf);
LAB_1467e5f79:
  FUN_1467d1a5a(param_2,param_1 + 0x20,1,param_3);
  FUN_1400020e8(param_2,&DAT_149e06144,1);
  return 1;
}



// FUNCTION 1467e5fae FUN_1467e5fae body=49 status=ok
// SIG undefined FUN_1467e5fae(void)

bool FUN_1467e5fae(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14010cee6(param_1 + 0x20,param_2 + 0x20);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30);
  }
  return bVar2;
}



// FUNCTION 1467e5fe0 FUN_1467e5fe0 body=97 status=ok
// SIG undefined FUN_1467e5fe0(void)

undefined8 * FUN_1467e5fe0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  FUN_1467cf036(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = FUN_1447a1f4a(lVar1);
    FUN_1467c9848(param_2,uVar2);
  }
  else if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = FUN_1447a1f4a(lVar1);
    FUN_1467c97c0(param_2,uVar2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1467e6042 FUN_1467e6042 body=174 status=ok
// SIG undefined FUN_1467e6042(void)

undefined8 * FUN_1467e6042(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x20;
  FUN_1467cf036(lVar1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1467d159c(lVar1,local_30);
    FUN_1467c9848(param_2,local_30);
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\0') {
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_1467d159c(lVar1,local_30);
    FUN_1467c97c0(param_2,local_30);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467e610a FUN_1467e610a body=214 status=ok
// SIG undefined FUN_1467e610a(void)

undefined8 *
FUN_1467e610a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e19cd0;
  plVar4 = (longlong *)FUN_1467f0bfa();
  plVar1 = plVar4 + 2;
  local_48 = plVar1;
  local_40 = plVar4;
  FUN_1467f0d1e(&local_48,plVar1);
  plVar3 = local_40;
  param_1[2] = plVar1;
  param_1[3] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  FUN_1467e61e2(param_1[2],param_2,param_3,param_4);
  FUN_140008de0(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e61e2 FUN_1467e61e2 body=239 status=ok
// SIG undefined FUN_1467e61e2(void)

void FUN_1467e61e2(longlong param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  FUN_1467ce9bc(param_1 + 0x10,param_1 + 0x18);
  if (param_4 == '\x02') {
    cVar1 = FUN_145c2cb76();
    if ((cVar1 == '\0') || ('\0' < DAT_14c844c74)) goto LAB_1467e62c1;
    if (DAT_14c844c78 == (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x1c) = 2;
    }
    else {
      cVar1 = (**(code **)(*DAT_14c844c78 + 8))();
      plVar2 = DAT_14c844c78;
      if (cVar1 == '\0') goto LAB_1467e62c1;
      *(undefined1 *)(param_1 + 0x1c) = 2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x10);
      }
    }
    plVar2 = &local_38;
  }
  else {
    if (param_4 != '\0') {
LAB_1467e62c1:
      *(undefined1 *)(param_1 + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    *(undefined1 *)(param_1 + 0x1c) = 2;
    plVar2 = &local_30;
  }
  FUN_1467e63ca(param_1,plVar2,0);
  if (*plVar2 != 0) {
    local_28 = *plVar2;
    FUN_1447a2442();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e62e2 FUN_1467e62e2 body=43 status=ok
// SIG undefined FUN_1467e62e2(void)

undefined8 * FUN_1467e62e2(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    FUN_1467e630e(*(longlong *)(param_1 + 0x10),param_2);
  }
  return param_2;
}



// FUNCTION 1467e630e FUN_1467e630e body=141 status=ok
// SIG undefined FUN_1467e630e(void)

undefined8 * FUN_1467e630e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1467e654e(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1467cd536(local_30,param_2);
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
  if (local_30 == 0) {
    *param_2 = 0xffffffffffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e639c FUN_1467e639c body=46 status=ok
// SIG undefined FUN_1467e639c(void)

undefined8 * FUN_1467e639c(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1467e63ca(*(longlong *)(param_1 + 0x10),param_2,0);
  }
  return param_2;
}



// FUNCTION 1467e63ca FUN_1467e63ca body=241 status=ok
// SIG undefined FUN_1467e63ca(void)

undefined8 * FUN_1467e63ca(longlong param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467e654e(param_1,&local_40);
  if ((local_40 != 0) && ((*(longlong *)(param_1 + 0x30) != 0 & (param_3 ^ 1)) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    FUN_1467cd4b8(local_40,&local_48);
    if (plVar1 != &local_48) {
      lVar2 = *plVar1;
      *plVar1 = local_48;
      local_48 = 0;
      if (lVar2 == 0) goto LAB_1467e6462;
      local_30 = lVar2;
      FUN_1447a2442();
    }
    if (local_48 != 0) {
      local_30 = local_48;
      FUN_1447a2442();
    }
  }
LAB_1467e6462:
  piVar3 = *(int **)(param_1 + 0x30);
  *param_2 = piVar3;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e64bc FUN_1467e64bc body=145 status=ok
// SIG undefined FUN_1467e64bc(void)

undefined8 FUN_1467e64bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    FUN_1467e654e(*(longlong *)(param_1 + 0x10),&local_28);
    if (local_28 != 0) {
      uVar4 = FUN_1467cd4b2();
      goto LAB_1467e64e7;
    }
  }
  uVar4 = FUN_1467cd542();
LAB_1467e64e7:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e654e FUN_1467e654e body=766 status=ok
// SIG undefined FUN_1467e654e(void)

longlong * FUN_1467e654e(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1467e668f:
    plVar10 = (longlong *)0x0;
LAB_1467e6691:
    FUN_1467e7172(param_1);
    plVar9 = plVar10;
LAB_1467e65e5:
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
    EnterCriticalSection(lpCriticalSection);
    plVar10 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      plVar9 = (longlong *)0x0;
    }
    lVar11 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar11 != 0) {
      local_58 = lVar11;
      FUN_1447a2442();
    }
    if (*(char *)(param_1 + 0x1c) != '\x02') {
      *param_2 = 0;
      param_2[1] = 0;
LAB_1467e6653:
      LeaveCriticalSection(lpCriticalSection);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      goto LAB_1467e65b8;
    }
    uVar8 = FUN_146067e0c();
    FUN_1467ceaf8(uVar8,&local_58,*(undefined8 *)(param_1 + 0x10));
    if (local_58 == 0) {
      lVar11 = 0;
      plVar10 = plVar9;
    }
    else {
      cVar6 = FUN_1467cd5b6();
      if (cVar6 == '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_50 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        goto LAB_1467e6653;
      }
      FUN_1467cd900(local_58,&local_68,param_1 + 0x18);
      plVar10 = local_60;
      lVar11 = local_68;
      local_68 = 0;
      plVar4 = plVar9;
      if (local_60 != plVar9) {
        local_60 = (longlong *)0x0;
        if (plVar9 == (longlong *)0x0) goto LAB_1467e6764;
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        plVar4 = plVar10;
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
      }
      plVar10 = plVar4;
      plVar9 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
LAB_1467e6764:
    *(longlong *)(param_1 + 0x20) = lVar11;
    plVar9 = *(longlong **)(param_1 + 0x28);
    if (plVar9 != plVar10) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = *(longlong **)(param_1 + 0x28);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x28) = plVar10;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    LeaveCriticalSection(lpCriticalSection);
    if (lVar11 == 0) {
      uVar8 = FUN_146067e0c();
      FUN_142760990(uVar8,*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
      lVar11 = 0;
    }
  }
  else {
    iVar7 = (int)plVar10[1];
    do {
      if (iVar7 == 0) goto LAB_1467e668f;
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    lVar11 = *(longlong *)(param_1 + 0x20);
    if (lVar11 == 0) {
      bVar3 = false;
      goto LAB_1467e6691;
    }
    cVar6 = FUN_1467cd496(lVar11);
    if (cVar6 == '\0') {
      bVar3 = false;
      plVar9 = plVar10;
      goto LAB_1467e65e5;
    }
  }
  *param_2 = lVar11;
  param_2[1] = (longlong)plVar10;
LAB_1467e65b8:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467e684e FUN_1467e684e body=121 status=ok
// SIG undefined FUN_1467e684e(void)

longlong FUN_1467e684e(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c844e48 != 2) {
    (**(code **)(*param_1 + 0x30))(param_1,&local_28);
    if (local_28 != 0) {
      local_20 = local_28;
      lVar1 = local_28 + 8;
      FUN_1447a2442();
      goto LAB_1467e687b;
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
LAB_1467e687b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e68c8 FUN_1467e68c8 body=88 status=ok
// SIG undefined FUN_1467e68c8(void)

undefined8 * FUN_1467e68c8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
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



// FUNCTION 1467e692e FUN_1467e692e body=101 status=ok
// SIG undefined FUN_1467e692e(void)

ulonglong FUN_1467e692e(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x38));
  if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10)) {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                     *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18));
  }
  else {
    uVar1 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x38));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1467e6994 FUN_1467e6994 body=80 status=ok
// SIG undefined FUN_1467e6994(void)

void FUN_1467e6994(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x38));
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    *param_3 = *(undefined4 *)(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001467e69d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1467e69e4 FUN_1467e69e4 body=543 status=ok
// SIG undefined FUN_1467e69e4(void)

void FUN_1467e69e4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  undefined7 uVar6;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(*param_2 + 8);
  if ((*(byte *)(plVar7 + 5) & 1) == 0) {
    if ((*(byte *)(plVar7 + 5) & 4) != 0) {
      local_50 = (longlong *)0x0;
      local_38 = CONCAT44(local_38._4_4_,0xffffffff);
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (lVar3 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x38));
        local_50 = *(longlong **)(lVar3 + 0x10);
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar3 + 0x18));
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x38));
        plVar7 = *(longlong **)(*param_2 + 8);
      }
      (**(code **)(*plVar7 + 0x160))(plVar7,&local_50);
      FUN_14003e2d8(&local_38,*(undefined8 *)(*param_2 + 8));
    }
    goto LAB_1467e6a85;
  }
  local_38 = 0;
  local_3c = 0xffffffff;
  (**(code **)(*plVar7 + 0x160))(plVar7);
  FUN_14003e2d8(&local_3c,*(undefined8 *)(*param_2 + 8));
  uVar6 = (undefined7)((ulonglong)&local_3c >> 8);
  uVar5 = (undefined4)CONCAT71(uVar6,1);
  if (DAT_14c872ba8 == '\x01') {
    lVar3 = (**(code **)(*plVar7 + 0x20))(plVar7);
    uVar5 = (undefined4)CONCAT71(uVar6,lVar3 == 0);
  }
  plVar4 = (longlong *)FUN_1467f0bfa();
  plVar7 = plVar4 + 2;
  local_50 = plVar7;
  local_48 = plVar4;
  FUN_1467f0d1e(&local_50,plVar7);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1467e6bc9:
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001467e6bb9:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x10) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == plVar7) {
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar4;
        goto joined_r0x0001467e6bb9;
      }
    }
    else {
      *(longlong **)(param_1 + 0x18) = plVar4;
      if (plVar7 != (longlong *)0x0) goto LAB_1467e6bc9;
    }
  }
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1467e61e2(*(undefined8 *)(param_1 + 0x10),local_38,&local_3c,uVar5);
  FUN_140008de0(param_1);
LAB_1467e6a85:
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1467e6c04(*(longlong *)(param_1 + 0x10),param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e6c04 FUN_1467e6c04 body=192 status=ok
// SIG undefined FUN_1467e6c04(void)

void FUN_1467e6c04(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x2b) & 2) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    if (DAT_14c844c78 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      (**(code **)(*DAT_14c844c78 + 0x28))(DAT_14c844c78,param_1 + 0x10,param_2);
      if (*(longlong *)(param_1 + 0x10) != lVar2) {
        plVar3 = *(longlong **)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        lVar2 = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (lVar2 != 0) {
          local_30 = lVar2;
          FUN_1447a2442();
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e6cc6 FUN_1467e6cc6 body=96 status=ok
// SIG undefined FUN_1467e6cc6(void)

void FUN_1467e6cc6(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1467e63ca(*(longlong *)(param_1 + 0x10),&local_20,1);
    if (local_20 != 0) {
      local_18 = local_20;
      FUN_1447a2442();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e6d28 FUN_1467e6d28 body=704 status=ok
// SIG undefined FUN_1467e6d28(void)

short * FUN_1467e6d28(longlong param_1,wchar_t *param_2)

{
  int *piVar1;
  wchar_t wVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = wcsncmp(param_2,L"LOCTABLE",8);
  if (iVar5 == 0) {
    for (param_2 = param_2 + 8; (wVar2 = *param_2, wVar2 == L' ' || (wVar2 == L'\t'));
        param_2 = param_2 + 1) {
    }
    if (wVar2 == L'(' && param_2 != (wchar_t *)0x0) {
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      do {
        do {
          param_2 = param_2 + 1;
        } while (*param_2 == L' ');
      } while (*param_2 == L'\t');
      if (param_2 != (wchar_t *)0x0) {
        psVar6 = (short *)FUN_140c9875d(param_2,&local_38);
        if (psVar6 == (short *)0x0) {
          psVar6 = (short *)0x0;
        }
        else {
          puVar9 = local_38;
          if ((int)uStack_30 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_40,puVar9,1);
          for (; (sVar3 = *psVar6, sVar3 == 0x20 || (sVar3 == 9)); psVar6 = psVar6 + 1) {
          }
          if (sVar3 == 0x2c && psVar6 != (short *)0x0) {
            local_58 = 0;
            uStack_50 = 0;
            do {
              do {
                psVar6 = psVar6 + 1;
              } while (*psVar6 == 0x20);
            } while (*psVar6 == 9);
            if ((psVar6 == (short *)0x0) ||
               (psVar7 = (short *)FUN_140c9875d(psVar6,&local_58), psVar7 == (short *)0x0)) {
              psVar6 = (short *)0x0;
            }
            else {
              for (; (sVar3 = *psVar7, sVar3 == 0x20 || (sVar3 == 9)); psVar7 = psVar7 + 1) {
              }
              psVar6 = (short *)0x0;
              if (sVar3 != 0x29) {
                psVar7 = psVar6;
              }
              if (psVar7 != (short *)0x0) {
                plVar8 = (longlong *)FUN_1467f0bfa();
                plVar10 = plVar8 + 2;
                local_68 = plVar10;
                local_60 = plVar8;
                FUN_1467f0d1e(&local_68,plVar10);
                if (plVar8 == (longlong *)0x0) {
                  *(undefined8 *)(param_1 + 0x10) = 0x10;
                  plVar10 = *(longlong **)(param_1 + 0x18);
                  if (plVar10 != (longlong *)0x0) {
                    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1467e6fb0:
                    LOCK();
                    plVar8 = plVar10 + 1;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)*plVar8 == 0) {
                      (**(code **)*plVar10)(plVar10);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar5 = *piVar1;
                      UNLOCK();
joined_r0x0001467e6fa0:
                      if (iVar5 == 0) {
                        (**(code **)(*plVar10 + 0x10))(plVar10);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                  UNLOCK();
                  *(longlong **)(param_1 + 0x10) = plVar10;
                  plVar10 = *(longlong **)(param_1 + 0x18);
                  if (plVar8 == plVar10) {
                    LOCK();
                    plVar10 = plVar8 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
                      (**(code **)*plVar8)(plVar8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar8 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar5 = *piVar1;
                      UNLOCK();
                      plVar10 = plVar8;
                      goto joined_r0x0001467e6fa0;
                    }
                  }
                  else {
                    *(longlong **)(param_1 + 0x18) = plVar8;
                    if (plVar10 != (longlong *)0x0) goto LAB_1467e6fb0;
                  }
                }
                plVar10 = local_60;
                if (local_60 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_60 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*local_60)(local_60);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
                psVar6 = psVar7 + 1;
                lVar4 = *(longlong *)(param_1 + 0x10);
                FUN_140c98848(&local_68,&local_58);
                *(undefined8 *)(lVar4 + 0x10) = local_40;
                *(undefined4 *)(lVar4 + 0x18) = local_68._0_4_;
                FUN_1467ce9bc(lVar4 + 0x10,lVar4 + 0x18);
                *(undefined1 *)(lVar4 + 0x1c) = 0;
                FUN_1467e7172(lVar4);
                FUN_140008de0(param_1);
              }
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            psVar6 = (short *)0x0;
          }
        }
        if (local_38 != (undefined2 *)0x0) {
          FUN_1400020a8(local_38);
        }
        goto LAB_1467e6d62;
      }
    }
  }
  psVar6 = (short *)0x0;
LAB_1467e6d62:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return psVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e6fea FUN_1467e6fea body=390 status=ok
// SIG undefined FUN_1467e6fea(void)

bool FUN_1467e6fea(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x38));
    local_58[2] = *(undefined8 *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x18);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x38));
    local_58[0] = 0;
    local_58[1] = 0;
    if (iVar1 != -1) {
      uVar4 = FUN_1412a5d66();
      FUN_1412a5cfc(uVar4,iVar1,local_58);
    }
    FUN_1400020e8(param_2,L"LOCTABLE(\"",10);
    FUN_1400021e4(local_58 + 2,&local_68);
    FUN_144832102(&local_68,0);
    iVar1 = (int)uStack_60;
    lVar3 = local_68;
    local_68 = 0;
    uStack_60 = 0;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_2,lVar3,iVar5);
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_2,L"\", \"",4);
    FUN_1467ce734(local_58,&local_68,0);
    iVar1 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_68,iVar1);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_2,&DAT_149e192fc,2);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e7172 FUN_1467e7172 body=296 status=ok
// SIG undefined FUN_1467e7172(void)

void FUN_1467e7172(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = FUN_145c2cb76();
  if (((cVar6 != '\0') && (DAT_14c844c74 < '\x01')) &&
     ((DAT_14c844c78 == (longlong *)0x0 ||
      (cVar6 = (**(code **)(*DAT_14c844c78 + 8))(), cVar6 != '\0')))) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
    uVar3 = param_1[2];
    *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    plVar8 = (longlong *)param_1[1];
    bVar4 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_1467e7225:
      local_40 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar8[1];
      do {
        if (iVar7 == 0) goto LAB_1467e7225;
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_40 = *param_1;
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
    }
    local_58 = 0;
    local_48 = &PTR_LAB_149e1c0c0;
    local_68 = FUN_142769e22;
    local_38 = plVar8;
    FUN_1467e72ae(uVar3);
    if (!bVar4) {
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
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e72ae FUN_1467e72ae body=238 status=ok
// SIG undefined FUN_1467e72ae(void)

void FUN_1467e72ae(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  code *local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  plVar4 = DAT_14c844c78;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar1 = (code *)*param_2;
  if (DAT_14c844c78 == (longlong *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_1467e733f;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    local_88 = param_1;
    local_80 = param_1;
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,&local_80,&local_88);
  }
  else {
    local_68[0] = 0;
    local_78[0] = pcVar1;
    if (pcVar1 != (code *)0x0) {
      plVar3 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar3 = (longlong *)param_2[2];
      }
      (**(code **)*plVar3)(plVar3,local_68);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1,local_78);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1467e733f:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e73a2 FUN_1467e73a2 body=43 status=ok
// SIG undefined FUN_1467e73a2(void)

undefined8 * FUN_1467e73a2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1467e73ce FUN_1467e73ce body=43 status=ok
// SIG undefined FUN_1467e73ce(void)

undefined8 * FUN_1467e73ce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1467e73fa FUN_1467e73fa body=1057 status=ok
// SIG undefined FUN_1467e73fa(void)

void FUN_1467e73fa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2d8 [40];
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined **local_2a0 [5];
  byte local_278;
  byte local_277;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong *local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined **local_1d0;
  undefined ***local_1c8;
  undefined ***local_1c0;
  undefined ****local_1b8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar6 = *(longlong **)(*param_2 + 8);
  bVar3 = *(byte *)(plVar6 + 5);
  if ((bVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    plVar6 = *(longlong **)(*param_2 + 8);
    bVar3 = *(byte *)(plVar6 + 5);
  }
  if (((bVar3 & 4) == 0) || (plVar5 = *(longlong **)(param_1 + 0x20), plVar5 == (longlong *)0x0)) {
    local_1d8 = 0;
    plVar5 = plVar6;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_1d8);
    plVar5 = *(longlong **)(*param_2 + 8);
  }
  (**(code **)(*plVar5 + 0x160))(plVar5,&local_1d8);
  local_1e8 = 0;
  uStack_1e0 = 0;
  if ((*(byte *)(plVar6 + 5) & 1) == 0) {
    if (local_1d8 != 0 && (*(byte *)(plVar6 + 5) & 4) != 0) {
      FUN_1467cfb6a(&local_1d0);
      if (local_1d0 != (undefined **)0x0 && (int)local_1c8 != 0) {
        (**(code **)(*local_1d0 + 0x30))();
      }
      FUN_1449db362(&local_1d0);
      memset(local_2a0,0,0x90);
      FUN_144869430(local_2a0);
      local_210 = 0;
      local_2a0[0] = &PTR_FUN_149e1e590;
      local_200 = 0;
      local_208 = &local_1e8;
      FUN_144a69558(local_2a0,1);
      (*(code *)local_2a0[0][0x1e])(local_2a0,0);
      local_2a0[0] = &PTR_FUN_149e1e330;
      local_1d0 = &PTR_FUN_149e37810;
      local_1b8 = &local_1c0;
      local_1c8 = local_2a0;
      local_1c0 = &local_1d0;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
      FUN_140077068(*(undefined8 *)(*param_2 + 8),&local_1e8);
      if ((local_277 & 2) != 0) {
        FUN_14572541c(plVar6);
      }
      FUN_144a7fc42(local_2a0);
    }
    goto LAB_1467e77c6;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
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
  if (local_1d8 != 0) {
    FUN_1467cfb6a(&local_1f8);
    FUN_140077068(*(undefined8 *)(*param_2 + 8),&local_1e8);
    if ((local_1f8 != (longlong *)0x0 && local_1f0 != 0) &&
       (cVar4 = (**(code **)(*local_1f8 + 0x30))(), cVar4 != '\0')) {
      memset(local_2a0,0,0x90);
      FUN_144869430(local_2a0);
      local_210 = 0;
      local_2a0[0] = &PTR_FUN_149e1e050;
      local_200 = 0x7fffffffffffffff;
      local_278 = local_278 | 1;
      local_208 = &local_1e8;
      FUN_1449c2eca(local_2a0,0);
      local_1d0 = &PTR_FUN_149e37810;
      local_1c0 = &local_1d0;
      plVar5 = (longlong *)0x0;
      if (local_1f0 != 0) {
        plVar5 = local_1f8;
      }
      local_1c8 = local_2a0;
      local_1b8 = &local_1c0;
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_2b0,&local_1c0);
      plVar5 = local_2a8;
      if (local_2a8 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = local_2b0;
        plVar7 = *(longlong **)(param_1 + 0x28);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x28) = 0;
LAB_1467e7731:
          LOCK();
          plVar5 = plVar7 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001467e7760:
            if (iVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x20) = local_2b0;
        plVar7 = *(longlong **)(param_1 + 0x28);
        if (local_2a8 == plVar7) {
          LOCK();
          plVar7 = local_2a8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_2a8)(local_2a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar7 = plVar5;
            goto joined_r0x0001467e7760;
          }
        }
        else {
          *(longlong **)(param_1 + 0x28) = local_2a8;
          if (plVar7 != (longlong *)0x0) goto LAB_1467e7731;
        }
      }
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_2a8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_2a8)(local_2a8);
          LOCK();
          piVar1 = (int *)((longlong)local_2a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2a8 + 0x10))(local_2a8);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),&local_1c0);
      if ((local_277 & 2) != 0) {
        FUN_14572541c(plVar6);
      }
      FUN_144a7fc42(local_2a0);
    }
    FUN_1449db362(&local_1f8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_1467e77c6:
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e781c FUN_1467e781c body=63 status=ok
// SIG undefined FUN_1467e781c(void)

int FUN_1467e781c(undefined8 *param_1)

{
  wchar_t *_Str;
  size_t sVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 1);
  _Str = (wchar_t *)*param_1;
  if (iVar3 == -1) {
    sVar1 = wcslen(_Str);
    iVar3 = (int)sVar1;
  }
  uVar2 = FUN_1447addd0(_Str,iVar3 * 2);
  return (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
}



// FUNCTION 1467e785c FUN_1467e785c body=85 status=ok
// SIG undefined FUN_1467e785c(void)

void FUN_1467e785c(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  if (*param_1 != -1) {
    uVar1 = FUN_1412a5d66();
    FUN_1412a5cfc(uVar1,*param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1467e78b2 FUN_1467e78b2 body=496 status=ok
// SIG undefined FUN_1467e78b2(void)

void FUN_1467e78b2(int *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined2 **local_158;
  int local_150;
  undefined4 local_144;
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  undefined1 local_128;
  undefined2 local_120 [112];
  undefined2 **local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_144 = FUN_144afd4c3(param_1);
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_144,4);
      }
      else {
        FUN_14572512c(param_2,&local_144);
      }
    }
    else {
      local_144 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    local_140 = local_120;
    local_128 = 0;
    local_130 = &local_20;
    local_138 = local_140;
    if (*param_1 != -1) {
      uVar3 = FUN_1412a5d66();
      FUN_1456bb098(uVar3,*param_1,&local_140);
    }
    *local_138 = 0;
    FUN_14003e734(param_2,local_140);
    FUN_144724f3c(&local_140);
  }
  else {
    local_144 = 0;
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_144,4);
      }
      else {
        FUN_14572512c(param_2,&local_144);
      }
    }
    else {
      local_144 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    local_40 = (undefined2 **)0x0;
    local_38 = 0x8000000000;
    FUN_14041eed3(param_2,&local_140);
    if ((int)local_38 < 2) {
      *param_1 = -1;
    }
    else {
      uVar3 = FUN_1412a5d66();
      local_150 = (int)local_38 + -1;
      local_158 = &local_140;
      if (local_40 != (undefined2 **)0x0) {
        local_158 = local_40;
      }
      FUN_14003e488(uVar3,&local_158,param_1);
    }
    if (local_40 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e7aa4 FUN_1467e7aa4 body=99 status=ok
// SIG undefined FUN_1467e7aa4(void)

undefined8 * FUN_1467e7aa4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_3,param_2);
      if (cVar4 != '\0') {
        return param_2;
      }
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  return param_2;
}



// FUNCTION 1467e7b08 FUN_1467e7b08 body=148 status=ok
// SIG undefined FUN_1467e7b08(void)

void FUN_1467e7b08(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = FUN_144afd4c3(param_2 + 1);
    uVar3 = FUN_144afd4c3(param_2);
    iVar4 = FUN_144a78877(uVar3,uVar2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar6 = (longlong)iVar4 * 0x10;
        if ((*(int *)(lVar1 + lVar6) == *param_2) && (*(int *)(lVar1 + 4 + lVar6) == param_2[1])) {
          FUN_1467f11be(param_1);
          return;
        }
        iVar4 = *(int *)(lVar6 + lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1467e7b9c FUN_1467e7b9c body=105 status=ok
// SIG undefined FUN_1467e7b9c(void)

void FUN_1467e7b9c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = FUN_140d5712e();
  lVar3 = *(longlong *)(lVar5 + 0x28);
  plVar4 = *(longlong **)(lVar5 + 0x30);
  if (plVar4 == (longlong *)0x0) {
    FUN_1467e7fe8(param_1,lVar3 + 0x28);
    return;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  FUN_1467e7fe8(param_1,lVar3 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x0001467e7bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1467e7c06 FUN_1467e7c06 body=69 status=ok
// SIG undefined FUN_1467e7c06(void)

void FUN_1467e7c06(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  FUN_1467e7c4c(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e7c4c FUN_1467e7c4c body=857 status=ok
// SIG undefined FUN_1467e7c4c(void)

void FUN_1467e7c4c(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined1 local_ec [4];
  longlong local_e8 [3];
  int local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)(int)param_2[1] != 0) {
    lVar13 = *param_2;
    lVar14 = (longlong)(int)param_2[1] * 0xb0;
    do {
      cVar6 = FUN_1467cc390(lVar13,0);
      if (cVar6 != '\0') {
        FUN_1467ccffe(*(undefined8 *)(param_1 + 0x158));
      }
      lVar13 = lVar13 + 0xb0;
      lVar14 = lVar14 + -0xb0;
    } while (lVar14 != 0);
  }
  if (param_3 != '\0') {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      lVar13 = *param_2;
      lVar14 = (longlong)(int)param_2[1] * 0xb0 + lVar13;
      plVar3 = local_e8 + 2;
      do {
        cVar6 = FUN_1467cc390(lVar13,0);
        if (cVar6 != '\0') {
          local_e8[0] = 0;
          local_e8[1] = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          FUN_1467cc534(lVar13);
          lVar8 = FUN_140d5712e();
          plVar4 = *(longlong **)(lVar8 + 0x30);
          if (plVar4 == (longlong *)0x0) {
            FUN_144a787a6(&local_c8);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            FUN_144a787a6(&local_c8);
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
          if (1 < (int)uStack_c0) {
            lVar8 = FUN_140d5712e();
            FUN_1406dbdc2(*(undefined8 *)(lVar8 + 0x20),plVar3,&local_c8);
            if ((longlong)local_d0 != 0) {
              lVar12 = (longlong)local_d0 << 4;
              lVar8 = local_e8[2];
              do {
                cVar6 = FUN_1467cc72c(lVar13,lVar8,local_e8);
                if (cVar6 != '\0') {
                  FUN_1447a1747(local_e8[2]);
                  if (local_e8[2] != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1467e7e7d;
                }
                lVar8 = lVar8 + 0x10;
                lVar12 = lVar12 + -0x10;
              } while (lVar12 != 0);
            }
            FUN_1447a1747(local_e8[2]);
            if (local_e8[2] != 0) {
              FUN_1400020a8();
            }
          }
          cVar6 = FUN_1467cc7ae(lVar13);
          if (cVar6 == '\0') {
            FUN_1467cc726(lVar13);
            FUN_144a787a6(local_e8);
LAB_1467e7e7d:
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          if (bVar5) {
            local_c8 = CONCAT44(local_c8._4_4_,0xffffffff);
            puVar9 = (undefined8 *)FUN_1467cc726(lVar13);
            uVar10 = FUN_1467cc720(lVar13);
            FUN_140c98848(plVar3,uVar10);
            uVar10 = FUN_1467cc71a(lVar13);
            FUN_140c98848(local_ec,uVar10);
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(puVar9 + 1) != 0) {
              puVar11 = (undefined2 *)*puVar9;
            }
            uVar7 = FUN_144a1ccda(puVar11,0);
            local_100 = 0;
            local_108 = local_e8;
            local_f8 = &local_c8;
            FUN_1467e87f2(&local_b8,local_ec,plVar3,uVar7);
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
        }
        lVar13 = lVar13 + 0xb0;
      } while (lVar13 != lVar14);
      if ((int)uStack_b0 != local_84) {
        local_c8 = CONCAT62(local_c8._2_6_,0x101);
        FUN_142763cb6(param_1,&local_b8);
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145eb74f4(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e7fa6 FUN_1467e7fa6 body=66 status=ok
// SIG undefined FUN_1467e7fa6(void)

void FUN_1467e7fa6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_4 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_4;
  }
  uVar1 = FUN_144a1ccda(puVar2,0);
  FUN_1467e87f2(param_1,param_2,param_3,uVar1);
  return;
}



// FUNCTION 1467e7fe8 FUN_1467e7fe8 body=449 status=ok
// SIG undefined FUN_1467e7fe8(void)

void FUN_1467e7fe8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  local_98 = CONCAT44(local_98._4_4_,iVar1);
  if (iVar1 == 0) {
    local_98 = 0;
  }
  else {
    FUN_1458c879e(&local_a0,iVar1);
    FUN_1412f3031(local_a0,uVar2,iVar1);
  }
  local_90 = (void *)0x0;
  local_88 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_88;
  pvVar3 = (void *)*param_2;
  if (lVar5 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,pvVar3,lVar5 * 2);
  }
  local_80 = 0x1d;
  local_78[0] = (code *)0x0;
  plVar4 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar3 = local_90;
  *plVar4 = (longlong)&PTR_LAB_149e1c330;
  plVar4[1] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
  local_98 = 0;
  plVar4[3] = 0;
  lVar5 = (longlong)local_88;
  *(int *)(plVar4 + 4) = local_88;
  local_68 = plVar4;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(plVar4 + 3,local_88,0);
    memcpy((void *)plVar4[3],pvVar3,lVar5 * 2);
  }
  *(undefined1 *)(plVar4 + 5) = local_80;
  if (plVar4 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14276a50c;
  }
  FUN_1458c87f6(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1427651ac(&local_a0);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e81aa FUN_1467e81aa body=379 status=ok
// SIG undefined FUN_1467e81aa(void)

void FUN_1467e81aa(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*param_1 != '\0') && ((int)param_2[1] != 0)) && (DAT_14c844e48 != 2)) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
    if ((longlong)(int)param_2[1] != 0) {
      puVar8 = (undefined8 *)*param_2;
      puVar7 = puVar8 + (longlong)(int)param_2[1] * 2;
      do {
        local_58 = *puVar8;
        local_50 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          local_50 = 0;
        }
        lVar4 = FUN_1412a5dde(param_1 + 0x60,&local_58,0);
        *(undefined1 *)(lVar4 + 0x60) = 1;
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar7);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
    lVar5 = FUN_140d5712e();
    lVar6 = FUN_140d5712e();
    lVar4 = *(longlong *)(lVar6 + 0x28);
    plVar3 = *(longlong **)(lVar6 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      FUN_1406dbdc2(*(undefined8 *)(lVar5 + 0x20),&local_68,lVar4 + 0x28);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1406dbdc2(*(undefined8 *)(lVar5 + 0x20),&local_68,lVar4 + 0x28);
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
    local_78 = local_68;
    local_70 = local_60;
    local_88 = (undefined4)*param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1467e8326(param_1,&local_88,&local_78,0x4d);
    FUN_1447a1747(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e8326 FUN_1467e8326 body=515 status=ok
// SIG undefined FUN_1467e8326(void)

void FUN_1467e8326(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  local_b8 = CONCAT44(local_b8._4_4_,iVar1);
  if (iVar1 == 0) {
    local_b8 = 0;
  }
  else {
    FUN_1458c879e(&local_c0,iVar1);
    FUN_1412f3031(local_c0,uVar2,iVar1);
  }
  local_b0 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_a8 = CONCAT44(local_a8._4_4_,iVar1);
  if (iVar1 == 0) {
    local_a8 = 0;
  }
  else {
    FUN_140b856de(&local_b0,iVar1,0);
    FUN_140b8566a(local_b0,uVar2,iVar1);
  }
  local_a0 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_98 = CONCAT44(local_98._4_4_,iVar1);
  if (iVar1 == 0) {
    local_98 = 0;
  }
  else {
    FUN_140b856de(&local_a0,iVar1,0);
    FUN_140b8566a(local_a0,uVar2,iVar1);
  }
  local_88[0] = (code *)0x0;
  local_90 = param_4;
  local_78 = (longlong *)FUN_14001cc68(0x40,8);
  *local_78 = (longlong)&PTR_LAB_149e1c350;
  local_78[1] = local_c0;
  local_c0 = 0;
  *(undefined4 *)(local_78 + 2) = (undefined4)local_b8;
  *(undefined4 *)((longlong)local_78 + 0x14) = local_b8._4_4_;
  local_b8 = 0;
  local_78[3] = local_b0;
  local_b0 = 0;
  *(undefined4 *)(local_78 + 4) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_78 + 0x24) = local_a8._4_4_;
  local_a8 = 0;
  local_78[5] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(local_78 + 6) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_78 + 0x34) = local_98._4_4_;
  local_98 = 0;
  *(undefined1 *)(local_78 + 7) = local_90;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88[0] = FUN_14276a64c;
  }
  FUN_1458c87f6(param_1,local_88);
  if (local_88[0] != (code *)0x0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14276547e(&local_c0);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e852a FUN_1467e852a body=253 status=ok
// SIG undefined FUN_1467e852a(void)

void FUN_1467e852a(char *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*param_1 != '\0') && (iVar1 = *(int *)(param_2 + 1), iVar1 != 0)) && (DAT_14c844e48 != 2)) {
    local_88 = 0;
    uVar2 = *param_2;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
    FUN_140b856de(&local_88,iVar1,0);
    FUN_140b8566a(local_88,uVar2,iVar1);
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149e1c310;
    local_50 = local_88;
    uStack_48 = uStack_80;
    local_88 = 0;
    uStack_80 = 0;
    local_78[0] = FUN_14276a20e;
    FUN_1458c87f6(param_1,local_78);
    if (local_78[0] != (code *)0x0) {
      pppuVar3 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar3 = &local_58;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e8628 FUN_1467e8628 body=327 status=ok
// SIG undefined FUN_1467e8628(void)

void FUN_1467e8628(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1467f1d3e(param_2);
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
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1467f1d9e(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x28 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e8771 FUN_1467e8771 body=129 status=ok
// SIG undefined FUN_1467e8771(void)

undefined8 * FUN_1467e8771(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  
  if (param_3 + 1U < 2) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    FUN_140002266(param_1,L"%s_locchunk%d",puVar2);
  }
  return param_1;
}



// FUNCTION 1467e87f2 FUN_1467e87f2 body=348 status=ok
// SIG undefined FUN_1467e87f2(void)

void FUN_1467e87f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7)

{
  void *_Src;
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  int **local_88;
  undefined4 local_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  int *local_60;
  int *local_58;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_5 + 1);
  lVar2 = (longlong)local_68;
  _Src = (void *)*param_5;
  if (lVar2 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar2 * 2);
  }
  FUN_141703955(&local_60,&local_70);
  piVar1 = local_60;
  local_58 = local_60;
  if (local_60 == (int *)0x0) {
    local_78 = param_7;
    local_80 = param_6;
    local_88 = &local_58;
    FUN_1467e8950(param_1,param_2,param_3,param_4);
  }
  else {
    LOCK();
    *local_60 = *local_60 + 1;
    UNLOCK();
    local_88 = &local_58;
    local_78 = param_7;
    local_80 = param_6;
    FUN_1467e8950(param_1,param_2,param_3,param_4);
    if (piVar1 != (int *)0x0) {
      local_50 = piVar1;
      FUN_1447a2442();
    }
    if (local_60 != (int *)0x0) {
      local_50 = local_60;
      FUN_1447a2442();
    }
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e8950 FUN_1467e8950 body=457 status=ok
// SIG undefined FUN_1467e8950(void)

void FUN_1467e8950(longlong *param_1,int *param_2,int *param_3,int param_4,undefined8 *param_5,
                  int param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int **ppiVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [40];
  int local_80;
  int local_7c;
  int *local_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 local_60;
  int **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (int *)0x0;
  iStack_64 = 0;
  local_70 = *param_7;
  iStack_6c = FUN_14588dbba();
  piVar3 = (int *)*param_5;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_78 = piVar3;
  }
  iStack_64 = param_6;
  iVar1 = *param_2;
  iVar2 = *param_3;
  local_60 = (int *)CONCAT44(iVar2,iVar1);
  iStack_68 = param_4;
  uVar5 = FUN_144afd4c3();
  uVar6 = FUN_144afd4c3(&local_60);
  uVar7 = FUN_144a78877(uVar6,uVar5);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*piVar3 == iVar1) && (*(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28) == iVar2)) {
          ppiVar8 = (int **)(piVar3 + 2);
          if (ppiVar8 != (int **)0x0 && piVar3 != (int *)0x0) {
            if (param_6 < piVar3[7]) {
              if (ppiVar8 != &local_78) {
                piVar4 = *ppiVar8;
                *ppiVar8 = local_78;
                local_78 = (int *)0x0;
                if (piVar4 != (int *)0x0) {
                  local_60 = piVar4;
                  FUN_1447a2442();
                }
              }
              piVar3[4] = local_70;
              piVar3[5] = iStack_6c;
              piVar3[6] = iStack_68;
              piVar3[7] = iStack_64;
            }
            goto LAB_1467e8a2c;
          }
          break;
        }
        iVar9 = piVar3[8];
      } while (iVar9 != -1);
    }
  }
  local_80 = *param_2;
  local_60 = &local_80;
  local_7c = *param_3;
  local_58 = &local_78;
  FUN_14170459e(param_1,local_4c);
LAB_1467e8a2c:
  if (local_78 != (int *)0x0) {
    local_60 = local_78;
    FUN_1447a2442();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e8b1a FUN_1467e8b1a body=205 status=ok
// SIG undefined FUN_1467e8b1a(void)

undefined8 * FUN_1467e8b1a(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c844eb8 == -1) {
    uVar2 = FUN_140e82edc();
    FUN_145df9d9d(&local_30,uVar2);
    if (DAT_14c844ea8 != (void *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c844ea8 = local_30;
    DAT_14c844eb0 = local_28;
    DAT_14c844eb8 = local_24;
  }
  iVar1 = DAT_14c844eb0;
  _Src = DAT_14c844ea8;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467e8be8 FUN_1467e8be8 body=34 status=ok
// SIG undefined FUN_1467e8be8(void)

undefined8 * FUN_1467e8be8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1467e8c0a(param_2,param_1);
  return param_1;
}



// FUNCTION 1467e8c0a FUN_1467e8c0a body=158 status=ok
// SIG undefined FUN_1467e8c0a(void)

void FUN_1467e8c0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1446f8c06(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  lVar1 = param_2[1];
  *(int *)(param_2 + 1) = (int)lVar1 + 0x19;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar1) < 0x19) {
    FUN_144a2dbb8(param_2);
  }
  local_20 = 0xc;
  local_28 = param_1;
  FUN_14682b2cc(&local_28,*param_2);
  *(undefined2 *)(*param_2 + (longlong)((int)param_2[1] + -1) * 2) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e8caa FUN_1467e8caa body=69 status=ok
// SIG undefined FUN_1467e8caa(void)

void FUN_1467e8caa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14039a2a2(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_144893a1c(param_1 + 0x10,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1467e8cf0 FUN_1467e8cf0 body=25 status=ok
// SIG undefined FUN_1467e8cf0(void)

undefined8 FUN_1467e8cf0(undefined8 *param_1,undefined8 param_2)

{
  FUN_1467e8d0a(*param_1);
  return param_2;
}



// FUNCTION 1467e8d0a FUN_1467e8d0a body=226 status=ok
// SIG undefined FUN_1467e8d0a(void)

int * FUN_1467e8d0a(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_3[1] == DAT_14c845dc4 && *param_3 == DAT_14c845dbc) {
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x22),L"ot v",4);
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x2a),L"alid",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 5),L"Id i",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 7),L"s no",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 1),L"FIoC",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 3),L"hunk",4);
    *param_2 = 0xb;
    *(undefined2 *)((longlong)param_2 + 0x32) = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
        (**(code **)(*plVar3 + 0x50))(plVar3,param_2,param_3,param_4);
        if (*param_2 == 0) goto LAB_1467e8da1;
        *param_2 = 1;
        *(undefined2 *)(param_2 + 1) = 0;
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *param_2 = 8;
    *(undefined2 *)(param_2 + 1) = 0;
LAB_1467e8da1:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 1467e8dec FUN_1467e8dec body=8 status=ok
// SIG undefined FUN_1467e8dec(void)

void FUN_1467e8dec(undefined8 *param_1)

{
  FUN_1467e8df4(*param_1);
  return;
}



// FUNCTION 1467e8df4 FUN_1467e8df4 body=130 status=ok
// SIG undefined FUN_1467e8df4(void)

undefined4 FUN_1467e8df4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3);
      if ((char)uVar4 != '\0') break;
      bVar6 = (longlong)iVar1 * 0x18 + -0x18 != lVar5;
      lVar5 = lVar5 + 0x18;
    } while (bVar6);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  return uVar4;
}



// FUNCTION 1467e8e76 FUN_1467e8e76 body=25 status=ok
// SIG undefined FUN_1467e8e76(void)

undefined8 FUN_1467e8e76(undefined8 *param_1,undefined8 param_2)

{
  FUN_1467e8e90(*param_1);
  return param_2;
}



// FUNCTION 1467e8e90 FUN_1467e8e90 body=212 status=ok
// SIG undefined FUN_1467e8e90(void)

int * FUN_1467e8e90(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_3[1] == DAT_14c845dc4 && *param_3 == DAT_14c845dbc) {
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x22),L"ot v",4);
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x2a),L"alid",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 5),L"Id i",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 7),L"s no",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 1),L"FIoC",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 3),L"hunk",4);
    *param_2 = 0xb;
    *(undefined2 *)((longlong)param_2 + 0x32) = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
        (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
        if (*param_2 == 0) goto LAB_1467e8f1b;
        *param_2 = 1;
        *(undefined2 *)(param_2 + 1) = 0;
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *param_2 = 8;
    *(undefined2 *)(param_2 + 1) = 0;
LAB_1467e8f1b:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 1467e8f64 FUN_1467e8f64 body=134 status=ok
// SIG undefined FUN_1467e8f64(void)

longlong FUN_1467e8f64(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xb4);
    memcpy(local_128,&DAT_14c845ecc,0x104);
    if (iVar1 == 0) {
      lVar2 = *param_1 + 0x60;
    }
    else {
      lVar2 = 0;
    }
    FUN_1427683c4(local_128);
  }
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e8feb FUN_1467e8feb body=120 status=ok
// SIG undefined FUN_1467e8feb(void)

void FUN_1467e8feb(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145dca254(param_1,&local_20);
  puVar1 = local_20;
  if (local_18 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/Core/Private/IO/IoStatus.cpp",0x48,L"I/O Error \'%s\'",puVar1);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e9064 FUN_1467e9064 body=704 status=ok
// SIG undefined FUN_1467e9064(void)

undefined8 FUN_1467e9064(undefined8 *param_1)

{
  longlong lVar1;
  undefined7 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  lVar1 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
    uVar4 = (ulonglong)uVar5;
    uVar7 = *(ushort *)((longlong)&DAT_149e1b1a8 + lVar1);
    if (uVar5 != uVar7) break;
    if (uVar5 == 0) {
      return 0;
    }
LAB_1467e90a0:
    lVar1 = lVar1 + 2;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar6 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e90a0;
  }
  if (uVar5 == uVar7) {
    return 0;
  }
  lVar1 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
    uVar4 = (ulonglong)uVar5;
    uVar7 = *(ushort *)((longlong)L"Fatal" + lVar1);
    if (uVar5 != uVar7) break;
    if (uVar5 == 0) goto LAB_1467e930c;
LAB_1467e90f2:
    lVar1 = lVar1 + 2;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar6 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e90f2;
  }
  if (uVar5 != uVar7) {
    lVar1 = 0;
    goto LAB_1467e912b;
  }
LAB_1467e930c:
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
LAB_1467e912b:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Error" + lVar1);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e9144;
    }
    if (uVar5 != uVar7) {
      lVar1 = 0;
      goto LAB_1467e917d;
    }
LAB_1467e9310:
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),2);
  }
  if (uVar5 == 0) goto LAB_1467e9310;
LAB_1467e9144:
  lVar1 = lVar1 + 2;
  goto LAB_1467e912b;
LAB_1467e917d:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Warning" + lVar1);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e9196;
    }
    if (uVar5 != uVar7) {
      lVar1 = 0;
      goto LAB_1467e91cf;
    }
LAB_1467e9314:
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),3);
  }
  if (uVar5 == 0) goto LAB_1467e9314;
LAB_1467e9196:
  lVar1 = lVar1 + 2;
  goto LAB_1467e917d;
LAB_1467e91cf:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Display" + lVar1);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e91e8;
    }
    if (uVar5 != uVar7) {
      lVar1 = 0;
      goto LAB_1467e9221;
    }
LAB_1467e9318:
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),4);
  }
  if (uVar5 == 0) goto LAB_1467e9318;
LAB_1467e91e8:
  lVar1 = lVar1 + 2;
  goto LAB_1467e91cf;
LAB_1467e9221:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)&DAT_149e1b1d8 + lVar1);
  uVar2 = (undefined7)((ulonglong)lVar1 >> 8);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e923a;
    }
    if (uVar5 == uVar7) {
      return CONCAT71(uVar2,5);
    }
    lVar1 = 0;
    goto LAB_1467e9276;
  }
  if (uVar5 == 0) {
    return CONCAT71(uVar2,5);
  }
LAB_1467e923a:
  lVar1 = lVar1 + 2;
  goto LAB_1467e9221;
LAB_1467e9276:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"Verbose" + lVar1);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e928f;
    }
    if (uVar5 != uVar7) {
      lVar1 = 0;
      goto LAB_1467e92c4;
    }
LAB_1467e9320:
    return CONCAT71(uVar2,6);
  }
  if (uVar5 == 0) goto LAB_1467e9320;
LAB_1467e928f:
  lVar1 = lVar1 + 2;
  goto LAB_1467e9276;
LAB_1467e92c4:
  uVar5 = *(ushort *)((longlong)puVar3 + lVar1);
  uVar4 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"VeryVerbose" + lVar1);
  if (uVar5 != uVar7) {
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467e92d9;
    }
    if (uVar5 != uVar7) {
      return CONCAT71(uVar2,5);
    }
LAB_1467e9304:
    return CONCAT71(uVar2,7);
  }
  if (uVar5 == 0) goto LAB_1467e9304;
LAB_1467e92d9:
  lVar1 = lVar1 + 2;
  goto LAB_1467e92c4;
}



// FUNCTION 1467e9324 FUN_1467e9324 body=101 status=ok
// SIG undefined FUN_1467e9324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467e9324(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845068) {
    FUN_144b3d300(&DAT_14c845068);
    if (DAT_14c845068 == -1) {
      DAT_14c845058 = 0;
      _DAT_14c845060 = 0;
      atexit(FUN_14276763c);
      _Init_thread_footer(&DAT_14c845068);
      return;
    }
  }
  return;
}



// FUNCTION 1467e9389 FUN_1467e9389 body=168 status=ok
// SIG undefined FUN_1467e9389(void)

undefined8 FUN_1467e9389(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_1467e9324();
  uVar9 = 0;
  iVar4 = (int)((ulonglong)param_1 >> 0x20);
  uVar8 = DAT_14c845060;
  if (0 < (int)DAT_14c845060) {
    do {
      uVar1 = (uVar8 >> 1) + uVar9;
      iVar7 = *(int *)(DAT_14c845058 + (ulonglong)uVar1 * 0x18) - (int)param_1;
      if (iVar7 == 0) {
        iVar7 = *(int *)(DAT_14c845058 + 4 + (ulonglong)uVar1 * 0x18) - iVar4;
      }
      if (iVar7 < 0) {
        uVar9 = uVar1 + (uVar8 & 1);
      }
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar2);
  }
  if ((int)uVar9 < (int)DAT_14c845060) {
    uVar6 = (ulonglong)uVar9;
    iVar7 = (int)param_1 - *(int *)(DAT_14c845058 + uVar6 * 0x18);
    if (iVar7 == 0) {
      iVar7 = iVar4 - *(int *)(DAT_14c845058 + 4 + uVar6 * 0x18);
    }
    if (-1 < iVar7) {
      lVar5 = DAT_14c845058 + uVar6 * 0x18;
      plVar3 = (longlong *)(lVar5 + 8);
      if ((plVar3 != (longlong *)0x0) && (lVar5 = (longlong)*(int *)(lVar5 + 0x10), 0 < lVar5)) {
        return *(undefined8 *)(*plVar3 + -8 + lVar5 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1467e9432 FUN_1467e9432 body=612 status=ok
// SIG undefined FUN_1467e9432(void)

void FUN_1467e9432(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 uVar12;
  undefined8 unaff_RBX;
  undefined7 uVar14;
  ulonglong uVar13;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_1[1]) {
    lVar20 = param_1[5];
    uVar14 = (undefined7)((ulonglong)unaff_RBX >> 8);
    cVar6 = FUN_144a61b4f();
    uVar12 = (char)lVar20;
    if ((cVar6 != '\0') && (lVar7 = FUN_1467e9389(param_1[4]), lVar7 != 0)) {
      plVar9 = (longlong *)(lVar7 + 8);
      if (*(char *)(lVar7 + 9) == '\0') {
        plVar9 = param_1 + 5;
      }
      uVar12 = (undefined1)*plVar9;
      if ((0 < *(int *)(lVar7 + 0x18)) && ((longlong)(int)param_1[1] != 0)) {
        plVar9 = (longlong *)*param_1;
        plVar21 = plVar9 + (longlong)(int)param_1[1] * 2;
        local_79 = uVar12;
        do {
          uVar15 = *(uint *)(*plVar9 + 0x30);
          local_58 = (undefined8 *)0x0;
          local_4c = 4;
          lVar20 = 0;
          uVar13 = (ulonglong)uVar15;
          while( true ) {
            local_50 = (int)lVar20 + 1;
            if (local_4c < local_50) {
              FUN_1467eec26(&local_68);
            }
            puVar8 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar8 = &local_68;
            }
            *(uint *)((longlong)puVar8 + (longlong)(int)lVar20 * 4) = uVar15;
            uVar3 = *(uint *)(lVar7 + 0x18);
            lVar20 = *(longlong *)(lVar7 + 0x10);
            uVar10 = 0;
            if (0 < (int)uVar3) {
              uVar17 = (ulonglong)uVar3;
              uVar16 = uVar3;
              do {
                uVar17 = uVar17 >> 1;
                uVar19 = (uint)uVar17 + (int)uVar10;
                if (*(int *)(lVar20 + (ulonglong)uVar19 * 8) < (int)uVar15) {
                  uVar10 = (ulonglong)(uVar19 + (uVar16 & 1));
                }
                bVar4 = 1 < uVar16;
                uVar16 = (uint)uVar17;
              } while (bVar4);
            }
            uVar16 = uVar15;
            if ((((int)uVar3 <= (int)uVar10) || ((int)uVar15 < *(int *)(lVar20 + uVar10 * 8))) ||
               (puVar11 = (uint *)(lVar20 + uVar10 * 8 + 4), puVar11 == (uint *)0x0)) break;
            puVar8 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar8 = &local_68;
            }
            lVar20 = (longlong)(int)local_50;
            uVar15 = *puVar11;
            uVar16 = (uint)uVar13;
            if (lVar20 != 0) {
              lVar18 = 0;
              do {
                if (*(uint *)((longlong)puVar8 + lVar18) == uVar15) goto LAB_1467e95b6;
                lVar18 = lVar18 + 4;
              } while (lVar20 * 4 - lVar18 != 0);
            }
            if ((int)uVar16 < (int)uVar15) {
              uVar13 = (ulonglong)uVar15;
            }
          }
LAB_1467e95b6:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (uVar16 != *(uint *)(*plVar9 + 0x30)) {
            FUN_1467e999c(*plVar9,&local_78);
            lVar20 = *plVar9;
            plVar5 = (longlong *)plVar9[1];
            *plVar9 = CONCAT44(uStack_74,local_78);
            plVar9[1] = CONCAT44(uStack_6c,uStack_70);
            local_68._0_4_ = (undefined4)lVar20;
            local_68._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
            uStack_60._0_4_ = SUB84(plVar5,0);
            uStack_60._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
            local_78 = (undefined4)local_68;
            uStack_74 = local_68._4_4_;
            uStack_70 = (undefined4)uStack_60;
            uStack_6c = uStack_60._4_4_;
            local_68 = lVar20;
            uStack_60 = plVar5;
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
            FUN_1467e9a1a(*plVar9,uVar16);
          }
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar21);
        uVar14 = (undefined7)(uVar13 >> 8);
        uVar12 = local_79;
      }
    }
    (**(code **)(*(longlong *)param_1[2] + 0x10))
              ((longlong *)param_1[2],param_1,(uint)CONCAT71(uVar14,uVar12) ^ 1);
    FUN_145ec7255(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1467f31f2(param_1,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467e9698 FUN_1467e9698 body=94 status=ok
// SIG undefined FUN_1467e9698(void)

void FUN_1467e9698(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1467f3144(param_1,iVar2);
  }
  FUN_1467f31c9((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1467e96f6 FUN_1467e96f6 body=669 status=ok
// SIG undefined FUN_1467e96f6(void)

longlong * FUN_1467e96f6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_149e1d310;
  puVar1 = puVar6 + 2;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 4;
  *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar6;
  FUN_1467f3808(param_1,puVar1);
  FUN_1467e9a1a(puVar1,param_2);
  plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e1d3d0;
  plVar2 = plVar7 + 2;
  FUN_1467f3cbc(plVar2,param_2);
  local_70 = plVar2;
  local_68 = plVar7;
  FUN_1467f3dfe(&local_70,plVar2);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_60 = plVar2;
  local_58 = plVar7;
  FUN_1467eb24e(puVar1,local_50,&local_60);
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
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  cVar5 = FUN_144a7c5f6(param_3);
  if (cVar5 == '\0') {
    lVar4 = *param_1;
    plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149e1d330;
    plVar2 = plVar7 + 2;
    FUN_1467f3932(plVar2);
    local_70 = plVar2;
    local_68 = plVar7;
    FUN_1467f3a10(&local_70,plVar2);
    local_60 = local_70;
    local_58 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(lVar4,local_80,&local_60);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)local_78 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_58 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_68 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_68)(local_68);
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467e9994 FUN_1467e9994 body=7 status=ok
// SIG undefined FUN_1467e9994(void)

longlong FUN_1467e9994(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return param_1;
}



// FUNCTION 1467e999c FUN_1467e999c body=126 status=ok
// SIG undefined FUN_1467e999c(void)

longlong * FUN_1467e999c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149e1d310;
  puVar1 = puVar2 + 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 4;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar2;
  FUN_1467f3808(param_2,puVar1);
  FUN_1467eb356(puVar1,param_1);
  return param_2;
}


